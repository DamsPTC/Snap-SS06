/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d84a24; end: 107d84b27; +[SCCTXContextClientInfo enc_clientInfoWithEncryptedData:key:] */

void FUN_107d84a24(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 0x10) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c25eac0(param_3,param_2,0,0x10);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    uVar3 = param_3;
    func_0x00010c25eac0(param_3,param_2,0x10,uVar2 - 0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5c10;
    _objc_alloc(PTR_PTR_1126b5c10);
    uVar2 = uVar3;
    func_0x00010c156c60(uVar3,param_2,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar4,param_2,uVar2,0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d84b28; end: 107d84be3; -[SCCTXContextClientInfo enc_encryptedWithKey:] */

void FUN_107d84b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  func_0x00010c156da0(puVar1,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c156ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf06ae0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d84be4; end: 107d84d5b; -[SCCTXContextClientInfo hasQuestionContent] */

ulong FUN_107d84be4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfdace0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c091b80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2698a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        uVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(uVar1);
          }
          lVar7 = *(long *)(uVar6 * 8);
          lVar3 = lVar7;
          func_0x00010c0cc5c0();
          if ((int)lVar3 == 2) {
            func_0x00010c11dc80(lVar7);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar7;
            func_0x00010c11ddc0();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar4;
            func_0x00010c08fa60();
            uVar6 = (ulong)(lVar3 != 0);
            _objc_release(lVar4);
            _objc_release(lVar7);
            goto LAB_107d84d1c;
          }
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
        uVar2 = uVar1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
      uVar6 = 0;
    }
LAB_107d84d1c:
    _objc_release(uVar1);
  }
  else {
    uVar6 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf43590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return uVar1;
  }
  return uVar6;
}



/* Entry: 107d84d5c; end: 107d84d63; -[SCContextContextHint compat_getClientInfo] */

void FUN_107d84d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_compat_getClientInfoWithKey__1125ae708,0);
  return;
}



/* Entry: 107d84d64; end: 107d84fc7; -[SCContextContextHint compat_getClientInfoWithKey:] */

void FUN_107d84d64(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *unaff_x21;
  
  _objc_retain(param_3);
  puVar3 = param_1;
  func_0x00010bf3d0e0();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  iVar2 = (int)puVar3;
  if (iVar2 == 0xd) {
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    uVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    uVar1 = param_3;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar6 = uVar1;
    func_0x00010c08fa60();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar6 == 0) {
      _objc_retain(param_3);
      _objc_opt_class(puVar5);
      uVar7 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      uVar6 = param_3;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(param_3);
      uVar7 = uVar6;
      func_0x00010c08fa60();
      _objc_release(uVar6);
      _objc_release(uVar1);
      if (uVar7 == 0) {
        unaff_x21 = (undefined *)0x0;
        goto LAB_107d84fa0;
      }
    }
    else {
      _objc_release(uVar1);
    }
    unaff_x21 = PTR_PTR_1126b5c10;
    func_0x00010bf93a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf92cc0(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar2 == 0xc) {
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    func_0x00010bf51e00();
  }
  else {
    if (iVar2 != 0) goto LAB_107d84fa0;
    puVar5 = param_1;
    func_0x00010bf4e420();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
    puVar5 = unaff_x21;
    func_0x00010c0ca7e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010bf4cba0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c268380();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      func_0x00010c1c6a80(unaff_x21);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
    puVar5 = unaff_x21;
    func_0x00010c0ca780();
    if (puVar5 != (undefined *)0x0) goto LAB_107d84fa0;
    func_0x00010bf4cba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c268420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x000100504554();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    func_0x00010c1c6a60(unaff_x21);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  _objc_release(param_1);
LAB_107d84fa0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 107d84fc8; end: 107d8502b;  */

void FUN_107d84fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d8502c; end: 107d85273; -[SCContextContextHint compat_encryptContextClientInfoWithKey:] */

void FUN_107d8502c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c1821e0(param_1,param_2,0);
  func_0x00010c182ee0(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcec40();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcec20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    lVar4 = param_1;
    func_0x00010bf4e420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4820();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbdfe0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbdfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    lVar4 = param_1;
    func_0x00010bf4e420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1ee0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242d00();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c242ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    lVar4 = param_1;
    func_0x00010bf4e420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205340();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf92ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1959e0(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107d85274; end: 107d85317; +[SCContextContextHint hintFromEncodedString:] */

void FUN_107d85274(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126b2378;
  if (lVar1 == 0) {
    _objc_alloc_init(PTR_PTR_1126b2378);
    func_0x00010c1a8a00();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x00010bff6b20();
    func_0x00010c0f40e0(puVar3,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d85318; end: 107d853ab; -[SCContextContextHint hasPostCaptureLyricsSticker] */

uint FUN_107d85318(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ebd278);
    uVar3 = (uint)lVar1 ^ 1;
  }
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 107d853ac; end: 107d854b3; -[SCContextContextHint containsMusicTrackId:] */

undefined * FUN_107d853ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd95a0();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar3 != 0) {
      func_0x00010c27f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c277e80();
      func_0x00010c0df880(puVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_release(param_1);
      puVar5 = puVar4;
      func_0x00010c0720c0(puVar4,param_2,param_3);
      _objc_release(puVar4);
      goto LAB_107d85494;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107d85494:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107d854b4; end: 107d85597; -[SCMemoriesActivityFactoryServiceProvider provide] */

void FUN_107d854b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d7bc8;
  _objc_alloc(PTR_PTR_1126d7bc8);
  func_0x00010c02a2e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d85598; end: 107d855af;  */

void FUN_107d85598(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d855b0; end: 107d8569f; -[SCMemoriesActivityFactoryServiceProvider makeMemoriesActivityServices] */

void FUN_107d855b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d7bd0;
  _objc_alloc(PTR_PTR_1126d7bd0);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ec0(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d856a0; end: 107d856df;  */

void FUN_107d856a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc53a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d856e0; end: 107d859b7; -[SCMemoriesActivityFactoryServiceProvider _activityController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d856e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
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
  undefined8 uStack_a0;
  
  lVar10 = param_1 + _DAT_11276ec08;
  _objc_loadWeakRetained();
  lVar1 = lVar10;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar3 = PTR_PTR_1126d7bd8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11276ec14;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11276ec18;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11276ec1c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_a0 = 0;
    lVar13 = 0;
  }
  else {
    uStack_a0 = param_1 + _DAT_11276ec20;
    _objc_loadWeakRetained();
    lVar13 = param_1 + _DAT_11276ec24;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar13;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11276ec28;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar14;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11276ec2c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11276ec10;
    _objc_loadWeakRetained();
  }
  lVar9 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f420(puVar3,param_2,lVar1,lVar4,lVar5,uStack_a0,lVar6,lVar7,lVar8,lVar9,lVar2);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(uStack_a0);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d859b8; end: 107d859e7;  */

void FUN_107d859b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 107d859e8; end: 107d85a7f; -[SCMemoriesActivityFactoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d859e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ec08);
  _objc_destroyWeak(param_1 + _DAT_11276ec2c);
  _objc_destroyWeak(param_1 + _DAT_11276ec28);
  _objc_destroyWeak(param_1 + _DAT_11276ec24);
  _objc_destroyWeak(param_1 + _DAT_11276ec20);
  _objc_destroyWeak(param_1 + _DAT_11276ec1c);
  _objc_destroyWeak(param_1 + _DAT_11276ec18);
  _objc_destroyWeak(param_1 + _DAT_11276ec14);
  _objc_destroyWeak(param_1 + _DAT_11276ec10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276ec0c);
  return;
}



/* Entry: 107d85a80; end: 107d85b6f; -[SCMemoriesActivityItemProvidingServiceProvider provide] */

void FUN_107d85a80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126d7be0;
  _objc_alloc(PTR_PTR_1126d7be0);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a300(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d85b70; end: 107d85baf;  */

void FUN_107d85b70(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d85bb0; end: 107d8615f; -[SCMemoriesActivityItemProvidingServiceProvider _buildMemoriesActivityItemProviderBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d85bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uStack_130;
  undefined8 uStack_118;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  
  puVar1 = PTR_PTR_1126d7be8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11276ec30;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_11276ec38;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar19;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11276ec3c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar20;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11276ec40;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar21;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_90 = 0;
    lVar22 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_11276ec44;
    _objc_loadWeakRetained();
    lVar22 = param_1 + _DAT_11276ec48;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar22;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_11276ec4c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar23;
  func_0x00010c1104a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    uStack_118 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    lVar24 = 0;
  }
  else {
    uStack_b8 = *(undefined8 *)(param_1 + _DAT_11276ec88);
    _objc_retain();
    uStack_a0 = param_1 + _DAT_11276ec84;
    _objc_loadWeakRetained();
    uStack_118 = *(undefined8 *)(param_1 + _DAT_11276ec8c);
    _objc_retain();
    lVar24 = param_1 + _DAT_11276ec50;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar24;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11276ec54;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar25;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_130 = 0;
    lVar26 = 0;
  }
  else {
    uStack_130 = param_1 + _DAT_11276ec64;
    _objc_loadWeakRetained();
    lVar26 = param_1 + _DAT_11276ec58;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11276ec5c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar27;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11276ec60;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar28;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar29 = 0;
  }
  else {
    lVar29 = param_1 + _DAT_11276ec68;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar29;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar30 = 0;
  }
  else {
    lVar30 = param_1 + _DAT_11276ec6c;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar30;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = param_1 + _DAT_11276ec70;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar31;
  func_0x00010c0c9f60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = param_1 + _DAT_11276ec74;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar32;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11276ec80;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar33;
  func_0x00010c13ff40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar34 = 0;
    param_1 = 0;
  }
  else {
    lVar34 = param_1 + _DAT_11276ec78;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_11276ec7c;
    _objc_loadWeakRetained();
  }
  func_0x00010c05d600(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,uStack_90,lVar6,lVar7,uStack_b8,
                      uStack_a0,uStack_118,lVar8,lVar9,uStack_130,lVar10,lVar11,lVar12,lVar13,lVar14
                      ,lVar15,lVar16,lVar17,lVar34,param_1);
  _objc_release(uStack_118);
  _objc_release(param_1);
  _objc_release(lVar34);
  _objc_release(lVar17);
  _objc_release(lVar33);
  _objc_release(lVar16);
  _objc_release(lVar32);
  _objc_release(lVar15);
  _objc_release(lVar31);
  _objc_release(lVar14);
  _objc_release(lVar30);
  _objc_release(lVar13);
  _objc_release(lVar29);
  _objc_release(lVar12);
  _objc_release(lVar28);
  _objc_release(lVar11);
  _objc_release(lVar27);
  _objc_release(lVar10);
  _objc_release(lVar26);
  _objc_release(uStack_130);
  _objc_release(lVar9);
  _objc_release(lVar25);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(uStack_b8);
  _objc_release(uStack_a0);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(lVar6);
  _objc_release(lVar22);
  _objc_release(uStack_90);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar2);
  _objc_release(lVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d86160; end: 107d862a7; -[SCMemoriesActivityItemProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d86160(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ec8c,0);
  _objc_storeStrong(param_1 + _DAT_11276ec88,0);
  _objc_destroyWeak(param_1 + _DAT_11276ec84);
  _objc_destroyWeak(param_1 + _DAT_11276ec80);
  _objc_destroyWeak(param_1 + _DAT_11276ec7c);
  _objc_destroyWeak(param_1 + _DAT_11276ec78);
  _objc_destroyWeak(param_1 + _DAT_11276ec74);
  _objc_destroyWeak(param_1 + _DAT_11276ec70);
  _objc_destroyWeak(param_1 + _DAT_11276ec6c);
  _objc_destroyWeak(param_1 + _DAT_11276ec68);
  _objc_destroyWeak(param_1 + _DAT_11276ec64);
  _objc_destroyWeak(param_1 + _DAT_11276ec60);
  _objc_destroyWeak(param_1 + _DAT_11276ec5c);
  _objc_destroyWeak(param_1 + _DAT_11276ec58);
  _objc_destroyWeak(param_1 + _DAT_11276ec54);
  _objc_destroyWeak(param_1 + _DAT_11276ec50);
  _objc_destroyWeak(param_1 + _DAT_11276ec4c);
  _objc_destroyWeak(param_1 + _DAT_11276ec48);
  _objc_destroyWeak(param_1 + _DAT_11276ec44);
  _objc_destroyWeak(param_1 + _DAT_11276ec40);
  _objc_destroyWeak(param_1 + _DAT_11276ec3c);
  _objc_destroyWeak(param_1 + _DAT_11276ec38);
  _objc_destroyWeak(param_1 + _DAT_11276ec34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276ec30);
  return;
}



/* Entry: 107d862a8; end: 107d86363; -[SCMemoriesScopedMemoriesActivityServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d862a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d7bf0;
  _objc_alloc(PTR_PTR_1126d7bf0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11276ec94;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c7cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b73e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a320(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d86364; end: 107d8639b; -[SCMemoriesScopedMemoriesActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d86364(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ec94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276ec90);
  return;
}



/* Entry: 107d8639c; end: 107d86457; -[SCUserNavigationScopedMemoriesActivityServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d8639c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d7bf8;
  _objc_alloc(PTR_PTR_1126d7bf8);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11276ec9c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0c7cc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b73e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a320(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d86458; end: 107d8648f; -[SCUserNavigationScopedMemoriesActivityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d86458(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ec9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276ec98);
  return;
}



/* Entry: 107d86490; end: 107d8694b; +[SCActivityItemGeneratorFactory createCompositeGeneratorForSnaps:userSession:exportFormat:compositionMode:uploadToYouTube:spectaclesAuxiliaryContentServices:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:previewAssetVideoProviderFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:backgroundTaskWrapper:reverseAudioCache:creativeToolsMemoriesResources:] */

void FUN_107d86490(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,long param_26,undefined8 param_27)

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
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  uStack_98 = param_9;
  uStack_150 = param_10;
  uStack_160 = param_11;
  uStack_c0 = param_12;
  uStack_d0 = param_13;
  uStack_f0 = param_14;
  uStack_f8 = param_15;
  uStack_90 = param_16;
  uStack_a0 = param_17;
  uStack_c8 = param_18;
  uStack_e8 = param_19;
  uStack_140 = param_20;
  uStack_e0 = param_21;
  uStack_128 = param_22;
  uStack_120 = param_23;
  uStack_d8 = param_24;
  uStack_130 = param_25;
  lStack_110 = param_26;
  uStack_138 = param_27;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f6e2d8;
  puStack_148 = param_3;
  puStack_118 = (undefined *)param_6;
  uStack_104 = param_7;
  lStack_100 = param_1;
  puStack_b8 = param_8;
  uStack_a8 = param_5;
  lStack_88 = param_4;
  _objc_retain();
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  uVar3 = uStack_a0;
  _objc_retain(uStack_a0);
  _objc_retain(param_16);
  uVar15 = uStack_f8;
  _objc_retain(uStack_f8);
  _objc_retain(uStack_f0);
  _objc_retain(uStack_d0);
  _objc_retain(uStack_c0);
  uVar11 = uStack_160;
  _objc_retain(uStack_160);
  uVar1 = uStack_150;
  _objc_retain(uStack_150);
  _objc_retain(uStack_98);
  _objc_retain(puStack_b8);
  _objc_retain(lStack_88);
  puVar20 = puStack_148;
  _objc_retain(puStack_148);
  puVar16 = puStack_b0;
  func_0x00010c246960(puStack_b0,param_2,ppuStack_158,1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  puStack_80 = puVar16;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110f6f478,1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,2);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar20;
  func_0x00010c246cc0(puVar20,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar28;
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126d7c00;
  _objc_alloc();
  lVar23 = lStack_88;
  puVar20 = puStack_b8;
  uVar27 = uStack_c0;
  uVar24 = uStack_d8;
  uVar2 = uStack_f0;
  uVar14 = uStack_130;
  uVar13 = uStack_138;
  uVar12 = uStack_140;
  uStack_178 = uStack_138;
  uStack_170 = uVar3;
  uStack_180 = uStack_d8;
  uStack_190 = uStack_140;
  uStack_188 = uStack_e0;
  lStack_198 = uStack_e8;
  uStack_1a0 = uStack_c8;
  uStack_1b0 = uVar15;
  uStack_1a8 = uStack_90;
  uStack_1c0 = uStack_130;
  uStack_1b8 = uStack_f0;
  uStack_1d0 = uVar11;
  uStack_1c8 = uStack_c0;
  uStack_1d8 = uVar1;
  uStack_1e0 = uStack_98;
  func_0x00010c017260();
  puStack_118 = puVar16;
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uStack_f8);
  _objc_release(uVar2);
  _objc_release(uVar27);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uStack_98);
  uVar2 = uStack_c8;
  uVar15 = uStack_d0;
  uVar14 = uStack_e0;
  uVar13 = uStack_e8;
  lVar21 = lStack_110;
  uVar1 = uStack_120;
  uVar11 = uStack_128;
  uStack_1a0 = uVar24;
  lStack_198 = lStack_110;
  uStack_1b0 = uStack_128;
  uStack_1a8 = uStack_120;
  uStack_1c0 = uVar12;
  uStack_1b8 = uStack_e0;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_c8;
  uStack_1d8 = uStack_a0;
  uStack_1e0 = uStack_90;
  lVar19 = lStack_100;
  puVar16 = puStack_b0;
  uVar24 = uStack_a8;
  puVar17 = puVar20;
  uVar27 = uStack_d0;
  uVar26 = uStack_104;
  func_0x00010bf56460();
  uVar25 = (undefined1)uVar26;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(uStack_d8);
  _objc_release(uVar1);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_90);
  _objc_release(uVar15);
  _objc_release(puVar20);
  _objc_release(lStack_88);
  if (lVar19 == 0) {
    puVar28 = (undefined *)0x0;
    puVar18 = puStack_118;
  }
  else {
    puVar20 = PTR_PTR_1126d7c08;
    _objc_alloc();
    puVar18 = puStack_118;
    uVar24 = 1;
    func_0x00010c017780();
    puVar28 = PTR_PTR_1126d7c10;
    _objc_alloc();
    lVar21 = lStack_100;
    func_0x00010be1c580();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar20;
    lVar23 = lVar21;
    func_0x00010c017760();
    _objc_release(lVar21);
    _objc_release(puVar20);
  }
  _objc_release(lVar19);
  _objc_release(puVar18);
  puVar22 = puStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = lStack_198;
    uVar9 = uStack_1a0;
    uVar8 = uStack_1a8;
    uVar7 = uStack_1b0;
    uVar6 = uStack_1b8;
    uVar5 = uStack_1c0;
    uVar4 = uStack_1c8;
    uVar3 = uStack_1d0;
    uVar2 = uStack_1d8;
    uVar1 = uStack_1e0;
    uStack_240 = uVar11;
    uStack_238 = uVar12;
    uStack_230 = uVar14;
    uStack_228 = uVar13;
    uStack_220 = uVar15;
    pcStack_1e8 = FUN_107d8694c;
    lStack_218 = lVar19;
    lStack_210 = lVar21;
    puStack_208 = puVar20;
    puStack_200 = puVar18;
    puStack_1f8 = puVar28;
    puStack_1f0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar16);
    _objc_retain(lVar23);
    _objc_retain(puVar17);
    _objc_retain(uVar27);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    _objc_retain(lVar10);
    puVar20 = puVar16;
    func_0x00010bf529e0();
    if ((puVar20 == (undefined *)0x0) ||
       (puVar20 = puVar22, func_0x00010bdcf2c0(puVar22,param_2,puVar16), (int)puVar20 == 0)) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2e0 = 0xc2000000;
      uStack_2d8 = 0x107d86c58;
      puStack_2d0 = &UNK_110a0be88;
      _objc_retain(uVar5);
      uStack_2c8 = uVar5;
      _objc_retain(uVar4);
      uStack_2c0 = uVar4;
      _objc_retain(uVar6);
      uStack_2b8 = uVar6;
      _objc_retain(uVar9);
      uStack_2b0 = uVar9;
      _objc_retain(uVar2);
      uStack_2a8 = uVar2;
      _objc_retain(uVar3);
      uStack_2a0 = uVar3;
      _objc_retain(uVar7);
      uStack_298 = uVar7;
      _objc_retain(lVar23);
      lStack_290 = lVar23;
      uStack_260 = uVar24;
      uStack_250 = uVar25;
      _objc_retain(puVar17);
      puStack_288 = puVar17;
      _objc_retain(uVar1);
      uStack_280 = uVar1;
      _objc_retain(uVar8);
      uStack_278 = uVar8;
      _objc_retain(lVar10);
      lStack_270 = lVar10;
      puStack_258 = puVar22;
      _objc_retain(uVar27);
      puVar28 = puVar16;
      uStack_268 = uVar27;
      func_0x00010bfb2660(puVar16,param_2,&puStack_2e8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_268);
      _objc_release(lStack_270);
      _objc_release(uStack_278);
      _objc_release(uStack_280);
      _objc_release(puStack_288);
      _objc_release(lStack_290);
      _objc_release(uStack_298);
      _objc_release(uStack_2a0);
      _objc_release(uStack_2a8);
      _objc_release(uStack_2b0);
      _objc_release(uStack_2b8);
      _objc_release(uStack_2c0);
      _objc_release(uStack_2c8);
    }
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar27);
    _objc_release(puVar17);
    _objc_release(lVar23);
    _objc_release(puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 107d8694c; end: 107d86f57; +[SCActivityItemGeneratorFactory createGeneratorsForSnaps:userSession:exportFormat:uploadToYouTube:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:reverseAudioCache:] */

void FUN_107d8694c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bdcf2c0(param_1,param_2,param_3);
    if ((int)uVar1 != 0) {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x107d86c58;
      puStack_f0 = &UNK_110a0be88;
      _objc_retain(param_13);
      uStack_e8 = param_13;
      _objc_retain(param_12);
      uStack_e0 = param_12;
      _objc_retain(param_14);
      uStack_d8 = param_14;
      _objc_retain(param_17);
      uStack_d0 = param_17;
      _objc_retain(param_10);
      uStack_c8 = param_10;
      _objc_retain(param_11);
      uStack_c0 = param_11;
      _objc_retain(param_15);
      uStack_b8 = param_15;
      _objc_retain(param_4);
      uStack_b0 = param_4;
      uStack_80 = param_5;
      uStack_70 = param_6;
      _objc_retain(param_7);
      uStack_a8 = param_7;
      _objc_retain(param_9);
      uStack_a0 = param_9;
      _objc_retain(param_16);
      uStack_98 = param_16;
      _objc_retain(param_18);
      uStack_90 = param_18;
      uStack_78 = param_1;
      _objc_retain(param_8);
      lVar2 = param_3;
      uStack_88 = param_8;
      func_0x00010bfb2660(param_3,param_2,&puStack_108);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(uStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      goto LAB_107d86bc4;
    }
  }
  lVar2 = 0;
LAB_107d86bc4:
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
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107d86f58; end: 107d8706b; +[SCActivityItemGeneratorFactory createGeneratorForPHAsset:] */

void FUN_107d86f58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  if (lVar1 == 2) {
    puVar2 = PTR_PTR_1126d7c50;
    _objc_alloc(PTR_PTR_1126d7c50);
    puVar3 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0,param_2,&PTR____CFConstantStringClassReference_110ebd2b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060c20(puVar2,param_2,param_3,puVar3);
    _objc_release(puVar3);
  }
  else {
    if (lVar1 != 1) {
      puVar3 = (undefined *)0x0;
      goto LAB_107d8704c;
    }
    puVar2 = PTR_PTR_1126d7c48;
    _objc_alloc(PTR_PTR_1126d7c48);
    func_0x00010c01c540();
  }
  puVar3 = PTR_PTR_1126d7c10;
  _objc_alloc(PTR_PTR_1126d7c10);
  func_0x00010be1c580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017760(puVar3,param_2,puVar2,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
LAB_107d8704c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d8706c; end: 107d872c7; +[SCActivityItemGeneratorFactory createGeneratorForPreviewImage:userSession:previewConfiguration:exportFormat:uploadToYouTube:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:circumstanceEngine:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:] */

void FUN_107d8706c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puVar1 = PTR_PTR_1126d7c60;
  puVar3 = PTR_PTR_1126d7c58;
  if (param_6 == 0) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    func_0x00010c039a60();
  }
  else {
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = param_5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c01c040(puVar1,param_2,param_3,param_12,param_13,param_14,param_11,param_4,uVar2,
                        param_6,param_7);
    param_5 = param_3;
    puVar3 = puVar1;
    param_3 = uVar2;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126d7c10;
  _objc_alloc(PTR_PTR_1126d7c10);
  func_0x00010be1c580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017760(puVar1,param_2,puVar3,param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d872c8; end: 107d87747; +[SCActivityItemGeneratorFactory createGeneratorForPreviewVideoFilter:userSession:previewConfiguration:exportFormat:uploadToYouTube:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:targetTrajectoryFactory:circumstanceEngine:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:reverseAudioCache:] */

void FUN_107d872c8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  puVar5 = param_5;
  if (param_6 == 7) {
    puVar1 = PTR_PTR_1126d7c70;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010be1c580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0,param_2,&PTR____CFConstantStringClassReference_110ebd298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060da0(puVar1,param_2,param_3,param_14,param_15,param_16,param_13,param_17,param_4,
                        uVar2,param_8,param_9,param_5,param_5,puVar3,puVar4,param_7,param_10,
                        param_11,param_12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d7c38;
    _objc_alloc(PTR_PTR_1126d7c38);
    func_0x00010c2440e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0,param_2,&PTR____CFConstantStringClassReference_110ebd298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0171a0(puVar3,param_2,puVar4,puVar1,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  else {
    if (param_6 == 0) {
      uVar2 = param_1;
      func_0x00010bdca540(param_1,param_2,param_5);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_PTR_1126d7c68;
        _objc_alloc(PTR_PTR_1126d7c68);
        puVar1 = PTR_PTR_1126b24f0;
        func_0x00010bfbde00(PTR_PTR_1126b24f0,param_2,
                            &PTR____CFConstantStringClassReference_110ebd298);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c039d80(puVar3,param_2,param_3,param_5,puVar1);
        goto LAB_107d87618;
      }
    }
    puVar3 = PTR_PTR_1126d7c78;
    _objc_alloc();
    puVar1 = param_5;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0,param_2,&PTR____CFConstantStringClassReference_110ebd298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060dc0(puVar3,param_2,param_3,param_14,param_15,param_16,param_13,param_17,param_4,
                        puVar1,param_5,puVar5,puVar4,0,param_8,param_9,param_6,param_7,param_10,
                        param_11,param_12);
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
LAB_107d87618:
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126d7c10;
  _objc_alloc(PTR_PTR_1126d7c10);
  func_0x00010be1c580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017760(puVar5,param_2,puVar3,param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107d87748; end: 107d877e7; +[SCActivityItemGeneratorFactory _generatorPerformer] */

void FUN_107d87748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam0000000113727ad8 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f45b615);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar2,param_2,puVar3,0x15,PTR___dispatch_queue_attr_concurrent_11034be28,
                        0xc);
    puVar1 = puRam0000000113727ad8;
    puRam0000000113727ad8 = puVar2;
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = puRam0000000113727ad8;
  _objc_retain(puRam0000000113727ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d877e8; end: 107d87923; +[SCActivityItemGeneratorFactory _areSnapsSupported:] */

undefined1 * FUN_107d877e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_118 + lVar7 * 8);
        lVar2 = lVar5;
        func_0x00010b5fa088();
        if ((10 < lVar2 - 2U) && (func_0x00010b5fa088(), lVar5 == 9999)) {
          puVar4 = (undefined1 *)0x0;
          goto LAB_107d878d8;
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  puVar4 = (undefined1 *)0x1;
LAB_107d878d8:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c2440e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar3;
  func_0x00010c06e820();
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 107d87924; end: 107d87963; +[SCActivityItemGeneratorFactory _alwaysGenerateSpectacles:] */

undefined8 FUN_107d87924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2440e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c06e820();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107d87964; end: 107d87dab; -[SCGalleryPreviewActivityItemProvider initWithUserSession:tabType:snapImage:configuration:commonLoggingParamsBuilder:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107d87964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  puStack_70 = PTR_PTR_1126fafc0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithPlaceholderItem__112539180,param_5);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11276ecb0;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11276ecb4) = 0;
    lVar5 = (long)_DAT_11276ecb8;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(long *)((long)puVar2 + lVar5) = param_6;
    _objc_release(uVar3);
    uVar6 = 0x3f800000;
    uVar7 = 0;
    func_0x00010c1e4920(0x3f800000,puVar2);
    func_0x00010c21f2c0(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11276ecbc) = param_4;
    func_0x00010c1b5e40(puVar2);
    func_0x00010c2a5120(param_5);
    dVar1 = (double)CONCAT44(uVar7,uVar6);
    func_0x00010bfe0900(param_5);
    func_0x000107f72bcc((long)dVar1,(long)(double)CONCAT44(uVar7,uVar6));
    func_0x00010c197480(puVar2);
    lVar5 = (long)_DAT_11276ecc0;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecc4;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecc8;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276eccc;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecd0;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_11;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11276ecd4,param_12);
    lVar5 = (long)_DAT_11276ecd8;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecdc;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece0;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece4;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece8;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecec;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = param_6;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x00010b5fb3bc(lVar4,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188420(puVar2);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
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
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107d87dac; end: 107d88263; -[SCGalleryPreviewActivityItemProvider initWithUserSession:tabType:snapVideoFilter:configuration:commonLoggingParamsBuilder:spectaclesAuxiliaryContentServices:previewAssetVideoProviderFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:cachingMediaManager:dataObjectContext:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:reverseAudioCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107d87dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  puVar1 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00(PTR_PTR_1126b24f0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126fafc0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithPlaceholderItem__112539180,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11276ecf0;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_5;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11276ecb4) = 1;
    lVar5 = (long)_DAT_11276ecb8;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(long *)((long)puVar2 + lVar5) = param_6;
    _objc_release(uVar3);
    dVar6 = 5.39824124557083e-315;
    func_0x00010c1e4920(0x41200000,puVar2);
    func_0x00010c21f2c0(puVar2);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11276ecbc) = param_4;
    func_0x00010c1b5e40(puVar2);
    func_0x00010bf1c7c0(param_5);
    func_0x00010bfe75c0(param_5);
    NEON_ucvtf((long)dVar6);
    func_0x00010c197480(puVar2);
    lVar5 = (long)_DAT_11276ecc0;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_7;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecc4;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_8;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecc8;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_9;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276eccc;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_10;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecd0;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_11;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11276ecd4,param_12);
    lVar5 = (long)_DAT_11276ecd8;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_13;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecdc;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_14;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece0;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_15;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece4;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_16;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ece8;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_17;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecec;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_18;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ecf4;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar5);
    *(undefined8 *)((long)puVar2 + lVar5) = param_19;
    _objc_release(uVar3);
    lVar5 = param_6;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x00010b5fb3bc(lVar4,0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188420(puVar2);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
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
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107d88264; end: 107d8847f; -[SCGalleryPreviewActivityItemProvider createNewGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88264(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar6 = PTR_PTR_1126d7c80;
  lVar8 = *(long *)(param_1 + _DAT_11276ecf0);
  lVar3 = param_1;
  lVar5 = param_1;
  if (lVar8 == 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11276ecb0);
    func_0x00010c293740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11276ecb8);
    lVar8 = param_1;
    func_0x00010c248a80(param_1);
    lVar4 = param_1;
    func_0x00010c28e940(param_1);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11276ecc4);
    uVar11 = *(undefined8 *)(param_1 + _DAT_11276ecf8);
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56420(puVar6,param_2,uVar7,lVar3,uVar9,lVar8,lVar4,uVar10,uVar11,lVar5,
                        *(undefined8 *)(param_1 + _DAT_11276ecd8),
                        *(undefined8 *)(param_1 + _DAT_11276ecdc),
                        *(undefined8 *)(param_1 + _DAT_11276ece0),
                        *(undefined8 *)(param_1 + _DAT_11276ece4),
                        *(undefined8 *)(param_1 + _DAT_11276ece8),
                        *(undefined8 *)(param_1 + _DAT_11276ecec));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c293740(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11276ecb8);
    lVar1 = param_1;
    func_0x00010c248a80();
    lVar2 = param_1;
    func_0x00010c28e940(param_1);
    uVar11 = *(undefined8 *)(param_1 + _DAT_11276ecc4);
    uVar9 = *(undefined8 *)(param_1 + _DAT_11276ecc8);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11276ecf8);
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11276ecd4;
    _objc_loadWeakRetained();
    func_0x00010bf56440(puVar6,param_2,lVar8,lVar3,uVar7,lVar1,lVar2,uVar11,uVar9,uVar10,lVar5,lVar4
                        ,*(undefined8 *)(param_1 + _DAT_11276ecd8),
                        *(undefined8 *)(param_1 + _DAT_11276ecdc),
                        *(undefined8 *)(param_1 + _DAT_11276ece0),
                        *(undefined8 *)(param_1 + _DAT_11276ece4),
                        *(undefined8 *)(param_1 + _DAT_11276ecf4));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107d88480; end: 107d8853b; -[SCGalleryPreviewActivityItemProvider snapMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88480(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11276ecb8);
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010b5fa088(lVar2);
    func_0x00010c0df840(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2268e0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107d8853c; end: 107d88547; -[SCGalleryPreviewActivityItemProvider exportContext] */

undefined ** FUN_107d8853c(void)

{
  return &PTR____CFConstantStringClassReference_110dbaa98;
}



/* Entry: 107d88548; end: 107d8858b; -[SCGalleryPreviewActivityItemProvider exportMatchId] */

void FUN_107d88548(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c27a100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8858c; end: 107d885bb; -[SCGalleryPreviewActivityItemProvider inputSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107d8858c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + _DAT_11276ecbc) - 1;
  if (uVar1 < 0x10) {
    return (&PTR_PTR_110a0bed8)[uVar1];
  }
  return (undefined *)0x0;
}



/* Entry: 107d885bc; end: 107d885cb; -[SCGalleryPreviewActivityItemProvider mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d885bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ecb4);
}



/* Entry: 107d885cc; end: 107d885db; -[SCGalleryPreviewActivityItemProvider configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d885cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ecb8);
}



/* Entry: 107d885dc; end: 107d885eb; -[SCGalleryPreviewActivityItemProvider image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d885dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ecb0);
}



/* Entry: 107d885ec; end: 107d885fb; -[SCGalleryPreviewActivityItemProvider videoFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d885ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ecf0);
}



/* Entry: 107d885fc; end: 107d8860b; -[SCGalleryPreviewActivityItemProvider commonLoggingParamsBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d885fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ecc0);
}



/* Entry: 107d8860c; end: 107d88737; -[SCGalleryPreviewActivityItemProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d8860c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ecc0,0);
  _objc_storeStrong(param_1 + _DAT_11276ecf0,0);
  _objc_storeStrong(param_1 + _DAT_11276ecb0,0);
  _objc_storeStrong(param_1 + _DAT_11276ecb8,0);
  _objc_storeStrong(param_1 + _DAT_11276ecf4,0);
  _objc_storeStrong(param_1 + _DAT_11276ecec,0);
  _objc_storeStrong(param_1 + _DAT_11276ece8,0);
  _objc_storeStrong(param_1 + _DAT_11276ece4,0);
  _objc_storeStrong(param_1 + _DAT_11276ece0,0);
  _objc_storeStrong(param_1 + _DAT_11276ecdc,0);
  _objc_storeStrong(param_1 + _DAT_11276ecd8,0);
  _objc_destroyWeak(param_1 + _DAT_11276ecd4);
  _objc_storeStrong(param_1 + _DAT_11276ecd0,0);
  _objc_storeStrong(param_1 + _DAT_11276eccc,0);
  _objc_storeStrong(param_1 + _DAT_11276ecc8,0);
  _objc_storeStrong(param_1 + _DAT_11276ecf8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ecc4,0);
  return;
}



/* Entry: 107d88738; end: 107d88b4f; -[SCGallerySnapActivityItemProvider initWithSnap:dataObjectContext:snapVideoFilterScopeExposer:cachingMediaManager:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:reverseAudioCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_107d88738(undefined8 param_1,undefined8 ***param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar1 = param_4;
  func_0x00010b5fa088();
  puVar2 = PTR_PTR_1126bc7b8;
  if (uVar1 < 0xd) {
    if ((1L << (uVar1 & 0x3f) & 0x1566U) == 0) {
      uVar5 = param_5;
      func_0x00010c269d40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126bfb98;
      puVar3 = puVar2;
      func_0x00010c0ef4a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c230420();
      _objc_release(puVar3);
      if ((int)puVar6 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
        puStack_88 = PTR_PTR_1126fafc8;
        pppuVar4 = &ppuStack_90;
        ppuStack_90 = param_2;
        _objc_msgSendSuper2(pppuVar4,PTR_s_initWithPlaceholderItem__112539180,puVar3);
        _objc_release(puVar3);
        param_1 = 0x3f800000;
      }
      else {
        puVar3 = PTR_PTR_1126b24f0;
        func_0x00010bfbde00(PTR_PTR_1126b24f0);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR_PTR_1126fafc8;
        pppuVar4 = &ppuStack_80;
        ppuStack_80 = param_2;
        _objc_msgSendSuper2(pppuVar4,PTR_s_initWithPlaceholderItem__112539180,puVar3);
        _objc_release(puVar3);
        func_0x00010bf8b160(param_4);
      }
      _objc_release(puVar2);
      goto LAB_107d889a4;
    }
    puVar2 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR_PTR_1126fafc8;
    pppuVar4 = &ppuStack_a0;
    ppuStack_a0 = param_2;
    _objc_msgSendSuper2(pppuVar4,PTR_s_initWithPlaceholderItem__112539180,puVar2);
    _objc_release(puVar2);
    func_0x00010bf8b160(param_4);
  }
  else {
    param_1 = 0;
    pppuVar4 = param_2;
  }
  puVar6 = (undefined *)0x1;
LAB_107d889a4:
  if (pppuVar4 != (undefined8 ***)0x0) {
    func_0x00010c203860(pppuVar4);
    func_0x00010c1e4920(param_1,pppuVar4);
    func_0x00010c1b5e40(pppuVar4);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107f72990(param_4,uVar5);
    func_0x00010c197480(pppuVar4);
    _objc_release(uVar5);
    uVar1 = param_4;
    func_0x00010b5fb3bc(param_4,0,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188420(pppuVar4);
    _objc_release(uVar1);
    func_0x00010c205aa0(pppuVar4);
    func_0x00010c175600(pppuVar4);
    func_0x00010c1c5e20(pppuVar4);
    func_0x00010c1c5da0(pppuVar4);
    lVar7 = (long)_DAT_11276ecfc;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)pppuVar4 + lVar7);
    *(undefined8 *)((long)pppuVar4 + lVar7) = param_9;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_11276ed00;
    _objc_retain(param_10);
    uVar5 = *(undefined8 *)((long)pppuVar4 + lVar7);
    *(undefined8 *)((long)pppuVar4 + lVar7) = param_10;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_11276ed04;
    _objc_retain(param_11);
    uVar5 = *(undefined8 *)((long)pppuVar4 + lVar7);
    *(undefined8 *)((long)pppuVar4 + lVar7) = param_11;
    _objc_release(uVar5);
    lVar7 = (long)_DAT_11276ed08;
    _objc_retain(param_12);
    uVar5 = *(undefined8 *)((long)pppuVar4 + lVar7);
    *(undefined8 *)((long)pppuVar4 + lVar7) = param_12;
    _objc_release(uVar5);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return pppuVar4;
}



/* Entry: 107d88b50; end: 107d88da3; -[SCGallerySnapActivityItemProvider createNewGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107d88b50(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uStack_78;
  long lStack_70;
  
  puVar13 = PTR_PTR_1126d7c80;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c248a80();
  uVar4 = param_1;
  func_0x00010c28e940();
  uVar5 = param_1;
  func_0x00010c2484a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c1104c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c243b60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56460(puVar13,param_2,puVar1,uVar2,uVar3,uVar4 & 0xffffffff,uVar5,uVar6,uVar7,uVar8,
                      uVar9,uVar10,uVar11,uVar12,*(undefined8 *)(param_1 + (long)_DAT_11276ecfc),
                      *(undefined8 *)(param_1 + (long)_DAT_11276ed00),
                      *(undefined8 *)(param_1 + (long)_DAT_11276ed04),
                      *(undefined8 *)(param_1 + (long)_DAT_11276ed08));
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return puVar14;
  }
  ___stack_chk_fail();
  uVar15 = *(ulong *)(uVar15 + (long)_DAT_11276ed0c);
  func_0x00010b5fa088();
  if (((0xc < uVar15) || ((1L << (uVar15 & 0x3f) & 0x1566U) == 0)) && (uVar15 != 9999)) {
    return (undefined *)0x1;
  }
  return (undefined *)0x0;
}



/* Entry: 107d88da4; end: 107d88dc3; -[SCGallerySnapActivityItemProvider isImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d88da4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276ed0c);
  func_0x00010b5fa088();
  if (((0xc < uVar1) || ((1L << (uVar1 & 0x3f) & 0x1566U) == 0)) && (uVar1 != 9999)) {
    return 1;
  }
  return 0;
}



/* Entry: 107d88dc4; end: 107d88df7; -[SCGallerySnapActivityItemProvider isVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107d88dc4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276ed0c);
  func_0x00010b5fa088(uVar1);
  return (uint)(uVar1 < 0xd) & 0x1566U >> (ulong)((uint)uVar1 & 0x1f);
}



/* Entry: 107d88df8; end: 107d88e7f; -[SCGallerySnapActivityItemProvider snapMediaTypes] */

void FUN_107d88df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b5fa088();
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d88e80; end: 107d88e8f; -[SCGallerySnapActivityItemProvider snap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d88e80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed0c);
}



/* Entry: 107d88e90; end: 107d88ecf; -[SCGallerySnapActivityItemProvider setSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ed0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d88ed0; end: 107d88eef; -[SCGallerySnapActivityItemProvider snapVideoFilterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88ed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ed10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d88ef0; end: 107d88f03; -[SCGallerySnapActivityItemProvider setSnapVideoFilterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ed10,param_3);
  return;
}



/* Entry: 107d88f04; end: 107d88f13; -[SCGallerySnapActivityItemProvider memoriesDataObjectContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d88f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed14);
}



/* Entry: 107d88f14; end: 107d88f53; -[SCGallerySnapActivityItemProvider setMemoriesDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ed14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d88f54; end: 107d88f63; -[SCGallerySnapActivityItemProvider cachingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d88f54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed18);
}



/* Entry: 107d88f64; end: 107d88fa3; -[SCGallerySnapActivityItemProvider setCachingMediaManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ed18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d88fa4; end: 107d88fb3; -[SCGallerySnapActivityItemProvider memoriesCloudFS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d88fa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed1c);
}



/* Entry: 107d88fb4; end: 107d88ff3; -[SCGallerySnapActivityItemProvider setMemoriesCloudFS:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276ed1c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d88ff4; end: 107d89013; -[SCGallerySnapActivityItemProvider dreamsSessionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d88ff4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ed20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d89014; end: 107d89027; -[SCGallerySnapActivityItemProvider setDreamsSessionManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89014(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ed20,param_3);
  return;
}



/* Entry: 107d89028; end: 107d890df; -[SCGallerySnapActivityItemProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89028(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ed20);
  _objc_storeStrong(param_1 + _DAT_11276ed1c,0);
  _objc_storeStrong(param_1 + _DAT_11276ed18,0);
  _objc_storeStrong(param_1 + _DAT_11276ed14,0);
  _objc_destroyWeak(param_1 + _DAT_11276ed10);
  _objc_storeStrong(param_1 + _DAT_11276ed0c,0);
  _objc_storeStrong(param_1 + _DAT_11276ed08,0);
  _objc_storeStrong(param_1 + _DAT_11276ed04,0);
  _objc_storeStrong(param_1 + _DAT_11276ed00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ecfc,0);
  return;
}



/* Entry: 107d890e0; end: 107d8975f; -[SCGalleryStoryActivityItemProvider initWithSnaps:isMultisnap:compositionMode:dataObjectContext:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:videoFilterFactory:previewAssetVideoProviderFactory:imageToVideoWriterScopeExposer:imageToVideoWriterScopeServices:snapVideoFilterScopeExposer:cachingMediaManager:memoriesCloudFS:encryptedContentManager:memoriesCachingMediaHelper:memoriesTranscodingHelper:backgroundTaskWrapper:reverseAudioCache:creativeToolsMemoriesResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107d890e0(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
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
  puVar1 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00(PTR_PTR_1126b24f0);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR_PTR_1126fafd0;
  puVar2 = &uStack_110;
  uStack_110 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithPlaceholderItem__112539180,puVar1);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11276ed24;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(long *)((long)puVar2 + lVar9) = param_3;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11276ed28;
    *(undefined1 *)((long)puVar2 + lVar6) = param_4;
    *(undefined8 *)((long)puVar2 + (long)_DAT_11276ed2c) = param_5;
    lVar7 = (long)_DAT_11276ed30;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_6;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed34;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_7;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed38;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_8;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed3c;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_9;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed40;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_10;
    _objc_release(uVar3);
    func_0x00010c1e1980(puVar2);
    lVar7 = (long)_DAT_11276ed44;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_12;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed48;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_13;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11276ed4c,param_14);
    lVar7 = (long)_DAT_11276ed50;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_15;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed54;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_16;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed58;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_17;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed5c;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_18;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed60;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_19;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed64;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_20;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed68;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_21;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_11276ed6c;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar7);
    *(undefined8 *)((long)puVar2 + lVar7) = param_22;
    _objc_release(uVar3);
    func_0x00010c1e4920(puVar2);
    if (*(char *)((long)puVar2 + lVar6) == '\x01') {
      func_0x00010c1b5e40(puVar2);
    }
    else {
      lVar6 = param_3;
      func_0x00010b5f8ce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1b5e40(puVar2);
      _objc_release(lVar6);
    }
    lVar9 = *(long *)((long)puVar2 + lVar9);
    _objc_retain(lVar9);
    lVar6 = lVar9;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(ulong *)(lVar8 * 8);
        uVar3 = param_6;
        func_0x00010c269d40(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107f72990(uVar10,uVar3);
        func_0x00010bf997c0(puVar2);
        func_0x00010c197480(puVar2);
        _objc_release(uVar3);
        uVar4 = uVar10;
        func_0x00010b5fa088();
        if (uVar4 < 0xd) {
          if ((1L << (uVar4 & 0x3f) & 0x1566U) == 0) {
            func_0x00010c117b00(puVar2);
          }
          else {
            func_0x00010bf8b160(uVar10);
            func_0x00010c117b00(puVar2);
          }
          func_0x00010c1e4920(puVar2);
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    lVar6 = param_3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      lVar6 = param_3;
      func_0x00010c089820(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c07fbc0(puVar2);
      lVar7 = lVar6;
      func_0x00010b5fb3bc(lVar6,puVar5,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c188420(puVar2);
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
  }
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
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined8 *)(ulong)((*(byte *)(param_3 + _DAT_11276ed28) ^ 0xffffffff) & 1);
}



/* Entry: 107d89760; end: 107d89777; -[SCGalleryStoryActivityItemProvider isStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107d89760(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276ed28) ^ 0xff) & 1;
}



/* Entry: 107d89778; end: 107d89a13; -[SCGalleryStoryActivityItemProvider createNewGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89778(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  undefined *puVar17;
  undefined8 uVar18;
  
  puVar17 = PTR_PTR_1126d7c80;
  uVar18 = *(undefined8 *)(param_1 + _DAT_11276ed24);
  lVar1 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c248a80();
  lVar3 = param_1;
  func_0x00010bf45620();
  lVar4 = param_1;
  func_0x00010c2484a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bfe71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c110600();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29a120();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c1104c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bfe8e40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bfe8ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c243b60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55400(puVar17,param_2,uVar18,lVar1,lVar2,lVar3,0,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9
                      ,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,lVar16,
                      *(undefined8 *)(param_1 + _DAT_11276ed54),
                      *(undefined8 *)(param_1 + _DAT_11276ed58),
                      *(undefined8 *)(param_1 + _DAT_11276ed5c),
                      *(undefined8 *)(param_1 + _DAT_11276ed60),
                      *(undefined8 *)(param_1 + _DAT_11276ed64),
                      *(undefined8 *)(param_1 + _DAT_11276ed68),
                      *(undefined8 *)(param_1 + _DAT_11276ed6c));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 107d89a14; end: 107d89b7b; -[SCGalleryStoryActivityItemProvider snapMediaTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107d89a14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + _DAT_11276ed24);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010b5fa088(uVar3);
        func_0x00010c0df840(puVar4,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_11276ed24);
}



/* Entry: 107d89b7c; end: 107d89b8b; -[SCGalleryStoryActivityItemProvider snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89b7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed24);
}



/* Entry: 107d89b8c; end: 107d89b9b; -[SCGalleryStoryActivityItemProvider activeVideoPaths] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed34);
}



/* Entry: 107d89b9c; end: 107d89bab; -[SCGalleryStoryActivityItemProvider imageCommandProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed38);
}



/* Entry: 107d89bac; end: 107d89bbb; -[SCGalleryStoryActivityItemProvider previewCameraSourceOverlayService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed3c);
}



/* Entry: 107d89bbc; end: 107d89bcb; -[SCGalleryStoryActivityItemProvider videoFilterFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed40);
}



/* Entry: 107d89bcc; end: 107d89bdb; -[SCGalleryStoryActivityItemProvider imageToVideoWriterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed44);
}



/* Entry: 107d89bdc; end: 107d89beb; -[SCGalleryStoryActivityItemProvider imageToVideoWriterScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed48);
}



/* Entry: 107d89bec; end: 107d89bfb; -[SCGalleryStoryActivityItemProvider cachingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed50);
}



/* Entry: 107d89bfc; end: 107d89c0b; -[SCGalleryStoryActivityItemProvider dataObjectContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89bfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed30);
}



/* Entry: 107d89c0c; end: 107d89c1b; -[SCGalleryStoryActivityItemProvider memoriesCloudFS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89c0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed54);
}



/* Entry: 107d89c1c; end: 107d89c2b; -[SCGalleryStoryActivityItemProvider memoriesTranscodingHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89c1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed60);
}



/* Entry: 107d89c2c; end: 107d89c3b; -[SCGalleryStoryActivityItemProvider backgroundTaskWrapper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89c2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed64);
}



/* Entry: 107d89c3c; end: 107d89c4b; -[SCGalleryStoryActivityItemProvider creativeToolsMemoriesResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89c3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed6c);
}



/* Entry: 107d89c4c; end: 107d89c6b; -[SCGalleryStoryActivityItemProvider snapVideoFilterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89c4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ed4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d89c6c; end: 107d89c7b; -[SCGalleryStoryActivityItemProvider isMultisnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d89c6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ed28);
}



/* Entry: 107d89c7c; end: 107d89c8b; -[SCGalleryStoryActivityItemProvider compositionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ed2c);
}



/* Entry: 107d89c8c; end: 107d89db7; -[SCGalleryStoryActivityItemProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89c8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ed4c);
  _objc_storeStrong(param_1 + _DAT_11276ed6c,0);
  _objc_storeStrong(param_1 + _DAT_11276ed64,0);
  _objc_storeStrong(param_1 + _DAT_11276ed60,0);
  _objc_storeStrong(param_1 + _DAT_11276ed54,0);
  _objc_storeStrong(param_1 + _DAT_11276ed30,0);
  _objc_storeStrong(param_1 + _DAT_11276ed50,0);
  _objc_storeStrong(param_1 + _DAT_11276ed48,0);
  _objc_storeStrong(param_1 + _DAT_11276ed44,0);
  _objc_storeStrong(param_1 + _DAT_11276ed40,0);
  _objc_storeStrong(param_1 + _DAT_11276ed3c,0);
  _objc_storeStrong(param_1 + _DAT_11276ed38,0);
  _objc_storeStrong(param_1 + _DAT_11276ed34,0);
  _objc_storeStrong(param_1 + _DAT_11276ed24,0);
  _objc_storeStrong(param_1 + _DAT_11276ed68,0);
  _objc_storeStrong(param_1 + _DAT_11276ed5c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ed58,0);
  return;
}



/* Entry: 107d89db8; end: 107d89ee7; -[SCGalleryPhotoAssetActivityItemProvider initWithPhotoAsset:] */

undefined8 *** FUN_107d89db8(undefined8 ***param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  pppuVar3 = &ppuStack_60;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6c20();
  if (lVar1 == 2) {
    puVar2 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00(PTR_PTR_1126b24f0);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR_PTR_1126fafd8;
    ppuStack_60 = param_1;
    _objc_msgSendSuper2(&ppuStack_60,PTR_s_initWithPlaceholderItem__112539180,puVar2);
    uVar4 = 0x41200000;
  }
  else {
    uVar4 = 0;
    pppuVar3 = param_1;
    if (lVar1 != 1) goto LAB_107d89e88;
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc_init(PTR__OBJC_CLASS___UIImage_1126aea68);
    puStack_48 = PTR_PTR_1126fafd8;
    pppuVar3 = &ppuStack_50;
    ppuStack_50 = param_1;
    _objc_msgSendSuper2(pppuVar3,PTR_s_initWithPlaceholderItem__112539180,puVar2);
    uVar4 = 0x3f800000;
  }
  _objc_release(puVar2);
LAB_107d89e88:
  if (pppuVar3 != (undefined8 ***)0x0) {
    func_0x00010c1db3a0(pppuVar3);
    func_0x00010c1e4920(uVar4,pppuVar3);
    func_0x00010c1b5e40(pppuVar3);
    FUN_107f72c94(param_3);
    func_0x00010c197480(pppuVar3);
  }
  _objc_release(param_3);
  return pppuVar3;
}



/* Entry: 107d89ee8; end: 107d89f3b; -[SCGalleryPhotoAssetActivityItemProvider createNewGenerator] */

void FUN_107d89ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7c80;
  func_0x00010c0fb3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56400(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d89f3c; end: 107d89f43; -[SCGalleryPhotoAssetActivityItemProvider snapMediaTypes] */

undefined8 FUN_107d89f3c(void)

{
  return 0;
}



/* Entry: 107d89f44; end: 107d89f53; -[SCGalleryPhotoAssetActivityItemProvider photoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d89f44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eca0);
}



/* Entry: 107d89f54; end: 107d89f93; -[SCGalleryPhotoAssetActivityItemProvider setPhotoAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276eca0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d89f94; end: 107d89fa7; -[SCGalleryPhotoAssetActivityItemProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d89f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eca0,0);
  return;
}



/* Entry: 107d89fa8; end: 107d8a033; +[SCGalleryActivityItemGenerator supportsProgressHandlerForActivityItemProvider:] */

uint FUN_107d89fa8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7c88;
  _objc_opt_class(PTR_PTR_1126d7c88);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d7c90;
    _objc_opt_class(PTR_PTR_1126d7c90);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126d7c98;
      _objc_opt_class(PTR_PTR_1126d7c98);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      uVar3 = (uint)uVar2;
      goto LAB_107d8a01c;
    }
  }
  uVar3 = 1;
LAB_107d8a01c:
  _objc_release(param_3);
  return uVar3 & 1;
}



/* Entry: 107d8a034; end: 107d8a0db; +[SCGalleryActivityItemGenerator generateItemForActivityItemProvider:dataObjectContext:progressHandler:resultHandler:] */

void FUN_107d8a034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beb2000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b3c0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8a0dc; end: 107d8a10b; +[SCGalleryActivityItemGenerator cancel] */

void FUN_107d8a0dc(undefined8 param_1)

{
  func_0x00010beb2000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdda2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d8a10c; end: 107d8a1d7; -[SCGalleryActivityItemGenerator storyExporter:didFinishExportingToURL:withError:] */

void FUN_107d8a10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bef1740(param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 0) || (param_5 != 0)) {
    uVar1 = param_1;
    func_0x00010be0b320(param_1,param_2,param_5,&PTR____CFConstantStringClassReference_110ebd2d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3520(param_1,param_2,param_3,0,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010bde3520(param_1,param_2,param_3,param_4,0);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d8a1d8; end: 107d8a227; -[SCGalleryActivityItemGenerator storyExporter:didProceedToProgress:] */

void FUN_107d8a1d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef1740(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be82fa0((float)param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107d8a228; end: 107d8a27b; +[SCGalleryActivityItemGenerator _sharedGenerator] */

void FUN_107d8a228(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113727ae0 != -1) {
    func_0x00010002a2fc(0x113727ae0,&PTR___NSConcreteGlobalBlock_110a0beb8);
  }
  uVar1 = uRam0000000113727ae8;
  _objc_retain(uRam0000000113727ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d8a27c; end: 107d8a2a7;  */

void FUN_107d8a27c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d7ca0;
  _objc_alloc_init();
  uVar1 = puRam0000000113727ae8;
  puRam0000000113727ae8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d8a2a8; end: 107d8a2b3; -[SCGalleryActivityItemGenerator _cancel] */

void FUN_107d8a2a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107d8a2b4; end: 107d8a3c7; -[SCGalleryActivityItemGenerator _startWithActivityItemProvider:progressHandler:resultHandler:] */

void FUN_107d8a2b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar3);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar3);
  }
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_4;
    _objc_retainBlock(param_4);
    func_0x00010c1d0560(uVar3,param_2,lVar2,param_3);
    _objc_release(lVar2);
  }
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = param_5;
    _objc_retainBlock(param_5);
    func_0x00010c1d0560(uVar3,param_2,lVar2,param_3);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


