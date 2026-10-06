/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd54a0c; end: 10bd54a5f;  */

void FUN_10bd54a0c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fe518 != -1) {
    func_0x000107c27d9c(0x1137fe518,&PTR___NSConcreteGlobalBlock_110d9f200);
  }
  uVar1 = uRam00000001137fe520;
  _objc_retain(uRam00000001137fe520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd54a60; end: 10bd54a8b;  */

void FUN_10bd54a60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001137fe520;
  puRam00000001137fe520 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd54a8c; end: 10bd54bc3;  */

void FUN_10bd54a8c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar1 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010c0f5800(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar2 = param_1;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  ppuVar3 = ppuVar1;
  if (ppuVar2 != (undefined **)0x0) {
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cde0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110dd69b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10bd54bc4; end: 10bd54ebb;  */

void FUN_10bd54bc4(long param_1,undefined **param_2,undefined1 param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc0000000;
  pcStack_108 = FUN_10bd54ebc;
  puStack_100 = &UNK_110d9f220;
  ppuVar2 = &puStack_118;
  uStack_f8 = param_3;
  _objc_retainBlock();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar5 == 0) {
      _objc_release(lVar4);
      ppuVar7 = ppuVar3;
      func_0x00010bf51e00();
      _objc_release(lVar4);
      _objc_release(ppuVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        _objc_retain(param_2);
        if (*(char *)(ppuVar2 + 4) == '\x01') {
          ppuVar2 = param_2;
          func_0x00010c25cfc0(param_2);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar2;
          func_0x00010c25cf40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
        }
        else {
          _objc_retain(param_2);
          ppuVar7 = param_2;
        }
        _objc_release(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      ppuVar6 = *(undefined ***)(lVar10 * 8);
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf529e0();
      if (ppuVar7 == (undefined **)0x2) {
        ppuVar7 = ppuVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c08fa60();
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar8 = ppuVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010c08fa60();
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
          if (ppuVar9 == (undefined **)0x0) goto LAB_10bd54e1c;
          ppuVar7 = ppuVar6;
          func_0x00010c0dfd40(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar2;
          (*(code *)ppuVar2[2])(ppuVar2,ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
          ppuVar7 = ppuVar8;
          if (param_4 != 0) {
            func_0x00010c0b5ac0(ppuVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar8);
          }
          ppuVar8 = ppuVar6;
          func_0x00010c0dfd40(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar2;
          param_2 = ppuVar8;
          (*(code *)ppuVar2[2])(ppuVar2,ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar3);
          _objc_release(ppuVar9);
          _objc_release(ppuVar8);
        }
        _objc_release(ppuVar7);
      }
LAB_10bd54e1c:
      _objc_release(ppuVar6);
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10bd54ebc; end: 10bd54f4f;  */

void FUN_10bd54ebc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = param_2;
    func_0x00010c25cfc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10bd54f50; end: 10bd552bf;  */

void FUN_10bd54f50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  func_0x00010c057bc0();
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar3);
    puVar4 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar3 = puVar4;
  func_0x00010bf529e0(puVar4);
  func_0x00010bf71fe0(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar9 = 0;
    lVar11 = *plStack_1a0;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + (long)puVar7 * 8);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4f60(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,puVar5,uVar10);
        _objc_release(uVar10);
        _objc_release(puVar5);
        lVar9 = lVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  lVar9 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar9 != 0) {
    lVar11 = *plStack_1e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        uVar10 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);
        lVar6 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11d4c0(puVar3,param_2,uVar10,lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        puVar7 = puVar2;
        func_0x00010c0e00e0(puVar2,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          func_0x00010befa120(puVar4,param_2,puVar3);
        }
        else {
          puVar5 = puVar7;
          func_0x00010c067fc0(puVar7);
          func_0x00010c1d04c0(puVar4,param_2,puVar3,puVar5);
        }
        _objc_release(puVar7);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(param_3);
  puVar7 = puVar4;
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  func_0x00010c1e6460(puVar1,param_2,puVar3);
  puVar3 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    lVar9 = param_3;
    func_0x00010c1504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6900(puVar1,param_2,lVar9);
    _objc_release(lVar9);
    lVar9 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9200(puVar1,param_2,lVar9);
    _objc_release(lVar9);
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(puVar1,param_2,param_3);
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd552c0; end: 10bd5538b;  */

void FUN_10bd552c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  uVar2 = param_1;
  func_0x00010c1504a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6900(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9200(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0f5800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10bd5538c; end: 10bd555a7;  */

void FUN_10bd5538c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lVar11 * 8);
        func_0x00010c25cda0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c25cda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(ppuVar4);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(uVar10);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    ppuVar9 = ppuVar4;
    func_0x00010c08fa60(ppuVar4);
    lVar11 = (long)ppuVar9 + -1;
    func_0x00010bf6b860(ppuVar4);
    ppuVar9 = ppuVar4;
    func_0x00010bf51e00();
    _objc_release(ppuVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(lVar11);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar9 = *(undefined ***)PTR__kCFAllocatorDefault_11034ab78;
      lVar1 = lVar11;
      func_0x00010bf64920(lVar11);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      lVar8 = lVar11;
      func_0x00010c08fa60(lVar11);
      _CFURLCreateWithBytes(ppuVar9,lVar2,lVar8,0x8000100,0);
      _objc_release(lVar1);
    }
    else {
      ppuVar9 = ppuVar4;
      func_0x00010c290fa0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc33e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21dd80(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010c0f5180(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3020(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d96e0(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010bfe4420(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc2f80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9200(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010c0f5800(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3040(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010c11d080(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6360(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010bfb6820(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc2f20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c25cda0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19efe0(ppuVar4);
      _objc_release(ppuVar7);
      _objc_release(puVar3);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar4;
      func_0x00010bdc2b80(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar4);
    _objc_release(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 10bd555a8; end: 10bd558e3;  */

void FUN_10bd555a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
    uVar4 = param_3;
    func_0x00010bf64920(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar6 = param_3;
    func_0x00010c08fa60(param_3);
    _CFURLCreateWithBytes(puVar7,uVar5,uVar6,0x8000100,0);
    _objc_release(uVar4);
  }
  else {
    puVar7 = puVar1;
    func_0x00010c290fa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc33e0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21dd80(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010c0f5180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3020(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d96e0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfe4420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc2f80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9200(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010c0f5800(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3040(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010c11d080(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6360(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bfb6820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc2f20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c25cda0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19efe0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10bd558e4; end: 10bd55cbf;  */

undefined *
FUN_10bd558e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar9;
  long unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  if (puVar8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
    puVar2 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
  puVar8 = puVar2;
  if (puVar7 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(puVar2);
        }
        puVar8 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x25 = puVar8;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010bf32ee0();
        _objc_release(unaff_x25);
        if (unaff_x26 == (undefined *)0x0) {
          _objc_retain(puVar8);
          _objc_release(puVar2);
          if (puVar8 == (undefined *)0x0) goto LAB_10bd55a88;
          func_0x00010c12d360(puVar2,param_2,puVar8);
          goto LAB_10bd55a80;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar7 != unaff_x28);
      puVar7 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      puVar8 = puVar2;
    } while (puVar7 != (undefined *)0x0);
  }
LAB_10bd55a80:
  _objc_release(puVar8);
LAB_10bd55a88:
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar8);
  puVar6 = puVar2;
  func_0x00010c1e6460(puVar1);
  puVar7 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_138 = 0x10bd55b3c;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = puVar8;
    puStack_168 = puVar7;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    uStack_150 = param_4;
    uStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar8 = puVar1;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf52a60();
    puVar7 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_250;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar9) {
            _objc_enumerationMutation(puVar8);
          }
          puVar7 = *(undefined **)(lStack_258 + (long)puVar10 * 8);
          puVar4 = puVar7;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf32ee0();
          _objc_release(puVar4);
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10bd55c68;
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar8;
        func_0x00010bf52a60(puVar8,param_2,&uStack_260,auStack_218,0x10);
      } while (puVar2 != (undefined *)0x0);
      puVar7 = (undefined *)0x0;
    }
LAB_10bd55c68:
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf4bb00();
      _objc_release(puVar1);
      _objc_release(puVar6);
      return puVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 10bd55cc0; end: 10bd55d23;  */

undefined8 FUN_10bd55cc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bb00();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bd55d24; end: 10bd55db3;  */

undefined8 FUN_10bd55d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf4bb00(uVar1,param_2,&PTR____CFConstantStringClassReference_11102ef18);
  if (((int)uVar2 == 0) ||
     (uVar2 = uVar1,
     func_0x00010bf4bb00(uVar1,param_2,&PTR____CFConstantStringClassReference_11102ef38),
     (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf4bb00(uVar1,param_2,&PTR____CFConstantStringClassReference_11102ef58);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10bd55db4; end: 10bd55e37;  */

ulong FUN_10bd55db4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1504a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10bd55e38; end: 10bd55ed3;  */

/* WARNING: Type propagation algorithm not settling */

double FUN_10bd55e38(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  double dVar3;
  long alStack_40 [4];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 0x1500000001;
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
    dVar3 = -1.0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return dVar3;
  }
  ___stack_chk_fail(dVar3);
  _mach_continuous_time();
  if (lRam00000001138473a0 != -1) {
    func_0x000107c27d9c(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = ((long)puVar2 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000.0;
}



/* Entry: 10bd55ed4; end: 10bd55fab;  */

double FUN_10bd55ed4(long param_1)

{
  ulong uVar1;
  
  _mach_continuous_time();
  if (lRam00000001138473a0 != -1) {
    func_0x000107c27d9c(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000.0;
}



/* Entry: 10bd55fac; end: 10bd55fbb; -[SCTimeProvider epochDate] */

void FUN_10bd55fac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,PTR__OBJC_CLASS___NSDate_1126ae770,PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10bd55fbc; end: 10bd55fbf; -[SCTimeProvider currentDeviceUpTimeInSeconds] */

/* WARNING: Type propagation algorithm not settling */

double FUN_10bd55fbc(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  double dVar3;
  long alStack_40 [4];
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = 0x1500000001;
  alStack_40[1] = 0x10;
  _time(alStack_40);
  puVar2 = &uStack_20;
  _sysctl(puVar2,2,alStack_40 + 2,alStack_40 + 1,0,0);
  dVar3 = (double)(alStack_40[0] - alStack_40[2]);
  if (alStack_40[2] == 0 || (int)puVar2 == -1) {
    dVar3 = -1.0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return dVar3;
  }
  ___stack_chk_fail(dVar3);
  _mach_continuous_time();
  if (lRam00000001138473a0 != -1) {
    func_0x000107c27d9c(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = ((long)puVar2 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000.0;
}



/* Entry: 10bd55fc0; end: 10bd56017; -[SCTimeProvider traceEventCurrentTime] */

ulong FUN_10bd55fc0(long param_1)

{
  ulong uVar1;
  uint uStack_28;
  uint uStack_24;
  
  _mach_absolute_time();
  _mach_timebase_info(&uStack_28);
  uVar1 = 0;
  if ((ulong)uStack_24 != 0) {
    uVar1 = (param_1 * (ulong)uStack_28) / (ulong)uStack_24;
  }
  return uVar1 / 100000;
}



/* Entry: 10bd56018; end: 10bd56043; +[SCTimeUtils currentTimeInMilliseconds] */

void FUN_10bd56018(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bf604e0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 10bd56044; end: 10bd56053; +[SCTimeUtils minutesToSeconds:] */

double FUN_10bd56044(double param_1)

{
  return param_1 * 60.0;
}



/* Entry: 10bd56054; end: 10bd560a7; +[SCTimeUtils absoluteTimeToMicros:] */

ulong FUN_10bd56054(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = (int)&uStack_28;
  _mach_timebase_info();
  uVar2 = 0;
  if ((iVar1 == 0) && (uStack_24 != 0)) {
    uVar2 = 0;
    if ((ulong)uStack_24 * 1000 != 0) {
      uVar2 = (param_3 * (ulong)uStack_28) / ((ulong)uStack_24 * 1000);
    }
  }
  return uVar2;
}



/* Entry: 10bd560a8; end: 10bd5611b; -[SCTimestamp init] */

undefined1 * FUN_10bd560a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e740;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd5611c; end: 10bd56123; -[SCTimestamp date] */

undefined8 FUN_10bd5611c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd56124; end: 10bd5612b; -[SCTimestamp mediaTime] */

undefined8 FUN_10bd56124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd5612c; end: 10bd56137; -[SCTimestamp .cxx_destruct] */

void FUN_10bd5612c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd56138; end: 10bd561db; -[FBTweakNumericRange initWithMinimumValue:maximumValue:] */

undefined1 *
FUN_10bd56138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270e748;
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



/* Entry: 10bd561dc; end: 10bd56273; -[FBTweakNumericRange initWithCoder:] */

undefined8 FUN_10bd561dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102ef78);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102ef98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02c220(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10bd56274; end: 10bd562d3; -[FBTweakNumericRange encodeWithCoder:] */

void FUN_10bd56274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_11102ef78);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_11102ef98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd562d4; end: 10bd562db; -[FBTweakNumericRange minimumValue] */

undefined8 FUN_10bd562d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd562dc; end: 10bd5630b; -[FBTweakNumericRange setMinimumValue:] */

void FUN_10bd562dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bd5630c; end: 10bd56313; -[FBTweakNumericRange maximumValue] */

undefined8 FUN_10bd5630c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd56314; end: 10bd56343; -[FBTweakNumericRange setMaximumValue:] */

void FUN_10bd56314(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bd56344; end: 10bd56373; -[FBTweakNumericRange .cxx_destruct] */

void FUN_10bd56344(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd56374; end: 10bd5657b; -[FBTweak initWithCoder:] */

long FUN_10bd56374(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110dae8f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b440(param_1,param_2,lVar1);
  if (param_1 != 0) {
    lVar4 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102efb8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010bf4bc00(param_3,param_2,&PTR____CFConstantStringClassReference_11102efd8);
    if ((int)lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102ef78);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102ef98);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126e3088;
      _objc_alloc();
      func_0x00010c02c220();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
    else {
      lVar5 = param_3;
      func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102efd8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar5;
    }
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102eff8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102f018);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar4;
    _objc_release(uVar3);
    lVar4 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_11102f038);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 == 0) {
      lVar5 = *(long *)(param_1 + 0x28);
    }
    _objc_retain(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5;
    _objc_release(uVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10bd5657c; end: 10bd56637; -[FBTweak initWithIdentifier:] */

undefined1 * FUN_10bd5657c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270e750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bd56638; end: 10bd566fb; -[FBTweak encodeWithCoder:] */

void FUN_10bd56638(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dae8f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbf1b8);
  uVar1 = param_1;
  func_0x00010c06b520();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_11102efb8);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_11102efd8);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_11102f038);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                        &PTR____CFConstantStringClassReference_11102eff8);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_11102f018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd566fc; end: 10bd56773; -[FBTweak isAction] */

uint FUN_10bd566fc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_110d9f260;
  _objc_opt_class();
  ppuVar2 = ppuVar1;
  func_0x00010c262c40();
  while( true ) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_opt_class();
    if (ppuVar2 == ppuVar3) break;
    func_0x00010c262c40();
    ppuVar2 = ppuVar1;
    func_0x00010c262c40();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_isKindOfClass(uVar4,ppuVar1);
  return (uint)uVar4 & 1;
}



/* Entry: 10bd56774; end: 10bd56777;  */

void FUN_10bd56774(void)

{
  return;
}



/* Entry: 10bd56778; end: 10bd567cb; -[FBTweak minimumValue] */

void FUN_10bd56778(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126e3088;
  _objc_opt_class(PTR_PTR_1126e3088);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c0ce740(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd567cc; end: 10bd56893; -[FBTweak setMinimumValue:] */

void FUN_10bd567cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    puVar1 = PTR_PTR_1126e3088;
    _objc_opt_class(PTR_PTR_1126e3088);
    _objc_opt_isKindOfClass(uVar3,puVar1);
    puVar1 = PTR_PTR_1126e3088;
    _objc_alloc();
    if ((uVar3 & 1) == 0) {
      func_0x00010c02c220();
      uVar3 = *(ulong *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0c36c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02c220();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd56894; end: 10bd568e7; -[FBTweak maximumValue] */

void FUN_10bd56894(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126e3088;
  _objc_opt_class(PTR_PTR_1126e3088);
  _objc_opt_isKindOfClass(uVar2,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c0c36c0(*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd568e8; end: 10bd569af; -[FBTweak setMaximumValue:] */

void FUN_10bd568e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    puVar1 = PTR_PTR_1126e3088;
    _objc_opt_class(PTR_PTR_1126e3088);
    _objc_opt_isKindOfClass(uVar3,puVar1);
    puVar1 = PTR_PTR_1126e3088;
    _objc_alloc();
    if ((uVar3 & 1) == 0) {
      func_0x00010c02c220();
      uVar3 = *(ulong *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0ce740(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02c220();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined **)(param_1 + 0x30) = puVar1;
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd569b0; end: 10bd56ce3; -[FBTweak setCurrentValue:] */

void FUN_10bd569b0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined1 *)0x0) || (uVar10 = *(ulong *)(param_1 + 0x30), uVar10 == 0))
  goto LAB_10bd56b54;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_opt_isKindOfClass(uVar10,puVar1);
  uVar11 = *(ulong *)(param_1 + 0x30);
  if ((uVar10 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_opt_isKindOfClass(uVar11,puVar1);
    if ((uVar11 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      puVar8 = param_3;
      func_0x00010bfecde0();
      _objc_release(uVar10);
      goto joined_r0x00010bd56a84;
    }
    puVar12 = param_1;
    func_0x00010c0ce740();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0ce740();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined1 *)0x0) {
      puVar13 = puVar12;
      puVar8 = param_3;
      func_0x00010bf433a0();
      _objc_release(puVar2);
      if (puVar13 == (undefined1 *)0x1) {
        _objc_retain(puVar12);
        _objc_release(param_3);
        param_3 = puVar12;
      }
    }
    puVar2 = param_1;
    func_0x00010c0c36c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    if (((puVar2 != (undefined1 *)0x0) && (param_3 != (undefined1 *)0x0)) &&
       (puVar3 = puVar2, puVar8 = param_3, func_0x00010bf433a0(),
       puVar3 == (undefined1 *)0xffffffffffffffff)) {
      _objc_retain(puVar2);
      _objc_release(param_3);
      puVar13 = puVar2;
    }
    _objc_release(puVar2);
  }
  else {
    puVar8 = param_3;
    func_0x00010bfecde0();
joined_r0x00010bd56a84:
    if (uVar11 != 0x7fffffffffffffff) goto LAB_10bd56b54;
    puVar13 = *(undefined1 **)(param_1 + 0x20);
    _objc_retain(puVar13);
    puVar12 = param_3;
  }
  _objc_release(puVar12);
  param_3 = puVar13;
LAB_10bd56b54:
  puVar12 = *(undefined1 **)(param_1 + 0x28);
  if (puVar12 != param_3) {
    _objc_retain(puVar12);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 **)(param_1 + 0x28) = param_3;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x38);
    _objc_retainBlock();
    if (lVar5 != 0) {
      if (param_3 == (undefined1 *)0x0) {
        param_3 = *(undefined1 **)(param_1 + 0x20);
        _objc_retain(param_3);
      }
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)(param_1 + 0x20);
        _objc_retain(puVar12);
      }
      (**(code **)(lVar5 + 0x10))(lVar5,param_3,puVar12);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c1eb900();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar14 = *plStack_120;
      do {
        lVar15 = 0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00010c27d780(*(undefined8 *)(lStack_128 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar7 != lVar15);
        lVar7 = lVar6;
        puVar9 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar12);
    puVar8 = (undefined1 *)puVar9;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    lVar5 = *(long *)(param_3 + 8);
    if (lVar5 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + 8);
      *(undefined **)(param_3 + 8) = puVar1;
      _objc_release(uVar4);
      lVar5 = *(long *)(param_3 + 8);
    }
    func_0x00010befa120(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 10bd56ce4; end: 10bd56d47; -[FBTweak addObserver:] */

void FUN_10bd56ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  func_0x00010befa120(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd56d48; end: 10bd56d4f; -[FBTweak removeObserver:] */

void FUN_10bd56d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 10bd56d50; end: 10bd56de7; -[FBTweak isChanged] */

bool FUN_10bd56d50(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c06b520();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf60aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6a980(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != param_1;
      _objc_release();
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10bd56de8; end: 10bd56def; -[FBTweak identifier] */

undefined8 FUN_10bd56de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd56df0; end: 10bd56df7; -[FBTweak name] */

undefined8 FUN_10bd56df0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd56df8; end: 10bd56dff; -[FBTweak setName:] */

void FUN_10bd56df8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10bd56e00; end: 10bd56e07; -[FBTweak defaultValue] */

undefined8 FUN_10bd56e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bd56e08; end: 10bd56e37; -[FBTweak setDefaultValue:] */

void FUN_10bd56e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd56e38; end: 10bd56e3f; -[FBTweak currentValue] */

undefined8 FUN_10bd56e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10bd56e40; end: 10bd56e47; -[FBTweak possibleValues] */

undefined8 FUN_10bd56e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10bd56e48; end: 10bd56e77; -[FBTweak setPossibleValues:] */

void FUN_10bd56e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd56e78; end: 10bd56e7f; -[FBTweak actionBlock] */

undefined8 FUN_10bd56e78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10bd56e80; end: 10bd56eaf; -[FBTweak setActionBlock:] */

void FUN_10bd56e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd56eb0; end: 10bd56eb7; -[FBTweak stepValue] */

undefined8 FUN_10bd56eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10bd56eb8; end: 10bd56ee7; -[FBTweak setStepValue:] */

void FUN_10bd56eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd56ee8; end: 10bd56eef; -[FBTweak precisionValue] */

undefined8 FUN_10bd56ee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10bd56ef0; end: 10bd56f1f; -[FBTweak setPrecisionValue:] */

void FUN_10bd56ef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd56f20; end: 10bd56fa3; -[FBTweak .cxx_destruct] */

void FUN_10bd56f20(long param_1)

{
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



/* Entry: 10bd56fa4; end: 10bd5715b; -[FBTweakCategory initWithCoder:] */

undefined1 * FUN_10bd56fa4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c02d480();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0d4f60(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar10);
          _objc_release(uVar8);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar9;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar9);
    puVar2 = (undefined1 *)puVar7;
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_160;
  pcStack_138 = FUN_10bd5715c;
  puStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_158 = PTR_PTR_11270e758;
  puStack_160 = puVar1;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar1 = puVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined1 **)((long)ppuVar5 + 0x18) = puVar1;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10bd5715c; end: 10bd5721b; -[FBTweakCategory initWithName:] */

undefined1 * FUN_10bd5715c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e758;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bd5721c; end: 10bd5727b; -[FBTweakCategory encodeWithCoder:] */

void FUN_10bd5721c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbf1b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f83a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd5727c; end: 10bd57283; -[FBTweakCategory tweakCollectionWithName:] */

void FUN_10bd5727c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10bd57284; end: 10bd5729b; -[FBTweakCategory tweakCollections] */

void FUN_10bd57284(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd5729c; end: 10bd5730f; -[FBTweakCategory addTweakCollection:] */

void FUN_10bd5729c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010befa120(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bd57310; end: 10bd5737f; -[FBTweakCategory removeTweakCollection:] */

void FUN_10bd57310(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bd57380; end: 10bd574cb; -[FBTweakCategory changedTweakCollections] */

undefined * FUN_10bd57380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c27d760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010bf354a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 10bd574cc; end: 10bd574d3; -[FBTweakCategory name] */

undefined8 FUN_10bd574cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd574d4; end: 10bd5750f; -[FBTweakCategory .cxx_destruct] */

void FUN_10bd574d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd57510; end: 10bd576c7; -[FBTweakCollection initWithCoder:] */

undefined1 * FUN_10bd57510(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c02d480();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010bfe5ec0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar10);
          _objc_release(uVar8);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar9;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar9);
    puVar2 = (undefined1 *)puVar7;
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_160;
  pcStack_138 = FUN_10bd576c8;
  puStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_158 = PTR_PTR_11270e760;
  puStack_160 = puVar1;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar1 = puVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined1 **)((long)ppuVar5 + 0x18) = puVar1;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar5;
}



/* Entry: 10bd576c8; end: 10bd57787; -[FBTweakCollection initWithName:] */

undefined1 * FUN_10bd576c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bd57788; end: 10bd577e7; -[FBTweakCollection encodeWithCoder:] */

void FUN_10bd57788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbf1b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f83bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd577e8; end: 10bd577ef; -[FBTweakCollection tweakWithIdentifier:] */

void FUN_10bd577e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10bd577f0; end: 10bd57807; -[FBTweakCollection tweaks] */

void FUN_10bd577f0(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd57808; end: 10bd5787b; -[FBTweakCollection addTweak:] */

void FUN_10bd57808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010befa120(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bd5787c; end: 10bd578eb; -[FBTweakCollection removeTweak:] */

void FUN_10bd5787c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10bd578ec; end: 10bd57a13; -[FBTweakCollection changedTweaks] */

undefined * FUN_10bd578ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c27d8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c06e3e0();
        if ((int)uVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 10bd57a14; end: 10bd57a1b; -[FBTweakCollection name] */

undefined8 FUN_10bd57a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bd57a1c; end: 10bd57a57; -[FBTweakCollection .cxx_destruct] */

void FUN_10bd57a1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bd57a58; end: 10bd57b33; -[FBTweakShakeWindow initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10bd57a58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e768;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112796a88) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd57b34; end: 10bd57be7; -[FBTweakShakeWindow dealloc] */

void FUN_10bd57b34(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_11270e768;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd57be8; end: 10bd57bf7; -[FBTweakShakeWindow _applicationWillResignActiveWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd57be8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112796a88) = 0;
  return;
}



/* Entry: 10bd57bf8; end: 10bd57c0b; -[FBTweakShakeWindow _applicationDidBecomeActiveWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd57bf8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112796a88) = 1;
  return;
}



/* Entry: 10bd57c0c; end: 10bd57c7b; -[FBTweakShakeWindow tweakViewControllerPressedDone:] */

void FUN_10bd57c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
  func_0x00010bf84b00(param_3,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd57c7c; end: 10bd57d83; -[FBTweakShakeWindow _presentTweaks] */

void FUN_10bd57c7c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126d02a0;
  while (PTR_PTR_1126d02a0 = puVar3, uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = uVar2;
    puVar3 = PTR_PTR_1126d02a0;
  }
  _objc_opt_class(puVar3);
  uVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126b0bf0;
    func_0x00010c22ba80(PTR_PTR_1126b0bf0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d02a0;
    _objc_alloc(PTR_PTR_1126d02a0);
    func_0x00010c04cb80();
    func_0x00010c21ab20();
    func_0x00010c10eda0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bd57d84; end: 10bd57d8b; -[FBTweakShakeWindow _shouldPresentTweaks] */

undefined8 FUN_10bd57d84(void)

{
  return 0;
}



/* Entry: 10bd57d8c; end: 10bd57e5b; -[FBTweakShakeWindow motionBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd57d8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + _DAT_112796a8c) = 1;
    _dispatch_time(0,400000000);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10bd57e5c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000107c27d84();
  }
  puStack_60 = PTR_PTR_11270e768;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_motionBegan_withEvent__11254d858,param_3,param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10bd57e5c; end: 10bd57e93;  */

void FUN_10bd57e5c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb4fa0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7f150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__presentTweaks_11257d5f0);
    return;
  }
  return;
}



/* Entry: 10bd57e94; end: 10bd57edb; -[FBTweakShakeWindow motionEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bd57e94(long param_1,undefined8 param_2,long param_3)

{
  long lStack_20;
  undefined *puStack_18;
  
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + _DAT_112796a8c) = 0;
  }
  puStack_18 = PTR_PTR_11270e768;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_motionEnded_withEvent__11254d860);
  return;
}



/* Entry: 10bd57edc; end: 10bd57f63; +[FBTweakStore sharedInstance] */

void FUN_10bd57edc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10bd57f64;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fe530 != -1) {
    func_0x000107c27d9c(0x1137fe530,&puStack_48);
  }
  uVar1 = uRam00000001137fe528;
  _objc_retain(uRam00000001137fe528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bd57f64; end: 10bd57f8b;  */

void FUN_10bd57f64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137fe528;
  uRam00000001137fe528 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10bd57f8c; end: 10bd5811b; -[FBTweakStore initWithCoder:] */

undefined1 * FUN_10bd57f8c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != (undefined1 *)0x0) {
    uVar6 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d3c80();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar7;
    _objc_release(uVar4);
    _objc_release(uVar6);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c0d4f60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar7);
          _objc_release(uVar6);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = lVar5;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar5);
  }
  uVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_160;
  pcStack_138 = FUN_10bd5811c;
  puStack_158 = PTR_PTR_11270e770;
  uStack_160 = uVar6;
  puStack_150 = param_1;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_160,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar6 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar3;
    _objc_release(uVar6);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10bd5811c; end: 10bd581cb; -[FBTweakStore init] */

undefined1 * FUN_10bd5811c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e770;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd581cc; end: 10bd581e3; -[FBTweakStore encodeWithCoder:] */

void FUN_10bd581cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110de3718);
  return;
}



/* Entry: 10bd581e4; end: 10bd581fb; -[FBTweakStore tweakCategories] */

void FUN_10bd581e4(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bd581fc; end: 10bd58203; -[FBTweakStore tweakCategoryWithName:] */

void FUN_10bd581fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 10bd58204; end: 10bd58273; -[FBTweakStore addTweakCategory:] */

void FUN_10bd58204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bd58274; end: 10bd582df; -[FBTweakStore removeTweakCategory:] */

void FUN_10bd58274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


