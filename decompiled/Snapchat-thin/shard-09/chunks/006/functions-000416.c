/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f8a6c8; end: 106f8a6f7; -[SCSpectaclesLagunaNetworkClient setMessageBuffer:] */

void FUN_106f8a6c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8a6f8; end: 106f8a6ff; -[SCSpectaclesLagunaNetworkClient encryptor] */

undefined8 FUN_106f8a6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f8a700; end: 106f8a72f; -[SCSpectaclesLagunaNetworkClient setEncryptor:] */

void FUN_106f8a700(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8a730; end: 106f8a737; -[SCSpectaclesLagunaNetworkClient activityTimer] */

undefined8 FUN_106f8a730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f8a738; end: 106f8a767; -[SCSpectaclesLagunaNetworkClient setActivityTimer:] */

void FUN_106f8a738(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8a768; end: 106f8a76f; -[SCSpectaclesLagunaNetworkClient networkTimeout] */

undefined8 FUN_106f8a768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f8a770; end: 106f8a777; -[SCSpectaclesLagunaNetworkClient setNetworkTimeout:] */

void FUN_106f8a770(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 106f8a778; end: 106f8a77f; -[SCSpectaclesLagunaNetworkClient isActive] */

undefined1 FUN_106f8a778(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106f8a780; end: 106f8a787; -[SCSpectaclesLagunaNetworkClient setActive:] */

void FUN_106f8a780(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106f8a788; end: 106f8a78f; -[SCSpectaclesLagunaNetworkClient suspended] */

undefined1 FUN_106f8a788(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106f8a790; end: 106f8a797; -[SCSpectaclesLagunaNetworkClient setSuspended:] */

void FUN_106f8a790(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 106f8a798; end: 106f8a79f; -[SCSpectaclesLagunaNetworkClient hasProcessedData] */

undefined1 FUN_106f8a798(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 106f8a7a0; end: 106f8a7a7; -[SCSpectaclesLagunaNetworkClient setHasProcessedData:] */

void FUN_106f8a7a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 106f8a7a8; end: 106f8a7af; -[SCSpectaclesLagunaNetworkClient outstandingResponses] */

undefined8 FUN_106f8a7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f8a7b0; end: 106f8a7b7; -[SCSpectaclesLagunaNetworkClient setOutstandingResponses:] */

void FUN_106f8a7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106f8a7b8; end: 106f8a81b; -[SCSpectaclesLagunaNetworkClient .cxx_destruct] */

void FUN_106f8a7b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f8a81c; end: 106f8a88f; -[SCSpectaclesLagunaNetworkRequest initWithLagunaRequests:] */

undefined1 * FUN_106f8a81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f80d0;
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



/* Entry: 106f8a890; end: 106f8a9f3; +[SCSpectaclesLagunaNetworkRequest requestByBatchingRequests:] */

void FUN_106f8a890(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined *puVar10;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar9 = 0x10;
  puVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8);
  if (puVar3 != (undefined *)0x0) {
    unaff_x24 = *plStack_110;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined8 *)(lStack_118 + (long)puVar10 * 8);
        func_0x00010c087c60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2,param_2,unaff_x23);
        _objc_release(unaff_x23);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      lVar9 = 0x10;
      puVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8);
      unaff_x22 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_alloc();
  func_0x00010c021640();
  _objc_release(puVar2);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_106f8a9f4;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = PTR_PTR_1126d3250;
    uStack_150 = unaff_x22;
    puStack_148 = puVar2;
    puStack_140 = param_1;
    puStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar2 = puVar10;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar2);
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_160 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c021640(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    puVar4 = puVar10;
    _objc_release();
    param_1 = puVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      puVar5 = PTR_PTR_1126d3250;
      pcStack_168 = FUN_106f8aad0;
      lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_1a0 = unaff_x24;
      uStack_198 = unaff_x23;
      uStack_190 = unaff_x22;
      puStack_188 = puVar2;
      puStack_180 = puVar10;
      puStack_178 = puVar3;
      ppuStack_170 = &puStack_130;
      _objc_retain(puVar6);
      _objc_alloc_init();
      puVar2 = puVar5;
      func_0x00010c0c62e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar2);
      puVar2 = puVar5;
      func_0x00010c0c62e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0c4f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0();
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_alloc();
      uVar8 = 1;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1b0 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c021640(puVar4,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release();
      param_1 = puVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
        ___stack_chk_fail();
        _objc_retain(puVar3);
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar8 + lVar9;
        puVar2 = PTR_PTR_1126d3250;
        for (; PTR_PTR_1126d3250 = puVar2, uVar8 < uVar1; uVar8 = uVar8 + param_6) {
          _objc_alloc_init(puVar2);
          puVar4 = puVar2;
          func_0x00010c0c62e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0();
          _objc_release(puVar4);
          puVar4 = puVar2;
          func_0x00010c0c62e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0c4f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cafa0();
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar4 = puVar2;
          func_0x00010c0c62e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0c4f20();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209380();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar4 = puVar2;
          func_0x00010c0c62e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0c4f20();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ba820();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar4);
          puVar4 = puVar2;
          func_0x00010c0c62e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0c4f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c189640();
          _objc_release(puVar6);
          _objc_release(puVar4);
          func_0x00010befa120(puVar10,param_2,puVar2);
          _objc_release(puVar2);
          puVar2 = PTR_PTR_1126d3250;
        }
        _objc_alloc(puVar5);
        func_0x00010c021640();
        _objc_release(puVar10);
        _objc_release(puVar3);
        param_1 = puVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f8a9f4; end: 106f8aacf; +[SCSpectaclesLagunaNetworkRequest mediaListRequest] */

void FUN_106f8a9f4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126d3250;
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar3);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c021640(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126d3250;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_alloc();
    uVar9 = 1;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c021640(puVar2,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release();
    param_1 = puVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      _objc_retain(puVar4);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar9 + param_5;
      puVar2 = PTR_PTR_1126d3250;
      for (; PTR_PTR_1126d3250 = puVar2, uVar9 < uVar1; uVar9 = uVar9 + param_6) {
        _objc_alloc_init(puVar2);
        puVar5 = puVar2;
        func_0x00010c0c62e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar5);
        puVar5 = puVar2;
        func_0x00010c0c62e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0c4f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cafa0();
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = puVar2;
        func_0x00010c0c62e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0c4f20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c209380();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = puVar2;
        func_0x00010c0c62e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0c4f20();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c11f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ba820();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar5 = puVar2;
        func_0x00010c0c62e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0c4f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189640();
        _objc_release(puVar7);
        _objc_release(puVar5);
        func_0x00010befa120(puVar6,param_2,puVar2);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126d3250;
      }
      _objc_alloc(puVar3);
      func_0x00010c021640();
      _objc_release(puVar6);
      _objc_release(puVar4);
      param_1 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f8aad0; end: 106f8ac07; +[SCSpectaclesLagunaNetworkRequest readRequestWithFilename:] */

void FUN_106f8aad0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126d3250;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar3 = puVar2;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0c4f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_alloc();
  uVar9 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c021640(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9 + param_5;
    puVar3 = PTR_PTR_1126d3250;
    for (; PTR_PTR_1126d3250 = puVar3, uVar9 < uVar1; uVar9 = uVar9 + param_6) {
      _objc_alloc_init(puVar3);
      puVar6 = puVar3;
      func_0x00010c0c62e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0c62e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c4f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0c62e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c4f20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209380();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0c62e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c4f20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ba820();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0c62e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c4f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189640();
      _objc_release(puVar7);
      _objc_release(puVar6);
      func_0x00010befa120(puVar5,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126d3250;
    }
    _objc_alloc(puVar2);
    func_0x00010c021640();
    _objc_release(puVar5);
    _objc_release(puVar4);
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f8ac08; end: 106f8ae3f; +[SCSpectaclesLagunaNetworkRequest batchReadRequestWithFilename:range:chunkSize:allowDataPacket:] */

void FUN_106f8ac08(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4 + param_5;
  puVar3 = PTR_PTR_1126d3250;
  for (; PTR_PTR_1126d3250 = puVar3, param_4 < uVar1; param_4 = param_4 + param_6) {
    _objc_alloc_init(puVar3);
    puVar4 = puVar3;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c62e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c62e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209380();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c62e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba820();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c0c62e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189640();
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befa120(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d3250;
  }
  _objc_alloc(param_1);
  func_0x00010c021640();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f8ae40; end: 106f8ae47; +[SCSpectaclesLagunaNetworkRequest getGenericAssetWithFileIdentifier:range:chunkSize:] */

undefined8 FUN_106f8ae40(void)

{
  return 0;
}



/* Entry: 106f8ae48; end: 106f8afbf; +[SCSpectaclesLagunaNetworkRequest markTransferredRequestForContentNamed:includeHd:] */

undefined * FUN_106f8ae48(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126d3250;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c4e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fc80();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0c4e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abce0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c021640(param_1,param_2,puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126d3250;
    pcStack_58 = FUN_106f8afc0;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = puVar3;
    puStack_88 = puVar4;
    puStack_80 = puVar2;
    puStack_78 = puVar5;
    puStack_70 = param_1;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_alloc_init();
    puVar1 = puVar7;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0c4e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21fc80();
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0c4e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1abce0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021640(puVar6,param_2,puVar2);
    _objc_release(puVar2);
    puVar3 = puVar7;
    _objc_release();
    param_1 = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      pcStack_a8 = FUN_106f8b138;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar4 = PTR_PTR_1126d3250;
      puStack_d0 = puVar1;
      puStack_c8 = puVar2;
      puStack_c0 = puVar6;
      puStack_b8 = puVar7;
      ppuStack_b0 = &puStack_60;
      _objc_alloc_init();
      puVar2 = puVar4;
      func_0x00010c0c62e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar2);
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021640(puVar3,param_2,puVar2);
      _objc_release(puVar2);
      puVar5 = puVar4;
      _objc_release();
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        pcStack_e8 = FUN_106f8b214;
        lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = PTR_PTR_1126d3250;
        puStack_110 = puVar1;
        puStack_108 = puVar2;
        puStack_100 = puVar4;
        puStack_f8 = puVar3;
        ppuStack_f0 = &ppuStack_b0;
        _objc_alloc_init();
        puVar1 = puVar6;
        func_0x00010c0ae180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar1);
        _objc_alloc();
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_120 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_120,1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c021640(puVar5,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release();
        param_1 = puVar5;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
          ___stack_chk_fail();
          puVar1 = PTR_PTR_1126d3250;
          pcStack_128 = FUN_106f8b2f0;
          lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppuStack_130 = &ppuStack_f0;
          _objc_retain(puVar2);
          _objc_alloc_init();
          puVar3 = puVar1;
          func_0x00010c0ae180();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0();
          _objc_release(puVar3);
          puVar3 = puVar1;
          func_0x00010c0ae180(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0a6760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cafa0();
          _objc_release(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar3);
          puVar2 = puVar1;
          func_0x00010c0ae180(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0a6760();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209380();
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar2 = puVar1;
          func_0x00010c0ae180();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0a6760();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c11f2a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ba820();
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_alloc();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_180 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c021640(puVar6,param_2,puVar5);
          _objc_release(puVar5);
          puVar8 = puVar1;
          _objc_release(puVar1);
          param_1 = puVar6;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
            ___stack_chk_fail();
            puVar9 = PTR_PTR_1126d3250;
            pcStack_188 = FUN_106f8b4e0;
            lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puStack_1c0 = puVar4;
            puStack_1b8 = puVar3;
            puStack_1b0 = puVar2;
            puStack_1a8 = puVar5;
            puStack_1a0 = puVar6;
            puStack_198 = puVar1;
            ppuStack_190 = &ppuStack_130;
            _objc_retain(puVar7);
            _objc_alloc_init();
            puVar1 = puVar9;
            func_0x00010bfbc4e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21acc0();
            _objc_release(puVar1);
            puVar1 = puVar9;
            func_0x00010bfbc4e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c189980();
            _objc_release(puVar7);
            _objc_release(puVar1);
            puVar1 = puVar9;
            func_0x00010bfbc4e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c209780();
            _objc_release(puVar1);
            puVar1 = puVar9;
            func_0x00010bfbc4e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d7b00();
            _objc_release(puVar1);
            _objc_alloc(puVar8);
            puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_1d0 = puVar9;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d0,1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c021640(puVar8,param_2,puVar1);
            _objc_release(puVar1);
            _objc_release(puVar9);
            param_1 = puVar8;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
              ___stack_chk_fail();
              return (undefined *)0x0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106f8afc0; end: 106f8b137; +[SCSpectaclesLagunaNetworkRequest deletionRequestForContentNamed:includeHd:] */

undefined * FUN_106f8afc0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126d3250;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c4e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21fc80();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c4e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abce0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021640(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106f8b138;
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = PTR_PTR_1126d3250;
    puStack_80 = puVar2;
    puStack_78 = puVar3;
    puStack_70 = param_1;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar1 = puVar5;
    func_0x00010c0c62e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar1);
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021640(puVar4,param_2,puVar1);
    _objc_release(puVar1);
    puVar3 = puVar5;
    _objc_release();
    param_1 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      ___stack_chk_fail();
      pcStack_98 = FUN_106f8b214;
      lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR_PTR_1126d3250;
      puStack_c0 = puVar2;
      puStack_b8 = puVar1;
      puStack_b0 = puVar5;
      puStack_a8 = puVar4;
      ppuStack_a0 = &puStack_60;
      _objc_alloc_init();
      puVar1 = puVar6;
      func_0x00010c0ae180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar1);
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_d0 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c021640(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release();
      param_1 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
        ___stack_chk_fail();
        puVar1 = PTR_PTR_1126d3250;
        pcStack_d8 = FUN_106f8b2f0;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_e0 = &ppuStack_a0;
        _objc_retain(puVar2);
        _objc_alloc_init();
        puVar3 = puVar1;
        func_0x00010c0ae180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar3);
        puVar3 = puVar1;
        func_0x00010c0ae180(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0a6760();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cafa0();
        _objc_release(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar2 = puVar1;
        func_0x00010c0ae180(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0a6760();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c11f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c209380();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c0ae180();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0a6760();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c11f2a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ba820();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_130 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_130,1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c021640(puVar6,param_2,puVar5);
        _objc_release(puVar5);
        puVar7 = puVar1;
        _objc_release(puVar1);
        param_1 = puVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          puVar8 = PTR_PTR_1126d3250;
          pcStack_138 = FUN_106f8b4e0;
          lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puStack_170 = puVar4;
          puStack_168 = puVar3;
          puStack_160 = puVar2;
          puStack_158 = puVar5;
          puStack_150 = puVar6;
          puStack_148 = puVar1;
          ppuStack_140 = &ppuStack_e0;
          _objc_retain(puVar9);
          _objc_alloc_init();
          puVar1 = puVar8;
          func_0x00010bfbc4e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0();
          _objc_release(puVar1);
          puVar1 = puVar8;
          func_0x00010bfbc4e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c189980();
          _objc_release(puVar9);
          _objc_release(puVar1);
          puVar1 = puVar8;
          func_0x00010bfbc4e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209780();
          _objc_release(puVar1);
          puVar1 = puVar8;
          func_0x00010bfbc4e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d7b00();
          _objc_release(puVar1);
          _objc_alloc(puVar7);
          puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_180 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c021640(puVar7,param_2,puVar1);
          _objc_release(puVar1);
          _objc_release(puVar8);
          param_1 = puVar7;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
            ___stack_chk_fail();
            return (undefined *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106f8b138; end: 106f8b213; +[SCSpectaclesLagunaNetworkRequest startAsNeededDeletionRequest] */

undefined * FUN_106f8b138(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3250;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c0c62e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021640(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_48 = FUN_106f8b214;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126d3250;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c0ae180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar3);
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c021640(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release();
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126d3250;
      pcStack_88 = FUN_106f8b2f0;
      lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_90 = &puStack_50;
      _objc_retain(puVar5);
      _objc_alloc_init();
      puVar3 = puVar1;
      func_0x00010c0ae180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c0ae180(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0a6760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c0ae180(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0a6760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c11f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209380();
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c0ae180();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0a6760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c11f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ba820();
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_e0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c021640(puVar2,param_2,puVar6);
      _objc_release(puVar6);
      puVar7 = puVar1;
      _objc_release(puVar1);
      param_1 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
        ___stack_chk_fail();
        puVar8 = PTR_PTR_1126d3250;
        pcStack_e8 = FUN_106f8b4e0;
        lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_120 = puVar4;
        puStack_118 = puVar5;
        puStack_110 = puVar3;
        puStack_108 = puVar6;
        puStack_100 = puVar2;
        puStack_f8 = puVar1;
        ppuStack_f0 = &ppuStack_90;
        _objc_retain(puVar9);
        _objc_alloc_init();
        puVar1 = puVar8;
        func_0x00010bfbc4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010bfbc4e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189980();
        _objc_release(puVar9);
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010bfbc4e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c209780();
        _objc_release(puVar1);
        puVar1 = puVar8;
        func_0x00010bfbc4e0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7b00();
        _objc_release(puVar1);
        _objc_alloc(puVar7);
        puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_130 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_130,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c021640(puVar7,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar8);
        param_1 = puVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
          ___stack_chk_fail();
          return (undefined *)0x0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106f8b214; end: 106f8b2ef; +[SCSpectaclesLagunaNetworkRequest crashLogFileListRequest] */

undefined * FUN_106f8b214(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3250;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c0ae180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c021640(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d3250;
    pcStack_48 = FUN_106f8b2f0;
    lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_50 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c0ae180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c0ae180(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0a6760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = puVar2;
    func_0x00010c0ae180(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0a6760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209380();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar5 = puVar2;
    func_0x00010c0ae180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0a6760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ba820();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c021640(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    puVar7 = puVar2;
    _objc_release(puVar2);
    param_1 = puVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
      ___stack_chk_fail();
      puVar8 = PTR_PTR_1126d3250;
      pcStack_a8 = FUN_106f8b4e0;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_e0 = puVar4;
      puStack_d8 = puVar3;
      puStack_d0 = puVar5;
      puStack_c8 = puVar6;
      puStack_c0 = puVar1;
      puStack_b8 = puVar2;
      ppuStack_b0 = &puStack_50;
      _objc_retain(puVar9);
      _objc_alloc_init();
      puVar1 = puVar8;
      func_0x00010bfbc4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010bfbc4e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189980();
      _objc_release(puVar9);
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010bfbc4e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209780();
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010bfbc4e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7b00();
      _objc_release(puVar1);
      _objc_alloc(puVar7);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f0 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021640(puVar7,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar8);
      param_1 = puVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        return (undefined *)0x0;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106f8b2f0; end: 106f8b4df; +[SCSpectaclesLagunaNetworkRequest crashLogFileRequestWithFilename:range:] */

undefined * FUN_106f8b2f0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126d3250;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010c0ae180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ae180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0a6760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ae180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0a6760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209380();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ae180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0a6760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba820();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c021640(param_1,param_2,puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126d3250;
    pcStack_68 = FUN_106f8b4e0;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_a0 = puVar4;
    puStack_98 = puVar3;
    puStack_90 = puVar2;
    puStack_88 = puVar5;
    puStack_80 = param_1;
    puStack_78 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_alloc_init();
    puVar1 = puVar7;
    func_0x00010bfbc4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010bfbc4e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189980();
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010bfbc4e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209780();
    _objc_release(puVar1);
    puVar1 = puVar7;
    func_0x00010bfbc4e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7b00();
    _objc_release(puVar1);
    _objc_alloc(puVar6);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021640(puVar6,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar7);
    param_1 = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 106f8b4e0; end: 106f8b653; +[SCSpectaclesLagunaNetworkRequest firmwareWriteRequest:start:] */

undefined8 FUN_106f8b4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126d3250;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfbc4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189980();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209780();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc4e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7b00();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021640(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106f8b654; end: 106f8b65b; +[SCSpectaclesLagunaNetworkRequest gpsWriteRequest:] */

undefined8 FUN_106f8b654(void)

{
  return 0;
}



/* Entry: 106f8b65c; end: 106f8b71f; +[SCSpectaclesLagunaNetworkRequest shareWifiCredentialsRequest] */

undefined8 FUN_106f8b65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3250;
  _objc_alloc_init();
  func_0x00010c225940();
  _objc_alloc(param_1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021640(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106f8b720; end: 106f8b727; +[SCSpectaclesLagunaNetworkRequest shareWifiCredentialsStatusRequest] */

undefined8 FUN_106f8b720(void)

{
  return 0;
}



/* Entry: 106f8b728; end: 106f8b72f; +[SCSpectaclesLagunaNetworkRequest analyticsFilesListRequest] */

undefined8 FUN_106f8b728(void)

{
  return 0;
}



/* Entry: 106f8b730; end: 106f8b737; +[SCSpectaclesLagunaNetworkRequest analyticsFilesGetWithFilename:range:] */

undefined8 FUN_106f8b730(void)

{
  return 0;
}



/* Entry: 106f8b738; end: 106f8b73f; +[SCSpectaclesLagunaNetworkRequest analyticsFilesDeleteRequest] */

undefined8 FUN_106f8b738(void)

{
  return 0;
}



/* Entry: 106f8b740; end: 106f8b747; +[SCSpectaclesLagunaNetworkRequest stereoCalibrationDataRequest] */

undefined8 FUN_106f8b740(void)

{
  return 0;
}



/* Entry: 106f8b748; end: 106f8b7ff; +[SCSpectaclesLagunaNetworkRequest lagunaPairingRequestWithAmbaRequest:] */

undefined8 FUN_106f8b748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c021640(param_1,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(puVar1 + 8);
}



/* Entry: 106f8b800; end: 106f8b807; -[SCSpectaclesLagunaNetworkRequest lagunaRequests] */

undefined8 FUN_106f8b800(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f8b808; end: 106f8b813; -[SCSpectaclesLagunaNetworkRequest .cxx_destruct] */

void FUN_106f8b808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f8b814; end: 106f8b897; -[SCSpectaclesLagunaNetworkResponse initWithAmbaResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f8b814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761c5c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f8b898; end: 106f8b8d3; -[SCSpectaclesLagunaNetworkResponse serializedSize] */

undefined8 FUN_106f8b898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15ebe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8b8d4; end: 106f8b92b; -[SCSpectaclesLagunaNetworkResponse responseStatus] */

undefined8 FUN_106f8b8d4(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c252d60();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10de19500 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f8b92c; end: 106f8bb1f; -[SCSpectaclesLagunaNetworkResponse mediaList] */

undefined * FUN_106f8b92c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  lVar1 = param_1;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd9040();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf12840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          puVar5 = PTR_PTR_1126d3158;
          _objc_alloc();
          uVar4 = uVar6;
          func_0x00010c0d4f60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0(uVar6);
          func_0x00010c03e020(puVar5,param_2,uVar4,(long)(int)uVar6);
          _objc_release(uVar4);
          if (puVar5 != (undefined *)0x0) {
            func_0x00010befa120(puVar3,param_2,puVar5);
          }
          _objc_release(puVar5);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 106f8bb20; end: 106f8bb27; -[SCSpectaclesLagunaNetworkResponse mediaUUID] */

undefined8 FUN_106f8bb20(void)

{
  return 0;
}



/* Entry: 106f8bb28; end: 106f8bc77; -[SCSpectaclesLagunaNetworkResponse mediaData] */

void FUN_106f8bb28(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bfd9040();
  if ((int)uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bfd8f80();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar7);
      uVar7 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf02320();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar6 == 0) {
        uVar7 = 0;
        goto LAB_106f8bc54;
      }
      func_0x00010bf02320(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_106f8bc54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106f8bc78; end: 106f8bddb; -[SCSpectaclesLagunaNetworkResponse mediaDataRange] */

undefined1  [16] FUN_106f8bc78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar1 = param_1;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c64c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c4f20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfdada0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 == 0) {
    lVar6 = 0;
    lVar7 = 0x7fffffffffffffff;
  }
  else {
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c6340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c4f20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
    uVar1 = uVar4;
    func_0x00010bfdca00();
    if (((int)uVar1 == 0) || (uVar1 = uVar4, func_0x00010bfd84c0(), (int)uVar1 == 0)) {
      lVar6 = 0;
      lVar7 = 0x7fffffffffffffff;
    }
    else {
      uVar1 = uVar4;
      func_0x00010c24d960(uVar4);
      lVar7 = (long)(int)uVar1;
      uVar1 = uVar4;
      func_0x00010c08fa40(uVar4);
      lVar6 = (long)(int)uVar1;
    }
    _objc_release(uVar4);
  }
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Entry: 106f8bddc; end: 106f8be5f; -[SCSpectaclesLagunaNetworkResponse metadata] */

void FUN_106f8bddc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c0c4820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d3988;
    _objc_alloc(PTR_PTR_1126d3988);
    func_0x00010c0c4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008240(puVar2,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f8be60; end: 106f8c0a3; -[SCSpectaclesLagunaNetworkResponse logFileList] */

void FUN_106f8be60(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
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
  puVar1 = param_1;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bfd8ae0();
  if (((ulong)puVar5 & 1) == 0) {
    _objc_release();
LAB_106f8c060:
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = param_1;
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0a6700();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release();
    if (puVar8 == (undefined *)0x0) goto LAB_106f8c060;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0a66e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          uVar3 = uVar6;
          func_0x00010bfd9620();
          if ((((int)uVar3 != 0) && (uVar3 = uVar6, func_0x00010bfdc180(), (int)uVar3 != 0)) &&
             (uVar3 = uVar6, func_0x00010c23d0a0(), (int)uVar3 != 0)) {
            puVar4 = PTR_PTR_1126d3850;
            _objc_alloc();
            uVar3 = uVar6;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23d0a0(uVar6);
            func_0x00010c012ee0(puVar4,param_2,uVar3,(long)(int)uVar6);
            func_0x00010befa120(puVar5,param_2,puVar4);
            _objc_release(puVar4);
            _objc_release(uVar3);
          }
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfd8ae0();
    if ((int)puVar5 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = puVar1;
      func_0x00010bf02320();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010bfd8ac0();
      _objc_release(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar2);
      if ((int)puVar4 == 0) {
        puVar5 = (undefined *)0x0;
        goto _objc_autoreleaseReturnValue;
      }
      func_0x00010bf02320(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0a4900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar1;
    }
    _objc_release(puVar2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8c0a4; end: 106f8c187; -[SCSpectaclesLagunaNetworkResponse logData] */

void FUN_106f8c0a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf02320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfd8ae0();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010bf02320();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8ac0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar4 = 0;
      goto LAB_106f8c170;
    }
    func_0x00010bf02320(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0ae600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0a4900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8c170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f8c188; end: 106f8c18f; -[SCSpectaclesLagunaNetworkResponse wifiSharingStatus] */

undefined8 FUN_106f8c188(void)

{
  return 1;
}



/* Entry: 106f8c190; end: 106f8c19f; -[SCSpectaclesLagunaNetworkResponse ambaResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f8c190(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761c5c);
}



/* Entry: 106f8c1a0; end: 106f8c1b3; -[SCSpectaclesLagunaNetworkResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f8c1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761c5c,0);
  return;
}



/* Entry: 106f8c1b4; end: 106f8c23f; -[SCSpectaclesLagunaNrfResponseMessage initWithNrfResponse:request:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f8c1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithRequest__1125ed4b8,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761c60;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f8c240; end: 106f8c297; -[SCSpectaclesLagunaNrfResponseMessage responseStatus] */

undefined8 FUN_106f8c240(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c252d60();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10de19518 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f8c298; end: 106f8cbbb; -[SCSpectaclesLagunaNrfResponseMessage crashReports] */

undefined * FUN_106f8c298(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar16;
  func_0x00010bfd6280();
  _objc_release();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar3 == 0) goto LAB_106f8cb40;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_1;
  func_0x00010bf663a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar16;
  func_0x00010bfd91a0();
  if ((int)puVar4 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = puVar16;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar16;
  func_0x00010bfd4260();
  if ((int)puVar4 != 0) {
    puVar6 = puVar16;
    func_0x00010bf05020();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d3990;
    _objc_alloc(PTR_PTR_1126d3990);
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8fcb8;
    puVar8 = puVar6;
    func_0x00010bfad400();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e8fd38;
    puVar9 = puVar6;
    puStack_88 = puVar8;
    func_0x00010bf98940(puVar6);
    func_0x00010c0df820(puVar4,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e8fcd8;
    puVar10 = puVar6;
    puStack_80 = puVar4;
    func_0x00010c0993c0(puVar6);
    func_0x00010c0df820(puVar9,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_a0,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006440(puVar7,param_2,puVar5,puVar10,puVar17);
    func_0x00010befa120(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  puVar4 = puVar16;
  func_0x00010bfd7aa0();
  if ((int)puVar4 != 0) {
    puVar11 = puVar16;
    func_0x00010bfd37e0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126d3998;
    _objc_alloc(PTR_PTR_1126d3998);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e6faf8;
    puVar9 = puVar11;
    func_0x00010c11ee80(puVar11);
    func_0x00010c0df820(puVar4,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e6fb18;
    puVar6 = puVar11;
    puStack_e0 = puVar4;
    func_0x00010c11eea0(puVar11);
    func_0x00010c0df820(puVar9,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e6fb38;
    puVar7 = puVar11;
    puStack_d8 = puVar9;
    func_0x00010c11eee0(puVar11);
    func_0x00010c0df820(puVar6,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_108 = &PTR____CFConstantStringClassReference_110e6fb58;
    puVar8 = puVar11;
    puStack_d0 = puVar6;
    func_0x00010c11ef20(puVar11);
    func_0x00010c0df820(puVar7,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110e706f8;
    puVar10 = puVar11;
    puStack_c8 = puVar7;
    func_0x00010c11eec0(puVar11);
    func_0x00010c0df820(puVar8,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110e704d8;
    puVar13 = puVar11;
    puStack_c0 = puVar8;
    func_0x00010c0b5b20(puVar11);
    func_0x00010c0df820(puVar10,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110e704f8;
    puVar14 = puVar11;
    puStack_b8 = puVar10;
    func_0x00010c0f6c00(puVar11);
    func_0x00010c0df820(puVar13,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110e8fe98;
    puVar15 = puVar11;
    puStack_b0 = puVar13;
    func_0x00010c2beb80(puVar11);
    func_0x00010c0df820(puVar14,param_2,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a8 = puVar14;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e0,&ppuStack_120,8
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006440(puVar12,param_2,puVar5,puVar15,puVar17);
    func_0x00010befa120(puVar3,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar11);
  }
  puVar4 = puVar16;
  func_0x00010bfde6a0();
  if ((int)puVar4 != 0) {
    puVar9 = puVar16;
    func_0x00010c2a28c0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d39a0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110e704f8;
    puVar7 = puVar9;
    func_0x00010c0f6c00(puVar9);
    func_0x00010c0df820(puVar4,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_128 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_128,&ppuStack_130,
                        1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006440(puVar6,param_2,puVar5,puVar7,puVar17);
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar9);
  }
  puVar4 = puVar16;
  func_0x00010bfd4020();
  if ((int)puVar4 != 0) {
    puVar4 = puVar16;
    func_0x00010bf022c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bf990e0();
    iVar2 = (int)puVar9;
    puVar9 = puVar4;
    if (iVar2 < 5) {
      if (iVar2 - 2U < 3) {
        func_0x00010c0864e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126d39b0;
        _objc_alloc(PTR_PTR_1126d39b0);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_170 = &PTR____CFConstantStringClassReference_110e704f8;
        puVar7 = puVar9;
        func_0x00010c0f6c00(puVar9);
        func_0x00010c0df820(puVar6,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_168 = &PTR____CFConstantStringClassReference_110e704d8;
        puVar8 = puVar9;
        puStack_150 = puVar6;
        func_0x00010c0b5b20(puVar9);
        func_0x00010c0df820(puVar7,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_160 = &PTR____CFConstantStringClassReference_110e704b8;
        puVar10 = puVar9;
        puStack_148 = puVar7;
        func_0x00010c247f60(puVar9);
        func_0x00010c0df820(puVar8,param_2,puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuStack_158 = &PTR____CFConstantStringClassReference_110e8feb8;
        puVar14 = puVar4;
        puStack_140 = puVar8;
        func_0x00010bf990e0(puVar4);
        func_0x00010c0df760(puVar10,param_2,puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_138 = puVar10;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_150,
                            &ppuStack_170,4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c006440(puVar13,param_2,puVar5,puVar14,puVar17);
        func_0x00010befa120(puVar3,param_2,puVar13);
        _objc_release(puVar13);
        _objc_release(puVar14);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
LAB_106f8cb00:
        _objc_release(puVar6);
      }
      else {
        if (iVar2 != 1) goto LAB_106f8cb0c;
        puVar9 = PTR_PTR_1126d39a8;
        _objc_alloc(PTR_PTR_1126d39a8);
        func_0x00010c006440();
        func_0x00010befa120(puVar3,param_2,puVar9);
      }
      _objc_release(puVar9);
    }
    else if ((iVar2 == 5) || (iVar2 == 7)) {
      func_0x00010bf0adc0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126d39b8;
      _objc_alloc();
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e8fed8;
      puVar6 = puVar9;
      func_0x00010bfbc000();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_198 = &PTR____CFConstantStringClassReference_110e8fcd8;
      puVar8 = puVar9;
      puStack_188 = puVar6;
      func_0x00010c0993c0(puVar9);
      func_0x00010c0df820(puVar7,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_190 = &PTR____CFConstantStringClassReference_110e8feb8;
      puVar13 = puVar4;
      puStack_180 = puVar7;
      func_0x00010bf990e0(puVar4);
      func_0x00010c0df760(puVar8,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_178 = puVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_188,
                          &ppuStack_1a0,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c006440(puVar10,param_2,puVar5,puVar13,puVar17);
      func_0x00010befa120(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar7);
      goto LAB_106f8cb00;
    }
LAB_106f8cb0c:
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar3);
  _objc_release();
LAB_106f8cb40:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar16;
    func_0x00010c0dda80();
    _objc_release(puVar16);
    uVar1 = (int)puVar3 - 1;
    if (uVar1 < 4) {
      puVar16 = *(undefined **)(&UNK_10de19538 + (ulong)uVar1 * 8);
    }
    else {
      puVar16 = (undefined *)0x4;
    }
    return puVar16;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 106f8cbbc; end: 106f8cc13; -[SCSpectaclesLagunaNrfResponseMessage nrfErrorType] */

undefined8 FUN_106f8cbbc(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dda80();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10de19538 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 106f8cc14; end: 106f8cc4f; -[SCSpectaclesLagunaNrfResponseMessage hasNrfError] */

undefined8 FUN_106f8cc14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd9940();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8cc50; end: 106f8cd03; -[SCSpectaclesLagunaNrfResponseMessage batteryLevel] */

void FUN_106f8cc50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd48a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf17500();
    _objc_release(param_1);
    dVar3 = (double)NEON_fminnm((double)((float)(int)uVar1 / 0.95),0x4059000000000000);
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)dVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f8cd04; end: 106f8cdfb; -[SCSpectaclesLagunaNrfResponseMessage voltageLevel] */

void FUN_106f8cd04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4880();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf174e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd4920();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8cde4;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf174e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf178a0();
    func_0x00010c0df760(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8cde4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8cdfc; end: 106f8cebb; -[SCSpectaclesLagunaNrfResponseMessage hasCharging] */

ulong FUN_106f8cdfc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4880();
  if ((int)uVar2 == 0) {
LAB_106f8ce64:
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfd9900();
    _objc_release(param_1);
    if ((int)uVar2 == 0) goto LAB_106f8ce9c;
  }
  else {
    unaff_x20 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010bf174e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x21;
    func_0x00010bfd5340();
    if ((uVar3 & 1) == 0) goto LAB_106f8ce64;
    uVar3 = 1;
  }
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
LAB_106f8ce9c:
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106f8cebc; end: 106f8cfe3; -[SCSpectaclesLagunaNrfResponseMessage charging] */

ulong FUN_106f8cebc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfd4880();
  if ((uVar1 & 1) == 0) {
    _objc_release(uVar4);
  }
  else {
    uVar1 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf174e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd5340();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    if ((int)uVar3 != 0) {
      func_0x00010c0ddae0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010bf174e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf35aa0();
      _objc_release(uVar1);
      goto LAB_106f8cfbc;
    }
  }
  uVar4 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfd9900();
  _objc_release(uVar4);
  if ((int)uVar1 == 0) {
    return 0;
  }
  func_0x00010c0ddae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0dda00();
  uVar4 = (ulong)((int)uVar4 == 2);
LAB_106f8cfbc:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106f8cfe4; end: 106f8d01f; -[SCSpectaclesLagunaNrfResponseMessage hasDeviceColor] */

undefined8 FUN_106f8cfe4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd6420();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8d020; end: 106f8d063; -[SCSpectaclesLagunaNrfResponseMessage deviceColor] */

long FUN_106f8d020(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf700a0();
  _objc_release(param_1);
  uVar2 = (int)uVar3 - 2;
  lVar1 = 0;
  if (uVar2 < 4) {
    lVar1 = (ulong)uVar2 + 1;
  }
  return lVar1;
}



/* Entry: 106f8d064; end: 106f8d10b; -[SCSpectaclesLagunaNrfResponseMessage firmwareVersion] */

void FUN_106f8d064(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7240();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c0c68;
    _objc_alloc(PTR_PTR_1126c0c68);
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar3,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8d10c; end: 106f8d1a3; -[SCSpectaclesLagunaNrfResponseMessage serialNumber] */

void FUN_106f8d10c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfdbe60();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f8d1a4; end: 106f8d22f; -[SCSpectaclesLagunaNrfResponseMessage hasHasSpaceToRecord] */

undefined8 FUN_106f8d1a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfd4060();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf02300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd7b20();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106f8d230; end: 106f8d28b; -[SCSpectaclesLagunaNrfResponseMessage hasSpaceToRecord] */

undefined8 FUN_106f8d230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf02300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc7a0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f8d28c; end: 106f8d383; -[SCSpectaclesLagunaNrfResponseMessage storagePercentage] */

void FUN_106f8d28c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4060();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf02300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfdcc00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8d36c;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf02300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c257260();
    func_0x00010c0df820(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8d36c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8d384; end: 106f8d447; -[SCSpectaclesLagunaNrfResponseMessage hardwareVersion] */

void FUN_106f8d384(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7b00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126c0c70;
    _objc_alloc(PTR_PTR_1126c0c70);
    uVar2 = uVar1;
    func_0x00010c0b6e40(uVar1);
    uVar3 = uVar1;
    func_0x00010c0ce7e0(uVar1);
    func_0x00010c00c380(puVar4,param_2,0,(long)(int)uVar2,(long)(int)uVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f8d448; end: 106f8d53f; -[SCSpectaclesLagunaNrfResponseMessage nordicTemperature] */

void FUN_106f8d448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd380();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd9860();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8d528;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0db280();
    func_0x00010c0df760(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8d528:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8d540; end: 106f8d637; -[SCSpectaclesLagunaNrfResponseMessage socTemperature] */

void FUN_106f8d540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd380();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd4080();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8d620;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf02340();
    func_0x00010c0df760(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8d620:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8d638; end: 106f8d72f; -[SCSpectaclesLagunaNrfResponseMessage coulombCounterTemperature] */

void FUN_106f8d638(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd380();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd5dc0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8d718;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52960();
    func_0x00010c0df760(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8d718:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8d730; end: 106f8d827; -[SCSpectaclesLagunaNrfResponseMessage wifiTemperature] */

void FUN_106f8d730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdd380();
  if ((int)uVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfde8a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)uVar4 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_106f8d810;
    }
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c26aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a5640();
    func_0x00010c0df760(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_106f8d810:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f8d828; end: 106f8d863; -[SCSpectaclesLagunaNrfResponseMessage hasBluetoothEvent] */

undefined8 FUN_106f8d828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd4b00();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8d864; end: 106f8d8bb; -[SCSpectaclesLagunaNrfResponseMessage bluetoothEvent] */

undefined8 FUN_106f8d864(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1e5a0();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 2;
  if (uVar1 < 5) {
    uVar2 = *(undefined8 *)(&UNK_10de19558 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f8d8bc; end: 106f8d8f7; -[SCSpectaclesLagunaNrfResponseMessage hasWifiState] */

undefined8 FUN_106f8d8bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde880();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8d8f8; end: 106f8d943; -[SCSpectaclesLagunaNrfResponseMessage wifiOn] */

uint FUN_106f8d8f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a55a0();
  _objc_release(param_1);
  return (uint)((uint)uVar1 < 6) & 0x26U >> (ulong)((uint)uVar1 & 0x1f);
}



/* Entry: 106f8d944; end: 106f8da03; -[SCSpectaclesLagunaNrfResponseMessage ipAddress] */

void FUN_106f8d944(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd80c0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c06afe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8fe18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8da04; end: 106f8dac7; -[SCSpectaclesLagunaNrfResponseMessage hasFirmwareUpdateResponse] */

bool FUN_106f8da04(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  
  uVar2 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9920();
  if ((int)uVar3 == 0) {
LAB_106f8da6c:
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c27dd80();
    bVar1 = uVar4 == 0x13;
    _objc_release(param_1);
    if ((int)uVar3 == 0) goto LAB_106f8daa8;
  }
  else {
    unaff_x20 = param_1;
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c0dda60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010bfd9cc0();
    if ((uVar4 & 1) == 0) goto LAB_106f8da6c;
    bVar1 = true;
  }
  _objc_release(unaff_x21);
  _objc_release(unaff_x20);
LAB_106f8daa8:
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f8dac8; end: 106f8db67; -[SCSpectaclesLagunaNrfResponseMessage firmwareUpdateResponseType] */

uint FUN_106f8dac8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x13) {
    uVar1 = 4;
  }
  else {
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0dda60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ed160();
    _objc_release(lVar2);
    _objc_release(param_1);
    uVar1 = (int)lVar3 - 1;
    if (2 < uVar1) {
      uVar1 = 3;
    }
  }
  return uVar1;
}



/* Entry: 106f8db68; end: 106f8dc0f; -[SCSpectaclesLagunaNrfResponseMessage hasPatchApplied] */

long FUN_106f8db68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dda60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0dda60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd64a0();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4;
}



/* Entry: 106f8dc10; end: 106f8dc6b; -[SCSpectaclesLagunaNrfResponseMessage patchApplied] */

undefined8 FUN_106f8dc10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dda60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7ed60();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f8dc6c; end: 106f8dd1b; -[SCSpectaclesLagunaNrfResponseMessage firmwareDigest] */

void FUN_106f8dc6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0dda60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd64e0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dda60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf7eda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f8dd1c; end: 106f8dedb; -[SCSpectaclesLagunaNrfResponseMessage backgroundUpdateParameters] */

void FUN_106f8dd1c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd98e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c0ddae0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dd9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = uVar1;
    func_0x00010bfdd2c0();
    if (((((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010bfdd300(), (int)uVar2 == 0)) ||
        (uVar2 = uVar1, func_0x00010bfdd5a0(), (int)uVar2 == 0)) ||
       ((uVar2 = uVar1, func_0x00010bfd6920(), (int)uVar2 == 0 ||
        (uVar2 = uVar1, func_0x00010bfde900(), (int)uVar2 == 0)))) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c0c68;
      _objc_alloc(PTR_PTR_1126c0c68);
      uVar2 = uVar1;
      func_0x00010c26a260(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar3,param_2,uVar2);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c26fb60(uVar1);
      uVar4 = uVar1;
      func_0x00010bf8d100(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600((double)(long)((uVar2 & 0xffffffff) - uVar4) / 1000.0,
                          PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c2a7280(uVar1);
      puVar6 = PTR_PTR_1126d3098;
      uVar4 = uVar1;
      func_0x00010c269f40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f4e60((double)(uVar2 & 0xffffffff) / 1000.0,puVar6,param_2,puVar3,uVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f8dedc; end: 106f8df03; +[SCSpectaclesLagunaNrfResponseMessage _descriptionForFailureReason:] */

undefined ** FUN_106f8dedc(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 4U < 3) {
    return (undefined **)(&PTR_PTR_110986180)[param_3 - 4U];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 106f8df04; end: 106f8e033; -[SCSpectaclesLagunaNrfResponseMessage backgroundUpdateFailureReason] */

undefined * FUN_106f8df04(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0dd9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c088ae0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_opt_class();
    func_0x00010bdfaf80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = param_1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e78258,
                        (long)(int)puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4c040();
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106f8e034; end: 106f8e06f; -[SCSpectaclesLagunaNrfResponseMessage contentCleared] */

undefined8 FUN_106f8e034(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4c040();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8e070; end: 106f8e0ab; -[SCSpectaclesLagunaNrfResponseMessage ambaCrashed] */

undefined8 FUN_106f8e070(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf02280();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8e0ac; end: 106f8e0e7; -[SCSpectaclesLagunaNrfResponseMessage videoRecordingHasStarted] */

undefined8 FUN_106f8e0ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29af80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8e0e8; end: 106f8e17b; -[SCSpectaclesLagunaNrfResponseMessage mediaCount] */

void FUN_106f8e0e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c0ddae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8f40();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c0ddae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0c4760();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8e17c; end: 106f8e18b; -[SCSpectaclesLagunaNrfResponseMessage nrfResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f8e17c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761c60);
}



/* Entry: 106f8e18c; end: 106f8e19f; -[SCSpectaclesLagunaNrfResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f8e18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761c60,0);
  return;
}



/* Entry: 106f8e1a0; end: 106f8e39b; -[SCSpectaclesLagunaPeripheral initWithPeripheral:delegate:] */

undefined1 *
FUN_106f8e1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f80e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3968;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d37e8;
    func_0x00010c22bca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3240;
    puVar5 = PTR_PTR_1126d38c8;
    func_0x00010c087ca0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d38c8;
    func_0x00010c087d00(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d38c8;
    func_0x00010c087c80(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95e80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf550e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f8e39c; end: 106f8e51b; -[SCSpectaclesLagunaPeripheral _handleNrfResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f8e400) */

void FUN_106f8e39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d39c0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  puVar2 = puVar1;
  func_0x00010c252d60();
  if ((int)puVar2 == 4) {
    lVar4 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c1373a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c1373a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd60();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c112820(param_1);
    func_0x00010c1e26e0(param_1,param_2,lVar3 + 1);
  }
  lVar3 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d39c8;
  _objc_alloc(PTR_PTR_1126d39c8);
  func_0x00010c0303c0();
  func_0x00010c0f9a20(lVar3,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f8e51c; end: 106f8e7df; -[SCSpectaclesLagunaPeripheral _handleEncryptionResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f8e584) */

void FUN_106f8e51c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar1 = PTR_PTR_1126d3980;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  puVar2 = puVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0cba00();
  _objc_release(puVar2);
  iVar6 = (int)puVar3;
  if (iVar6 < 6) {
    if (iVar6 - 1U < 3) {
LAB_106f8e68c:
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f9a00();
    }
    else {
      if (1 < iVar6 - 4U) goto LAB_106f8e7b4;
      puVar2 = PTR_PTR_1126d39d0;
      _objc_alloc(PTR_PTR_1126d39d0);
      func_0x00010c00fd80();
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f9a20();
      puVar3 = param_1;
LAB_106f8e7a4:
      param_1 = puVar2;
      _objc_release(puVar3);
    }
  }
  else {
    if (iVar6 - 6U < 2) goto LAB_106f8e68c;
    puVar2 = param_1;
    puVar3 = puVar1;
    if (iVar6 == 8) {
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb140(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0cb3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c1ef020(puVar2,param_2,puVar4);
    }
    else {
      if (iVar6 != 9) goto LAB_106f8e7b4;
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb140(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0cb3e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c1ef040(puVar2,param_2,puVar4);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      puVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,3,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f99e0(puVar2,param_2,param_1,puVar3);
      goto LAB_106f8e7a4;
    }
    puVar2 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf48ce0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_106f8e7b4;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a40();
  }
  _objc_release(param_1);
LAB_106f8e7b4:
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f8e7e0; end: 106f8e917; -[SCSpectaclesLagunaPeripheral setupEncryptionWithKey:] */

void FUN_106f8e7e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010c195c40(param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9a40();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f8e918; end: 106f8ebaf;  */

void FUN_106f8e918(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126d39d8;
  _objc_alloc_init(PTR_PTR_1126d39d8);
  func_0x00010c195d80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c195ce0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar2,param_2,puVar1,puVar3);
    goto LAB_106f8eb88;
  }
  puVar2 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c21ac80();
  if (((ulong)puVar5 & 1) == 0) {
    _objc_release(puVar4);
LAB_106f8eb2c:
    puVar4 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar4,param_2,puVar1,puVar5);
  }
  else {
    puVar5 = puVar1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c21aca0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (((ulong)puVar6 & 1) == 0) goto LAB_106f8eb2c;
    puVar4 = PTR_PTR_1126d3230;
    _objc_alloc_init(PTR_PTR_1126d3230);
    puVar5 = puVar4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7160();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c0cb140(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6ec0();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d3230;
    _objc_alloc_init(PTR_PTR_1126d3230);
    puVar6 = puVar5;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7160();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c0cb140(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6ec0();
    _objc_release(puVar6);
    func_0x00010c15bc00(puVar1,param_2,puVar4);
    func_0x00010c15bc00(puVar1,param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_106f8eb88:
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f8ebb0; end: 106f8eca7; -[SCSpectaclesLagunaPeripheral sendRequest:] */

void FUN_106f8ebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f8eca8; end: 106f8eec7;  */

void FUN_106f8eca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0791a0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 2;
LAB_106f8ee7c:
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f99e0(puVar2,param_2,puVar1,puVar3);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c087c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_106f8eeb0;
    puVar2 = puVar1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf48ce0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
LAB_106f8ee54:
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 3;
      goto LAB_106f8ee7c;
    }
    puVar3 = puVar1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c087c40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf93920(puVar3,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) goto LAB_106f8ee54;
    puVar3 = puVar1;
    func_0x00010c1373a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c25c420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c0cb2c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf64c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00(puVar3,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_106f8eeb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f8eec8; end: 106f8efbf; -[SCSpectaclesLagunaPeripheral sendEncryptionRequest:] */

void FUN_106f8eec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f8efc0; end: 106f8f0a3;  */

void FUN_106f8efc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0791a0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = lVar1;
    func_0x00010c25c420(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0cb2c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf64c40(lVar3,param_2,uVar4,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00(lVar2,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


