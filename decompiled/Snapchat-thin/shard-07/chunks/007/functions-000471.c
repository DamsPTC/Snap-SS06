/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058dd5f8; end: 1058dd673; +[SCMemCommonThumbnailDoc_EncryptedEncryptionInfo descriptor] */

undefined * FUN_1058dd5f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76588,
                        &PTR____CFConstantStringClassReference_110e0a998,
                        &PTR_s_snapchat_memories_113108258,&PTR_DAT_1131082b0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0f18 = puVar1;
  }
  return puRam00000001136c0f18;
}



/* Entry: 1058dd674; end: 1058dd7bf; -[SCSnapUploadWorkflowImpl initSnapDocManager:boltDataUploader:circumstanceEngine:] */

undefined1 *
FUN_1058dd674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eac58;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    lVar4 = param_5;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      *(undefined1 *)((long)puVar1 + 0x20) = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar1 + 0x20) = (char)lVar6;
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058dd7c0; end: 1058dd7c7; -[SCSnapUploadWorkflowImpl uploadForKey:snapDoc:config:encryptionInfo:] */

void FUN_1058dd7c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uploadForKey_snapDoc_config_encr_1126811b8);
  return;
}



/* Entry: 1058dd7c8; end: 1058dda43; -[SCSnapUploadWorkflowImpl uploadForKey:snapDoc:config:encryptionInfo:mediaValidator:] */

void FUN_1058dd7c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126bfc90;
  puVar3 = PTR_PTR_1126b1378;
  func_0x00010c0c46a0(param_3);
  func_0x00010c119380(puVar2);
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  func_0x00010c291560(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(puVar1);
  func_0x00010c13edc0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058dda44; end: 1058ddaab;  */

void FUN_1058dda44(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058ddaac; end: 1058de72f; -[SCSnapUploadWorkflowImpl _uploadMediaResult:snapDoc:snapDocKey:config:encryptionInfo:mediaValidator:promise:] */

/* WARNING: Removing unreachable block (ram,0x0001058ddfd0) */
/* WARNING: Removing unreachable block (ram,0x0001058ddfdc) */

void FUN_1058ddaac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_428;
  undefined *puStack_420;
  undefined *puStack_410;
  long lStack_408;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [264];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_188,param_1);
  lVar14 = param_3;
  func_0x00010bfc5240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar14 == 0) {
    puStack_1b0 = &uStack_1b8;
    uStack_1b8 = 0;
    uStack_1a8 = 0x3032000000;
    pcStack_1a0 = FUN_1058de730;
    uStack_198 = 0x1058de740;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_1d0 = &uStack_1d8;
    uStack_1d8 = 0;
    uStack_1c8 = 0x2020000000;
    uStack_1c0 = 0;
    puStack_1f0 = &uStack_1f8;
    uStack_1f8 = 0;
    uStack_1e8 = 0x2020000000;
    uStack_1e0 = 0;
    puStack_210 = &uStack_218;
    uStack_218 = 0;
    uStack_208 = 0x2020000000;
    uStack_200 = 0;
    puStack_240 = &uStack_248;
    uStack_248 = 0;
    uStack_238 = 0x3032000000;
    pcStack_230 = FUN_1058de730;
    uStack_228 = 0x1058de740;
    uStack_220 = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_190 = puVar2;
    _objc_opt_new();
    lVar14 = param_3;
    func_0x00010bfc76e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    lVar4 = lVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar16 = *plStack_280;
      do {
        lVar17 = 0;
        do {
          if (*plStack_280 != lVar16) {
            _objc_enumerationMutation(lVar4);
          }
          puVar6 = PTR_PTR_1126bfc98;
          func_0x00010be16b00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c09d7e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c08fa60();
          _objc_release(puVar7);
          if (puVar8 != (undefined *)0x0) {
            lVar15 = lVar14;
            func_0x00010c0e00e0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar2);
            _objc_release(lVar15);
          }
          _objc_release(puVar6);
          lVar17 = lVar17 + 1;
        } while (lVar5 != lVar17);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    puVar6 = puVar2;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126bfca0;
      _objc_alloc(PTR_PTR_1126bfca0);
      func_0x00010c0475a0();
      func_0x00010bf43d60(param_9);
      _objc_release(puVar6);
    }
    else {
      puVar7 = PTR_PTR_1126bcb88;
      _objc_alloc();
      func_0x00010bf529e0(puVar2);
      _objc_copyWeak(auStack_298,auStack_188);
      _objc_retain(param_4);
      _objc_retain(param_7);
      _objc_retain(param_5);
      _objc_retain(param_9);
      _objc_retain(puVar3);
      func_0x00010c030440();
      _objc_retain(puVar2);
      puVar6 = puVar2;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (puVar6 != (undefined *)0x0) {
        puStack_410 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(puVar2);
          }
          lVar5 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar5;
          func_0x00010bfc4120();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar5;
          func_0x00010bfc7700();
          lStack_408 = 0;
          if ((*(char *)(param_1 + 0x20) == '\x01') && ((int)lVar17 == 3)) {
            lStack_408 = lVar16;
            func_0x00010bfc5880();
            _objc_retainAutoreleasedReturnValue();
            if (lStack_408 == 0) {
              lStack_408 = 0;
              goto LAB_1058ddff0;
            }
            puStack_420 = PTR__OBJC_CLASS___NSURL_1126ae598;
            func_0x00010bfad300();
            _objc_retainAutoreleasedReturnValue();
            if (puStack_420 == (undefined *)0x0) goto LAB_1058ddff0;
            func_0x00010befa120(puVar3);
            func_0x00010bfc99e0();
            _objc_retain(0);
            _objc_retain(0);
            lStack_428 = 0;
            _objc_release(0);
            _objc_release(0);
            lVar15 = 0;
            bVar1 = true;
LAB_1058de084:
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (lStack_428 == 0) {
              puVar8 = PTR_PTR_1126bfc98;
              func_0x00010be0b260();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = puStack_240[5];
              puStack_240[5] = puVar8;
              _objc_release(uVar13);
              func_0x00010c0e7120(puVar7);
            }
            else {
              func_0x00010c0c46a0();
              uVar13 = param_5;
              func_0x00010bf9e140();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0c55e0();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              puVar9 = PTR_PTR_1126b5980;
              func_0x00010bf1f1e0(PTR_PTR_1126b5980);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2aade0();
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar10 = PTR_PTR_1126bfc90;
              func_0x00010c0c46a0(param_5);
              func_0x00010c0c6820(puVar10);
              func_0x00010c2b3a20(puVar9);
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010bfc7700(lVar5);
              func_0x00010c2bc180(puVar9);
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010bfc27e0();
              func_0x00010c2a8800(puVar9);
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010c2bc1a0(puVar9);
              _objc_unsafeClaimAutoreleasedReturnValue();
              if (((int)lVar17 == 3) &&
                 (puVar10 = PTR_PTR_1126bfc98, func_0x00010bee8bc0(), (int)puVar10 != 0)) {
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2acb60(puVar9);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar10);
              }
              puVar10 = PTR_PTR_1126b5988;
              if (bVar1) {
                func_0x00010c09d8a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2abca0(puVar9);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              else {
                func_0x00010bfeb740(PTR_PTR_1126b5988);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2abca0(puVar9);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              _objc_release(puVar10);
              if (param_7 != 0) {
                lVar17 = param_7;
                func_0x00010c086560(param_7);
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar17;
                func_0x00010bf15da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar17);
                lVar17 = param_7;
                func_0x00010c085300(param_7);
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar17;
                func_0x00010bf15da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar17);
                puVar10 = PTR_PTR_1126bfca8;
                _objc_alloc(PTR_PTR_1126bfca8);
                func_0x00010c020b60();
                func_0x00010c2ad2c0(puVar9);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar10);
                _objc_release(lVar12);
                _objc_release(lVar11);
              }
              puVar10 = puVar9;
              func_0x00010bf21f60(puVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010c269d40(uVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_6);
              _objc_retain(puVar7);
              _objc_retain(param_5);
              _objc_retain(puVar7);
              func_0x00010c28eb40(uVar13);
              _objc_release(uVar13);
              _objc_release(puVar7);
              _objc_release(param_5);
              _objc_release(puVar7);
              _objc_release(param_6);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar8);
            }
          }
          else {
LAB_1058ddff0:
            lVar15 = lVar16;
            func_0x00010b7f5374();
            _objc_retainAutoreleasedReturnValue();
            lStack_428 = lVar15;
            func_0x00010c08fa60();
            if (lVar15 != 0) {
              puStack_420 = (undefined *)0x0;
              bVar1 = false;
              goto LAB_1058de084;
            }
            puVar8 = PTR_PTR_1126bfc98;
            func_0x00010be0b260();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = puStack_240[5];
            puStack_240[5] = puVar8;
            _objc_release(uVar13);
            func_0x00010c0e7120(puVar7);
            puStack_420 = (undefined *)0x0;
            lVar15 = 0;
          }
          _objc_release(lVar15);
          _objc_release(puStack_420);
          _objc_release(lStack_408);
          _objc_release(lVar16);
          _objc_release(lVar5);
          puStack_410 = puStack_410 + 1;
        } while (puVar6 != puStack_410);
        puVar6 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(param_9);
      _objc_release(param_5);
      _objc_release(param_7);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_298);
    }
    _objc_release(puVar2);
    _objc_release(lVar14);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_248,8);
    _objc_release(uStack_220);
    __Block_object_dispose(&uStack_218,8);
    __Block_object_dispose(&uStack_1f8,8);
    __Block_object_dispose(&uStack_1d8,8);
    __Block_object_dispose(&uStack_1b8,8);
    _objc_release(puStack_190);
  }
  else {
    lVar14 = param_3;
    func_0x00010bfc5240(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_9);
    _objc_release(lVar14);
  }
  _objc_destroyWeak(auStack_188);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_298);
  __Block_object_dispose(&uStack_248,8);
  __Block_object_dispose(&uStack_218,8);
  __Block_object_dispose(&uStack_1f8,8);
  __Block_object_dispose(&uStack_1d8,8);
  lVar14 = 8;
  __Block_object_dispose(&uStack_1b8);
  _objc_destroyWeak(auStack_188);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 1058de730; end: 1058de747;  */

void FUN_1058de730(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058de748; end: 1058de8e7;  */

void FUN_1058de748(long param_1)

{
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058de8e8; end: 1058dea4f;  */

void FUN_1058de8e8(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c28b680();
  puVar4 = PTR_PTR_1126b08b0;
  puVar2 = param_2;
  if (iVar1 == 1) {
    func_0x00010bf4db80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    _objc_release(puVar4);
LAB_1058de9d4:
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else if (iVar1 == 0) {
    func_0x00010c15ea20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cd80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    puVar3 = puVar4;
    goto LAB_1058de9d4;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + lVar5;
  if (*(int *)(param_1 + 0x60) == 5) {
    lVar6 = 0x48;
  }
  else {
    if (*(int *)(param_1 + 0x60) != 6) goto LAB_1058dea30;
    lVar6 = 0x50;
  }
  lVar6 = *(long *)(*(long *)(param_1 + lVar6) + 8);
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + lVar5;
LAB_1058dea30:
  func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058dea50; end: 1058deb6b;  */

void FUN_1058dea50(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 1058deb6c; end: 1058def47; -[SCSnapUploadWorkflowImpl _onUploadCompletionWithError:snapDoc:encryptionInfo:snapDocKey:updatedContentRefs:uploadedByteCount:baseMediaByteCount:overlayByteCount:promise:contentResultsToCleanup:] */

undefined **
FUN_1058deb6c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4,
             undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8,
             undefined8 param_9,undefined8 param_10,undefined **param_11,undefined **param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x26;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [128];
  long lStack_500;
  undefined1 *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined1 *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined1 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [128];
  long lStack_3d0;
  undefined1 *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_210 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_208 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuVar12 = apuStack_f0;
  ppuVar14 = param_12;
  func_0x00010bf52a60(param_12,param_2,&uStack_1b0,ppuVar12,0x10);
  if (ppuVar14 != (undefined **)0x0) {
    param_6 = (undefined **)*puStack_1a0;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != param_6) {
          _objc_enumerationMutation(param_12);
        }
        func_0x00010bfb7400(*(undefined8 *)(lStack_1a8 + (long)ppuVar12 * 8));
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar14 != ppuVar12);
      ppuVar12 = apuStack_f0;
      ppuVar14 = param_12;
      func_0x00010bf52a60(param_12,param_2,&uStack_1b0,ppuVar12,0x10);
      unaff_x26 = (undefined **)0x0;
    } while (ppuVar14 != (undefined **)0x0);
  }
  if (param_3 == (undefined **)0x0) {
    unaff_x26 = (undefined **)param_1[1];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuStack_208;
    ppuVar12 = ppuStack_208;
    func_0x00010c0c46a0();
    ppuStack_1b8 = (undefined **)0x0;
    param_1 = unaff_x26;
    func_0x00010bf3d940(unaff_x26,param_2,param_4,ppuVar12,param_7,&ppuStack_1b8);
    _objc_retainAutoreleasedReturnValue();
    param_6 = ppuStack_1b8;
    _objc_retain(ppuStack_1b8);
    _objc_release(unaff_x26);
    puVar1 = PTR_PTR_1126bfc98;
    if (param_6 == (undefined **)0x0) {
      ppuStack_220 = param_6;
      ppuVar12 = param_7;
      func_0x00010bf002e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_218 = param_1;
      func_0x00010bebca20();
      _objc_release(ppuVar12);
      if ((int)puVar1 == 0) {
        if (param_5 != (undefined **)0x0) {
          uStack_238 = param_9;
          uStack_230 = param_10;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          ppuVar12 = ppuStack_218;
          puStack_228 = param_4;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar12;
          func_0x00010c0ff660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          ppuVar12 = ppuVar14;
          func_0x00010bf52a60(ppuVar14,param_2,&uStack_200,auStack_170,0x10);
          if (ppuVar12 != (undefined **)0x0) {
            lVar16 = *plStack_1f0;
            do {
              ppuVar13 = (undefined **)0x0;
              do {
                if (*plStack_1f0 != lVar16) {
                  _objc_enumerationMutation(ppuVar14);
                }
                uVar15 = *(undefined8 *)(lStack_1f8 + (long)ppuVar13 * 8);
                uVar2 = uVar15;
                func_0x00010c08c3a0();
                if ((int)uVar2 == 1) {
                  func_0x00010c0c3fe0(uVar15);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c195ca0();
                  _objc_release(uVar15);
                }
                ppuVar13 = (undefined **)((long)ppuVar13 + 1);
              } while (ppuVar12 != ppuVar13);
              ppuVar12 = ppuVar14;
              func_0x00010bf52a60(ppuVar14,param_2,&uStack_200,auStack_170,0x10);
            } while (ppuVar12 != (undefined **)0x0);
          }
          _objc_release(ppuVar14);
          ppuVar14 = ppuStack_208;
          param_4 = puStack_228;
        }
        param_1 = ppuStack_218;
        unaff_x26 = (undefined **)PTR_PTR_1126bfca0;
        _objc_alloc();
        ppuVar12 = ppuStack_210;
        func_0x00010c0475a0();
        ppuVar13 = unaff_x26;
        func_0x00010bf43d60(param_11);
        _objc_release(unaff_x26);
        param_6 = ppuStack_220;
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110e0aa38;
        unaff_x26 = (undefined **)PTR_PTR_1126bfc98;
        func_0x00010be0b260(PTR_PTR_1126bfc98,param_2,3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = unaff_x26;
        func_0x00010bf43ca0(param_11);
        _objc_release(unaff_x26);
        param_6 = ppuStack_220;
        param_1 = ppuStack_218;
      }
    }
    else {
      ppuVar13 = param_6;
      func_0x00010bf43ca0(param_11);
    }
    _objc_release(param_1);
    _objc_release(param_6);
  }
  else {
    ppuVar13 = param_3;
    func_0x00010bf43ca0(param_11);
    ppuVar14 = ppuStack_208;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(ppuVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_360;
  ppuStack_288 = param_12;
  ppuStack_280 = param_11;
  pcStack_248 = FUN_1058def48;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_290 = unaff_x26;
  ppuStack_278 = param_7;
  ppuStack_270 = ppuVar14;
  ppuStack_268 = param_5;
  ppuStack_260 = param_6;
  ppuStack_258 = param_3;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar13);
  lStack_358 = 0;
  puStack_360 = (undefined *)0x0;
  uStack_348 = 0;
  puStack_350 = (undefined8 *)0x0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_318;
  ppuVar14 = ppuVar12;
  func_0x00010bf52a60();
  if (ppuVar14 != (undefined **)0x0) {
    param_11 = (undefined **)*puStack_350;
    param_5 = ppuVar14;
    do {
      param_12 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_350 != param_11) {
          _objc_enumerationMutation(ppuVar12);
        }
        ppuVar14 = *(undefined ***)(lStack_358 + (long)param_12 * 8);
        param_7 = ppuVar14;
        func_0x00010c0c55e0();
        ppuVar4 = ppuVar13;
        func_0x00010c0c55e0();
        if (param_7 == ppuVar4) {
          _objc_retain(ppuVar14);
          goto LAB_1058df03c;
        }
        param_12 = (undefined **)((long)param_12 + 1);
      } while (param_5 != param_12);
      puVar5 = auStack_318;
      param_5 = ppuVar12;
      ppuVar3 = &puStack_360;
      func_0x00010bf52a60();
    } while (param_5 != (undefined **)0x0);
  }
  ppuVar14 = (undefined **)0x0;
LAB_1058df03c:
  _objc_release(ppuVar12);
  _objc_release(ppuVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    puVar9 = &uStack_490;
    pcStack_368 = FUN_1058df088;
    lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_3c0 = param_4;
    ppuStack_3b8 = param_1;
    ppuStack_3b0 = unaff_x26;
    ppuStack_3a8 = param_12;
    ppuStack_3a0 = param_11;
    ppuStack_398 = param_7;
    ppuStack_390 = ppuVar14;
    ppuStack_388 = param_5;
    ppuStack_380 = ppuVar12;
    ppuStack_378 = ppuVar13;
    ppuStack_370 = &puStack_250;
    _objc_retain(ppuVar3);
    lStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    puStack_480 = (undefined8 *)0x0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = auStack_450;
    puVar7 = puVar6;
    func_0x00010bf52a60();
    ppuVar12 = (undefined **)0x0;
    if (puVar7 != (undefined1 *)0x0) {
      param_1 = (undefined **)*puStack_480;
      do {
        param_4 = (undefined1 *)0x0;
        do {
          if ((undefined **)*puStack_480 != param_1) {
            _objc_enumerationMutation(puVar6);
          }
          ppuVar14 = *(undefined ***)(lStack_488 + (long)param_4 * 8);
          ppuVar12 = ppuVar14;
          func_0x00010c08c3a0();
          if ((int)ppuVar12 == 1) {
            param_7 = ppuVar14;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            param_11 = param_7;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            param_12 = param_11;
            func_0x00010c0c55e0();
            unaff_x26 = ppuVar3;
            func_0x00010c0c55e0();
            _objc_release(param_11);
            _objc_release(param_7);
            if (param_12 == unaff_x26) {
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar14;
              func_0x00010c0c4bc0();
              _objc_release(ppuVar14);
              goto LAB_1058df1f8;
            }
          }
          param_4 = param_4 + 1;
        } while (puVar7 != param_4);
        puVar5 = auStack_450;
        puVar7 = puVar6;
        puVar9 = &uStack_490;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
      ppuVar12 = (undefined **)0x0;
    }
LAB_1058df1f8:
    _objc_release(puVar6);
    ppuVar13 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
      return ppuVar12;
    }
    ___stack_chk_fail();
    pcStack_498 = FUN_1058df248;
    lStack_500 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_4f0 = param_4;
    ppuStack_4e8 = param_1;
    ppuStack_4e0 = unaff_x26;
    ppuStack_4d8 = param_12;
    ppuStack_4d0 = param_11;
    ppuStack_4c8 = param_7;
    ppuStack_4c0 = ppuVar14;
    ppuStack_4b8 = ppuVar12;
    puStack_4b0 = puVar6;
    ppuStack_4a8 = ppuVar3;
    pppuStack_4a0 = &ppuStack_370;
    _objc_retain(puVar9);
    _objc_retain(puVar5);
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    plStack_5b0 = (long *)0x0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    _objc_retain(puVar5);
    puVar10 = &uStack_5c0;
    puVar6 = auStack_580;
    puVar7 = puVar5;
    func_0x00010bf52a60(puVar5,param_2,puVar10,puVar6,0x10);
    if (puVar7 != (undefined1 *)0x0) {
      lVar16 = *plStack_5b0;
      do {
        puVar11 = (undefined1 *)0x0;
        do {
          if (*plStack_5b0 != lVar16) {
            _objc_enumerationMutation(puVar5);
          }
          puVar10 = *(undefined8 **)(lStack_5b8 + (long)puVar11 * 8);
          ppuVar12 = ppuVar13;
          puVar6 = (undefined1 *)puVar9;
          func_0x00010be16b00(ppuVar13,param_2,puVar10,puVar9);
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar12 != (undefined **)0x0) {
            ppuVar14 = ppuVar12;
            func_0x00010c09d7e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar14;
            func_0x00010c08fa60();
            if (ppuVar3 != (undefined **)0x0) {
              ppuVar3 = ppuVar12;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar3;
              func_0x00010c08fa60();
              if (ppuVar4 == (undefined **)0x0) {
                ppuVar4 = ppuVar12;
                func_0x00010bf4cce0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar8 = ppuVar4;
                func_0x00010c08fa60();
                _objc_release(ppuVar4);
                _objc_release(ppuVar3);
                _objc_release(ppuVar14);
                if (ppuVar8 != (undefined **)0x0) goto LAB_1058df3ac;
                _objc_release(ppuVar12);
                ppuVar12 = (undefined **)0x1;
                goto LAB_1058df3f0;
              }
              _objc_release(ppuVar3);
            }
            _objc_release(ppuVar14);
          }
LAB_1058df3ac:
          _objc_release(ppuVar12);
          puVar11 = puVar11 + 1;
        } while (puVar7 != puVar11);
        puVar10 = &uStack_5c0;
        puVar6 = auStack_580;
        puVar7 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,puVar10,puVar6,0x10);
      } while (puVar7 != (undefined1 *)0x0);
    }
    ppuVar12 = (undefined **)0x0;
LAB_1058df3f0:
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_500) {
      return ppuVar12;
    }
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126bfcb0;
    ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_retain(puVar6);
    func_0x00010bf98a40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(ppuVar14,param_2,puVar1,puVar6,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar14);
  return ppuVar14;
}



/* Entry: 1058def48; end: 1058df087; +[SCSnapUploadWorkflowImpl _findMediaReferenceForMediaId:snapDoc:] */

undefined *
FUN_1058def48(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar13;
  undefined1 *unaff_x28;
  undefined8 uStack_380;
  long lStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [128];
  long lStack_2c0;
  undefined1 *puStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_d8;
  puVar11 = param_4;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x24 = (undefined *)*puStack_110;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_4);
        }
        puVar12 = *(undefined **)(lStack_118 + (long)unaff_x25 * 8);
        unaff_x23 = puVar12;
        func_0x00010c0c55e0();
        puVar1 = param_3;
        func_0x00010c0c55e0();
        if (unaff_x23 == puVar1) {
          _objc_retain(puVar12);
          goto LAB_1058df03c;
        }
        unaff_x25 = unaff_x25 + 1;
      } while (puVar11 != unaff_x25);
      puVar2 = auStack_d8;
      puVar11 = param_4;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  puVar12 = (undefined *)0x0;
LAB_1058df03c:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar8 = &uStack_250;
    pcStack_128 = FUN_1058df088;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = auStack_210;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    puVar11 = (undefined *)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      unaff_x27 = *plStack_240;
      do {
        unaff_x28 = (undefined1 *)0x0;
        do {
          if (*plStack_240 != unaff_x27) {
            _objc_enumerationMutation(puVar3);
          }
          puVar12 = *(undefined **)(lStack_248 + (long)unaff_x28 * 8);
          puVar11 = puVar12;
          func_0x00010c08c3a0();
          if ((int)puVar11 == 1) {
            unaff_x23 = puVar12;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c0c55e0();
            unaff_x26 = (undefined *)puVar9;
            func_0x00010c0c55e0();
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            if (unaff_x25 == unaff_x26) {
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar12;
              func_0x00010c0c4bc0();
              _objc_release(puVar12);
              goto LAB_1058df1f8;
            }
          }
          unaff_x28 = unaff_x28 + 1;
        } while (puVar4 != unaff_x28);
        puVar2 = auStack_210;
        puVar4 = puVar3;
        puVar8 = &uStack_250;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
      puVar11 = (undefined *)0x0;
    }
LAB_1058df1f8:
    _objc_release(puVar3);
    puVar1 = (undefined *)puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
      return puVar11;
    }
    ___stack_chk_fail();
    pcStack_258 = FUN_1058df248;
    lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_2b0 = unaff_x28;
    lStack_2a8 = unaff_x27;
    puStack_2a0 = unaff_x26;
    puStack_298 = unaff_x25;
    puStack_290 = unaff_x24;
    puStack_288 = unaff_x23;
    puStack_280 = puVar12;
    puStack_278 = puVar11;
    puStack_270 = puVar3;
    puStack_268 = (undefined *)puVar9;
    ppuStack_260 = &puStack_130;
    _objc_retain(puVar8);
    _objc_retain(puVar2);
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    _objc_retain(puVar2);
    puVar9 = &uStack_380;
    puVar3 = auStack_340;
    puVar4 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,puVar9,puVar3,0x10);
    if (puVar4 != (undefined1 *)0x0) {
      lVar13 = *plStack_370;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_370 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          puVar9 = *(undefined8 **)(lStack_378 + (long)puVar10 * 8);
          puVar11 = puVar1;
          puVar3 = (undefined1 *)puVar8;
          func_0x00010be16b00(puVar1,param_2,puVar9,puVar8);
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            puVar12 = puVar11;
            func_0x00010c09d7e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar12;
            func_0x00010c08fa60();
            if (puVar5 != (undefined *)0x0) {
              puVar5 = puVar11;
              func_0x00010bdc2b80();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010c08fa60();
              if (puVar6 == (undefined *)0x0) {
                puVar6 = puVar11;
                func_0x00010bf4cce0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c08fa60();
                _objc_release(puVar6);
                _objc_release(puVar5);
                _objc_release(puVar12);
                if (puVar7 != (undefined *)0x0) goto LAB_1058df3ac;
                _objc_release(puVar11);
                puVar11 = (undefined *)0x1;
                goto LAB_1058df3f0;
              }
              _objc_release(puVar5);
            }
            _objc_release(puVar12);
          }
LAB_1058df3ac:
          _objc_release(puVar11);
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar9 = &uStack_380;
        puVar3 = auStack_340;
        puVar4 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,puVar9,puVar3,0x10);
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar11 = (undefined *)0x0;
LAB_1058df3f0:
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c0) {
      return puVar11;
    }
    ___stack_chk_fail();
    puVar11 = PTR_PTR_1126bfcb0;
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_retain(puVar3);
    func_0x00010bf98a40(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar12,param_2,puVar11,puVar3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 1058df088; end: 1058df247; +[SCSnapUploadWorkflowImpl _videoDurationMsForMediaId:snapDoc:] */

undefined * FUN_1058df088(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar14;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
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
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar10 = auStack_f0;
  lVar1 = lVar14;
  func_0x00010bf52a60();
  puVar13 = (undefined *)0x0;
  if (lVar1 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar14);
        }
        unaff_x22 = *(undefined **)(lStack_128 + unaff_x28 * 8);
        puVar13 = unaff_x22;
        func_0x00010c08c3a0();
        if ((int)puVar13 == 1) {
          unaff_x23 = unaff_x22;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c0c55e0();
          unaff_x26 = param_3;
          func_0x00010c0c55e0();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          if (unaff_x25 == unaff_x26) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = unaff_x22;
            func_0x00010c0c4bc0();
            _objc_release(unaff_x22);
            goto LAB_1058df1f8;
          }
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar1 != unaff_x28);
      puVar10 = auStack_f0;
      lVar1 = lVar14;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar13 = (undefined *)0x0;
  }
LAB_1058df1f8:
  _objc_release(lVar14);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar13;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1058df248;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = puVar13;
  lStack_150 = lVar14;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(puVar10);
  puVar9 = &uStack_260;
  puVar11 = auStack_220;
  puVar3 = puVar10;
  func_0x00010bf52a60(puVar10,param_2,puVar9,puVar11,0x10);
  if (puVar3 != (undefined1 *)0x0) {
    lVar14 = *plStack_250;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(puVar10);
        }
        puVar9 = *(undefined8 **)(lStack_258 + (long)puVar12 * 8);
        puVar13 = puVar2;
        puVar11 = (undefined1 *)puVar8;
        func_0x00010be16b00(puVar2,param_2,puVar9,puVar8);
        _objc_retainAutoreleasedReturnValue();
        if (puVar13 != (undefined *)0x0) {
          puVar4 = puVar13;
          func_0x00010c09d7e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c08fa60();
          if (puVar5 != (undefined *)0x0) {
            puVar5 = puVar13;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c08fa60();
            if (puVar6 == (undefined *)0x0) {
              puVar6 = puVar13;
              func_0x00010bf4cce0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010c08fa60();
              _objc_release(puVar6);
              _objc_release(puVar5);
              _objc_release(puVar4);
              if (puVar7 != (undefined *)0x0) goto LAB_1058df3ac;
              _objc_release(puVar13);
              puVar13 = (undefined *)0x1;
              goto LAB_1058df3f0;
            }
            _objc_release(puVar5);
          }
          _objc_release(puVar4);
        }
LAB_1058df3ac:
        _objc_release(puVar13);
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      puVar9 = &uStack_260;
      puVar11 = auStack_220;
      puVar3 = puVar10;
      func_0x00010bf52a60(puVar10,param_2,puVar9,puVar11,0x10);
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar13 = (undefined *)0x0;
LAB_1058df3f0:
  _objc_release(puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126bfcb0;
  puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(puVar11);
  func_0x00010bf98a40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar13,param_2,puVar2,puVar11,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 1058df248; end: 1058df447; +[SCSnapUploadWorkflowImpl _snapDocHasUnresolvedLocalMediaReferences:mediaIds:] */

undefined * FUN_1058df248(long param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar8 = &uStack_130;
  puVar9 = auStack_f0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,puVar8,puVar9,0x10);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_4);
        }
        puVar8 = *(undefined8 **)(lStack_128 + lVar10 * 8);
        lVar2 = param_1;
        puVar9 = param_3;
        func_0x00010be16b00(param_1,param_2,puVar8,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar3 = lVar2;
          func_0x00010c09d7e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c08fa60();
          if (lVar4 != 0) {
            lVar4 = lVar2;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c08fa60();
            if (lVar5 == 0) {
              lVar5 = lVar2;
              func_0x00010bf4cce0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c08fa60();
              _objc_release(lVar5);
              _objc_release(lVar4);
              _objc_release(lVar3);
              if (lVar6 != 0) goto LAB_1058df3ac;
              _objc_release(lVar2);
              puVar11 = (undefined *)0x1;
              goto LAB_1058df3f0;
            }
            _objc_release(lVar4);
          }
          _objc_release(lVar3);
        }
LAB_1058df3ac:
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar8 = &uStack_130;
      puVar9 = auStack_f0;
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,puVar8,puVar9,0x10);
    } while (lVar1 != 0);
  }
  puVar11 = (undefined *)0x0;
LAB_1058df3f0:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126bfcb0;
  puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(puVar9);
  func_0x00010bf98a40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar11,param_2,puVar7,puVar9,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 1058df448; end: 1058df4cf; +[SCSnapUploadWorkflowImpl _errorWithCode:description:] */

void FUN_1058df448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bfcb0;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  func_0x00010bf98a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar2,param_2,puVar1,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058df4d0; end: 1058df50b; -[SCSnapUploadWorkflowImpl .cxx_destruct] */

void FUN_1058df4d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058df50c; end: 1058df577;  */

void FUN_1058df50c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bebd440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1058df578; end: 1058df66f; -[SCSnapUploadWorkflowServiceProvider _snapUploadWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058df578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bfc98;
  _objc_alloc(PTR_PTR_1126bfc98);
  lVar2 = param_1 + _DAT_11272bd88;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272bd8c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272bd90;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef560(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058df670; end: 1058df6bf; -[SCSnapUploadWorkflowServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058df670(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bd90);
  _objc_destroyWeak(param_1 + _DAT_11272bd8c);
  _objc_destroyWeak(param_1 + _DAT_11272bd88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bd94);
  return;
}



/* Entry: 1058df6c0; end: 1058df73b; -[SCMetadataCacheObject initWithItem:] */

undefined1 * FUN_1058df6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eac60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    func_0x00010c285b00(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058df73c; end: 1058df777; -[SCMetadataCacheObject updateExpiration] */

void FUN_1058df73c(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010028941c();
  dVar1 = param_1;
  func_0x00010c27d100(*(undefined8 *)(param_2 + 0x10));
  *(double *)(param_2 + 8) = param_1 + dVar1;
  return;
}



/* Entry: 1058df778; end: 1058df7bb; -[SCMetadataCacheObject isExpired] */

bool FUN_1058df778(double param_1,long param_2)

{
  bool bVar1;
  
  func_0x00010c27d100(*(undefined8 *)(param_2 + 0x10));
  if (param_1 == 0.0) {
    bVar1 = false;
  }
  else {
    func_0x00010028941c();
    bVar1 = *(double *)(param_2 + 8) < param_1;
  }
  return bVar1;
}



/* Entry: 1058df7bc; end: 1058df7c3; -[SCMetadataCacheObject cacheItem] */

undefined8 FUN_1058df7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1058df7c4; end: 1058df7f3; -[SCMetadataCacheObject setCacheItem:] */

void FUN_1058df7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058df7f4; end: 1058df7ff; -[SCMetadataCacheObject .cxx_destruct] */

void FUN_1058df7f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1058df800; end: 1058df893; -[SCMetadataCacheServiceImpl initWithGrapheneServices:] */

undefined1 * FUN_1058df800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eac68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058df894; end: 1058df897; -[SCMetadataCacheServiceImpl objectForKeyedSubscript:] */

void FUN_1058df894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 1058df898; end: 1058df89b; -[SCMetadataCacheServiceImpl setObject:forKeyedSubscript:] */

void FUN_1058df898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 1058df89c; end: 1058df943; -[SCMetadataCacheServiceImpl objectForKey:] */

void FUN_1058df89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c072440();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010bf26780(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285b00(uVar1);
  }
  else {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,param_3);
    uVar2 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058df944; end: 1058df9e3; -[SCMetadataCacheServiceImpl setObject:forKey:] */

void FUN_1058df944(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,0,param_4);
  }
  else {
    puVar1 = PTR_PTR_1126bfcc0;
    _objc_alloc(PTR_PTR_1126bfcc0);
    func_0x00010c01fc40();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_4);
    _objc_release(puVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058df9e4; end: 1058dff2b; -[SCMetadataCacheServiceImpl collectAndFireGrapheneMetric] */

void FUN_1058df9e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bddf720();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cc1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar18 * 8);
      func_0x00010bf26780();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfa2d80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar7);
      if (puVar8 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bfa2d80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar7);
        _objc_release(puVar8);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = uVar6;
      func_0x00010bfa2d80();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bfa28e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      func_0x00010c23d0a0(uVar6);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bfa2d80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar6;
      func_0x00010bfa28e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar12);
      _objc_release(uVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(puVar19);
      _objc_release(uVar7);
      _objc_release(uVar6);
      lVar18 = lVar18 + 1;
    } while (lVar2 != lVar18);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_retain(puVar4);
  puVar8 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      puVar12 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar12;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar12);
          }
          puVar14 = PTR_PTR_1126bfcc8;
          func_0x00010c0ca240();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c2ac460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          puVar14 = puVar15;
          func_0x00010c2ac460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar15);
          puVar15 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          func_0x00010bef9180(lVar3);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          puVar20 = puVar20 + 1;
        } while (puVar10 != puVar20);
        puVar10 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar8);
    puVar8 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(lVar3 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(lVar3 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar3 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c072440();
      if ((int)uVar7 != 0) {
        func_0x00010befa120(puVar4);
      }
      _objc_release(uVar6);
      lVar18 = lVar18 + 1;
    } while (lVar2 != lVar18);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_retain(puVar4);
  puVar8 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010c1d0640(*(undefined8 *)(lVar3 + 8));
      puVar19 = puVar19 + 1;
    } while (puVar8 != puVar19);
    puVar8 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _os_unfair_lock_unlock(lVar3 + 0x10);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 8,0);
  return;
}



/* Entry: 1058dff2c; end: 1058e012b; -[SCMetadataCacheServiceImpl _cleanupExpiredItems] */

void FUN_1058dff2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c072440();
      if ((int)uVar6 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(uVar5);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_retain(puVar2);
  puVar7 = puVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar2);
      }
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
      puVar9 = puVar9 + 1;
    } while (puVar7 != puVar9);
    puVar7 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 1058e012c; end: 1058e015b; -[SCMetadataCacheServiceImpl .cxx_destruct] */

void FUN_1058e012c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e015c; end: 1058e01c7; -[SCUserMetadataCacheServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1058e015c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eac70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272bdac);
    *(undefined **)((long)puVar1 + (long)_DAT_11272bdac) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058e01c8; end: 1058e0363; -[SCUserMetadataCacheServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e01c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126bfcd0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272bdb0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0188e0();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272bdb4);
  *(undefined **)(param_1 + _DAT_11272bdb4) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126bfcd8;
  _objc_alloc(PTR_PTR_1126bfcd8);
  func_0x00010c02bb20();
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11272bdb8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058e0364; end: 1058e039f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e0364(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf3fba0(*(undefined8 *)(param_1 + _DAT_11272bdb4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058e03a0; end: 1058e0403; -[SCUserMetadataCacheServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e03a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bdb0);
  _objc_destroyWeak(param_1 + _DAT_11272bdb8);
  _objc_destroyWeak(param_1 + _DAT_11272bdbc);
  _objc_storeStrong(param_1 + _DAT_11272bdb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272bdac,0);
  return;
}



/* Entry: 1058e0404; end: 1058e042f; +[SCGrapheneMetadataCacheMetric memoryUsage] */

void FUN_1058e0404(void)

{
  _objc_alloc(PTR_PTR_1126bfcc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058e0430; end: 1058e04cf; -[SCGrapheneMetadataCacheMetric description] */

void FUN_1058e0430(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0aa78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e0aa78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126eac78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1058e04d0; end: 1058e0613; -[SCGrapheneRegistry metadataCacheGraphene] */

void FUN_1058e04d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1058e0558;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0f28 != -1) {
    func_0x00010002a2fc(0x1136c0f28,&puStack_48);
  }
  uVar1 = uRam00000001136c0f20;
  _objc_retain(uRam00000001136c0f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058e0614; end: 1058e073f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e0614(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bfce0;
    _objc_alloc(PTR_PTR_1126bfce0);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar1 + _DAT_11272bdc4;
      _objc_loadWeakRetained(lVar6);
    }
    lVar2 = lVar6;
    func_0x00010c2918c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar3 + _DAT_11272bdcc;
      _objc_loadWeakRetained(lVar7);
    }
    lVar4 = lVar7;
    func_0x00010bf5aea0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ec0(puVar5,param_2,lVar2,lVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058e0740; end: 1058e085f;  */

void FUN_1058e0740(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    FUN_1058e0860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dc680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0d8ca0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126bfce8;
    _objc_alloc(PTR_PTR_1126bfce8);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    FUN_1058e0860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030120(puVar6,param_2,lVar5,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058e0860; end: 1058e0883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e0860(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272bdc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058e0884; end: 1058e0933;  */

void FUN_1058e0884(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bfcf0;
    _objc_alloc(PTR_PTR_1126bfcf0);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    FUN_1058e0860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa2b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02cd60(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058e0934; end: 1058e098f; -[SCMusicFavoritesComposerImplementationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e0934(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bdd0);
  _objc_destroyWeak(param_1 + _DAT_11272bdcc);
  _objc_destroyWeak(param_1 + _DAT_11272bdc8);
  _objc_destroyWeak(param_1 + _DAT_11272bdc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bdc0);
  return;
}



/* Entry: 1058e0990; end: 1058e0c2f; -[SCMusicComposerFavoritesService _parseTracksFromItemsGroups:] */

undefined1 * FUN_1058e0990(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  long unaff_x22;
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  puStack_200 = puVar3;
  _objc_retain(param_3);
  puVar10 = &uStack_1b0;
  puVar11 = auStack_f0;
  uVar12 = 0x10;
  lStack_220 = param_3;
  func_0x00010bf52a60();
  lStack_210 = param_3;
  if (param_3 != 0) {
    lStack_218 = *plStack_1a0;
    lStack_210 = param_3;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_1a0 != lStack_218) {
          _objc_enumerationMutation(lStack_220);
        }
        unaff_x22 = *(long *)(lStack_1a8 + unaff_x20 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_208 = unaff_x20;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = unaff_x22;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          unaff_x21 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != unaff_x21) {
                _objc_enumerationMutation(unaff_x22);
              }
              uVar5 = *(ulong *)(lStack_1e8 + lVar13 * 8);
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126bfd00;
              _objc_opt_class(PTR_PTR_1126bfd00);
              uVar6 = uVar5;
              _objc_opt_isKindOfClass(uVar5,puVar3);
              uVar1 = uVar5;
              if ((uVar6 & 1) == 0) {
                uVar1 = 0;
              }
              _objc_retain(uVar1);
              _objc_release(uVar5);
              puVar3 = PTR_PTR_1126bfa50;
              if (uVar1 != 0) {
                func_0x00010c1190e0(uVar5);
                _objc_retainAutoreleasedReturnValue();
                lStack_1f8 = 0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = lStack_1f8;
                _objc_release(uVar5);
                if (puVar3 != (undefined *)0x0 && lVar2 == 0) {
                  puVar7 = puVar3;
                  func_0x0001084203fc(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puStack_200);
                  _objc_release(puVar7);
                }
                _objc_release(puVar3);
              }
              _objc_release(uVar1);
              lVar13 = lVar13 + 1;
            } while (lVar4 != lVar13);
            lVar4 = unaff_x22;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(unaff_x22);
        unaff_x20 = lStack_208 + 1;
      } while (unaff_x20 != lStack_210);
      puVar10 = &uStack_1b0;
      puVar11 = auStack_f0;
      uVar12 = 0x10;
      lVar4 = lStack_220;
      func_0x00010bf52a60();
      lStack_210 = lVar4;
    } while (lVar4 != 0);
  }
  lVar4 = lStack_220;
  _objc_release(lStack_220);
  lVar13 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_200);
    return puStack_200;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_260;
  lStack_238 = lVar4;
  pcStack_228 = FUN_1058e0c30;
  lStack_250 = unaff_x22;
  lStack_248 = unaff_x21;
  lStack_240 = unaff_x20;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  puStack_258 = PTR_PTR_1126eac80;
  lStack_260 = lVar13;
  _objc_msgSendSuper2(&lStack_260,PTR_s_init_1125d9248);
  if (plVar8 != (long *)0x0) {
    _objc_retain(puVar10);
    uVar9 = *(undefined8 *)((long)plVar8 + 8);
    *(undefined8 **)((long)plVar8 + 8) = puVar10;
    _objc_release(uVar9);
    _objc_retain(puVar11);
    uVar9 = *(undefined8 *)((long)plVar8 + 0x10);
    *(undefined1 **)((long)plVar8 + 0x10) = puVar11;
    _objc_release(uVar9);
    _objc_retain(uVar12);
    uVar9 = *(undefined8 *)((long)plVar8 + 0x18);
    *(undefined8 *)((long)plVar8 + 0x18) = uVar12;
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)plVar8 + 0x20);
    *(undefined **)((long)plVar8 + 0x20) = puVar3;
    _objc_release(uVar9);
  }
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return (undefined1 *)plVar8;
}



/* Entry: 1058e0c30; end: 1058e0d2b; -[SCMusicComposerFavoritesService initWithCtpUserDataFeedService:creativeToolsABProvider:userDataWrapper:] */

undefined1 *
FUN_1058e0c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eac80;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058e0d2c; end: 1058e0ee7; -[SCMusicComposerFavoritesService getFavoritesWithOnComplete:] */

void FUN_1058e0d2c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c291900();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa7ba0();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e0ee8;
      puStack_50 = &UNK_11084e3a0;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1058e0ee8; end: 1058e0fa7;  */

void FUN_1058e0ee8(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1,0);
  }
  else {
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,PTR____NSArray0__struct_11034ab48,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058e0fa8; end: 1058e10a3;  */

void FUN_1058e0fa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar3 = lVar1;
      func_0x00010be705e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,0);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar3 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar2);
      (**(code **)(lVar4 + 0x10))(lVar4,PTR____NSArray0__struct_11034ab48,puVar2);
      _objc_release(puVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e10a4; end: 1058e1283; -[SCMusicComposerFavoritesService getPagedFavoritesWithOnComplete:pageToken:] */

void FUN_1058e10a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c291920();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa7bc0();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e1284;
      puStack_50 = &UNK_1108bde20;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e1284; end: 1058e13ab;  */

void FUN_1058e1284(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bfd08;
    _objc_alloc_init(PTR_PTR_1126bfd08);
    uVar3 = param_2;
    func_0x00010c2791a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6420(puVar2);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010c0f1e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d87c0(puVar2);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    puVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e13ac; end: 1058e1503;  */

void FUN_1058e13ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uVar2 = param_2;
      func_0x00010c084fc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010be705e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126bfd08;
      _objc_alloc_init(PTR_PTR_1126bfd08);
      func_0x00010c1b6420();
      uVar2 = param_2;
      func_0x00010c0f1e20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d87c0(puVar4);
      _objc_release(uVar2);
      lVar7 = *(long *)(param_1 + 0x20);
      pcVar6 = *(code **)(lVar7 + 0x10);
      puVar5 = (undefined *)0x0;
      puVar8 = puVar4;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
      puVar5 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar3 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar5);
      pcVar6 = *(code **)(lVar7 + 0x10);
      puVar4 = (undefined *)0x0;
      puVar8 = puVar5;
    }
    (*pcVar6)(lVar7,puVar4,puVar5);
    _objc_release(puVar8);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e1504; end: 1058e170b; -[SCMusicComposerFavoritesService setFavoritedWithTrackId:favorited:onComplete:] */

void FUN_1058e1504(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar2 = param_3;
    func_0x00010af28d38(param_3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      puVar4 = PTR_PTR_1126be9e8;
      _objc_alloc(PTR_PTR_1126be9e8);
      func_0x00010841fab4(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b3c0(puVar4,param_2,uVar2,7,0);
      _objc_release(uVar2);
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010c269d40(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      if ((param_4 & 1) == 0) {
        func_0x00010c12c360();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bef81c0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      uStack_90 = 0x1058e17b0;
      puStack_88 = &UNK_110843510;
      _objc_retain(param_5);
      lStack_80 = param_5;
      func_0x00010c297260(lVar6,param_2,&puStack_a0,*(undefined8 *)(param_1 + 0x20));
      _objc_release(lStack_80);
    }
    else {
      puVar3 = *(undefined **)(param_1 + 0x18);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      if ((param_4 & 1) == 0) {
        func_0x00010c12ec80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010befc5e0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1058e170c;
      puStack_60 = &UNK_110843510;
      _objc_retain(param_5);
      lStack_58 = param_5;
      func_0x00010c297260(puVar4,param_2,&puStack_78,*(undefined8 *)(param_1 + 0x20));
      lVar6 = lStack_58;
    }
    _objc_release(lVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e170c; end: 1058e1853;  */

void FUN_1058e170c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  else {
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058e1854; end: 1058e1a2f; -[SCMusicComposerFavoritesService isFavoritedWithTrackId:completion:] */

void FUN_1058e1854(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010af28d38(param_3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      puVar4 = PTR_PTR_1126be9e8;
      _objc_alloc(PTR_PTR_1126be9e8);
      func_0x00010841fab4(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b3c0(puVar4,param_2,uVar2,7,0);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0726a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1058e1ae8;
      puStack_78 = &UNK_110881a90;
      _objc_retain(param_4);
      puStack_70 = param_4;
      func_0x00010c297260(uVar2,param_2,&puStack_90,*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(puStack_70);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c081640();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e1a30;
      puStack_50 = &UNK_110881a90;
      _objc_retain(param_4);
      puStack_48 = param_4;
      func_0x00010c297260(uVar2,param_2,&puStack_68,*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar2);
      _objc_release(uVar3);
      puVar4 = puStack_48;
    }
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e1a30; end: 1058e1ae7;  */

void FUN_1058e1a30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010bf1f3c0(param_2);
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,0);
  }
  else {
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058e1ae8; end: 1058e1bc3;  */

void FUN_1058e1ae8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf1f3c0(param_2);
    }
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2,0);
  }
  else {
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    lVar2 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,0,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e1bc4; end: 1058e1cf7; -[SCMusicComposerFavoritesService observable] */

void FUN_1058e1bc4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c291a20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      _objc_release(uVar6);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
    }
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1058e1cf8; end: 1058e1dd3;  */

void FUN_1058e1cf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfa1240(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bfd10;
  _objc_alloc(PTR_PTR_1126bfd10);
  func_0x00010af28d88(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054be0(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058e1dd4; end: 1058e1df3;  */

bool FUN_1058e1dd4(undefined8 param_1,long param_2)

{
  func_0x00010bf33240(param_2);
  return param_2 == 1;
}



/* Entry: 1058e1df4; end: 1058e1ecf;  */

void FUN_1058e1df4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfa1240(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bfd10;
  _objc_alloc(PTR_PTR_1126bfd10);
  func_0x00010af28d88(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054be0(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058e1ed0; end: 1058e1edb; -[SCMusicComposerFavoritesService pushToValdiMarshaller:] */

void FUN_1058e1ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 1058e1edc; end: 1058e1f0b; -[SCMusicComposerFavoritesService setObservable:] */

void FUN_1058e1edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e1f0c; end: 1058e1f5f; -[SCMusicComposerFavoritesService .cxx_destruct] */

void FUN_1058e1f0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e1f60; end: 1058e1fd3; -[SCMusicComposerFeatureSettings initWithMusicFeatureSettings:] */

undefined1 * FUN_1058e1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eac88;
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



/* Entry: 1058e1fd4; end: 1058e202f; -[SCMusicComposerFeatureSettings seenMusicPickerFavoritesTooltip] */

void FUN_1058e1fd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1579c0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058e2030; end: 1058e2067; -[SCMusicComposerFeatureSettings setHasSeenMusicPickerFavoritesTooltip] */

void FUN_1058e2030(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e2068; end: 1058e20c3; -[SCMusicComposerFeatureSettings seenMusicContextCardFavoritesTooltip] */

void FUN_1058e2068(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1579a0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058e20c4; end: 1058e20fb; -[SCMusicComposerFeatureSettings setHasSeenContextCardFavoritesTooltip] */

void FUN_1058e20c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e20fc; end: 1058e2107; -[SCMusicComposerFeatureSettings pushToValdiMarshaller:] */

void FUN_1058e20fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 1058e2108; end: 1058e2113; -[SCMusicComposerFeatureSettings .cxx_destruct] */

void FUN_1058e2108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e2114; end: 1058e21b7; -[SCMusicComposerNotificationPresenter initWithNotificationPresenter:experiments:] */

undefined1 *
FUN_1058e2114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eac90;
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



/* Entry: 1058e21b8; end: 1058e2403; -[SCMusicComposerNotificationPresenter submitFavoritesNotificationWithIsFavorited:albumArtMedia:] */

void FUN_1058e21b8(long param_1,undefined8 param_2,byte param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  byte bStack_68;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1200();
  _objc_release(uVar1);
  lVar3 = param_1;
  if ((int)uVar2 == 0) {
    if ((param_3 & 1) == 0) {
      func_0x00010be36920(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be368e0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010be36820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be367e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar4 = param_4;
  func_0x00010c28f340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar11 = (undefined *)0x0;
  if ((param_4 != 0) && (puVar5 != (undefined *)0x0)) {
    puVar11 = PTR_PTR_1126b3020;
    _objc_alloc(PTR_PTR_1126b3020);
    lVar4 = param_4;
    func_0x00010bf93e00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010bf93e00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059fe0(puVar11,param_2,puVar5,lVar6,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  puVar9 = PTR_PTR_1126bfd18;
  _objc_alloc();
  func_0x00010c03e040();
  puVar10 = puVar9;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1058e2404;
  puStack_80 = &UNK_11084d5f8;
  lStack_78 = param_1;
  puStack_70 = puVar9;
  bStack_68 = param_3;
  _objc_retain(puVar9);
  func_0x00010c0f7fc0(puVar10,param_2,&puStack_98);
  _objc_release(puVar10);
  _objc_release(puStack_70);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(lVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 1058e2404; end: 1058e241b;  */

void FUN_1058e2404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_submitFavoritesNotification_isFa_112675668,*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1058e241c; end: 1058e248f; -[SCMusicComposerNotificationPresenter cancelPendingNotifications] */

void FUN_1058e241c(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1058e2490; end: 1058e249b;  */

void FUN_1058e2490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_cancelNotifications_1125a93a0);
  return;
}



/* Entry: 1058e249c; end: 1058e249f; -[SCMusicComposerNotificationPresenter showLoadTrackErrorNotification] */

void FUN_1058e249c(void)

{
  return;
}



/* Entry: 1058e24a0; end: 1058e24ab; -[SCMusicComposerNotificationPresenter pushToValdiMarshaller:] */

void FUN_1058e24a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 1058e24ac; end: 1058e2527; -[SCMusicComposerNotificationPresenter _iconHeartFillImage] */

void FUN_1058e24ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14d,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058e2528; end: 1058e25a3; -[SCMusicComposerNotificationPresenter _iconHeartOutlineImage] */

void FUN_1058e2528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x14e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058e25a4; end: 1058e261f; -[SCMusicComposerNotificationPresenter _iconBookmarkFillImage] */

void FUN_1058e25a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x59,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058e2620; end: 1058e269b; -[SCMusicComposerNotificationPresenter _iconBookmarkOutlineImage] */

void FUN_1058e2620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x5a,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058e269c; end: 1058e26cb; -[SCMusicComposerNotificationPresenter .cxx_destruct] */

void FUN_1058e269c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e26cc; end: 1058e27b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e26cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126bfd20;
    _objc_alloc(PTR_PTR_1126bfd20);
    lVar2 = lVar1 + _DAT_11272bdf8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c2918c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_11272bdfc;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ec0(puVar6,param_2,lVar3,lVar5,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058e27b4; end: 1058e2803; -[SCMusicRecentsComposerServicesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058e27b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272be00);
  _objc_destroyWeak(param_1 + _DAT_11272bdfc);
  _objc_destroyWeak(param_1 + _DAT_11272bdf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bdf4);
  return;
}



/* Entry: 1058e2804; end: 1058e28ff; -[SCMusicComposerRecentsService initWithCtpUserDataFeedService:creativeToolsABProvider:userDataWrapper:] */

undefined1 *
FUN_1058e2804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eac98;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058e2900; end: 1058e2b9f; -[SCMusicComposerRecentsService _parseTracksFromItemsGroups:] */

void FUN_1058e2900(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  ulong uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
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
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  puStack_200 = puVar2;
  _objc_retain(param_3);
  puVar9 = &uStack_1b0;
  lStack_220 = param_3;
  func_0x00010bf52a60();
  lStack_210 = param_3;
  if (param_3 != 0) {
    lStack_218 = *plStack_1a0;
    lStack_210 = param_3;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_1a0 != lStack_218) {
          _objc_enumerationMutation(lStack_220);
        }
        unaff_x22 = *(long *)(lStack_1a8 + unaff_x20 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_208 = unaff_x20;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = unaff_x22;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          unaff_x21 = *plStack_1e0;
          unaff_x23 = lVar10;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != unaff_x21) {
                _objc_enumerationMutation(unaff_x22);
              }
              uVar3 = *(ulong *)(lStack_1e8 + lVar10 * 8);
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR_PTR_1126bfd00;
              _objc_opt_class(PTR_PTR_1126bfd00);
              uVar4 = uVar3;
              _objc_opt_isKindOfClass(uVar3,puVar2);
              unaff_x24 = uVar3;
              if ((uVar4 & 1) == 0) {
                unaff_x24 = 0;
              }
              _objc_retain(unaff_x24);
              _objc_release(uVar3);
              puVar2 = PTR_PTR_1126bfa50;
              if (unaff_x24 != 0) {
                func_0x00010c1190e0(uVar3);
                _objc_retainAutoreleasedReturnValue();
                lStack_1f8 = 0;
                func_0x00010c0f40e0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lStack_1f8;
                _objc_release(uVar3);
                if (puVar2 != (undefined *)0x0 && lVar6 == 0) {
                  puVar5 = puVar2;
                  func_0x0001084203fc(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puStack_200);
                  _objc_release(puVar5);
                }
                _objc_release(puVar2);
              }
              _objc_release(unaff_x24);
              lVar10 = lVar10 + 1;
            } while (unaff_x23 != lVar10);
            unaff_x23 = unaff_x22;
            func_0x00010bf52a60();
          } while (unaff_x23 != 0);
        }
        _objc_release(unaff_x22);
        unaff_x20 = lStack_208 + 1;
      } while (unaff_x20 != lStack_210);
      puVar9 = &uStack_1b0;
      lVar10 = lStack_220;
      func_0x00010bf52a60();
      lStack_210 = lVar10;
    } while (lVar10 != 0);
  }
  lVar10 = lStack_220;
  _objc_release(lStack_220);
  lVar6 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_200);
    return;
  }
  ___stack_chk_fail();
  lStack_238 = lVar10;
  pcStack_228 = FUN_1058e2ba0;
  uStack_260 = unaff_x24;
  lStack_258 = unaff_x23;
  lStack_250 = unaff_x22;
  lStack_248 = unaff_x21;
  lStack_240 = unaff_x20;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  if (puVar9 != (undefined8 *)0x0) {
    iVar1 = (int)*(undefined8 *)(lVar6 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_290,lVar6);
      uVar7 = *(undefined8 *)(lVar6 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c291900();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_298,auStack_290);
      _objc_retain(puVar9);
      func_0x00010c297260(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar9);
      _objc_destroyWeak(auStack_298);
      _objc_destroyWeak(auStack_290);
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x18);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfa7ba0();
      _objc_retainAutoreleasedReturnValue();
      puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_280 = 0xc2000000;
      pcStack_278 = FUN_1058e2d5c;
      puStack_270 = &UNK_11084e3a0;
      _objc_retain(puVar9);
      puStack_268 = puVar9;
      func_0x00010c297260(uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puStack_268);
    }
  }
  _objc_release(puVar9);
  return;
}



/* Entry: 1058e2ba0; end: 1058e2d5b; -[SCMusicComposerRecentsService getRecentsWithOnComplete:] */

void FUN_1058e2ba0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_70,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c291900();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_3);
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa7ba0();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058e2d5c;
      puStack_50 = &UNK_11084e3a0;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1058e2d5c; end: 1058e2e6f;  */

void FUN_1058e2d5c(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar3 = param_2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126bfd30;
      _objc_alloc(PTR_PTR_1126bfd30);
      func_0x00010c020480();
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    puVar1 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b2e0(puVar2);
    (**(code **)(lVar3 + 0x10))(lVar3,PTR____NSArray0__struct_11034ab48,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e2e70; end: 1058e2fb7;  */

void FUN_1058e2e70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010be705e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = lVar2;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        puVar4 = PTR_PTR_1126bfd30;
        _objc_alloc(PTR_PTR_1126bfd30);
        func_0x00010c020480();
        func_0x00010befa120(puVar3);
        _objc_release(puVar4);
      }
      lVar6 = *(long *)(param_1 + 0x20);
      pcVar5 = *(code **)(lVar6 + 0x10);
      puVar4 = (undefined *)0x0;
      puVar7 = puVar3;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      puVar4 = PTR_PTR_1126b3588;
      _objc_alloc(PTR_PTR_1126b3588);
      lVar2 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2e0(puVar4);
      pcVar5 = *(code **)(lVar6 + 0x10);
      puVar3 = PTR____NSArray0__struct_11034ab48;
      puVar7 = puVar4;
    }
    (*pcVar5)(lVar6,puVar3,puVar4);
    _objc_release(puVar7);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e2fb8; end: 1058e30c7; -[SCMusicComposerRecentsService setRecentlyUsedWithTrackId:] */

void FUN_1058e2fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010af28d38(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c0783a0();
  if (iVar1 == 0) {
    puVar2 = PTR_PTR_1126be9e8;
    _objc_alloc(PTR_PTR_1126be9e8);
    func_0x00010841fab4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b3c0(puVar2,param_2,param_3,7,0);
    _objc_release(param_3);
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef81c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010befc5e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c297260();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1058e30c8; end: 1058e30cf;  */

void FUN_1058e30c8(void)

{
  return;
}



/* Entry: 1058e30d0; end: 1058e3203; -[SCMusicComposerRecentsService updateObservable] */

void FUN_1058e30d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c0783a0();
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c291a20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      _objc_release(uVar6);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2880c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
    }
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar7 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1058e3204; end: 1058e320f;  */

undefined ** FUN_1058e3204(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ca8;
}



/* Entry: 1058e3210; end: 1058e322f;  */

bool FUN_1058e3210(undefined8 param_1,long param_2)

{
  func_0x00010bf33240(param_2);
  return param_2 == 2;
}



/* Entry: 1058e3230; end: 1058e323b;  */

undefined ** FUN_1058e3230(void)

{
  return &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1ca8;
}



/* Entry: 1058e323c; end: 1058e3247; -[SCMusicComposerRecentsService pushToValdiMarshaller:] */

void FUN_1058e323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010afa2320(param_3,param_1);
  func_0x00010afa2300();
  func_0x00010afa22f8();
  func_0x00010afa22ac();
  func_0x00010afa22c8();
  return;
}



/* Entry: 1058e3248; end: 1058e3277; -[SCMusicComposerRecentsService setUpdateObservable:] */

void FUN_1058e3248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e3278; end: 1058e32cb; -[SCMusicComposerRecentsService .cxx_destruct] */

void FUN_1058e3278(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


