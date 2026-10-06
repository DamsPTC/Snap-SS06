/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070fb5b8; end: 1070fb6f7; -[PreviewViewController _saveVoiceoverAssetDataPackageWithCompletion:] */

void FUN_1070fb5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070fb6f8;
  puStack_58 = &UNK_11098ebf8;
  uStack_50 = uVar2;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  func_0x00010be1c600(param_1,param_2,uVar4,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 1070fb6f8; end: 1070fb73b;  */

void FUN_1070fb6f8(long param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010c12b2c0(*(undefined8 *)(param_1 + 0x20),0,8);
  }
  else {
    func_0x00010c28f1a0(*(undefined8 *)(param_1 + 0x20),param_2,param_2,8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001070fb738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1070fb73c; end: 1070fb8db; -[PreviewViewController _genericAssetForVoiceoverAudio:completion:] */

void FUN_1070fb73c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c5d34();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc0ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  if (lVar3 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1070fb8dc;
    puStack_50 = &UNK_110849530;
    lStack_48 = param_4;
    _objc_retain(param_4);
    func_0x000100162d98("APPSTORE",&puStack_68);
    lVar1 = lStack_48;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bfc0cc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    _objc_retain(param_4);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    lVar1 = param_4;
    param_4 = lVar2;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1070fb8dc; end: 1070fb8eb;  */

void FUN_1070fb8dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001070fb8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1070fb8ec; end: 1070fb967;  */

void FUN_1070fb8ec(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070fb968; end: 1070fba83; -[PreviewViewController _genericAssetForSnippetImageData:isAnimated:appAttachment:completion:] */

void FUN_1070fb968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_6);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1070fba08;
  puStack_40 = &UNK_11086f048;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x000107e00924(param_3,param_4,param_5,0,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_6);
  return;
}



/* Entry: 1070fba84; end: 1070fbc07; -[PreviewViewController _convertPreviewBlobIntoGallerySnapOverlay:contentViewSize:] */

void FUN_1070fba84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  
  uVar2 = param_5;
  _objc_retain(param_5);
  func_0x000109175a2c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010be20760();
  uVar9 = 0xffffffff937963cb;
  if ((int)uVar3 != 2) {
    uVar9 = 0;
  }
  uVar1 = 0xffffffffae79c325;
  if ((int)uVar3 != 1) {
    uVar1 = uVar9;
  }
  uVar9 = uVar2;
  func_0x00010c2946e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf85f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2542a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x000108087e10(param_1,param_2,param_5,uVar4,uVar7,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1070fbc08; end: 1070fbc6b; -[PreviewViewController _previewBlizzardLogger] */

void FUN_1070fbc08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1070fbc6c; end: 1070fbce7; -[PreviewViewController _memoriesSavingLogger] */

void FUN_1070fbc6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070fbce8; end: 1070fbd63; -[PreviewViewController _memoriesCachingMediaManager] */

void FUN_1070fbce8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5a64();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070fbd64; end: 1070fbddf; -[PreviewViewController _memoriesUserDefaultsManager] */

void FUN_1070fbd64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ca000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1070fbde0; end: 1070fbf87; -[PreviewViewController _showExternalShareSheetWithSavingSucceeded:] */

void FUN_1070fbde0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c242400();
    _objc_release(lVar1);
    if (lVar2 == 8) {
      lVar1 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001070c5434();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e1880();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c252560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c233740();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showExternalShareSheet_11258bdb8);
        return;
      }
      lVar1 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x0001070c5434();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e1880();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c252560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c234220();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSendOrExportTooltip_11258c4c8);
        return;
      }
    }
  }
  return;
}



/* Entry: 1070fbf88; end: 1070fc7b3; -[PreviewViewController _showExternalShareSheet] */

void FUN_1070fbf88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_5;
  func_0x00010c072700();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c1b0d00(param_5);
    _objc_initWeak(auStack_c8,param_5);
    puVar1 = param_5;
    func_0x00010c15d200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1070fc7b4;
    puStack_d8 = &UNK_11085a988;
    _objc_copyWeak(auStack_d0,auStack_c8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    dVar16 = 1.02270250269256e-312;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_1070ced0c;
    uStack_100 = 0x1070ced1c;
    uStack_f8 = 0;
    puVar3 = PTR_PTR_1126af4a8;
    _objc_alloc();
    _objc_copyWeak(auStack_128,auStack_c8);
    func_0x00010c0311a0();
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar5 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    puVar6 = param_5;
    dVar17 = dVar16;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    dVar18 = dVar17;
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar8 = param_5;
    func_0x00010c1122a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(dVar18,param_2,param_3,param_4,puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x000108ec1954();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if ((int)puVar8 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar5 = param_5;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined1 *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar6;
        func_0x00010c0c7f00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined1 *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar9 = puVar5;
          func_0x00010c09da80();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar6;
          puStack_b0 = puVar9;
          func_0x00010c0c7f00();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          puStack_a8 = puVar10;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      puVar14 = PTR_PTR_1126b2498;
      _objc_alloc(PTR_PTR_1126b2498);
      if (puVar5 == (undefined1 *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_b8 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c037ea0(puVar14);
      if (puVar5 != (undefined1 *)0x0) {
        _objc_release(puVar13);
      }
      _objc_release(puVar15);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    puVar15 = PTR_PTR_1126b24a0;
    _objc_alloc();
    puVar13 = puVar15;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971a0(dVar18,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0616c0(dVar16 - dVar17,puVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar13);
    puVar5 = param_5;
    func_0x00010c24d7a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620();
    _objc_release(puVar5);
    puVar5 = param_5;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c27aec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar6 == (undefined1 *)0x0) {
      puVar13 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x00010c050900();
      puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c013de0(dVar18,param_2,param_3,param_4);
      puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar11);
      _objc_release(puVar12);
      func_0x00010bef9040(puVar11);
      puVar5 = param_5;
      func_0x00010c1122a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219c40();
      _objc_release(puVar5);
      puVar5 = param_5;
      func_0x00010c1122a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_5;
      func_0x00010c1122a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27aec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1122a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_5;
      func_0x00010c14a0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(puVar5);
      _objc_release(puVar8);
      _objc_release(param_5);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar13);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_128);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar1);
    puVar1 = auStack_c8;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  __Block_object_dispose(&uStack_120,8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  puVar5 = puVar1;
  func_0x00010c15d220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1070fc7b4; end: 1070fc7f3;  */

void FUN_1070fc7b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c15d220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1070fc7f4; end: 1070fc87f;  */

void FUN_1070fc7f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070fc880; end: 1070fc88f;  */

void FUN_1070fc880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1070fc890; end: 1070fc94b; -[PreviewViewController _removeTransparentExternalShareSheetPopUpView] */

void FUN_1070fc890(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27aec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27aec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1070fc94c; end: 1070fca9f; -[PreviewViewController _isSavedTooptipEnabled] */

uint FUN_1070fc94c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5434();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e1880();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c233740();
  if ((uVar6 & 1) == 0) {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x0001070c5434();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e1880();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c252560();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c234220();
    uVar11 = (uint)uVar10 ^ 1;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
  }
  else {
    uVar11 = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar11;
}



/* Entry: 1070fcaa0; end: 1070fcbcb; -[PreviewViewController _showSendOrExportTooltip] */

void FUN_1070fcaa0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c273f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107172ddc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a8c0(0xc028000000000000,0x3ff999999999999a,lVar3,param_2,lVar4,lVar5,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1070fcbcc; end: 1070fcc5b; -[PreviewViewController _shouldSaveWithSnapDoc] */

bool FUN_1070fcbcc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010be44a20();
  if ((uVar2 & 1) == 0) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf30e80();
    bVar1 = (int)uVar4 == 2;
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1070fcc5c; end: 1070fce1f; -[PreviewViewController snapExternalMetadata] */

void FUN_1070fcc5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd61a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar4 = PTR_PTR_1126d4c20;
      _objc_opt_new(PTR_PTR_1126d4c20);
      puVar5 = PTR_PTR_1126b00c0;
      _objc_opt_new(PTR_PTR_1126b00c0);
      lVar1 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c09a7a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0b4ca0();
      func_0x00010c1a99c0(puVar5,param_2,lVar6);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c180860(puVar5,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      func_0x00010c1ba8a0(puVar4,param_2,puVar5);
      puVar7 = puVar4;
      func_0x00010bf63640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_1070fce08;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_1070fce08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1070fce20; end: 1070fce27; -[PreviewViewController handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_1070fce20(void)

{
  return 0;
}



/* Entry: 1070fce28; end: 1070fce6f; -[PreviewViewController shareSheetDismissedWithShareDestination:] */

void FUN_1070fce28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c24d7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b0d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsExternalShareSheetPresented_112649d68,0)
  ;
  return;
}



/* Entry: 1070fce70; end: 1070fcf03; -[PreviewViewController _isAnimatedLensSaveEnabled] */

undefined8 FUN_1070fce70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5794();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf036e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1070fcf04; end: 1070fcf8b; -[PreviewViewController _transcodeImageToVideoAndMergeAssetsWithContext:completion:] */

void FUN_1070fcf04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1070fcf8c;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 1070fcf8c; end: 1070fd097;  */

void FUN_1070fcf8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be1f740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4bf8;
  _objc_alloc_init(PTR_PTR_1126d4bf8);
  func_0x00010c0d7160();
  func_0x00010c1af2a0(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf9d440();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1070fd098;
  puStack_58 = &UNK_11098ec58;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uStack_50 = uVar1;
  uStack_48 = uVar5;
  _objc_retain(uVar1);
  func_0x00010c29a0e0(uVar4,param_2,puVar2,&puStack_70);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 1070fd098; end: 1070fd12f;  */

void FUN_1070fd098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bfae700(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1070fd130; end: 1070fd2fb;  */

void FUN_1070fd130(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,0,0);
    }
  }
  else {
    lVar7 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if ((puVar1 == (undefined *)0x0) ||
       (puVar2 = puVar1, func_0x00010c08fa60(), puVar2 == (undefined *)0x0)) {
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,0,0);
      }
    }
    else {
      puVar3 = PTR_PTR_1126c4d00;
      _objc_alloc(PTR_PTR_1126c4d00);
      func_0x00010bff4360();
      puVar4 = PTR_PTR_1126c4ba8;
      func_0x00010bf0b0e0(PTR_PTR_1126c4ba8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126cb710;
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad940(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0d3c80();
      _objc_release(puVar2);
      _objc_release(puVar5);
      func_0x00010c1d0640(puVar6);
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,1,puVar6);
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070fd2fc; end: 1070fd5ab; -[PreviewViewController _transcodeAndSaveAnimatedImageSnapWithPreviewBlob:sojuMediaType:overlayFormat:gallerySnapOverlay:captureTimeUtc:currentTime:location:isPrivate:gallerySavingEventId:captureSessionId:entrySource:completionHandler:shouldSaveToCameraRollConcurrently:saveSessionId:] */

void FUN_1070fd2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18)

{
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_15);
  _objc_retain(param_3);
  uStack_78 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uStack_74 = param_10;
  _objc_retain(param_12);
  _objc_retain(param_13);
  uStack_80 = param_14;
  uStack_73 = param_16;
  _objc_retain(param_18);
  func_0x00010bece640(param_1);
  _objc_release(param_18);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_15);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1070fd5ac; end: 1070fd74f;  */

void FUN_1070fd5ac(long param_1,int param_2,undefined *param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = (undefined *)(param_1 + 0x70);
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110ea0478;
    uVar7 = 0xffffffff;
    puVar8 = puVar3;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 != 0) {
      ppuVar6 = (undefined **)0x0;
      uVar7 = 0;
      puVar8 = puVar4;
      (**(code **)(lVar5 + 0x10))(lVar5,0);
    }
  }
  else {
    if ((param_2 == 0) || (param_3 == (undefined *)0x0)) {
      puVar4 = puVar2;
      func_0x00010be1f740();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      puVar4 = param_3;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x80);
    ppuVar6 = *(undefined ***)(param_1 + 0x20);
    puVar8 = *(undefined **)(param_1 + 0x28);
    param_6 = *(undefined8 *)(param_1 + 0x30);
    param_7 = *(undefined8 *)(param_1 + 0x38);
    param_8 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_98 = *(undefined1 *)(param_1 + 0x84);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    uStack_68 = *(undefined1 *)(param_1 + 0x85);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010be99280(puVar2);
    puStack_78 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(puVar8);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_a0);
  _objc_retain(uStack_90);
  _objc_retain(uStack_88);
  _objc_retain(puStack_78);
  _objc_retain(uStack_70);
  _objc_retain(uStack_60);
  puVar2 = puStack_78;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea00d8;
  if (puVar2 != (undefined *)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea04b8;
  }
  _objc_retain(ppuVar1);
  _objc_release(puVar2);
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1070fda3c;
  puStack_188 = &UNK_11098ecb8;
  puStack_150 = puStack_78;
  uStack_148 = uStack_a0;
  uStack_10c = uStack_98;
  uStack_138 = uStack_90;
  uStack_120 = uStack_70;
  uStack_118 = uStack_80;
  uStack_10b = uStack_68;
  uStack_130 = uStack_88;
  uStack_128 = uStack_60;
  puStack_180 = param_3;
  ppuStack_178 = ppuVar6;
  uStack_170 = param_7;
  uStack_168 = param_8;
  puStack_160 = puVar8;
  uStack_158 = param_6;
  ppuStack_140 = ppuVar1;
  uStack_110 = uVar7;
  _objc_retain();
  _objc_retain(uStack_70);
  _objc_retain(uStack_88);
  _objc_retain(uStack_90);
  _objc_retain(ppuVar1);
  _objc_retain(uStack_a0);
  _objc_retain(puStack_78);
  _objc_retain(param_6);
  _objc_retain(puVar8);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(ppuVar6);
  func_0x000100162d98("APPSTORE",&puStack_1a0);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(ppuStack_140);
  _objc_release(uStack_148);
  _objc_release(puStack_150);
  _objc_release(uStack_158);
  _objc_release(puStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(ppuStack_178);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(ppuVar1);
  _objc_release(uStack_a0);
  _objc_release(puStack_78);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar6);
  return;
}



/* Entry: 1070fd750; end: 1070fda3b; -[PreviewViewController _saveImageSnap:sojuMediaType:overlayFormat:gallerySnapOverlay:captureTimeUtc:currentTime:location:isPrivate:gallerySavingEventId:captureSessionId:entrySource:assetMedias:completionHandler:shouldSaveToCameraRollConcurrently:saveSessionId:] */

void FUN_1070fd750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  lVar2 = param_15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea00d8;
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ea04b8;
  }
  _objc_retain(ppuVar1);
  _objc_release(lVar2);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1070fda3c;
  puStack_e8 = &UNK_11098ecb8;
  lStack_b0 = param_15;
  uStack_a8 = param_9;
  uStack_6c = param_10;
  uStack_98 = param_12;
  uStack_80 = param_16;
  uStack_78 = param_14;
  uStack_6b = param_17;
  uStack_90 = param_13;
  uStack_88 = param_19;
  uStack_e0 = param_1;
  uStack_d8 = param_3;
  uStack_d0 = param_7;
  uStack_c8 = param_8;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  ppuStack_a0 = ppuVar1;
  uStack_70 = param_4;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(ppuVar1);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_100);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(ppuStack_a0);
  _objc_release(uStack_a8);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(ppuVar1);
  _objc_release(param_9);
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 1070fda3c; end: 1070fdd07;  */

void FUN_1070fda3c(undefined8 param_1,long param_2)

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
  undefined *puVar10;
  undefined *puVar11;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befb6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf61e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0xffffffffa9fc90cc;
  func_0x00010b77c6b4(0xffffffffa9fc90cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5ae0();
  func_0x00010c0c4ba0(*(undefined8 *)(param_2 + 0x28));
  func_0x00010bfed740();
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbabe0();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c240ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  func_0x00010be20760();
  func_0x00010befa840(param_1,uVar4);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(char *)(param_2 + 0x95) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be99b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s__saveSnapToSnapAlbumWithSaveSess_112584080,
               *(undefined8 *)(param_2 + 0x78),0,0);
    return;
  }
  return;
}



/* Entry: 1070fdd08; end: 1070fdefb; -[PreviewViewController _replaceImageSnap:previewBlob:originalSnapCloudFile:entry:overlayFormat:gallerySnapOverlay:userContext:hasAnimatedContent:completionHandler:] */

void FUN_1070fdd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10,undefined4 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1070fdefc;
  puStack_b0 = &UNK_11098ece8;
  uStack_70 = param_9;
  uStack_68 = param_12;
  uStack_a8 = param_4;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  if (param_10 == '\0') {
    (*(code *)ppuVar1[2])(ppuVar1,0,0);
  }
  else {
    func_0x00010bece640(param_1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1070fdefc; end: 1070fe05b;  */

void FUN_1070fdefc(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1070fe05c;
  puStack_a0 = &UNK_11094d800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar2;
  uStack_88 = param_3;
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_b8);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(param_3);
  return;
}



/* Entry: 1070fe05c; end: 1070fe4cb;  */

void FUN_1070fe05c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
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
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf008e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010be1f740();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cb710;
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_3,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad960(puVar7,param_3,puVar6,uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c0e00e0(puVar7,param_3,&PTR____CFConstantStringClassReference_110ea04d8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0e00e0(puVar7,param_3,&PTR____CFConstantStringClassReference_110ea04f8);
  _objc_retainAutoreleasedReturnValue();
  if ((*(char *)(param_2 + 0x70) == '\x01') &&
     (puVar24 = *(undefined **)(param_2 + 0x30), puVar24 != (undefined *)0x0)) {
    _objc_retain(puVar24);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(puVar24);
    puVar10 = puVar24;
    func_0x00010bf52a60(puVar24,param_3,&uStack_140,auStack_100,0x10);
    if (puVar10 != (undefined *)0x0) {
      lVar22 = *plStack_130;
      do {
        puVar23 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar22) {
            _objc_enumerationMutation(puVar24);
          }
          uVar3 = *(undefined8 *)(lStack_138 + (long)puVar23 * 8);
          func_0x00010c067ec0();
          if ((uint)uVar3 < 0x16) {
            func_0x00010b697928();
          }
          else {
            uVar3 = 0xfffffffffbadbeef;
          }
          func_0x00010b697c6c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9,param_3,uVar3);
          _objc_release(uVar3);
          puVar23 = puVar23 + 1;
        } while (puVar10 != puVar23);
        puVar10 = puVar24;
        func_0x00010bf52a60(puVar24,param_3,&uStack_140,auStack_100,0x10);
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar24);
  }
  else {
    _objc_retain(puVar8);
    _objc_retain(puVar6);
    puVar24 = puVar8;
    puVar9 = puVar6;
  }
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(uVar11);
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x0001070c5a88();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf8c440();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  uVar21 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c0c4ba0(*(undefined8 *)(param_2 + 0x20));
  uVar20 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfed740(uVar20);
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1070fe4cc;
  puStack_150 = &UNK_1108dd178;
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  _objc_retain(uVar1);
  uStack_148 = uVar1;
  func_0x00010c131040(param_1,uVar19,param_3,uVar3,lVar2,uVar14,uVar21,uVar20,uVar12,uVar11,puVar9,
                      puVar24,uVar13,uVar15,&puStack_168);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uStack_148);
  _objc_release(uVar15);
  _objc_release(puVar9);
  _objc_release(puVar24);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001070fe4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1070fe4cc; end: 1070fe4df;  */

void FUN_1070fe4cc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001070fe4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1070fe4e0; end: 1070fe6a3; +[PreviewViewController filterAssetMediasByExcludingTypes:fromAssetMedias:] */

void FUN_1070fe4e0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 *puVar11;
  undefined *unaff_x24;
  ulong unaff_x25;
  undefined8 uVar12;
  long unaff_x26;
  undefined **unaff_x27;
  undefined *unaff_x28;
  long lVar13;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined *puStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar9 = auStack_f0;
  lVar10 = 0x10;
  puVar2 = param_4;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + (long)unaff_x28 * 8);
        uVar8 = unaff_x23;
        func_0x00010c067ec0();
        if ((uint)uVar8 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar8 = 0xfffffffffbadbeef;
        }
        unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_3;
        func_0x00010bf4b900(param_3,param_2,unaff_x24);
        _objc_release(unaff_x24);
        if ((unaff_x25 & 1) == 0) {
          unaff_x24 = param_4;
          func_0x00010c0e00e0(param_4,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,unaff_x24,unaff_x23);
          _objc_release(unaff_x24);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar2 != unaff_x28);
      puVar9 = auStack_f0;
      lVar10 = 0x10;
      puVar2 = param_4;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1070fe6a4;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    uStack_160 = unaff_x22;
    puStack_158 = puVar1;
    puStack_150 = param_4;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    _objc_retain(lVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    _objc_retain(puVar9);
    puVar4 = puVar9;
    func_0x00010bf52a60(puVar9,param_2,&uStack_280,auStack_220,0x10);
    if (puVar4 != (undefined1 *)0x0) {
      lVar13 = *plStack_270;
      do {
        puVar11 = (undefined1 *)0x0;
        do {
          if (*plStack_270 != lVar13) {
            _objc_enumerationMutation(puVar9);
          }
          uVar12 = *(undefined8 *)(lStack_278 + (long)puVar11 * 8);
          uVar8 = uVar12;
          func_0x00010bf0b760();
          if ((uint)uVar8 < 0x16) {
            func_0x00010b697928();
          }
          else {
            uVar8 = 0xfffffffffbadbeef;
          }
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = (undefined1 *)puVar7;
          func_0x00010bf4b900(puVar7,param_2,puVar1);
          _objc_release(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (((ulong)puVar5 & 1) == 0) {
            uVar8 = uVar12;
            func_0x00010bf0b760(uVar12);
            func_0x00010c0df760(puVar1,param_2,uVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar10;
            func_0x00010c0e00e0(lVar10,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 != 0) {
              func_0x00010befa120(puVar2,param_2,uVar12);
              lVar6 = lVar10;
              func_0x00010c0e00e0(lVar10,param_2,puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3,param_2,lVar6,puVar1);
              _objc_release(lVar6);
            }
            _objc_release(puVar1);
          }
          puVar11 = puVar11 + 1;
        } while (puVar4 != puVar11);
        puVar4 = puVar9;
        func_0x00010bf52a60(puVar9,param_2,&uStack_280,auStack_220,0x10);
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puVar9);
    ppuStack_240 = &PTR____CFConstantStringClassReference_110ea04d8;
    ppuStack_238 = &PTR____CFConstantStringClassReference_110ea04f8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_230 = puVar2;
    puStack_228 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_230,&ppuStack_240,
                        2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf09e40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4b900();
      uRam00000001136ca058 = SUB81(puVar3,0);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070fe6a4; end: 1070fe93b; +[PreviewViewController filterAssetsByExcludingTypes:fromSnapAssets:assetMedias:] */

void FUN_1070fe6a4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_150,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        uVar9 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        uVar7 = uVar9;
        func_0x00010bf0b760();
        if ((uint)uVar7 < 0x16) {
          func_0x00010b697928();
        }
        else {
          uVar7 = 0xfffffffffbadbeef;
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010bf4b900(param_3,param_2,puVar4);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar9;
          func_0x00010bf0b760(uVar9);
          func_0x00010c0df760(puVar4,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_5;
          func_0x00010c0e00e0(param_5,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar6 != 0) {
            func_0x00010befa120(puVar1,param_2,uVar9);
            lVar6 = param_5;
            func_0x00010c0e00e0(param_5,param_2,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2,param_2,lVar6,puVar4);
            _objc_release(lVar6);
          }
          _objc_release(puVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_150,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ea04d8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ea04f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar1;
  puStack_f8 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_100,&ppuStack_110,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4b900();
  uRam00000001136ca058 = SUB81(puVar4,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070fe93c; end: 1070fe99b;  */

void FUN_1070fe93c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  uRam00000001136ca058 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070fe99c; end: 1070fed4b; -[PreviewViewController saveUCOAssetDataPackageWithCompletion:] */

void FUN_1070fe99c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bebd320();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
    goto LAB_1070fed08;
  }
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c094ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c077380();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf5ce40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c07c2e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c06bcc0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0f7f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c079d60();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010befeb60();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c112180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27ea60();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bfc0d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar7);
  _objc_release(uVar1);
  if (((((uVar3 & 1) == 0) && ((uVar9 & 1) == 0)) && ((uVar4 & 1) == 0)) &&
     ((((uVar5 & 1) == 0 && ((uVar8 & 1) == 0)) && ((uVar6 & 1) == 0)))) {
    func_0x00010c1111c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b2c0();
    _objc_release(uVar1);
    _objc_release(param_1);
LAB_1070fecf4:
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar1 = param_1;
    func_0x00010be44d60();
    if ((((uint)(uVar10 == 0) | (uint)uVar1 | (uint)uVar4 | (uint)uVar6) & 1) == 0)
    goto LAB_1070fecf4;
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010be1f700(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar2);
LAB_1070fed08:
  _objc_release(param_3);
  return;
}



/* Entry: 1070fed4c; end: 1070fee87;  */

void FUN_1070fed4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1070fee0c;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1070fee88; end: 1070feee3; -[PreviewViewController _isSpectaclesUCO] */

undefined8 FUN_1070fee88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e820();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1070feee4; end: 1070fef6f; -[PreviewViewController _snapSupportsUCORawMediaAssets] */

ulong FUN_1070feee4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075080();
  if (((((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c083340(), (int)uVar2 == 0)) ||
      (uVar2 = uVar1, func_0x00010c070a20(), (uVar2 & 1) != 0)) ||
     (uVar2 = uVar1, func_0x00010c0811c0(), (uVar2 & 1) != 0)) {
    param_1 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c07e940();
    if ((int)uVar2 == 0) {
      param_1 = 1;
    }
    else {
      func_0x00010be43f00(param_1);
    }
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1070fef70; end: 1070ff023; -[PreviewViewController _getGenericAssetForOriginalMediaWithCompletion:] */

void FUN_1070fef70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075080();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c083340();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      func_0x00010be1f720(param_1);
    }
  }
  else {
    func_0x00010be1f6e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070ff024; end: 1070ff163; -[PreviewViewController removeUcoGenericAssetsDataPackages] */

void FUN_1070ff024(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  undefined **ppuVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111181598;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar6 = *plStack_120;
    unaff_x20 = &PTR__OBJC_CLASS___NSConstantArray_111181598;
    do {
      ppuVar7 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111181598);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + (long)ppuVar7 * 8);
        uVar2 = param_1;
        func_0x00010c1111c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c127e00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0(unaff_x22);
        func_0x00010c12b2c0(uVar3);
        _objc_release(uVar3);
        _objc_release(uVar2);
        ppuVar7 = (undefined **)((long)ppuVar7 + 1);
      } while (ppuVar1 != ppuVar7);
      ppuVar1 = unaff_x20;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  uVar2 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1070ff164;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  ppuStack_150 = unaff_x20;
  uStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_initWeak(auStack_168,uVar2);
  puVar4 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(puVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar5);
  return;
}



/* Entry: 1070ff164; end: 1070ff267; -[PreviewViewController _getGenericAssetForOriginalImageWithCompletion:] */

void FUN_1070ff164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ff268; end: 1070ff63b;  */

void FUN_1070ff268(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined4 uStack_84;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    goto LAB_1070ff464;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001070c5bf0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c094ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c077380();
  lVar26 = lVar1;
  if ((uVar6 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010befec80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c06bcc0();
    if ((uVar10 & 1) != 0) {
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      goto LAB_1070ff354;
    }
    uVar14 = *(ulong *)(param_1 + 0x20);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar14;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar10;
    func_0x00010c0f7f60();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c079d60();
    if ((uVar17 & 1) == 0) {
      uVar18 = *(ulong *)(param_1 + 0x20);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar18;
      func_0x0001070c5bf0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar17;
      func_0x00010bf5ce40();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c07c2e0();
      if ((uVar21 & 1) == 0) {
        uVar22 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = uVar22;
        func_0x00010c23fc40();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar23;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar24;
        func_0x00010befeb60();
        uStack_84 = (uint)uVar25;
        _objc_release(uVar24);
        _objc_release(uVar23);
        _objc_release(uVar22);
      }
      else {
        uStack_84 = 1;
      }
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar17);
      _objc_release(uVar18);
    }
    else {
      uStack_84 = 1;
    }
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uStack_84 & 1) != 0) goto LAB_1070ff374;
    func_0x00010bf46560(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar26;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1070ff354:
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
LAB_1070ff374:
    func_0x00010bfa3600(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar26;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar12;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar11);
  }
  _objc_release(lVar26);
  lVar26 = lVar1;
  func_0x00010bfa3600(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar26;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfc0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar26);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar13);
  _objc_release(lVar13);
  _objc_release(lVar27);
LAB_1070ff464:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070ff63c; end: 1070ff72f; -[PreviewViewController _isTrimmedByVideoPlaybackControls] */

uint FUN_1070ff63c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = param_1;
  func_0x00010bfd54a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c29a9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c29a9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c0818c0(uVar2);
    uVar4 = uVar3;
    func_0x00010c0818a0();
    uVar5 = 0;
    if ((int)uVar4 != 0) {
      uVar4 = uVar3;
      func_0x00010c0778e0(uVar3);
      uVar5 = (uint)uVar4;
    }
    uVar5 = (uint)uVar1 | uVar5;
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 1;
  }
  return uVar5 & 1;
}



/* Entry: 1070ff730; end: 1070ff803; -[PreviewViewController _getGenericAssetForOriginalVideoWithCompletion:] */

void FUN_1070ff730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be1f760(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ff804; end: 1070ff8ef;  */

void FUN_1070ff804(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfa3600(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27e760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfc0da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar5);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ff8f0; end: 1070ff9df; -[PreviewViewController _getGenericAssetOriginalVideoDataWithCompletion:] */

void FUN_1070ff8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be44d60();
  if ((int)uVar1 == 0) {
    func_0x00010be21380(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be23820(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1070ff9e0; end: 1070ffa63;  */

void FUN_1070ff9e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar3 + 0x10);
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x00010be21380(lVar1);
      goto LAB_1070ffa48;
    }
    pcVar4 = *(code **)(lVar3 + 0x10);
    lVar2 = param_2;
  }
  (*pcVar4)(lVar3,lVar2,0);
LAB_1070ffa48:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ffa64; end: 1070ffb67; -[PreviewViewController _getOriginalVideoDataWithCompletion:] */

void FUN_1070ffa64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0(PTR_PTR_1126ae790);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ffb68; end: 1070ffc4f;  */

void FUN_1070ffb68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  else {
    lVar4 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf12b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar4);
    if (lVar3 == 0) {
      lVar4 = lVar1;
      func_0x00010bed1060(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070ffc50; end: 1070ffd6b; -[PreviewViewController _getTrimmedOriginalVideoWithCompletion:] */

void FUN_1070ffc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae790;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ffd6c; end: 1071002b7;  */

void FUN_1070ffd6c(long param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uStack_f0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (ppuVar2 == (undefined **)0x0) {
    param_2 = 0;
    ppuVar11 = (undefined **)0x0;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0);
    goto LAB_107100274;
  }
  ppuVar11 = ppuVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  func_0x00010bf12b80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0d9500();
  _objc_release(ppuVar3);
  _objc_release(ppuVar11);
  if (ppuVar4 == (undefined **)0x0) {
    lVar12 = *(long *)(param_1 + 0x30);
    ppuVar3 = ppuVar2;
    func_0x00010bed1060();
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    ppuVar11 = ppuVar3;
    (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar3);
  }
  else {
    ppuVar11 = ppuVar2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar11;
    func_0x00010c29a9c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar2;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar11;
    func_0x00010c29a9a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar11);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd54a0();
    if (iVar1 == 0) {
      ppuVar11 = ppuVar6;
      func_0x00010c0818c0();
      if ((int)ppuVar11 == 0) {
        ppuVar11 = ppuVar3;
        func_0x00010c100500();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar11 = ppuVar6;
        func_0x00010c27c960();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar5 = ppuVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar5 == (undefined **)0x0) {
        uVar15 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_b0,ppuVar5);
        uVar15 = uStack_a8._4_4_;
      }
      lVar14 = lStack_88;
      uStack_f0 = uStack_90;
      lVar12 = lStack_98;
      uVar16 = uStack_a0;
      uStack_80 = uStack_b0;
      uStack_78 = (undefined4)uStack_a8;
      _objc_release(ppuVar5);
    }
    else {
      ppuVar5 = ppuVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar5);
      if (ppuVar11 == (undefined **)0x0) {
        uStack_a8._4_4_ = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        func_0x00010c27c900(&uStack_b0,ppuVar11);
      }
      uStack_80 = uStack_b0;
      uStack_78 = (undefined4)uStack_a8;
      uVar16 = uStack_a0;
      lVar12 = lStack_98;
      lVar14 = lStack_88;
      uVar15 = uStack_a8._4_4_;
      uStack_f0 = uStack_90;
    }
    _objc_release(ppuVar11);
    if ((uVar15 & 1) == 0) {
LAB_107100060:
      lVar12 = *(long *)(param_1 + 0x30);
      ppuVar8 = ppuVar2;
      func_0x00010bed1060();
      _objc_retainAutoreleasedReturnValue();
      param_2 = 0;
      ppuVar11 = ppuVar8;
      (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar8);
    }
    else {
      if ((((uStack_f0 & 0x100000000) == 0) || (lVar14 != 0)) || (lVar12 < 0)) goto LAB_107100060;
      ppuVar11 = ppuVar2;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar11;
      func_0x0001070c5410();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar5;
      func_0x00010c29a4c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar5);
      _objc_release(ppuVar11);
      ppuVar5 = ppuVar2;
      if (ppuVar8 == (undefined **)0x0) {
        lVar12 = *(long *)(param_1 + 0x30);
        func_0x00010bed1060(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        param_2 = 0;
        ppuVar11 = ppuVar5;
        (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar5);
      }
      else {
        func_0x00010be5c720(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar5;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        uStack_b0 = uStack_80;
        uStack_a8 = CONCAT44(uVar15,uStack_78);
        uStack_90 = uStack_f0;
        lStack_88 = 0;
        ppuVar7 = ppuVar8;
        uStack_a0 = uVar16;
        lStack_98 = lVar12;
        func_0x00010bf9d400(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        ppuVar9 = ppuVar7;
        func_0x00010bfbc3e0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_1071002b8;
        puStack_c0 = &UNK_110952800;
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar16);
        ppuVar11 = &puStack_d8;
        uStack_b8 = uVar16;
        func_0x00010c297260(ppuVar9);
        _objc_release(ppuVar9);
        _objc_release(uStack_b8);
        _objc_release(ppuVar7);
      }
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar4);
LAB_107100274:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar11);
  lVar12 = param_2;
  func_0x00010bf9d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar13 = (undefined *)0x0;
  if (lVar12 != 0) {
    lVar12 = param_2;
    func_0x00010bf9d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d620(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    puVar13 = puVar10;
  }
  (**(code **)(ppuVar2[4] + 0x10))(ppuVar2[4],puVar13,ppuVar11);
  _objc_release(puVar13);
  _objc_release(ppuVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071002b8; end: 10710037f;  */

void FUN_1071002b8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf9d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar3 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf9d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d620(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = puVar2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar3,param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107100380; end: 10710039b; -[PreviewViewController _makeVideoExportLogger:] */

void FUN_107100380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf165b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_basicLoggerWithImportLoggingBloc_1125a3310,0,
             &PTR___NSConcreteGlobalBlock_11098ed68,0);
  return;
}



/* Entry: 10710039c; end: 1071003b7; -[PreviewViewController _unexpectedErrorWithDescription:] */

void FUN_10710039c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110ea0558,param_3,0);
  return;
}



/* Entry: 1071003b8; end: 107100433; -[PreviewViewController _isUnexpectedError:] */

bool FUN_1071003b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bf3ec40(param_3);
    bVar1 = lVar3 == 0;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107100434; end: 10710068f; -[SCPreviewGalleryPrepareSavedMediaEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107100434(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126d4c28;
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112764394;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar7;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112764398;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar8;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127643a0;
    _objc_loadWeakRetained(lVar12);
  }
  lVar4 = lVar12;
  func_0x00010c0c84c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127643a4;
    _objc_loadWeakRetained(lVar13);
  }
  lVar5 = lVar13;
  func_0x00010bfa2b80(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11276439c;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010beec300(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020f40(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6);
  lVar10 = (long)_DAT_11276438c;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_112764390;
  _objc_loadWeakRetained(lVar7);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  lVar2 = lVar7;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf44140(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf440c0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf580(uVar9,param_2,lVar2,lVar8,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 107100690; end: 107100707; -[SCPreviewGalleryPrepareSavedMediaEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107100690(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127643a4);
  _objc_destroyWeak(param_1 + _DAT_1127643a0);
  _objc_destroyWeak(param_1 + _DAT_11276439c);
  _objc_destroyWeak(param_1 + _DAT_112764398);
  _objc_destroyWeak(param_1 + _DAT_112764394);
  _objc_destroyWeak(param_1 + _DAT_112764390);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276438c,0);
  return;
}



/* Entry: 107100708; end: 1071007d7; -[SCPreviewGalleryPrepareSavedMediaScope initWithVideoPreviewProvider:completionQueue:completionHandler:] */

undefined1 *
FUN_107100708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071007d8; end: 1071007df; -[SCPreviewGalleryPrepareSavedMediaScope videoProvider] */

undefined8 FUN_1071007d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1071007e0; end: 1071007e7; -[SCPreviewGalleryPrepareSavedMediaScope completionQueue] */

undefined8 FUN_1071007e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071007e8; end: 1071007ef; -[SCPreviewGalleryPrepareSavedMediaScope completionHandler] */

undefined8 FUN_1071007e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071007f0; end: 10710082b; -[SCPreviewGalleryPrepareSavedMediaScope .cxx_destruct] */

void FUN_1071007f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10710082c; end: 1071009b7; -[SCPreviewGallerySavedMediaGenerator initWithKeyService:encryptedContentManager:memoriesCloudFS:featureSettingsService:previewABProvider:] */

undefined1 *
FUN_10710082c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f8a40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071009b8; end: 107100a9b; -[SCPreviewGallerySavedMediaGenerator generateGallerySavedMediaForVideo:queue:completionHandler:] */

void FUN_1071009b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107100a9c;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107100a9c; end: 107100f77;  */

void FUN_107100a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27a620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010c0d9500();
  uVar5 = uVar3;
  func_0x00010bfad160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = 0;
  uVar7 = uVar4;
  func_0x00010b5fd188(uVar4,uVar5,1,0,&uStack_68);
  uVar2 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((uVar7 & 1) == 0) {
    func_0x00010be0e1e0(*(undefined8 *)(param_1 + 0x20));
    goto LAB_107100f48;
  }
  uVar8 = uVar3;
  func_0x00010bfad160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = uVar2;
  func_0x00010bf64ae0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uStack_70;
  _objc_retain(uStack_70);
  _objc_release(uVar2);
  _objc_release(uVar8);
  func_0x00010c11bda0(uVar3);
  uVar7 = *(ulong *)(param_1 + 0x20);
  func_0x00010be70860();
  if ((uVar7 & 1) == 0) {
    func_0x00010be0e1e0();
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bfbd540();
    _objc_release(uVar8);
    lStack_80 = 0;
    lStack_78 = 0;
    func_0x00010c156d40(PTR_PTR_1126bec38);
    lVar13 = lStack_78;
    _objc_retain(lStack_78);
    lVar16 = lStack_80;
    _objc_retain(lStack_80);
    lVar12 = lVar13;
    lVar14 = lVar16;
    if ((int)uVar2 == 0) {
      lVar17 = 0;
      lVar9 = 0;
      lStack_b8 = 0;
      if (lVar13 == 0) {
LAB_107100ecc:
        func_0x00010be0e1e0(*(undefined8 *)(param_1 + 0x20));
        lVar16 = lVar14;
        lVar13 = lVar12;
      }
      else {
LAB_107100d70:
        lVar14 = lVar16;
        lVar12 = lVar13;
        if (lVar16 == 0) goto LAB_107100ecc;
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c156cc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (uVar7 == 0) goto LAB_107100ecc;
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010c27a620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        uVar8 = uVar2;
        func_0x00010bfad160(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c14e080();
        _objc_release(uVar8);
        if ((uVar4 & 1) == 0) {
          func_0x00010be0e1e0(*(undefined8 *)(param_1 + 0x20));
        }
        else {
          puVar15 = PTR_PTR_1126d4c30;
          _objc_alloc();
          func_0x00010c020b80();
          puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a8 = 0xc2000000;
          pcStack_a0 = FUN_107100f78;
          puStack_98 = &UNK_11084aaa8;
          uVar8 = *(undefined8 *)(param_1 + 0x30);
          uVar1 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar1);
          puStack_90 = puVar15;
          uStack_88 = uVar1;
          _objc_retain(puVar15);
          func_0x00010007380c(uVar8,&puStack_b0);
          _objc_release(puStack_90);
          _objc_release(uStack_88);
          _objc_release(puVar15);
        }
        _objc_release(uVar2);
        _objc_release(uVar7);
      }
      _objc_release(lVar17);
      _objc_release(lVar9);
      _objc_release(lStack_b8);
    }
    else {
      lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar9;
      func_0x00010c0bc420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (lVar17 != 0) {
        lStack_b8 = lVar13;
        func_0x00010bf51e00();
        lVar9 = lVar16;
        func_0x00010bf51e00();
        lVar10 = lVar17;
        func_0x00010bf93ec0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar17;
        func_0x00010c0646e0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar11);
        _objc_release(lVar10);
        lVar13 = lVar17;
        func_0x00010bf93ec0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar17;
        func_0x00010c0646e0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
        _objc_release(lVar10);
        _objc_release(lVar13);
        lVar16 = lVar14;
        lVar13 = lVar12;
        if (lVar12 != 0) goto LAB_107100d70;
        goto LAB_107100ecc;
      }
      func_0x00010be0e1e0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar16);
    _objc_release(lVar13);
  }
  _objc_release(puVar6);
  uVar2 = uVar5;
LAB_107100f48:
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107100f78; end: 107100f8f;  */

void FUN_107100f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107100f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x20) != 0);
  return;
}



/* Entry: 107100f90; end: 107101087; -[SCPreviewGallerySavedMediaGenerator _passSanityCheckForVideoData:] */

bool FUN_107100f90(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc();
  func_0x00010c0082a0();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bf8b160(auStack_48,puVar3);
    _CMTimeGetSeconds(auStack_48);
    dVar6 = 11.0;
    if (param_1 <= 11.0) {
      func_0x00010c29b200(PTR_PTR_1126b0010,param_3,puVar3);
      bVar2 = false;
      if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
         (bVar2 = false, !NAN(dVar6) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
        bVar2 = dVar6 == *(double *)(PTR__CGSizeZero_110347620 + 8);
      }
      if (!bVar2) {
        lVar4 = *(long *)(param_2 + 0x30);
        func_0x00010c0c3160();
        uVar5 = 0x1c200000;
        if (lVar4 != 2) {
          uVar5 = 0xb400000;
        }
        uVar1 = 0x10e00000;
        if (lVar4 != 1) {
          uVar1 = uVar5;
        }
        uVar5 = param_4;
        func_0x00010c08fa60(param_4);
        bVar2 = uVar5 <= uVar1;
        goto LAB_107101060;
      }
    }
  }
  bVar2 = false;
LAB_107101060:
  _objc_release(puVar3);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107101088; end: 10710110b; -[SCPreviewGallerySavedMediaGenerator _failToGenerateFile:completionHandler:] */

void FUN_107101088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10710110c;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10710110c; end: 10710111f;  */

void FUN_10710110c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010710111c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 107101120; end: 10710117f; -[SCPreviewGallerySavedMediaGenerator .cxx_destruct] */

void FUN_107101120(long param_1)

{
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



/* Entry: 107101180; end: 107101263;  */

ulong FUN_107101180(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0c6c20();
  if (uVar4 == 0) {
    uVar3 = uVar2;
    func_0x00010c073b80();
    if ((uVar3 & 1) != 0) goto LAB_1071011dc;
  }
  else {
    uVar3 = param_1;
    func_0x00010c07e920();
    if ((int)uVar3 == 0) {
      uVar4 = 1;
      goto LAB_107101240;
    }
LAB_1071011dc:
    uVar3 = uVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = uVar2;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010b5fa414();
      uVar4 = (ulong)(int)uVar4;
      _objc_release(uVar3);
      goto LAB_107101240;
    }
    uVar3 = uVar2;
    func_0x00010c075020();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar2;
      func_0x00010c0830e0(uVar2);
      uVar1 = (uint)uVar3;
      if (uVar4 != 0) {
        uVar1 = 1;
      }
      uVar4 = (ulong)uVar1;
      goto LAB_107101240;
    }
  }
  uVar4 = 0;
LAB_107101240:
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107101264; end: 1071012cb; -[PreviewViewController updateAudioFunctionalityEnabled] */

void FUN_107101264(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283860();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071012cc; end: 107101333; -[PreviewViewController updatePlaybackVolume] */

void FUN_1071012cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2888a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107101334; end: 1071013af; -[PreviewViewController batchCaptureViewController] */

void FUN_107101334(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071013b0; end: 10710142b; -[PreviewViewController batchCaptureStateHandler] */

void FUN_1071013b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10710142c; end: 107101737; -[PreviewViewController batchCaptureDidPlayFromSourceAtIndex:snapIndex:toSourceAtIndex:snapIndex:] */

void FUN_10710142c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = param_1;
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfadc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_5 < uVar5) {
    uVar1 = uVar3;
    func_0x00010bf5ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (uVar1 != uVar6) {
      uVar2 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfadbe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf324a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158b40();
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c187a20(uVar3,param_2,uVar6);
      uVar2 = param_1;
      func_0x00010bfede80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c13b420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfedea0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2485a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2868c0(uVar2,param_2,uVar5,uVar8 == 0);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010c20b580(param_1,param_2,0);
      func_0x00010c20ada0(param_1,param_2,0);
    }
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16920();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107101738; end: 1071019e7; -[PreviewViewController batchCaptureDidCreateSnapWithBatchCaptureSessionID:] */

void FUN_107101738(undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar11;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001070c53c8();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c292d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c960(uVar5,param_2,uVar9,uVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284180(uVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284120(uVar5,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071019e8; end: 107101b17; -[PreviewViewController batchCaptureFeatureTimerWillUpdateWithItem:] */

void FUN_1071019e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0712e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 == 0) {
    uVar3 = param_3;
    func_0x00010c26f000(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    func_0x00010bf16d40(uVar2,param_2,uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar3 = param_3;
    func_0x00010c075760();
    _objc_release(param_3);
    func_0x00010c221f40(uVar2,param_2,uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107101b18; end: 107101b93; -[PreviewViewController featureBatchCaptureIdentityCroppingState] */

void FUN_107101b18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107101b94; end: 107101b97; -[PreviewViewController featureBatchCaptureSetAudioToolsStateFromMultiSnapEditingState:] */

void FUN_107101b94(void)

{
  return;
}



/* Entry: 107101b98; end: 107101c13; -[PreviewViewController featureBatchCaptureTrackingObjectContainerView] */

void FUN_107101b98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107101c14; end: 107101c17; -[PreviewViewController featureBatchCaptureCurrentTouchTarget] */

void FUN_107101c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf606d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentTouchTarget_1125b5b58);
  return;
}



/* Entry: 107101c18; end: 107101c1b; -[PreviewViewController featureBatchCaptureDidTapToolbarItem:] */

void FUN_107101c18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolbarButtonTapped__11267a848);
  return;
}



/* Entry: 107101c1c; end: 107101c73; -[PreviewViewController featureBatchCaptureUpdateFilterStackingButtonWithStackedFiltersCount:] */

void FUN_107101c1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13b420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a340();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107101c74; end: 107101c77; -[PreviewViewController featureBatchCaptureContentTargetAspectRatio] */

void FUN_107101c74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentTargetAspectRatio_1125b0fb0);
  return;
}



/* Entry: 107101c78; end: 107101c7f; -[PreviewViewController featureBatchCaptureAllSegmentsDeleted] */

void FUN_107101c78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelPreviewWithExitType__1125a9480,6);
  return;
}



/* Entry: 107101c80; end: 107101ceb; -[PreviewViewController featureBatchCaptureDidUpdateSegmentStatesAtIndexPath:] */

void FUN_107101c80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c111180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107101cec; end: 107101cef; -[PreviewViewController featureBatchCaptureSegmentDeletedAtIndexPath:] */

void FUN_107101cec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateXButtonState_112680e80);
  return;
}



/* Entry: 107101cf0; end: 107101fff; -[PreviewViewController addCrashLoggingDataWithConfiguration:] */

void FUN_107101cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ea05f8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110db9478);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c233c60(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e29698);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c06d080(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0618);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c243400(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0638);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c07ec60(param_3);
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0658);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf291a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010bfaf5a0(uVar2);
  func_0x00010c0df6e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ea0678);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uStack_58 = 0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c57b8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf054a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d07a0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107102000; end: 107102087; -[PreviewViewController removeCrashLoggingData] */

void FUN_107102000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c57b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107102088; end: 1071020fb; -[PreviewViewController isCropping] */

undefined8 FUN_107102088(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06fa40();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1071020fc; end: 107102363; -[PreviewViewController _activateCropTool] */

void FUN_1071020fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beef920();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  if ((int)uVar3 != 0) {
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c083340();
    _objc_release(uVar5);
    if ((int)uVar1 != 0) {
      func_0x00010c0f6160(param_1);
    }
    uVar5 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1a20();
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf91760();
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar5 = 0;
    if ((int)uVar2 == 0) {
      uVar5 = 0x3fe0000000000000;
    }
    func_0x00010beaa220(uVar5,param_1,param_2,uVar2);
    uVar5 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c141a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c139d60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x0001070c5530();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c274120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22f540();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((int)uVar4 != 0) {
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c23fc40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0efe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a720();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107102364; end: 1071024d3; -[PreviewViewController _deactivateCropTool] */

void FUN_107102364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf65c20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2b60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1a20();
    _objc_release(uVar1);
    func_0x00010beaa220(0x3ff0000000000000,param_1);
    func_0x00010c242fa0(param_1);
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c083340();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0x3fc999999999999a,param_1,PTR_s_resumeVideoWithDelay__11262d0e0);
      return;
    }
  }
  return;
}



/* Entry: 1071024d4; end: 10710285f; -[PreviewViewController updateForCropItem:] */

/* WARNING: Possible PIC construction at 0x0001071027a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001071027ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1071024d4(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5e580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c23fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfe6060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c072080();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf91760();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((uVar3 & 1) == 0) || ((int)uVar9 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdf82d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateCropTool_11255ba50);
      return;
    }
    func_0x00010bdcb1a0(param_1);
  }
  else {
    func_0x00010bdc4b80();
    uVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf91760();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c141a80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf606c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bf61d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c070080();
      func_0x00010c287d60(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateFromAspectFillToFit_1125504b0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107102860; end: 107102927;  */

void FUN_107102860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010bdf82c0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf606c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf61d00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c070080();
  func_0x00010c287d60(uVar3,param_2,uVar4,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


