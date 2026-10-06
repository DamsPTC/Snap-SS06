/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10683f32c; end: 10683f33b; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForSMS:phoneNumber:] */

void FUN_10683f32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be30490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__handleSingleOrMultipleShareForS_112569ac0,0,param_3,param_4);
  return;
}



/* Entry: 10683f33c; end: 10683f65f; -[SCStandardExternalShareActionRouter _handleShareWithSystemShareForDestination:excludedActivityTypes:localizedAppName:mediaConfiguration:textConfiguration:lensLoggingInfo:] */

void FUN_10683f33c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar7 = param_4;
  func_0x000108f94918();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(puVar2);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar6 = PTR_PTR_1126ae558;
  uVar7 = param_7;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar6 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_10683f510;
    }
    func_0x00010c0c3fe0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    func_0x00010c0c45e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar7);
LAB_10683f510:
  _objc_initWeak(auStack_80,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  uStack_98 = param_4;
  _objc_retain(param_6);
  _objc_copyWeak(auStack_a0,auStack_80);
  puStack_90 = puVar4;
  _objc_retain(param_5);
  _objc_retain(param_7);
  uStack_88 = param_1;
  func_0x00010c297260(puVar6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10683f660; end: 10683fd3f;  */

void FUN_10683f660(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_318;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10683dd0c;
  uStack_110 = 0x10683dd1c;
  uStack_108 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    puVar1 = param_2;
    func_0x00010bf529e0();
    puStack_318 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar1 < (undefined *)0x2) {
      func_0x0001068470dc();
      _objc_retainAutoreleasedReturnValue();
      puStack_318 = puVar1;
    }
    else {
      func_0x0001068470f4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  else {
    puVar1 = param_2;
    func_0x00010bf529e0();
    puStack_318 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar1 < (undefined *)0x2) {
      puVar1 = param_2;
      func_0x00010bf529e0();
      puStack_318 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar1 == (undefined *)0x0) {
        func_0x00010684710c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      else {
        func_0x0001068470ac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
    }
    else {
      func_0x0001068470c4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puVar4 = param_2;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar4 == (undefined *)0x0) {
    *(undefined1 *)(puStack_168 + 3) = 1;
    goto LAB_10683fb08;
  }
  puStack_188 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x2020000000;
  uStack_198 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar9 = *plStack_1e0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(undefined8 *)(lStack_1e8 + (long)puVar8 * 8);
        puVar5 = PTR_PTR_1126ce6b8;
        _objc_opt_new();
        if ((*(byte *)(puStack_148 + 3) & 1) == 0) {
          func_0x00010c1b1020(puVar5);
          *(undefined1 *)(puStack_148 + 3) = 1;
        }
        func_0x00010c1c4020(puVar5);
        func_0x00010c216240(puVar5);
        puStack_238 = puVar1;
        uStack_230 = 0xc2000000;
        pcStack_228 = FUN_10683fd40;
        puStack_220 = &UNK_110943808;
        uStack_218 = *(undefined8 *)(param_1 + 0x30);
        puStack_200 = &uStack_190;
        _objc_retain(puVar5);
        puStack_210 = puVar5;
        _objc_retain(puVar3);
        puStack_288 = puVar1;
        uStack_280 = 0xc2000000;
        pcStack_278 = FUN_10683fdc0;
        puStack_270 = &UNK_110943838;
        uStack_268 = *(undefined8 *)(param_1 + 0x38);
        puStack_248 = &uStack_1b0;
        puStack_208 = puVar3;
        puStack_1f8 = &uStack_170;
        _objc_retain(puVar5);
        uStack_258 = *(undefined8 *)(param_1 + 0x30);
        puStack_260 = puVar5;
        _objc_retain(puVar3);
        puStack_250 = puVar3;
        puStack_240 = &uStack_170;
        func_0x00010c0be4e0(uVar11);
        func_0x00010befa120(puVar2);
        _objc_release(puStack_250);
        _objc_release(puStack_260);
        _objc_release(puStack_208);
        _objc_release(puStack_210);
        _objc_release(puVar5);
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = param_2;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(param_2);
  if (*(char *)(puStack_188 + 3) == '\x01') {
    uVar11 = puStack_128[5];
    if (*(char *)(puStack_1a8 + 3) == '\0') {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db6dd8;
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e615f8;
    }
LAB_10683fae8:
    puStack_128[5] = ppuVar7;
    _objc_release(uVar11);
  }
  else if (*(char *)(puStack_1a8 + 3) != '\0') {
    uVar11 = puStack_128[5];
    ppuVar7 = &PTR____CFConstantStringClassReference_110de7678;
    goto LAB_10683fae8;
  }
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
LAB_10683fb08:
  lVar9 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar9);
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  _objc_retain(puStack_318);
  _objc_retain(puVar2);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar11);
  _objc_copyWeak(auStack_2a8,param_1 + 0x50);
  _objc_retain(puVar3);
  uStack_298 = *(undefined8 *)(param_1 + 0x58);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar12);
  uStack_290 = *(undefined8 *)(param_1 + 0x68);
  lVar6 = lVar10;
  func_0x00010be22900(lVar9);
  _objc_release(lVar9);
  _objc_release(uVar12);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(uVar11);
  _objc_release(puVar2);
  _objc_release(puStack_318);
  _objc_release(lVar10);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(puStack_318);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_190,8);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x18) = 1;
  if (lVar6 == 0) {
    return;
  }
  lVar9 = *(long *)(param_2 + 0x20);
  func_0x00010beebaa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x00010c1cb080(*(undefined8 *)(param_2 + 0x28));
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
    *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 10683fd40; end: 10683fdbf;  */

void FUN_10683fd40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010beebaa0(lVar1,param_2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c1cb080(*(undefined8 *)(param_1 + 0x28));
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10683fdc0; end: 10683ff1b;  */

void FUN_10683fdc0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfacf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bfad300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010be33a80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cb080(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c0d51e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar3);
    if (lVar3 != param_2) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0d51e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar4);
      _objc_release(uVar2);
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10683ff1c; end: 106840183;  */

void FUN_10683ff1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_2 + 0x20) != 0) {
    puVar2 = PTR_PTR_1126ce6b8;
    _objc_opt_new(PTR_PTR_1126ce6b8);
    if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x18) & 1) == 0) {
      func_0x00010c1b1020(puVar2);
      *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x50) + 8) + 0x18) = 1;
    }
    uVar4 = param_3;
    FUN_10683d1e8(param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213220(puVar2);
    _objc_release(uVar4);
    func_0x00010c216240(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
    lVar3 = *(long *)(*(long *)(param_2 + 0x58) + 8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbf1d8;
    if (*(long *)(lVar3 + 0x28) != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e615f8;
    }
    *(undefined ***)(lVar3 + 0x28) = ppuVar1;
    _objc_release();
    _objc_release(puVar2);
  }
  func_0x000108f95118();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aeb08;
  _objc_alloc(PTR_PTR_1126aeb08);
  func_0x00010bff0f80();
  func_0x00010c197fe0();
  _objc_copyWeak(auStack_70,param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar4);
  uStack_68 = *(undefined8 *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  uStack_60 = *(undefined8 *)(param_2 + 0x80);
  uStack_58 = param_1;
  func_0x00010c17fc60(puVar2);
  param_2 = param_2 + 0x68;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdd0840();
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106840184; end: 10684040b;  */

void FUN_106840184(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    func_0x00010c0f7fc0(uVar4);
    if (param_5 != 0) {
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      func_0x00010be52e40();
      _objc_release(lVar1);
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x000108f94918();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52ee0(lVar1);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(lVar1);
    }
    if (param_3 != 0) {
      lVar1 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar1);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x000108f94918();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52ee0(lVar1);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(lVar1);
    }
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(*(undefined8 *)(param_1 + 0x68));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6d860(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
  _objc_release();
  _objc_release(param_5);
  _objc_release(param_2);
  return;
}



/* Entry: 10684040c; end: 10684052b;  */

void FUN_10684040c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c12cc60(puVar2);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(puVar2 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(puVar2 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(puVar2 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(puVar2 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 10684052c; end: 106840627;  */

void FUN_10684052c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 106840628; end: 10684085b; -[SCStandardExternalShareActionRouter _handleSingleMediaShareForCopy:textConfiguration:shareDestination:] */

void FUN_106840628(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar2 = param_4;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar6 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_106840768;
    }
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0c45e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_106840768:
  _objc_initWeak(auStack_78,param_2);
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uStack_90 = param_6;
  uStack_88 = param_1;
  puStack_80 = puVar3;
  func_0x00010c297260(puVar6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10684085c; end: 10684099b;  */

void FUN_10684085c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_70,param_1 + 0x30);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010becb4c0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10684099c; end: 106840c3b;  */

void FUN_10684099c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  char *pcStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10683dd0c;
  uStack_80 = 0x10683dd1c;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = &uStack_a0;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106840c3c;
  puStack_b0 = &UNK_1108434b0;
  puStack_78 = puVar2;
  _objc_copyWeak(auStack_a8,param_1 + 0x38);
  pcVar3 = "APPSTORE";
  func_0x0001000d76cc("APPSTORE",&puStack_c8);
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106840c68;
  puStack_f0 = &UNK_1109438f8;
  _objc_retain(param_2);
  uStack_e8 = param_2;
  _objc_retain(param_3);
  uStack_e0 = param_3;
  puStack_d0 = &uStack_a0;
  _objc_retain(pcVar3);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106840d90;
  puStack_120 = &UNK_110943928;
  puStack_110 = &uStack_a0;
  pcStack_d8 = pcVar3;
  _objc_retain(pcVar3);
  pcStack_118 = pcVar3;
  func_0x00010c0be4e0(uVar4);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_106840ea0;
  puStack_180 = &UNK_110943958;
  puStack_160 = &uStack_a0;
  _objc_copyWeak(auStack_158,param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_178 = uVar4;
  _objc_retain(uVar5);
  uStack_150 = *(undefined8 *)(param_1 + 0x40);
  uStack_148 = *(undefined8 *)(param_1 + 0x48);
  uStack_140 = *(undefined8 *)(param_1 + 0x50);
  uStack_170 = uVar5;
  uStack_168 = param_2;
  _objc_retain(param_2);
  func_0x000100bc0718(pcVar3,PTR___dispatch_main_q_11034be20,&puStack_198);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_destroyWeak(auStack_158);
  _objc_release(pcStack_118);
  _objc_release(pcStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(pcVar3);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 106840c3c; end: 106840c67;  */

void FUN_106840c3c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106840c68; end: 106840e9f;  */

void FUN_106840c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain(param_2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar3;
  _objc_release(uVar6);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c220220(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28) = puVar3;
  _objc_release(uVar7);
  _dispatch_group_leave(*(undefined8 *)(puVar1 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6420();
  puVar1 = puVar2 + 0x40;
  _objc_loadWeakRetained(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(puVar2 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106840ea0; end: 106840f77;  */

void FUN_106840ea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6420();
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar4,param_2,uVar1,uVar2,uVar6,0,uVar7,1,puVar5,0,
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106840f78; end: 106841007; -[SCStandardExternalShareActionRouter _handleMultipleMediaShareForCopy:textConfiguration:] */

void FUN_106840f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,9,PTR____NSArray0__struct_11034ab48,0,param_3,0,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106841008; end: 106841217; -[SCStandardExternalShareActionRouter _handleSingleMediaShareForInstagramStories:textConfiguration:] */

void FUN_106841008(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar2 = param_4;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar6 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_106841140;
    }
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0c45e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_106841140:
  _objc_initWeak(auStack_68,param_2);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_78 = param_1;
  puStack_70 = puVar3;
  func_0x00010c297260(puVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106841218; end: 1068414e7;  */

void FUN_106841218(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10683dd0c;
  uStack_90 = 0x10683dd1c;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = puVar1;
  func_0x00010c0be4e0(param_2);
  uStack_78 = *(undefined8 *)PTR__UIPasteboardOptionExpirationDate_110345d58;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e40(0x4072c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = puStack_a8[5];
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6440(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x000108f94368();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar5);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(puStack_88);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_b0);
  __Unwind_Resume();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar7);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 8) + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef7f60(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  _objc_initWeak(auStack_208,puVar1);
  _objc_retain(puVar3);
  _objc_copyWeak(auStack_220,auStack_208);
  uStack_218 = uVar8;
  puStack_210 = puVar4;
  func_0x00010becb4c0(puVar1);
  _objc_destroyWeak(auStack_220);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_208);
  _objc_release(puVar3);
  return;
}



/* Entry: 1068414e8; end: 106841677;  */

void FUN_1068414e8(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(uVar6);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bef7f60(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  _objc_initWeak(auStack_e8,puVar1);
  _objc_retain(puVar4);
  _objc_copyWeak(auStack_100,auStack_e8);
  uStack_f8 = param_1;
  puStack_f0 = puVar3;
  func_0x00010becb4c0(puVar1);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar4);
  return;
}



/* Entry: 106841678; end: 106841797; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForInstagramDirect:] */

void FUN_106841678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010becb4c0(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106841798; end: 1068418c7;  */

void FUN_106841798(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((lVar1 == 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
    lVar1 = param_2;
    FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    _objc_retain(lVar1);
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  func_0x000108f942d4(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068418c8; end: 1068419c7; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForSnap:] */

void FUN_1068418c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010becb4c0(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068419c8; end: 106841ca7;  */

void FUN_1068419c8(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae6d0;
    _objc_alloc();
    func_0x00010c03e5a0();
    puVar3 = PTR_PTR_1126b1bb0;
    func_0x00010bf165e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5b40;
    func_0x00010c254180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b13b0;
    func_0x00010bf0d320();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b5b48;
    func_0x00010bf5cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b20d0;
    _objc_alloc();
    func_0x00010c03c940();
    puVar8 = PTR_PTR_1126b20d8;
    _objc_alloc(PTR_PTR_1126b20d8);
    puVar9 = puVar8;
    func_0x00010c2a9d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126ce6c0;
    _objc_alloc();
    puVar10 = puVar8;
    func_0x0001091f3d04();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e580();
    _objc_release(puVar11);
    _objc_release(puVar10);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uVar14 = 0xc2000000;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106841ca8;
    puStack_78 = &UNK_110841fb0;
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    _objc_retain(puVar8);
    puStack_70 = puVar8;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar13);
    uVar12 = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(lVar1 + 0xa8) = uVar13;
    _objc_release(uVar12);
    _objc_retain(param_2);
    uVar12 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = param_2;
    _objc_release(uVar12);
    func_0x000108f95118();
    *(undefined8 *)(lVar1 + 0xb8) = uVar14;
    _objc_release(puStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106841ca8; end: 106841d07;  */

void FUN_106841ca8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106841d08; end: 106841f17; -[SCStandardExternalShareActionRouter _handleSingleMediaShareForInstagramFeed:textConfiguration:] */

void FUN_106841d08(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar2 = param_4;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar6 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_106841e40;
    }
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    func_0x00010c0c45e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_106841e40:
  _objc_initWeak(auStack_68,param_2);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_78 = param_1;
  puStack_70 = puVar3;
  func_0x00010c297260(puVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106841f18; end: 1068422d7;  */

void FUN_106841f18(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_108 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_138 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10683dd0c;
  uStack_b0 = 0x10683dd1c;
  uStack_a8 = 0;
  puStack_130 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x2020000000;
  uStack_d8 = 0;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1068422d8;
  puStack_110 = &UNK_110943a48;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106842460;
  puStack_140 = &UNK_110943a78;
  puStack_100 = puStack_138;
  puStack_f8 = puStack_130;
  puStack_e8 = puStack_130;
  puStack_c8 = puStack_138;
  puStack_98 = puStack_108;
  func_0x00010c0be4e0(param_2);
  if (*(char *)(puStack_98 + 3) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
    _objc_opt_new(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
    func_0x00010c19b420();
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206840(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puStack_180 = &uStack_188;
    uStack_188 = 0;
    uStack_178 = 0x3032000000;
    pcStack_170 = FUN_10683dd0c;
    uStack_168 = 0x10683dd1c;
    uStack_160 = 0;
    puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa5100(PTR__OBJC_CLASS___PHAsset_1126bd898);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    lVar5 = puStack_180[5];
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_188,8);
    _objc_release(uStack_160);
    _objc_release(puVar2);
  }
  else {
    lVar5 = puStack_c8[5];
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = 0;
  if (lVar5 != 0) {
    uVar1 = *(undefined1 *)(puStack_e8 + 3);
  }
  *(undefined1 *)(puStack_e8 + 3) = uVar1;
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar7 = lVar5;
  func_0x000108f9437c(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar6);
  _objc_release(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_f0,8);
  __Block_object_dispose(&uStack_d0,8);
  uVar9 = 8;
  __Block_object_dispose(&uStack_a0);
  __Unwind_Resume();
  _objc_retain(uVar9);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  uVar8 = 0;
  _dispatch_semaphore_create();
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  func_0x00010c0f84e0(puVar2);
  _objc_release(puVar2);
  _dispatch_semaphore_wait(uVar8,0xffffffffffffffff);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar9);
  return;
}



/* Entry: 1068422d8; end: 1068423eb;  */

void FUN_1068422d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar1 = 0;
  _dispatch_semaphore_create();
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f84e0(puVar2);
  _objc_release(puVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1068423ec; end: 10684244b;  */

void FUN_1068423ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  func_0x00010bf5a8a0(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fd840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10684244c; end: 10684245f;  */

void FUN_10684244c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106842460; end: 106842563;  */

void FUN_106842460(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = 0;
  _dispatch_semaphore_create();
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f84e0(puVar2);
  _objc_release(puVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106842564; end: 1068425c3;  */

void FUN_106842564(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  func_0x00010bf5a8e0(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fd840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068425c4; end: 1068425d7;  */

void FUN_1068425c4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068425d8; end: 106842627;  */

void FUN_1068425d8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *param_4 = 1;
  return;
}



/* Entry: 106842628; end: 106842723; -[SCStandardExternalShareActionRouter _handleMultipleMediaShareForInstagramStoriesAndFeed:textConfiguration:] */

void FUN_106842628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001068471fc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c0b3ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,6,uVar2,uVar3,param_3,0,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106842724; end: 10684286b; -[SCStandardExternalShareActionRouter _handleTextOrMediaShareForDiscord:textConfiguration:] */

void FUN_106842724(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = param_4;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  lVar2 = 0;
  if (lVar5 == 0) {
    lVar2 = param_3;
  }
  lVar1 = param_4;
  if (lVar5 == 0 && param_3 != 0) {
    lVar1 = 0;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010684719c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,0x1b,uVar7,uVar8,lVar2,lVar1,lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10684286c; end: 106842967; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForWhatsApp:textConfiguration:] */

void FUN_10684286c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106847184();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c0b3ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,0xe,uVar2,uVar3,param_3,0,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106842968; end: 106842a63; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForLine:textConfiguration:] */

void FUN_106842968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010684722c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c0b3ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,0x14,uVar2,uVar3,param_3,0,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106842a64; end: 106842b5f; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTelegram:textConfiguration:] */

void FUN_106842a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106847244();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c0b3ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,0x15,uVar2,uVar3,param_3,0,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106842b60; end: 106842c5b; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForViber:textConfiguration:] */

void FUN_106842b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdc9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010684725c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0922e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010c0b3ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(param_1,param_2,0x16,uVar2,uVar3,param_3,0,uVar5);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106842c5c; end: 106842c5f; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForSMS:textConfiguration:phoneNumber:] */

void FUN_106842c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be30490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleSingleOrMultipleShareForS_112569ac0);
  return;
}



/* Entry: 106842c60; end: 106842ecf; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleShareForSMS:textConfiguration:phoneNumber:] */

void FUN_106842c60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bf17b60();
  _objc_release(puVar5);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar5 = PTR_PTR_1126ae558;
  uVar6 = param_4;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar5 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106842db0;
    }
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    func_0x00010c0c45e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar6);
LAB_106842db0:
  _objc_initWeak(auStack_78,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar6);
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puStack_88 = puVar2;
  uStack_80 = param_1;
  _objc_retain(param_4);
  func_0x00010c297260(puVar5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106842ed0; end: 106843183;  */

void FUN_106842ed0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x00010bf2d5a0();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (((int)puVar2 != 0) && (lVar3 = param_2, func_0x00010bf529e0(), lVar3 != 0)) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          uVar9 = *(undefined8 *)(lStack_138 + lVar7 * 8);
          puStack_168 = puVar5;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_106843184;
          puStack_150 = &UNK_110943ad8;
          _objc_retain(puVar1);
          puStack_148 = puVar1;
          func_0x00010c0be4e0(uVar9);
          _objc_release(puStack_148);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = param_2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_2);
  }
  puStack_1d0 = puVar5;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_106843214;
  puStack_1b8 = &UNK_110943b68;
  _objc_copyWeak(auStack_180,param_1 + 0x40);
  _objc_retain(param_2);
  lStack_1b0 = param_2;
  _objc_retain(puVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puStack_1a8 = puVar1;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1a0 = uVar9;
  _objc_retain(uVar8);
  uStack_178 = *(undefined8 *)(param_1 + 0x48);
  uStack_170 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = uVar8;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  ppuVar6 = &puStack_1d0;
  uStack_190 = uVar9;
  uStack_188 = uVar11;
  func_0x0001000d76cc("APPSTORE");
  _objc_release(uStack_188);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(puStack_1a8);
  _objc_release(lStack_1b0);
  _objc_destroyWeak(auStack_180);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_180);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar6;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c220220(*(undefined8 *)(param_2 + 0x20));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 106843184; end: 106843213;  */

void FUN_106843184(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c220220(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106843214; end: 1068435fb;  */

void FUN_106843214(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1068435b4;
  puVar2 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  _objc_alloc_init();
  func_0x00010c1c6e80();
  puVar3 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x00010bf2d5a0();
  if ((int)puVar3 != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      param_1 = 0;
      lVar7 = *(long *)(param_2 + 0x20);
      _objc_retain(lVar7);
      lVar4 = lVar7;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar7);
          }
          uVar8 = *(undefined8 *)(lVar10 * 8);
          _objc_retain(puVar2);
          _objc_retain(puVar2);
          uVar9 = *(undefined8 *)(param_2 + 0x28);
          _objc_retain(uVar9);
          func_0x00010c0be4e0(uVar8);
          _objc_release(uVar9);
          _objc_release(puVar2);
          _objc_release(puVar2);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
    }
  }
  puVar3 = PTR__OBJC_CLASS___MFMessageComposeViewController_1126b19d8;
  func_0x00010bf2d5e0();
  if ((int)puVar3 == 0) {
LAB_1068434f8:
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar3);
    func_0x00010bdd0840(lVar1);
    puVar3 = PTR_PTR_1126b5630;
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar11 = *(undefined8 *)(param_2 + 0x60);
    func_0x000108f95118();
    func_0x00010c0c4da0(uVar11,param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar8);
    _objc_release(puVar3);
    uVar9 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar9;
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x80) = uVar9;
    _objc_release(uVar8);
    func_0x000108f95118();
    *(undefined8 *)(lVar1 + 0x88) = uVar11;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x30);
    if (lVar4 != 0) {
      param_3 = 0;
      func_0x000108f92780();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e8ae0(puVar2);
        _objc_release(puVar3);
      }
      _objc_release(lVar4);
    }
    lVar4 = *(long *)(param_2 + 0x38);
    if (lVar4 == 0) goto LAB_1068434f8;
    _objc_retain(lVar4);
    _objc_retain(puVar2);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(*(undefined8 *)(param_2 + 0x48));
    func_0x00010be22900(lVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
LAB_1068435b4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(lVar1 + 0x20);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar8 = param_3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6e20(uVar9);
  _objc_release(puVar2);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068435fc; end: 10684371b;  */

void FUN_1068435fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6e20(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10684371c; end: 1068438cf;  */

void FUN_10684371c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10683d1e8(param_3,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172cc0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 != 0) {
    func_0x000108f92780(lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      param_5 = 1;
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e8ae0(*(undefined8 *)(param_2 + 0x28));
      _objc_release(puVar11);
    }
    _objc_release(lVar2);
  }
  puVar11 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar11);
  func_0x00010bdd0840(*(undefined8 *)(param_2 + 0x38));
  puVar11 = PTR_PTR_1126b5630;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  func_0x000108f95118();
  func_0x00010c0c4da0(uVar12,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar11;
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x38);
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = uVar10;
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x38);
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x80) = uVar10;
  _objc_release(uVar9);
  func_0x000108f95118();
  *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x88) = uVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_3 + 0x40);
  func_0x000108faa364();
  puVar11 = PTR_PTR_1126ae558;
  puVar4 = puVar7;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x40);
    func_0x000108faa350();
    puVar11 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar11 = (undefined *)0x0;
      goto LAB_1068439d4;
    }
    func_0x00010c0c3fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    func_0x00010c0c45e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_1068439d4:
  _objc_initWeak(auStack_a8,param_3);
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(puVar7);
  _objc_retain(param_5);
  func_0x00010c297260(puVar11);
  _objc_release(param_5);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar11);
  _objc_release(param_5);
  _objc_release(puVar7);
  return;
}



/* Entry: 1068438d0; end: 106843ab3; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTikTok:textConfiguration:] */

void FUN_1068438d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x000108faa364();
  puVar5 = PTR_PTR_1126ae558;
  uVar2 = param_3;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x000108faa350();
    puVar5 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1068439d4;
    }
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_1068439d4:
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106843ab4; end: 106843bf3;  */

void FUN_106843ab4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be36ee0();
  _objc_release(param_2);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bdc9ce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001068471b4();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0922e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2ffe0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106843bf4; end: 106843d93; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForTwitter:textConfiguration:] */

void FUN_106843bf4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar2);
  _objc_release(puVar14);
  _objc_release(puVar3);
  lVar4 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000106847214();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x13;
  lVar7 = lVar4;
  func_0x00010be2ffe0(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar7);
  _objc_retain(uVar8);
  lVar4 = lVar2;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar4);
  _objc_release(puVar14);
  _objc_release(puVar3);
  lVar5 = lVar4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x0001068471e4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x12;
  lVar11 = lVar5;
  func_0x00010be2ffe0(lVar2);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar11);
  _objc_retain(uVar9);
  lVar2 = lVar4;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar2);
  _objc_release(puVar14);
  _objc_release(puVar3);
  lVar5 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x0001068471cc();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar6 = lVar12;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x10;
  lVar11 = lVar5;
  func_0x00010be2ffe0(lVar4);
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(lVar11);
  puVar14 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010bf17b60();
  _objc_release(puVar14);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
  func_0x000108faa364();
  puVar14 = PTR_PTR_1126ae558;
  uVar9 = uVar10;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
    func_0x000108faa350();
    puVar14 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar14 = (undefined *)0x0;
      goto LAB_106844220;
    }
    func_0x00010c0c3fe0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar8;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
  }
  else {
    func_0x00010c0c45e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar8);
  _objc_release(uVar9);
LAB_106844220:
  _objc_initWeak(auStack_198,lVar2);
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(uVar8);
  uVar15 = *(undefined8 *)(lVar2 + 0x60);
  _objc_retain(uVar15);
  _objc_copyWeak(auStack_1b0,auStack_198);
  puStack_1a8 = puVar3;
  uStack_1a0 = param_1;
  _objc_retain(uVar10);
  _objc_retain(lVar11);
  func_0x00010c297260(puVar14);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar14);
  _objc_release(lVar11);
  _objc_release(uVar10);
  return;
}



/* Entry: 106843d94; end: 106843f37; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForMessenger:textConfiguration:] */

void FUN_106843d94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar2);
  _objc_release(puVar14);
  _objc_release(puVar3);
  lVar4 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x0001068471e4();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar8 = uVar10;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x12;
  lVar7 = lVar4;
  func_0x00010be2ffe0(param_2);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar7);
  _objc_retain(uVar9);
  lVar4 = lVar2;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar4);
  _objc_release(puVar14);
  _objc_release(puVar3);
  lVar5 = lVar4;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x0001068471cc();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar6;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0x10;
  lVar11 = lVar5;
  func_0x00010be2ffe0(lVar2);
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(lVar11);
  puVar14 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010bf17b60();
  _objc_release(puVar14);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(lVar4 + 0x40);
  func_0x000108faa364();
  puVar14 = PTR_PTR_1126ae558;
  uVar8 = uVar10;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(lVar4 + 0x40);
    func_0x000108faa350();
    puVar14 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar14 = (undefined *)0x0;
      goto LAB_106844220;
    }
    func_0x00010c0c3fe0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
  }
  else {
    func_0x00010c0c45e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
LAB_106844220:
  _objc_initWeak(auStack_138,lVar4);
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  _objc_retain(uVar9);
  uVar15 = *(undefined8 *)(lVar4 + 0x60);
  _objc_retain(uVar15);
  _objc_copyWeak(auStack_150,auStack_138);
  puStack_148 = puVar3;
  uStack_140 = param_1;
  _objc_retain(uVar10);
  _objc_retain(lVar11);
  func_0x00010c297260(puVar14);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_150);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar14);
  _objc_release(lVar11);
  _objc_release(uVar10);
  return;
}



/* Entry: 106843f38; end: 1068440db; -[SCStandardExternalShareActionRouter _handleSingleOrMultipleMediaShareForFacebook:textConfiguration:] */

void FUN_106843f38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bdc9ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(lVar2);
  _objc_release(puVar10);
  _objc_release(puVar3);
  lVar4 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x0001068471cc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar11 = uVar6;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x10;
  lVar8 = lVar4;
  func_0x00010be2ffe0(param_2);
  _objc_release(param_4);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  _objc_retain(lVar8);
  puVar10 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf17b60();
  _objc_release(puVar10);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
  func_0x000108faa364();
  puVar10 = PTR_PTR_1126ae558;
  uVar6 = uVar7;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x40);
    func_0x000108faa350();
    puVar10 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar10 = (undefined *)0x0;
      goto LAB_106844220;
    }
    func_0x00010c0c3fe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  else {
    func_0x00010c0c45e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar11);
  _objc_release(uVar6);
LAB_106844220:
  _objc_initWeak(auStack_d8,lVar2);
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x60);
  _objc_retain(uVar12);
  _objc_copyWeak(auStack_f0,auStack_d8);
  puStack_e8 = puVar3;
  uStack_e0 = param_1;
  _objc_retain(uVar7);
  _objc_retain(lVar8);
  func_0x00010c297260(puVar10);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_f0);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar10);
  _objc_release(lVar8);
  _objc_release(uVar7);
  return;
}



/* Entry: 1068440dc; end: 106844363; -[SCStandardExternalShareActionRouter _saveToCameraRollWithMedia:textConfiguration:] */

void FUN_1068440dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf17b60();
  _objc_release(puVar4);
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
  func_0x000108faa364();
  puVar4 = PTR_PTR_1126ae558;
  uVar3 = param_4;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa350();
    puVar4 = PTR_PTR_1126ae558;
    if (iVar1 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_106844220;
    }
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf51e00();
    func_0x00010bfe9ca0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  else {
    func_0x00010c0c45e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
LAB_106844220:
  _objc_initWeak(auStack_78,param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar6);
  _objc_copyWeak(auStack_90,auStack_78);
  puStack_88 = puVar2;
  uStack_80 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c297260(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106844364; end: 1068448df;  */

void FUN_106844364(long param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  undefined **ppuStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_2c0 = param_3;
  _objc_retain();
  _dispatch_group_create();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(param_2);
  lStack_2b8 = param_2;
  func_0x00010bf52a60();
  if (param_2 != 0) {
    lVar6 = *plStack_1b0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1b0 != lVar6) {
          _objc_enumerationMutation(lStack_2b8);
        }
        uVar9 = *(undefined8 *)(lStack_1b8 + lVar10 * 8);
        _dispatch_group_enter(param_3);
        puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_208 = 0xc2000000;
        pcStack_200 = FUN_1068448e0;
        puStack_1f8 = &UNK_110943bf8;
        uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
        puStack_1e0 = &uStack_160;
        puStack_1d8 = &uStack_140;
        _objc_copyWeak(auStack_1c8,param_1 + 0x48);
        puStack_1d0 = &uStack_120;
        _objc_retain(param_3);
        puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_258 = 0xc2000000;
        pcStack_250 = FUN_106844a84;
        puStack_248 = &UNK_110943c28;
        uStack_240 = *(undefined8 *)(param_1 + 0x20);
        puStack_230 = &uStack_180;
        puStack_228 = &uStack_140;
        uStack_1e8 = param_3;
        _objc_copyWeak(auStack_218,param_1 + 0x48);
        puStack_220 = &uStack_120;
        _objc_retain(param_3);
        uStack_238 = param_3;
        func_0x00010c0be4e0(uVar9);
        _objc_release(uStack_238);
        _objc_destroyWeak(auStack_218);
        _objc_release(uStack_1e8);
        _objc_destroyWeak(auStack_1c8);
        lVar10 = lVar10 + 1;
      } while (param_2 != lVar10);
      param_2 = lStack_2b8;
      func_0x00010bf52a60();
    } while (param_2 != 0);
  }
  _objc_release(lStack_2b8);
  _dispatch_group_wait(param_3,0xffffffffffffffff);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uVar9 = 0xc2000000;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_106844c30;
    puStack_270 = &UNK_1108434b0;
    puVar7 = auStack_268;
    _objc_copyWeak(puVar7,param_1 + 0x48);
    func_0x0001000d76cc("APPSTORE",&puStack_288);
  }
  else {
    puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
    uVar9 = 0xc2000000;
    uStack_2a8 = 0xc2000000;
    uStack_2a0 = 0x106844c5c;
    puStack_298 = &UNK_1108434b0;
    puVar7 = auStack_290;
    _objc_copyWeak(puVar7,param_1 + 0x48);
    func_0x0001000d76cc("APPSTORE",&puStack_2b0);
  }
  _objc_destroyWeak(puVar7);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b5630;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  func_0x000108f95118();
  func_0x00010c0c4da0(uVar11,uVar9,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
  _objc_release(puVar2);
  func_0x000108f95118();
  puVar2 = PTR_PTR_1126b5630;
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = *(undefined8 *)(param_1 + 0x40);
  uStack_2d0 = uVar4;
  func_0x00010bf43b60(uVar11,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e615f8;
  if (*(char *)(puStack_178 + 3) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db6dd8;
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110de7678;
  if (*(char *)(puStack_178 + 3) == '\0') {
    ppuVar5 = (undefined **)0x0;
  }
  if (*(char *)(puStack_158 + 3) == '\0') {
    ppuVar1 = ppuVar5;
  }
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar4 = puStack_138[3];
  ppuVar5 = ppuVar1;
  func_0x00010be52fc0();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_3);
  _objc_release(uStack_2c0);
  lVar6 = lStack_2b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_140,8);
  uVar3 = 8;
  __Block_object_dispose(&uStack_120,8);
  lVar10 = lVar6;
  __Unwind_Resume();
  pcStack_2d8 = FUN_1068448e0;
  uStack_310 = uVar9;
  ppuStack_308 = ppuVar1;
  lStack_300 = param_1;
  uStack_2f8 = param_3;
  uStack_2f0 = uVar8;
  lStack_2e8 = lVar6;
  puStack_2e0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(ppuVar5);
  *(undefined1 *)(*(long *)(*(long *)(lVar10 + 0x30) + 8) + 0x18) = 1;
  uVar8 = *(undefined8 *)(lVar10 + 0x20);
  _objc_copyWeak(auStack_318,lVar10 + 0x48);
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  _objc_retain(uVar9);
  func_0x00010c14ae40(uVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_318);
  _objc_release(ppuVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 1068448e0; end: 1068449f3;  */

void FUN_1068448e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c14ae40(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1068449f4; end: 106844a83;  */

void FUN_1068449f4(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
    _objc_retain(param_2);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be52e40();
    _objc_release(param_2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106844a84; end: 106844b9f;  */

void FUN_106844a84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c14af80(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106844ba0; end: 106844c2f;  */

void FUN_106844ba0(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
    _objc_retain(param_2);
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be52e40();
    _objc_release(param_2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106844c30; end: 106844c87;  */

void FUN_106844c30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106844c88; end: 106844d1f; -[SCStandardExternalShareActionRouter _showDropdownForSavedToCameraRoll] */

void FUN_106844c88(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e06ff8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e06ff8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106844d20; end: 106844dc7; -[SCStandardExternalShareActionRouter presentShareFailureFeedback] */

void FUN_106844d20(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106844dc8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106844dc8; end: 106844df3;  */

void FUN_106844dc8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106844df4; end: 106844e8b; -[SCStandardExternalShareActionRouter _showDropdownForSomethingWentWrong] */

void FUN_106844df4(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106844e8c; end: 106844f23; -[SCStandardExternalShareActionRouter _showDropdownForLinkCopied] */

void FUN_106844e8c(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e618b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e618b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106844f24; end: 106844faf; -[SCStandardExternalShareActionRouter _showDropdownForUnableToOpenApplication] */

void FUN_106844f24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  func_0x00010684716c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f80(puVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e618d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106844fb0; end: 1068450df; -[SCStandardExternalShareActionRouter messageComposeViewController:didFinishWithResult:] */

void FUN_106844fb0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010bdfb720();
  puVar2 = PTR_PTR_1132b17b8;
  uVar4 = 1;
  if (param_4 != 1) {
    if (param_4 != 2) goto LAB_106845014;
    uVar4 = 0;
  }
  _objc_retain(PTR_PTR_1132b17b8);
  func_0x00010be52ee0(param_1,param_2,uVar4,puVar2);
  _objc_release(puVar2);
LAB_106845014:
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = *(undefined8 *)(param_1 + 0x88);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1068450e0;
  puStack_70 = &UNK_1108a8238;
  uStack_68 = uVar5;
  uStack_60 = uVar4;
  uStack_58 = uVar1;
  uStack_50 = uVar6;
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  func_0x00010be22900(param_1,param_2,uVar4,&puStack_88);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 1068450e0; end: 1068451bb;  */

void FUN_1068450e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b5630;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43b60(*(undefined8 *)(param_1 + 0x40),puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068451bc; end: 106845347; -[SCStandardExternalShareActionRouter _handleShareDestinationByDelegate:textConfiguration:mediaConfiguration:] */

long FUN_1068451bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000108f95118();
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfd2720();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf17b60();
    _objc_release(puVar3);
    _objc_initWeak(auStack_68,param_2);
    _objc_copyWeak(auStack_88,auStack_68);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_80 = param_4;
    uStack_78 = param_1;
    puStack_70 = puVar4;
    func_0x00010be22900(param_2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return lVar2;
}



/* Entry: 106845348; end: 1068453ff;  */

void FUN_106845348(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106845400; end: 10684586b; -[SCStandardExternalShareActionRouter _openURLOptionallyAndEmitCompletedEventsWithTextConfiguration:mediaConfiguration:destination:openURL:shortLinkURL:exportSucceeded:exportStartTimestamp:exportCompleteTimestamp:destinationRoutingCookie:] */

void FUN_106845400(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_d0 [8];
  double dStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_12 != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
  }
  func_0x000108f95118();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  dVar7 = param_1;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(uVar6);
  uVar2 = *(ulong *)(param_2 + 0x40);
  func_0x000108faa7e8();
  puVar1 = PTR_PTR_1126b5630;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf885a0();
    func_0x00010c0c4da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar1);
    func_0x00010bf885a0(param_11);
    if (dVar7 == 0.0) {
      func_0x000108f95118();
    }
    puVar1 = PTR_PTR_1126b5630;
    uVar3 = param_4;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43b60(dVar7,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (param_7 != 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10684586c;
      puStack_90 = &UNK_1108471e0;
      lStack_88 = param_2;
      uStack_80 = param_6;
      func_0x00010be6d7c0(param_2);
    }
  }
  else {
    _objc_initWeak(auStack_b0,param_2);
    puVar1 = PTR_PTR_1126b5630;
    if (param_7 == 0) {
      func_0x00010bf885a0(param_10);
      func_0x00010c0c4da0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
      _objc_release(puVar1);
      func_0x00010bf885a0(param_11);
      if (dVar7 == 0.0) {
        func_0x000108f95118();
      }
      puVar1 = PTR_PTR_1126b5630;
      uVar3 = param_4;
      func_0x00010c0922e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43b60(dVar7,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
      _objc_release(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    else {
      uStack_b8 = param_9;
      _objc_retain(param_10);
      dStack_c8 = param_1;
      _objc_retain(param_11);
      uStack_c0 = param_6;
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_8);
      _objc_copyWeak(auStack_d0,auStack_b0);
      func_0x00010be6d7c0(param_2);
      _objc_destroyWeak(auStack_d0);
      _objc_release(param_8);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_11);
      _objc_release(param_10);
    }
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10684586c; end: 1068458b7;  */

void FUN_10684586c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108f94918(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52ec0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1068458b8; end: 106845acb;  */

void FUN_1068458b8(double param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126b5630;
  if (param_3 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106845acc;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,param_2 + 0x58);
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be320e0();
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_78);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x28));
    func_0x00010c0c4da0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar1);
    func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x30));
    if (param_1 == 0.0) {
      func_0x000108f95118();
    }
    puVar1 = PTR_PTR_1126b5630;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43b60(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  lVar3 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  func_0x000108f94918(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52ec0(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 106845acc; end: 106845af7;  */

void FUN_106845acc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106845af8; end: 106845b9f; -[SCStandardExternalShareActionRouter _openURL:completion:] */

void FUN_106845af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106845ba0;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106845ba0; end: 106845c47;  */

void FUN_106845ba0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106845c48;
  puStack_40 = &UNK_110842508;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010c0e9b80(puVar3,param_2,uVar1,PTR____NSDictionary0__struct_11034ab58,&puStack_58);
  _objc_release(puVar3);
  _objc_release(uStack_38);
  return;
}



/* Entry: 106845c48; end: 106845c5b;  */

void FUN_106845c48(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106845c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106845c5c; end: 106845e0f; -[SCStandardExternalShareActionRouter _imageCountFromMedia:] */

long FUN_106845c5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0be4e0(*(undefined8 *)(lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar2 = puStack_110[3];
  __Block_object_dispose(&uStack_118,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar2;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_118,8);
  __Unwind_Resume();
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  return param_3;
}



/* Entry: 106845e10; end: 106845e2b;  */

void FUN_106845e10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 106845e2c; end: 106845fdf; -[SCStandardExternalShareActionRouter _videoCountFromMedia:] */

long FUN_106845e2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c0be4e0(*(undefined8 *)(lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar2 = puStack_110[3];
  __Block_object_dispose(&uStack_118,8);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar2;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_118,8);
  __Unwind_Resume(param_3);
  return param_3;
}



/* Entry: 106845fe0; end: 106845ffb;  */

void FUN_106845fe0(void)

{
  return;
}



/* Entry: 106845ffc; end: 1068460a3; -[SCStandardExternalShareActionRouter _detachUI] */

void FUN_106845ffc(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1068460a4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1068460a4; end: 1068460db;  */

void FUN_1068460a4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068460dc; end: 1068461af; -[SCStandardExternalShareActionRouter _attachUI:] */

void FUN_1068460dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1068461b0;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(lStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1068461b0; end: 1068461eb;  */

void FUN_1068461b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf0c980(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068461ec; end: 1068463b3; -[SCStandardExternalShareActionRouter _allActivityTypes] */

void FUN_1068461ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_b8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__UIActivityTypePostToWeibo_1103459e0;
  uStack_a0 = *(undefined8 *)PTR__UIActivityTypePostToFacebook_1103459b8;
  uStack_98 = *(undefined8 *)PTR__UIActivityTypePostToTwitter_1103459d0;
  uStack_90 = *(undefined8 *)PTR__UIActivityTypeMessage_1103459a8;
  uStack_88 = *(undefined8 *)PTR__UIActivityTypeMail_110345998;
  uStack_80 = *(undefined8 *)PTR__UIActivityTypePrint_1103459e8;
  uStack_78 = *(undefined8 *)PTR__UIActivityTypeCopyToPasteboard_110345990;
  uStack_70 = *(undefined8 *)PTR__UIActivityTypeAssignToContact_110345988;
  uStack_68 = *(undefined8 *)PTR__UIActivityTypeSaveToCameraRoll_1103459f0;
  uStack_60 = *(undefined8 *)PTR__UIActivityTypeAddToReadingList_110345978;
  uStack_58 = *(undefined8 *)PTR__UIActivityTypePostToFlickr_1103459c0;
  uStack_50 = *(undefined8 *)PTR__UIActivityTypePostToVimeo_1103459d8;
  uStack_48 = *(undefined8 *)PTR__UIActivityTypePostToTencentWeibo_1103459c8;
  uStack_40 = *(undefined8 *)PTR__UIActivityTypeAirDrop_110345980;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  uStack_b8 = *(undefined8 *)PTR__UIActivityTypeOpenInIBooks_1103459b0;
  uStack_b0 = *(undefined8 *)PTR__UIActivityTypeMarkupAsPDF_1103459a0;
  puVar7 = (undefined *)0x2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010befa160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c0f5800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfacbe0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar6;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retain(puVar6);
    }
    else {
      puVar4 = puVar7;
      func_0x00010c0f5800(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bfacbe0(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      if ((int)puVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uStack_108 = 0;
        func_0x00010c12cc60(puVar2,param_2,puVar7,&uStack_108);
        uVar8 = uStack_108;
        _objc_retain(uStack_108);
      }
      puVar4 = puVar2;
      uStack_110 = uVar8;
      func_0x00010c099760(puVar2,param_2,puVar6,puVar7,&uStack_110);
      uVar1 = uStack_110;
      _objc_retain(uStack_110);
      _objc_release(uVar8);
      if ((int)puVar4 == 0) {
        _objc_retain(puVar6);
        _objc_release(uVar1);
      }
      else {
        _objc_retain(puVar7);
        _objc_release(uVar1);
        puVar3 = puVar7;
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1068463b4; end: 106846523; -[SCStandardExternalShareActionRouter _hardLinkFromURL:toURL:] */

void FUN_1068463b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    uVar5 = param_4;
    func_0x00010c0f5800(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfacbe0(puVar2,param_2,uVar5);
    _objc_release(uVar5);
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uStack_48 = 0;
      func_0x00010c12cc60(puVar2,param_2,param_4,&uStack_48);
      uVar5 = uStack_48;
      _objc_retain(uStack_48);
    }
    puVar4 = puVar2;
    uStack_50 = uVar5;
    func_0x00010c099760(puVar2,param_2,param_3,param_4,&uStack_50);
    uVar1 = uStack_50;
    _objc_retain(uStack_50);
    _objc_release(uVar5);
    if ((int)puVar4 == 0) {
      _objc_retain(param_3);
      _objc_release(uVar1);
    }
    else {
      _objc_retain(param_4);
      _objc_release(uVar1);
      uVar3 = param_4;
    }
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106846524; end: 106846603; -[SCStandardExternalShareActionRouter _writeImageToTempDirectory:filename:] */

void FUN_106846524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  _UIImageJPEGRepresentation(0x3ff0000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_38 = 0;
  uVar2 = uVar4;
  func_0x00010c2bda40(uVar4,param_2,uVar1,param_4,6,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106846604; end: 10684670f; -[SCStandardExternalShareActionRouter _logExportNonFatalError:destination:contentType:] */

void FUN_106846604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1ff2e0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f94918();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e61918);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  puVar3 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar4,param_2,puVar1,0,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106846710; end: 10684683f; -[SCStandardExternalShareActionRouter _textConfigurationURLForTextConfiguration:completion:] */

void FUN_106846710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1068467c4;
  puStack_48 = &UNK_11085d1a0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be22900(param_1,param_2,param_3,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106846840; end: 1068468bb; -[SCStandardExternalShareActionRouter _textConfigurationTitleForTextConfiguration:] */

void FUN_106846840(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c22b0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = lVar1;
    func_0x000106847124();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c22b0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1068468bc; end: 1068469ff; -[SCStandardExternalShareActionRouter _generateShortLinkURLWithTextConfiguration:] */

void FUN_1068468bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf80820();
  if (((int)lVar1 == 0) && (lVar1 = lVar2, func_0x00010c08fa60(), lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf56aa0(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010bedfd80(param_1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106846a00; end: 106846a47;  */

void FUN_106846a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfd80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106846a48; end: 106846b8f; -[SCStandardExternalShareActionRouter _updateShortLinkURL:] */

void FUN_106846a48(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x50);
  if (param_3 == (undefined *)0x0) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf43ca0(lVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf43d60();
    param_1 = lVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_4);
  puVar2 = puVar5;
  func_0x00010bf80820();
  if ((int)puVar2 == 0) {
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    puStack_c8 = &uStack_d0;
    _objc_retain(uVar8);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bfbc3e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106846d9c;
    puStack_e8 = &UNK_1108aa400;
    puStack_d8 = &uStack_d0;
    _objc_retain(param_4);
    lStack_e0 = param_4;
    func_0x00010c297280(uVar3);
    _objc_release(uVar3);
    lVar7 = *(long *)(param_1 + 0x40);
    func_0x000108faa3c8(lVar7);
    uVar4 = 0;
    _dispatch_time(0,lVar7 * 1000000);
    uVar3 = uVar8;
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106846e0c;
    puStack_118 = &UNK_1108647e8;
    puStack_108 = &uStack_d0;
    _objc_retain(param_4);
    lStack_110 = param_4;
    func_0x00010058c530(uVar4,uVar3,&puStack_130);
    _objc_release(uVar3);
    _objc_release(lStack_110);
    _objc_release(lStack_e0);
    _objc_release(uVar8);
    __Block_object_dispose(&uStack_d0,8);
  }
  else {
    puVar2 = puVar5;
    func_0x00010c28f340(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  return;
}



/* Entry: 106846b90; end: 106846d9b; -[SCStandardExternalShareActionRouter _getShortLinkURLWithTextConfiguration:completion:] */

void FUN_106846b90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf80820();
  if ((int)uVar2 == 0) {
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puStack_78 = &uStack_80;
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bfbc3e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106846d9c;
    puStack_98 = &UNK_1108aa400;
    puStack_88 = &uStack_80;
    _objc_retain(param_4);
    lStack_90 = param_4;
    func_0x00010c297280(uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x000108faa3c8(lVar3);
    uVar4 = 0;
    _dispatch_time(0,lVar3 * 1000000);
    uVar2 = uVar5;
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106846e0c;
    puStack_c8 = &UNK_1108647e8;
    puStack_b8 = &uStack_80;
    _objc_retain(param_4);
    lStack_c0 = param_4;
    func_0x00010058c530(uVar4,uVar2,&puStack_e0);
    _objc_release(uVar2);
    _objc_release(lStack_c0);
    _objc_release(lStack_90);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_80,8);
  }
  else {
    uVar2 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106846d9c; end: 106846e0b;  */

void FUN_106846d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106846e0c; end: 106846e37;  */

void FUN_106846e0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000106846e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106846e38; end: 106846e9f; -[SCStandardExternalShareActionRouter _logExternalAppOpenOutcome:destination:] */

void FUN_106846e38(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_4);
  if (param_3 == 0) {
    FUN_1068474a4(uVar1,param_4,1);
    func_0x00010be52ee0(param_1);
  }
  else {
    FUN_106847330();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106846ea0; end: 106846ebb; -[SCStandardExternalShareActionRouter _logExternalShareOutcome:destination:] */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106846ea0(long param_1,undefined8 param_2,int param_3,undefined *param_4,undefined *param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long *unaff_x21;
  long *plVar11;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_149 [201];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar1 = *(undefined **)(param_1 + 0x70);
  puVar2 = param_4;
  puVar9 = param_4;
  if (param_3 == 0) {
    puVar6 = (undefined *)0x1;
  }
  else {
    puVar6 = (undefined *)0x1;
    puVar7 = &uStack_80;
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_4);
    unaff_x21 = (long *)0x0;
    if (puVar1 != (undefined *)0x0) {
      unaff_x21 = *(long **)(puVar1 + 8);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        puVar2 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x23 = auStack_60;
      func_0x00010002b838(auStack_60,puVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      puVar2 = &UNK_110943e38;
      puVar9 = (undefined *)0x1;
      (**(code **)(*unaff_x21 + 0x18))(unaff_x21);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar6 = (undefined *)puVar7;
      unaff_x22 = &uStack_80;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar6 = (undefined *)puVar7;
        unaff_x22 = &uStack_80;
      }
    }
    unaff_x20 = param_4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    _objc_release(param_4);
    unaff_x30 = FUN_10684778c;
    puVar1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    unaff_x19 = param_4;
  }
  puVar8 = (undefined *)((long)register0x00000008 + -0x80);
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar6;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar1 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar1 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f39c026;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x60);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x60),puVar1);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x00010007e1e8((undefined1 *)((long)register0x00000008 + -0x80),
                        (undefined1 *)((long)register0x00000008 + -0x60),
                        (undefined1 *)((long)register0x00000008 + -0x48),1);
    puVar5 = &UNK_110943e88;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    *(undefined1 **)((long)register0x00000008 + -0x68) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x00010007e5dc((undefined1 *)((long)register0x00000008 + -0x68));
    puVar3 = puVar8;
    puVar9 = puVar6;
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x80);
    if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
      puVar3 = puVar8;
      puVar9 = puVar6;
      unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x80);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = (undefined *)((long)register0x00000008 + -0x100);
  *(undefined1 **)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xb8) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0xb0) = unaff_x22;
  *(long **)((long)register0x00000008 + -0xa8) = plVar11;
  *(undefined **)((long)register0x00000008 + -0xa0) = puVar1;
  *(undefined **)((long)register0x00000008 + -0x98) = puVar2;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x88) = FUN_106847900;
  *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
  ;
  puVar2 = puVar5;
  puVar1 = puVar3;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0xe0),puVar2);
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    func_0x00010007e1e8((undefined1 *)((long)register0x00000008 + -0x100),
                        (undefined1 *)((long)register0x00000008 + -0xe0),
                        (undefined1 *)((long)register0x00000008 + -200),1);
    puVar2 = &UNK_110943ed8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    *(undefined1 **)((long)register0x00000008 + -0xe8) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    func_0x00010007e5dc((undefined1 *)((long)register0x00000008 + -0xe8));
    puVar1 = puVar8;
    puVar9 = puVar3;
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x100);
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
      puVar1 = puVar8;
      puVar9 = puVar3;
      unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x100);
    }
  }
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -200)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar6;
  __Unwind_Resume();
  puVar4 = (undefined *)((long)register0x00000008 + -0x1c0);
  *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x26;
  *(undefined **)((long)register0x00000008 + -0x148) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x140) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x138) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x130) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x128) = plVar11;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar6;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar5;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(code **)((long)register0x00000008 + -0x108) = FUN_106847a74;
  *(undefined8 *)((long)register0x00000008 + -0x158) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar1;
  puVar8 = puVar9;
  puVar10 = param_5;
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(puVar9);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = &UNK_10f39c026;
    }
    else {
      puVar6 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x1a0),puVar6);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar6 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar1);
      puVar6 = puVar1;
      func_0x00010bdc3520(puVar1);
    }
    _objc_release(puVar1);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x188),puVar6);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      unaff_x25 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar9);
      unaff_x25 = puVar9;
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x170),unaff_x25);
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
    func_0x00010007e1e8((undefined1 *)((long)register0x00000008 + -0x1c0),
                        (undefined1 *)((long)register0x00000008 + -0x1a0),
                        (undefined1 *)((long)register0x00000008 + -0x158),3);
    puVar6 = &UNK_110943f28;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    *(undefined1 **)((long)register0x00000008 + -0x1a8) =
         (undefined1 *)((long)register0x00000008 + -0x1c0);
    func_0x00010007e5dc((undefined1 *)((long)register0x00000008 + -0x1a8));
    lVar12 = 0;
    puVar5 = puVar4;
    puVar8 = param_5;
    do {
      if (*(char *)((long)register0x00000008 + lVar12 + -0x159) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar12 + -0x170));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x1c0);
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(puVar1);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x158)) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != (undefined1 *)((long)register0x00000008 + -0x1a0));
    _objc_release(puVar9);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar3;
    __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -0x210) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x208) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x200) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x1f8) =
         (undefined1 *)((long)register0x00000008 + -0x1a0);
    *(undefined **)((long)register0x00000008 + -0x1f0) = puVar3;
    *(undefined **)((long)register0x00000008 + -0x1e8) = puVar9;
    *(undefined **)((long)register0x00000008 + -0x1e0) = puVar1;
    *(undefined **)((long)register0x00000008 + -0x1d8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -0x110);
    *(code **)((long)register0x00000008 + -0x1c8) = FUN_106847d34;
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    if (puVar4 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar4 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x260),puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar2 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x248),puVar2);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x230),puVar2);
      *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
      func_0x00010007e1e8((undefined1 *)((long)register0x00000008 + -0x280),
                          (undefined1 *)((long)register0x00000008 + -0x260),
                          (undefined1 *)((long)register0x00000008 + -0x218),3);
      (**(code **)(*plVar11 + 0x18))
                (plVar11,&UNK_110943f78,(undefined1 *)((long)register0x00000008 + -0x280),puVar10);
      *(undefined1 **)((long)register0x00000008 + -0x268) =
           (undefined1 *)((long)register0x00000008 + -0x280);
      func_0x00010007e5dc((undefined1 *)((long)register0x00000008 + -0x268));
      lVar12 = 0;
      do {
        if (*(char *)((long)register0x00000008 + lVar12 + -0x219) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + lVar12 + -0x230));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x280);
      } while (lVar12 != -0x48);
    }
    _objc_release(puVar8);
    _objc_release(puVar5);
    puVar2 = puVar6;
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x218)) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != (undefined1 *)((long)register0x00000008 + -0x260));
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar6);
      __Unwind_Resume(puVar2);
      *(undefined1 **)((long)register0x00000008 + -0x290) =
           (undefined1 *)((long)register0x00000008 + -0x1d0);
      *(code **)((long)register0x00000008 + -0x288) = FUN_106847ff4;
      _objc_alloc(PTR_PTR_1126b5648);
      func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 106846ebc; end: 106846ec7; -[SCStandardExternalShareActionRouter _logFailedShareMediaSaveOutcome:contentType:] */

/* WARNING: Removing unreachable block (ram,0x000106847cfc) */
/* WARNING: Removing unreachable block (ram,0x000106847fbc) */

void FUN_106846ebc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x70);
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar5 = param_3;
  puVar8 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f39c026;
    }
    else {
      puVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110943ed8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined *)puVar6;
    puVar8 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined *)puVar6;
      puVar8 = param_3;
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  puVar6 = &uStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar7 = puVar5;
  puVar9 = puVar8;
  puVar10 = param_5;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar3);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar3 = &UNK_10f39c026;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar4 = &UNK_110943f28;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar1 = 0;
    puVar7 = (undefined *)puVar6;
    puVar9 = param_5;
    do {
      if ((&cStack_d9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar1 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_120);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar2);
    __Unwind_Resume();
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      plVar11 = *(long **)(puVar3 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        puVar2 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_1e0,puVar2);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_1c8,puVar2);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar2 = &UNK_10f39c026;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar2 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1b0,puVar2);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110943f78,&uStack_200,puVar10);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar1 = 0;
      do {
        if ((&cStack_199)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x24 = &uStack_200;
      } while (lVar1 != -0x48);
    }
    _objc_release(puVar9);
    _objc_release(puVar7);
    puVar2 = puVar4;
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_1e0);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar4);
      __Unwind_Resume(puVar2);
      _objc_alloc(PTR_PTR_1126b5648);
      func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 106846ec8; end: 106846faf; -[SCStandardExternalShareActionRouter didSendSnap] */

void FUN_106846ec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126b5630;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = uVar5;
  func_0x00010c0922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43b60(*(undefined8 *)(param_1 + 0xb8),puVar4,param_2,0x1a,0,uVar5,0,0,uVar1,uVar3,
                      *(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar5);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 106846fb0; end: 106846fb3; -[SCStandardExternalShareActionRouter didSaveSnap] */

void FUN_106846fb0(void)

{
  return;
}


