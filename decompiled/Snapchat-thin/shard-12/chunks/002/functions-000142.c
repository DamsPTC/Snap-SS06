/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e88d90; end: 108e88dab; -[SCDrawingView setSmoothingAlgorithmVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277cccc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2037f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cc80),PTR_s_setSmoothingVersion__11265e820);
  return;
}



/* Entry: 108e88dac; end: 108e88deb; -[SCDrawingView setBrushAffordanceSize:withCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88dac(double param_1,long param_2)

{
  double *pdVar1;
  
  if (*(long *)(param_2 + _DAT_11277cc8c) == 0) {
    pdVar1 = (double *)&UNK_10dfa3ca0;
  }
  else {
    pdVar1 = (double *)(param_2 + _DAT_11277ccc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2256f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 * *pdVar1,*(undefined8 *)(param_2 + _DAT_11277ccd0),
             PTR_s_setWidth_withCenter__112666fe0);
  return;
}



/* Entry: 108e88dec; end: 108e88e4f; -[SCDrawingView setBrushAffordanceColor:OrEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ccd0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_4);
  func_0x00010c17e800(uVar1,param_2,param_3);
  func_0x00010c194460(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e88e50; end: 108e88ef3; -[SCDrawingView toggleBrushAffordanceShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88e50(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126dc420;
    _objc_alloc();
    func_0x00010c013de0(0,0,*(undefined8 *)(param_1 + _DAT_11277ccc0),
                        *(undefined8 *)(param_1 + _DAT_11277ccc0));
    lVar3 = (long)_DAT_11277ccd0;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    func_0x00010c173f40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ccd0),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108e88ef4; end: 108e88f07; -[SCDrawingView setBrushAffordanceVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88ef4(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ccd0),PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 108e88f08; end: 108e88fb7; -[SCDrawingView updateColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277cc8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277ccd4;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c14a2c0(param_1);
    lVar3 = (long)_DAT_11277cc88;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf34ea0(*(undefined8 *)(param_1 + _DAT_11277cc80),param_2,0);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c173f40(param_1,param_2,param_3,*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e88fb8; end: 108e8906f; -[SCDrawingView updateEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e88fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277ccd4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11277cc8c;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c14a2c0(param_1);
    lVar4 = (long)_DAT_11277cc88;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf34ea0(*(undefined8 *)(param_1 + _DAT_11277cc80),param_2,1);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  func_0x00010c173f40(param_1,param_2,*(undefined8 *)(param_1 + lVar3),
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e89070; end: 108e891b7; -[SCDrawingView _restoreFromHistoryIndex:buildCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89070(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108e891b8;
  uStack_70 = 0x108e891c8;
  uStack_68 = 0;
  uStack_48 = param_3;
  _objc_initWeak(auStack_98,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ccbc);
  _objc_copyWeak(auStack_a8,auStack_98);
  uStack_a0 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 108e891b8; end: 108e891cf;  */

void FUN_108e891b8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e891d0; end: 108e89303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e891d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_11277ccb0);
    if (lVar4 == 0) {
      lVar4 = *(long *)(lVar1 + _DAT_11277ccb4);
      func_0x00010c0d1040();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf529e0(*(undefined8 *)(lVar1 + _DAT_11277cc84));
      func_0x00010bf271a0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar4;
    _objc_release(uVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108e89304;
    puStack_58 = &UNK_110ac7b00;
    _objc_copyWeak(auStack_40,param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    func_0x000107c312d0("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108e89304; end: 108e8941f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010bf20c00(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x00010c106aa0(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046ac0(param_3,param_4,puVar2,param_6,puVar3);
    _objc_release(puVar3);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108e89420;
    puStack_68 = &UNK_110ac7ad0;
    uStack_50 = *(undefined8 *)(param_5 + 0x28);
    uStack_58 = *(undefined8 *)(param_5 + 0x20);
    uStack_48 = *(undefined1 *)(param_5 + 0x38);
    puVar3 = puVar2;
    lStack_60 = lVar1;
    func_0x00010bfe91c0(puVar2,param_6,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11277cc7c),param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e89420; end: 108e89617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89420(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  func_0x00010bdc1000(param_2);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf89920(uVar3);
  lVar4 = (long)_DAT_11277cc80;
  func_0x00010bf3b240(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  lVar5 = (long)_DAT_11277cc84;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010bf529e0();
  if (lVar6 < lVar1) {
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea80e0(*(undefined8 *)(param_1 + 0x20));
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == lVar2) {
        func_0x00010c12cd60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
        _objc_release(lVar1);
        break;
      }
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12fc60();
      _objc_release(uVar3);
      lVar6 = lVar6 + 1;
      if ((*(char *)(param_1 + 0x38) == '\x01') && (lVar6 == (lVar6 / 10) * 10)) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ccbc);
        _objc_retain(param_2);
        func_0x00010c0f7fc0(uVar3);
        _objc_release(param_2);
      }
      _objc_release(lVar1);
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
      func_0x00010bf529e0();
    } while (lVar6 < lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108e89618; end: 108e89673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ccb4);
  func_0x00010bf5ef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1753c0(uVar2,param_2,uVar1,*(long *)(param_1 + 0x30) + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e89674; end: 108e896ff; -[SCDrawingView _setStrokeOnSingleStrokeDrawingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277cc80;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c28cde0(uVar2);
  lVar1 = param_3;
  func_0x00010c280560();
  _objc_release(param_3);
  if (0 < lVar1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + _DAT_11277cc9c) = *(long *)(param_1 + _DAT_11277cc9c) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010c187c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setCurrentStrokeUniqueId__11263f930);
  return;
}



/* Entry: 108e89700; end: 108e8980f; -[SCDrawingView updateWithDrawingMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277ccb4);
  _objc_retain(param_3);
  func_0x00010c12b5a0(uVar3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = param_3;
  func_0x00010bf8a020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277cc84);
  *(undefined **)(param_1 + _DAT_11277cc84) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c23ef60(param_3);
  func_0x00010c2037e0(*(undefined8 *)(param_1 + _DAT_11277cc80),param_2,uVar3);
  func_0x00010be95600(param_1,param_2,0,1);
  uVar3 = param_3;
  func_0x00010bf8a020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf529e0();
  *(undefined8 *)(param_1 + _DAT_11277ccc4) = uVar2;
  *(undefined8 *)(param_1 + _DAT_11277ccc8) = uVar2;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_11277cca0) = 1;
  return;
}



/* Entry: 108e89810; end: 108e898e7; -[SCDrawingView drawingMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89810(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277cc80;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010bfd6720();
  puVar2 = PTR_PTR_1126c3d88;
  _objc_alloc(PTR_PTR_1126c3d88);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277cc84);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  if (iVar1 == 0) {
    func_0x00010c23ef60(uVar3);
    func_0x00010c00e5c0(puVar2,param_2,uVar5,uVar3);
  }
  else {
    func_0x00010c25dba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(uVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c23ef60(uVar4);
    func_0x00010c00e5c0(puVar2,param_2,uVar5,uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e898e8; end: 108e899d3; -[SCDrawingView replaceDrawingStrokeHistory:forSegmentIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e898e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c0d3c80();
  lVar5 = (long)_DAT_11277cc84;
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11277ccd8;
  lVar3 = (long)_DAT_11277cc80;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  if (*(char *)(param_1 + lVar4) == '\x01') {
    func_0x00010c25dba0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277ccdc);
    *(undefined8 *)(param_1 + _DAT_11277ccdc) = uVar1;
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf3b240();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + _DAT_11277cc9c) = *(long *)(param_1 + _DAT_11277cc9c) + 1;
    func_0x00010c187c40(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf529e0(uVar1);
  func_0x00010be95600(param_1,param_2,uVar1,0);
  if (*(char *)(param_1 + lVar4) == '\x01') {
    func_0x00010c28cde0(*(undefined8 *)(param_1 + lVar3),param_2,
                        *(undefined8 *)(param_1 + _DAT_11277ccdc));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e899d4; end: 108e89da7; -[SCDrawingView _handlePoint:gestureState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e899d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (param_5 == 2) {
    puVar2 = PTR_PTR_1126bcf00;
    _objc_alloc();
    func_0x00010c026b40(param_1,param_2);
    lVar8 = (long)_DAT_11277cc80;
    uVar6 = *(undefined8 *)(param_3 + lVar8);
    lVar7 = (long)_DAT_11277cce0;
    func_0x00010c07a5e0(*(undefined8 *)(param_3 + _DAT_11277cc88),uVar6,param_4,puVar2,
                        *(undefined8 *)(param_3 + lVar7));
    if ((int)uVar6 == 0) goto LAB_108e89d88;
    func_0x00010befaa40(*(undefined8 *)(param_3 + lVar8),param_4,puVar2);
    _objc_retain(puVar2);
    puVar3 = *(undefined **)(param_3 + lVar7);
    *(undefined **)(param_3 + lVar7) = puVar2;
  }
  else {
    if (param_5 != 1) {
      if (param_5 - 3U < 2) {
        lVar7 = (long)_DAT_11277cce0;
        if (*(long *)(param_3 + lVar7) == 0) {
          func_0x00010be2e3a0(param_1,param_2,param_3,param_4,1);
        }
        func_0x00010bfafc00(param_3);
        uVar6 = *(undefined8 *)(param_3 + lVar7);
        *(undefined8 *)(param_3 + lVar7) = 0;
        _objc_release(uVar6);
        *(long *)(param_3 + _DAT_11277ccc4) = *(long *)(param_3 + _DAT_11277ccc4) + 1;
        lVar7 = param_3;
        func_0x00010c0d2160(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = (long)_DAT_11277cc80;
        uVar6 = *(undefined8 *)(param_3 + lVar8);
        func_0x00010c25dba0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8a2e0(lVar7,param_4,param_3,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar7);
        lVar7 = (long)_DAT_11277cc90;
        iVar1 = (int)*(undefined8 *)(param_3 + lVar7);
        func_0x00010bf926c0();
        if (iVar1 != 0) {
          uVar4 = *(undefined8 *)(param_3 + _DAT_11277cc94);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010bf5ffa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar4);
          uVar6 = *(undefined8 *)(param_3 + lVar8);
          func_0x00010c25dba0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7e20(*(undefined8 *)(param_3 + lVar7),param_4,uVar6,uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        lVar7 = param_3;
        func_0x00010bf6b020(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = (long)_DAT_11277ccac;
        func_0x00010bf8a300(*(double *)(param_3 + _DAT_11277cc88) *
                            *(double *)(param_3 + _DAT_11277ccc0));
        _objc_release(lVar7);
        *(undefined1 *)(param_3 + lVar8) = 0;
        *(undefined1 *)(param_3 + _DAT_11277ccd8) = 0;
      }
      return;
    }
    lVar7 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a380();
    _objc_release(lVar7);
    *(undefined1 *)(param_3 + _DAT_11277ccd8) = 1;
    if (*(long *)(param_3 + _DAT_11277cc8c) == 0) {
      if (*(long *)(param_3 + _DAT_11277ccd4) != 0) {
        func_0x00010c24f6c0(*(double *)(param_3 + _DAT_11277cc88) * 22.0,param_3);
      }
    }
    else {
      func_0x00010c24f6a0(*(double *)(param_3 + _DAT_11277cc88) *
                          *(double *)(param_3 + _DAT_11277ccc0),param_3);
    }
    puVar2 = PTR_PTR_1126bcf00;
    _objc_alloc(PTR_PTR_1126bcf00);
    lVar8 = (long)_DAT_11277cca4;
    func_0x00010c0641c0(*(undefined8 *)(param_3 + lVar8));
    func_0x00010c026b40(puVar2);
    lVar7 = (long)_DAT_11277cc80;
    func_0x00010befaa40(*(undefined8 *)(param_3 + lVar7),param_4,puVar2);
    puVar3 = PTR_PTR_1126bcf00;
    _objc_alloc();
    func_0x00010c0641c0(*(undefined8 *)(param_3 + lVar8));
    func_0x00010c026b40();
    lVar8 = (long)_DAT_11277cce0;
    uVar6 = *(undefined8 *)(param_3 + lVar8);
    *(undefined **)(param_3 + lVar8) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126bcf00;
    _objc_alloc();
    func_0x00010c026b40(param_1,param_2);
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c07a5e0(*(undefined8 *)(param_3 + _DAT_11277cc88),uVar6,param_4,puVar3,
                        *(undefined8 *)(param_3 + lVar8));
    if ((int)uVar6 != 0) {
      func_0x00010befaa40(*(undefined8 *)(param_3 + lVar7),param_4,puVar3);
      _objc_retain(puVar3);
      uVar6 = *(undefined8 *)(param_3 + lVar8);
      *(undefined **)(param_3 + lVar8) = puVar3;
      _objc_release(uVar6);
    }
  }
  _objc_release(puVar3);
LAB_108e89d88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e89da8; end: 108e89fb7; -[SCDrawingView _scalePinch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e89da8(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5,param_4,param_3);
  uVar1 = param_5;
  dVar6 = param_1;
  func_0x00010c252440();
  if (uVar1 == 1) {
    lVar4 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8a3a0();
    _objc_release(lVar4);
    func_0x00010c272660(param_3,param_4,1);
    *(undefined8 *)(param_3 + _DAT_11277cce4) = 0x3ff0000000000000;
    func_0x00010c173f60(*(undefined8 *)(param_3 + _DAT_11277cc88),param_1,param_2,param_3);
    uVar3 = 1;
  }
  else {
    uVar1 = param_5;
    func_0x00010c252440();
    if (uVar1 != 2) {
      func_0x00010c173f80(param_3,param_4,0);
      func_0x00010c272660(param_3,param_4,0);
      lVar4 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8a360();
      _objc_release(lVar4);
      *(undefined1 *)(param_3 + _DAT_11277ccac) = 1;
      puVar2 = PTR_PTR_1126c3cc8;
      func_0x00010c0fc2a0(PTR_PTR_1126c3cc8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + _DAT_11277ccb8);
      func_0x00010c242680(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar3);
      _objc_release(puVar2);
      goto LAB_108e89f98;
    }
    uVar1 = param_5;
    func_0x00010c0df520();
    if (1 < uVar1) {
      func_0x00010c173f80(param_3,param_4,1);
      func_0x00010c14e120(param_5);
      lVar4 = (long)_DAT_11277cce4;
      dVar7 = dVar6 / *(double *)(param_3 + lVar4);
      _pow(dVar7,0x3ff8000000000000);
      lVar5 = (long)_DAT_11277cc88;
      dVar7 = dVar7 * *(double *)(param_3 + lVar5);
      *(double *)(param_3 + lVar5) = dVar7;
      func_0x00010bf39c00(*(undefined8 *)(param_3 + _DAT_11277cc80));
      *(double *)(param_3 + lVar5) = dVar7;
      *(double *)(param_3 + lVar4) = dVar6;
      func_0x00010c173f60(*(undefined8 *)(param_3 + lVar5),param_1,param_2,param_3);
      goto LAB_108e89f98;
    }
    uVar3 = 0;
  }
  func_0x00010c173f80(param_3,param_4,uVar3);
LAB_108e89f98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e89fb8; end: 108e8a06f; -[SCDrawingView _drawingPress:] */

void FUN_108e89fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c252440(param_5);
  _objc_release(param_5);
  func_0x00010be2e3a0(param_1,param_2,param_3,param_4,uVar1);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8a320(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8a070; end: 108e8a077; -[SCDrawingView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_108e8a070(void)

{
  return 0;
}



/* Entry: 108e8a078; end: 108e8a0c7; +[SCDrawingView calculateEmojiRectDrawRatio:] */

double FUN_108e8a078(double param_1)

{
  double dVar1;
  
  if (param_1 <= 0.36363636363636365) {
    param_1 = 0.36363636363636365;
  }
  dVar1 = 1.182;
  if (param_1 <= 1.182) {
    dVar1 = param_1;
  }
  return ((dVar1 + -0.36363636363636365) * 0.20000000000000007) / 0.8183636363636363 + 0.7;
}



/* Entry: 108e8a0c8; end: 108e8a0e7; -[SCDrawingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8a0c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8a0e8; end: 108e8a0fb; -[SCDrawingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8a0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cce8,param_3);
  return;
}



/* Entry: 108e8a0fc; end: 108e8a10b; -[SCDrawingView updateVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8a0fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ccc4);
}



/* Entry: 108e8a10c; end: 108e8a12b; -[SCDrawingView multiSnapDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8a10c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ccec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8a12c; end: 108e8a13f; -[SCDrawingView setMultiSnapDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8a12c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ccec,param_3);
  return;
}



/* Entry: 108e8a140; end: 108e8a14f; -[SCDrawingView defaultStrokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8a140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ccc0);
}



/* Entry: 108e8a150; end: 108e8a15f; -[SCDrawingView multiSnapDrawingCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8a150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277ccb0);
}



/* Entry: 108e8a160; end: 108e8a16f; -[SCDrawingView smoothingAlgorithmVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8a160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cccc);
}



/* Entry: 108e8a170; end: 108e8a2b7; -[SCDrawingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8a170(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277ccb0,0);
  _objc_destroyWeak(param_1 + _DAT_11277ccec);
  _objc_destroyWeak(param_1 + _DAT_11277cce8);
  _objc_storeStrong(param_1 + _DAT_11277cc98,0);
  _objc_storeStrong(param_1 + _DAT_11277cc94,0);
  _objc_storeStrong(param_1 + _DAT_11277cc90,0);
  _objc_storeStrong(param_1 + _DAT_11277ccb8,0);
  _objc_storeStrong(param_1 + _DAT_11277ccbc,0);
  _objc_storeStrong(param_1 + _DAT_11277ccb4,0);
  _objc_storeStrong(param_1 + _DAT_11277ccdc,0);
  _objc_storeStrong(param_1 + _DAT_11277cce0,0);
  _objc_storeStrong(param_1 + _DAT_11277ccd4,0);
  _objc_storeStrong(param_1 + _DAT_11277cc8c,0);
  _objc_storeStrong(param_1 + _DAT_11277cca8,0);
  _objc_storeStrong(param_1 + _DAT_11277cca4,0);
  _objc_storeStrong(param_1 + _DAT_11277ccd0,0);
  _objc_storeStrong(param_1 + _DAT_11277cc84,0);
  _objc_storeStrong(param_1 + _DAT_11277cc80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cc7c,0);
  return;
}



/* Entry: 108e8a2b8; end: 108e8a32b; -[SCEmojiStrokeDrawer init] */

undefined1 * FUN_108e8a2b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fedb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = 0x4036000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e8a32c; end: 108e8a36f; -[SCEmojiStrokeDrawer updateDrawerMetadata:emoji:contentSize:] */

void FUN_108e8a32c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_5;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108e8a370; end: 108e8a3b3; -[SCEmojiStrokeDrawer clearDrawing] */

void FUN_108e8a370(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e8a3b4; end: 108e8a42f; -[SCEmojiStrokeDrawer drawPoint:pointSet:] */

void FUN_108e8a3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010c09ea00(param_7);
  func_0x00010bdc7e60(param_5);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc20(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e8a430; end: 108e8a577; -[SCEmojiStrokeDrawer redrawPoints:] */

void FUN_108e8a430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  uVar8 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  uVar7 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined **)(param_5 + 8) = puVar1;
  _objc_release(uVar3);
  uVar4 = param_7;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar2 = param_7;
      func_0x00010c0dfd40(param_7,param_6,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ea00();
      func_0x00010bdc7e60(param_5);
      _objc_release(uVar2);
      _CGRectUnion(uVar8,uVar7,uVar6,uVar5,param_1,param_2,param_3,param_4);
      uVar4 = uVar4 + 1;
      uVar2 = param_7;
      param_1 = uVar8;
      param_2 = uVar7;
      param_3 = uVar6;
      param_4 = uVar5;
      func_0x00010bf529e0();
    } while (uVar4 < uVar2);
  }
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc20(uVar8,uVar7,uVar6,uVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e8a578; end: 108e8a7d3; -[SCEmojiStrokeDrawer drawRect:rect:] */

undefined1  [16]
FUN_108e8a578(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = param_1;
  dVar17 = param_2;
  _UIGraphicsPushContext(param_7);
  puVar2 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  func_0x00010c166c00(puVar3,param_6,1);
  lVar4 = *(long *)(param_5 + 8);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    uVar9 = 0;
    uVar10 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    uVar12 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    do {
      uVar5 = *(undefined8 *)(param_5 + 8);
      func_0x00010c0dfd40(uVar5,param_6,uVar9);
      iVar1 = (int)uVar5;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1060();
      _objc_release();
      dVar14 = *(double *)(param_5 + 0x18);
      dVar15 = dVar13 - dVar14 * 0.5;
      dVar16 = dVar17 - dVar14 * 0.5;
      dVar13 = param_1;
      dVar17 = param_2;
      _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar15,dVar16,dVar14,dVar14);
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      if (iVar1 != 0) {
        uVar5 = *(undefined8 *)(param_5 + 0x10);
        dVar17 = *(double *)(param_5 + 0x18);
        dVar13 = dVar17 / 22.0;
        uStack_d8 = uVar10;
        func_0x00010bf278e0(dVar13,PTR_PTR_1126c3d70);
        func_0x00010c266f40(dVar17 * dVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        uStack_d0 = uVar11;
        puStack_c0 = puVar2;
        func_0x00010c2a4b20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uStack_c8 = uVar12;
        puStack_b8 = puVar6;
        puStack_b0 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_c0,&uStack_d8,
                            3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf89960(dVar15,dVar16,dVar14,dVar14,uVar5,param_6,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar2);
        dVar13 = dVar15;
        dVar17 = dVar16;
      }
      uVar9 = uVar9 + 1;
      uVar8 = *(ulong *)(param_5 + 8);
      func_0x00010bf529e0();
    } while (uVar9 < uVar8);
  }
  _objc_release();
  _UIGraphicsPopContext();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar18._8_8_ = dVar17;
    auVar18._0_8_ = dVar13;
    return auVar18;
  }
  ___stack_chk_fail();
  auVar19._0_8_ = 10.0 / *(double *)(puVar3 + 0x28);
  auVar19._8_8_ = 75.0 / *(double *)(puVar3 + 0x28);
  return auVar19;
}



/* Entry: 108e8a7d4; end: 108e8a7ef; -[SCEmojiStrokeDrawer scaleRange] */

undefined1  [16] FUN_108e8a7d4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = 10.0 / *(double *)(param_1 + 0x28);
  auVar1._8_8_ = 75.0 / *(double *)(param_1 + 0x28);
  return auVar1;
}



/* Entry: 108e8a7f0; end: 108e8a8b3; -[SCEmojiStrokeDrawer isPointEligibleForAdding:previousPoint:scale:] */

uint FUN_108e8a7f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_1 * 22.0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c09ea00(param_4);
  dVar2 = 0.5;
  dVar6 = dVar4 * 0.5;
  dVar5 = param_1 - dVar6;
  func_0x00010c09ea00(param_4);
  dVar3 = dVar2;
  _objc_release(param_4);
  func_0x00010c09ea00(param_5);
  func_0x00010c09ea00(param_5);
  _objc_release(param_5);
  uVar1 = (uint)param_5;
  _CGRectIntersectsRect(dVar5,dVar2 - dVar6,dVar4,dVar4,param_1 - dVar6,dVar3 - dVar6,dVar4,dVar4);
  return uVar1 ^ 1;
}



/* Entry: 108e8a8b4; end: 108e8a913; -[SCEmojiStrokeDrawer _addPointsIfNeeded:] */

void FUN_108e8a8b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_3 + 8);
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    func_0x00010bdc7400(param_1,param_2,param_3);
  }
  else {
    func_0x00010bdc7f00(param_1,param_2,param_3);
  }
  return;
}



/* Entry: 108e8a914; end: 108e8a92b; -[SCEmojiStrokeDrawer _mid:p2:] */

undefined1  [16] FUN_108e8a914(double param_1,double param_2,double param_3,double param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (param_1 + param_3) * 0.5;
  auVar1._8_8_ = (param_2 + param_4) * 0.5;
  return auVar1;
}



/* Entry: 108e8a92c; end: 108e8ab23; -[SCEmojiStrokeDrawer _addLinearPointsIfNeeded:] */

double FUN_108e8a92c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  
  lVar1 = *(long *)(param_3 + 8);
  dVar6 = param_1;
  dVar8 = param_2;
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_3 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297180(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar3,param_4,puVar2);
    _objc_release(puVar2);
    dVar12 = param_1 - *(double *)(param_3 + 0x18) * 0.5;
  }
  else {
    lVar1 = lVar3;
    func_0x00010bf529e0(lVar3);
    func_0x00010c0dfd40(lVar3,param_4,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060();
    _objc_release(lVar3);
    dVar7 = SQRT((dVar6 - param_1) * (dVar6 - param_1) + (dVar8 - param_2) * (dVar8 - param_2));
    dVar9 = *(double *)(param_3 + 0x18);
    lVar1 = (long)(dVar7 / dVar9);
    dVar12 = *(double *)PTR__CGRectNull_1103475e8;
    uVar13 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
    uVar14 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
    if (0 < lVar1) {
      uVar5 = 1;
      do {
        dVar15 = dVar6 + (((param_1 - dVar6) * dVar9) / dVar7) * (double)uVar5;
        dVar16 = dVar8 + (((param_2 - dVar8) * dVar9) / dVar7) * (double)uVar5;
        uVar4 = *(undefined8 *)(param_3 + 8);
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(dVar15,dVar16,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar4,param_4,puVar2);
        _objc_release(puVar2);
        dVar10 = *(double *)(param_3 + 0x18);
        _CGRectUnion(dVar12,uVar13,uVar11,uVar14,dVar15 - dVar10 * 0.5,dVar16 - dVar10 * 0.5,dVar10,
                     dVar10);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  return dVar12;
}



/* Entry: 108e8ab24; end: 108e8ae3f; -[SCEmojiStrokeDrawer _addQuadCurvePointsIfNeeded:] */

void FUN_108e8ab24(double param_1,double param_2,long param_3,undefined8 param_4)

{
  unkuint9 Var1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  uVar2 = *(ulong *)(param_3 + 8);
  dVar6 = param_1;
  dVar9 = param_2;
  func_0x00010bf529e0();
  if (1 < uVar2) {
    lVar4 = *(long *)(param_3 + 8);
    lVar3 = lVar4;
    func_0x00010bf529e0(lVar4);
    func_0x00010c0dfd40(lVar4,param_4,lVar3 + -2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060();
    dVar7 = dVar6;
    dVar10 = dVar9;
    _objc_release(lVar4);
    lVar4 = *(long *)(param_3 + 8);
    lVar3 = lVar4;
    func_0x00010bf529e0(lVar4);
    func_0x00010c0dfd40(lVar4,param_4,lVar3 + -1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060();
    _objc_release(lVar4);
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010bf529e0();
    if (lVar3 != 2) {
      func_0x00010be604c0(dVar6,dVar9,dVar7,dVar10,param_3);
    }
    dVar8 = dVar7;
    dVar11 = dVar10;
    func_0x00010be604c0(dVar7,dVar10,param_1,param_2,param_3);
    dVar15 = SQRT((dVar6 - dVar7) * (dVar6 - dVar7) + (dVar9 - dVar10) * (dVar9 - dVar10));
    dVar13 = dVar15 + SQRT((dVar8 - dVar7) * (dVar8 - dVar7) + (dVar11 - dVar10) * (dVar11 - dVar10)
                          );
    uVar2 = (ulong)(dVar13 / *(double *)(param_3 + 0x18));
    if (uVar2 != 0) {
      if ((long)uVar2 < 2) {
        dVar17 = *(double *)PTR__CGRectNull_1103475e8;
        dVar18 = *(double *)(PTR__CGRectNull_1103475e8 + 8);
        dVar16 = *(double *)(PTR__CGRectNull_1103475e8 + 0x10);
        dVar19 = *(double *)(PTR__CGRectNull_1103475e8 + 0x18);
      }
      else {
        lVar4 = *(long *)(param_3 + 8);
        lVar3 = lVar4;
        func_0x00010bf529e0(lVar4);
        func_0x00010c12d3c0(lVar4,param_4,lVar3 + -1);
        dVar16 = *(double *)(param_3 + 0x18);
        dVar17 = dVar7 - dVar16 * 0.5;
        dVar18 = dVar10 - dVar16 * 0.5;
        dVar12 = dVar6;
        dVar14 = dVar9;
        func_0x00010bdc7400(dVar6,dVar9,param_3);
        dVar19 = dVar16;
        _CGRectUnion(dVar17,dVar18,dVar16,dVar16,dVar12,dVar14,dVar13,dVar15);
      }
      if ((long)uVar2 < 0x33) {
        uVar2 = 0x32;
      }
      Var1 = (unkuint9)uVar2;
      uVar5 = 1;
      do {
        dVar13 = (double)((1.0 / (float)(unkint9)Var1) * (float)uVar5);
        dVar12 = 1.0 - dVar13;
        dVar14 = dVar12 * dVar12;
        dVar12 = (dVar13 + dVar13) * dVar12;
        dVar15 = (double)(float)(dVar7 * dVar12 + dVar6 * dVar14 + dVar8 * dVar13 * dVar13);
        dVar12 = (double)(float)(dVar10 * dVar12 + dVar9 * dVar14 + dVar11 * dVar13 * dVar13);
        dVar13 = dVar9;
        func_0x00010bdc7400(dVar15,dVar12,param_3);
        _CGRectUnion(dVar17,dVar18,dVar16,dVar19,dVar15,dVar12,dVar14,dVar13);
        uVar5 = uVar5 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      dVar6 = dVar16;
      dVar9 = dVar19;
      func_0x00010bdc7400(param_1,param_2,param_3);
      _CGRectUnion(dVar17,dVar18,dVar16,dVar19,param_1,param_2,dVar6,dVar9);
    }
  }
  return;
}



/* Entry: 108e8ae40; end: 108e8ae57; -[SCEmojiStrokeDrawer delegate] */

void FUN_108e8ae40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8ae58; end: 108e8ae63; -[SCEmojiStrokeDrawer setDelegate:] */

void FUN_108e8ae58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108e8ae64; end: 108e8ae6b; -[SCEmojiStrokeDrawer defaultStrokeWidth] */

undefined8 FUN_108e8ae64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e8ae6c; end: 108e8ae73; -[SCEmojiStrokeDrawer setDefaultStrokeWidth:] */

void FUN_108e8ae6c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108e8ae74; end: 108e8aeab; -[SCEmojiStrokeDrawer .cxx_destruct] */

void FUN_108e8ae74(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8aeac; end: 108e8af6b; -[SCSingleStrokeCanvas init] */

undefined1 * FUN_108e8aeac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fedb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dc488;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dc490;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e8af6c; end: 108e8b003; -[SCSingleStrokeCanvas setSmoothingAlgorithmVersion:] */

void FUN_108e8af6c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x48) != param_3) {
    *(long *)(param_1 + 0x48) = param_3;
    lVar4 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x28);
    ppuVar1 = &PTR_PTR_1126dc498;
    if (param_3 != 1) {
      ppuVar1 = &PTR_PTR_1126dc488;
    }
    puVar2 = *ppuVar1;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar3);
    if (lVar4 == lVar6) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 108e8b004; end: 108e8b0e3; -[SCSingleStrokeCanvas updateWithStroke:] */

void FUN_108e8b004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(param_4);
  func_0x00010bf3b220(uVar3);
  uVar3 = param_4;
  func_0x00010bf40c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf8e2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460(param_4);
  uVar2 = param_4;
  func_0x00010bf89e60(param_4);
  func_0x00010bed72c0(param_1,param_2,param_3,uVar3,uVar1,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c102f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = uVar3;
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e8b0e4; end: 108e8b1ab; -[SCSingleStrokeCanvas _updateDrawingData:emoji:lineWidth:drawerType:] */

void FUN_108e8b0e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = param_5;
  _objc_release(uVar1);
  *(long *)(param_2 + 0x40) = param_6;
  if (param_6 == 0) {
    lVar2 = 0x28;
  }
  else {
    if (param_6 != 1) goto LAB_108e8b17c;
    lVar2 = 0x30;
  }
  uVar3 = *(undefined8 *)(param_2 + lVar2);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  _objc_release(uVar1);
LAB_108e8b17c:
  func_0x00010c285440(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x38),param_3,
                      *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e8b1ac; end: 108e8b20f; -[SCSingleStrokeCanvas drawStrokeToContext:drawRect:] */

void FUN_108e8b1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010c124be0(*(undefined8 *)(param_5 + 0x38),param_6,*(undefined8 *)(param_5 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf89b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x38),
             PTR_s_drawRect_rect__1125c0080,param_7);
  return;
}



/* Entry: 108e8b210; end: 108e8b217; -[SCSingleStrokeCanvas drawerType] */

undefined8 FUN_108e8b210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108e8b218; end: 108e8b21f; -[SCSingleStrokeCanvas smoothingAlgorithmVersion] */

undefined8 FUN_108e8b218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108e8b220; end: 108e8b27f; -[SCSingleStrokeCanvas .cxx_destruct] */

void FUN_108e8b220(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e8b280; end: 108e8b37b; -[SCSingleStrokeDrawingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e8b280(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fedc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cd28);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cd28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dc488;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11277cd2c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dc490;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277cd30;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar4);
    lVar4 = (long)_DAT_11277cd34;
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277cd38) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e8b37c; end: 108e8b3e7; -[SCSingleStrokeDrawingView addPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277cd28;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
  func_0x00010bf89ac0(*(undefined8 *)(param_1 + _DAT_11277cd34),param_2,param_3,
                      *(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8b3e8; end: 108e8b453; -[SCSingleStrokeDrawingView finishDrawingStroke] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b3e8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277cd34;
  uVar2 = *(ulong *)(param_1 + lVar3);
  puVar1 = PTR_PTR_1126dc498;
  _objc_opt_class(PTR_PTR_1126dc498);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfafc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar3),PTR_s_finishStrokePointSet__1125c98b0,
               *(undefined8 *)(param_1 + _DAT_11277cd28));
    return;
  }
  return;
}



/* Entry: 108e8b454; end: 108e8b497; -[SCSingleStrokeDrawingView setDefaultStrokeWidth:] */

/* WARNING: Possible PIC construction at 0x000108e8b47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108e8b480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b454(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277cd3c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c18b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11277cd2c),PTR_s_setDefaultStrokeWidth__1126406a0);
  return;
}



/* Entry: 108e8b498; end: 108e8b4bf; -[SCSingleStrokeDrawingView hasDrawing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e8b498(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277cd28);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 108e8b4c0; end: 108e8b4f7; -[SCSingleStrokeDrawingView clearDrawingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b4c0(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_11277cd28));
                    /* WARNING: Could not recover jumptable at 0x00010bf3b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cd34),PTR_s_clearDrawing_1125ac630);
  return;
}



/* Entry: 108e8b4f8; end: 108e8b607; -[SCSingleStrokeDrawingView updateWithStroke:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b4f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010bf3b240(param_2);
  uVar1 = param_4;
  func_0x00010bf40c40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf8e2c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460(param_4);
  func_0x00010bf89e60(param_4);
  func_0x00010c285460(param_1,param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c102f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  lVar4 = (long)_DAT_11277cd28;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  *(undefined8 *)(param_2 + lVar4) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c280560();
  _objc_release(param_4);
  *(undefined8 *)(param_2 + _DAT_11277cd40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010c124bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11277cd34),PTR_s_redrawPoints__112626d18,
             *(undefined8 *)(param_2 + lVar4));
  return;
}



/* Entry: 108e8b608; end: 108e8b663; -[SCSingleStrokeDrawingView stroke] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b608(long param_1)

{
  _objc_alloc(PTR_PTR_1126bcf08);
  func_0x00010c026160(*(undefined8 *)(param_1 + _DAT_11277cd44));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8b664; end: 108e8b693; -[SCSingleStrokeDrawingView lineColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b664(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277cd48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e8b694; end: 108e8b6a3; -[SCSingleStrokeDrawingView lineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8b694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cd44);
}



/* Entry: 108e8b6a4; end: 108e8b7bb; -[SCSingleStrokeDrawingView updateDrawingData:emoji:lineWidth:drawerType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b6a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11277cd44;
  *(undefined8 *)(param_2 + lVar4) = param_1;
  lVar5 = (long)_DAT_11277cd48;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  *(undefined8 *)(param_2 + lVar5) = param_4;
  _objc_release(uVar2);
  lVar6 = (long)_DAT_11277cd4c;
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_2 + lVar6);
  *(undefined8 *)(param_2 + lVar6) = param_5;
  _objc_release(uVar2);
  *(long *)(param_2 + _DAT_11277cd38) = param_6;
  iVar1 = _DAT_11277cd34;
  if (param_6 == 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11277cd2c);
  }
  else {
    if (param_6 != 1) goto LAB_108e8b780;
    uVar2 = *(undefined8 *)(param_2 + _DAT_11277cd30);
  }
  lVar7 = (long)_DAT_11277cd34;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar7);
  *(undefined8 *)(param_2 + lVar7) = uVar2;
  _objc_release(uVar3);
LAB_108e8b780:
  func_0x00010c285440(*(undefined8 *)(param_2 + lVar4),*(undefined8 *)(param_2 + iVar1),param_3,
                      *(undefined8 *)(param_2 + lVar5),*(undefined8 *)(param_2 + lVar6));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e8b7bc; end: 108e8b80f; -[SCSingleStrokeDrawingView clampedScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108e8b7bc(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11277cd34;
  dVar2 = param_1;
  func_0x00010c14e380(*(undefined8 *)(param_3 + lVar1));
  func_0x00010c14e380(*(undefined8 *)(param_3 + lVar1));
  if (param_1 <= dVar2) {
    param_1 = dVar2;
  }
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 108e8b810; end: 108e8b81f; -[SCSingleStrokeDrawingView isPointEligibleForAdding:previousPoint:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cd34),
             PTR_s_isPointEligibleForAdding_previou_1125fc388);
  return;
}



/* Entry: 108e8b820; end: 108e8b8e7; -[SCSingleStrokeDrawingView setSmoothingVersion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8b820(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_3 != *(long *)(param_1 + _DAT_11277cd50)) {
    *(long *)(param_1 + _DAT_11277cd50) = param_3;
    lVar6 = (long)_DAT_11277cd34;
    lVar7 = *(long *)(param_1 + lVar6);
    lVar4 = (long)_DAT_11277cd2c;
    lVar8 = *(long *)(param_1 + lVar4);
    ppuVar1 = &PTR_PTR_1126dc498;
    if (param_3 != 1) {
      ppuVar1 = &PTR_PTR_1126dc488;
    }
    puVar2 = *ppuVar1;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
    if (lVar7 == lVar8) {
      uVar5 = *(undefined8 *)(param_1 + lVar4);
      _objc_retain(uVar5);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 108e8b8e8; end: 108e8b97b; -[SCSingleStrokeDrawingView changeDrawerType:mapScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8b8e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  
  piVar3 = (int *)&DAT_11277cd2c;
  *(long *)(param_2 + _DAT_11277cd38) = param_4;
  if (param_4 != 0) {
    if (param_4 != 1) {
      return 0x3ff0000000000000;
    }
    piVar3 = (int *)&DAT_11277cd30;
  }
  lVar5 = (long)_DAT_11277cd34;
  iVar1 = *piVar3;
  func_0x00010be5cdc0(param_2,param_3,*(undefined8 *)(param_2 + lVar5),
                      *(undefined8 *)(param_2 + iVar1));
  uVar4 = *(undefined8 *)(param_2 + iVar1);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  *(undefined8 *)(param_2 + lVar5) = uVar4;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 108e8b97c; end: 108e8ba43; -[SCSingleStrokeDrawingView _mapScaleValuefromDrawer:toDrawer:scale:] */

double FUN_108e8b97c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1;
  _objc_retain(param_6);
  func_0x00010c14e380(param_5);
  dVar2 = dVar1;
  dVar3 = param_2;
  func_0x00010c14e380(param_6);
  _objc_release(param_6);
  if (1.0 <= param_1) {
    if (1.1920928955078125e-07 <= ABS(param_1 + -1.0)) {
      param_1 = (dVar3 + -1.0) * ((param_1 + -1.0) / (param_2 + -1.0)) + 1.0;
    }
  }
  else {
    param_1 = dVar2 + (1.0 - dVar2) * ((param_1 - dVar1) / (1.0 - dVar1));
  }
  return param_1;
}



/* Entry: 108e8ba44; end: 108e8baa3; -[SCSingleStrokeDrawingView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8ba44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  lVar1 = param_5;
  _UIGraphicsGetCurrentContext();
                    /* WARNING: Could not recover jumptable at 0x00010bf89b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11277cd34),
             PTR_s_drawRect_rect__1125c0080,lVar1);
  return;
}



/* Entry: 108e8baa4; end: 108e8babf; -[SCSingleStrokeDrawingView strokeDrawerRequestRedraw:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8baa4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11277cd34)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 108e8bac0; end: 108e8badb; -[SCSingleStrokeDrawingView strokeDrawer:requestDrawInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8bac0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11277cd34)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplayInRect__112650988);
  return;
}



/* Entry: 108e8badc; end: 108e8baeb; -[SCSingleStrokeDrawingView drawerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8badc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cd38);
}



/* Entry: 108e8baec; end: 108e8bafb; -[SCSingleStrokeDrawingView smoothingVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8baec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cd50);
}



/* Entry: 108e8bafc; end: 108e8bb0b; -[SCSingleStrokeDrawingView currentStrokeUniqueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8bafc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cd40);
}



/* Entry: 108e8bb0c; end: 108e8bb1b; -[SCSingleStrokeDrawingView setCurrentStrokeUniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8bb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277cd40) = param_3;
  return;
}



/* Entry: 108e8bb1c; end: 108e8bb2b; -[SCSingleStrokeDrawingView defaultStrokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e8bb1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cd3c);
}



/* Entry: 108e8bb2c; end: 108e8bbab; -[SCSingleStrokeDrawingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e8bb2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cd34,0);
  _objc_storeStrong(param_1 + _DAT_11277cd30,0);
  _objc_storeStrong(param_1 + _DAT_11277cd2c,0);
  _objc_storeStrong(param_1 + _DAT_11277cd4c,0);
  _objc_storeStrong(param_1 + _DAT_11277cd48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277cd28,0);
  return;
}



/* Entry: 108e8bbac; end: 108e8bc17; -[SCSolidSmoothStrokeDrawer init] */

undefined1 * FUN_108e8bbac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fedc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _CGPathCreateMutable();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    *(undefined4 *)((long)puVar1 + 0x40) = 3;
    *(undefined8 *)((long)puVar1 + 0x48) = 0x4035800000000000;
    *(undefined8 *)((long)puVar1 + 0x58) = 0x4018000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e8bc18; end: 108e8bc5b; -[SCSolidSmoothStrokeDrawer updateDrawerMetadata:emoji:contentSize:] */

void FUN_108e8bc18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108e8bc5c; end: 108e8bca3; -[SCSolidSmoothStrokeDrawer dealloc] */

void FUN_108e8bc5c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGPathRelease(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126fedc8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108e8bca4; end: 108e8bcef; -[SCSolidSmoothStrokeDrawer clearDrawing] */

void FUN_108e8bca4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CGPathRelease();
  _CGPathCreateMutable();
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e8bcf0; end: 108e8bd53; -[SCSolidSmoothStrokeDrawer drawPoint:pointSet:] */

void FUN_108e8bcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010be066e0(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8bd54; end: 108e8be0f; -[SCSolidSmoothStrokeDrawer redrawPoints:] */

void FUN_108e8bd54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar2 + 1;
      func_0x00010be066e0(param_1,param_2,uVar1,param_3,uVar2);
      _objc_release(uVar1);
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar2 < uVar1);
  }
  func_0x00010bfafc20(param_1,param_2,param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8be10; end: 108e8bf1f; -[SCSolidSmoothStrokeDrawer _drawPoint:pointSet:numPoints:] */

void FUN_108e8be10(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010be63a80(uVar3,uVar4,param_1);
  if (param_5 == 1) {
    _CGPathMoveToPoint(uVar3,uVar4,*(undefined8 *)(param_1 + 8),0);
  }
  else {
    lVar1 = param_4;
    func_0x00010bf529e0();
    if (lVar1 != 2) {
      if (param_5 == 3) {
        uVar2 = *(undefined8 *)(param_1 + 8);
        _CGPathRelease();
        _CGPathCreateMutable();
        *(undefined8 *)(param_1 + 8) = uVar2;
      }
      func_0x00010bdc7f20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar3,
                          uVar4,param_1);
      goto LAB_108e8bef8;
    }
  }
  _CGPathAddLineToPoint(uVar3,uVar4,*(undefined8 *)(param_1 + 8),0);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc40();
  _objc_release(lVar1);
LAB_108e8bef8:
  func_0x00010bdc7e40(uVar3,uVar4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e8bf20; end: 108e8bf7b; -[SCSolidSmoothStrokeDrawer drawRect:rect:] */

void FUN_108e8bf20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _CGContextAddPath(param_3,*(undefined8 *)(param_1 + 8));
  _CGContextSetLineCap(param_3,1);
  _CGContextSetLineWidth(*(undefined8 *)(param_1 + 0x18),param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bdc0fe0(uVar1);
  _CGContextSetStrokeColorWithColor(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbaf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextStrokePath_110347318)(param_3);
  return;
}



/* Entry: 108e8bf7c; end: 108e8bf97; -[SCSolidSmoothStrokeDrawer scaleRange] */

undefined1  [16] FUN_108e8bf7c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = 1.0 / *(double *)(param_1 + 0x58);
  auVar1._8_8_ = 200.0 / *(double *)(param_1 + 0x58);
  return auVar1;
}



/* Entry: 108e8bf98; end: 108e8c033; -[SCSolidSmoothStrokeDrawer isPointEligibleForAdding:previousPoint:scale:] */

bool FUN_108e8bf98(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  
  _objc_retain(param_6);
  func_0x00010c09ea00(param_5);
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010c09ea00(param_6);
  _objc_release(param_6);
  dVar1 = (param_1 - dVar1) * (param_1 - dVar1) + (param_2 - dVar2) * (param_2 - dVar2);
  dVar2 = SQRT(dVar1);
  func_0x00010bf6a5c0(param_3);
  return dVar1 * 0.25 < dVar2;
}



/* Entry: 108e8c034; end: 108e8c127; -[SCSolidSmoothStrokeDrawer finishStrokePointSet:] */

void FUN_108e8c034(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (1 < uVar1) {
    dVar6 = *(double *)(param_1 + 0x20);
    dVar2 = *(double *)(param_1 + 0x30) - dVar6;
    dVar4 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x28);
    uVar1 = param_3;
    dVar3 = dVar2;
    func_0x00010c089820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    dVar5 = *(double *)(param_1 + 0x30);
    dVar7 = *(double *)(param_1 + 0x38);
    _objc_release(uVar1);
    dVar3 = (dVar6 - dVar7) * dVar4 + (dVar3 - dVar5) * dVar2;
    if (0.0 < dVar3) {
      dVar6 = SQRT((*(double *)PTR__CGPointZero_110347540 - dVar2) *
                   (*(double *)PTR__CGPointZero_110347540 - dVar2) +
                   (*(double *)(PTR__CGPointZero_110347540 + 8) - dVar4) *
                   (*(double *)(PTR__CGPointZero_110347540 + 8) - dVar4));
      dVar3 = dVar3 * (1.0 / (dVar6 * dVar6));
      func_0x00010bdc7f20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                          *(double *)(param_1 + 0x30),*(double *)(param_1 + 0x38),
                          *(double *)(param_1 + 0x30) + dVar2 * dVar3,
                          *(double *)(param_1 + 0x38) + dVar4 * dVar3,param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e8c128; end: 108e8c33f; -[SCSolidSmoothStrokeDrawer _nextPointForCurrentPoint:PointSet:lastPointIndex:] */

undefined1  [16]
FUN_108e8c128(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  dVar5 = param_1;
  dVar6 = param_2;
  _objc_retain(param_5);
  iVar2 = (int)param_6;
  if (iVar2 < 0) {
    dVar3 = *(double *)PTR__CGPointZero_110347540;
    dVar4 = *(double *)(PTR__CGPointZero_110347540 + 8);
    dVar7 = dVar5;
    dVar9 = dVar6;
  }
  else {
    uVar1 = param_5;
    func_0x00010c0dfd40(param_5,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    dVar7 = dVar5;
    dVar9 = dVar6;
    _objc_release(uVar1);
    dVar3 = dVar5;
    dVar4 = dVar6;
  }
  if (iVar2 < *(int *)(param_3 + 0x40)) {
    if (iVar2 < 1) goto LAB_108e8c314;
    uVar1 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    dVar5 = dVar7;
    dVar6 = dVar9;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0dfd40(param_5,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    _objc_release(uVar1);
    dVar4 = 1.0 / (double)(iVar2 + 1);
    dVar3 = dVar4 * (dVar5 - dVar7);
    dVar4 = dVar4 * (dVar6 - dVar9);
  }
  else {
    uVar1 = param_5;
    func_0x00010c0dfd40(param_5,param_4,param_6 - *(int *)(param_3 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    dVar5 = dVar7;
    dVar6 = dVar9;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0dfd40(param_5,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00();
    _objc_release(uVar1);
    dVar4 = 1.0 / (double)*(int *)(param_3 + 0x40);
    dVar3 = (dVar5 - dVar7) * dVar4;
    dVar4 = (dVar6 - dVar9) * dVar4;
    dVar5 = dVar5 - param_1;
    dVar6 = dVar6 - param_2;
    dVar9 = SQRT(dVar5 * dVar5 + dVar6 * dVar6);
    dVar7 = *(double *)(param_3 + 0x48);
    if (dVar7 < dVar9) {
      dVar10 = dVar9 - dVar7;
      dVar8 = dVar10 / (dVar7 + dVar7);
      dVar7 = 1.0;
      if (dVar8 <= 1.0) {
        dVar7 = dVar8;
      }
      dVar3 = dVar10 * dVar5 * (1.0 / dVar9) * dVar7 + dVar3 * (1.0 - dVar7);
      dVar4 = dVar10 * dVar6 * (1.0 / dVar9) * dVar7 + dVar4 * (1.0 - dVar7);
    }
  }
  dVar3 = param_1 + dVar3;
  dVar4 = param_2 + dVar4;
LAB_108e8c314:
  _objc_release(param_5);
  auVar11._8_8_ = dVar4;
  auVar11._0_8_ = dVar3;
  return auVar11;
}



/* Entry: 108e8c340; end: 108e8c34f; -[SCSolidSmoothStrokeDrawer _addPointToLastPoints:] */

void FUN_108e8c340(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x30) = param_1;
  *(undefined8 *)(param_3 + 0x38) = param_2;
  return;
}



/* Entry: 108e8c350; end: 108e8c46b; -[SCSolidSmoothStrokeDrawer _addQuadCurveWithPoint1:point2:point3:isFirstThreePoints:] */

void FUN_108e8c350(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,undefined8 param_8,int param_9)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_9 == 0) {
    param_2 = (param_2 + param_4) * 0.5;
    param_1 = (param_1 + param_3) * 0.5;
  }
  dVar3 = (param_3 + param_5) * 0.5;
  dVar4 = (param_4 + param_6) * 0.5;
  lVar1 = param_7;
  _CGPathCreateMutable();
  _CGPathMoveToPoint(param_1,param_2);
  _CGPathAddQuadCurveToPoint(param_3,param_4,dVar3,dVar4,lVar1,0);
  _CGPathGetBoundingBox(lVar1);
  _CGPathAddPath(*(undefined8 *)(param_7 + 8),0,lVar1);
  _CGPathRelease(lVar1);
  dVar2 = *(double *)(param_7 + 0x18);
  func_0x00010bf6b020(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dc20(param_3 - dVar2 * 2.0,param_4 - dVar2 * 2.0,dVar3 + dVar2 * 4.0,
                      dVar4 + dVar2 * 4.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108e8c46c; end: 108e8c483; -[SCSolidSmoothStrokeDrawer delegate] */

void FUN_108e8c46c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e8c484; end: 108e8c48f; -[SCSolidSmoothStrokeDrawer setDelegate:] */

void FUN_108e8c484(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 108e8c490; end: 108e8c497; -[SCSolidSmoothStrokeDrawer defaultStrokeWidth] */

undefined8 FUN_108e8c490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e8c498; end: 108e8c49f; -[SCSolidSmoothStrokeDrawer setDefaultStrokeWidth:] */

void FUN_108e8c498(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 108e8c4a0; end: 108e8c4cb; -[SCSolidSmoothStrokeDrawer .cxx_destruct] */

void FUN_108e8c4a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


