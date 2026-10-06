/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10841f058; end: 10841f0d3; -[EphemeralMedia setAIModeTextToImageInfo] */

void FUN_10841f058(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d9588;
  func_0x00010c0cb140(PTR_PTR_1126d9588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1665a0();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841f0d4; end: 10841f14f; -[EphemeralMedia setPostCaptureAIInfo] */

void FUN_10841f0d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d9590;
  func_0x00010c0cb140(PTR_PTR_1126d9590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df040();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841f150; end: 10841f213; -[EphemeralMedia setTemplateInfoWithTemplateId:] */

void FUN_10841f150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d9598;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bff6b20();
  _objc_release(param_3);
  func_0x00010c212c20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c60();
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841f214; end: 10841f28f; -[EphemeralMedia setTextModeInfo] */

void FUN_10841f214(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d95a0;
  func_0x00010c0cb140(PTR_PTR_1126d95a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2135a0();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10841f290; end: 10841f353; -[EphemeralMedia setBitmojiFashionContext:] */

void FUN_10841f290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170d40();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10841f354; end: 10841f443; -[EphemeralMedia overrideContextClientInfo:] */

void FUN_10841f354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4e840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4e0();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x00010c269920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf8d2c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea1fc0(param_1,param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10841f444; end: 10841f9b7; -[EphemeralMedia _translateContextHashtagsFromTopics:topicStickers:captionHashtags:] */

void FUN_10841f444(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bfdee00();
  _objc_release(lVar6);
  _objc_release(lVar7);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (lVar8 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_alloc();
    lVar7 = param_1;
    func_0x00010bf4e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bfdede0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar1,param_2,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
  }
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  _objc_retain(param_4);
  lVar7 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_230,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar6 = *plStack_220;
    do {
      lVar8 = 0;
      do {
        if (*plStack_220 != lVar6) {
          _objc_enumerationMutation(param_4);
        }
        uVar10 = *(undefined8 *)(lStack_228 + lVar8 * 8);
        puVar2 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c275640(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c255120();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar11;
        FUN_10841f9b8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar10);
        func_0x00010c216240(puVar2,param_2,uVar3);
        func_0x00010c206c40(puVar2,param_2,4);
        func_0x00010befa120(puVar1,param_2,puVar2);
        _objc_release(uVar3);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_230,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(param_4);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_270,auStack_170,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_260;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar12 = *(long *)(lStack_268 + (long)puVar9 * 8);
        puVar4 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bfdedc0(lVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        FUN_10841f9b8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        func_0x00010c216240(puVar4,param_2,lVar8);
        func_0x00010c247520();
        if (lVar12 - 1U < 5) {
          uVar5 = *(undefined4 *)(&UNK_10df2f5c4 + (lVar12 - 1U) * 4);
        }
        else {
          uVar5 = 0;
        }
        func_0x00010c206c40(puVar4,param_2,uVar5);
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(lVar8);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar2 != puVar9);
      puVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_270,auStack_170,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain(param_5);
  lVar7 = param_5;
  func_0x00010bf52a60(param_5,param_2,&uStack_2b0,auStack_1f0,0x10);
  if (lVar7 != 0) {
    lVar6 = *plStack_2a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_2a0 != lVar6) {
          _objc_enumerationMutation(param_5);
        }
        uVar11 = *(undefined8 *)(lStack_2a8 + lVar8 * 8);
        puVar2 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        FUN_10841f9b8(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216240(puVar2,param_2,uVar11);
        func_0x00010c206c40(puVar2,param_2,1);
        func_0x00010befa120(puVar1,param_2,puVar2);
        _objc_release(uVar11);
        _objc_release(puVar2);
        lVar8 = lVar8 + 1;
      } while (lVar7 != lVar8);
      lVar7 = param_5;
      func_0x00010bf52a60(param_5,param_2,&uStack_2b0,auStack_1f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(param_5);
  lVar7 = param_1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    puVar2 = PTR_PTR_1126b2378;
    _objc_opt_new(PTR_PTR_1126b2378);
    func_0x00010c183080(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c183080(param_1,param_2,lVar7);
  }
  _objc_release(lVar7);
  puVar2 = puVar1;
  func_0x00010bf00560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c0d3c80();
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7580();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = param_3;
  func_0x00010bf35920(param_3,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar9 = param_3;
  if ((int)puVar2 == 0x23) {
    puVar1 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e28078);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10841f9b8; end: 10841fa67;  */

void FUN_10841f9b8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf35920(param_1,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = param_1;
  if ((int)puVar1 == 0x23) {
    puVar3 = param_1;
    func_0x00010c0b5ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e28078);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10841fa68; end: 10841fab3;  */

void FUN_10841fa68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x000107c318f8(param_1,PTR_DAT_1126a5ae8);
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



/* Entry: 10841fab4; end: 10841fae7;  */

void FUN_10841fab4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db1798);
  return;
}



/* Entry: 10841fae8; end: 108420013;  */

void FUN_10841fae8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f9ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126aff90;
  if (lVar4 == 0) {
    _objc_alloc_init(PTR_PTR_1126aff90);
    func_0x00010c21d340();
  }
  else {
    _objc_alloc();
    lVar1 = lVar2;
    func_0x00010c28f340(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a0e0(puVar6,param_3,lVar3,0);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar5 = PTR_PTR_1126aff98;
      _objc_alloc(PTR_PTR_1126aff98);
      lVar1 = lVar2;
      func_0x00010bf93ec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020da0(puVar5,param_3,lVar1,1);
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010bf93e80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar5,param_3,lVar1);
      _objc_release(lVar1);
      func_0x00010c195c60(puVar6,param_3,puVar5);
      _objc_release(puVar5);
    }
  }
  lVar1 = param_2;
  func_0x00010beff2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 == 0) {
    puStack_a0 = (undefined *)0x0;
  }
  else {
    puStack_a0 = PTR_PTR_1126aff90;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010c28f340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a0e0(puStack_a0,param_3,lVar4,0);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar5 = PTR_PTR_1126aff98;
      _objc_alloc(PTR_PTR_1126aff98);
      lVar3 = lVar1;
      func_0x00010bf93ec0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020da0(puVar5,param_3,lVar3,1);
      _objc_release(lVar3);
      lVar3 = lVar1;
      func_0x00010bf93e80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar5,param_3,lVar3);
      _objc_release(lVar3);
      func_0x00010c195c60(puStack_a0,param_3,puVar5);
      _objc_release(puVar5);
    }
  }
  puVar5 = PTR_PTR_1126d95a8;
  _objc_alloc(PTR_PTR_1126d95a8);
  lVar3 = param_2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c277e80();
  func_0x00010af28d88();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c277f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c278a00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c277f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf0a460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_88,lVar11);
  }
  _CMTimeGetSeconds(&uStack_88);
  lVar12 = param_2;
  func_0x00010c277f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c07b240();
  func_0x00010c054cc0(param_1 * 1000.0,puVar5,param_3,lVar4,lVar8,lVar10,puVar6,lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c166980(puVar5,param_3,puStack_a0);
  lVar3 = param_2;
  func_0x00010c15a4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf93480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195760(puVar5,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_2;
  func_0x00010c277f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c081860();
  func_0x00010c0df6e0(puVar14,param_3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5240(puVar5,param_3,puVar14);
  _objc_release(puVar14);
  _objc_release(lVar3);
  _objc_release(puStack_a0);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108420014; end: 108420273;  */

void FUN_108420014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d95a8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c277e80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf0a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf0f2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c07b240(param_2);
  func_0x00010c054cc0(param_1,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010beff2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166980(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf93480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195760(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c072480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0c80(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c081860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5240(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf8b3e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192ec0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c260ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f680(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c128040(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9a00(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c083f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5cc0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf9e560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1997a0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108420274; end: 1084203fb;  */

void FUN_108420274(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126aff90;
    if (lVar2 == 0) {
      _objc_alloc_init(PTR_PTR_1126aff90);
      func_0x00010c21d340();
    }
    else {
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010bf4db80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c079da0(param_1);
      func_0x00010c05a0e0(puVar5,param_2,lVar1,lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf92c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        puVar3 = PTR_PTR_1126aff98;
        _objc_alloc(PTR_PTR_1126aff98);
        lVar1 = param_1;
        func_0x00010bf92c80(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010bf92ca0();
        if (((uint)lVar2 < 2) || ((uint)lVar2 == 0xfbadbeef)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
        func_0x00010c020da0(puVar3,param_2,lVar1,uVar4);
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010bf92c60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b64a0(puVar3,param_2,lVar1);
        _objc_release(lVar1);
        func_0x00010c195c60(puVar5,param_2,puVar3);
        _objc_release(puVar3);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084203fc; end: 108421177;  */

void FUN_1084203fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain();
  uVar10 = param_1;
  func_0x00010bfd69c0();
  if ((int)uVar10 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_1;
    func_0x00010bf939e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar10;
  FUN_108420274(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfd69a0();
  if ((int)uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1;
    func_0x00010bf939c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = uVar8;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c08fa60();
  _objc_release(uVar9);
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = uVar8;
    FUN_108420274(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126d95a8;
  _objc_alloc(PTR_PTR_1126d95a8);
  uVar2 = param_1;
  func_0x00010c277e80(param_1);
  func_0x00010af28d88();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf0a460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c24fb60(param_1);
  func_0x00010c054cc0((double)(uVar6 & 0xffffffff),puVar3,param_2,uVar2,uVar4,uVar5,uVar1,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010c072480(param_1);
  func_0x00010c0df6e0(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0c80(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010c081860(param_1);
  func_0x00010c0df6e0(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5240(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bf8b3e0(param_1);
  func_0x00010c0df880(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192ec0(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c166980(puVar3,param_2,uVar9);
  uVar2 = param_1;
  func_0x00010bfd5ba0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c195760(puVar3,param_2,0);
  }
  else {
    uVar2 = param_1;
    func_0x00010bf4d360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195760(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bfdb000();
  if ((int)uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c128040();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar7 = PTR_PTR_1126d95b0;
    _objc_alloc(PTR_PTR_1126d95b0);
    uVar4 = uVar2;
    func_0x00010c277e80(uVar2);
    func_0x00010af28d88();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2711a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf0a420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054c60(puVar7,param_2,uVar4,uVar5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bfd69a0();
    if ((int)uVar4 != 0) {
      uVar4 = uVar2;
      func_0x00010bf939c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_108420274();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c166980(puVar7,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    func_0x00010c1e9a00(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010bfdcec0();
  if ((int)uVar2 != 0) {
    puVar7 = PTR_PTR_1126b3040;
    _objc_alloc_init(PTR_PTR_1126b3040);
    func_0x00010c20f680(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    uVar2 = param_1;
    func_0x00010c260ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c2473e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c260ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206b40();
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c260ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf86660();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c260ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ff80();
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c260ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c260ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a98a0();
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c260ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010befcfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c260ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1659a0();
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108421178; end: 10842154f; -[SCSendFlowPreviewLogger initWithPreviewConfiguration:previewScopeServices:commonLoggingParamsBuilder:videoPlaybackLogger:filterLogger:cameraSnapCreationLogger:commerceLogger:previewScreenshotLogger:galleryLogger:previewLoggingServices:lensLoggerServices:sendingFeature:loggingFeature:commerceAttachment:lensCarouselStudySettingsServices:memoriesStorageQuotaManager:] */

undefined8 *
FUN_108421178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126fc758;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar4 = puVar1[4];
    uVar2 = param_3;
    func_0x00010c131bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2720a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076240();
    func_0x00010c2b15c0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[3];
    puVar1[3] = param_12;
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108421550; end: 108421957; -[SCSendFlowPreviewLogger logDirectSnapPreviewExitWithSenderData:isCrossPostingToSpotlight:] */

void FUN_108421550(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [128];
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  uint uStack_140;
  uint uStack_13c;
  long lStack_138;
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
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010c105440();
  uStack_13c = (uint)lVar24;
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar24;
  func_0x00010bf529e0();
  if (lVar15 == 0) {
    lVar15 = param_3;
    func_0x00010c2584a0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar15;
    func_0x00010c0d4ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar26;
    func_0x00010c071ae0();
    uStack_140 = (uint)lVar17;
    _objc_release(lVar26);
    _objc_release(lVar15);
  }
  else {
    uStack_140 = 1;
  }
  lStack_138 = param_1;
  _objc_release(lVar24);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010bf24f40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar24;
  func_0x00010bf529e0();
  uStack_148 = lVar15;
  _objc_release(lVar24);
  _objc_release(lVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar3 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar24;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar3);
  lVar3 = lVar15;
  func_0x00010bf52a60(lVar15,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    lVar24 = *plStack_120;
    do {
      lVar26 = 0;
      do {
        if (*plStack_120 != lVar24) {
          _objc_enumerationMutation(lVar15);
        }
        uVar25 = *(ulong *)(lStack_128 + lVar26 * 8);
        uVar4 = uVar25;
        func_0x00010c071ae0(uVar25,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf9a0);
        if ((uVar4 & 1) == 0) {
          func_0x00010c071ae0(uVar25,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cf9b8);
          uVar23 = (ulong)((uint)uVar25 | (uint)uVar23);
        }
        else {
          param_4 = 1;
        }
        lVar26 = lVar26 + 1;
      } while (lVar3 != lVar26);
      lVar3 = lVar15;
      func_0x00010bf52a60(lVar15,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar15);
  lVar3 = lStack_138;
  iVar2 = (int)*(undefined8 *)(lStack_138 + 8);
  func_0x00010c07ea60();
  if (iVar2 != 0) {
    lVar24 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar24;
    func_0x00010bf529e0();
    if (lVar15 == 0) {
      lVar15 = param_3;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar15;
      func_0x00010bf529e0();
      _objc_release(lVar15);
      _objc_release(lVar24);
      if (lVar26 == 0) goto LAB_108421844;
    }
    else {
      _objc_release(lVar24);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x48);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    func_0x00010bf21f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aed60(uVar5,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
LAB_108421844:
  uStack_148 = CONCAT44(uStack_148._4_4_,(uint)(uStack_148 != 0));
  lVar24 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar24;
  func_0x00010846b638();
  lVar26 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar26;
  FUN_10846b6bc();
  lVar7 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c105440();
  lVar9 = param_3;
  func_0x00010c2584a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  lStack_150 = param_3;
  func_0x00010c105460();
  lStack_158 = 0;
  uStack_15f = (undefined1)lVar10;
  uVar20 = (ulong)((uint)uVar23 & 1);
  uVar21 = (ulong)((uint)param_4 & 1);
  uStack_160 = (undefined1)lVar8;
  uVar19 = 1;
  uVar4 = (ulong)uStack_140;
  uVar25 = (ulong)uStack_13c;
  uVar22 = uStack_148 & 0xffffffff;
  lStack_170 = lVar15;
  lStack_168 = lVar17;
  func_0x00010c0a5140(lVar3,param_2,1,uVar20,uVar21,uVar4,uVar25);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar26);
  _objc_release(lVar24);
  lVar10 = lStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = lStack_158;
  lStack_1b8 = lVar3;
  pcStack_178 = FUN_108421958;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d0 = lVar7;
  lStack_1c8 = lVar17;
  lStack_1c0 = lVar26;
  lStack_1b0 = lVar24;
  lStack_1a8 = lVar8;
  lStack_1a0 = lVar15;
  uStack_198 = param_4;
  lStack_190 = lVar9;
  uStack_188 = uVar23;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(lStack_158);
  uVar1 = uStack_160;
  lVar24 = lStack_168;
  lVar3 = lStack_170;
  if ((*(byte *)(lVar10 + 0x89) & 1) != 0) goto LAB_108422168;
  uVar5 = *(undefined8 *)(lVar10 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3300();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(lVar10 + 0x10);
  func_0x00010c08f640(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  func_0x00010bf1cf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar10 + 8);
  func_0x00010bf311e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(lVar10 + 8);
  func_0x00010c242400(uVar12);
  uVar13 = *(undefined8 *)(lVar10 + 0x18);
  func_0x00010c111920(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar10 + 0x18);
  func_0x00010bf30080(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar14;
  func_0x00010bfc3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acc40(uVar6,param_2,uVar11,uVar12,uVar13,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar6);
  func_0x00010c28a560(*(undefined8 *)(lVar10 + 0x20),param_2,uVar25,uVar21,uVar20,uVar4 & 0xffffffff
                      ,uVar22 & 0xffffffff,lVar3,lVar24,uVar1);
  func_0x00010c284180(*(undefined8 *)(lVar10 + 0x20),param_2,*(undefined8 *)(lVar10 + 8));
  func_0x00010c284120(*(undefined8 *)(lVar10 + 0x20),param_2,*(undefined8 *)(lVar10 + 8));
  lVar15 = *(long *)(lVar10 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar15);
  if (lVar24 != 0) {
    func_0x00010c2af240(*(undefined8 *)(lVar10 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lVar24 = *(long *)(lVar10 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar24;
    func_0x00010c0c5c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar24);
    lVar24 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_2a0,auStack_260,0x10);
    if (lVar24 != 0) {
      lVar15 = *plStack_290;
      do {
        lVar26 = 0;
        do {
          if (*plStack_290 != lVar15) {
            _objc_enumerationMutation(lVar3);
          }
          lVar17 = *(long *)(lStack_298 + lVar26 * 8);
          func_0x00010bfea4a0();
          func_0x00010baf7bb0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar17 != 0) {
            func_0x00010befa120(puVar16,param_2,lVar17);
          }
          _objc_release(lVar17);
          lVar26 = lVar26 + 1;
        } while (lVar24 != lVar26);
        lVar24 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_2a0,auStack_260,0x10);
      } while (lVar24 != 0);
    }
    _objc_release(lVar3);
    func_0x00010c2ad980(*(undefined8 *)(lVar10 + 0x20),param_2,puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar16);
  }
  iVar2 = (int)*(undefined8 *)(lVar10 + 8);
  func_0x00010c07e920();
  if (iVar2 == 0) {
    iVar2 = (int)*(undefined8 *)(lVar10 + 8);
    func_0x00010c07ea60();
    if (iVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar10 + 0x20);
      func_0x00010bf21f60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar10 + 0x48);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aed40();
      goto LAB_10842203c;
    }
    iVar2 = (int)*(undefined8 *)(lVar10 + 8);
    func_0x00010c06d080();
    uVar23 = *(ulong *)(lVar10 + 8);
    if (iVar2 == 0) {
      func_0x00010c0811c0();
      if ((uVar23 & 1) != 0) {
LAB_108421e80:
        func_0x00010bedeee0(lVar10,param_2,*(undefined8 *)(lVar10 + 0x20));
        uVar23 = *(ulong *)(lVar10 + 0x20);
        func_0x00010bf21f60(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(ulong *)(lVar10 + 8);
        func_0x00010c26fea0(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar10 + 0x18);
        func_0x00010bf1cf00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(lVar10 + 0x18);
        func_0x00010bfc12c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar20;
        func_0x00010c280640(uVar20);
        uVar25 = uVar20;
        func_0x00010bf6cf60(uVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afd60(uVar6,param_2,uVar23,uVar5,uVar4,uVar25,lVar18);
        goto LAB_108421f18;
      }
      iVar2 = (int)*(undefined8 *)(lVar10 + 8);
      func_0x00010c070a20();
      if (iVar2 != 0) goto LAB_108421e80;
      uVar23 = *(ulong *)(lVar10 + 8);
      func_0x00010c231b40();
      if ((uVar23 & 1) == 0) {
        func_0x00010bedeee0(lVar10,param_2,*(undefined8 *)(lVar10 + 0x20));
        uVar23 = *(ulong *)(lVar10 + 0x20);
        func_0x00010bf21f60(uVar23);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(ulong *)(lVar10 + 0x18);
        func_0x00010bf1cf00(uVar20);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(lVar10 + 0x18);
        func_0x00010bfc12c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afd20(uVar20,param_2,uVar23,uVar6,lVar18);
        goto LAB_108421f28;
      }
    }
    else {
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedeee0(lVar10,param_2,*(undefined8 *)(lVar10 + 0x20));
      uVar20 = *(ulong *)(lVar10 + 0x20);
      func_0x00010bf21f60(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(lVar10 + 0x18);
      func_0x00010bf1cf00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      func_0x00010bfc12c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar23;
      func_0x00010c280640(uVar23);
      uVar25 = uVar23;
      func_0x00010bf6cf60(uVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0afd40(uVar6,param_2,uVar20,uVar5,uVar4,uVar25,lVar18);
LAB_108421f18:
      _objc_release(uVar25);
      _objc_release(uVar5);
LAB_108421f28:
      _objc_release(uVar6);
      _objc_release(uVar20);
      _objc_release(uVar23);
    }
    lVar24 = *(long *)(lVar10 + 8);
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar24;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar24);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar10 + 0x20);
      func_0x00010bf21f60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(lVar10 + 0x50);
      func_0x00010c094e60(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c281140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1799c0();
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar12);
      uVar6 = *(undefined8 *)(lVar10 + 0x50);
      func_0x00010c094e60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(lVar10 + 0x20);
      uVar12 = uVar5;
      func_0x00010c094540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c278120(uVar11,param_2,uVar13,uVar12,0);
      _objc_release(uVar12);
      goto LAB_108422038;
    }
  }
  else {
    func_0x00010bedeee0(lVar10,param_2,*(undefined8 *)(lVar10 + 0x20));
    uVar5 = *(undefined8 *)(lVar10 + 0x20);
    func_0x00010bf21f60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar10 + 0x18);
    func_0x00010bf1cf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    func_0x00010bfc12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afd20(uVar6,param_2,uVar5,uVar11,lVar18);
    _objc_release(uVar11);
    _objc_release(uVar6);
    if ((uVar19 & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar10 + 8);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(lVar10 + 0x58);
      uVar11 = uVar6;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c23f220(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5d40(uVar13,param_2,uVar5,uVar11,uVar12);
      _objc_release(uVar12);
LAB_108422038:
      _objc_release(uVar11);
LAB_10842203c:
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bfd4380();
  _objc_release(uVar6);
  if (((int)uVar19 != 0) && ((int)uVar5 != 0)) {
    lVar17 = *(long *)(lVar10 + 0x20);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar10 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar17;
    func_0x00010c23fd80();
    lVar24 = lVar17;
    func_0x00010c0ce9a0(lVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar24;
    func_0x00010c08fa60();
    lVar26 = lVar17;
    func_0x00010c2b9180(lVar17);
    func_0x00010c0ac780(uVar5,param_2,lVar3,lVar15 != 0,lVar26);
    _objc_release(lVar24);
    _objc_release(uVar5);
    _objc_release(lVar17);
  }
  uVar5 = *(undefined8 *)(lVar10 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afce0();
  _objc_release(uVar5);
  func_0x00010c0acb60(lVar10);
  func_0x00010c133840(lVar10);
  iVar2 = (int)*(undefined8 *)(lVar10 + 8);
  func_0x00010c078120();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar10 + 0x18);
    func_0x00010befe940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0e40();
    _objc_release(uVar5);
  }
  *(undefined1 *)(lVar10 + 0x89) = 1;
LAB_108422168:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    uVar11 = *(undefined8 *)(lVar18 + 0x20);
    func_0x00010bf21f60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar18 + 0x18);
    func_0x00010c068880(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c0c6c20(uVar11);
    uVar6 = uVar11;
    func_0x00010c2b3080(uVar11);
    func_0x00010c133860(uVar12,param_2,uVar5,uVar6);
    _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 108421958; end: 108422217; -[SCSendFlowPreviewLogger logDirectSnapPreviewOnPossibleExitWithIsTriggeredBySend:isSentToSnapMap:isSentToSpotlight:isSentAsCustomStory:isSentAsMyStory:isSentAsPublicStory:privateStoryCount:nonPrivateStoryCount:friendStory:publicStory:destinationInfo:] */

void FUN_108421958(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  long param_13)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
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
  _objc_retain(param_13);
  if ((*(byte *)(param_1 + 0x89) & 1) != 0) goto LAB_108422168;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3300();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08f640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1cf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf311e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242400(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c111920(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf30080(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfc3760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0acc40(uVar3,param_2,uVar4,uVar5,uVar6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c28a560(*(undefined8 *)(param_1 + 0x20),param_2,param_7,param_5,param_4,param_6,
                      param_8,param_9,param_10,param_11);
  func_0x00010c284180(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c284120(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 8));
  lVar8 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf529e0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  if (lVar11 != 0) {
    func_0x00010c2af240(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar11 = *(long *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c0c5c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar11 = lVar9;
    func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar11 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar17 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar9);
          }
          lVar12 = *(long *)(lStack_128 + lVar17 * 8);
          func_0x00010bfea4a0();
          func_0x00010baf7bb0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 != 0) {
            func_0x00010befa120(puVar10,param_2,lVar12);
          }
          _objc_release(lVar12);
          lVar17 = lVar17 + 1;
        } while (lVar11 != lVar17);
        lVar11 = lVar9;
        func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar11 != 0);
    }
    _objc_release(lVar9);
    func_0x00010c2ad980(*(undefined8 *)(param_1 + 0x20),param_2,puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e920();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07ea60();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aed40();
      goto LAB_10842203c;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06d080();
    uVar13 = *(ulong *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x00010c0811c0();
      if ((uVar13 & 1) != 0) {
LAB_108421e80:
        func_0x00010bedeee0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
        uVar13 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf21f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(ulong *)(param_1 + 8);
        func_0x00010c26fea0(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bf1cf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bfc12c0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c280640(uVar14);
        uVar16 = uVar14;
        func_0x00010bf6cf60(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afd60(uVar2,param_2,uVar13,uVar3,uVar15,uVar16,param_13);
        goto LAB_108421f18;
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c070a20();
      if (iVar1 != 0) goto LAB_108421e80;
      uVar13 = *(ulong *)(param_1 + 8);
      func_0x00010c231b40();
      if ((uVar13 & 1) == 0) {
        func_0x00010bedeee0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
        uVar13 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf21f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(ulong *)(param_1 + 0x18);
        func_0x00010bf1cf00(uVar14);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bfc12c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0afd20(uVar14,param_2,uVar13,uVar2,param_13);
        goto LAB_108421f28;
      }
    }
    else {
      func_0x00010bf167e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedeee0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
      uVar14 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf1cf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bfc12c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar13;
      func_0x00010c280640(uVar13);
      uVar16 = uVar13;
      func_0x00010bf6cf60(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0afd40(uVar2,param_2,uVar14,uVar3,uVar15,uVar16,param_13);
LAB_108421f18:
      _objc_release(uVar16);
      _objc_release(uVar3);
LAB_108421f28:
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
    lVar11 = *(long *)(param_1 + 8);
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    if (lVar9 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf21f60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c094e60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c281140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1799c0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c094e60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = uVar4;
      func_0x00010c094540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c278120(uVar2,param_2,uVar6,uVar3,0);
      _objc_release(uVar3);
      goto LAB_108422038;
    }
  }
  else {
    func_0x00010bedeee0(param_1,param_2,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf21f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf1cf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfc12c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afd20(uVar2,param_2,uVar4,uVar3,param_13);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((param_3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = uVar5;
      func_0x00010bf97060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c23f220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a5d40(uVar6,param_2,uVar4,uVar2,uVar3);
      _objc_release(uVar3);
LAB_108422038:
      _objc_release(uVar2);
LAB_10842203c:
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfd4380();
  _objc_release(uVar3);
  if ((param_3 != 0) && ((int)uVar2 != 0)) {
    lVar12 = *(long *)(param_1 + 0x20);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar12;
    func_0x00010c23fd80();
    lVar11 = lVar12;
    func_0x00010c0ce9a0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c08fa60();
    lVar17 = lVar12;
    func_0x00010c2b9180(lVar12);
    func_0x00010c0ac780(uVar2,param_2,lVar9,lVar8 != 0,lVar17);
    _objc_release(lVar11);
    _objc_release(uVar2);
    _objc_release(lVar12);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afce0();
  _objc_release(uVar2);
  func_0x00010c0acb60(param_1);
  func_0x00010c133840(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c078120();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010befe940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0e40();
    _objc_release(uVar2);
  }
  *(undefined1 *)(param_1 + 0x89) = 1;
LAB_108422168:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_13 + 0x20);
  func_0x00010bf21f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_13 + 0x18);
  func_0x00010c068880(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0c6c20(uVar4);
  uVar3 = uVar4;
  func_0x00010c2b3080(uVar4);
  func_0x00010c133860(uVar5,param_2,uVar2,uVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108422218; end: 108422293; -[SCSendFlowPreviewLogger reportPreviewToolReadyLatency] */

void FUN_108422218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c068880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c6c20(uVar1);
  uVar4 = uVar1;
  func_0x00010c2b3080(uVar1);
  func_0x00010c133860(uVar2,param_2,uVar3,uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108422294; end: 108422367; -[SCSendFlowPreviewLogger logPreviewCarouselUpdate] */

void FUN_108422294(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf32920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf311e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c243320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c242400(uVar5);
  uVar6 = uVar1;
  func_0x00010c0c6c20(uVar1);
  uVar7 = uVar1;
  func_0x00010c2b3080(uVar1);
  func_0x00010c0acb80(uVar2,param_2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108422368; end: 10842236f; -[SCSendFlowPreviewLogger logSnapCreateStepPreviewWillExit] */

void FUN_108422368(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0afc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logSnapCreateStepPreviewWillExit_112609920,0)
  ;
  return;
}



/* Entry: 108422370; end: 1084223f7; -[SCSendFlowPreviewLogger logSnapCreateStepPreviewWillExitWithApplicationWillTerminate:] */

void FUN_108422370(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c075080();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c2317e0();
    if (iVar1 != 0) {
      func_0x00010c0afbc0(param_1);
      func_0x00010c0b3040(*(undefined8 *)(param_1 + 0x28));
    }
  }
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
    func_0x00010c06f880();
    if (iVar1 == 0) goto LAB_1084223e4;
  }
  func_0x00010c0afca0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4c398);
LAB_1084223e4:
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 1084223f8; end: 10842243b; -[SCSendFlowPreviewLogger logSnapCreateStepPreviewDidAppear] */

void FUN_1084223f8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logSnapCreateWithStepName__112609938,
               &PTR____CFConstantStringClassReference_110f4c2b8);
    return;
  }
  return;
}



/* Entry: 10842243c; end: 10842247f; -[SCSendFlowPreviewLogger logSnapCreateStepUserStartExitPreview] */

void FUN_10842243c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logSnapCreateWithStepName__112609938,
               &PTR____CFConstantStringClassReference_110f4c358);
    return;
  }
  return;
}



/* Entry: 108422480; end: 1084224c3; -[SCSendFlowPreviewLogger logSnapCreateStepUserExitPreview] */

void FUN_108422480(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logSnapCreateWithStepName__112609938,
               &PTR____CFConstantStringClassReference_110f4c378);
    return;
  }
  return;
}



/* Entry: 1084224c4; end: 108422507; -[SCSendFlowPreviewLogger logSnapCreateStepEnterSendTo] */

void FUN_1084224c4(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logSnapCreateWithStepName__112609938,
               &PTR____CFConstantStringClassReference_110f4c338);
    return;
  }
  return;
}



/* Entry: 108422508; end: 10842254b; -[SCSendFlowPreviewLogger logSnapCreateStepFirstFrameRendered] */

void FUN_108422508(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c07e620();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logSnapCreateWithStepName__112609938,
               &PTR____CFConstantStringClassReference_110f4c2f8);
    return;
  }
  return;
}



/* Entry: 10842254c; end: 1084226db; -[SCSendFlowPreviewLogger logSnapCreateWithStepName:] */

void FUN_10842254c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0811c0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c070a20();
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf311e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c06d080(uVar5);
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c075080();
      if ((uVar2 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c1001c0(uVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar7 = 0;
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf2b540();
      func_0x00010c0a2440(uVar4,param_2,uVar3,param_3,0,0,uVar5,uVar7,uVar6,0);
      if ((uVar2 & 1) == 0) {
        _objc_release(uVar7);
      }
      _objc_release(uVar3);
      goto LAB_1084226b8;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c26fea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1084226dc;
  puStack_68 = &UNK_1108e91e0;
  lStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bf97e80(uVar4,param_2,&puStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = uStack_58;
LAB_1084226b8:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084226dc; end: 1084227af;  */

void FUN_1084226dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf311e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c1001c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b540();
  func_0x00010c0a2440(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1084227b0; end: 1084228c3; -[SCSendFlowPreviewLogger getSnapCommonLoggingParams] */

void FUN_1084227b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0792e0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07e920();
    if (iVar1 == 0) goto LAB_1084228ac;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08f640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2876e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c2aeba0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2440e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e5c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c2b1820(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1084228ac:
                    /* WARNING: Could not recover jumptable at 0x00010bf21f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_build_1125a6180);
  return;
}



/* Entry: 1084228c4; end: 108422a8f; -[SCSendFlowPreviewLogger _updateScreenOverlayDataSizeForMultipleVideos:] */

void FUN_1084228c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000107c318f8();
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  lVar4 = lVar2;
  func_0x00010c0d2360();
  if (0 < lVar4) {
    lVar5 = lVar1;
    func_0x00010c243b40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lVar8 * 8);
        func_0x00010c0efb00(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_release(uVar6);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
  }
  func_0x00010c2b7b00(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x78,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 108422a90; end: 108422b67; -[SCSendFlowPreviewLogger .cxx_destruct] */

void FUN_108422a90(long param_1)

{
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



/* Entry: 108422b68; end: 108422bdb; -[SCPreviewFeatureCommerceAttachmentServices initWithCommerceAttachment:] */

undefined1 * FUN_108422b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc760;
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



/* Entry: 108422bdc; end: 108422be3; -[SCPreviewFeatureCommerceAttachmentServices commerceAttachment] */

undefined8 FUN_108422bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108422be4; end: 108422c13; -[SCPreviewFeatureCommerceAttachmentServices setCommerceAttachment:] */

void FUN_108422be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108422c14; end: 108422c1f; -[SCPreviewFeatureCommerceAttachmentServices .cxx_destruct] */

void FUN_108422c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108422c20; end: 108422ce3; -[SCCommerceStoreCategoryMetricsModel initWithCategoryId:categoryTitle:categoryIndex:totalCategories:] */

undefined1 *
FUN_108422c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fc768;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108422ce4; end: 108422ceb; -[SCCommerceStoreCategoryMetricsModel categoryId] */

undefined8 FUN_108422ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108422cec; end: 108422cf3; -[SCCommerceStoreCategoryMetricsModel categoryTitle] */

undefined8 FUN_108422cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108422cf4; end: 108422cfb; -[SCCommerceStoreCategoryMetricsModel categoryIndex] */

undefined8 FUN_108422cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108422cfc; end: 108422d03; -[SCCommerceStoreCategoryMetricsModel totalCategories] */

undefined8 FUN_108422cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108422d04; end: 108422d0b; -[SCCommerceStoreCategoryMetricsModel maxRowScrolled] */

undefined8 FUN_108422d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108422d0c; end: 108422d13; -[SCCommerceStoreCategoryMetricsModel setMaxRowScrolled:] */

void FUN_108422d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108422d14; end: 108422d1b; -[SCCommerceStoreCategoryMetricsModel totalRows] */

undefined8 FUN_108422d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108422d1c; end: 108422d23; -[SCCommerceStoreCategoryMetricsModel setTotalRows:] */

void FUN_108422d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108422d24; end: 108422d53; -[SCCommerceStoreCategoryMetricsModel .cxx_destruct] */

void FUN_108422d24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108422d54; end: 108422e4f; -[SCCommerceContextMetricsModel initWithContextSessionId:contextSnapId:contextSnapType:contextMediaType:] */

undefined1 *
FUN_108422d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc770;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108422e50; end: 108422e73; -[SCCommerceContextMetricsModel copyWithZone:] */

undefined8 FUN_108422e50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108422e74; end: 108422e7b; -[SCCommerceContextMetricsModel contextSessionId] */

undefined8 FUN_108422e74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108422e7c; end: 108422e83; -[SCCommerceContextMetricsModel contextSnapId] */

undefined8 FUN_108422e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108422e84; end: 108422e8b; -[SCCommerceContextMetricsModel contextSnapType] */

undefined8 FUN_108422e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108422e8c; end: 108422e93; -[SCCommerceContextMetricsModel contextMediaType] */

undefined8 FUN_108422e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108422e94; end: 108422edb; -[SCCommerceContextMetricsModel .cxx_destruct] */

void FUN_108422e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108422edc; end: 108422f7f; -[SCCommerceSnapToProductMetricsModel initWithScannableId:scannableData:] */

undefined1 *
FUN_108422edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc778;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108422f80; end: 108422fa3; -[SCCommerceSnapToProductMetricsModel copyWithZone:] */

undefined8 FUN_108422f80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108422fa4; end: 108422fab; -[SCCommerceSnapToProductMetricsModel scannableId] */

undefined8 FUN_108422fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108422fac; end: 108422fb3; -[SCCommerceSnapToProductMetricsModel scannableData] */

undefined8 FUN_108422fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108422fb4; end: 108422fe3; -[SCCommerceSnapToProductMetricsModel .cxx_destruct] */

void FUN_108422fb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108422fe4; end: 1084230e7; -[SCCommerceAdMetricsModel initWithAdId:serveItemId:pixelId:adToken:adProductSourceType:] */

undefined1 *
FUN_108422fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fc780;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1084230e8; end: 10842310b; -[SCCommerceAdMetricsModel copyWithZone:] */

undefined8 FUN_1084230e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10842310c; end: 108423113; -[SCCommerceAdMetricsModel adId] */

undefined8 FUN_10842310c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108423114; end: 10842311b; -[SCCommerceAdMetricsModel serveItemId] */

undefined8 FUN_108423114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10842311c; end: 108423123; -[SCCommerceAdMetricsModel pixelId] */

undefined8 FUN_10842311c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108423124; end: 10842312b; -[SCCommerceAdMetricsModel adToken] */

undefined8 FUN_108423124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10842312c; end: 108423133; -[SCCommerceAdMetricsModel adProductSourceType] */

undefined8 FUN_10842312c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108423134; end: 10842317b; -[SCCommerceAdMetricsModel .cxx_destruct] */

void FUN_108423134(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10842317c; end: 1084232a3; -[SCCommerceProductImpressionDataModel initWithProductId:timeViewed:itemIndex:sourcePage:categoryId:trackingId:sectionPos:sectionName:] */

undefined1 *
FUN_10842317c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fc788;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1084232a4; end: 1084232c7; -[SCCommerceProductImpressionDataModel copyWithZone:] */

undefined8 FUN_1084232a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1084232c8; end: 10842338f; -[SCCommerceProductImpressionDataModel hash] */

undefined8 * FUN_1084232c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1084234a4:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1084234b0;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[7] == param_3[7])))) {
      dVar9 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar8 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if ((((bVar1) &&
           ((lVar5 = puVar3[1], lVar5 == param_3[1] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
          && ((lVar5 = puVar3[5], lVar5 == param_3[5] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
         && ((lVar5 = puVar3[6], lVar5 == param_3[6] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
      {
        puVar7 = (undefined8 *)puVar3[8];
        if (puVar7 != (undefined8 *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_1084234b0;
        }
        goto LAB_1084234a4;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_1084234b0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 108423390; end: 1084234cb; -[SCCommerceProductImpressionDataModel isEqual:] */

long FUN_108423390(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1084234a4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1084234b0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_1084234b0;
        }
        goto LAB_1084234a4;
      }
    }
    lVar4 = 0;
  }
LAB_1084234b0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1084234cc; end: 1084234d3; -[SCCommerceProductImpressionDataModel productId] */

undefined8 FUN_1084234cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084234d4; end: 1084234db; -[SCCommerceProductImpressionDataModel timeViewed] */

undefined8 FUN_1084234d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1084234dc; end: 1084234e3; -[SCCommerceProductImpressionDataModel itemIndex] */

undefined8 FUN_1084234dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1084234e4; end: 1084234eb; -[SCCommerceProductImpressionDataModel sourcePage] */

undefined8 FUN_1084234e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1084234ec; end: 1084234f3; -[SCCommerceProductImpressionDataModel categoryId] */

undefined8 FUN_1084234ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1084234f4; end: 1084234fb; -[SCCommerceProductImpressionDataModel trackingId] */

undefined8 FUN_1084234f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1084234fc; end: 108423503; -[SCCommerceProductImpressionDataModel sectionPos] */

undefined8 FUN_1084234fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108423504; end: 10842350b; -[SCCommerceProductImpressionDataModel sectionName] */

undefined8 FUN_108423504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10842350c; end: 108423553; -[SCCommerceProductImpressionDataModel .cxx_destruct] */

void FUN_10842350c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108423554; end: 1084235c7; -[SCPreviewFeatureLoggingServices initWithLogging:] */

undefined1 * FUN_108423554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc790;
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



/* Entry: 1084235c8; end: 1084235cf; -[SCPreviewFeatureLoggingServices logging] */

undefined8 FUN_1084235c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084235d0; end: 1084235db; -[SCPreviewFeatureLoggingServices .cxx_destruct] */

void FUN_1084235d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084235dc; end: 10842364f; -[SCPreviewFeatureSendingServices initWithSending:] */

undefined1 * FUN_1084235dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc798;
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



/* Entry: 108423650; end: 108423657; -[SCPreviewFeatureSendingServices sending] */

undefined8 FUN_108423650(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108423658; end: 108423663; -[SCPreviewFeatureSendingServices .cxx_destruct] */

void FUN_108423658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108423664; end: 1084236d7; -[SCScreenshotLoggingServices initWithScreenshotLogger:] */

undefined1 * FUN_108423664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc7a0;
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



/* Entry: 1084236d8; end: 1084236df; -[SCScreenshotLoggingServices screenshotLogger] */

undefined8 FUN_1084236d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084236e0; end: 10842379f; -[SCScreenshotLoggingServices .cxx_destruct] */

void FUN_1084236e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084237a0; end: 1084237c7;  */

long FUN_1084237a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7b98,3,0);
  return (long)(int)param_1;
}



/* Entry: 1084237c8; end: 10842392f;  */

long FUN_1084237c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7b38,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067ec0();
    lVar2 = (long)(int)lVar2;
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 108423930; end: 108423943;  */

void FUN_108423930(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ed7bb8,0,0);
  return;
}



/* Entry: 108423944; end: 108423973;  */

long FUN_108423944(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110ed7bd8,0,0);
  uVar1 = (uint)param_1;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  return (long)(int)uVar1;
}



/* Entry: 108423974; end: 108423a5f;  */

uint FUN_108423974(ulong param_1,long param_2,uint param_3,long param_4,uint param_5,uint param_6,
                  int param_7)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  if (((param_6 & 1) == 0) && (param_7 != 0)) {
    uVar1 = param_1;
    func_0x00010c07ba00();
    param_6 = (uint)uVar1 ^ 1;
    if (param_2 != 0) {
      param_6 = 1;
    }
  }
  uVar1 = param_1;
  func_0x00010c07ea60();
  if ((uVar1 & 1) == 0) {
    param_3 = param_3 & param_6;
    uVar1 = param_1;
    func_0x00010c07e960();
    if ((uVar1 & 1) != 0) goto LAB_108423a34;
    uVar1 = param_1;
    func_0x00010c07e920();
    if ((int)uVar1 == 0) {
      if (((param_3 & 1) == 0) && (uVar1 = param_1, func_0x00010c07ba00(), (uVar1 & 1) != 0)) {
        param_3 = 0;
      }
      else {
        param_3 = param_5 ^ 1;
      }
      goto LAB_108423a34;
    }
    if ((param_3 & 1) == 0) {
      lVar2 = param_4;
      func_0x00010c08fa60(param_4);
      param_3 = (uint)(lVar2 == 0);
      goto LAB_108423a34;
    }
  }
  param_3 = 1;
LAB_108423a34:
  _objc_release(param_4);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 108423a60; end: 108423b63;  */

uint FUN_108423a60(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb4f20();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c243400();
    uVar2 = 1;
    if (uVar1 < 0x28) {
      if ((1L << (uVar1 & 0x3f) & 0x800640U) == 0) {
        if ((1L << (uVar1 & 0x3f) & 0x8000000080U) == 0) {
          if (uVar1 == 5) {
            uVar1 = param_1;
            func_0x00010c242400(param_1);
            uVar2 = (uint)(uVar1 == 0x3a);
          }
        }
        else {
          uVar1 = param_1;
          func_0x00010c0792e0(param_1);
          uVar2 = (uint)uVar1 ^ 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108423b64; end: 108423cf3;  */

ulong FUN_108423b64(ulong param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  uVar4 = param_1;
  func_0x00010c07b5a0();
  if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c0775a0(), (uVar4 & 1) == 0)) {
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 1;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108423cf4;
    puStack_70 = &UNK_11084eb40;
    ppuVar1 = &puStack_88;
    puStack_58 = puStack_68;
    _objc_retainBlock(ppuVar1);
    uVar4 = param_1;
    func_0x00010c131bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcaa0();
    _objc_release(uVar4);
    if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf680c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar3 = param_1;
        func_0x00010bf680c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07a840();
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
    }
    _objc_release(ppuVar1);
    __Block_object_dispose(&uStack_60,8);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108423cf4; end: 108423d5f;  */

void FUN_108423cf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c1298a0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 == 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108423d60; end: 108423efb; -[SCSendToActionAlertHelper showSendWillAddFriendAlertIfNeededWithFeatureSettingsService:] */

undefined *
FUN_108423d60(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **unaff_x22;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c157d80();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126af180;
  if (((ulong)puVar2 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = &PTR____CFConstantStringClassReference_110ed7bf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ed7bf8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_4 = unaff_x22;
    func_0x00010c235c40(puVar1);
    _objc_release(puVar2);
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    puVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x1;
    func_0x00010c1fa580();
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar1 = puVar4;
  }
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_90;
  pcStack_58 = FUN_108423efc;
  ppuStack_80 = unaff_x22;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  puStack_88 = PTR_PTR_1126fc7a8;
  puStack_90 = puVar4;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar3 + 0x28);
    *(undefined **)((long)ppuVar3 + 0x28) = puVar6;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined ***)((long)ppuVar3 + 0x10) = param_4;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined *)ppuVar3;
}



/* Entry: 108423efc; end: 108423f9f; -[SCSendToConfiguration initWithUserSession:snapchattersSynchronousDataFetcher:] */

undefined1 *
FUN_108423efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc7a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108423fa0; end: 108424133; -[SCSendToConfiguration recipientsConfiguration] */

void FUN_108423fa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar5 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar5);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (puVar5 == (undefined *)0x0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
    if ((uVar4 < 0x28) && ((1L << (uVar4 & 0x3f) & 0x800640U) == 0)) {
      if ((1L << (uVar4 & 0x3f) & 0x8000000080U) == 0) {
        if (uVar4 == 5) {
          func_0x00010c06dce0(param_1);
        }
      }
      else {
        func_0x00010c0792c0(param_1);
        func_0x00010c249880(param_1);
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf005c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126d6450;
    _objc_alloc();
    func_0x00010c016620();
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    _objc_retain(puVar5);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar5;
    _objc_release(uVar3);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108424134; end: 10842418b;  */

void FUN_108424134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c06d560();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10842418c; end: 1084241db; -[SCSendToConfiguration setRecipientsConfiguration:] */

void FUN_10842418c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


