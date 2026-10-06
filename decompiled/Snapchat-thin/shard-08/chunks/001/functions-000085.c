/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d34a24; end: 105d34c23; -[SCPreviewFeatureCTLensPerfectSelfieImpl _startPerfectSelfieGeneration] */

void FUN_105d34a24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0b1880(*(undefined8 *)(param_1 + 0x88));
  lVar1 = param_1;
  func_0x00010be71380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c0a3920(*(undefined8 *)(param_1 + 0x88));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    func_0x00010bddf360(param_1);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0a5580(*(undefined8 *)(param_1 + 0x80));
    *(undefined1 *)(param_1 + 0xa1) = 1;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = lVar1;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    *(undefined8 *)(param_1 + 0x98) = 1;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    func_0x00010c129080(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c1598c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010be973c0(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105d34c24; end: 105d34c8b;  */

void FUN_105d34c24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe3c80();
    _objc_release(uVar1);
    func_0x00010bea53e0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d34c8c; end: 105d34dcf; -[SCPreviewFeatureCTLensPerfectSelfieImpl _revertToOriginalImageWithCompletion:] */

void FUN_105d34c8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfbbbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    lVar1 = param_3;
    uStack_50 = uVar3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105d34dd0; end: 105d35053;  */

void FUN_105d34dd0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0xa8))) {
    if (param_2 != 0) {
      lVar2 = *(long *)(lVar1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (param_2 != lVar3) {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_105d35054;
        uStack_70 = 0x105d35064;
        uStack_68 = 0;
        uVar4 = *(undefined8 *)(lVar1 + 0x40);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010c0ff340();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar8;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_a0,param_1 + 0x28);
        uStack_98 = *(undefined8 *)(param_1 + 0x30);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar10);
        uVar7 = uVar6;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = puStack_88[5];
        puStack_88[5] = uVar7;
        _objc_release(uVar9);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar8);
        _objc_release(uVar4);
        func_0x00010bf1a3e0(puStack_88[5]);
        uVar8 = *(undefined8 *)(lVar1 + 0x40);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(uVar8);
        _objc_release(uVar10);
        _objc_destroyWeak(auStack_a0);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
        goto LAB_105d34ff0;
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
LAB_105d34ff0:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d35054; end: 105d3506b;  */

void FUN_105d35054(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d3506c; end: 105d35137;  */

void FUN_105d3506c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bd660(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105d35138; end: 105d35197;  */

void FUN_105d35138(long param_1)

{
  long lVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x38) == *(long *)(lVar1 + 0xa8))) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d35198; end: 105d3519f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _perfectSelfieLensId] */

void FUN_105d35198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c111910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_previewPerfectSelfieLensId_112622060);
  return;
}



/* Entry: 105d351a0; end: 105d35267; -[SCPreviewFeatureCTLensPerfectSelfieImpl _startGenerationWithLensId:] */

void FUN_105d351a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010bf3cdc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4308;
  _objc_alloc(PTR_PTR_1126c4308);
  puVar3 = PTR_PTR_1126c4310;
  func_0x00010bfbee00(PTR_PTR_1126c4310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024460(puVar2,param_2,param_3,puVar3);
  _objc_release(param_3);
  func_0x00010bf8de60(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105d35268; end: 105d352f7; -[SCPreviewFeatureCTLensPerfectSelfieImpl _confirmEditingWithBurnInLensEffect] */

void FUN_105d35268(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x98) == 1) {
    *(undefined8 *)(param_1 + 0x98) = 2;
    func_0x00010be925e0();
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c4318;
    _objc_alloc(PTR_PTR_1126c4318);
    func_0x00010bff3d60();
    func_0x00010bf5cea0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be81230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processFinalImage_11257de28);
    return;
  }
  return;
}



/* Entry: 105d352f8; end: 105d3542b; -[SCPreviewFeatureCTLensPerfectSelfieImpl _processFinalImage] */

void FUN_105d352f8(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7a80();
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d3542c;
  puStack_50 = &UNK_110871040;
  _objc_copyWeak(auStack_48,auStack_38);
  ppuVar2 = &puStack_68;
  uStack_40 = uVar3;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf520(0x7ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d3542c; end: 105d35517;  */

void FUN_105d3542c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d35518;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_50 = param_2;
  _objc_retain(param_3);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105d35518; end: 105d3554f;  */

void FUN_105d35518(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d35550; end: 105d355eb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleFinalImageResultWithImage:error:generationIdentifier:] */

void FUN_105d35550(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == *(long *)(param_1 + 0xa8)) {
    if ((param_3 == 0) || (param_4 != 0)) {
      func_0x00010bddf360(param_1,param_2,param_4);
    }
    else {
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        _objc_retain(param_3);
        uVar1 = *(undefined8 *)(param_1 + 0xf8);
        *(long *)(param_1 + 0xf8) = param_3;
        _objc_release(uVar1);
      }
      func_0x00010bedd3e0(param_1,param_2,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d355ec; end: 105d357cf; -[SCPreviewFeatureCTLensPerfectSelfieImpl _updatePlaybackImageWithImage:] */

void FUN_105d355ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_105d35054;
  uStack_68 = 0x105d35064;
  uStack_60 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_58);
  uVar5 = uVar4;
  uStack_90 = uVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puStack_80[5];
  puStack_80[5] = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf1a3e0(puStack_80[5]);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  func_0x00010bedd3a0(param_1);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105d357d0; end: 105d35883;  */

void FUN_105d357d0(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0bd660(param_2);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105d35884; end: 105d358c7;  */

void FUN_105d35884(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d358c8; end: 105d358db; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleDidRenderImageForGenerationIdentifier:] */

void FUN_105d358c8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + 0xa8)) {
                    /* WARNING: Could not recover jumptable at 0x00010be2dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handlePerfectSelfieCompletion_112569100);
    return;
  }
  return;
}



/* Entry: 105d358dc; end: 105d359fb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _updatePlaybackImage:] */

void FUN_105d358dc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  _objc_retain(param_5);
  func_0x00010c23d0a0(uVar2);
  dVar4 = param_1;
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xf0));
  if (param_1 <= param_2) {
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  else {
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xf0));
    dVar3 = param_2;
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0xf0));
    param_2 = param_2 / dVar4;
    func_0x00010c23d0a0(param_5);
    dVar4 = dVar4 * param_2;
    func_0x00010c23d0a0(param_5);
    dVar3 = dVar3 - dVar4;
    dVar5 = dVar3 * 0.5;
    func_0x00010c23d0a0(param_5);
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010bf5c7a0(0,dVar5,dVar3,dVar4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c1a9f00(uVar2,param_4,uVar1);
    param_5 = uVar1;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d359fc; end: 105d35acb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handlePerfectSelfieCompletion] */

void FUN_105d359fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xc0);
  if ((lVar2 == 0) && (lVar2 = *(long *)(param_1 + 0xb8), lVar2 == 0)) {
    lVar2 = param_1;
    func_0x00010be71380(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  func_0x00010be925e0(param_1);
  func_0x00010bea53e0(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c620();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128740();
  _objc_release(uVar1);
  func_0x00010be0a7a0(param_1,param_2,lVar2);
  func_0x00010c0a5520(*(undefined8 *)(param_1 + 0x80),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d35acc; end: 105d35d5b; -[SCPreviewFeatureCTLensPerfectSelfieImpl _enterAppliedStateWithLensId:] */

void FUN_105d35acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x98) = 3;
  _objc_retain(param_3);
  func_0x00010bea8900(param_1,param_2,0);
  func_0x00010c129080(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08f640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar6);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c4320;
  _objc_alloc();
  func_0x00010c0246c0();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0b3920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e29018;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb4a0(uVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar3);
  func_0x00010bdc7d00(param_1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar6 = uVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf5af60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  _objc_release(uVar7);
  uVar3 = uVar6;
  func_0x00010bfb75c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  _objc_release(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf5af60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab4a0(uVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0xd0);
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    func_0x00010c2ae680(uVar1,param_2,*(undefined8 *)(param_1 + 0xd0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(puVar2 + 0xf8);
  _objc_retain(lVar5);
  if (lVar5 != 0) {
    func_0x00010c0a5580(*(undefined8 *)(puVar2 + 0x80),param_2,3);
    puVar2[0xa0] = 1;
    func_0x00010bedd3a0(puVar2,param_2,lVar5);
    if (*(long *)(puVar2 + 0xb8) == 0) {
      puVar4 = puVar2;
      func_0x00010be71380(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0a7a0(puVar2,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      func_0x00010be0a7a0(puVar2);
    }
    uVar6 = *(undefined8 *)(puVar2 + 0x60);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c4318;
    _objc_alloc(PTR_PTR_1126c4318);
    func_0x00010bff3d60();
    func_0x00010bf5cea0(uVar6,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar6);
    func_0x00010c0a5520(*(undefined8 *)(puVar2 + 0x80),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 105d35d5c; end: 105d35e47; -[SCPreviewFeatureCTLensPerfectSelfieImpl _reApplyCachedResult] */

void FUN_105d35d5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xf8);
  _objc_retain(lVar4);
  if (lVar4 != 0) {
    func_0x00010c0a5580(*(undefined8 *)(param_1 + 0x80),param_2,3);
    *(undefined1 *)(param_1 + 0xa0) = 1;
    func_0x00010bedd3a0(param_1,param_2,lVar4);
    if (*(long *)(param_1 + 0xb8) == 0) {
      lVar1 = param_1;
      func_0x00010be71380(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0a7a0(param_1,param_2,lVar1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010be0a7a0(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c4318;
    _objc_alloc(PTR_PTR_1126c4318);
    func_0x00010bff3d60();
    func_0x00010bf5cea0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010c0a5520(*(undefined8 *)(param_1 + 0x80),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d35e48; end: 105d35fe7; -[SCPreviewFeatureCTLensPerfectSelfieImpl _revertPerfectSelfie] */

void FUN_105d35e48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c0a5580(*(undefined8 *)(param_1 + 0x80),param_2,1);
  func_0x00010be925e0(param_1);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar1);
  func_0x00010be8cd80(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c0b3920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c2ab4a0(uVar3,param_2,*(undefined8 *)(param_1 + 0xd8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae680(uVar3,param_2,*(undefined8 *)(param_1 + 0xe0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0xf0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4318;
  _objc_alloc(PTR_PTR_1126c4318);
  func_0x00010bff3d60();
  func_0x00010bf5cea0(uVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010c129080(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08f640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010c0a5520(*(undefined8 *)(param_1 + 0x80),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d35fe8; end: 105d3628f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _addPerfectSelfieLensConfigToLoggingParamsWithLensId:] */

void FUN_105d35fe8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  _objc_retain(param_3);
  iVar8 = (int)puVar7;
  puVar7 = param_3;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = param_3;
    _objc_release(uVar1);
    puVar2 = *(undefined **)(param_1 + 0x68);
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar7 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      unaff_x21 = puVar2;
    }
    _objc_retain(unaff_x21);
    _objc_release(puVar2);
    _objc_release(puVar7);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(unaff_x21);
    puVar7 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar2 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x23 = *(undefined **)(lStack_128 + (long)puVar2 * 8);
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          puVar4 = param_3;
          func_0x00010c0720c0();
          iVar8 = (int)puVar4;
          _objc_release(unaff_x23);
          unaff_x22 = unaff_x21;
          if (((ulong)unaff_x24 & 1) != 0) goto LAB_105d36234;
          puVar2 = puVar2 + 1;
        } while (puVar7 != puVar2);
        puVar7 = unaff_x21;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(unaff_x21);
    unaff_x22 = PTR_PTR_1126c4328;
    func_0x00010c091ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b2ca0(unaff_x22);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b2d60(unaff_x22);
    _objc_unsafeClaimAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x21;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = unaff_x24;
    func_0x00010c2b2740(puVar3);
    iVar8 = (int)puVar7;
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
LAB_105d36234:
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105d36290;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_3 + 200);
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  lVar11 = lVar9;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 200);
    *(undefined8 *)(param_3 + 200) = 0;
    _objc_release(uVar1);
    puVar3 = *(undefined **)(param_3 + 0x68);
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar7;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar7 = param_3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar7;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(unaff_x21);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(unaff_x21);
    puVar7 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar11 = *plStack_250;
      do {
        puVar3 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x24 = *(undefined **)(lStack_258 + (long)puVar3 * 8);
          puVar2 = unaff_x24;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if (((ulong)puVar4 & 1) == 0) {
            func_0x00010befa120(unaff_x22);
          }
          puVar3 = puVar3 + 1;
        } while (puVar7 != puVar3);
        puVar7 = unaff_x21;
        func_0x00010bf52a60();
        unaff_x23 = (undefined *)0x0;
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(unaff_x21);
    puVar7 = unaff_x22;
    func_0x00010c2b2740(param_3);
    iVar8 = (int)puVar7;
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(param_3);
  }
  lVar11 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_105d364b4;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = unaff_x22;
  puStack_288 = unaff_x21;
  puStack_280 = param_3;
  lStack_278 = lVar9;
  ppuStack_270 = &puStack_140;
  _objc_copyWeak(auStack_2a8,lVar11 + 0x30);
  if (iVar8 == 0) {
    lVar9 = *(long *)(lVar11 + 0xb8);
    if (lVar9 == 0) {
      lVar9 = *(long *)(lVar11 + 0xc0);
    }
    _objc_retain(lVar9);
    *(undefined1 *)(lVar11 + 0x90) = 0;
    func_0x00010bf2dba0(*(undefined8 *)(lVar11 + 0xe8));
    uVar1 = *(undefined8 *)(lVar11 + 0xe8);
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(lVar11 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b1c0();
    _objc_release(uVar1);
    lVar5 = lVar9;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_2a8;
      _objc_loadWeakRetained(puVar6);
      func_0x00010c183960();
      _objc_release(puVar6);
      func_0x00010c27f1c0(*(undefined8 *)(lVar11 + 0x18));
      _objc_release(puVar7);
    }
    puVar7 = *(undefined **)(lVar11 + 0xb8);
    *(undefined8 *)(lVar11 + 0xb8) = 0;
LAB_105d365c0:
    _objc_release(puVar7);
  }
  else {
    if ((*(byte *)(lVar11 + 0x90) & 1) != 0) goto LAB_105d365cc;
    *(undefined1 *)(lVar11 + 0x90) = 1;
    lVar9 = *(long *)(lVar11 + 0xc0);
    if (lVar9 == 0) {
      lVar9 = lVar11;
      func_0x00010be71380();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar9);
    }
    lVar5 = lVar9;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      func_0x00010bddf360(lVar11);
      goto LAB_105d365c0;
    }
    _objc_retain(lVar9);
    uVar1 = *(undefined8 *)(lVar11 + 0xc0);
    *(long *)(lVar11 + 0xc0) = lVar9;
    _objc_release(uVar1);
    _objc_initWeak(auStack_2b0,lVar11);
    uVar10 = *(undefined8 *)(lVar11 + 0xa8);
    puVar7 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar1 = *(undefined8 *)(lVar11 + 0x18);
    _objc_copyWeak(auStack_2c8,auStack_2b0);
    _objc_retain(lVar9);
    uStack_2b8 = uVar10;
    _objc_copyWeak(auStack_2c0,auStack_2a8);
    func_0x00010bf08a20();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar11 + 0xe8);
    *(undefined8 *)(lVar11 + 0xe8) = uVar1;
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_2c0);
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_2c8);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_2b0);
  }
  _objc_release(lVar9);
LAB_105d365cc:
  _objc_destroyWeak(auStack_2a8);
  return;
}



/* Entry: 105d36290; end: 105d364b3; -[SCPreviewFeatureCTLensPerfectSelfieImpl _removePerfectSelfieLensConfigFromLoggingParams] */

void FUN_105d36290(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  ulong uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 200);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x68);
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    lVar1 = param_1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = lVar1;
    func_0x00010c091c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(unaff_x21);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(unaff_x21);
    lVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar3 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar3) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x24 = *(ulong *)(lStack_128 + lVar10 * 8);
          uVar4 = unaff_x24;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar5 & 1) == 0) {
            func_0x00010befa120(unaff_x22);
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = unaff_x21;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x21);
    puVar7 = unaff_x22;
    func_0x00010c2b2740(param_1);
    param_3 = (int)puVar7;
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(param_1);
  }
  lVar1 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105d364b4;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  lStack_150 = param_1;
  lStack_148 = lVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_178,lVar1 + 0x30);
  if (param_3 == 0) {
    lVar8 = *(long *)(lVar1 + 0xb8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(lVar1 + 0xc0);
    }
    _objc_retain(lVar8);
    *(undefined1 *)(lVar1 + 0x90) = 0;
    func_0x00010bf2dba0(*(undefined8 *)(lVar1 + 0xe8));
    uVar2 = *(undefined8 *)(lVar1 + 0xe8);
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b1c0();
    _objc_release(uVar2);
    lVar3 = lVar8;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_178;
      _objc_loadWeakRetained(puVar6);
      func_0x00010c183960();
      _objc_release(puVar6);
      func_0x00010c27f1c0(*(undefined8 *)(lVar1 + 0x18));
      _objc_release(puVar7);
    }
    puVar7 = *(undefined **)(lVar1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xb8) = 0;
LAB_105d365c0:
    _objc_release(puVar7);
  }
  else {
    if ((*(byte *)(lVar1 + 0x90) & 1) != 0) goto LAB_105d365cc;
    *(undefined1 *)(lVar1 + 0x90) = 1;
    lVar8 = *(long *)(lVar1 + 0xc0);
    if (lVar8 == 0) {
      lVar8 = lVar1;
      func_0x00010be71380();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar8);
    }
    lVar3 = lVar8;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      func_0x00010bddf360(lVar1);
      goto LAB_105d365c0;
    }
    _objc_retain(lVar8);
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    *(long *)(lVar1 + 0xc0) = lVar8;
    _objc_release(uVar2);
    _objc_initWeak(auStack_180,lVar1);
    uVar9 = *(undefined8 *)(lVar1 + 0xa8);
    puVar7 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_198,auStack_180);
    _objc_retain(lVar8);
    uStack_188 = uVar9;
    _objc_copyWeak(auStack_190,auStack_178);
    func_0x00010bf08a20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0xe8);
    *(undefined8 *)(lVar1 + 0xe8) = uVar2;
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_190);
    _objc_release(lVar8);
    _objc_destroyWeak(auStack_198);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_180);
  }
  _objc_release(lVar8);
LAB_105d365cc:
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 105d364b4; end: 105d3677f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _setLensActive:] */

void FUN_105d364b4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_1 + 0xc0);
    }
    _objc_retain(lVar5);
    *(undefined1 *)(param_1 + 0x90) = 0;
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xe8));
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b1c0();
    _objc_release(uVar4);
    lVar1 = lVar5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = auStack_48;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c183960();
      _objc_release(puVar2);
      func_0x00010c27f1c0(*(undefined8 *)(param_1 + 0x18));
      _objc_release(puVar3);
    }
    puVar3 = *(undefined **)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
LAB_105d365c0:
    _objc_release(puVar3);
  }
  else {
    if ((*(byte *)(param_1 + 0x90) & 1) != 0) goto LAB_105d365cc;
    *(undefined1 *)(param_1 + 0x90) = 1;
    lVar5 = *(long *)(param_1 + 0xc0);
    if (lVar5 == 0) {
      lVar5 = param_1;
      func_0x00010be71380();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar5);
    }
    lVar1 = lVar5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      func_0x00010bddf360(param_1);
      goto LAB_105d365c0;
    }
    _objc_retain(lVar5);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = lVar5;
    _objc_release(uVar4);
    _objc_initWeak(auStack_50,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    puVar3 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_68,auStack_50);
    _objc_retain(lVar5);
    uStack_58 = uVar6;
    _objc_copyWeak(auStack_60,auStack_48);
    func_0x00010bf08a20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar5);
LAB_105d365cc:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d36780; end: 105d36947;  */

void FUN_105d36780(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x90) & 1) == 0) {
      if (param_2 != (undefined *)0x0) {
        func_0x00010c27f1c0(*(undefined8 *)(lVar1 + 0x18));
      }
    }
    else if (*(long *)(param_1 + 0x38) == *(long *)(lVar1 + 0xa8)) {
      if (param_2 == (undefined *)0x0) {
        func_0x00010c0a97c0(*(undefined8 *)(lVar1 + 0x88));
        func_0x00010bddf360(lVar1);
      }
      else {
        uVar4 = *(ulong *)(lVar1 + 0x78);
        puVar2 = param_2;
        func_0x00010c094fa0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0825e0();
        _objc_release(puVar2);
        if ((uVar4 & 1) == 0) {
          func_0x00010c0ac1a0(*(undefined8 *)(lVar1 + 0x88));
          func_0x00010bddf360(lVar1);
          uVar5 = *(undefined8 *)(lVar1 + 0x78);
          puVar2 = param_2;
          func_0x00010c094fa0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c10cd00(uVar5);
        }
        else {
          uVar5 = *(undefined8 *)(lVar1 + 0x78);
          puVar2 = param_2;
          func_0x00010c094fa0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb75e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(lVar1 + 0xd0);
          *(undefined8 *)(lVar1 + 0xd0) = uVar5;
          _objc_release(uVar3);
          _objc_release(puVar2);
          func_0x00010be2b340(lVar1);
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          param_1 = param_1 + 0x30;
          _objc_loadWeakRetained(param_1);
          func_0x00010c183960();
          _objc_release(param_1);
        }
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d36948; end: 105d369b7; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleLensAppliedWithId:] */

void FUN_105d36948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x98) - 1U < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar1);
    func_0x00010c0a7640(*(undefined8 *)(param_1 + 0x88));
    func_0x00010bec00c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d369b8; end: 105d36ac3; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleAsyncTaskStatusEvents] */

void FUN_105d369b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d36ac4; end: 105d36b0b;  */

void FUN_105d36ac4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d36b0c; end: 105d36bdb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleAsyncTaskStatusEvent:] */

void FUN_105d36b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d36bdc;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d36bdc; end: 105d36c0f;  */

void FUN_105d36bdc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be805c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d36c10; end: 105d36d17; -[SCPreviewFeatureCTLensPerfectSelfieImpl _processAsyncTaskStatusEventOnMain:] */

void FUN_105d36c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
  }
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar2 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf95e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar4 != 0) {
        uVar2 = param_3;
        func_0x00010c252d60(param_3);
        func_0x00010be2e720(param_1,param_2,uVar2);
      }
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d36d18; end: 105d36e2f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _observeCarouselSelection] */

void FUN_105d36d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x108) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1599a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf1a3e0(*(undefined8 *)(param_1 + 0x108));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105d36e30; end: 105d36e9f;  */

void FUN_105d36e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be27020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d36ea0; end: 105d36eaf; -[SCPreviewFeatureCTLensPerfectSelfieImpl _resetCarouselGenerationState] */

void FUN_105d36ea0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d36eb0; end: 105d36f7f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleCarouselSelectionChangeWithItemId:] */

void FUN_105d36eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d36f80;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105d36f80; end: 105d36fb3;  */

void FUN_105d36f80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be808e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d36fb4; end: 105d370cb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _processCarouselSelectionChangeWithItemId:] */

void FUN_105d36fb4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x98) == 1) {
    lVar2 = *(long *)(param_1 + 0xc0);
    if ((lVar2 == 0) && (lVar2 = *(long *)(param_1 + 0xb8), lVar2 == 0)) {
      lVar2 = param_1;
      func_0x00010be71380(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
    }
    uVar1 = param_3;
    func_0x000105d37058(param_3,lVar2);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = param_3, func_0x000105d37058(param_3,*(undefined8 *)(param_1 + 0x100)),
       (uVar1 & 1) == 0)) {
      func_0x00010bddac00(param_1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d370cc; end: 105d3714f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleProcessingStatus:] */

void FUN_105d370cc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x98) == 1) {
    if (param_3 == 3) {
      func_0x00010c0adfe0(*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bddf370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWithError__112555678,0);
      return;
    }
    if (param_3 == 2) {
      func_0x00010c0a7660(*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bde6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__confirmEditingWithBurnInLensEff_1125571f0);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c129090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadToolbarItemViewModel_112627e40);
      return;
    }
  }
  return;
}



/* Entry: 105d37150; end: 105d37187; -[SCPreviewFeatureCTLensPerfectSelfieImpl _cancelPerfectSelfieGeneration] */

void FUN_105d37150(long param_1)

{
  func_0x00010c0a7620(*(undefined8 *)(param_1 + 0x88));
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bddf370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWithError__112555678,0);
  return;
}



/* Entry: 105d37188; end: 105d371e3; -[SCPreviewFeatureCTLensPerfectSelfieImpl _cancelPerfectSelfieGenerationForCarouselItemId:] */

void FUN_105d37188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c0a7600(uVar1);
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  func_0x00010bddf380(param_1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d371e4; end: 105d371eb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _cleanUpWithError:] */

void FUN_105d371e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__cleanUpWithError_selectedCarous_112555680,param_3,0);
  return;
}



/* Entry: 105d371ec; end: 105d372eb; -[SCPreviewFeatureCTLensPerfectSelfieImpl _cleanUpWithError:selectedCarouselItemId:] */

void FUN_105d371ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105d372ec;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d372ec; end: 105d3731f;  */

void FUN_105d372ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d37320; end: 105d374a3; -[SCPreviewFeatureCTLensPerfectSelfieImpl _performCleanUpWithError:selectedCarouselItemId:] */

void FUN_105d37320(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  func_0x00010be925e0(param_1);
  *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + 1;
  lVar5 = *(long *)(param_1 + 0x98);
  bVar1 = *(byte *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (lVar5 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128740();
    _objc_release(uVar2);
  }
  if (((bVar1 & 1) == 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
  }
  func_0x00010bea53e0(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c620();
  _objc_release(uVar2);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158b80();
    _objc_release(uVar2);
  }
  func_0x00010bea8900(param_1,param_2,0);
  func_0x00010c129080(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c08f640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar2);
  _objc_release(uVar4);
  if (lVar5 - 1U < 2) {
    func_0x00010c0a5520(*(undefined8 *)(param_1 + 0x80),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d374a4; end: 105d375af; -[SCPreviewFeatureCTLensPerfectSelfieImpl _observeCTLensApplicationStateUpdate] */

void FUN_105d374a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105d375b0; end: 105d375f7;  */

void FUN_105d375b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26a40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d375f8; end: 105d37683; -[SCPreviewFeatureCTLensPerfectSelfieImpl _handleCTLensApplicationState:] */

void FUN_105d375f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf07d20();
  if (((lVar1 == 2) || (lVar1 = param_3, func_0x00010bf07d20(), lVar1 == 1)) &&
     ((lVar1 = param_3, func_0x00010c0ff440(), lVar1 == 1 ||
      (lVar1 = param_3, func_0x00010c0ff440(), lVar1 == 0)))) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x98) == 3) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      func_0x00010c129080(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d37684; end: 105d3776f; -[SCPreviewFeatureCTLensPerfectSelfieImpl _toolbarIcon] */

void FUN_105d37684(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c112020();
  puVar4 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar1 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x2e6;
  }
  else {
    if (lVar1 != 1) {
      if (lVar1 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e29038);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = (undefined *)0x0;
      }
      goto LAB_105d37760;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x2e5;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar4,param_2,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_105d37760:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d37770; end: 105d377e3; -[SCPreviewFeatureCTLensPerfectSelfieImpl _setToolbarLoading:] */

void FUN_105d37770(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c1bedc0(lVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105d377e4; end: 105d37883; -[SCPreviewFeatureCTLensPerfectSelfieImpl setToolbarItemViewModel:] */

void FUN_105d377e4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x120);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(long *)(param_1 + 0x120) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d37884; end: 105d3793f; -[SCPreviewFeatureCTLensPerfectSelfieImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d37908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d3790c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d37884(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x110) == 0) ||
     (uVar1 = param_1, func_0x00010c072ba0(), (uVar1 & 1) == 0)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cf60(PTR_PTR_1126c4330);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c039d00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105d37940; end: 105d37967; -[SCPreviewFeatureCTLensPerfectSelfieImpl toolbarItemViewModelObservable] */

void FUN_105d37940(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d37968; end: 105d3796f; -[SCPreviewFeatureCTLensPerfectSelfieImpl toolbarItemViewModel] */

undefined8 FUN_105d37968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 105d37970; end: 105d37aef; -[SCPreviewFeatureCTLensPerfectSelfieImpl .cxx_destruct] */

void FUN_105d37970(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d37af0; end: 105d37afb; -[SCFeatureSettingsService hasSeenDisclaimerNoticeSeenForAiTool] */

void FUN_105d37af0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e29078);
  return;
}



/* Entry: 105d37afc; end: 105d37b07; -[SCFeatureSettingsService seenDisclaimerNoticeForAiToolServerParam] */

undefined ** FUN_105d37afc(void)

{
  return &PTR____CFConstantStringClassReference_110e29078;
}



/* Entry: 105d37b08; end: 105d37b17; -[SCFeatureSettingsService setSeenDisclaimerNoticeForAiTool:] */

void FUN_105d37b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e29078,param_3);
  return;
}



/* Entry: 105d37b18; end: 105d37b1f; -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_AI_MODE_DISCLAIMER_SEEN_client_value:] */

undefined * FUN_105d37b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105d37b20; end: 105d37b27; -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_AI_MODE_DISCLAIMER_SEEN_server_value:] */

void FUN_105d37b20(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105d37b28; end: 105d37b37; -[SCFeatureSettingsService seenDisclaimerNoticeForAiTool] */

void FUN_105d37b28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e29078,0);
  return;
}



/* Entry: 105d37b38; end: 105d37b43; -[SCFeatureSettingsService hasNonPlusButtonSeenCount] */

void FUN_105d37b38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e29098);
  return;
}



/* Entry: 105d37b44; end: 105d37b4f; -[SCFeatureSettingsService nonPlusButtonSeenCountServerParam] */

undefined ** FUN_105d37b44(void)

{
  return &PTR____CFConstantStringClassReference_110e29098;
}



/* Entry: 105d37b50; end: 105d37b5f; -[SCFeatureSettingsService setNonPlusButtonSeenCount:] */

void FUN_105d37b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e29098,param_3);
  return;
}



/* Entry: 105d37b60; end: 105d37b67; -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_BUTTON_NON_SNAPCHAT_PLUS_SEEN_COUNT_client_value:] */

void FUN_105d37b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105d37b68; end: 105d37b6f; -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_BUTTON_NON_SNAPCHAT_PLUS_SEEN_COUNT_server_value:] */

void FUN_105d37b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105d37b70; end: 105d37b7f; -[SCFeatureSettingsService nonPlusButtonSeenCount] */

void FUN_105d37b70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e29098,0);
  return;
}



/* Entry: 105d37b80; end: 105d37b8b; -[SCFeatureSettingsService hasPlusUpsellCount] */

void FUN_105d37b80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e290b8);
  return;
}



/* Entry: 105d37b8c; end: 105d37b97; -[SCFeatureSettingsService plusUpsellCountServerParam] */

undefined ** FUN_105d37b8c(void)

{
  return &PTR____CFConstantStringClassReference_110e290b8;
}



/* Entry: 105d37b98; end: 105d37ba7; -[SCFeatureSettingsService setPlusUpsellCount:] */

void FUN_105d37b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e290b8,param_3);
  return;
}



/* Entry: 105d37ba8; end: 105d37baf; -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_SNAPCHAT_PLUS_POPUP_SEEN_COUNT_client_value:] */

void FUN_105d37ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105d37bb0; end: 105d37bb7; -[SCFeatureSettingsService POST_CAPTURE_AI_MODE_SNAPCHAT_PLUS_POPUP_SEEN_COUNT_server_value:] */

void FUN_105d37bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105d37bb8; end: 105d37bc7; -[SCFeatureSettingsService plusUpsellCount] */

void FUN_105d37bb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e290b8,0);
  return;
}



/* Entry: 105d37bc8; end: 105d37bd3; -[SCFeatureSettingsService hasUserPermissionForRemoteInference] */

void FUN_105d37bc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e290d8);
  return;
}



/* Entry: 105d37bd4; end: 105d37bdf; -[SCFeatureSettingsService userPermissionForRemoteInferenceServerParam] */

undefined ** FUN_105d37bd4(void)

{
  return &PTR____CFConstantStringClassReference_110e290d8;
}



/* Entry: 105d37be0; end: 105d37bef; -[SCFeatureSettingsService setUserPermissionForRemoteInference:] */

void FUN_105d37be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e290d8,param_3);
  return;
}



/* Entry: 105d37bf0; end: 105d37bf7; -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_REMOTE_INFERENCE_USER_PERMISSION_client_value:] */

undefined * FUN_105d37bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 105d37bf8; end: 105d37bff; -[SCFeatureSettingsService PREVIEW_CT_LENS_TOOL_REMOTE_INFERENCE_USER_PERMISSION_server_value:] */

void FUN_105d37bf8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105d37c00; end: 105d37c0f; -[SCFeatureSettingsService userPermissionForRemoteInference] */

void FUN_105d37c00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e290d8,0);
  return;
}



/* Entry: 105d37c10; end: 105d37c73; -[SCPreviewCTLensApplicationCoordinatorImpl init] */

undefined1 * FUN_105d37c10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecfa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d37c74; end: 105d37c7b; -[SCPreviewCTLensApplicationCoordinatorImpl ctLensDidUpdateApplicationState:] */

void FUN_105d37c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 105d37c7c; end: 105d37c83; -[SCPreviewCTLensApplicationCoordinatorImpl ctLensApplicationStateObservable] */

undefined8 FUN_105d37c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d37c84; end: 105d37c8f; -[SCPreviewCTLensApplicationCoordinatorImpl .cxx_destruct] */

void FUN_105d37c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d37c90; end: 105d3843f; -[SCPreviewFeatureCTLensAiModeImpl initWithPreviewABServices:previewConfiguration:previewScopeServices:plusServices:tooltipPresenterServices:dirtyFrameProvider:imagePlayback:viewportController:filterOverlayComposition:filterUIContainer:toolLensController:contentRecognitionProvider:captionFeature:stickerContainer:snapCropFeature:featureSettingsService:simpleContentFetcher:ctLensCoordinator:userBlizzardLogger:lensPreviewConfigProvider:interactionStateLogger:asyncTaskCompletionAnnouncer:reportScopeExposer:plusSubscribeScopeExposer:plusSubscribeScopeServices:previewCommonLoggingServices:aiModeLensSessionLogger:aiModeScopeExposer:lensPlusServices:lensLogger:inLensCreationDataServices:lensCarouselManager:aiModeConfig:aiModeOpenLogger:applicationLifecycleEvents:] */

undefined8 *
FUN_105d37c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain();
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
  puStack_70 = PTR_PTR_1126ecfa8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_8);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[6];
    puVar1[6] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[7];
    puVar1[7] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_37;
    _objc_release(uVar2);
    func_0x00010be65ca0(puVar1);
    func_0x00010be25de0(puVar1);
    func_0x00010be65aa0(puVar1);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_4);
    _objc_retain(param_28);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_34;
    _objc_release(uVar2);
    func_0x00010be93ce0(puVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 105d38440; end: 105d3846b;  */

void FUN_105d38440(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3846c; end: 105d38543; -[SCPreviewFeatureCTLensAiModeImpl createAiModeToolBarButtonItemWithTarget:selector:] */

void FUN_105d3846c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c4338;
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    _objc_retain(param_3);
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c273a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01fd80(puVar1,param_2,lVar3,0,param_3,param_4);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined **)(param_1 + 0xf8) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0xf8),param_2,param_1);
    func_0x00010c18b7a0(*(undefined8 *)(param_1 + 0xf8),param_2,1);
    func_0x00010c1eb3e0(*(undefined8 *)(param_1 + 0xf8),param_2,1);
    lVar3 = *(long *)(param_1 + 0xf8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d38544; end: 105d38547; -[SCPreviewFeatureCTLensAiModeImpl aiToolBarButtonItemReportButtonTapped:] */

void FUN_105d38544(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onReportButtonTapped_1125785f8);
  return;
}



/* Entry: 105d38548; end: 105d3855b; -[SCPreviewFeatureCTLensAiModeImpl aiToolBarButtonItemDeleteButtonTapped:] */

void FUN_105d38548(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdf9f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteEditing_11255c168);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelEditing_112554390);
  return;
}



/* Entry: 105d3855c; end: 105d38563; -[SCPreviewFeatureCTLensAiModeImpl shouldDisableAIToolBarButtonItem:] */

undefined1 FUN_105d3855c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}



/* Entry: 105d38564; end: 105d3864b; -[SCPreviewFeatureCTLensAiModeImpl configureWithView:] */

void FUN_105d38564(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_release(param_3);
  func_0x00010beab1c0(param_1);
  lVar2 = param_1;
  func_0x00010becf960(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bfe2500();
  if (iVar1 != 0) {
    func_0x00010bea6860(param_1);
    func_0x00010be66460(param_1);
    func_0x00010beb7660(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xe8),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 105d3864c; end: 105d3871b; -[SCPreviewFeatureCTLensAiModeImpl snapEditor:didTriggerLifecycle:] */

void FUN_105d3864c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010befed20();
  if (iVar1 == 0) {
    if (param_4 != 0) {
      return;
    }
  }
  else {
    uVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c260800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c080120();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((param_4 != 0) || ((uVar6 & 1) == 0)) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed7eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFeatureAvailability_112593950);
  return;
}



/* Entry: 105d3871c; end: 105d3875f; -[SCPreviewFeatureCTLensAiModeImpl _currentAIModeIconName] */

void FUN_105d3871c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1d8);
  func_0x00010befed40();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e29198;
  if (lVar2 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29178;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105d38760; end: 105d38ad7; -[SCPreviewFeatureCTLensAiModeImpl _showAIModeChromeHiddenIconView] */

void FUN_105d38760(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(param_3 + 0x10);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_3 + 0x1e8;
    _objc_loadWeakRetained();
    _objc_release();
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010bdf66a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        func_0x00010c01bf60();
        func_0x00010c219b60();
        lVar2 = param_3 + 0x10;
        _objc_loadWeakRetained(lVar2);
        func_0x00010befbb60();
        _objc_release(lVar2);
        func_0x00010c23d0a0(puVar3);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        dVar21 = (44.0 - param_1) * 0.5;
        dVar22 = (double)(long)dVar21;
        puVar5 = puVar4;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3 + 0x10;
        _objc_loadWeakRetained();
        lVar6 = lVar2;
        func_0x00010c149040();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_3 + 0x10;
        _objc_loadWeakRetained();
        lVar9 = lVar8;
        func_0x00010c2737a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf25d20();
        puVar10 = puVar5;
        func_0x00010bf493c0((double)(long)((53.0 - param_2) * 0.5) + dVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = param_3 + 0x10;
        _objc_loadWeakRetained();
        lVar13 = lVar12;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar11;
        func_0x00010bf493c0(-6.0 - dVar22);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar4;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010bf49420(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar4;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010bf49420(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar2);
        _objc_release(puVar5);
        _objc_storeWeak(param_3 + 0x1e8,puVar4);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      puVar1 = puVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar1 + 0x1e8;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c12c960();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar1 + 0x1e8,0);
  return;
}



/* Entry: 105d38ad8; end: 105d38b13; -[SCPreviewFeatureCTLensAiModeImpl _removeAIModeChromeHiddenIconView] */

void FUN_105d38ad8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1e8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c960();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1e8,0);
  return;
}



/* Entry: 105d38b14; end: 105d38b43; -[SCPreviewFeatureCTLensAiModeImpl snapEditor:didTapBackFromTool:] */

bool FUN_105d38b14(void)

{
  long in_x3;
  
  if (in_x3 == 0x17) {
    func_0x00010bdda7c0();
  }
  return in_x3 == 0x17;
}



/* Entry: 105d38b44; end: 105d38b4b; -[SCPreviewFeatureCTLensAiModeImpl responderChainPriority] */

undefined8 FUN_105d38b44(void)

{
  return 0x7fffffff;
}



/* Entry: 105d38b4c; end: 105d38c6f; -[SCPreviewFeatureCTLensAiModeImpl _updateFeatureAvailability] */

void FUN_105d38b4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010befed20();
  if ((iVar1 != 0) && (*(long *)(param_1 + 400) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfbc460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 400) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bea88a0(param_1);
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + 400);
    puVar3 = auStack_40;
    _objc_copyWeak(puVar3,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar5);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105d38c70; end: 105d38cd7;  */

void FUN_105d38c70(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf529e0(param_2);
    uVar1 = param_2;
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      func_0x00010bea88a0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d38cd8; end: 105d38cdf; -[SCPreviewFeatureCTLensAiModeImpl editCount] */

undefined1 FUN_105d38cd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}


