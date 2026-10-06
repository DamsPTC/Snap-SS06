/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10651bb70; end: 10651bc6b; -[SCChatTableViewGenericComposerStackedContentHolderCell contentFrameInPayloadView] */

double FUN_10651bb70(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_3;
  func_0x00010bebf320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  dVar2 = param_2;
  _objc_release(param_3);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010bf4d5e0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  _objc_release(uVar1);
  return param_2 + dVar2;
}



/* Entry: 10651bc6c; end: 10651bc6f; -[SCChatTableViewGenericComposerStackedContentHolderCell configureWithCollectionViewDelegate:] */

void FUN_10651bc6c(void)

{
  return;
}



/* Entry: 10651bc70; end: 10651bd7b; -[SCChatTableViewGenericComposerStackedContentHolderCell contentViewForFocusedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651bc70(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = param_1 + (long)_DAT_112749cd4;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be754a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d60(lVar6);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112749ce0);
  _objc_retain(uVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10651bd7c; end: 10651bebb; -[SCChatTableViewGenericComposerStackedContentHolderCell setContentIsFocused:focusedMessageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651bd7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1a08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setContentIsFocused_focusedMessa_11263e230,param_3,param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10651bebc;
  uStack_50 = 0x10651becc;
  uStack_48 = 0;
  if ((int)param_3 != 0) {
    func_0x00010c0be080(param_4);
  }
  func_0x00010c19e2c0(*(undefined8 *)(param_1 + _DAT_112749cdc));
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10651bebc; end: 10651beef;  */

void FUN_10651bebc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10651bef0; end: 10651bf37;  */

void FUN_10651bef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10651bf38; end: 10651c07b; -[SCChatTableViewGenericComposerStackedContentHolderCell resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651bf38(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar6 = param_1 + (long)_DAT_112749cd4;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010be754a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d60(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  func_0x00010c19e2c0(*(undefined8 *)(param_1 + (long)_DAT_112749cdc));
  uVar2 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112749ce0;
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651c07c; end: 10651c247; -[SCChatTableViewGenericComposerStackedContentHolderCell indexForPointInCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10651c07c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5
                   ,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar4 = (long)_DAT_112749cdc;
  uVar1 = *(ulong *)(param_5 + lVar4);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  dVar8 = param_1;
  dVar13 = param_2;
  func_0x00010bf512a0(param_5,param_6,*(undefined8 *)(param_5 + lVar4));
  uVar7 = uVar1;
  func_0x00010bf529e0();
  uVar6 = 0;
  if (uVar7 != 0) {
    uVar7 = 0;
    uVar5 = 0;
    dVar15 = 1.79769313486232e+308;
    do {
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c074c20();
      uVar6 = uVar5;
      dVar12 = dVar15;
      if ((uVar3 & 1) == 0) {
        dVar12 = param_1;
        dVar11 = param_2;
        func_0x00010bf512a0(param_1,param_2,param_5,param_6,uVar2);
        uVar3 = uVar2;
        func_0x00010c102b20(uVar2,param_6,0);
        uVar6 = uVar7;
        if ((uVar3 & 1) != 0) {
          _objc_release(uVar2);
          break;
        }
        func_0x00010bfb68e0(uVar2);
        dVar9 = dVar12;
        _CGRectGetMinX();
        dVar10 = dVar12;
        _CGRectGetMaxX(dVar12,dVar11,param_3,param_4);
        dVar14 = dVar8 - dVar10;
        if (dVar8 - dVar10 <= dVar9 - dVar8) {
          dVar14 = dVar9 - dVar8;
        }
        if (dVar14 <= 0.0) {
          dVar14 = 0.0;
        }
        dVar9 = dVar12;
        _CGRectGetMinY(dVar12,dVar11,param_3,param_4);
        _CGRectGetMaxY(dVar12,dVar11);
        dVar11 = dVar13 - dVar12;
        if (dVar13 - dVar12 <= dVar9 - dVar13) {
          dVar11 = dVar9 - dVar13;
        }
        if (dVar11 <= 0.0) {
          dVar11 = 0.0;
        }
        dVar12 = dVar11 * dVar11 + dVar14 * dVar14;
        if (dVar15 <= dVar12) {
          uVar6 = uVar5;
          dVar12 = dVar15;
        }
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar2 = uVar1;
      func_0x00010bf529e0();
      uVar5 = uVar6;
      dVar15 = dVar12;
    } while (uVar7 < uVar2);
  }
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 10651c248; end: 10651c2c7; -[SCChatTableViewGenericComposerStackedContentHolderCell setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c248(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749ce8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10651c2c8; end: 10651c36f; -[SCChatTableViewGenericComposerStackedContentHolderCell _stackedContextWrapper] */

void FUN_10651c2c8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cb4c8;
  _objc_opt_class(PTR_PTR_1126cb4c8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651c370; end: 10651c3db; -[SCChatTableViewGenericComposerStackedContentHolderCell _pluginIdentifier] */

void FUN_10651c370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bebf320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c101c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10651c3dc; end: 10651c437; -[SCChatTableViewGenericComposerStackedContentHolderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c3dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749cd4);
  _objc_storeStrong(param_1 + _DAT_112749ce8,0);
  _objc_storeStrong(param_1 + _DAT_112749cdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749ce0,0);
  return;
}



/* Entry: 10651c438; end: 10651c547; -[SCChatTableViewGenericComposerStatusMessageHolderCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651c438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1a10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010c101ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112749cec;
    _objc_storeWeak((undefined1 *)((long)puVar1 + lVar5),uVar4);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126cb540;
    _objc_alloc();
    puVar3 = (undefined1 *)((long)puVar1 + lVar5);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c061b40();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749cf0);
    *(undefined **)((long)puVar1 + (long)_DAT_112749cf0) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10651c548; end: 10651c73b; -[SCChatTableViewGenericComposerStatusMessageHolderCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c548(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f1a10;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010bf1ec20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar4 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar1);
  param_1 = param_1 - dVar4;
  dVar10 = param_1 * 0.5;
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  dVar3 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = dVar4;
  func_0x00010c19f0e0();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bee7640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  dVar6 = param_1;
  func_0x00010c0bafa0(lVar1);
  func_0x00010c0bafa0(lVar1);
  dVar5 = dVar10;
  func_0x00010c0bafa0(lVar1);
  func_0x00010bf4d5e0(lVar1);
  dVar4 = dVar4 - (double)(long)dVar5;
  dVar9 = dVar4 * 0.5;
  dVar7 = dVar6;
  func_0x00010c0bafa0(lVar1);
  lVar2 = (long)_DAT_112749cf0;
  func_0x00010c219b60(*(undefined8 *)(param_2 + lVar2));
  func_0x00010c0bafa0(lVar1);
  dVar5 = (double)(long)dVar5 - (param_1 + dVar3);
  dVar3 = 0.0;
  if (0.0 <= dVar5) {
    dVar3 = dVar5;
  }
  dVar6 = (double)(long)dVar6 - (dVar10 + dVar8);
  dVar5 = 0.0;
  if (0.0 <= dVar6) {
    dVar5 = dVar6;
  }
  func_0x00010c19f0e0(dVar7 + dVar9,dVar4,dVar3,dVar5,*(undefined8 *)(param_2 + lVar2));
  _objc_release(lVar1);
  return;
}



/* Entry: 10651c73c; end: 10651c7ab; -[SCChatTableViewGenericComposerStatusMessageHolderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c73c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setViewModel__1126663d8);
  lVar1 = param_1;
  func_0x00010bee7640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835a0(*(undefined8 *)(param_1 + _DAT_112749cf0));
  _objc_release(lVar1);
  return;
}



/* Entry: 10651c7ac; end: 10651c853; -[SCChatTableViewGenericComposerStatusMessageHolderCell _valdiContextWrapper] */

void FUN_10651c7ac(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651c854; end: 10651c8a3; -[SCChatTableViewGenericComposerStatusMessageHolderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c854(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_112749cf0));
  return;
}



/* Entry: 10651c8a4; end: 10651c9e3; -[SCChatTableViewGenericComposerStatusMessageHolderCell didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c8a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1a10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_didChangeVisibility__1125ba7b8);
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = param_1 + (long)_DAT_112749cec;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee7640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c101c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d80(lVar6);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 10651c9e4; end: 10651ca1f; -[SCChatTableViewGenericComposerStatusMessageHolderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651c9e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749cec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749cf0,0);
  return;
}



/* Entry: 10651ca20; end: 10651cb5b; -[SCEmptyStateTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651ca20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParameters__1125ea7e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_112749cf4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf65200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112749cf8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112749cfc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10651cb5c; end: 10651cce7; -[SCEmptyStateTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651cb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_setViewModel__1126663d8;
  puStack_48 = PTR_PTR_1126f1a18;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c12f740(param_3);
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112749cf4));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c12f740(param_3);
  func_0x00010704aa94();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112749cf8;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c12f740(param_3);
  _objc_release(param_3);
  func_0x00010704aa94(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112749cfc;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf8ebc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf15a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6));
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf8ebc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c265a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 10651cce8; end: 10651cd37; -[SCEmptyStateTableViewCell emptyChatCellViewModel] */

void FUN_10651cce8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651cd38; end: 10651d0bb; -[SCEmptyStateTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651cd38(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f1a18;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar4 = param_5;
  func_0x00010bf8ebc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf159e0();
  dVar8 = param_1;
  dVar6 = param_2;
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010bf8ebc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6500();
  _objc_release(lVar4);
  dVar6 = param_1 + dVar6;
  param_4 = param_4 + dVar6;
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar6 = dVar6 - param_4;
  uVar7 = 0x3fe0000000000000;
  dVar9 = dVar6 * 0.5;
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010bf65200(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  dVar10 = dVar6 + 4.5;
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(lVar4);
  lVar5 = (long)_DAT_112749cf4;
  func_0x00010c19f0e0(dVar9,dVar10,param_4,dVar6 - dVar10,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetWidth();
  lVar4 = (long)_DAT_112749cf8;
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  dVar6 = dVar9;
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar9 = dVar9 - dVar6;
  dVar6 = dVar9 * 0.5;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c19f0e0(dVar6,dVar8,dVar9,0x403e000000000000,*(undefined8 *)(param_5 + lVar4));
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
  _CGRectGetWidth();
  dVar6 = dVar6 - param_1;
  dVar8 = dVar6 * 0.5;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMaxY();
  lVar4 = (long)_DAT_112749cfc;
  func_0x00010c19f0e0(dVar8,dVar6 + 4.0,param_1,param_2,*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  _CGRectIntegral();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  lVar4 = param_5;
  func_0x00010bf8ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c12f740();
  _objc_release(lVar4);
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar2 == 0) {
    uVar7 = 0;
    func_0x00010c1842e0(0,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar1);
    puVar3 = *(undefined **)(param_5 + lVar5);
    func_0x00010c08c0e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
  }
  else {
    func_0x00010c1842e0(0x4030000000000000,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar1);
  }
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(uVar7);
  _objc_release(uVar1);
  return;
}



/* Entry: 10651d0bc; end: 10651d0bf; -[SCEmptyStateTableViewCell displayCell] */

void FUN_10651d0bc(void)

{
  return;
}



/* Entry: 10651d0c0; end: 10651d10f; -[SCEmptyStateTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651d0c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749cfc,0);
  _objc_storeStrong(param_1 + _DAT_112749cf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749cf4,0);
  return;
}



/* Entry: 10651d110; end: 10651d257; -[SCGroupUpdateChatCellView initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10651d110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1a20;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112749d00;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d04);
    *(undefined **)((long)puVar1 + (long)_DAT_112749d04) = puVar2;
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10651d258; end: 10651d2d3;  */

void FUN_10651d258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c253360();
  func_0x00010c0df6e0(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10651d2d4; end: 10651d4cb; -[SCGroupUpdateChatCellView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651d2d4(double param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1a20;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010bf1ec20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar5 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(lVar1);
  param_1 = param_1 - dVar5;
  dVar7 = param_1 * 0.5;
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  dVar6 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0f6520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar7,param_1,dVar5,dVar6);
  _objc_release(lVar1);
  func_0x00010c0f65e0(param_2);
  uVar2 = *(ulong *)(param_2 + _DAT_112749d04);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  lVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    lVar4 = param_2;
    func_0x00010c0cb300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    _objc_release(lVar4);
    func_0x00010c0f6720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
  }
  else {
    func_0x00010c0f6720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_1 = 0.0;
  }
  func_0x00010c19f0e0(param_1,0,*(undefined8 *)(param_2 + _DAT_112749d00));
  _objc_release(lVar1);
  return;
}



/* Entry: 10651d4cc; end: 10651d587; -[SCGroupUpdateChatCellView renderPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651d4cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_renderPayload_1126299b0);
  lVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010010fab4();
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112749d00);
  lVar2 = lVar1;
  func_0x00010bf0e560(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c16b720(uVar4);
  _objc_release(lVar2);
  return;
}



/* Entry: 10651d588; end: 10651d5eb; -[SCGroupUpdateChatCellView renderMetadata] */

void FUN_10651d588(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderMetadata_112629990);
  func_0x00010c15de80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(param_1);
  return;
}



/* Entry: 10651d5ec; end: 10651d62b; -[SCGroupUpdateChatCellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651d5ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749d04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d00,0);
  return;
}



/* Entry: 10651d62c; end: 10651d67b; -[SCMediaChatTableViewCell mediaViewModel] */

void FUN_10651d62c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651d67c; end: 10651d91b; -[SCMediaChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10651d67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f1a28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar13 = (long)_DAT_112749d08;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1d0840(*(undefined8 *)((long)puVar1 + lVar13));
    puVar2 = PTR_PTR_1126cb558;
    _objc_alloc();
    uVar10 = param_3;
    func_0x00010c0f3c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf36c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c4e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c09baa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c0f98a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf398e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033ce0();
    lVar12 = (long)_DAT_112749d0c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar10);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar9 = puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar9);
    puVar9 = puVar1;
    func_0x00010be49ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d10);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112749d10) = puVar9;
    _objc_release(uVar10);
    puVar9 = puVar1;
    func_0x00010be49ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d14);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112749d14) = puVar9;
    _objc_release(uVar10);
    puVar9 = puVar1;
    func_0x00010be49ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d18);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112749d18) = puVar9;
    _objc_release(uVar10);
    puVar9 = puVar1;
    func_0x00010be49ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749d1c);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112749d1c) = puVar9;
    _objc_release(uVar10);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10651d91c; end: 10651ddfb; -[SCMediaChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651d91c(double param_1,double param_2,double param_3,ulong param_4)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f1a28;
  uStack_90 = param_4;
  _objc_msgSendSuper2(&uStack_90,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_4;
  func_0x00010c0c7180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26dd80();
  dVar11 = param_1;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0c7180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e640();
  dVar7 = dVar11;
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112749d08;
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar6));
  uVar2 = param_4;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c12f740();
  _objc_release(uVar2);
  func_0x00010bf4c5c0(param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar6));
  if (*(long *)(param_4 + (long)_DAT_112749d20) == 0) {
    lVar6 = (long)_DAT_112749d0c;
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar6));
    dVar7 = 0.0;
    param_2 = 0.0;
    func_0x00010c19f0e0(0,0,dVar11,param_1,*(undefined8 *)(param_4 + lVar6));
    param_3 = dVar11;
  }
  iVar5 = (int)uVar3;
  uVar2 = param_4;
  if ((uVar3 & 1) == 0) {
    func_0x00010c0f6520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar11 = (double)(ulong)(uint)(int)dVar7;
    dVar7 = (double)(float)(int)dVar7;
  }
  else {
    func_0x00010c253300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar11 = dVar7;
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0c7180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2532e0();
  dVar8 = dVar11;
  _objc_release(uVar2);
  param_3 = dVar11 + param_3;
  uVar2 = param_4;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0dfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  dVar10 = param_2;
  if (uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0c7180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1780();
    _objc_release(uVar2);
    dVar10 = (dVar7 - dVar8) * 0.5;
    dVar9 = dVar8;
    if (iVar5 == 0) {
      dVar10 = 0.0;
      dVar9 = dVar7;
    }
    dVar8 = dVar10;
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_112749d10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = dVar11;
    func_0x00010c19f0e0(dVar8,dVar11,dVar9,param_2 - param_3);
    _objc_release(uVar4);
    func_0x00010be8e360(param_4);
    dVar11 = dVar11 + param_2;
  }
  uVar2 = param_4;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  dVar9 = dVar10;
  if (uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0c7180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154c00();
    _objc_release(uVar2);
    dVar9 = (dVar7 - dVar8) * 0.5;
    dVar1 = dVar8;
    if (iVar5 == 0) {
      dVar9 = 0.0;
      dVar1 = dVar7;
    }
    dVar8 = dVar9;
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_112749d14);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = dVar11;
    func_0x00010c19f0e0(dVar8,dVar11,dVar1,dVar10 - param_3);
    _objc_release(uVar4);
    func_0x00010be8e360(param_4);
    dVar11 = dVar11 + dVar10;
  }
  uVar2 = param_4;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  dVar10 = dVar9;
  if (uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0c7180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d1c0();
    _objc_release(uVar2);
    dVar10 = (dVar7 - dVar8) * 0.5;
    dVar1 = dVar8;
    if (iVar5 == 0) {
      dVar10 = 0.0;
      dVar1 = dVar7;
    }
    dVar8 = dVar10;
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_112749d18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = dVar11;
    func_0x00010c19f0e0(dVar8,dVar11,dVar1,dVar9 - param_3);
    _objc_release(uVar4);
    func_0x00010be8e360(param_4);
    dVar11 = dVar11 + dVar9;
  }
  uVar2 = param_4;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0c7180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6560();
    _objc_release(uVar2);
    dVar9 = (dVar7 - dVar8) * 0.5;
    if (iVar5 == 0) {
      dVar9 = 0.0;
      dVar8 = dVar7;
    }
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_112749d1c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar9,dVar11,dVar8,dVar10 - param_3);
    _objc_release(uVar4);
    func_0x00010be8e360(param_4);
  }
  return;
}



/* Entry: 10651ddfc; end: 10651e04f; -[SCMediaChatTableViewCell _renderRoundedCornersForLabel:] */

void FUN_10651ddfc(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c12f740();
  _objc_release(param_2);
  puVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar4 == 0) {
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    func_0x00010c1842e0(0);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
  }
  else {
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    uVar4 = 0x3fe0000000000000;
    puVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1 * 0.5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xad);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10651e050; end: 10651e337; -[SCMediaChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e050(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5428);
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puStack_48 = PTR_PTR_1126f1a28;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_setViewModel__1126663d8,param_3);
    func_0x00010be8e5c0(param_1);
    lVar1 = param_1;
    func_0x00010c0c7180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0dfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c12f740();
      func_0x00010704aa94();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112749d10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c0c7180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c12f740();
      func_0x00010704aa94();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112749d14);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c0c7180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c12f740();
      func_0x00010704aa94();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112749d18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c0c7180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0e000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c12f740();
      func_0x00010704aa94();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112749d1c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10651e338; end: 10651e3a7; -[SCMediaChatTableViewCell _renderThumbnailRoundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e338(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d0c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651e3a8; end: 10651e533; -[SCMediaChatTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e3a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_112749d10;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112749d14;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112749d18;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112749d1c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c1dcbe0(param_1);
  return;
}



/* Entry: 10651e534; end: 10651e58b; -[SCMediaChatTableViewCell renderPayload] */

void FUN_10651e534(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderPayload_1126299b0);
  func_0x00010be8e580(param_1);
  func_0x00010be8e2c0(param_1);
  func_0x00010c2a5fc0(param_1);
  return;
}



/* Entry: 10651e58c; end: 10651e60f; -[SCMediaChatTableViewCell _updateThumbnailSizeBaseOnViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e58c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e640();
  uVar2 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c0c7180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26dd80();
  _objc_release(lVar1);
  func_0x00010c214380(param_1,uVar2,*(undefined8 *)(param_2 + _DAT_112749d0c));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10651e610; end: 10651e6ef; -[SCMediaChatTableViewCell loadVideoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e610(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_2;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c28d620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4bc20();
  _objc_release(lVar1);
  _objc_release(lVar3);
  if ((int)lVar2 != 0) {
    lVar3 = param_2;
    func_0x00010c0c7180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e640();
    uVar4 = param_1;
    _objc_release(lVar3);
    lVar3 = param_2;
    func_0x00010c0c7180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26dd80();
    _objc_release(lVar3);
    lVar3 = (long)_DAT_112749d0c;
    func_0x00010c214380(param_1,uVar4,*(undefined8 *)(param_2 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c10a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + lVar3),PTR_s_prepareVideoIfNecessary_112620318);
    return;
  }
  return;
}



/* Entry: 10651e6f0; end: 10651e77f; -[SCMediaChatTableViewCell endDisplayingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e6f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_endDisplayingCell_1125c2b90);
  lVar2 = (long)_DAT_112749d0c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf16140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf16140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2559a0();
  _objc_release(uVar1);
  return;
}



/* Entry: 10651e780; end: 10651e80f; -[SCMediaChatTableViewCell willDisplayCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e780(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a28;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_willDisplayCell_112687218);
  lVar2 = (long)_DAT_112749d0c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf16140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13dae0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf16140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dc40();
  _objc_release(uVar1);
  return;
}



/* Entry: 10651e810; end: 10651e813; -[SCMediaChatTableViewCell configureWithCollectionViewDelegate:] */

void FUN_10651e810(void)

{
  return;
}



/* Entry: 10651e814; end: 10651e843; -[SCMediaChatTableViewCell contentViewForFocusedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e814(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749d0c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651e844; end: 10651e893; -[SCMediaChatTableViewCell resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e844(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112749d0c;
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112749d08),param_2,
                      *(undefined8 *)(param_1 + lVar1));
  func_0x00010bee20e0(param_1);
  func_0x00010c14df60(*(undefined8 *)(param_1 + lVar1));
  func_0x00010be8e2c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10651e894; end: 10651e913; -[SCMediaChatTableViewCell setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651e894(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749d20;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10651e914; end: 10651ea0b; -[SCMediaChatTableViewCell contentFrameInPayloadView] */

undefined8 FUN_10651e914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  uVar3 = 0x4022000000000000;
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0cb300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    _objc_release(uVar2);
    uVar3 = param_2;
  }
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c7180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6700();
  uVar2 = param_3;
  func_0x00010c0c7180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e640();
  func_0x00010c0c7180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26dd80();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10651ea0c; end: 10651ea9b; -[SCMediaChatTableViewCell thumbnailViewForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ea0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112749d0c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010bf16140(*(undefined8 *)(param_1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10651ea9c; end: 10651eaaf; -[SCMediaChatTableViewCell _lazyInitLabel] */

void FUN_10651ea9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_manualCreationWithInitialization_11260bb28,
             &PTR___NSConcreteGlobalBlock_110929d20);
  return;
}



/* Entry: 10651eab0; end: 10651eae3;  */

void FUN_10651eab0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1cfce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10651eae4; end: 10651f0ef; -[SCMediaChatTableViewCell _renderLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651eae4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf0dfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112749d10;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (lVar4 == 0) {
    if ((int)uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      goto LAB_10651ec68;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c253300(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0c7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf0dfe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar3);
    _objc_release(lVar2);
LAB_10651ec68:
    _objc_release(lVar4);
  }
  lVar5 = param_1;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf0e200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112749d14;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (lVar4 == 0) {
    if ((int)uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      goto LAB_10651ede0;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c253300(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0c7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf0e200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar3);
    _objc_release(lVar2);
LAB_10651ede0:
    _objc_release(lVar4);
  }
  lVar5 = param_1;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf0e640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112749d18;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (lVar4 == 0) {
    if ((int)uVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      goto LAB_10651ef58;
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c253300(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0c7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf0e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar3);
    _objc_release(lVar2);
LAB_10651ef58:
    _objc_release(lVar4);
  }
  lVar5 = param_1;
  func_0x00010c0c7180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf0e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112749d1c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if (lVar4 == 0) {
    if ((int)uVar1 == 0) goto LAB_10651f0d8;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
  }
  else {
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c253300(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar4);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    lVar4 = param_1;
    func_0x00010c0c7180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf0e000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720();
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
LAB_10651f0d8:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10651f0f0; end: 10651f15f; -[SCMediaChatTableViewCell _renderThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f0f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bee20e0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749d0c);
  func_0x00010c0c7180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c28d620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5680(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10651f160; end: 10651f1db; -[SCMediaChatTableViewCell shouldHandleDoubleTapGesture:] */

ulong FUN_10651f160(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb560;
  _objc_opt_class(PTR_PTR_1126cb560);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    param_1 = 1;
  }
  else {
    func_0x00010bf2d880(param_1);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10651f1dc; end: 10651f1eb; -[SCMediaChatTableViewCell mediaThumbnailView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651f1dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749d0c);
}



/* Entry: 10651f1ec; end: 10651f1fb; -[SCMediaChatTableViewCell mediaContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651f1ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749d08);
}



/* Entry: 10651f1fc; end: 10651f28b; -[SCMediaChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f1fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749d08,0);
  _objc_storeStrong(param_1 + _DAT_112749d0c,0);
  _objc_storeStrong(param_1 + _DAT_112749d20,0);
  _objc_storeStrong(param_1 + _DAT_112749d1c,0);
  _objc_storeStrong(param_1 + _DAT_112749d18,0);
  _objc_storeStrong(param_1 + _DAT_112749d14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d10,0);
  return;
}



/* Entry: 10651f28c; end: 10651f3e3; -[SCPendingStateTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651f28c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParameters__1125ea7e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf65200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112749d24;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cb568;
    func_0x00010c0f7760(PTR_PTR_1126cb568);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cb568;
    func_0x00010c0f7780(PTR_PTR_1126cb568);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10651f3e4; end: 10651f417; -[SCPendingStateTableViewCell setViewModel:] */

void FUN_10651f3e4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1a30;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 10651f418; end: 10651f41b; -[SCPendingStateTableViewCell pendingStateChatViewModel] */

void FUN_10651f418(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 10651f41c; end: 10651f48b; -[SCPendingStateTableViewCell displayCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f41c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0f7a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26ce00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112749d24;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3),PTR_s_setKerning__11264b4f0);
  return;
}



/* Entry: 10651f48c; end: 10651f53b; -[SCPendingStateTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f48c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1a30;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112749d24;
  func_0x00010c219b60(*(undefined8 *)(param_4 + lVar2));
  lVar1 = param_4;
  func_0x00010bf65200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar3 = param_3;
  _objc_release(lVar1);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0((dVar3 - param_3) * 0.5,0,param_3,0x403a000000000000,
                      *(undefined8 *)(param_4 + lVar2));
  return;
}



/* Entry: 10651f53c; end: 10651f54f; -[SCPendingStateTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749d24,0);
  return;
}



/* Entry: 10651f550; end: 10651f583; -[SCPlaceholderTableViewCell setViewModel:] */

void FUN_10651f550(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1a38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 10651f584; end: 10651f587; -[SCPlaceholderTableViewCell placeholderChatViewModel] */

void FUN_10651f584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 10651f588; end: 10651f5bb; -[SCPlaceholderTableViewCell displayCell] */

void FUN_10651f588(undefined8 param_1)

{
  func_0x00010bf65200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10651f5bc; end: 10651f663; -[SCSavableItemChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651f5bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1a40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParameters__1125ea7e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_112749d28;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0f6520(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10651f664; end: 10651f667; -[SCSavableItemChatTableViewCell savableItemViewModel] */

void FUN_10651f664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 10651f668; end: 10651f783; -[SCSavableItemChatTableViewCell savedNotifView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749d2c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cb570;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1f5b80(*(undefined8 *)(param_1 + lVar4),param_2,
                        *(undefined1 *)(param_1 + _DAT_112749d30));
    lVar3 = param_1;
    func_0x00010bf1ec20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf1ec20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cda0();
    _objc_release(lVar3);
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10651f784; end: 10651f8eb; -[SCSavableItemChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f784(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cb578;
  _objc_opt_class(PTR_PTR_1126cb578);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = param_1;
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb578;
  _objc_opt_class(PTR_PTR_1126cb578);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if ((uVar1 == 0 || uVar4 == 0) || (uVar5 = param_3, func_0x00010c149ee0(), uVar5 == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(param_1 + (long)_DAT_112749d34);
  }
  puStack_48 = PTR_PTR_1126f1a40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setViewModel__1126663d8,param_3);
  iVar2 = 1;
  func_0x00010706a978(1,param_3);
  if (((bVar7 & 1) != 0) || (iVar2 != 0)) {
    func_0x00010be92240(param_1);
    if ((bVar7 & 1) == 0) {
      func_0x00010c21c2c0(param_1);
    }
    else {
      func_0x00010c289660();
    }
    func_0x00010c1cbe20(param_1);
    func_0x00010c08cdc0(param_1);
    func_0x00010bf030a0(param_1);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10651f8ec; end: 10651f96b; -[SCSavableItemChatTableViewCell _savedPayloadCornerMask] */

ulong FUN_10651f8ec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1;
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c274860();
  _objc_release(uVar3);
  uVar1 = 2;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf20400();
  _objc_release(param_1);
  uVar2 = uVar1 | 8;
  if ((int)uVar3 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10651f96c; end: 10651fe23; -[SCSavableItemChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651f96c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  ulong uStack_80;
  undefined *puStack_78;
  
  if ((*(byte *)(param_5 + (long)_DAT_112749d38) & 1) == 0) {
    puStack_78 = PTR_PTR_1126f1a40;
    uStack_80 = param_5;
    _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
    uVar1 = param_5;
    func_0x00010c15de80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar2 = param_5;
    dVar9 = param_1;
    func_0x00010c149de0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a50e0();
    func_0x00010bc85050(param_1,param_2,param_3,param_4,dVar9);
    uVar3 = param_5;
    func_0x00010c15de80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dce0();
    uVar2 = param_5;
    dVar9 = param_1;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dc40();
    param_1 = param_1 + dVar9;
    uVar3 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15dc20();
    param_1 = param_1 + dVar9;
    uVar4 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcee0();
    param_1 = param_1 + dVar9;
    uVar5 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540();
    param_1 = param_1 + dVar9;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a50e0();
    dVar14 = dVar9 * 0.5;
    _objc_release(uVar1);
    func_0x00010c0f65e0(param_5);
    uVar1 = param_5;
    dVar11 = dVar9;
    func_0x00010c0cb300(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6780();
    _objc_release(uVar1);
    func_0x00010c19f0e0(dVar14,param_1,dVar11 - dVar14,dVar9,
                        *(undefined8 *)(param_5 + (long)_DAT_112749d28));
    uVar1 = param_5;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f740();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      dVar9 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar11 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      uVar12 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      uVar6 = *(undefined8 *)(param_5 + (long)_DAT_112749d2c);
    }
    else {
      uVar6 = *(undefined8 *)(param_5 + (long)_DAT_112749d2c);
      dVar9 = 4.0;
      dVar11 = 8.0;
      uVar12 = 0x4010000000000000;
      uVar13 = 0x4020000000000000;
    }
    lVar8 = (long)_DAT_112749d2c;
    func_0x00010c1ad980(dVar9,dVar11,uVar12,uVar13,uVar6);
    func_0x00010c0877a0(*(undefined8 *)(param_5 + lVar8));
    func_0x00010c0877a0(*(undefined8 *)(param_5 + lVar8));
    uVar1 = param_5;
    dVar14 = dVar9;
    func_0x00010c0f6520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar10 = dVar14;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f740();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_5;
      func_0x00010c0cb300(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15dc40();
      dVar14 = dVar14 + dVar10;
      _objc_release(uVar1);
    }
    uVar1 = param_5;
    func_0x00010c0f6520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    uVar6 = 0x3fe0000000000000;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c12f740();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar12 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c08c0e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      func_0x00010c1842e0(0);
      _objc_release(uVar12);
      puVar7 = *(undefined **)(param_5 + lVar8);
      func_0x00010c08c0e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
    }
    else {
      uVar13 = NEON_fminnm(dVar11 * 0.5,0x4030000000000000);
      uVar12 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c08c0e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar13);
      _objc_release(uVar12);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar12 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c08c0e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar12);
    }
    _objc_release(puVar7);
    uVar12 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c08c0e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(uVar6);
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar8));
    func_0x00010c19f0e0(-dVar9,(dVar14 + dVar10 * 0.5) - dVar11 * 0.5,dVar9,dVar11,
                        *(undefined8 *)(param_5 + lVar8));
    func_0x00010bed3b60(param_5);
  }
  return;
}



/* Entry: 10651fe24; end: 10651fe6b; -[SCSavableItemChatTableViewCell traitCollectionDidChange:] */

void FUN_10651fe24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed5820(param_1);
  return;
}



/* Entry: 10651fe6c; end: 10651ff6f; -[SCSavableItemChatTableViewCell renderRoundCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651fe6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_renderRoundCorners_112629a08);
  lVar5 = (long)_DAT_112749d3c;
  func_0x00010c12c940(*(undefined8 *)(param_1 + lVar5));
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c12f740();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010bed3b60(param_1);
    func_0x00010bed5820(param_1);
    func_0x00010c1bdd00(0,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c227960(0xbff0000000000000,*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + _DAT_112749d28);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar4);
  }
  else {
    func_0x00010bed5820(param_1);
  }
  return;
}



/* Entry: 10651ff70; end: 10652002b; -[SCSavableItemChatTableViewCell _updateBackgroundLayerPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ff70(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010be9a560(param_1);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + (long)_DAT_112749d28));
  func_0x00010bf199e0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + (long)_DAT_112749d3c),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10652002c; end: 106520173; -[SCSavableItemChatTableViewCell _updateColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652002c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c12f740();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar5 = (long)_DAT_112749d3c;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c149de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf40ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c13afc0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
  }
  else {
    lVar2 = param_1;
    func_0x00010c149de0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf40ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    lVar3 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106520174; end: 1065201b7; -[SCSavableItemChatTableViewCell senderLineWidth] */

undefined8 FUN_106520174(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a50e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065201b8; end: 1065201ff; -[SCSavableItemChatTableViewCell renderMetadata] */

void FUN_1065201b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderMetadata_112629990);
  func_0x00010c21c2c0(param_1);
  return;
}



/* Entry: 106520200; end: 10652023f; -[SCSavableItemChatTableViewCell setUpNotifViewForSavedState] */

void FUN_106520200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2340e0();
  func_0x00010c289660(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106520240; end: 10652025b; -[SCSavableItemChatTableViewCell updateSavedLabelToSaved:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749d30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1f5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749d2c),PTR_s_setSavedState__11265b108);
  return;
}



/* Entry: 10652025c; end: 10652031f; -[SCSavableItemChatTableViewCell _resetAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652025c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749d38;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112749d2c);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar1);
    func_0x00010c12d880(param_1);
    uVar2 = param_1;
    func_0x00010c0cb300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c12f740();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112749d28);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(uVar1);
    }
    func_0x00010c21c200(param_1);
    *(undefined1 *)(param_1 + lVar4) = 0;
  }
  return;
}



/* Entry: 106520320; end: 106520467; -[SCSavableItemChatTableViewCell animateSavedOrUnsaved] */

void FUN_106520320(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c149de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2340c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c0cb300(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c234260();
      lVar2 = param_1;
      func_0x00010c15de80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c14ba40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106520468;
      puStack_40 = &UNK_110842e18;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1065204bc;
      puStack_68 = &UNK_110841f20;
      lStack_60 = param_1;
      lStack_38 = param_1;
      func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20006,
                          &puStack_58,&puStack_80);
    }
  }
  return;
}



/* Entry: 106520468; end: 1065204bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520468(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112749d38) = 1;
  func_0x00010bea93c0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1ec20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065204bc; end: 106520553;  */

void FUN_1065204bc(long param_1,int param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106520554;
    puStack_20 = &UNK_110842e18;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106520594;
    puStack_48 = &UNK_110841f20;
    uStack_18 = uStack_40;
    func_0x00010bf03440(0x3fd0000000000000,0x3ff8000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,0x20006,&puStack_38,&puStack_60);
  }
  return;
}



/* Entry: 106520554; end: 1065205ef;  */

void FUN_106520554(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c21c200(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1ec20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065205f0; end: 1065206db; -[SCSavableItemChatTableViewCell handleEndOfAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065205f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = param_1 + (long)_DAT_112749d40;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c149e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf03aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf337c0(lVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065206dc; end: 106520773; -[SCSavableItemChatTableViewCell _setUpForMoveToTheRight] */

void FUN_1065206dc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar1 = param_2;
  func_0x00010c14ba40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0877a0();
  _objc_release(uVar1);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_60,param_1 + 9.0,0,&uStack_90);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c0d1940(param_2,param_3,&uStack_90);
  return;
}



/* Entry: 106520774; end: 10652083b; -[SCSavableItemChatTableViewCell moveWithSaveSlideTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520774(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  uVar1 = param_1;
  func_0x00010c14ba40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  func_0x00010bf08a60(param_1,param_2,&uStack_60);
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_48 = param_3[3];
    uStack_50 = param_3[2];
    uStack_38 = param_3[5];
    uStack_40 = param_3[4];
    func_0x00010c219960(*(undefined8 *)(param_1 + (long)_DAT_112749d28),param_2,&uStack_60);
  }
  return;
}



/* Entry: 10652083c; end: 106520903; -[SCSavableItemChatTableViewCell setUpForMoveBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652083c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  uStack_50 = uVar7;
  uStack_48 = uVar8;
  uStack_40 = uVar4;
  uStack_38 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + (long)_DAT_112749d2c),param_2,&uStack_60);
  uStack_60 = uVar3;
  uStack_58 = uVar5;
  uStack_50 = uVar7;
  uStack_48 = uVar8;
  uStack_40 = uVar4;
  uStack_38 = uVar6;
  func_0x00010bf08a60(param_1,param_2,&uStack_60);
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uStack_60 = uVar3;
    uStack_58 = uVar5;
    uStack_50 = uVar7;
    uStack_48 = uVar8;
    uStack_40 = uVar4;
    uStack_38 = uVar6;
    func_0x00010c219960(*(undefined8 *)(param_1 + (long)_DAT_112749d28),param_2,&uStack_60);
  }
  return;
}



/* Entry: 106520904; end: 1065209df; -[SCSavableItemChatTableViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520904(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareForReuse_112620008);
  uVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112749d28);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112749d2c);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  func_0x00010c12d880(param_1);
  *(undefined1 *)(param_1 + (long)_DAT_112749d38) = 0;
  *(undefined1 *)(param_1 + (long)_DAT_112749d34) = 0;
  return;
}



/* Entry: 1065209e0; end: 106520c27; -[SCSavableItemChatTableViewCell highlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065209e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106520c28;
  uStack_60 = 0x106520c38;
  uStack_58 = 0;
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c15dea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bddc0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c12f740();
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    _objc_retainAutorelease(puStack_78[5]);
    func_0x00010bdc0fe0();
    lVar3 = (long)_DAT_112749d3c;
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
    uVar2 = puStack_78[5];
    lVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13afc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3));
    _objc_release(uVar2);
  }
  else {
    lVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_106520be0;
    func_0x00010c0f6520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    lVar1 = param_1;
  }
  _objc_release(lVar1);
  _dispatch_time(0,1000000000);
  func_0x00010058c530();
LAB_106520be0:
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  return;
}



/* Entry: 106520c28; end: 106520c3f;  */

void FUN_106520c28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106520c40; end: 106520c83;  */

void FUN_106520c40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106520c84; end: 106520cff;  */

void FUN_106520c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106520d00; end: 106520d07;  */

void FUN_106520d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateColors_112592fb0);
  return;
}



/* Entry: 106520d08; end: 106520ed7; -[SCSavableItemChatTableViewCell maxXCoodinateForWhitespaceTapToSave] */

double FUN_106520d08(double param_1,double param_2,undefined8 param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = param_5;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar1 = param_5;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cb4d0;
    _objc_opt_class(PTR_PTR_1126cb4d0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar1;
  func_0x000107d6aa4c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    puVar2 = PTR_PTR_1126c6a40;
    func_0x00010c07d020();
    if (((ulong)puVar2 & 1) != 0) {
      dVar7 = -1.79769313486232e+308;
      goto LAB_106520eac;
    }
  }
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  dVar6 = param_2;
  func_0x00010c0f6540(param_5);
  param_2 = param_2 + param_4;
  func_0x00010c0f6740(param_5);
  func_0x00010c0f6740(param_5);
  func_0x00010c0f6600(param_5);
  uVar3 = param_5;
  dVar5 = param_1;
  func_0x00010c12f740();
  if ((int)uVar3 == 0) {
    func_0x00010c0cb360(param_5);
  }
  else {
    func_0x00010c0f6580(param_5);
  }
  dVar7 = dVar5;
  func_0x00010befd520(param_5);
  dVar7 = param_1 + param_2 + dVar6 + param_4 + dVar5 + dVar7;
  _objc_release(param_5);
LAB_106520eac:
  _objc_release(uVar4);
  _objc_release(uVar1);
  return dVar7;
}



/* Entry: 106520ed8; end: 106520ee7; -[SCSavableItemChatTableViewCell backgroundLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106520ed8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749d3c);
}



/* Entry: 106520ee8; end: 106520f27; -[SCSavableItemChatTableViewCell setBackgroundLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d3c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106520f28; end: 106520f37; -[SCSavableItemChatTableViewCell shouldAnimateOnSave] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106520f28(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749d34);
}



/* Entry: 106520f38; end: 106520f47; -[SCSavableItemChatTableViewCell setShouldAnimateOnSave:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106520f38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749d34) = param_3;
  return;
}


