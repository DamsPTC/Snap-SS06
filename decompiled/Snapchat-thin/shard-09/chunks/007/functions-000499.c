/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070c8828; end: 1070c8943; -[PreviewViewController _presentSaveAsCopyAlertWithAlertType:completionHandler:] */

void FUN_1070c8828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1070c8944;
  puStack_60 = &UNK_110894fc8;
  uStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_1;
  func_0x00010bdc9bc0(param_1,param_2,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf71d60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237000();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 1070c8944; end: 1070c89f7;  */

void FUN_1070c8944(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 2) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
      uVar1 = 2;
LAB_1070c89ac:
                    /* WARNING: Could not recover jumptable at 0x0001070c89b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar2,uVar1);
      return;
    }
  }
  else if (param_2 == 1) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
      uVar1 = 1;
      goto LAB_1070c89ac;
    }
  }
  else if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x30) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c14b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar1,PTR_s_saveSpectaclesLensWithCompletion_112630640,
                 *(undefined8 *)(param_1 + 0x28));
      return;
    }
    func_0x00010be82ee0(uVar1,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239680();
    func_0x00010bddde40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1070c89f8; end: 1070c8cbf; -[PreviewViewController _alertForSpectaclesShowSave:completionHandler:] */

void FUN_1070c89f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aed70;
  uVar9 = param_1;
  func_0x00010bdc4780(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar2 = PTR_PTR_1126aed70;
  uVar9 = param_1;
  func_0x00010be9ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dcc5f8;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  uVar9 = param_1;
  func_0x00010becc4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec8a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(uVar9);
  func_0x00010c211b40(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf84b00(uVar7);
  _objc_release(uVar9);
  return;
}



/* Entry: 1070c8cc0; end: 1070c8d37;  */

void FUN_1070c8cc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070c8d38; end: 1070c8d4f;  */

void FUN_1070c8d38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001070c8d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1070c8d50; end: 1070c8dd7;  */

void FUN_1070c8d50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070c8dd8; end: 1070c8dff;  */

void FUN_1070c8dd8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = 3;
    if (*(long *)(param_1 + 0x28) != 4) {
      uVar1 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001070c8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 1070c8e00; end: 1070c8e4f;  */

void FUN_1070c8e00(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,2);
  }
  func_0x00010bf84b00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070c8e50; end: 1070c8eab; -[PreviewViewController _actionTitleForSaveAlertType:] */

void FUN_1070c8e50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    if ((1L << (param_3 & 0x3f) & 0x2dU) == 0) {
      if (param_3 == 4) {
        func_0x000108544a60();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85c38,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c8eac; end: 1070c8eeb; -[PreviewViewController _secondaryActionTitleForSaveAlertType:] */

void FUN_1070c8eac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 < 6) && ((0x3dU >> (ulong)((uint)param_3 & 0x1f) & 1) != 0)) {
    func_0x00010bcbeaa8((&PTR_PTR_11098d3a8)[param_3],0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c8eec; end: 1070c8f4f; -[PreviewViewController _titleForSaveAlertType:] */

void FUN_1070c8eec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 4) {
    if (1 < param_3 - 2U) {
      if (param_3 == 0) {
        func_0x000108544a78();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1070c8f48;
    }
  }
  else {
    if (param_3 == 4) {
      func_0x000108544a30();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1070c8f48;
    }
    if (param_3 != 5) goto LAB_1070c8f48;
  }
  func_0x0001085449d0();
  _objc_retainAutoreleasedReturnValue();
LAB_1070c8f48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1070c8f50; end: 1070c906f; -[PreviewViewController _subtitleForSaveAlertType:] */

void FUN_1070c8f50(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x19;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 < 3) {
    if (param_3 == 0) {
      func_0x000108544a90();
      _objc_retainAutoreleasedReturnValue();
      unaff_x19 = param_1;
      goto LAB_1070c9058;
    }
    if (param_3 != 2) goto LAB_1070c9058;
    func_0x000108544a18();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x0001085449e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    func_0x000108544a18();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x000108544a00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 4) {
      func_0x000108544a48();
      _objc_retainAutoreleasedReturnValue();
      unaff_x19 = param_1;
      goto LAB_1070c9058;
    }
    if (param_3 != 5) goto LAB_1070c9058;
    func_0x000108544a18();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x0001085936d0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  unaff_x19 = puVar2;
LAB_1070c9058:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1070c9070; end: 1070c9227; -[PreviewViewController _checkLowDiskAndSaveSnapAsCopyWithProgressController:completionHandler:] */

void FUN_1070c9070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1070c9140;
  puStack_50 = &UNK_110866910;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c238360(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070c9228; end: 1070c933f; -[PreviewViewController _progressControllerWithDownloadProcessIncluded:] */

void FUN_1070c9228(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07f160();
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      puVar6 = PTR_PTR_1126b24b8;
      _objc_alloc(PTR_PTR_1126b24b8);
      func_0x00010c03b480(0x3f800000);
      func_0x00010befa120(puVar3,param_2,puVar6);
      _objc_release(puVar6);
    }
    puVar4 = PTR_PTR_1126b24b8;
    _objc_alloc(PTR_PTR_1126b24b8);
    func_0x00010c03b480(0x40000000);
    func_0x00010befa120(puVar3,param_2,puVar4);
    puVar6 = PTR_PTR_1126b24c0;
    _objc_alloc(PTR_PTR_1126b24c0);
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bff0fa0(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1070c9340; end: 1070c943b; -[PreviewViewController avMetadataItemsForSnapSave:] */

void FUN_1070c9340(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = param_1;
  func_0x00010be40d60();
  if (((uVar6 & 1) == 0) && (uVar1 = param_3, func_0x00010b5fa760(), (int)uVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001070c47d8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0b480();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cc320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf12460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1070c943c; end: 1070c967f; -[PreviewViewController avMetadataItemsForMultiSnapSave:timeRanges:] */

void FUN_1070c943c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar11;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
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
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  lVar9 = param_4;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x20 = *plStack_120;
    unaff_x23 = lVar9;
    lStack_170 = param_4;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != unaff_x20) {
          _objc_enumerationMutation(lStack_170);
        }
        lVar11 = *(long *)(lStack_128 + lVar9 * 8);
        unaff_x24 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x0001070c47d8();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010bf0b480();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = unaff_x26;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 == 0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_160,lVar11);
        }
        puVar8 = &uStack_160;
        lVar11 = lVar2;
        puVar7 = puStack_168;
        func_0x00010c0cc8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        param_4 = lStack_170;
        if (lVar11 == 0) {
          _objc_release(lStack_170);
          puVar10 = (undefined8 *)0x0;
          goto LAB_1070c9628;
        }
        unaff_x24 = lVar11;
        func_0x00010bf12460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,unaff_x24);
        _objc_release(unaff_x24);
        _objc_release(lVar11);
        param_4 = lStack_170;
        lVar9 = lVar9 + 1;
      } while (unaff_x23 != lVar9);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      unaff_x23 = lStack_170;
      func_0x00010bf52a60();
    } while (unaff_x23 != 0);
  }
  _objc_release(param_4);
  _objc_retain(puVar1);
  puVar10 = puVar1;
LAB_1070c9628:
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar3 = puStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_178 = FUN_1070c9680;
  lStack_1c0 = unaff_x26;
  lStack_1b8 = unaff_x25;
  lStack_1b0 = unaff_x24;
  lStack_1a8 = unaff_x23;
  puStack_1a0 = puVar10;
  puStack_198 = puVar1;
  lStack_190 = unaff_x20;
  lStack_188 = param_4;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar1 = puVar3;
  func_0x00010be40d60();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010b5fa760();
    _objc_release(puVar1);
    if ((int)puVar10 != 0) goto LAB_1070c96ec;
    puVar10 = (undefined8 *)0x0;
  }
  else {
LAB_1070c96ec:
    puVar1 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x0) {
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_1f0,puVar1);
    }
    _objc_release(puVar1);
    puVar1 = puVar8;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x0) {
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
    }
    else {
      func_0x00010bdc1120(&uStack_240,puVar1);
    }
    _CMTimeRangeGetEnd(&uStack_208,&uStack_240);
    uStack_1d0 = uStack_200;
    uStack_1d8 = uStack_208;
    uStack_1c8 = uStack_1f8;
    _objc_release(puVar1);
    func_0x00010c13b540(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x0001070c47d8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf0b480();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = uStack_1e8;
    uStack_240 = uStack_1f0;
    uStack_228 = uStack_1d8;
    uStack_230 = uStack_1e0;
    uStack_218 = uStack_1c8;
    uStack_220 = uStack_1d0;
    puVar6 = puVar5;
    func_0x00010c0cc8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010bf12460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1070c9680; end: 1070c985f; -[PreviewViewController avMetadataItemsForLongSnapSave:timeRanges:] */

void FUN_1070c9680(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar8 = param_1;
  func_0x00010be40d60();
  if ((uVar8 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010b5fa760();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar8 = 0;
      goto LAB_1070c9830;
    }
  }
  lVar3 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_80,lVar3);
  }
  _objc_release(lVar3);
  lVar3 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010bdc1120(&uStack_d0,lVar3);
  }
  _CMTimeRangeGetEnd(&uStack_98,&uStack_d0);
  uStack_60 = uStack_90;
  uStack_68 = uStack_98;
  uStack_58 = uStack_88;
  _objc_release(lVar3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001070c47d8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf0b480();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar7 = uVar6;
  func_0x00010c0cc8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf12460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
LAB_1070c9830:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1070c9860; end: 1070c9947; -[PreviewViewController sojuMediaTypeForSpectaclesSaveAsVideo] */

long FUN_1070c9860(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  if (lVar3 == 0) {
    lVar3 = 0xd;
    goto LAB_1070c992c;
  }
  if (lVar3 == 1) {
    if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010b5fa088(), lVar3 == 2)) {
      lVar3 = 0xe;
      goto LAB_1070c992c;
    }
    lVar3 = lVar2;
    func_0x00010b5fa088();
    if (lVar3 == 8) {
      lVar3 = 0xc;
      goto LAB_1070c992c;
    }
  }
  lVar3 = lVar2;
  func_0x00010b5fa414(lVar2);
LAB_1070c992c:
  _objc_release(lVar2);
  return lVar3;
}



/* Entry: 1070c9948; end: 1070c994f; -[PreviewViewController shouldShowSpectaclesLensPushInPreviewNow] */

undefined8 FUN_1070c9948(void)

{
  return 1;
}



/* Entry: 1070c9950; end: 1070c9aeb; -[PreviewViewController selectLensStudioPushedSpectaclesLensFilterInSwipeFilterView:] */

void FUN_1070c9950(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c08fa60();
  if (param_3 != 0) {
    func_0x000108544aa8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x000108544ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aed70;
    lVar2 = lVar1;
    func_0x000108edeaf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar4);
    _objc_release(puVar5);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bf71d60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237000();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1070c9aec; end: 1070c9afb;  */

void FUN_1070c9aec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1070c9afc; end: 1070c9b1f; -[PreviewViewController previewExporterDidStartSpectaclesCustomExporting:] */

void FUN_1070c9afc(undefined8 param_1)

{
  func_0x00010c256e40();
                    /* WARNING: Could not recover jumptable at 0x00010c256110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopImageDisplayIfNecessary_112673268);
  return;
}



/* Entry: 1070c9b20; end: 1070c9b43; -[PreviewViewController previewExporterDidFinishSpectaclesCustomExporting:] */

void FUN_1070c9b20(undefined8 param_1)

{
  func_0x00010c24ef40();
                    /* WARNING: Could not recover jumptable at 0x00010c23ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showVideoIfNecessary_11266c538);
  return;
}



/* Entry: 1070c9b44; end: 1070c9dcf; -[PreviewViewController rotationFeature:setTransform:] */

void FUN_1070c9b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beffa20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 1070c9dd0; end: 1070ca31b; -[PreviewViewController genericAssetForTrimmedSpectaclesSixDofWithCompletion:] */

void FUN_1070c9dd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_160;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = param_1;
  func_0x00010c1111c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c127e00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  if (lVar3 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1070ca31c;
    uStack_a0 = 0x1070ca32c;
    uStack_98 = 0;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1070ca338;
    puStack_d0 = &UNK_11098d378;
    puStack_b8 = puStack_c8;
    func_0x00010c0bc920(lVar3);
    if (puStack_b8[5] == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      lVar8 = param_1;
      func_0x00010bfd54a0();
      if ((int)lVar8 == 0) {
        lVar8 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar8;
        func_0x00010c29a9c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar8 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar8;
        func_0x00010c100500();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          uVar10 = 0;
          lStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_120,lVar4);
          uVar10 = uStack_118._4_4_;
        }
        lVar12 = lStack_f8;
        uStack_160 = uStack_100;
        lVar11 = lStack_108;
        uVar9 = uStack_110;
        uStack_90 = uStack_120;
        uStack_88 = (undefined4)uStack_118;
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      else {
        lVar8 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar8;
        func_0x00010c26fea0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar8);
        if (lVar1 == 0) {
          uStack_118._4_4_ = 0;
          lStack_108 = 0;
          uStack_110 = 0;
          lStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_120,lVar1);
        }
        uStack_90 = uStack_120;
        uStack_88 = (undefined4)uStack_118;
        uVar9 = uStack_110;
        lVar11 = lStack_108;
        lVar12 = lStack_f8;
        uVar10 = uStack_118._4_4_;
        uStack_160 = uStack_100;
      }
      _objc_release(lVar1);
      if (((((uVar10 & 1) == 0) || ((uStack_160 & 0x100000000) == 0)) || (lVar12 != 0)) ||
         (lVar11 < 0)) {
        lVar8 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar8;
        func_0x0001070c47d8();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf0b480();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        uStack_120 = uStack_90;
        uStack_118 = CONCAT44(uVar10,uStack_88);
        uStack_100 = uStack_160;
        lVar7 = lVar4;
        uStack_110 = uVar9;
        lStack_108 = lVar11;
        lStack_f8 = lVar12;
        func_0x00010c27c8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(param_1);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(lVar8);
        if (lVar7 == 0) {
          (**(code **)(param_3 + 0x10))(param_3,0);
        }
        else {
          lVar8 = param_3;
          _objc_retain(param_3);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(lVar7);
          _objc_release(lVar8);
          _objc_release(param_3);
        }
        _objc_release(lVar7);
      }
      else {
        (**(code **)(param_3 + 0x10))(param_3,0);
      }
    }
    __Block_object_dispose(&uStack_c0,8);
    _objc_release(uStack_98);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 1070ca31c; end: 1070ca337;  */

void FUN_1070ca31c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1070ca338; end: 1070ca3a7;  */

void FUN_1070ca338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bfad280(param_2,param_2,&PTR____CFConstantStringClassReference_110f72818);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ca3a8; end: 1070ca423;  */

void FUN_1070ca3a8(long param_1,long param_2)

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



/* Entry: 1070ca424; end: 1070ca8ff; -[SCPreviewExporter presentCustomExportWithSnapVideoFilter:image:previewBlob:] */

void FUN_1070ca424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

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
  undefined *puVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar11 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar11);
  if (lVar2 == 0) {
    lVar11 = 0;
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar2;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109023974();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_78,param_3);
  puVar4 = PTR_PTR_1126d4bd8;
  _objc_alloc();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_7);
  func_0x00010c02a1c0(param_1,param_2);
  lVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110ca0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf855e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c110cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar1 = param_3;
  lVar3 = param_3;
  lVar7 = param_3;
  if (param_5 == 0) {
    if (param_6 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_1070ca818;
    }
    puVar10 = PTR_PTR_1126d4be0;
    _objc_alloc(PTR_PTR_1126d4be0);
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056c60(puVar10);
  }
  else {
    lVar8 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0d2100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010c26f640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214ee0(param_5);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(lVar8);
    puVar10 = PTR_PTR_1126d4be0;
    _objc_alloc(PTR_PTR_1126d4be0);
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056c80(puVar10);
  }
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar1);
LAB_1070ca818:
  func_0x00010c248640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1070ca900; end: 1070caae7;  */

void FUN_1070ca900(long param_1,undefined8 param_2)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR_PTR_1126d2678;
    _objc_alloc(PTR_PTR_1126d2678);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf91760();
    uVar5 = uVar1;
    func_0x00010c293740(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c29b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf4c2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar1;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    func_0x00010bfe8640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039720(puVar15,param_2,uVar14,1,uVar4 & 0xffffffff,0,uVar5,uVar7,uVar8,uVar9,uVar10
                        ,uVar11,uVar12,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1070caae8; end: 1070caba7; -[SCPreviewExporter spectaclesPreviewCustomExportScope:didSucceedExporting:cancelled:alertDisplayed:activityType:] */

void FUN_1070caae8(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  lVar1 = param_1;
  func_0x00010c248640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef14c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(in_x6);
  _objc_release(lVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c110c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070caba8; end: 1070cac13; -[SCPreviewFiltersControllerDelegateHandler initWithPreviewViewController:] */

undefined1 * FUN_1070caba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8a30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070cac14; end: 1070cac4b; -[SCPreviewFiltersControllerDelegateHandler filtersPreviewCancelled] */

long FUN_1070cac14(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c110620();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1070cac4c; end: 1070cac93; -[SCPreviewFiltersControllerDelegateHandler filtersDidGenerateReverseAudioData:] */

void FUN_1070cac4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1edd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cac94; end: 1070cacdb; -[SCPreviewFiltersControllerDelegateHandler filtersGetVideoProviderWithHandler:] */

void FUN_1070cac94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29aee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cacdc; end: 1070cad07; -[SCPreviewFiltersControllerDelegateHandler filtersDidScoll] */

void FUN_1070cacdc(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe2600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cad08; end: 1070cad7b; -[SCPreviewFiltersControllerDelegateHandler filtersWillBeginScrolling] */

void FUN_1070cad08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c111f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24eb00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24e500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cad7c; end: 1070cadab; -[SCPreviewFiltersControllerDelegateHandler filtersWillEndScrolling] */

void FUN_1070cad7c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cadac; end: 1070cadd7; -[SCPreviewFiltersControllerDelegateHandler filtersDidEndDecelerating] */

void FUN_1070cadac(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28a0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cadd8; end: 1070cae07; -[SCPreviewFiltersControllerDelegateHandler filtersStateChangeNeedsUpdateThumbnails] */

void FUN_1070cadd8(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c242fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cae08; end: 1070cae8f; -[SCPreviewFiltersControllerDelegateHandler filtersShowPlacePickerTrayOnVenueTapped:suggestedVenues:venueIDToDistanceStringMap:] */

void FUN_1070cae08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2391a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cae90; end: 1070caebb; -[SCPreviewFiltersControllerDelegateHandler filtersUpdateGeofilterLoadingStageForLogging] */

void FUN_1070cae90(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c286260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070caebc; end: 1070caee7; -[SCPreviewFiltersControllerDelegateHandler filtersUpdateXButtonState] */

void FUN_1070caebc(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28d160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070caee8; end: 1070caf57; -[SCPreviewFiltersControllerDelegateHandler filtersLocationAuthorized] */

long FUN_1070caee8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c076e40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1070caf58; end: 1070cafbf; -[SCPreviewFiltersControllerDelegateHandler filtersRequestToUseUserLocationWithPreRequestBlock:] */

void FUN_1070caf58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c09ea80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136c80();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cafc0; end: 1070cafff; -[SCPreviewFiltersControllerDelegateHandler filtersInfoStickerDataProvider] */

void FUN_1070cafc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfede80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1070cb000; end: 1070cb003; -[SCPreviewFiltersControllerDelegateHandler filtersDidUpdateStickersTimestamp:] */

void FUN_1070cb000(void)

{
  return;
}



/* Entry: 1070cb004; end: 1070cb007; -[SCPreviewFiltersControllerDelegateHandler filtersDidUpdateStickersWeatherWithTempretureC:tempretureF:] */

void FUN_1070cb004(void)

{
  return;
}



/* Entry: 1070cb008; end: 1070cb00f; -[SCPreviewFiltersControllerDelegateHandler .cxx_destruct] */

void FUN_1070cb008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1070cb010; end: 1070cb17f;  */

void FUN_1070cb010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5fa8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x00010c205d00(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c2440e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196760();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2440e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203860();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2440e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c99a0();
  _objc_release(param_2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2440e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9a00();
  _objc_release(param_4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2440e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c21e120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1070cb180; end: 1070cb59b;  */

void FUN_1070cb180(ulong param_1,undefined *param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == (undefined *)0x0) ||
     (uVar1 = param_1, func_0x00010c233c60(), puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     (uVar1 & 1) == 0)) {
    _objc_retain(param_2);
    puVar3 = param_2;
  }
  else {
    puVar2 = param_2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uVar1 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar11 = *plStack_1b0;
      do {
        uVar7 = 0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(uVar5);
          }
          lVar10 = *(long *)(lStack_1b8 + uVar7 * 8);
          if (lVar10 == 0) {
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_220 = 0;
            uStack_218 = 0;
            uStack_210 = 0;
            _CMTimeGetSeconds(&uStack_220);
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
          }
          else {
            func_0x00010bdc1120(&uStack_1f0,lVar10);
            uStack_218 = uStack_1e8;
            uStack_220 = uStack_1f0;
            uStack_210 = uStack_1e0;
            _CMTimeGetSeconds(&uStack_220);
            func_0x00010bdc1120(&uStack_220,lVar10);
          }
          uStack_238 = uStack_200;
          uStack_240 = uStack_208;
          uStack_230 = uStack_1f8;
          _CMTimeGetSeconds(&uStack_240);
          func_0x00010bf06ba0(puVar4);
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
        uVar1 = uVar5;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    _objc_release(uVar5);
    func_0x00010bf070e0(puVar4);
    _objc_retain(param_4);
    lVar11 = param_4;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar11 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar9 = *(long *)(lVar8 * 8);
        if (lVar9 == 0) {
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_220 = 0;
          uStack_218 = 0;
          uStack_210 = 0;
          _CMTimeGetSeconds(&uStack_220);
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_1f0,lVar9);
          uStack_218 = uStack_1e8;
          uStack_220 = uStack_1f0;
          uStack_210 = uStack_1e0;
          _CMTimeGetSeconds(&uStack_220);
          func_0x00010bdc1120(&uStack_220,lVar9);
        }
        uStack_238 = uStack_200;
        uStack_240 = uStack_208;
        uStack_230 = uStack_1f8;
        _CMTimeGetSeconds(&uStack_240);
        func_0x00010bf06ba0(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar11 != lVar8);
      lVar11 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar6 = param_2;
    func_0x00010bf87dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_2);
    puVar2 = puVar6;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  uVar1 = param_1;
  func_0x00010beff600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x0001070c46dc();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e003a4(uVar1,uVar7,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070cb59c; end: 1070cb64f; -[PreviewViewController showLowDiskErrorAlertIfNeeded:] */

void FUN_1070cb59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beff600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c46dc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e003a4(uVar1,uVar3,param_3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070cb650; end: 1070cb673; -[PreviewViewController updateXButtonAndSnapEditingState] */

void FUN_1070cb650(undefined8 param_1)

{
  func_0x00010bedee00();
                    /* WARNING: Could not recover jumptable at 0x00010c28d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateXButtonState_112680e80);
  return;
}



/* Entry: 1070cb674; end: 1070cb6b7; -[PreviewViewController _previewVisibleSaveLatencyLogger] */

void FUN_1070cb674(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c112520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070cb6b8; end: 1070cb6bb; -[PreviewViewController memoriesPreviewViewControllerLogger] */

void FUN_1070cb6b8(void)

{
  return;
}



/* Entry: 1070cb6bc; end: 1070cb6cb; -[PreviewViewController _parseTimeRangeFromTimelineSegments:] */

void FUN_1070cb6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11098d428);
  return;
}



/* Entry: 1070cb6cc; end: 1070cb7bb;  */

void FUN_1070cb6cc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bf730;
  _objc_alloc(PTR_PTR_1126bf730);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010c27c900(&uStack_60,param_2);
  }
  func_0x00010c297240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_60,param_2);
  }
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055780(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070cb7bc; end: 1070cb82b; -[PreviewViewController _setSnapEditingState:stage:] */

void FUN_1070cb7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2e80(param_3);
  func_0x00010bf58f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a060(param_3,param_2,param_1,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070cb82c; end: 1070cb8af; -[PreviewViewController recordCameraSnapEditingState] */

void FUN_1070cb82c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bee66e0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126d4be8;
    _objc_alloc(PTR_PTR_1126d4be8);
    func_0x00010c013900();
    func_0x00010c205ce0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010c2440a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7a20(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1070cb8b0; end: 1070cb933; -[PreviewViewController recordPreviewPreuploadEditingState] */

void FUN_1070cb8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bee66e0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126d4be8;
    _objc_alloc(PTR_PTR_1126d4be8);
    func_0x00010c013900();
    func_0x00010c1e20a0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010c111a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea7a20(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1070cb934; end: 1070cba03; -[PreviewViewController recordGallerySnapEditingState] */

void FUN_1070cb934(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bee66e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07e920();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c244120();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf954e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c244120(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        func_0x00010bea7a20(param_1,param_2,lVar1,0);
      }
      else {
        func_0x00010c193a40(lVar1,param_2,1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1070cba04; end: 1070cbd17; -[PreviewViewController didStartSavingWithSaveToSnapchatGallery:saveToCameraRoll:viewContext:] */

void FUN_1070cba04(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x00010c2876e0();
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
  uVar6 = uVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
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
  func_0x00010c14a280(uVar6);
  func_0x00010c2b7700(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
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
  func_0x00010c2aea60(uVar6);
  func_0x00010c2bcf80(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf42b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a380(uVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c153920(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1070cbd18; end: 1070cc06b; -[PreviewViewController asyncGenerateEncryptedMediaIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070cbd18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x00010bf068e0();
  if (uVar1 == 2) {
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c4694();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108e00d3c();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      uVar1 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c07e840();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar1 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c083340();
        if ((uVar2 & 1) != 0) {
          uVar2 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            uVar4 = param_1;
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c233c60();
            _objc_release(uVar4);
            _objc_release(uVar3);
            _objc_release(uVar2);
            _objc_release(uVar1);
            if ((uVar5 & 1) != 0) {
              return;
            }
            uVar1 = param_1;
            func_0x00010bfbd560();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar1 != 0) {
              return;
            }
            uVar1 = param_1;
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            if (uVar1 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *(long *)(uVar1 + (long)_DAT_1127641c0);
            }
            _objc_retain(lVar9);
            lVar6 = lVar9;
            func_0x00010c150520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar9);
            _objc_release(uVar1);
            if (lVar6 != 0) {
              return;
            }
            _objc_initWeak(auStack_58,param_1);
            puVar7 = PTR_PTR_1126d4bf0;
            _objc_alloc(PTR_PTR_1126d4bf0);
            uVar1 = param_1;
            func_0x00010bf46560(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bf12b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(PTR___dispatch_main_q_11034be20);
            _objc_copyWeak(auStack_60,auStack_58);
            func_0x00010c061080(puVar7);
            _objc_release(PTR___dispatch_main_q_11034be20);
            _objc_release(uVar2);
            _objc_release(uVar1);
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            if (param_1 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined8 *)(param_1 + (long)_DAT_1127641c0);
            }
            _objc_retain(uVar8);
            func_0x00010bf9d620(uVar8);
            _objc_release(uVar8);
            _objc_release(param_1);
            _objc_release(puVar7);
            _objc_destroyWeak(auStack_60);
            _objc_destroyWeak(auStack_58);
            return;
          }
          _objc_release(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 1070cc06c; end: 1070cc11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070cc06c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 != 0) {
      func_0x00010c1a1c00(param_1);
    }
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_1127641c0);
    }
    _objc_retain(uVar2);
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070cc120; end: 1070cc42b; -[PreviewViewController _saveToCameraRollOnlyWithSavingSource:] */

void FUN_1070cc120(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar1 = param_1;
  func_0x00010c14c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14a120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf7be20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5780(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be22440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be99b60(param_1);
  uVar3 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf42b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07e8c0();
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = uVar6;
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf82940();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80();
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14ca00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    uVar4 = param_1;
    func_0x00010c2bd480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a380();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  func_0x00010c2876e0(param_1);
  uVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c254980();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0fbac0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (0 < (long)uVar6) {
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182d40();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070cc42c; end: 1070ccce7; -[PreviewViewController _saveSnapToSnapAlbumWithSaveSessionId:cameraRollOnly:] */

void FUN_1070cc42c(ulong param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  bool bVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong uStack_180;
  ulong uStack_148;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070ccce8;
  puStack_98 = &UNK_11098d478;
  uStack_90 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_b0;
  uStack_88 = param_3;
  _objc_retainBlock();
  uVar3 = param_1;
  func_0x00010be80040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be44a20();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c078120();
    uVar19 = (undefined4)uVar6;
    _objc_release(uVar5);
  }
  else {
    uVar19 = 1;
  }
  puStack_f0 = puVar9;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1070cce94;
  puStack_d8 = &UNK_11098d4a8;
  uStack_d0 = uVar3;
  _objc_retain(param_3);
  ppuVar7 = &puStack_f0;
  uStack_c8 = param_3;
  uStack_c0 = uVar4;
  uStack_b8 = uVar19;
  _objc_retainBlock();
  uVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06d080();
  if (((uVar6 & 1) == 0) && (uVar6 = param_1, func_0x00010be44a20(), (int)uVar6 == 0)) {
    uVar6 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c078120();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar8 != 0) goto LAB_1070cc57c;
  }
  else {
    _objc_release(uVar5);
LAB_1070cc57c:
    uVar5 = param_1;
    func_0x00010be5f2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c250660();
    _objc_release(uVar5);
  }
  uVar5 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06d080();
  _objc_release(uVar5);
  if ((int)uVar6 == 0) {
    uVar5 = param_1;
    func_0x00010be44a20();
    if ((int)uVar5 == 0) {
      uVar5 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c078120();
      _objc_release(uVar5);
      uVar5 = param_1;
      func_0x00010be5f2c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7240();
      _objc_release(uVar5);
      if ((int)uVar6 == 0) {
        puVar9 = PTR_PTR_1126d4bf8;
        _objc_alloc_init();
        func_0x00010c0d7160();
        uVar5 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c09a760();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar5 = param_1;
        func_0x00010bee7380();
        if ((int)uVar5 == 0) {
          uStack_148 = 0;
        }
        else {
          uVar5 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x0001070c4844();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar6;
          func_0x00010c2a29c0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          _objc_release(uVar6);
          _objc_release(uVar5);
          uVar5 = uVar8;
          func_0x00010c094540(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          func_0x00010c0d4f60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar8;
          func_0x00010bf43020(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar10;
          func_0x00010c092080();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uStack_148 = uVar11;
          func_0x00010c097fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar10);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (uStack_148 != 0) {
            func_0x00010c10aa20();
          }
          _objc_release(uVar11);
        }
        uVar5 = param_1;
        func_0x00010c13b540();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x0001070c5674();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c09f2a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar5 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c09a760();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar5 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfbabe0();
        uVar10 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar10;
        func_0x00010c078020();
        uVar14 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c07e620();
        uStack_180 = uVar11;
        if ((int)uVar15 == 0) {
          FUN_107173024(uVar11,0,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar15 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar15;
          func_0x00010c075060();
          bVar1 = (int)uVar13 == 0;
          uVar19 = 3;
          if (bVar1) {
            uVar19 = 1;
          }
          uVar20 = 4;
          if (bVar1) {
            uVar20 = 2;
          }
          if ((int)uVar6 == 0) {
            uVar19 = uVar20;
          }
          uVar20 = 0;
          if ((uVar16 & 1) == 0) {
            uVar20 = uVar19;
          }
          FUN_107173024(uVar11,0,uVar20);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
        }
        _objc_release(uVar14);
        _objc_release(uVar10);
        _objc_release(uVar5);
        uVar5 = param_1;
        func_0x00010c111c80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar10;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = param_1;
        func_0x00010c0b3920();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010bf42b00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14af40(uVar6);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(param_1);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uStack_180);
        _objc_release(uVar11);
        _objc_release(uVar12);
        _objc_release(uStack_148);
        _objc_release(uVar8);
        _objc_release(puVar9);
        goto LAB_1070cc78c;
      }
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0d20c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = param_1;
      func_0x00010be5f2c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7240();
      _objc_release(uVar5);
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c26fe40();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b440();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    func_0x00010c14a040(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(ppuVar2);
    param_1 = param_3;
  }
  _objc_release(param_1);
LAB_1070cc78c:
  _objc_release(ppuVar7);
  _objc_release(uStack_c8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 1070ccce8; end: 1070cce93;  */

void FUN_1070ccce8(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar6;
    func_0x00010c14a140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf76ec0(uVar6);
    _objc_release(uVar4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bf73f60(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06d080();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be5f2c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7260();
    _objc_release(uVar4);
  }
  if (param_2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070cce94; end: 1070ccef3;  */

void FUN_1070cce94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c0acca0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0a7220(*(undefined8 *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00010bf73f00(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ccef4; end: 1070ccf6f;  */

void FUN_1070ccef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be5f2c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73f00();
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070ccf70; end: 1070cd2b3; -[PreviewViewController _getMediaOrigin] */

ulong FUN_1070ccf70(ulong param_1,undefined8 param_2)

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
  ulong uVar11;
  uint uVar12;
  uint uStack_64;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bee7380(param_1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    return 5;
  }
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    uVar2 = uVar1;
    func_0x00010c07e960();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07e860();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07e880();
        if ((int)uVar4 == 0) {
          uVar4 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c26fea0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4b7e0();
          if ((uVar6 & 1) == 0) {
            uVar6 = param_1;
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c097d40();
            if ((uVar7 & 1) == 0) {
              uVar7 = param_1;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c074860();
              if ((uVar8 & 1) == 0) {
                uVar8 = param_1;
                func_0x00010bf46560();
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar8;
                func_0x00010c243400();
                if (uVar9 != 0x11) {
                  uVar9 = param_1;
                  func_0x00010bf46560();
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = uVar9;
                  func_0x00010c129720();
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar10 == 0) {
                    uVar10 = param_1;
                    func_0x00010bf46560();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar10;
                    func_0x00010c134300();
                    _objc_retainAutoreleasedReturnValue();
                    if (uVar11 == 0) {
                      uVar11 = param_1;
                      func_0x00010be33ca0();
                      uStack_64 = (uint)uVar11;
                    }
                    else {
                      uStack_64 = 1;
                    }
                    _objc_release();
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
                    if ((uStack_64 & 1) != 0) {
                      return 2;
                    }
                    func_0x00010bf46560(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = param_1;
                    func_0x00010c07e840();
                    _objc_release(param_1);
                    return uVar1;
                  }
                  _objc_release();
                  _objc_release(uVar9);
                }
                _objc_release(uVar8);
              }
              _objc_release(uVar7);
            }
            _objc_release(uVar6);
          }
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    return 2;
  }
  uVar2 = uVar1;
  func_0x00010c0c8e40();
  _objc_release(uVar1);
  uVar12 = 2;
  if (uVar2 != 0xffffffff937963cb) {
    uVar12 = 0;
  }
  if (uVar2 == 0xffffffffae79c325) {
    uVar12 = 1;
  }
  return (ulong)uVar12;
}



/* Entry: 1070cd2b4; end: 1070cd407; -[PreviewViewController _hasCameraRollSticker] */

long FUN_1070cd2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c255480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        lVar3 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010bfee000();
        if (lVar3 == 0x11) {
          lVar4 = 1;
          goto LAB_1070cd3c8;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar4 = 0;
  }
LAB_1070cd3c8:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar4;
  }
  ___stack_chk_fail();
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c074540();
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  return lVar5;
}



/* Entry: 1070cd408; end: 1070cd47b; -[PreviewViewController _hasGenAILens] */

undefined8 FUN_1070cd408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074540();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1070cd47c; end: 1070cd4a3; -[PreviewViewController _checkGenAIEntrySource:] */

long FUN_1070cd47c(int param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010be33ee0();
    param_3 = 0x4e;
    if (param_1 == 0) {
      param_3 = 0;
    }
  }
  return param_3;
}



/* Entry: 1070cd4a4; end: 1070cd67b; -[PreviewViewController _usesGenerativeAi:] */

undefined8 FUN_1070cd4a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075060();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c5bf0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010befec80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06bcc0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x0001070c5bf0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0f7f60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c079d60();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) {
        func_0x00010c13b420();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bfadbe0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf07a40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c074560();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_1);
        if ((uVar4 & 1) == 0) {
          uVar6 = param_3;
          func_0x00010c074540(param_3);
          goto LAB_1070cd648;
        }
      }
    }
  }
  uVar6 = 1;
LAB_1070cd648:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1070cd67c; end: 1070cdc9b; -[PreviewViewController _saveSnapToSnapAlbumWithSaveSessionId:snapId:completion:] */

void FUN_1070cd67c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uStack_158;
  ulong uStack_140;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010be80040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070cdc9c;
  puStack_98 = &UNK_11088b408;
  _objc_retain(uVar2);
  uStack_90 = uVar2;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(uVar3);
  ppuVar4 = &puStack_b0;
  uStack_80 = uVar3;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126d4bf8;
  _objc_alloc_init();
  func_0x00010c0d7160();
  uVar6 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = uVar8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf43020();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c092080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010bee7380();
  if ((((uVar11 == 0 || uVar7 == 0) || uVar6 == 0) || uVar8 == 0) && ((int)uVar9 == 0)) {
    uStack_140 = 0;
  }
  else {
    uVar10 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x0001070c4844();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c2a29c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar10);
    uStack_140 = uVar14;
    func_0x00010c097fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uStack_140;
    func_0x00010c2357e0();
    if ((int)uVar10 != 0) {
      uVar10 = uStack_140;
      func_0x00010c2a2a20(uStack_140);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d71c0(puVar5);
      _objc_release(uVar10);
    }
    if ((int)uVar9 != 0) {
      func_0x00010c10aa20();
    }
    _objc_release(uVar14);
  }
  uVar9 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfbabe0();
  uVar12 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c078020();
  uVar14 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c07e620();
  uStack_158 = uVar6;
  if ((int)uVar15 == 0) {
    FUN_107173024(uVar6,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar15 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c075060();
    bVar1 = (int)uVar13 == 0;
    uVar17 = 3;
    if (bVar1) {
      uVar17 = 1;
    }
    uVar18 = 4;
    if (bVar1) {
      uVar18 = 2;
    }
    if ((int)uVar10 == 0) {
      uVar17 = uVar18;
    }
    uVar18 = 0;
    if ((uVar16 & 1) == 0) {
      uVar18 = uVar17;
    }
    FUN_107173024(uVar6,0,uVar18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
  }
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar9);
  func_0x00010c0a7240(uVar3);
  uVar9 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c5674();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010c111c80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf42b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010c14af40(uVar10);
  _objc_release(param_4);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar14);
  _objc_release(uStack_158);
  _objc_release(uStack_140);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1070cdc9c; end: 1070cdccb;  */

void FUN_1070cdc9c(long param_1,undefined8 param_2)

{
  func_0x00010c0acca0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010c0a7230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logGallerySaveToCameraRollDidFin_112607698);
  return;
}



/* Entry: 1070cdccc; end: 1070cde67;  */

void FUN_1070cdccc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    func_0x00010be2f900(*(undefined8 *)(param_1 + 0x20));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bf73f60(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c46b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c14a8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7260();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa3600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1070cde68; end: 1070cdeab; -[PreviewViewController logAndSaveToGalleryManualSave:saveToCameraRoll:showsSavingIndicator:isPrivate:saveAsSeparateCopy:progressController:savingSource:] */

void FUN_1070cde68(void)

{
  func_0x00010be502a0();
  return;
}



/* Entry: 1070cdeac; end: 1070ce6a3; -[PreviewViewController _logAndSaveToGalleryManualSave:autosaveToMyStoryEntry:saveToCameraRoll:showsSavingIndicator:isPrivate:saveAsSeparateCopy:fromLongPressPrompt:progressController:savingSource:customStoriesToAutoSave:] */

void FUN_1070cdeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  
  _objc_retain(param_11);
  _objc_retain(param_13);
  uVar1 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010beb2e00(param_1,param_2,param_3,param_12,uVar3);
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c9620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf47580();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1070ce078;
  puStack_90 = &UNK_11098d4d8;
  uStack_68 = (undefined1)param_3;
  uStack_62 = param_9;
  uStack_80 = param_11;
  uStack_78 = param_13;
  uStack_70 = param_12;
  uStack_88 = param_1;
  uStack_67 = param_7;
  uStack_66 = param_4;
  uStack_65 = param_5;
  uStack_64 = param_6;
  uStack_63 = param_8;
  _objc_retain(param_13);
  _objc_retain(param_11);
  func_0x00010be98ae0(param_1,param_2,&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(uVar3);
  return;
}



/* Entry: 1070ce6a4; end: 1070ce737; -[PreviewViewController _cropImageIfNeeded:] */

void FUN_1070ce6a4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4080();
  func_0x00010c23d0a0(param_5);
  uVar1 = param_5;
  func_0x00010bf5c840(param_2 * param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070ce738; end: 1070ce907; -[PreviewViewController _saveToSnapchatGalleryManualSave:saveToCameraRoll:showsSavingIndicator:shouldSaveSnapAsMEOSnap:savingSource:saveAsSeparateCopy:fromLongPressPrompt:progressController:customStoryMetadata:] */

void FUN_1070ce738(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,int param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_initWeak(auStack_80,param_11);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1070ce908;
  puStack_b8 = &UNK_11098d568;
  uStack_b0 = param_1;
  uStack_90 = param_7;
  uStack_88 = param_3;
  uStack_87 = param_4;
  uStack_86 = param_5;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_11);
  uStack_a8 = param_11;
  _objc_retain(param_12);
  uStack_a0 = param_12;
  uStack_84 = (undefined1)param_6;
  uStack_83 = param_9;
  ppuVar1 = &puStack_d0;
  uStack_85 = param_8;
  _objc_retainBlock();
  if (param_6 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    uVar2 = 0;
    _dispatch_time(0,300000000);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_1070d10cc;
    puStack_e8 = &UNK_11084aaa8;
    _objc_retain(ppuVar1);
    uStack_e0 = param_1;
    ppuStack_d8 = ppuVar1;
    func_0x00010058c530(uVar2,PTR___dispatch_main_q_11034be20,&puStack_100);
    _objc_release(ppuStack_d8);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_12);
  _objc_release(param_11);
  return;
}



/* Entry: 1070ce908; end: 1070ced0b;  */

void FUN_1070ce908(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be22440(uVar1,param_2,*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48),
                      1,*(undefined1 *)(param_1 + 0x49));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5f2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c14c000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c14c0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14c100();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x4a) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1122a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf7be20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5780(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c14a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = 0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5f040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dde0(*(undefined8 *)(param_1 + 0x20));
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1070ced0c;
  uStack_98 = 0x1070ced1c;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x0001070c5674();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar10;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar12;
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_c0,param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar8);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar11);
  _objc_retain(uVar7);
  func_0x00010bfbf0a0(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070ced0c; end: 1070ced23;  */

void FUN_1070ced0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1070ced24; end: 1070cedcb;  */

void FUN_1070ced24(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070cedcc;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1070cedcc; end: 1070cee4f;  */

void FUN_1070cedcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c178040();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1070cee50; end: 1070cee57;  */

void FUN_1070cee50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_cancelProcessing_1125a9498);
  return;
}



/* Entry: 1070cee58; end: 1070ceedb;  */

void FUN_1070cee58(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070ceedc;
  puStack_48 = &UNK_110868698;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1070ceedc; end: 1070cef9b;  */

void FUN_1070ceedc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bef1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = uVar5;
    func_0x00010bef1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e46c0(uVar6,uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,uVar5,PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 1070cef9c; end: 1070d108b;  */

void FUN_1070cef9c(long param_1,undefined *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_158;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  if (param_3 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1070d108c;
    puStack_88 = &UNK_110842e18;
    uVar30 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar30);
    uStack_80 = uVar30;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    uVar30 = uStack_80;
    goto LAB_1070d0818;
  }
  uVar30 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bde9360(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c08fa60();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be80040(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar4);
  if (lRam00000001136ca060 != -1) {
    func_0x00010002a2fc(0x1136ca060,&PTR___NSConcreteGlobalBlock_11098ed18);
  }
  if ((bRam00000001136ca058 & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c29ae80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar6;
    func_0x00010bf9d2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar5);
    _objc_release(puVar15);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be1a380();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x0001070c5458();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c0c5d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010c130580(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = 0x3ff0000000000000;
  uVar8 = uVar11;
  func_0x00010c0ef8a0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar7);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar9;
  func_0x00010bf5aac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  if (puVar15 != (undefined *)0x0) {
    puVar5 = puVar15;
  }
  _objc_retain(puVar5);
  _objc_release(puVar15);
  _objc_release(puVar9);
  puVar10 = *(undefined **)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar15;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010c073b80();
  _objc_release(uVar12);
  _objc_release(uVar11);
  if ((int)uVar14 != 0) {
    puVar15 = puVar9;
    func_0x00010bf313a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 == (undefined *)0x0) {
      puVar10 = puVar9;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar15);
      puVar10 = puVar15;
    }
    _objc_release(puVar5);
    _objc_release(puVar15);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c07f160();
    _objc_release(uVar12);
    _objc_release(uVar11);
    puVar5 = puVar10;
    if ((int)uVar14 != 0) {
      puVar15 = puVar9;
      func_0x00010bf59960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar9;
      func_0x00010bfd89e0();
      if ((int)puVar6 == 0) {
        lVar28 = *(long *)(*(long *)(param_1 + 0x60) + 8);
        uVar12 = *(undefined8 *)(lVar28 + 0x28);
        *(undefined8 *)(lVar28 + 0x28) = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c13b540(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar12;
        func_0x0001070c5ad0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar14;
        func_0x00010c0c8880();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
        func_0x00010c241220(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar31 = 0xc2000000;
        func_0x00010c135bc0(uVar7);
        _objc_release(puVar6);
        _objc_release(uVar7);
        _objc_release(uVar11);
        _objc_release(uVar14);
      }
      _objc_release(uVar12);
      puVar6 = puVar15;
    }
  }
  func_0x00010be33ee0();
  iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bdca5e0();
  if (iVar2 == 0) {
    lVar13 = *(long *)(param_1 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar13;
    func_0x00010c0c6c20();
    _objc_release(lVar13);
    if (lVar28 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar14;
      func_0x00010c06c920();
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar7);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar14;
      func_0x00010c233c60();
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar12 == 0) {
        uVar12 = uVar14;
        func_0x00010c06d080();
        _objc_release(uVar14);
        uVar3 = (uint)*(undefined8 *)(param_1 + 0x28);
        if ((int)uVar12 == 0) {
          func_0x00010be44a20();
          if (((uVar3 | (uint)uVar11) & 1) == 0) {
            lVar13 = *(long *)(param_1 + 0x28);
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            lVar28 = lVar13;
            func_0x00010c2485a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar13);
            if (lVar28 != 0) {
              func_0x00010c246640();
            }
            if (*(char *)(param_1 + 0x78) == '\x01') {
              puVar19 = *(undefined **)(param_1 + 0x28);
              func_0x00010bfa3600();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar19;
              func_0x00010c29a9c0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar15;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              _objc_release(puVar19);
              puVar19 = *(undefined **)(param_1 + 0x28);
              func_0x00010bfa3600();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar19;
              func_0x00010c29a9a0();
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar15;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              _objc_release(puVar19);
              puVar15 = puVar23;
              func_0x00010c0818c0();
              puVar19 = puVar10;
              func_0x00010c0818a0();
              if ((int)puVar19 == 0) {
                uVar3 = 0;
              }
              else {
                puVar19 = puVar10;
                func_0x00010c0778e0();
                uVar3 = (uint)puVar19;
              }
              puVar19 = param_2;
              func_0x00010bfaee40();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar19;
              func_0x00010c091860();
              _objc_retainAutoreleasedReturnValue();
              if (puVar24 == (undefined *)0x0) {
                uVar14 = *(undefined8 *)(param_1 + 0x28);
                func_0x00010c112180();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = uVar14;
                func_0x00010c27ea40();
                uVar29 = uVar3;
                if ((int)uVar12 != 0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x28);
                  func_0x00010c112180();
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar11;
                  func_0x00010c27ea00();
                  _objc_release(uVar11);
                  uVar29 = (uint)uVar12 | uVar3;
                }
                uVar29 = uVar29 | (uint)puVar15;
                _objc_release(uVar14);
              }
              else {
                uVar29 = 1;
              }
              _objc_release(puVar24);
              _objc_release(puVar19);
              if ((uint)puVar15 == 0) {
                if (uVar3 == 0) {
                  puStack_158 = (undefined *)0x0;
                }
                else {
                  puStack_158 = puVar10;
                  func_0x00010c100500();
                  _objc_retainAutoreleasedReturnValue();
                }
              }
              else {
                puStack_158 = puVar23;
                func_0x00010c27c960();
                _objc_retainAutoreleasedReturnValue();
              }
              cVar1 = *(char *)(param_1 + 0x79);
              uVar12 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010be1a380();
              _objc_retainAutoreleasedReturnValue();
              uVar18 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c13b540();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar18;
              func_0x0001070c5a88();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar14;
              func_0x00010befb6a0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar11;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_2;
              func_0x00010c29ae80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010beb3dc0();
              uVar20 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010bf124c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c5ae0();
              uVar21 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c1111c0();
              _objc_retainAutoreleasedReturnValue();
              uVar31 = uVar21;
              func_0x00010c127e00();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar31;
              func_0x00010bf00140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfed740();
              uVar22 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfbabe0();
              if ((uVar29 & 1) == 0) {
                uStack_148 = *(undefined8 *)(param_1 + 0x28);
                func_0x00010bfbd560();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                uStack_148 = 0;
              }
              uVar26 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c240ee0();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar9;
              func_0x00010bf704c0();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar9;
              func_0x00010bf70720();
              _objc_retainAutoreleasedReturnValue();
              puVar25 = PTR_PTR_1126b2220;
              _objc_alloc();
              puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04a560();
              func_0x00010be20760();
              func_0x00010befc960(uVar7);
              _objc_release(puVar25);
              _objc_release(puVar27);
              _objc_release(puVar24);
              _objc_release(puVar19);
              _objc_release(uVar26);
              if ((uVar29 & 1) == 0) {
                _objc_release(uStack_148);
              }
              _objc_release(uVar22);
              _objc_release(uVar17);
              _objc_release(uVar31);
              _objc_release(uVar21);
              _objc_release(uVar20);
              _objc_release(puVar15);
              _objc_release(uVar7);
              _objc_release(uVar11);
              _objc_release(uVar14);
              _objc_release(uVar18);
              if (cVar1 != '\0') {
                func_0x00010be99b80(*(undefined8 *)(param_1 + 0x28));
              }
              _objc_release(uVar12);
              _objc_release(puStack_158);
            }
            else {
              puVar15 = param_2;
              func_0x00010bf20900();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = param_2;
              if (puVar15 == (undefined *)0x0) {
                func_0x00010c29ae80();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                func_0x00010c0edb40();
                _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(puVar15);
              if (*(long *)(param_1 + 0x50) == 0) {
                puVar23 = *(undefined **)(param_1 + 0x28);
                func_0x00010c13b540();
                _objc_retainAutoreleasedReturnValue();
                puStack_108 = puVar23;
                func_0x0001070c5a88();
                _objc_retainAutoreleasedReturnValue();
                puStack_120 = puStack_108;
                func_0x00010bf11c20();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puStack_120;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c5ae0();
                puStack_128 = *(undefined **)(param_1 + 0x28);
                func_0x00010c1111c0();
                _objc_retainAutoreleasedReturnValue();
                puStack_130 = puStack_128;
                func_0x00010c127e00();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puStack_130;
                func_0x00010bf00140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed740();
                func_0x00010b5f9aa8();
                puStack_138 = *(undefined **)(param_1 + 0x28);
                func_0x00010bf46560();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfbabe0();
                puVar24 = PTR_PTR_1126b2220;
                _objc_alloc();
                puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
                func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c04a560();
                func_0x00010bef7080(puVar15);
              }
              else {
                func_0x00010c27dd80();
                puVar23 = *(undefined **)(param_1 + 0x50);
                func_0x00010c11ac00();
                _objc_retainAutoreleasedReturnValue();
                puStack_108 = *(undefined **)(param_1 + 0x50);
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                puStack_120 = PTR_PTR_1126b2220;
                _objc_alloc();
                puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
                func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c04a560();
                _objc_release(puVar15);
                puVar15 = *(undefined **)(param_1 + 0x28);
                func_0x00010c13b540();
                _objc_retainAutoreleasedReturnValue();
                puStack_128 = puVar15;
                func_0x0001070c5a88();
                _objc_retainAutoreleasedReturnValue();
                puStack_130 = puStack_128;
                func_0x00010bf11c20();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puStack_130;
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c5ae0();
                puStack_138 = *(undefined **)(param_1 + 0x28);
                func_0x00010c1111c0();
                _objc_retainAutoreleasedReturnValue();
                puVar25 = puStack_138;
                func_0x00010c127e00();
                _objc_retainAutoreleasedReturnValue();
                puVar24 = puVar25;
                func_0x00010bf00140();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfed740();
                func_0x00010b5f9aa8();
                uVar12 = *(undefined8 *)(param_1 + 0x28);
                func_0x00010bf46560();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfbabe0();
                func_0x00010bef7040(puVar19);
                _objc_release(uVar12);
              }
              _objc_release(puVar24);
              _objc_release(puVar25);
              _objc_release(puStack_138);
              _objc_release(puVar19);
              _objc_release(puStack_130);
              _objc_release(puStack_128);
              _objc_release(puVar15);
              _objc_release(puStack_120);
              _objc_release(puStack_108);
            }
            _objc_release(puVar23);
            _objc_release(puVar10);
          }
          else {
            func_0x00010b5f9aa8();
            if (puVar9 == (undefined *)0x0) {
              uVar14 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar14;
              func_0x00010c26fea0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4b980();
              _objc_release(uVar12);
              _objc_release(uVar14);
            }
            cVar1 = *(char *)(param_1 + 0x79);
            uVar14 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010be1a380();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(param_1 + 0x28);
            puVar15 = puVar9;
            func_0x00010bf704c0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010bf70720();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be44a20();
            func_0x00010be9a120(uVar12);
            _objc_release(puVar10);
            _objc_release(puVar15);
            if (cVar1 == '\x01') {
              func_0x00010be99b40(*(undefined8 *)(param_1 + 0x28));
            }
            _objc_release(uVar14);
          }
        }
        else {
          func_0x00010be98ba0();
        }
      }
      else {
        uVar12 = uVar14;
        func_0x00010c2440e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar12;
        func_0x00010c07f160();
        _objc_release(uVar12);
        _objc_release(uVar14);
        if ((int)uVar11 == 0) {
          puVar15 = *(undefined **)(param_1 + 0x28);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          puStack_108 = puVar15;
          func_0x00010bf12b80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
        }
        else {
          puStack_108 = param_2;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar16 = *(ulong *)(param_1 + 0x28);
        func_0x00010be62760();
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010b5f9aa8();
        puVar15 = puVar9;
        func_0x00010bf704c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf70720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be996c0(uVar12);
        _objc_release(puVar10);
        _objc_release(puVar15);
        if ((*(char *)(param_1 + 0x79) == '\x01') && ((uVar16 & 1) == 0)) {
          func_0x00010be99680(*(undefined8 *)(param_1 + 0x28));
        }
        _objc_release(puStack_108);
      }
    }
    else if (lVar28 == 0) {
      if (*(char *)(param_1 + 0x78) == '\x01') {
        puVar15 = param_2;
        func_0x00010c29ae80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar13 = *(long *)(param_1 + 0x28);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar28 = lVar13;
        func_0x00010c2485a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 == (undefined *)0x0) {
          _objc_release(lVar28);
          _objc_release(lVar13);
          cVar1 = *(char *)(param_1 + 0x79);
          uStack_110 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1a380();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = param_2;
          func_0x00010bfd4120();
          if ((int)puVar15 != 0) {
            puVar15 = param_2;
            func_0x00010c29ae80();
            _objc_retainAutoreleasedReturnValue();
            if (puVar15 == (undefined *)0x0) {
              iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
              func_0x00010be3e0a0();
              if (iVar2 != 0) {
                func_0x00010bece4e0(*(undefined8 *)(param_1 + 0x28));
                goto LAB_1070d07e8;
              }
            }
            else {
              _objc_release();
            }
          }
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar7;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010befb6a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_1 + 0x28);
          puVar15 = param_2;
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf61e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = 0xffffffffa9fc90cc;
          func_0x00010b77c6b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5ae0();
          func_0x00010c0c4ba0(param_2);
          uVar20 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1f740();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfed740();
          uVar21 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbabe0();
          uVar22 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c240ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126b2220;
          _objc_alloc();
          puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560();
          func_0x00010be20760();
          func_0x00010befa840(uVar31,uVar11);
          _objc_release(puVar10);
          _objc_release(puVar19);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(puVar15);
          _objc_release(uVar11);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar7);
          if (cVar1 != '\0') {
            func_0x00010be99b80(*(undefined8 *)(param_1 + 0x28));
          }
        }
        else {
          _objc_release(lVar28);
          _objc_release(lVar13);
          if (lVar28 != 0) {
            func_0x00010c246640();
          }
          uStack_110 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uStack_110;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010befb6a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = param_2;
          func_0x00010c29ae80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beb3dc0();
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf124c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5ae0();
          uVar31 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1f740();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfed740();
          uVar17 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbabe0();
          uVar18 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c240ee0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf704c0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar9;
          func_0x00010bf70720();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR_PTR_1126b2220;
          _objc_alloc();
          puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560();
          func_0x00010be20760();
          func_0x00010befc960(uVar11);
          _objc_release(puVar24);
          _objc_release(puVar25);
          _objc_release(puVar19);
          _objc_release(puVar10);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar31);
          _objc_release(uVar7);
          _objc_release(puVar15);
          _objc_release(uVar11);
          _objc_release(uVar14);
          _objc_release(uVar12);
        }
LAB_1070d07e8:
        _objc_release(uStack_110);
      }
      else {
        if (*(long *)(param_1 + 0x50) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar7;
          func_0x0001070c5e78();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010bfbe800();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar7);
          iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
          func_0x00010be33ee0();
          if (iVar2 != 0) {
            func_0x00010befefa0();
          }
          uVar17 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar17;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010bf11c20();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(undefined8 *)(param_1 + 0x28);
          puVar15 = param_2;
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf61e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5ae0();
          func_0x00010c0c4ba0(param_2);
          uVar20 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1f740(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfed740();
          uVar21 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbabe0();
          puVar10 = PTR_PTR_1126b2220;
          _objc_alloc();
          puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560();
          func_0x00010bef7060(uVar31,uVar7);
          _objc_release(puVar10);
          _objc_release(puVar19);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar18);
          _objc_release(puVar15);
          _objc_release(uVar7);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar17);
        }
        else {
          func_0x00010c27dd80();
          uVar11 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR_PTR_1126b2220;
          _objc_alloc();
          puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04a560();
          _objc_release(puVar10);
          uVar18 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar18;
          func_0x0001070c5a88();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar12;
          func_0x00010bf11c20();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = *(undefined8 *)(param_1 + 0x28);
          puVar10 = param_2;
          func_0x00010bfe6ac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdf61e0(uVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c5ae0(param_2);
          func_0x00010c0c4ba0(param_2);
          uVar21 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1f740(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfed740();
          uVar22 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbabe0();
          func_0x00010bef7020(uVar31,uVar7);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(puVar10);
          _objc_release(uVar7);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar18);
          _objc_release(puVar15);
          _objc_release(uVar17);
        }
        _objc_release(uVar11);
      }
    }
  }
  else {
    func_0x00010b5f9aa8();
    if (puVar9 == (undefined *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar14;
      func_0x00010c26fea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b980();
      _objc_release(uVar12);
      _objc_release(uVar14);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be1a380();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    puVar15 = puVar9;
    func_0x00010bf704c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf70720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be44a20();
    func_0x00010be9a120(uVar12);
    _objc_release(puVar10);
    _objc_release(puVar15);
    if (*(char *)(param_1 + 0x79) == '\x01') {
      func_0x00010be99b40(*(undefined8 *)(param_1 + 0x28));
    }
    _objc_release(uVar14);
  }
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar4);
LAB_1070d0818:
  _objc_release(uVar30);
  _objc_release(param_2);
  return;
}



/* Entry: 1070d108c; end: 1070d1093;  */

void FUN_1070d108c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe26d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hideProgressOverlay_1125d6370);
  return;
}



/* Entry: 1070d1094; end: 1070d10cb;  */

void FUN_1070d1094(long param_1,undefined8 param_2)

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



/* Entry: 1070d10cc; end: 1070d1193;  */

void FUN_1070d10cc(long param_1)

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
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1070d1194;
  puStack_48 = &UNK_1109033b0;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  uStack_38 = uVar3;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x0001070c5af4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108de5e10(&puStack_60,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1070d1194; end: 1070d11d7;  */

void FUN_1070d1194(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001070d11a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beff600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108df8680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070d11d8; end: 1070d136b; -[PreviewViewController _gallerySnapCompletionHandlerWithSaveSessionId:captureSessionId:manualSave:cachingMediaManager:progressController:saveToCameraRoll:customStoryMetadata:savedToken:showsSavingIndicator:saveAsSeparateCopy:shouldSaveToCameraRollConcurrently:] */

void FUN_1070d11d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined **ppuVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1070d136c;
  puStack_a8 = &UNK_11098d5c8;
  uStack_88 = param_9;
  uStack_66 = param_11;
  uStack_78 = param_10;
  uStack_a0 = param_7;
  uStack_98 = param_1;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_5;
  uStack_67 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(param_7);
  ppuVar1 = &puStack_c0;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1070d136c; end: 1070d1bc7;  */

void FUN_1070d136c(long param_1,long param_2,long param_3,undefined1 param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 auStack_160 [7];
  undefined8 auStack_128 [7];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1070d1bc8;
  puStack_98 = &UNK_110842e18;
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar13);
  uStack_90 = uVar13;
  func_0x000100162d98("APPSTORE",&puStack_b0);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be80040(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acca0();
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    puVar16 = (undefined *)0x0;
    uVar11 = uVar13;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = param_2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x28);
  }
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar11;
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbdda0();
  func_0x00010bdfcf20(uVar13);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar11);
  if (param_2 != 0) {
    _objc_release(puVar16);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfa3600(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c242ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2ea20();
    _objc_release(uVar11);
    _objc_release(uVar13);
    _objc_release(uVar3);
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x58) == '\x01') {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf600c0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b93c0(*(undefined8 *)(param_1 + 0x28));
      _objc_release(uVar13);
      func_0x00010bea5300(*(undefined8 *)(param_1 + 0x28));
    }
  }
  uVar13 = param_5;
  func_0x000107ffa0b8();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1070d1bd0;
  puStack_d8 = &UNK_11098d598;
  uStack_b8 = *(undefined1 *)(param_1 + 0x5a);
  uStack_b7 = *(undefined1 *)(param_1 + 0x59);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = uVar3;
  uStack_c8 = uVar5;
  uStack_b6 = param_4;
  _objc_retain(uVar11);
  ppuVar4 = &puStack_f0;
  uStack_c0 = uVar11;
  _objc_retainBlock();
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    (*(code *)ppuVar4[2])(ppuVar4,0);
    if ((int)uVar13 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13b540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x0001070c46b8();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c08f100();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a71c0();
      _objc_release(uVar3);
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010beff600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = *(byte *)(param_1 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13b540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      if ((bVar1 & 1) == 0) {
        func_0x000107dfff94(uVar3,uVar11);
      }
      else {
        func_0x000107e001b8();
      }
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    if (param_2 == 0) goto LAB_1070d1ad8;
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c13ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      pcVar12 = FUN_1070d1cbc;
      puVar14 = auStack_128;
LAB_1070d1928:
      lVar6 = param_2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13b540();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x0001070c5b18();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c13ff40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      _objc_release(uVar5);
      puVar16 = PTR_PTR_1126ae790;
      func_0x00010bfcd0e0(PTR_PTR_1126ae790);
      _objc_retainAutoreleasedReturnValue();
      *puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      puVar14[1] = 0xc2000000;
      puVar14[2] = pcVar12;
      puVar14[3] = &UNK_110848ba8;
      puVar14[4] = uVar11;
      puVar14[5] = uVar3;
      puVar14[6] = lVar6;
      _objc_retain(lVar6);
      _objc_retain(uVar3);
      _objc_retain(uVar11);
      func_0x00010c0f7fc0(puVar16);
      _objc_release(puVar16);
      _objc_release(puVar14[6]);
      _objc_release(puVar14[5]);
      _objc_release(puVar14[4]);
      _objc_release(lVar6);
      _objc_release(uVar3);
      _objc_release(uVar11);
    }
  }
  else {
    if (*(char *)(param_1 + 0x59) == '\x01') {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010be44a20();
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      if (iVar2 == 0) {
        lVar6 = param_2;
        func_0x00010c241220(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be99b80(uVar11);
        _objc_release(lVar6);
      }
      else {
        func_0x00010be9a100(uVar11);
      }
    }
    (*(code *)ppuVar4[2])(ppuVar4,0);
    if ((int)uVar13 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13b540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x0001070c46b8();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c08f100();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a71c0();
      _objc_release(uVar3);
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010beff600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = *(byte *)(param_1 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c13b540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar5;
      func_0x0001070c535c();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar13;
      func_0x00010c0c7e00();
      _objc_retainAutoreleasedReturnValue();
      if ((bVar1 & 1) == 0) {
        func_0x000107dfff94(uVar3,uVar11);
      }
      else {
        func_0x000107e001b8();
      }
      _objc_release(uVar11);
      _objc_release(uVar13);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    if (param_2 == 0) goto LAB_1070d1ad8;
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c13ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      pcVar12 = (code *)0x1070d1cf8;
      puVar14 = auStack_160;
      goto LAB_1070d1928;
    }
  }
  if (param_3 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010c07e920();
    if (((uVar15 & 1) == 0) && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
      bVar1 = *(byte *)(param_1 + 0x5c);
      _objc_release(uVar7);
      if ((bVar1 & 1) == 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010be44a20();
        uVar15 = *(ulong *)(param_1 + 0x28);
        if (iVar2 == 0) {
          uVar7 = uVar15;
          func_0x00010c13b540(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x0001070c4724();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0c84c0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2861e0(uVar15);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          goto LAB_1070d1a9c;
        }
        func_0x00010bed8c40(uVar15);
      }
    }
    else {
LAB_1070d1a9c:
      _objc_release(uVar7);
    }
  }
  func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),*(undefined8 *)(param_1 + 0x50)
                     );
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1070d1ad8:
  _objc_release(ppuVar4);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_90);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe26d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_hideProgressOverlay_1125d6370);
    return;
  }
  return;
}



/* Entry: 1070d1bc8; end: 1070d1bcf;  */

void FUN_1070d1bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe26d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hideProgressOverlay_1125d6370);
  return;
}



/* Entry: 1070d1bd0; end: 1070d1cbb;  */

void FUN_1070d1bd0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be9a5e0(uVar2,param_2,*(undefined1 *)(param_1 + 0x39));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be80040(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0acc80();
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1122a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x3a);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be43740(uVar5);
    func_0x00010bf76ee0(uVar3,param_2,uVar1,uVar2,uVar5,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010beb9060(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x3a));
    func_0x00010c123520(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1070d1cbc; end: 1070d1d33;  */

void FUN_1070d1cbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070d1d34; end: 1070d25eb; -[PreviewViewController _saveBatchCaptureSegmentsToGalleryManualSave:saveToCameraRoll:showsSavingIndicator:isPrivate:savingSource:saveAsSeparateCopy:progressController:customStoryMetadata:] */

void FUN_1070d1d34(undefined *param_1,undefined8 param_2,byte param_3,undefined1 param_4,int param_5
                  ,undefined1 param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_210;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain();
  _objc_retain(param_10);
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c14bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_5 == 0) {
    puStack_210 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    func_0x00010c14c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c14a120();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf7be20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5780(param_1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puStack_210 = param_1;
    func_0x00010c14a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if ((param_3 & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c4298;
      _objc_alloc();
      puVar1 = param_1;
      func_0x00010bf16da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7400();
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    func_0x00010c1b4160(puVar4);
  }
  puVar1 = puVar4;
  func_0x00010c26f6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4c00;
  _objc_alloc();
  puVar3 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7400();
  _objc_release(puVar6);
  _objc_release(puVar3);
  func_0x00010c1f5d40(puVar2);
  puVar3 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf5fa80();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  if (puVar8 != (undefined *)0x7fffffffffffffff) {
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fa80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fac0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16ae0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar3 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16f6a0();
  _objc_release(puVar3);
  puVar6 = param_1;
  func_0x00010bf16ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfaee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2839e0(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1070ced0c;
  uStack_88 = 0x1070ced1c;
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1070ced0c;
  uStack_b8 = 0x1070ced1c;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_1070ced0c;
  uStack_e8 = 0x1070ced1c;
  uStack_e0 = 0;
  puVar3 = puVar4;
  puStack_80 = puVar7;
  func_0x00010c0df000();
  if (0 < (long)puVar3) {
    do {
      uVar13 = puStack_a0[5];
      puVar7 = PTR_PTR_1126b1350;
      _objc_alloc(PTR_PTR_1126b1350);
      func_0x00010bfeee60();
      ppuVar9 = &PTR____CFConstantStringClassReference_110f314b8;
      func_0x000108553e88(&PTR____CFConstantStringClassReference_110f314b8,
                          &PTR____CFConstantStringClassReference_110dbab38,1,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar13);
      _objc_release(ppuVar9);
      _objc_release(puVar7);
      puVar3 = puVar3 + -1;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar7 = param_1;
  func_0x00010bf16ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c0d2180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_1070d25ec;
  puStack_128 = &UNK_11098d5f8;
  puStack_118 = &uStack_d8;
  puStack_110 = &uStack_108;
  _objc_retain(puVar6);
  puStack_120 = puVar6;
  func_0x00010c0efea0(puVar7);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar7 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2705e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c081200();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  pcStack_1a8 = FUN_1070d267c;
  puStack_1a0 = &UNK_11098d828;
  puStack_160 = &uStack_d8;
  puStack_1b8 = puVar3;
  uStack_1b0 = 0xc2000000;
  puStack_158 = &uStack_108;
  uStack_146 = (undefined1)param_5;
  uStack_144 = SUB81(puVar11,0);
  uStack_178 = param_10;
  puStack_170 = puStack_210;
  puStack_198 = param_1;
  puStack_190 = puVar5;
  puStack_188 = puVar4;
  puStack_180 = puVar1;
  puStack_168 = &uStack_a8;
  uStack_150 = param_7;
  bStack_148 = param_3;
  uStack_147 = param_4;
  uStack_145 = param_6;
  uStack_143 = param_8;
  _objc_retain(puStack_210);
  _objc_retain(param_10);
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  ppuVar9 = &puStack_1b8;
  _objc_retainBlock();
  puStack_1f0 = puVar3;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_1070d4ee4;
  puStack_1d8 = &UNK_110883360;
  puStack_1d0 = puVar2;
  ppuStack_1c8 = ppuVar9;
  puStack_1c0 = &uStack_a8;
  _objc_retain();
  _objc_retain(puVar2);
  func_0x000100bc0718(puVar6,PTR___dispatch_main_q_11034be20,&puStack_1f0);
  _objc_release(ppuStack_1c8);
  _objc_release(puStack_1d0);
  _objc_release(ppuVar9);
  _objc_release(puStack_170);
  _objc_release(uStack_178);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_release(puStack_190);
  _objc_release(puStack_120);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(puVar2);
  _objc_release(puStack_210);
  _objc_release(param_10);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(param_9);
  return;
}



/* Entry: 1070d25ec; end: 1070d267b;  */

void FUN_1070d25ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


