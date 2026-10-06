/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ea2fd0; end: 107ea2fd7; -[IGListUpdateTransactionBuilder setReloadBlock:] */

void FUN_107ea2fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ea2fd8; end: 107ea2fdf; -[IGListUpdateTransactionBuilder dataSourceChangeBlock] */

undefined8 FUN_107ea2fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ea2fe0; end: 107ea2fe7; -[IGListUpdateTransactionBuilder setDataSourceChangeBlock:] */

void FUN_107ea2fe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ea2fe8; end: 107ea2fef; -[IGListUpdateTransactionBuilder mode] */

undefined8 FUN_107ea2fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ea2ff0; end: 107ea2ff7; -[IGListUpdateTransactionBuilder setMode:] */

void FUN_107ea2ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107ea2ff8; end: 107ea2fff; -[IGListUpdateTransactionBuilder collectionViewBlock] */

undefined8 FUN_107ea2ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107ea3000; end: 107ea3007; -[IGListUpdateTransactionBuilder setCollectionViewBlock:] */

void FUN_107ea3000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107ea3008; end: 107ea300f; -[IGListUpdateTransactionBuilder completionBlocks] */

undefined8 FUN_107ea3008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107ea3010; end: 107ea307b; -[IGListUpdateTransactionBuilder .cxx_destruct] */

void FUN_107ea3010(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107ea307c; end: 107ea3097;  */

void FUN_107ea307c(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea3098; end: 107ea3377;  */

undefined * FUN_107ea3098(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf6bfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c100(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c0668e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066a40(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c2867e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  puVar1 = param_3;
  func_0x00010c0d1520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *plStack_1a0;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        uVar4 = *(undefined8 *)(lStack_1a8 + (long)puVar6 * 8);
        uVar3 = uVar4;
        func_0x00010bfba9a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2719c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d1540(param_1,param_2,uVar3,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        puVar6 = puVar6 + 1;
      } while (puVar2 != puVar6);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  puVar1 = param_3;
  func_0x00010c0d1740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *plStack_1e0;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar5) {
          _objc_enumerationMutation(puVar1);
        }
        uVar4 = *(undefined8 *)(lStack_1e8 + (long)puVar6 * 8);
        uVar3 = uVar4;
        func_0x00010bfba9a0(uVar4);
        func_0x00010c2719c0(uVar4);
        func_0x00010c0d16e0(param_1,param_2,uVar3,uVar4);
        puVar6 = puVar6 + 1;
      } while (puVar2 != puVar6);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_1f0,auStack_168,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf6c720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c740(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c066da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c066dc0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d8198;
  _objc_retain(puVar2);
  _objc_alloc_init(puVar1);
  func_0x00010c224b00();
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 107ea3378; end: 107ea33c3; +[IGListAdapterWeakContainer newWithObject:] */

undefined * FUN_107ea3378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8198;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c224b00();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ea33c4; end: 107ea33db; -[IGListAdapterWeakContainer weakObject] */

void FUN_107ea33c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea33dc; end: 107ea33e7; -[IGListAdapterWeakContainer setWeakObject:] */

void FUN_107ea33dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107ea33e8; end: 107ea33ef; -[IGListAdapterWeakContainer .cxx_destruct] */

void FUN_107ea33e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107ea33f0; end: 107ea3437;  */

void FUN_107ea33f0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8198;
  func_0x00010c0d9600(PTR_PTR_1126d8198);
  _objc_setAssociatedObject(param_1,PTR_LOOP_11324b298,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ea3438; end: 107ea353b;  */

void FUN_107ea3438(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bfe65c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  _objc_getAssociatedObject(param_3,PTR_LOOP_11324b298);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a2b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  if (lVar3 == 0) {
    _objc_retain(lVar1);
  }
  else {
    func_0x00010c28d5e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      lVar4 = param_3;
    }
    _objc_retain(lVar4);
    _objc_release(param_3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ea353c; end: 107ea369f;  */

void FUN_107ea353c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1554e0(param_3);
  uVar2 = param_4;
  func_0x00010c1554e0();
  uVar3 = param_4;
  func_0x00010c0840e0();
  _objc_release(param_4);
  lVar4 = param_5;
  func_0x00010c155820(param_5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c155820(param_5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2160(param_5,param_2,0);
  lVar6 = lVar4;
  func_0x00010c0deea0();
  if (lVar6 == 1) {
    lVar6 = lVar5;
    func_0x00010c0deea0();
    puVar8 = (undefined *)0x0;
    if ((lVar6 == 1) && (uVar3 == 1)) {
      lVar6 = param_5;
      func_0x00010c0e0300();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      bVar1 = lVar7 - 1U <= uVar2;
      if (bVar1) {
        func_0x00010c1b2160(param_5,param_2,1);
      }
      else {
        uVar2 = uVar2 + 1;
      }
      puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,bVar1,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ea36a0; end: 107ea373f;  */

void FUN_107ea36a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfe65a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe64c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ea3740; end: 107ea39c3;  */

void FUN_107ea3740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be36da0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bf40120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0df300();
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010c06a2c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      if (uVar3 != 0) {
        uVar2 = param_3;
        func_0x00010c06a2c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar1);
        uVar3 = uVar2;
        func_0x00010bfece40();
        _objc_release(uVar2);
        if (uVar3 != 0x7fffffffffffffff) {
          uVar2 = param_3;
          func_0x00010c06a2c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0d3c80();
          _objc_release(uVar2);
          func_0x00010c12d3c0(uVar3);
          puVar4 = PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8;
          _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewFlowLayoutInvalidationContext_1126d80c8)
          ;
          uVar2 = param_3;
          _objc_opt_isKindOfClass(param_3,puVar4);
          uVar5 = param_1;
          _objc_opt_class(param_1);
          func_0x00010c06a340();
          _objc_opt_new();
          if ((uVar2 & 1) != 0) {
            func_0x00010c069f00(param_3);
            func_0x00010c1ae7e0(uVar5);
            func_0x00010c069ee0(param_3);
            func_0x00010c1ae7c0(uVar5);
          }
          func_0x00010c069fc0(uVar5);
          uVar2 = param_3;
          func_0x00010c06a320(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c06a2a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe6520(param_1);
          _objc_release(uVar6);
          _objc_release(uVar2);
          func_0x00010bf4cde0(param_3);
          func_0x00010c182340(uVar5);
          func_0x00010bf4d600(param_3);
          func_0x00010c1827e0(uVar5);
          _objc_release(uVar3);
          _objc_release(uVar1);
          goto LAB_107ea387c;
        }
        _objc_release(uVar1);
      }
    }
  }
  _objc_retain(param_3);
  uVar5 = param_3;
LAB_107ea387c:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107ea39c4; end: 107ea3a67;  */

bool FUN_107ea39c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c1554e0();
  if (lVar1 == *(long *)(param_1 + 0x28) + -1) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c1554e0(param_2);
    func_0x00010c155820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0840e0(param_2);
    lVar2 = lVar4;
    func_0x00010c0deea0(lVar4);
    bVar3 = lVar2 <= lVar1;
    _objc_release(lVar4);
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_2);
  return bVar3;
}



/* Entry: 107ea3a68; end: 107ea3ac7;  */

void FUN_107ea3a68(long param_1)

{
  long lVar1;
  
  _objc_getAssociatedObject(param_1,PTR_LOOP_11324b298);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c2a2b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107ea3ac8; end: 107ea3ba7;  */

void FUN_107ea3ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ea3ba8;
  puStack_60 = &UNK_1108c0730;
  _objc_retain(param_5);
  uStack_58 = param_5;
  _objc_retain(param_4);
  func_0x00010bf97ce0(param_3,param_2,&puStack_78);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107ea3bb8;
  puStack_88 = &UNK_1108c0730;
  uStack_80 = param_5;
  _objc_retain(param_5);
  func_0x00010bf97ce0(param_4,param_2,&puStack_a0);
  _objc_release(param_4);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107ea3ba8; end: 107ea3bc7;  */

void FUN_107ea3ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_invalidateSupplementaryElementsO_1125f8280,
             param_2,param_3);
  return;
}



/* Entry: 107ea3bc8; end: 107ea3beb;  */

void FUN_107ea3bc8(undefined8 param_1)

{
  func_0x00010bf4c7c0();
                    /* WARNING: Could not recover jumptable at 0x00010befda10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adjustedContentInset_11259d028);
  return;
}



/* Entry: 107ea3bec; end: 107ea3e53; +[IGListBatchUpdateData _cleanIndexPathsWithMap:moves:indexPaths:deletes:inserts:] */

void FUN_107ea3bec(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = param_5;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    uVar3 = param_5;
    func_0x00010bf529e0();
    lVar11 = uVar3 - 1;
    if (-1 < (long)(uVar3 - 1)) {
      do {
        uVar3 = param_5;
        func_0x00010c0dfd40(param_5,param_2,lVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c1554e0();
        uVar6 = param_3[1];
        if (uVar6 != 0 && param_3[3] != 0) {
          uVar7 = uVar6 - 1;
          if ((uVar6 & uVar7) == 0) {
            uVar8 = uVar7 & uVar4;
          }
          else {
            uVar8 = uVar4;
            if (uVar6 <= uVar4) {
              uVar8 = 0;
              if (uVar6 != 0) {
                uVar8 = uVar4 / uVar6;
              }
              uVar8 = uVar4 - uVar8 * uVar6;
            }
          }
          plVar9 = *(long **)(*param_3 + uVar8 * 8);
          if (plVar9 != (long *)0x0) {
            for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              uVar10 = plVar9[1];
              if (uVar4 == uVar10) {
                if (plVar9[2] == uVar4) {
                  if (plVar9[3] != 0) {
                    func_0x00010c12d3c0(param_5,param_2,lVar11);
                    uVar12 = plVar9[3];
                    _objc_retain(param_4);
                    _objc_retain(uVar12);
                    _objc_retain(param_6);
                    _objc_retain(param_7);
                    func_0x00010c12d360(param_4,param_2,uVar12);
                    uVar5 = uVar12;
                    func_0x00010bfba9a0(uVar12);
                    func_0x00010bef92c0(param_6,param_2,uVar5);
                    uVar5 = uVar12;
                    func_0x00010c2719c0(uVar12);
                    func_0x00010bef92c0(param_7,param_2,uVar5);
                    _objc_release(param_7);
                    _objc_release(param_6);
                    _objc_release(uVar12);
                    _objc_release(param_4);
                  }
                  break;
                }
              }
              else {
                if ((uVar6 & uVar7) == 0) {
                  uVar10 = uVar10 & uVar7;
                }
                else if (uVar6 <= uVar10) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar10 / uVar6;
                  }
                  uVar10 = uVar10 - uVar2 * uVar6;
                }
                if (uVar10 != uVar8) break;
              }
            }
          }
        }
        _objc_release(uVar3);
        bVar1 = 0 < lVar11;
        lVar11 = lVar11 + -1;
      } while (bVar1);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ea3e54; end: 107ea4607; -[IGListBatchUpdateData initWithInsertSections:deleteSections:moveSections:insertIndexPaths:deleteIndexPaths:updateIndexPaths:moveIndexPaths:] */

undefined8 *
FUN_107ea3e54(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,long param_5,
             undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x27;
  ulong uVar33;
  undefined8 *puVar34;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long alStack_228 [3];
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_178 = PTR_PTR_1126fb8d8;
  puVar34 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar34,PTR_s_init_1125d9248);
  lVar2 = param_7;
  if (puVar34 != (undefined8 *)0x0) {
    unaff_x27 = param_5;
    func_0x00010c0d3c80();
    uStack_290 = param_4;
    func_0x00010c0d3c80();
    puStack_288 = param_3;
    func_0x00010c0d3c80();
    lVar2 = param_9;
    func_0x00010c0d3c80();
    lVar3 = param_5;
    func_0x00010bf529e0();
    if (lVar3 < 2) {
      lVar3 = 1;
    }
    uStack_1a8 = 0;
    lStack_1b0 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0x3f800000;
    FUN_107ea4c44(&lStack_1b0,lVar3);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3f800000;
    FUN_107ea4c44(&uStack_1e0,lVar3);
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    alStack_228[2] = 0;
    alStack_228[1] = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    _objc_retain(param_5);
    lVar3 = param_5;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar30 = *plStack_210;
      do {
        lVar31 = 0;
        do {
          if (*plStack_210 != lVar30) {
            _objc_enumerationMutation(param_5);
          }
          lVar32 = *(long *)(alStack_228[2] + lVar31 * 8);
          lVar7 = lVar32;
          func_0x00010bfba9a0();
          lVar4 = lVar32;
          alStack_228[0] = lVar7;
          func_0x00010c2719c0();
          uVar5 = param_4;
          lStack_230 = lVar4;
          func_0x00010bf4b800();
          if (((uVar5 & 1) == 0) && (puVar6 = param_3, func_0x00010bf4b800(), (int)puVar6 == 0)) {
            plVar28 = &lStack_1b0;
            FUN_107ea4e64(plVar28,lVar7,alStack_228);
            _objc_retain(lVar32);
            lVar7 = plVar28[3];
            plVar28[3] = lVar32;
            _objc_release(lVar7);
            puVar6 = &uStack_1e0;
            FUN_107ea4e64(puVar6,lVar4,&lStack_230);
            _objc_retain(lVar32);
            uVar24 = puVar6[3];
            puVar6[3] = lVar32;
            _objc_release(uVar24);
          }
          else {
            func_0x00010c12d360(unaff_x27);
          }
          lVar31 = lVar31 + 1;
        } while (lVar3 != lVar31);
        lVar3 = param_5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_5);
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puStack_2c0 = puVar9;
    func_0x00010c0d3c80();
    _objc_release(puVar9);
    _objc_release(puVar8);
    uStack_2b8 = param_6;
    func_0x00010c0d3c80();
    func_0x00010bddef00(PTR_PTR_1126d8168);
    func_0x00010bddef00(PTR_PTR_1126d8168);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain(param_9);
    puVar6 = &uStack_270;
    lVar3 = param_9;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar30 = *plStack_260;
      do {
        lVar31 = 0;
        do {
          if (*plStack_260 != lVar30) {
            _objc_enumerationMutation(param_9);
          }
          uVar33 = *(ulong *)(lStack_268 + lVar31 * 8);
          uVar5 = uVar33;
          func_0x00010bfba9a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1554e0();
          uVar26 = param_4;
          func_0x00010bf4b800();
          _objc_release(uVar5);
          if ((int)uVar26 != 0) {
            func_0x00010c12d360(lVar2);
          }
          func_0x00010bfba9a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar33;
          func_0x00010c1554e0();
          if ((uStack_1a8 != 0) && (lStack_198 != 0)) {
            uVar26 = uStack_1a8 - 1;
            if ((uStack_1a8 & uVar26) == 0) {
              uVar27 = uVar26 & uVar5;
            }
            else {
              uVar27 = uVar5;
              if (uStack_1a8 <= uVar5) {
                uVar27 = 0;
                if (uStack_1a8 != 0) {
                  uVar27 = uVar5 / uStack_1a8;
                }
                uVar27 = uVar5 - uVar27 * uStack_1a8;
              }
            }
            plVar28 = *(long **)(lStack_1b0 + uVar27 * 8);
            if (plVar28 != (long *)0x0) {
              for (plVar28 = (long *)*plVar28; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
                uVar29 = plVar28[1];
                if (uVar29 == uVar5) {
                  if (plVar28[2] == uVar5) {
                    _objc_release(uVar33);
                    uVar33 = plVar28[3];
                    if (uVar33 == 0) goto LAB_107ea42e8;
                    _objc_retain(uVar33);
                    func_0x00010c12d360(lVar2);
                    func_0x00010c12d360(unaff_x27);
                    func_0x00010bfba9a0(uVar33);
                    func_0x00010bef92c0(uStack_290);
                    func_0x00010c2719c0(uVar33);
                    func_0x00010bef92c0(puStack_288);
                    break;
                  }
                }
                else {
                  if ((uStack_1a8 & uVar26) == 0) {
                    uVar29 = uVar29 & uVar26;
                  }
                  else if (uStack_1a8 <= uVar29) {
                    uVar1 = 0;
                    if (uStack_1a8 != 0) {
                      uVar1 = uVar29 / uStack_1a8;
                    }
                    uVar29 = uVar29 - uVar1 * uStack_1a8;
                  }
                  if (uVar29 != uVar27) break;
                }
              }
            }
          }
          _objc_release(uVar33);
LAB_107ea42e8:
          lVar31 = lVar31 + 1;
        } while (lVar31 != lVar3);
        puVar6 = &uStack_270;
        lVar3 = param_9;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_9);
    uVar5 = uStack_290;
    func_0x00010bf51e00();
    uVar24 = puVar34[2];
    puVar34[2] = uVar5;
    _objc_release(uVar24);
    puVar10 = puStack_288;
    func_0x00010bf51e00();
    uVar24 = puVar34[1];
    puVar34[1] = puVar10;
    _objc_release(uVar24);
    lVar3 = unaff_x27;
    func_0x00010bf51e00();
    uVar24 = puVar34[3];
    puVar34[3] = lVar3;
    _objc_release(uVar24);
    puVar8 = puStack_2c0;
    func_0x00010bf51e00();
    uVar24 = puVar34[5];
    puVar34[5] = puVar8;
    _objc_release(uVar24);
    uVar24 = uStack_2b8;
    func_0x00010bf51e00();
    uVar25 = puVar34[4];
    puVar34[4] = uVar24;
    _objc_release(uVar25);
    uVar24 = param_8;
    func_0x00010bf51e00();
    uVar25 = puVar34[6];
    puVar34[6] = uVar24;
    _objc_release(uVar25);
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar24 = puVar34[7];
    puVar34[7] = lVar3;
    _objc_release(uVar24);
    _objc_release(uStack_2b8);
    _objc_release(puStack_2c0);
    func_0x000107ea4e08(&uStack_1e0);
    func_0x000107ea4e08(&lStack_1b0);
    _objc_release(lVar2);
    _objc_release(puStack_288);
    _objc_release(uStack_290);
    _objc_release(unaff_x27);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar34;
  }
  ___stack_chk_fail();
  _objc_release(param_9);
  _objc_release(uStack_2b8);
  _objc_release(puStack_2c0);
  func_0x000107ea4e08(&uStack_1e0);
  func_0x000107ea4e08(&lStack_1b0);
  _objc_release(lVar2);
  _objc_release(puStack_288);
  _objc_release(uStack_290);
  _objc_release(unaff_x27);
  _objc_release(puVar34);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar6);
  if (puVar6 == puVar10) {
    puVar34 = (undefined8 *)0x1;
  }
  else {
    puVar8 = PTR_PTR_1126d8168;
    _objc_opt_class(PTR_PTR_1126d8168);
    puVar34 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar8);
    if (((ulong)puVar34 & 1) == 0) {
      puVar34 = (undefined8 *)0x0;
    }
    else {
      puVar11 = puVar10;
      func_0x00010c066da0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010c066da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar11;
      func_0x00010c071ae0();
      if ((int)puVar34 == 0) {
        puVar34 = (undefined8 *)0x0;
      }
      else {
        puVar13 = puVar10;
        func_0x00010bf6c720();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar6;
        func_0x00010bf6c720(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar13;
        func_0x00010c071ae0();
        if ((int)puVar34 == 0) {
          puVar34 = (undefined8 *)0x0;
        }
        else {
          puVar15 = puVar10;
          func_0x00010c0d1740();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar6;
          func_0x00010c0d1740(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar34 = puVar15;
          func_0x00010c071ae0();
          if ((int)puVar34 == 0) {
            puVar34 = (undefined8 *)0x0;
          }
          else {
            puVar17 = puVar10;
            func_0x00010c0668e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar6;
            func_0x00010c0668e0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar34 = puVar17;
            func_0x00010c071ae0();
            if ((int)puVar34 == 0) {
              puVar34 = (undefined8 *)0x0;
            }
            else {
              puVar19 = puVar10;
              func_0x00010bf6bfe0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar6;
              func_0x00010bf6bfe0();
              _objc_retainAutoreleasedReturnValue();
              puVar34 = puVar19;
              func_0x00010c071ae0();
              if ((int)puVar34 == 0) {
                puVar34 = (undefined8 *)0x0;
              }
              else {
                puVar21 = puVar10;
                func_0x00010c2867e0();
                _objc_retainAutoreleasedReturnValue();
                puVar22 = puVar6;
                func_0x00010c2867e0();
                _objc_retainAutoreleasedReturnValue();
                puVar34 = puVar21;
                func_0x00010c071ae0();
                if ((int)puVar34 == 0) {
                  puVar34 = (undefined8 *)0x0;
                }
                else {
                  func_0x00010c0d1520();
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = puVar6;
                  func_0x00010c0d1520();
                  _objc_retainAutoreleasedReturnValue();
                  puVar34 = puVar10;
                  func_0x00010c071ae0(puVar10);
                  _objc_release(puVar23);
                  _objc_release(puVar10);
                }
                _objc_release(puVar22);
                _objc_release(puVar21);
              }
              _objc_release(puVar20);
              _objc_release(puVar19);
            }
            _objc_release(puVar18);
            _objc_release(puVar17);
          }
          _objc_release(puVar16);
          _objc_release(puVar15);
        }
        _objc_release(puVar14);
        _objc_release(puVar13);
      }
      _objc_release(puVar12);
      _objc_release(puVar11);
    }
  }
  _objc_release(puVar6);
  return puVar34;
}



/* Entry: 107ea4608; end: 107ea49b7; -[IGListBatchUpdateData isEqual:] */

ulong FUN_107ea4608(ulong param_1,undefined8 param_2,ulong param_3)

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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar15 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d8168;
    _objc_opt_class(PTR_PTR_1126d8168);
    uVar15 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar15 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c066da0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c066da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar2;
      func_0x00010c071ae0();
      if ((int)uVar15 == 0) {
        uVar15 = 0;
      }
      else {
        uVar4 = param_1;
        func_0x00010bf6c720();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010bf6c720(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar4;
        func_0x00010c071ae0();
        if ((int)uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar6 = param_1;
          func_0x00010c0d1740();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = param_3;
          func_0x00010c0d1740(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar6;
          func_0x00010c071ae0();
          if ((int)uVar15 == 0) {
            uVar15 = 0;
          }
          else {
            uVar8 = param_1;
            func_0x00010c0668e0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_3;
            func_0x00010c0668e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar8;
            func_0x00010c071ae0();
            if ((int)uVar15 == 0) {
              uVar15 = 0;
            }
            else {
              uVar10 = param_1;
              func_0x00010bf6bfe0();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = param_3;
              func_0x00010bf6bfe0();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar10;
              func_0x00010c071ae0();
              if ((int)uVar15 == 0) {
                uVar15 = 0;
              }
              else {
                uVar12 = param_1;
                func_0x00010c2867e0();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = param_3;
                func_0x00010c2867e0();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar12;
                func_0x00010c071ae0();
                if ((int)uVar15 == 0) {
                  uVar15 = 0;
                }
                else {
                  func_0x00010c0d1520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = param_3;
                  func_0x00010c0d1520();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = param_1;
                  func_0x00010c071ae0(param_1);
                  _objc_release(uVar14);
                  _objc_release(param_1);
                }
                _objc_release(uVar13);
                _objc_release(uVar12);
              }
              _objc_release(uVar11);
              _objc_release(uVar10);
            }
            _objc_release(uVar9);
            _objc_release(uVar8);
          }
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return uVar15;
}



/* Entry: 107ea49b8; end: 107ea4b9f; -[IGListBatchUpdateData description] */

void FUN_107ea49b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf6c720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010c066da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010c0d1740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar5 = param_1;
  func_0x00010bf6bfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar6 = param_1;
  func_0x00010c0668e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2867e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110ec2118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ea4ba0; end: 107ea4ba7; -[IGListBatchUpdateData insertSections] */

undefined8 FUN_107ea4ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ea4ba8; end: 107ea4baf; -[IGListBatchUpdateData deleteSections] */

undefined8 FUN_107ea4ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ea4bb0; end: 107ea4bb7; -[IGListBatchUpdateData moveSections] */

undefined8 FUN_107ea4bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ea4bb8; end: 107ea4bbf; -[IGListBatchUpdateData insertIndexPaths] */

undefined8 FUN_107ea4bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107ea4bc0; end: 107ea4bc7; -[IGListBatchUpdateData deleteIndexPaths] */

undefined8 FUN_107ea4bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107ea4bc8; end: 107ea4bcf; -[IGListBatchUpdateData updateIndexPaths] */

undefined8 FUN_107ea4bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107ea4bd0; end: 107ea4bd7; -[IGListBatchUpdateData moveIndexPaths] */

undefined8 FUN_107ea4bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107ea4bd8; end: 107ea4c43; -[IGListBatchUpdateData .cxx_destruct] */

void FUN_107ea4bd8(long param_1)

{
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



/* Entry: 107ea4c44; end: 107ea4e63;  */

long * FUN_107ea4c44(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar10 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar10 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar10;
    }
    plVar10 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar10) {
      plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
    }
    if (param_2 <= plVar10) {
      param_2 = plVar10;
    }
    if (plVar9 <= param_2) {
      return plVar10;
    }
    if (param_2 == (long *)0x0) {
      plVar10 = (long *)*param_1;
      *param_1 = 0;
      if (plVar10 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar10;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar10 = (long *)((long)param_2 << 3);
    __Znwm();
    lVar2 = *param_1;
    *param_1 = (long)plVar10;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar10 = (long *)*param_1;
    }
    param_1[1] = (long)param_2;
    plVar3 = plVar10;
    _bzero(plVar10,(long *)((long)param_2 << 3));
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      plVar10[(long)plVar5] = (long)(param_1 + 2);
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          if (plVar10[(long)plVar8] == 0) {
            plVar10[(long)plVar8] = (long)plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = *(undefined8 *)plVar10[(long)plVar8];
            *(long **)plVar10[(long)plVar8] = plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104bd35f4();
  plVar9 = (long *)plVar10[2];
  while (plVar9 != (long *)0x0) {
    lVar2 = *plVar9;
    _objc_release(plVar9[3]);
    __ZdlPv(plVar9);
    plVar9 = (long *)lVar2;
  }
  lVar2 = *plVar10;
  *plVar10 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar10;
}



/* Entry: 107ea4e64; end: 107ea507f;  */

long * FUN_107ea4e64(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x24 = uVar3 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  plVar2 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar2 = 0;
  plVar2[1] = param_2;
  plVar2[2] = *param_3;
  plVar2[3] = 0;
  plStack_60 = plVar5;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    plStack_68 = plVar2;
    FUN_107ea4c44(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar2 != 0) {
      uVar3 = *(ulong *)(*plVar2 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar3 = uVar3 & uVar8 - 1;
      }
      else if (uVar8 <= uVar3) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar3 / uVar8;
        }
        uVar3 = uVar3 - uVar6 * uVar8;
      }
      *(long **)(lVar4 + uVar3 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_107ea5080(&plStack_68);
  return plVar2;
}



/* Entry: 107ea5080; end: 107ea50c7;  */

void FUN_107ea5080(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      _objc_release(*(undefined8 *)(lVar1 + 0x18));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107ea50c8; end: 107ea50fb;  */

void FUN_107ea50c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_107ea50fc(0,0,0,param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea50fc; end: 107ea5df7;  */

void FUN_107ea50fc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  undefined *puVar18;
  undefined *puStack_188;
  long lStack_160;
  long lStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *apuStack_130 [3];
  long *aplStack_118 [3];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_5;
  func_0x00010bf529e0();
  puVar18 = param_4;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c25de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x00010c25de00();
  _objc_retainAutoreleasedReturnValue();
  iVar17 = (int)param_1;
  puVar12 = PTR_PTR_1126d80f0;
  if (puVar2 == (undefined *)0x0) {
    if (iVar17 == 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_107ea5ee0;
      puStack_88 = &UNK_110a109d8;
      uStack_78 = param_2;
      uStack_70 = (char)param_1;
      _objc_retain(puVar3);
      puStack_80 = puVar3;
      func_0x00010bf97e80(param_4);
      puVar12 = PTR_PTR_1126d80f8;
      _objc_alloc(PTR_PTR_1126d80f8);
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      _objc_opt_new(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      puVar18 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      _objc_opt_new(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x00010c01e300(puVar12);
      _objc_release(puVar9);
      _objc_release(puVar14);
      _objc_release(puVar18);
      _objc_release(puVar2);
      puVar2 = puStack_80;
    }
    else {
      _objc_alloc(PTR_PTR_1126d80f0);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar18 = param_4;
      FUN_107ea5e2c(param_4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x00010c01e320(puVar12);
LAB_107ea5598:
      _objc_release(puVar9);
      _objc_release(puVar14);
      _objc_release(puVar18);
    }
  }
  else {
    if (puVar18 != (undefined *)0x0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0x3f800000;
      FUN_107ea6114(aplStack_118,puVar2);
      if (0 < (long)puVar2) {
        puVar12 = (undefined *)0x0;
        plVar16 = aplStack_118[0];
        do {
          puVar14 = param_5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar14;
          func_0x00010bf7ecc0();
          _objc_retainAutoreleasedReturnValue();
          apuStack_130[0] = puVar9;
          _objc_release(puVar14);
          puVar5 = &uStack_100;
          FUN_107ea61b8(puVar5,apuStack_130,apuStack_130);
          puVar5[4] = puVar5[4] + 1;
          FUN_107ea66fc(puVar5 + 5,0x7fffffffffffffff);
          *plVar16 = (long)(puVar5 + 3);
          _objc_release(puVar9);
          puVar12 = puVar12 + 1;
          plVar16 = plVar16 + 2;
        } while (puVar2 != puVar12);
      }
      FUN_107ea6114(apuStack_130,puVar18);
      puVar12 = apuStack_130[0];
      if (0 < (long)puVar18) {
        puVar14 = puVar18 + 1;
        lVar10 = (long)puVar18 * 0x10;
        do {
          lVar10 = lVar10 + -0x10;
          puVar9 = param_4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010bf7ecc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_148 = puVar6;
          _objc_release(puVar9);
          puVar5 = &uStack_100;
          FUN_107ea61b8(puVar5,&puStack_148,&puStack_148);
          plVar16 = puVar5 + 3;
          *plVar16 = *plVar16 + 1;
          FUN_107ea66fc(puVar5 + 5,puVar14 + -2);
          *(long **)(puVar12 + lVar10) = plVar16;
          _objc_release(puVar6);
          puVar14 = puVar14 + -1;
        } while ((undefined *)0x1 < puVar14);
      }
      puVar12 = apuStack_130[0];
      if (0 < (long)puVar2) {
        puVar14 = (undefined *)0x0;
        plVar16 = aplStack_118[0] + 1;
        do {
          plVar15 = (long *)plVar16[-1];
          lVar13 = plVar15[3];
          lVar11 = plVar15[4];
          lVar10 = 0;
          if (lVar11 != lVar13) {
            lVar10 = (lVar11 - lVar13) * 0x40 + -1;
          }
          uVar1 = plVar15[7] + -1 + plVar15[6];
          lVar13 = *(long *)(*(long *)(lVar13 + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8);
          plVar15[7] = plVar15[7] + -1;
          if (0x3ff < lVar10 - uVar1) {
            __ZdlPv(*(undefined8 *)(lVar11 + -8));
            plVar15[4] = plVar15[4] + -8;
          }
          if (lVar13 < (long)puVar18) {
            puVar9 = param_5;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            if (param_6 == 0) {
              if (puVar9 != puVar6) goto LAB_107ea53dc;
            }
            else if (((param_6 == 1) && (puVar9 != puVar6)) &&
                    (puVar7 = puVar9, func_0x00010c071d20(), ((ulong)puVar7 & 1) == 0)) {
LAB_107ea53dc:
              *(undefined1 *)(plVar15 + 8) = 1;
            }
            _objc_release(puVar6);
            _objc_release(puVar9);
LAB_107ea53f4:
            if ((0 < plVar15[1]) && (0 < *plVar15)) {
              *plVar16 = lVar13;
              *(undefined **)(puVar12 + lVar13 * 0x10 + 8) = puVar14;
            }
          }
          else if (lVar13 != 0x7fffffffffffffff) goto LAB_107ea53f4;
          puVar14 = puVar14 + 1;
          plVar16 = plVar16 + 2;
        } while (puVar2 != puVar14);
      }
      if ((param_1 & 1) == 0) {
        puVar14 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
        _objc_opt_new();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar6 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
        _objc_opt_new();
        puStack_188 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
        _objc_opt_new();
      }
      else {
        puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puStack_188 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
      }
      FUN_107ea6b30(&puStack_148,puVar18);
      FUN_107ea6b30(&lStack_160,puVar2);
      if (0 < (long)puVar18) {
        puVar12 = (undefined *)0x0;
        lVar10 = 0;
        plVar16 = (long *)(apuStack_130[0] + 8);
        do {
          *(long *)(puStack_148 + (long)puVar12 * 8) = lVar10;
          if (*plVar16 == 0x7fffffffffffffff) {
            FUN_107ea5fc4(param_1,puStack_188,param_2,puVar12);
            lVar10 = lVar10 + 1;
          }
          puVar7 = param_4;
          func_0x00010c0dfd40(param_4);
          _objc_retainAutoreleasedReturnValue();
          FUN_107ea5ef4(param_1,param_2,puVar12,puVar7,puVar3);
          _objc_release(puVar7);
          puVar12 = puVar12 + 1;
          plVar16 = plVar16 + 2;
        } while (puVar18 != puVar12);
      }
      if (0 < (long)puVar2) {
        puVar18 = (undefined *)0x0;
        lVar10 = 0;
        plVar16 = aplStack_118[0] + 1;
        do {
          *(long *)(lStack_160 + (long)puVar18 * 8) = lVar10;
          lVar13 = *plVar16;
          if (lVar13 == 0x7fffffffffffffff) {
            FUN_107ea5fc4(param_1,puVar14,param_3,puVar18);
            lVar10 = lVar10 + 1;
          }
          else {
            lVar11 = lVar10;
            if (*(char *)(plVar16[-1] + 0x40) == '\x01') {
              FUN_107ea5fc4(param_1,puVar6,param_2,lVar13);
              lVar11 = *(long *)(lStack_160 + (long)puVar18 * 8);
            }
            if (puVar18 != (undefined *)((lVar11 + lVar13) - *(long *)(puStack_148 + lVar13 * 8))) {
              if (iVar17 == 0) {
                puVar12 = PTR_PTR_1126d8100;
                _objc_alloc(PTR_PTR_1126d8100);
                func_0x00010c016720();
              }
              else {
                puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = PTR_PTR_1126d8108;
                _objc_alloc(PTR_PTR_1126d8108);
                func_0x00010c016720();
                _objc_release(puVar8);
                _objc_release(puVar7);
              }
              func_0x00010befa120(puVar9);
              _objc_release(puVar12);
            }
          }
          puVar12 = param_5;
          func_0x00010c0dfd40(param_5);
          _objc_retainAutoreleasedReturnValue();
          FUN_107ea5ef4(param_1,param_3,puVar18,puVar12,puVar4);
          _objc_release(puVar12);
          puVar18 = puVar18 + 1;
          plVar16 = plVar16 + 2;
        } while (puVar2 != puVar18);
      }
      if ((param_1 & 1) == 0) {
        puVar12 = PTR_PTR_1126d80f8;
        _objc_alloc(PTR_PTR_1126d80f8);
        func_0x00010c01e300();
      }
      else {
        puVar12 = PTR_PTR_1126d80f0;
        _objc_alloc(PTR_PTR_1126d80f0);
        func_0x00010c01e320();
      }
      if (lStack_160 != 0) {
        lStack_158 = lStack_160;
        __ZdlPv();
      }
      if (puStack_148 != (undefined *)0x0) {
        puStack_140 = puStack_148;
        __ZdlPv();
      }
      _objc_release(puStack_188);
      _objc_release(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar14);
      if (apuStack_130[0] != (undefined *)0x0) {
        __ZdlPv();
      }
      if (aplStack_118[0] != (long *)0x0) {
        __ZdlPv();
      }
      FUN_107ea6b90(&uStack_100);
      goto LAB_107ea5b2c;
    }
    if (iVar17 != 0) {
      _objc_alloc(PTR_PTR_1126d80f0);
      puVar2 = param_5;
      FUN_107ea5e2c(param_5,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x00010c01e320(puVar12);
      goto LAB_107ea5598;
    }
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107ea5fb0;
    puStack_c0 = &UNK_110a109d8;
    uStack_b0 = param_3;
    uStack_a8 = (char)param_1;
    _objc_retain(puVar4);
    puStack_b8 = puVar4;
    func_0x00010bf97e80(param_5);
    puVar12 = PTR_PTR_1126d80f8;
    _objc_alloc(PTR_PTR_1126d80f8);
    puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_opt_new(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    puVar14 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_opt_new(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c01e300(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar14);
    _objc_release(puVar18);
    _objc_release(puVar2);
    puVar2 = puStack_b8;
  }
  _objc_release(puVar2);
LAB_107ea5b2c:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107ea5df8; end: 107ea5e2b;  */

void FUN_107ea5df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_107ea50fc(1,param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ea5e2c; end: 107ea5edf;  */

void FUN_107ea5e2c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97e80(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ea5ee0; end: 107ea5ef3;  */

void FUN_107ea5ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,*(undefined8 *)(param_1 + 0x28),
                        param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ea5ef4; end: 107ea5faf;  */

void FUN_107ea5ef4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf7ecc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ea5fb0; end: 107ea5fc3;  */

void FUN_107ea5fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,*(undefined8 *)(param_1 + 0x28),
                        param_3,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ea5fc4; end: 107ea603f;  */

void FUN_107ea5fc4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_addIndex__11259be58,param_4);
  return;
}



/* Entry: 107ea6040; end: 107ea6113;  */

void FUN_107ea6040(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = param_2;
  func_0x00010bf7ecc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ea6114; end: 107ea61a3;  */

undefined8 * FUN_107ea6114(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 >> 0x3c == 0) {
    puVar4 = (undefined8 *)(param_2 * 0x10);
    __Znwm();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + param_2 * 2;
    puVar2 = puVar4;
    do {
      puVar3 = puVar2 + 2;
      *puVar2 = 0;
      puVar2[1] = 0x7fffffffffffffff;
      puVar2 = puVar3;
    } while (puVar3 != puVar4 + param_2 * 2);
    param_1[1] = puVar4 + param_2 * 2;
    return param_1;
  }
  FUN_107ea61a4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107ea6188);
  (*pcVar1)();
}



/* Entry: 107ea61a4; end: 107ea61b7;  */

long * FUN_107ea61a4(undefined8 param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x28;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  uVar4 = *param_2;
  func_0x00010bfde980();
  uVar16 = plVar3[1];
  if (uVar16 != 0) {
    uVar13 = uVar16 - 1;
    if ((uVar16 & uVar13) == 0) {
      unaff_x28 = uVar13 & uVar4;
    }
    else {
      unaff_x28 = uVar4;
      if (uVar16 <= uVar4) {
        uVar8 = 0;
        if (uVar16 != 0) {
          uVar8 = uVar4 / uVar16;
        }
        unaff_x28 = uVar4 - uVar8 * uVar16;
      }
    }
    plVar7 = *(long **)(*plVar3 + unaff_x28 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          uVar8 = plVar7[2];
          uVar15 = *param_2;
          _objc_retain(uVar8);
          _objc_retain(uVar15);
          if (uVar8 == uVar15) {
            _objc_release(uVar15);
            _objc_release(uVar8);
            return plVar7;
          }
          uVar12 = uVar8;
          func_0x00010c071ae0();
          _objc_release(uVar15);
          _objc_release(uVar8);
          if ((uVar12 & 1) != 0) {
            return plVar7;
          }
        }
        else {
          if ((uVar16 & uVar13) == 0) {
            uVar8 = uVar8 & uVar13;
          }
          else if (uVar16 <= uVar8) {
            uVar15 = 0;
            if (uVar16 != 0) {
              uVar15 = uVar8 / uVar16;
            }
            uVar8 = uVar8 - uVar15 * uVar16;
          }
          if (uVar8 != unaff_x28) break;
        }
      }
    }
  }
  plVar7 = plVar3 + 2;
  plVar5 = (long *)0x60;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar4;
  lVar14 = *param_3;
  _objc_retain(lVar14);
  plVar5[2] = lVar14;
  plVar5[4] = 0;
  plVar5[3] = 0;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xb] = 0;
  if ((uVar16 != 0) && ((float)(plVar3[3] + 1) <= *(float *)(plVar3 + 4) * (float)uVar16))
  goto LAB_107ea64ec;
  uVar13 = 1;
  if (2 < uVar16) {
    uVar13 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar13 = uVar13 | uVar16 << 1;
  uVar16 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
  if (uVar13 <= uVar16) {
    uVar13 = uVar16;
  }
  if (uVar13 - 1 == 0) {
    uVar13 = 2;
  }
  else if ((uVar13 & uVar13 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar16 = plVar3[1];
  if (uVar16 < uVar13) {
LAB_107ea6384:
    if (uVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107ea65d4);
      (*pcVar2)();
    }
    lVar14 = uVar13 << 3;
    __Znwm();
    lVar6 = *plVar3;
    *plVar3 = lVar14;
    if (lVar6 != 0) {
      __ZdlPv();
      lVar14 = *plVar3;
    }
    plVar3[1] = uVar13;
    _bzero(lVar14,uVar13 << 3);
    plVar9 = (long *)plVar3[2];
    uVar16 = uVar13;
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar15 = uVar13 - 1;
      if ((uVar13 & uVar15) == 0) {
        uVar8 = uVar8 & uVar15;
      }
      else if (uVar13 <= uVar8) {
        uVar12 = 0;
        if (uVar13 != 0) {
          uVar12 = uVar8 / uVar13;
        }
        uVar8 = uVar8 - uVar12 * uVar13;
      }
      *(long **)(lVar14 + uVar8 * 8) = plVar7;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar13 & uVar15) == 0) {
          uVar12 = uVar12 & uVar15;
        }
        else if (uVar13 <= uVar12) {
          uVar1 = 0;
          if (uVar13 != 0) {
            uVar1 = uVar12 / uVar13;
          }
          uVar12 = uVar12 - uVar1 * uVar13;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar8) {
          if (*(long *)(lVar14 + uVar12 * 8) == 0) {
            *(long **)(lVar14 + uVar12 * 8) = plVar9;
            uVar8 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar14 + uVar12 * 8);
            **(long **)(lVar14 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar13 < uVar16) {
    uVar8 = (ulong)((float)(ulong)plVar3[3] / *(float *)(plVar3 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar13 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 < uVar16) {
      if (uVar13 != 0) goto LAB_107ea6384;
      lVar14 = *plVar3;
      *plVar3 = 0;
      if (lVar14 != 0) {
        __ZdlPv();
      }
      plVar3[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = plVar3[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x28 = uVar16 - 1 & uVar4;
  }
  else {
    unaff_x28 = uVar4;
    if (uVar16 <= uVar4) {
      uVar13 = 0;
      if (uVar16 != 0) {
        uVar13 = uVar4 / uVar16;
      }
      unaff_x28 = uVar4 - uVar13 * uVar16;
    }
  }
LAB_107ea64ec:
  lVar14 = *plVar3;
  plVar9 = *(long **)(lVar14 + unaff_x28 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar14 + unaff_x28 * 8) = plVar7;
    if (*plVar5 != 0) {
      uVar4 = *(ulong *)(*plVar5 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar4 = uVar4 & uVar16 - 1;
      }
      else if (uVar16 <= uVar4) {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar4 / uVar16;
        }
        uVar4 = uVar4 - uVar13 * uVar16;
      }
      *(long **)(lVar14 + uVar4 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar9;
    *plVar9 = (long)plVar5;
  }
  plVar3[3] = plVar3[3] + 1;
  return plVar5;
}



/* Entry: 107ea61b8; end: 107ea6603;  */

long * FUN_107ea61b8(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x28;
  
  uVar3 = *param_2;
  func_0x00010bfde980();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar12 = uVar15 - 1;
    if ((uVar15 & uVar12) == 0) {
      unaff_x28 = uVar12 & uVar3;
    }
    else {
      unaff_x28 = uVar3;
      if (uVar15 <= uVar3) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar3 / uVar15;
        }
        unaff_x28 = uVar3 - uVar7 * uVar15;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x28 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          uVar7 = plVar6[2];
          uVar14 = *param_2;
          _objc_retain(uVar7);
          _objc_retain(uVar14);
          if (uVar7 == uVar14) {
            _objc_release(uVar14);
            _objc_release(uVar7);
            return plVar6;
          }
          uVar11 = uVar7;
          func_0x00010c071ae0();
          _objc_release(uVar14);
          _objc_release(uVar7);
          if ((uVar11 & 1) != 0) {
            return plVar6;
          }
        }
        else {
          if ((uVar15 & uVar12) == 0) {
            uVar7 = uVar7 & uVar12;
          }
          else if (uVar15 <= uVar7) {
            uVar14 = 0;
            if (uVar15 != 0) {
              uVar14 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar14 * uVar15;
          }
          if (uVar7 != unaff_x28) break;
        }
      }
    }
  }
  plVar6 = param_1 + 2;
  plVar4 = (long *)0x60;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = uVar3;
  lVar13 = *param_3;
  _objc_retain(lVar13);
  plVar4[2] = lVar13;
  plVar4[4] = 0;
  plVar4[3] = 0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[0xb] = 0;
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_107ea64ec;
  uVar12 = 1;
  if (2 < uVar15) {
    uVar12 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar12 = uVar12 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar12 <= uVar15) {
    uVar12 = uVar15;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar12) {
LAB_107ea6384:
    if (uVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107ea65d4);
      (*pcVar2)();
    }
    lVar13 = uVar12 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar13;
    if (lVar5 != 0) {
      __ZdlPv();
      lVar13 = *param_1;
    }
    param_1[1] = uVar12;
    _bzero(lVar13,uVar12 << 3);
    plVar8 = (long *)param_1[2];
    uVar15 = uVar12;
    if (plVar8 != (long *)0x0) {
      uVar7 = plVar8[1];
      uVar14 = uVar12 - 1;
      if ((uVar12 & uVar14) == 0) {
        uVar7 = uVar7 & uVar14;
      }
      else if (uVar12 <= uVar7) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar7 / uVar12;
        }
        uVar7 = uVar7 - uVar11 * uVar12;
      }
      *(long **)(lVar13 + uVar7 * 8) = plVar6;
      plVar9 = (long *)*plVar8;
      while (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        if ((uVar12 & uVar14) == 0) {
          uVar11 = uVar11 & uVar14;
        }
        else if (uVar12 <= uVar11) {
          uVar1 = 0;
          if (uVar12 != 0) {
            uVar1 = uVar11 / uVar12;
          }
          uVar11 = uVar11 - uVar1 * uVar12;
        }
        plVar10 = plVar9;
        if (uVar11 != uVar7) {
          if (*(long *)(lVar13 + uVar11 * 8) == 0) {
            *(long **)(lVar13 + uVar11 * 8) = plVar8;
            uVar7 = uVar11;
          }
          else {
            *plVar8 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar13 + uVar11 * 8);
            **(long **)(lVar13 + uVar11 * 8) = (long)plVar9;
            plVar10 = plVar8;
          }
        }
        plVar8 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  else if (uVar12 < uVar15) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 < uVar15) {
      if (uVar12 != 0) goto LAB_107ea6384;
      lVar13 = *param_1;
      *param_1 = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x28 = uVar15 - 1 & uVar3;
  }
  else {
    unaff_x28 = uVar3;
    if (uVar15 <= uVar3) {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar3 / uVar15;
      }
      unaff_x28 = uVar3 - uVar12 * uVar15;
    }
  }
LAB_107ea64ec:
  lVar13 = *param_1;
  plVar8 = *(long **)(lVar13 + unaff_x28 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(lVar13 + unaff_x28 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar3 = *(ulong *)(*plVar4 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar3 = uVar3 & uVar15 - 1;
      }
      else if (uVar15 <= uVar3) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar3 / uVar15;
        }
        uVar3 = uVar3 - uVar12 * uVar15;
      }
      *(long **)(lVar13 + uVar3 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
  return plVar4;
}



/* Entry: 107ea6604; end: 107ea6637;  */

void FUN_107ea6604(ulong param_1,long param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_107ea6638(param_2 + 0x28);
    _objc_release(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107ea6638; end: 107ea66fb;  */

long * FUN_107ea6638(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_107ea66a8;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_107ea66a8:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[1] - param_1[2];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107ea66fc; end: 107ea6a07;  */

void FUN_107ea66fc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar16 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)param_1[2];
  uVar3 = (long)puVar11 - (long)puVar16;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((long)puVar11 - (long)puVar16) * 0x40 - 1;
  }
  uVar2 = param_1[4];
  uVar10 = param_1[5] + uVar2;
  if (uVar1 != uVar10) goto LAB_107ea69a4;
  if (uVar2 < 0x200) {
    puVar12 = (undefined8 *)param_1[3];
    puVar14 = (undefined8 *)*param_1;
    if (uVar3 < (ulong)((long)puVar12 - (long)puVar14)) {
      uVar6 = 0x1000;
      puVar8 = param_2;
      __Znwm();
      if (puVar12 == puVar11) {
        if (puVar16 == puVar14) {
          lVar9 = (long)puVar12 - (long)puVar16 >> 2;
          if (puVar11 == puVar16) {
            lVar9 = 1;
          }
          lVar13 = lVar9 * 2;
          FUN_107ea6afc();
          puVar16 = (undefined8 *)(lVar9 + (lVar13 + 6U & 0xfffffffffffffff8));
          lVar13 = param_1[2] - param_1[1];
          puVar11 = puVar16;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)((long)puVar16 + lVar13);
            puVar12 = (undefined8 *)param_1[1];
            puVar14 = puVar16;
            do {
              *puVar14 = *puVar12;
              lVar13 = lVar13 + -8;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar13 != 0);
          }
          lVar13 = *param_1;
          *param_1 = lVar9;
          param_1[1] = (long)puVar16;
          param_1[2] = (long)puVar11;
          param_1[3] = lVar9 + (long)puVar8 * 8;
          if (lVar13 != 0) {
            __ZdlPv(lVar13);
            puVar16 = (undefined8 *)param_1[1];
          }
        }
        puVar16[-1] = uVar6;
        param_1[1] = (long)puVar16;
        goto LAB_107ea6760;
      }
      *puVar11 = uVar6;
      param_1[2] = (long)(puVar11 + 1);
    }
    else {
      puVar8 = (undefined8 *)((long)puVar12 - (long)puVar14 >> 2);
      if (puVar12 == puVar14) {
        puVar8 = (undefined8 *)0x1;
      }
      puVar15 = param_2;
      FUN_107ea6afc();
      uVar6 = 0x1000;
      puVar7 = puVar15;
      __Znwm();
      puVar14 = (undefined8 *)((long)puVar8 + uVar3);
      puVar12 = puVar8 + (long)puVar15;
      puVar5 = puVar8;
      if (uVar3 == (long)puVar15 * 8) {
        if (puVar11 == puVar16) {
          puVar5 = (undefined8 *)0x8;
          __Znwm();
          puVar12 = puVar5 + 1;
          puVar14 = puVar5;
          if (puVar8 != (undefined8 *)0x0) {
            __ZdlPv(puVar8);
          }
        }
        else {
          lVar9 = ((long)puVar14 - (long)puVar8 >> 3) + 1;
          puVar14 = puVar14 + -((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
        }
      }
      puVar16 = puVar14 + 1;
      *puVar14 = uVar6;
      puVar11 = (undefined8 *)param_1[2];
      puVar8 = puVar5;
      if (puVar11 != (undefined8 *)param_1[1]) {
        do {
          puVar5 = puVar8;
          puVar15 = puVar14;
          if (puVar14 == puVar8) {
            if (puVar16 < puVar12) {
              lVar9 = ((long)puVar12 - (long)puVar16 >> 3) + 1;
              lVar13 = (long)puVar16 - (long)puVar8;
              lVar4 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar16 + ((ulong)(lVar9 - (lVar9 >> 0x3f)) >> 1);
              puVar15 = (undefined8 *)((long)puVar16 - lVar13);
              if (lVar4 != 0) {
                _memmove(puVar15,puVar14,lVar4);
                puVar7 = puVar14;
              }
            }
            else {
              puVar15 = (undefined8 *)((long)puVar12 - (long)puVar8 >> 2);
              if ((long)puVar12 - (long)puVar8 == 0) {
                puVar15 = (undefined8 *)0x1;
              }
              puVar5 = puVar15;
              FUN_107ea6afc();
              puVar15 = (undefined8 *)((long)puVar5 + ((long)puVar15 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar9 = (long)puVar16 - (long)puVar8;
              puVar16 = puVar15;
              if (lVar9 != 0) {
                puVar16 = (undefined8 *)((long)puVar15 + lVar9);
                puVar12 = puVar15;
                do {
                  *puVar12 = *puVar14;
                  lVar9 = lVar9 + -8;
                  puVar12 = puVar12 + 1;
                  puVar14 = puVar14 + 1;
                } while (lVar9 != 0);
              }
              puVar12 = puVar5 + (long)puVar7;
              if (puVar8 != (undefined8 *)0x0) {
                __ZdlPv(puVar8);
              }
            }
          }
          puVar11 = puVar11 + -1;
          puVar14 = puVar15 + -1;
          *puVar14 = *puVar11;
          puVar8 = puVar5;
        } while (puVar11 != (undefined8 *)param_1[1]);
      }
      lVar9 = *param_1;
      *param_1 = (long)puVar5;
      param_1[1] = (long)puVar14;
      param_1[2] = (long)puVar16;
      param_1[3] = (long)puVar12;
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x200;
    uVar6 = *puVar16;
    param_1[1] = (long)(puVar16 + 1);
LAB_107ea6760:
    FUN_107ea6a08(param_1,uVar6);
  }
  puVar16 = (undefined8 *)param_1[1];
  uVar10 = param_1[5] + param_1[4];
LAB_107ea69a4:
  *(undefined8 **)(puVar16[uVar10 >> 9] + (uVar10 & 0x1ff) * 8) = param_2;
  param_1[5] = param_1[5] + 1;
  return;
}



/* Entry: 107ea6a08; end: 107ea6afb;  */

void FUN_107ea6a08(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_107ea6afc();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
    }
  }
  *puVar7 = param_2;
  param_1[2] = (ulong)(puVar7 + 1);
  return;
}



/* Entry: 107ea6afc; end: 107ea6b2f;  */

undefined1  [16] FUN_107ea6afc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001075120dc();
  lVar1 = param_1[1];
  lVar2 = param_2 << 3;
  _bzero(lVar1,lVar2);
  param_1[1] = lVar1 + param_2 * 8;
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107ea6b30; end: 107ea6b8f;  */

undefined8 * FUN_107ea6b30(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001075120dc();
  lVar1 = param_1[1];
  _bzero(lVar1,param_2 << 3);
  param_1[1] = lVar1 + param_2 * 8;
  return param_1;
}



/* Entry: 107ea6b90; end: 107ea6bf3;  */

long * FUN_107ea6b90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_107ea6638(plVar1 + 5);
    _objc_release(plVar1[2]);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107ea6bf4; end: 107ea6c03; -[IGListCollectionViewLayoutInvalidationContext ig_invalidateSupplementaryAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ea6bf4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770e7c);
}



/* Entry: 107ea6c04; end: 107ea6c13; -[IGListCollectionViewLayoutInvalidationContext setIg_invalidateSupplementaryAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea6c04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770e7c) = param_3;
  return;
}



/* Entry: 107ea6c14; end: 107ea6c23; -[IGListCollectionViewLayoutInvalidationContext ig_invalidateAllAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ea6c14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770e80);
}



/* Entry: 107ea6c24; end: 107ea6c33; -[IGListCollectionViewLayoutInvalidationContext setIg_invalidateAllAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea6c24(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770e80) = param_3;
  return;
}



/* Entry: 107ea6c34; end: 107ea6c3f; -[IGListCollectionViewLayout initWithStickyHeaders:topContentInset:stretchToEdge:] */

void FUN_107ea6c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithStickyHeaders_scrollDire_1125f0c90,param_3,0,param_4);
  return;
}



/* Entry: 107ea6c40; end: 107ea6e3f; -[IGListCollectionViewLayout initWithStickyHeaders:scrollDirection:topContentInset:stretchToEdge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ea6c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126fb8e0;
  puVar5 = (undefined *)0x0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770e8c) = param_5;
    *(char *)((long)puVar1 + (long)_DAT_112770e90) = (char)param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770e94) = param_1;
    *(char *)((long)puVar1 + (long)_DAT_112770e98) = (char)param_6;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770e9c);
    *(undefined **)((long)puVar1 + (long)_DAT_112770e9c) = puVar5;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    uStack_78 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    param_6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_70 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
    param_4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_68 = param_6;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112770ea0);
    *(undefined **)((long)puVar1 + (long)_DAT_112770ea0) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(param_4);
    puVar3 = param_6;
    _objc_release(param_6);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112770ea4) = 0x7fffffffffffffff;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(puVar1);
  __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c04ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0);
  return puVar3;
}



/* Entry: 107ea6e40; end: 107ea6e4f; -[IGListCollectionViewLayout initWithCoder:] */

void FUN_107ea6e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s_initWithStickyHeaders_topContent_1125f0c98,0,0);
  return;
}



/* Entry: 107ea6e50; end: 107ea6fb7; -[IGListCollectionViewLayout initialLayoutAttributesForAppearingItemAtIndexPath:] */

void FUN_107ea6e50(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb8e0;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_initialLayoutAttributesForAppear_112527a18,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  _objc_opt_respondsToSelector(puVar3,PTR_s_collectionView_layout_customized_1125ada40);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf40260(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ea6fb8; end: 107ea711f; -[IGListCollectionViewLayout finalLayoutAttributesForDisappearingItemAtIndexPath:] */

void FUN_107ea6fb8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb8e0;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_finalLayoutAttributesForDisappea_112527a20,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  _objc_opt_respondsToSelector(puVar3,PTR_s_collectionView_layout_customized_1125ada38);
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  else {
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf40240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ea7120; end: 107ea74bf; -[IGListCollectionViewLayout layoutAttributesForElementsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea7120(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 *param_5,long param_6,undefined8 *param_7)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  undefined8 *puVar8;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = param_5;
  func_0x00010be85be0(param_1,param_2);
  if (puVar4 == (undefined8 *)0x7fffffffffffffff) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar11 = (undefined8 *)((long)puVar4 + param_6);
    if (puVar4 < puVar11) {
      lVar14 = (long)_DAT_112770ea8;
      do {
        lVar12 = *(long *)((long)param_5 + lVar14) + (long)puVar4 * 0xb0;
        lVar12 = *(long *)(lVar12 + 0x88) - *(long *)(lVar12 + 0x80) >> 5;
        if ((0 < lVar12) || (puVar5 = param_5, func_0x00010c237b20(), (int)puVar5 != 0)) {
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          lVar6 = *(long *)((long)param_5 + (long)_DAT_112770ea0);
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          param_7 = &uStack_160;
          lVar13 = lVar6;
          func_0x00010bf52a60();
          if (lVar13 != 0) {
            lVar15 = *plStack_150;
            do {
              lVar16 = 0;
              do {
                dVar17 = param_3;
                dVar18 = param_4;
                if (*plStack_150 != lVar15) {
                  _objc_enumerationMutation(lVar6);
                  dVar17 = param_3;
                  dVar18 = param_4;
                }
                puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
                func_0x00010bfed020();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = param_5;
                func_0x00010c08c9e0();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar5;
                func_0x00010bfb68e0();
                param_3 = dVar17;
                param_4 = dVar18;
                _CGRectIntersection();
                if ((puVar5 != (undefined8 *)0x0) && (_CGRectIsEmpty(), ((ulong)puVar7 & 1) == 0)) {
                  puVar7 = param_5;
                  func_0x00010c151fc0();
                  if (puVar7 != (undefined8 *)0x1) {
                    dVar17 = dVar18;
                  }
                  if (0.0 < dVar17) {
                    func_0x00010befa120(puVar3);
                  }
                }
                _objc_release(puVar5);
                _objc_release(puVar10);
                lVar16 = lVar16 + 1;
              } while (lVar13 != lVar16);
              param_7 = &uStack_160;
              lVar13 = lVar6;
              func_0x00010bf52a60();
            } while (lVar13 != 0);
          }
          _objc_release(lVar6);
          if (0 < lVar12) {
            lVar13 = 0;
            do {
              puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              func_0x00010bfed020();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = param_5;
              param_7 = puVar5;
              func_0x00010c08c980();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010bfb68e0();
              iVar2 = (int)puVar8;
              _CGRectIntersectsRect();
              if (iVar2 != 0) {
                param_7 = puVar7;
                func_0x00010befa120(puVar3);
              }
              _objc_release(puVar7);
              _objc_release(puVar5);
              lVar13 = lVar13 + 1;
            } while (lVar12 != lVar13);
          }
        }
        puVar4 = (undefined8 *)((long)puVar4 + 1);
      } while (puVar4 != puVar11);
    }
    _objc_retain(puVar3);
    puVar10 = puVar3;
  }
  puVar9 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    __Unwind_Resume();
    _objc_retain(param_7);
    lVar14 = (long)_DAT_112770e9c;
    puVar10 = *(undefined **)(puVar9 + lVar14);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar10 == (undefined *)0x0) {
      puVar4 = param_7;
      func_0x00010c1554e0();
      puVar11 = param_7;
      func_0x00010c0840e0();
      plVar1 = (long *)(puVar9 + _DAT_112770ea8);
      if ((puVar4 < (undefined8 *)((plVar1[1] - *plVar1 >> 4) * 0x2e8ba2e8ba2e8ba3)) &&
         (lVar12 = *plVar1 + (long)puVar4 * 0xb0,
         puVar11 < (undefined8 *)(*(long *)(lVar12 + 0x88) - *(long *)(lVar12 + 0x80) >> 5))) {
        puVar10 = puVar9;
        _objc_opt_class(puVar9);
        func_0x00010c08c8c0();
        func_0x00010c08c8e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_7;
        func_0x00010c1554e0();
        lVar12 = *plVar1;
        puVar11 = param_7;
        func_0x00010c0840e0();
        puVar4 = (undefined8 *)
                 (*(long *)(lVar12 + (long)puVar4 * 0xb0 + 0x80) + (long)puVar11 * 0x20);
        func_0x00010c19f0e0(*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar10);
        FUN_107ea7654(puVar10);
        func_0x00010c1d0640(*(undefined8 *)(puVar9 + lVar14));
      }
      else {
        puVar10 = (undefined *)0x0;
      }
    }
    _objc_release(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107ea74c0; end: 107ea7653; -[IGListCollectionViewLayout layoutAttributesForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea74c0(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112770e9c;
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar4 = param_3;
    func_0x00010c1554e0();
    uVar5 = param_3;
    func_0x00010c0840e0();
    plVar1 = (long *)(param_1 + _DAT_112770ea8);
    if ((uVar4 < (ulong)((plVar1[1] - *plVar1 >> 4) * 0x2e8ba2e8ba2e8ba3)) &&
       (lVar3 = *plVar1 + uVar4 * 0xb0,
       uVar5 < (ulong)(*(long *)(lVar3 + 0x88) - *(long *)(lVar3 + 0x80) >> 5))) {
      lVar3 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c08c8c0();
      func_0x00010c08c8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c1554e0();
      lVar7 = *plVar1;
      uVar5 = param_3;
      func_0x00010c0840e0();
      puVar2 = (undefined8 *)(*(long *)(lVar7 + uVar4 * 0xb0 + 0x80) + uVar5 * 0x20);
      func_0x00010c19f0e0(*puVar2,puVar2[1],puVar2[2],puVar2[3],lVar3);
      FUN_107ea7654(lVar3);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar6),param_2,lVar3,param_3);
    }
    else {
      lVar3 = 0;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107ea7654; end: 107ea772b;  */

void FUN_107ea7654(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfecf20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c1345a0();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bfecf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0840e0();
    func_0x00010c227920(param_1,param_2,lVar3 + lVar2 * 1000);
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1345a0();
    if (lVar1 == 1) {
      func_0x00010c227920(param_1,param_2,lVar2 * 1000 + 999);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ea772c; end: 107ea7b53; -[IGListCollectionViewLayout layoutAttributesForSupplementaryViewOfKind:atIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea772c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined *puVar8;
  long lVar9;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long alStack_d0 [6];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar9 = (long)_DAT_112770ea0;
  puVar2 = *(undefined **)(param_1 + lVar9);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar8 != (undefined *)0x0) goto LAB_107ea7a84;
  uVar3 = param_4;
  func_0x00010c1554e0();
  plVar1 = (long *)(param_1 + (long)_DAT_112770ea8);
  if ((ulong)((plVar1[1] - *plVar1 >> 4) * 0x2e8ba2e8ba2e8ba3) <= uVar3) {
    puVar8 = (undefined *)0x0;
    goto LAB_107ea7a84;
  }
  uVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  pdVar7 = (double *)(*plVar1 + uVar3 * 0xb0);
  dVar13 = pdVar7[9];
  dVar10 = pdVar7[8];
  dVar16 = pdVar7[0xb];
  dVar14 = pdVar7[10];
  dVar22 = pdVar7[0xd];
  dVar23 = pdVar7[0xc];
  dVar17 = pdVar7[0xf];
  dVar15 = pdVar7[0xe];
  dVar24 = pdVar7[1];
  dVar11 = *pdVar7;
  dVar21 = pdVar7[3];
  dVar12 = pdVar7[2];
  alStack_d0[1] = 0;
  alStack_d0[2] = 0;
  alStack_d0[0] = 0;
  FUN_107ea9198(alStack_d0,pdVar7[0x10],pdVar7[0x11],(long)pdVar7[0x11] - (long)pdVar7[0x10] >> 5);
  func_0x00010c151fc0(param_1);
  FUN_107ea7b54(dVar11,dVar24,dVar12,dVar21);
  dVar18 = *(double *)PTR__CGRectZero_110347608;
  dVar21 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar19 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar20 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  uVar5 = param_3;
  dVar12 = dVar11;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    uVar5 = param_3;
    func_0x00010c0720c0();
    dVar10 = dVar18;
    dVar14 = dVar19;
    dVar16 = dVar20;
    if ((int)uVar5 != 0) {
      dVar10 = dVar23;
      dVar14 = dVar15;
      dVar16 = dVar17;
      dVar21 = dVar22;
    }
  }
  else {
    uVar5 = param_1;
    func_0x00010c255560();
    dVar23 = dVar10;
    if ((int)uVar5 != 0) {
      func_0x00010bf4cdc0(uVar4);
      uVar5 = param_1;
      dVar21 = dVar12;
      func_0x00010c151fc0();
      if (uVar5 != 1) {
        dVar12 = dVar24;
      }
      func_0x00010c274380(param_1);
      dVar23 = dVar21;
      func_0x00010c255540(param_1);
      dVar23 = dVar12 + dVar21 + dVar23;
      if (uVar3 + 1 == (plVar1[1] - *plVar1 >> 4) * 0x2e8ba2e8ba2e8ba3) {
        dVar21 = dVar11;
        if (dVar11 <= dVar23) {
          dVar21 = dVar23;
        }
      }
      else {
        pdVar7 = (double *)(*plVar1 + (uVar3 + 1) * 0xb0);
        dVar22 = *pdVar7;
        dVar12 = pdVar7[1];
        dVar21 = pdVar7[2];
        dVar24 = pdVar7[3];
        func_0x00010c151fc0(param_1);
        FUN_107ea7b54(dVar22,dVar12,dVar21,dVar24);
        uVar3 = param_1;
        func_0x00010c151fc0();
        dVar12 = dVar14;
        if (uVar3 != 1) {
          dVar12 = dVar16;
        }
        if (dVar11 <= dVar23) {
          dVar11 = dVar23;
        }
        dVar21 = dVar11;
        if (dVar22 - dVar12 <= dVar11) {
          dVar21 = dVar22 - dVar12;
        }
      }
      uVar5 = param_1;
      func_0x00010c151fc0();
      dVar23 = dVar21;
      if ((uVar5 != 1) && (dVar23 = dVar10, uVar5 == 0)) goto LAB_107ea79d4;
    }
    dVar10 = dVar23;
    dVar21 = dVar13;
  }
LAB_107ea79d4:
  _CGRectIsEmpty(dVar10,dVar21,dVar14,dVar16);
  if ((uVar5 & 1) == 0) {
    puVar8 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x00010c08ca00(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar10,dVar21,dVar14,dVar16);
    FUN_107ea7654(puVar8);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar6);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  if (alStack_d0[0] != 0) {
    __ZdlPv();
  }
  _objc_release(uVar4);
LAB_107ea7a84:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ea7b54; end: 107ea7b6b;  */

void FUN_107ea7b54(long param_1)

{
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectGetMinX_110347598)();
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectGetMinY_1103475a0)();
    return;
  }
  return;
}



/* Entry: 107ea7b6c; end: 107ea7ce3; -[IGListCollectionViewLayout collectionViewContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107ea7b6c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  long alStack_70 [6];
  
  lVar1 = ((long *)(param_5 + _DAT_112770ea8))[1];
  if (lVar1 == *(long *)(param_5 + _DAT_112770ea8)) {
    dVar10 = *(double *)PTR__CGSizeZero_110347620;
    param_4 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + -0xa8);
    dVar2 = *(double *)(lVar1 + -0xb0);
    uVar8 = *(undefined8 *)(lVar1 + -0x98);
    uVar6 = *(undefined8 *)(lVar1 + -0xa0);
    dVar3 = *(double *)(lVar1 + -0x90);
    dVar9 = *(double *)(lVar1 + -0x78);
    dVar7 = *(double *)(lVar1 + -0x80);
    alStack_70[1] = 0;
    alStack_70[2] = 0;
    alStack_70[0] = 0;
    dVar10 = dVar7;
    FUN_107ea9198(alStack_70,*(long *)(lVar1 + -0x30),*(long *)(lVar1 + -0x28),
                  *(long *)(lVar1 + -0x28) - *(long *)(lVar1 + -0x30) >> 5);
    lVar1 = param_5;
    func_0x00010bf40120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe64e0();
    dVar4 = dVar3;
    func_0x00010c151fc0();
    if (param_5 == 0) {
      func_0x00010bf20c00(lVar1);
      _CGRectGetWidth();
      _CGRectGetMaxY(dVar2,uVar5,uVar6,uVar8);
      dVar10 = (dVar4 - dVar10) - param_4;
      param_4 = dVar2 + dVar7;
    }
    else if (param_5 == 1) {
      _CGRectGetMaxX(dVar2,uVar5,uVar6,uVar8);
      dVar4 = dVar2;
      func_0x00010bf20c00(lVar1);
      _CGRectGetHeight();
      dVar10 = dVar2 + dVar9;
      param_4 = (dVar4 - dVar3) - param_3;
    }
    _objc_release(lVar1);
    if (alStack_70[0] != 0) {
      __ZdlPv();
    }
  }
  auVar11._8_8_ = param_4;
  auVar11._0_8_ = dVar10;
  return auVar11;
}



/* Entry: 107ea7ce4; end: 107ea7e03; -[IGListCollectionViewLayout invalidateLayoutWithContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea7ce4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_invalidatedItemIndexPaths_1125f82c0);
  if ((uVar1 & 1) == 0) {
LAB_107ea7d44:
    uVar1 = param_3;
    func_0x00010c069ec0();
    if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010bfe6540(), (int)uVar1 != 0))
    goto LAB_107ea7d5c;
    uVar1 = param_3;
    func_0x00010c069e40();
    if (((int)uVar1 == 0) ||
       (lVar3 = (long)_DAT_112770ea4, *(long *)(param_1 + lVar3) != 0x7fffffffffffffff))
    goto LAB_107ea7d68;
  }
  else {
    uVar1 = param_3;
    func_0x00010c06a2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 == 0) goto LAB_107ea7d44;
LAB_107ea7d5c:
    lVar3 = (long)_DAT_112770ea4;
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
LAB_107ea7d68:
  uVar1 = param_3;
  func_0x00010bfe6560();
  if ((int)uVar1 != 0) {
    func_0x00010be93ee0(param_1);
  }
  puStack_38 = PTR_PTR_1126fb8e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_invalidateLayoutWithContext__1125f8230,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 107ea7e04; end: 107ea7e0f; +[IGListCollectionViewLayout invalidationContextClass] */

void FUN_107ea7e04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d81a0);
  return;
}



/* Entry: 107ea7e10; end: 107ea7f03; -[IGListCollectionViewLayout invalidationContextForBoundsChange:] */

void FUN_107ea7e10(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  uVar2 = param_5;
  dVar4 = param_3;
  dVar5 = param_4;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  puStack_68 = PTR_PTR_1126fb8e0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                      PTR_s_invalidationContextForBoundsChan_112531598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9c20();
  bVar1 = false;
  if ((dVar4 == param_3) && (bVar1 = false, !NAN(dVar5) && !NAN(param_4))) {
    bVar1 = dVar5 == param_4;
  }
  if (!bVar1) {
    func_0x00010c1a9c00(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ea7f04; end: 107ea800b; -[IGListCollectionViewLayout shouldInvalidateLayoutForBoundsChange:] */

undefined8
FUN_107ea7f04(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = param_5;
  dVar3 = param_1;
  uVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar2);
  bVar1 = false;
  if ((dVar5 == param_3) && (bVar1 = false, !NAN(dVar6) && !NAN(param_4))) {
    bVar1 = dVar6 == param_4;
  }
  if (bVar1) {
    func_0x00010c151fc0(param_5);
    FUN_107ea7b54(param_1,param_2,param_3,param_4);
    func_0x00010c151fc0(param_5);
    FUN_107ea7b54(dVar3,uVar4,dVar5,dVar6);
    if (param_1 != dVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010c255570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_stickyHeaders_112672f80);
      return param_5;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 107ea800c; end: 107ea800f; -[IGListCollectionViewLayout prepareLayout] */

void FUN_107ea800c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__calculateLayoutIfNeeded_112553b68);
  return;
}



/* Entry: 107ea8010; end: 107ea808b; -[IGListCollectionViewLayout setStickyHeaderYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea8010(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*(double *)(param_2 + _DAT_112770e84) != param_1) {
    *(double *)(param_2 + _DAT_112770e84) = param_1;
    puVar1 = PTR_PTR_1126d81a0;
    _objc_opt_new(PTR_PTR_1126d81a0);
    func_0x00010c1a9c20();
    func_0x00010c06a080(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107ea808c; end: 107ea821b; -[IGListCollectionViewLayout _classNameForDelegate:sectionIndex:] */

void FUN_107ea808c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((((uint)uVar2 | (uint)uVar3) & 1) == 0) {
    _objc_retain(uVar1);
    uVar2 = uVar1;
  }
  else {
    uVar4 = param_3;
    if ((uint)uVar3 == 0) {
      _objc_retain(param_3);
    }
    else {
      func_0x00010bfb64a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b6940;
    _objc_opt_class(PTR_PTR_1126b6940);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar4;
      _objc_opt_class(uVar4);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = uVar4;
      func_0x00010c155820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ea821c; end: 107ea8e5b; -[IGListCollectionViewLayout _calculateLayoutIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea821c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  long *plVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  long lVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  long lVar18;
  ulong uVar19;
  double *pdVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined8 *puVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  double dVar49;
  undefined8 *puVar50;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  uint uStack_18c;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  uint uStack_174;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  double dStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  
  uVar39 = (undefined4)((ulong)param_3 >> 0x20);
  uVar36 = (undefined4)param_3;
  uVar38 = (undefined4)((ulong)param_2 >> 0x20);
  uVar35 = (undefined4)param_2;
  lVar18 = (long)_DAT_112770ea4;
  if (*(long *)(param_5 + lVar18) == 0x7fffffffffffffff) {
    return;
  }
  func_0x00010c12adc0(*(undefined8 *)(param_5 + (long)_DAT_112770e9c));
  func_0x00010be93ee0(param_5);
  uVar5 = param_5;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0df2e0();
  func_0x00010bfe64e0(uVar5);
  dVar32 = (double)CONCAT44(uVar39,uVar36);
  puVar45 = param_4;
  func_0x00010bf20c00(uVar5);
  plVar1 = (long *)(param_5 + (long)_DAT_112770ea8);
  puVar22 = (undefined8 *)*plVar1;
  puVar48 = (undefined8 *)plVar1[1];
  lVar14 = (long)puVar48 - (long)puVar22 >> 4;
  bVar4 = uVar7 < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3);
  uVar21 = uVar7 + lVar14 * -0x2e8ba2e8ba2e8ba3;
  puVar47 = puVar45;
  if (bVar4 || uVar21 == 0) {
    if (bVar4) {
      for (; puVar22 + uVar7 * 0x16 != puVar48; puVar48 = puVar48 + -0x16) {
        if (puVar48[-6] != 0) {
          puVar48[-5] = puVar48[-6];
          __ZdlPv();
        }
      }
      plVar1[1] = (long)(puVar22 + uVar7 * 0x16);
    }
  }
  else {
    if ((ulong)((plVar1[2] - (long)puVar48 >> 4) * 0x2e8ba2e8ba2e8ba3) < uVar21) {
      if (uVar7 < 0x1745d1745d1745e) {
        lVar14 = plVar1[2] - (long)puVar22 >> 4;
        uVar19 = lVar14 * 0x5d1745d1745d1746;
        if (uVar19 < uVar7 || uVar19 - uVar7 == 0) {
          uVar19 = uVar7;
        }
        if (0xba2e8ba2e8ba2d < (ulong)(lVar14 * 0x2e8ba2e8ba2e8ba3)) {
          uVar19 = 0x1745d1745d1745d;
        }
        if (uVar19 < 0x1745d1745d1745e) {
          puVar8 = (undefined8 *)(uVar19 * 0xb0);
          __Znwm();
          lVar14 = (long)puVar8 + ((long)puVar48 - (long)puVar22);
          puStack_c0 = puVar8 + uVar19 * 0x16;
          lVar27 = ((uVar21 * 0xb0 - 0xb0) / 0xb0) * 0xb0 + 0xb0;
          _bzero(lVar14,lVar27);
          puVar46 = puStack_c0;
          puVar31 = puVar22;
          puVar50 = puVar8;
          if (puVar22 != puVar48) {
            do {
              uVar33 = puVar31[1];
              uVar28 = *puVar31;
              uVar40 = puVar31[3];
              uVar29 = puVar31[2];
              uVar34 = puVar31[4];
              uVar44 = puVar31[7];
              uVar43 = puVar31[6];
              puVar50[5] = puVar31[5];
              puVar50[4] = uVar34;
              puVar50[7] = uVar44;
              puVar50[6] = uVar43;
              puVar50[1] = uVar33;
              *puVar50 = uVar28;
              puVar50[3] = uVar40;
              puVar50[2] = uVar29;
              uVar33 = puVar31[9];
              uVar28 = puVar31[8];
              uVar40 = puVar31[0xb];
              uVar29 = puVar31[10];
              uVar34 = puVar31[0xc];
              uVar43 = puVar31[0xf];
              puVar47 = (undefined8 *)puVar31[0xe];
              puVar50[0xd] = puVar31[0xd];
              puVar50[0xc] = uVar34;
              puVar50[0xf] = uVar43;
              puVar50[0xe] = puVar47;
              puVar50[9] = uVar33;
              puVar50[8] = uVar28;
              puVar50[0xb] = uVar40;
              puVar50[10] = uVar29;
              uVar29 = puVar31[0x10];
              puVar50[0x11] = puVar31[0x11];
              puVar50[0x10] = uVar29;
              puVar50[0x12] = puVar31[0x12];
              puVar31[0x10] = 0;
              puVar31[0x11] = 0;
              puVar31[0x12] = 0;
              uVar34 = puVar31[0x14];
              uVar29 = puVar31[0x13];
              puVar50[0x15] = puVar31[0x15];
              puVar50[0x14] = uVar34;
              puVar50[0x13] = uVar29;
              puVar31 = puVar31 + 0x16;
              puVar50 = puVar50 + 0x16;
            } while (puVar31 != puVar48);
            do {
              if (puVar22[0x10] != 0) {
                puVar22[0x11] = puVar22[0x10];
                __ZdlPv();
              }
              puVar22 = puVar22 + 0x16;
            } while (puVar22 != puVar48);
            puVar22 = (undefined8 *)*plVar1;
          }
          *plVar1 = (long)puVar8;
          plVar1[1] = lVar14 + lVar27;
          plVar1[2] = (long)puVar46;
          if (puVar22 != (undefined8 *)0x0) {
            __ZdlPv(puVar22);
          }
          goto LAB_107ea8528;
        }
        func_0x000104bd35f4();
      }
      else {
        func_0x000107ea9264();
      }
LAB_107ea8db8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107ea8dbc);
      (*pcVar3)();
    }
    uVar21 = (uVar21 * 0xb0 - 0xb0) / 0xb0;
    _bzero(puVar48,uVar21 * 0xb0 + 0xb0);
    plVar1[1] = (long)(puVar48 + uVar21 * 0x16 + 0x16);
  }
LAB_107ea8528:
  uVar21 = *(ulong *)(param_5 + lVar18);
  if ((long)uVar21 < 1 || (long)uVar7 < (long)uVar21) {
    pdVar16 = (double *)(PTR__CGRectZero_110347608 + 0x18);
    pdVar20 = (double *)(PTR__CGRectZero_110347608 + 0x10);
    pdVar17 = (double *)(PTR__CGRectZero_110347608 + 8);
    puVar22 = (undefined8 *)0x0;
    dVar49 = 0.0;
    puStack_d8 = (undefined8 *)0x0;
    pdVar15 = (double *)PTR__CGRectZero_110347608;
  }
  else {
    lVar14 = *plVar1 + uVar21 * 0xb0;
    pdVar15 = (double *)(lVar14 + -0xb0);
    puStack_d8 = *(undefined8 **)(lVar14 + -0x18);
    dVar49 = *(double *)(lVar14 + -0x10);
    puVar22 = *(undefined8 **)(lVar14 + -8);
    pdVar17 = (double *)(lVar14 + -0xa8);
    pdVar20 = (double *)(lVar14 + -0xa0);
    pdVar16 = (double *)(lVar14 + -0x98);
  }
  if ((long)uVar21 < (long)uVar7) {
    puVar31 = (undefined8 *)(param_1 + dVar32);
    puVar46 = (undefined8 *)
              ((double)CONCAT44(uVar39,uVar36) - ((double)CONCAT44(uVar38,uVar35) + (double)param_4)
              );
    puStack_1b0 = (undefined8 *)((double)puVar45 - (double)puVar31);
    puVar8 = (undefined8 *)*pdVar15;
    puVar48 = (undefined8 *)*pdVar17;
    puVar45 = (undefined8 *)*pdVar20;
    puStack_128 = (undefined8 *)*pdVar16;
    puVar50 = puStack_128;
    puStack_1a8 = puVar46;
    do {
      uVar19 = uVar5;
      func_0x00010c0deec0();
      if (uVar19 == 0) {
        uVar9 = param_5;
        func_0x00010c237b20();
        lVar23 = 0;
        lVar27 = 0;
        lVar14 = 0;
        uStack_174 = (uint)uVar9 ^ 1;
      }
      else {
        if (uVar19 >> 0x3b != 0) {
          FUN_107ea9250();
          goto LAB_107ea8db8;
        }
        lVar23 = uVar19 * 0x20;
        __Znwm();
        lVar14 = lVar23 + uVar19 * 0x20;
        lVar27 = lVar23 + uVar19 * 0x20;
        _bzero();
        uStack_174 = 0;
      }
      lVar24 = *plVar1 + uVar21 * 0xb0;
      plVar25 = (long *)(lVar24 + 0x80);
      if (*plVar25 != 0) {
        *(long *)(lVar24 + 0x88) = *plVar25;
        __ZdlPv();
        *plVar25 = 0;
        *(undefined8 *)(lVar24 + 0x88) = 0;
        *(undefined8 *)(lVar24 + 0x90) = 0;
      }
      *plVar25 = lVar23;
      *(long *)(lVar24 + 0x88) = lVar27;
      *(long *)(lVar24 + 0x90) = lVar14;
      func_0x00010bf40360(uVar6);
      puVar30 = puVar50;
      puVar37 = puVar31;
      func_0x00010bf40340(uVar6);
      puStack_198 = puVar37;
      puStack_180 = puVar30;
      func_0x00010bf40280(uVar6);
      puStack_170 = puVar46;
      puStack_168 = puVar47;
      puStack_e8 = puVar37;
      puStack_e0 = puVar30;
      func_0x00010bf402e0(uVar6);
      puStack_148 = puVar30;
      func_0x00010bf402c0(uVar6);
      uVar9 = param_5;
      puStack_1a0 = puVar31;
      puStack_188 = puVar50;
      puStack_158 = puVar30;
      func_0x00010c151fc0();
      puVar47 = (undefined8 *)((double)puStack_1b0 - ((double)puStack_e0 + (double)puStack_170));
      if (uVar9 != 1) {
        puVar47 = (undefined8 *)((double)puStack_1a8 - ((double)puStack_e8 + (double)puStack_168));
      }
      if ((uStack_174 & 1) == 0) {
        uVar26 = param_5;
        func_0x00010c151fc0();
        uVar10 = param_5;
        func_0x00010c151fc0();
        uVar35 = SUB84(puStack_188,0);
        uVar38 = (undefined4)((ulong)puStack_188 >> 0x20);
        if (uVar26 != 1) {
          uVar35 = SUB84(puStack_1a0,0);
          uVar38 = (undefined4)((ulong)puStack_1a0 >> 0x20);
        }
        puVar31 = puStack_180;
        if (uVar10 != 1) {
          puVar31 = puStack_198;
        }
        uStack_18c = (uint)(0.0 < (double)puVar31);
      }
      else {
        uStack_18c = 0;
        uVar35 = 0;
        uVar38 = 0;
      }
      puStack_d8 = (undefined8 *)((double)puStack_d8 + (double)CONCAT44(uVar38,uVar35));
      dStack_138 = (double)CONCAT44(uVar38,uVar35);
      puVar22 = (undefined8 *)((double)puVar22 + (double)CONCAT44(uVar38,uVar35));
      bVar4 = uVar9 != 1;
      puStack_150 = puStack_e0;
      if (bVar4) {
        puStack_150 = puStack_e8;
      }
      puVar50 = (undefined8 *)(dVar49 + (double)puStack_150);
      puStack_140 = puVar47;
      if (uVar19 != 0) {
        uVar26 = 0;
        ppuVar2 = &puStack_1b0;
        if (bVar4) {
          ppuVar2 = &puStack_1a8;
        }
        uVar35 = (int)puStack_170;
        uVar38 = (int)((ulong)puStack_170 >> 0x20);
        if (bVar4) {
          uVar35 = (int)puStack_168;
          uVar38 = (int)((ulong)puStack_168 >> 0x20);
        }
        uVar36 = 0;
        uVar39 = 0x3ff00000;
        puVar31 = (undefined8 *)(((double)*ppuVar2 - (double)CONCAT44(uVar38,uVar35)) + 1.0);
        puVar47 = puVar48;
        puStack_160 = puVar31;
        do {
          puVar48 = puStack_140;
          puVar11 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
          func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf40480(uVar6);
          puVar46 = (undefined8 *)CONCAT44(uVar39,uVar36);
          if (uVar9 != 1) {
            puVar46 = puVar31;
          }
          if ((double)puVar48 <= (double)puVar46) {
            puVar46 = puVar48;
          }
          puVar30 = puVar22;
          if (uVar26 != 0) {
            puVar30 = (undefined8 *)((double)puStack_148 + (double)puVar22);
          }
          uVar38 = (undefined4)((ulong)puVar30 >> 0x20);
          uVar35 = SUB84(puVar30,0);
          puVar30 = puStack_150;
          if ((double)puVar50 + (double)puVar46 <= (double)puStack_160 &&
              (dStack_138 <= 0.0 || uVar26 != 0)) {
            uVar35 = SUB84(puStack_d8,0);
            uVar38 = (undefined4)((ulong)puStack_d8 >> 0x20);
            puVar30 = puVar50;
          }
          puStack_d8 = (undefined8 *)CONCAT44(uVar38,uVar35);
          uVar10 = param_5;
          puStack_130 = puVar45;
          func_0x00010c25cba0();
          dVar32 = (double)puVar48 - ((double)puVar46 + (double)puVar30);
          uVar13 = 0;
          if (dVar32 <= 1.0) {
            uVar13 = (uint)(0.0 < dVar32);
          }
          puVar50 = (undefined8 *)((double)puVar48 - (double)puVar30);
          if (((uint)uVar10 & uVar13) == 0) {
            puVar50 = puVar46;
          }
          uVar10 = param_5;
          func_0x00010c151fc0();
          bVar4 = uVar10 == 0;
          puStack_c0 = (undefined8 *)((double)puStack_e8 + (double)puStack_d8);
          if (bVar4) {
            puStack_c0 = puVar30;
          }
          puStack_b8 = (undefined8 *)0x0;
          puStack_110 = puVar30;
          if (bVar4) {
            puStack_110 = (undefined8 *)((double)puStack_e0 + (double)puStack_d8);
          }
          uStack_108 = 0;
          puStack_d0 = puVar31;
          if (bVar4) {
            puStack_d0 = puVar50;
          }
          puStack_c8 = (undefined8 *)0x0;
          puVar48 = puVar50;
          if (bVar4) {
            puVar48 = (undefined8 *)CONCAT44(uVar39,uVar36);
          }
          uVar29 = 0;
          uStack_f8 = 0;
          puVar12 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          puStack_100 = puVar48;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          puStack_b8 = puStack_110;
          puStack_c8 = puStack_100;
          puStack_120 = puVar48;
          uStack_118 = uVar29;
          _objc_release(puVar12);
          dVar32 = (double)puStack_d0 * (double)puStack_120;
          dVar49 = (double)puStack_c8 * (double)puStack_120;
          pdVar16 = (double *)(*(long *)(*plVar1 + uVar21 * 0xb0 + 0x80) + uVar26 * 0x20);
          puStack_d0 = (undefined8 *)
                       ((double)(float)(int)((double)puStack_c0 * (double)puStack_120) /
                       (double)puStack_120);
          puStack_c8 = (undefined8 *)
                       ((double)(float)(int)((double)puStack_b8 * (double)puStack_120) /
                       (double)puStack_120);
          puStack_c0 = (undefined8 *)((double)(float)(int)dVar32 / (double)puStack_120);
          puStack_b8 = (undefined8 *)((double)(float)(int)dVar49 / (double)puStack_120);
          pdVar16[1] = (double)puStack_c8;
          *pdVar16 = (double)puStack_d0;
          pdVar16[3] = (double)puStack_b8;
          pdVar16[2] = (double)puStack_c0;
          func_0x00010c151fc0(param_5);
          puVar45 = puStack_b8;
          puVar48 = puStack_c8;
          uVar35 = SUB84(puStack_c8,0);
          puVar31 = puStack_d0;
          FUN_107ea8e5c(puStack_d0,uVar35,(int)puStack_c0,puStack_b8);
          uVar10 = param_5;
          func_0x00010c151fc0();
          uVar36 = SUB84(puStack_e8,0);
          uVar39 = (undefined4)((ulong)puStack_e8 >> 0x20);
          puVar46 = puStack_e8;
          if (uVar10 != 1) {
            puVar46 = puStack_e0;
          }
          if ((double)puVar22 < (double)puVar31 - (double)puVar46) {
            func_0x00010c151fc0(param_5);
            puVar22 = puStack_d0;
            FUN_107ea8e5c(puStack_d0,uVar35,(int)puStack_c0,puVar45);
            uVar10 = param_5;
            func_0x00010c151fc0();
            uVar36 = SUB84(puStack_e8,0);
            uVar39 = (undefined4)((ulong)puStack_e8 >> 0x20);
            puVar31 = puStack_e8;
            if (uVar10 != 1) {
              puVar31 = puStack_e0;
            }
            puVar22 = (undefined8 *)((double)puVar22 - (double)puVar31);
          }
          if (uVar26 == 0) {
            puStack_128 = puVar45;
            puVar45 = puStack_c0;
            puVar8 = puStack_d0;
          }
          else {
            uVar36 = SUB84(puVar47,0);
            uVar39 = (undefined4)((ulong)puVar47 >> 0x20);
            uVar35 = SUB84(puStack_130,0);
            uVar38 = (undefined4)((ulong)puStack_130 >> 0x20);
            _CGRectUnion();
            puVar48 = (undefined8 *)CONCAT44(uVar39,uVar36);
            puVar45 = (undefined8 *)CONCAT44(uVar38,uVar35);
          }
          puVar31 = (undefined8 *)((double)puStack_158 + (double)puVar50);
          puVar50 = (undefined8 *)((double)puVar30 + (double)puVar31);
          _objc_release(puVar11);
          uVar26 = uVar26 + 1;
          puVar47 = puVar48;
        } while (uVar19 != uVar26);
      }
      puVar47 = puStack_140;
      uVar26 = param_5;
      func_0x00010c151fc0();
      uVar35 = SUB84(puVar48,0);
      uVar38 = SUB84(puVar45,0);
      if (uVar26 == 0) {
        if (uVar19 == 0) {
          puVar31 = puVar8;
          _CGRectGetMaxY(puVar8,uVar35,uVar38,puStack_128);
          uVar35 = SUB84(puStack_1a0,0);
          uVar38 = (undefined4)((ulong)puStack_1a0 >> 0x20);
        }
        else {
          puVar31 = puVar8;
          _CGRectGetMinY(puVar8,uVar35,uVar38,puStack_128);
          uVar35 = SUB84(puStack_1a0,0);
          uVar38 = (undefined4)((ulong)puStack_1a0 >> 0x20);
          puVar31 = (undefined8 *)((double)puVar31 - (double)puStack_1a0);
        }
        uVar36 = 0;
        uVar39 = 0;
        puVar46 = puStack_e8;
        if (uStack_174 == 0) {
          uVar36 = uVar35;
          uVar39 = uVar38;
        }
      }
      else {
        if (uVar19 == 0) {
          puVar46 = puVar8;
          _CGRectGetMaxX(puVar8,uVar35,uVar38,puStack_128);
          uVar35 = SUB84(puStack_188,0);
          uVar38 = (undefined4)((ulong)puStack_188 >> 0x20);
        }
        else {
          puVar46 = puVar8;
          _CGRectGetMinX(puVar8,uVar35,uVar38,puStack_128);
          uVar35 = SUB84(puStack_188,0);
          uVar38 = (undefined4)((ulong)puStack_188 >> 0x20);
          puVar46 = (undefined8 *)((double)puVar46 - (double)puStack_188);
        }
        puVar31 = (undefined8 *)0x0;
        if (uStack_174 == 0) {
          puVar31 = (undefined8 *)CONCAT44(uVar38,uVar35);
        }
        uVar36 = SUB84(puVar47,0);
        uVar26 = (ulong)puVar47 >> 0x20;
        puVar47 = puVar31;
        uVar39 = (int)uVar26;
        puVar31 = puStack_e0;
      }
      lVar14 = *plVar1 + uVar21 * 0xb0;
      *(undefined8 **)(lVar14 + 0x40) = puVar46;
      *(undefined8 **)(lVar14 + 0x48) = puVar31;
      *(undefined8 **)(lVar14 + 0x50) = puVar47;
      *(ulong *)(lVar14 + 0x58) = CONCAT44(uVar39,uVar36);
      puStack_d0 = (undefined8 *)CONCAT44(uVar39,uVar36);
      if (uVar19 == 0) {
        puVar45 = puVar47;
        puVar48 = puVar31;
        puVar8 = puVar46;
        puStack_128 = puStack_d0;
      }
      uVar19 = param_5;
      puStack_100 = puVar47;
      puStack_c0 = puVar22;
      func_0x00010c151fc0();
      uVar35 = SUB84(puVar48,0);
      uVar38 = SUB84(puVar45,0);
      if (uVar19 == 0) {
        puVar22 = puVar8;
        _CGRectGetMaxY(puVar8,uVar35,uVar38,puStack_128);
        puVar31 = (undefined8 *)0x0;
        puVar46 = puStack_140;
        puVar47 = puStack_e8;
        if (uStack_174 == 0) {
          puVar31 = puStack_198;
        }
      }
      else {
        puVar47 = puVar8;
        _CGRectGetMaxX(puVar8,uVar35,uVar38,puStack_128);
        puVar47 = (undefined8 *)((double)puStack_168 + (double)puVar47);
        puVar46 = (undefined8 *)0x0;
        puVar31 = puStack_140;
        puVar22 = puStack_e0;
        if (uStack_174 == 0) {
          puVar46 = puStack_180;
        }
      }
      lVar14 = *plVar1 + uVar21 * 0xb0;
      *(undefined8 **)(lVar14 + 0x60) = puVar47;
      *(undefined8 **)(lVar14 + 0x68) = puVar22;
      *(undefined8 **)(lVar14 + 0x70) = puVar46;
      *(undefined8 **)(lVar14 + 0x78) = puVar31;
      if (0.0 < dStack_138) {
        uVar36 = (undefined4)((ulong)puVar48 >> 0x20);
        uVar39 = (undefined4)((ulong)puVar45 >> 0x20);
        _CGRectUnion();
        puVar48 = (undefined8 *)CONCAT44(uVar36,uVar35);
        puVar45 = (undefined8 *)CONCAT44(uVar39,uVar38);
      }
      if (uStack_18c != 0) {
        uVar35 = SUB84(puVar48,0);
        uVar38 = (undefined4)((ulong)puVar48 >> 0x20);
        uVar36 = SUB84(puVar45,0);
        uVar39 = (undefined4)((ulong)puVar45 >> 0x20);
        _CGRectUnion();
        puVar48 = (undefined8 *)CONCAT44(uVar38,uVar35);
        puVar45 = (undefined8 *)CONCAT44(uVar39,uVar36);
      }
      pdVar16 = (double *)(*plVar1 + uVar21 * 0xb0);
      *pdVar16 = (double)puVar8;
      pdVar16[1] = (double)puVar48;
      pdVar16[2] = (double)puVar45;
      pdVar16[3] = (double)puStack_128;
      pdVar16[4] = (double)puStack_e0;
      pdVar16[5] = (double)puStack_e8;
      pdVar16[6] = (double)puStack_170;
      pdVar16[7] = (double)puStack_168;
      puVar30 = puStack_170;
      if (uVar9 != 1) {
        puVar30 = puStack_168;
      }
      func_0x00010c151fc0(param_5);
      uVar41 = SUB84(puVar45,0);
      uVar42 = (undefined4)((ulong)puVar45 >> 0x20);
      puVar31 = puVar8;
      uVar35 = uVar41;
      uVar38 = uVar42;
      puVar47 = puStack_128;
      FUN_107ea8e5c(puVar8,(int)puVar48);
      uVar19 = param_5;
      func_0x00010c151fc0();
      uVar36 = SUB84(puStack_168,0);
      uVar39 = (undefined4)((ulong)puStack_168 >> 0x20);
      puVar46 = puStack_168;
      if (uVar19 != 1) {
        puVar46 = puStack_170;
      }
      puVar22 = puStack_c0;
      if ((double)puStack_c0 <= (double)puVar31 + (double)puVar46) {
        func_0x00010c151fc0(param_5);
        puVar22 = puVar8;
        puVar47 = puStack_128;
        FUN_107ea8e5c(puVar8,(int)puVar48);
        uVar19 = param_5;
        func_0x00010c151fc0();
        uVar36 = SUB84(puStack_168,0);
        uVar39 = (undefined4)((ulong)puStack_168 >> 0x20);
        puVar31 = puStack_168;
        if (uVar19 != 1) {
          puVar31 = puStack_170;
        }
        puVar22 = (undefined8 *)((double)puVar22 + (double)puVar31);
        uVar35 = uVar41;
        uVar38 = uVar42;
      }
      puVar46 = (undefined8 *)CONCAT44(uVar38,uVar35);
      puVar31 = (undefined8 *)CONCAT44(uVar39,uVar36);
      dVar49 = (double)puVar30 + (double)puVar50;
      lVar14 = *plVar1 + uVar21 * 0xb0;
      *(undefined8 **)(lVar14 + 0x98) = puStack_d8;
      *(double *)(lVar14 + 0xa0) = dVar49;
      *(undefined8 **)(lVar14 + 0xa8) = puVar22;
      uVar21 = uVar21 + 1;
      puVar50 = puStack_d8;
    } while (uVar21 != uVar7);
  }
  *(undefined8 *)(param_5 + lVar18) = 0x7fffffffffffffff;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 107ea8e5c; end: 107ea8e73;  */

void FUN_107ea8e5c(long param_1)

{
  if (param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectGetMaxX_110347578)();
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectGetMaxY_110347580)();
    return;
  }
  return;
}



/* Entry: 107ea8e74; end: 107ea901f; -[IGListCollectionViewLayout _rangeOfSectionsInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107ea8e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  long alStack_b0 [6];
  
  puVar5 = PTR__CGSizeZero_110347620;
  plVar1 = (long *)(param_5 + _DAT_112770ea8);
  lVar3 = *plVar1;
  lVar4 = plVar1[1];
  if (lVar4 - lVar3 < 1) {
    uVar7 = 0;
    uVar9 = 0x7fffffffffffffff;
  }
  else {
    lVar10 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0x7fffffffffffffff;
    do {
      puVar2 = (undefined8 *)(*plVar1 + lVar10);
      uVar12 = puVar2[1];
      uVar11 = *puVar2;
      dVar14 = (double)puVar2[3];
      dVar13 = (double)puVar2[2];
      alStack_b0[1] = 0;
      alStack_b0[2] = 0;
      alStack_b0[0] = 0;
      iVar6 = (int)alStack_b0;
      FUN_107ea9198();
      if (((dVar13 != *(double *)puVar5) || (dVar14 != *(double *)(puVar5 + 8))) &&
         (_CGRectIntersectsRect(uVar11,uVar12,dVar13,dVar14,param_1,param_2,param_3,param_4),
         iVar6 != 0)) {
        if (uVar9 == 0x7fffffffffffffff) {
          uVar7 = 1;
          uVar9 = uVar8;
        }
        else {
          _NSUnionRange(uVar9,uVar7,uVar8,1);
        }
      }
      if (alStack_b0[0] != 0) {
        __ZdlPv();
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0xb0;
    } while ((ulong)(lVar4 - lVar3) / 0xb0 != uVar8);
  }
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = uVar9;
  return auVar15;
}



/* Entry: 107ea9020; end: 107ea903f; -[IGListCollectionViewLayout _resetSupplementaryAttributesCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea9020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770ea0),
             PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0,&PTR___NSConcreteGlobalBlock_110a10a58
            );
  return;
}



/* Entry: 107ea9040; end: 107ea906f; -[IGListCollectionViewLayout didModifySection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea9040(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112770ea4);
  lVar1 = lVar3;
  if (param_3 <= lVar3) {
    lVar1 = param_3;
  }
  lVar2 = lVar3;
  if (param_3 != 0x7fffffffffffffff) {
    lVar2 = lVar1;
  }
  if (lVar3 != 0x7fffffffffffffff) {
    param_3 = lVar2;
  }
  *(long *)(param_1 + _DAT_112770ea4) = param_3;
  return;
}



/* Entry: 107ea9070; end: 107ea907f; -[IGListCollectionViewLayout scrollDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ea9070(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770e8c);
}



/* Entry: 107ea9080; end: 107ea908f; -[IGListCollectionViewLayout stickyHeaderYOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ea9080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770e84);
}



/* Entry: 107ea9090; end: 107ea909f; -[IGListCollectionViewLayout showHeaderWhenEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ea9090(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770e88);
}



/* Entry: 107ea90a0; end: 107ea90af; -[IGListCollectionViewLayout setShowHeaderWhenEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea90a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112770e88) = param_3;
  return;
}



/* Entry: 107ea90b0; end: 107ea90bf; -[IGListCollectionViewLayout stickyHeaders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ea90b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770e90);
}



/* Entry: 107ea90c0; end: 107ea90cf; -[IGListCollectionViewLayout topContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ea90c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770e94);
}



/* Entry: 107ea90d0; end: 107ea90df; -[IGListCollectionViewLayout stretchToEdge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ea90d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112770e98);
}



/* Entry: 107ea90e0; end: 107ea917f; -[IGListCollectionViewLayout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea90e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_storeStrong(param_1 + _DAT_112770ea0,0);
  _objc_storeStrong(param_1 + _DAT_112770e9c,0);
  plVar1 = (long *)(param_1 + _DAT_112770ea8);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    if (lVar3 != lVar4) {
      do {
        if (*(long *)(lVar4 + -0x30) != 0) {
          *(long *)(lVar4 + -0x28) = *(long *)(lVar4 + -0x30);
          __ZdlPv();
        }
        lVar4 = lVar4 + -0xb0;
      } while (lVar4 != lVar3);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 107ea9180; end: 107ea9197; -[IGListCollectionViewLayout .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ea9180(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112770ea8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 107ea9198; end: 107ea920f;  */

void FUN_107ea9198(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_107ea9210(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 107ea9210; end: 107ea924f;  */

void FUN_107ea9210(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x20;
    return;
  }
  FUN_107ea9250();
  func_0x000104bd47e8(&DAT_10f62a4d8);
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  ppuVar3 = &puStack_70;
  puStack_68 = PTR_PTR_1126fb8e8;
  puStack_70 = puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined8 *)((long)ppuVar3 + 0x58) = param_3;
  }
  return;
}



/* Entry: 107ea9250; end: 107ea9277;  */

void FUN_107ea9250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  ppuVar2 = &puStack_50;
  puStack_48 = PTR_PTR_1126fb8e8;
  puStack_50 = puVar1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    *(undefined8 *)((long)ppuVar2 + 0x58) = param_3;
  }
  return;
}



/* Entry: 107ea9278; end: 107ea92bf; -[IGListWorkingRangeHandler initWithWorkingRangeSize:] */

void FUN_107ea9278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb8e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
  }
  return;
}



/* Entry: 107ea92c0; end: 107ea96cb; -[IGListWorkingRangeHandler willDisplayItemAtIndexPath:forListAdapter:] */

void FUN_107ea92c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  float fVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_3;
  func_0x00010c1554e0();
  uVar8 = param_3;
  func_0x00010c142240();
  uVar3 = param_3;
  func_0x00010bfde980();
  uVar14 = *(ulong *)(param_1 + 0x10);
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x27 = uVar5 & uVar3;
    }
    else {
      unaff_x27 = uVar3;
      if (uVar14 <= uVar3) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar3 / uVar14;
        }
        unaff_x27 = uVar3 - uVar10 * uVar14;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 8) + unaff_x27 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_107ea93ac;
          uVar10 = plVar7[1];
          if (uVar10 != uVar3) break;
          if (plVar7[2] == uVar6 && plVar7[3] == uVar8) goto LAB_107ea9624;
        }
        if ((uVar14 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (uVar14 <= uVar10) {
          uVar1 = 0;
          if (uVar14 != 0) {
            uVar1 = uVar10 / uVar14;
          }
          uVar10 = uVar10 - uVar1 * uVar14;
        }
      } while (uVar10 == unaff_x27);
    }
  }
LAB_107ea93ac:
  plVar7 = (long *)0x28;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar3;
  plVar7[2] = uVar6;
  plVar7[3] = uVar8;
  plVar7[4] = uVar3;
  fVar15 = (float)(*(long *)(param_1 + 0x20) + 1);
  if ((uVar14 != 0) && (fVar15 <= *(float *)(param_1 + 0x28) * (float)uVar14)) goto LAB_107ea95b4;
  uVar6 = 1;
  if (2 < uVar14) {
    uVar6 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar6 = uVar6 | uVar14 << 1;
  uVar8 = (ulong)(fVar15 / *(float *)(param_1 + 0x28));
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar14 < uVar6) {
LAB_107ea9448:
    if (uVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107ea969c);
      (*pcVar2)();
    }
    lVar13 = uVar6 << 3;
    __Znwm();
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar13;
    if (lVar4 != 0) {
      __ZdlPv();
      lVar13 = *(long *)(param_1 + 8);
    }
    *(ulong *)(param_1 + 0x10) = uVar6;
    _bzero(lVar13,uVar6 << 3);
    plVar9 = *(long **)(param_1 + 0x18);
    uVar14 = uVar6;
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar5 = uVar6 - 1;
      if ((uVar6 & uVar5) == 0) {
        uVar8 = uVar8 & uVar5;
      }
      else if (uVar6 <= uVar8) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar8 / uVar6;
        }
        uVar8 = uVar8 - uVar10 * uVar6;
      }
      *(undefined8 **)(lVar13 + uVar8 * 8) = (undefined8 *)(param_1 + 0x18);
      plVar11 = (long *)*plVar9;
      while (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        if ((uVar6 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (uVar6 <= uVar10) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar1 * uVar6;
        }
        plVar12 = plVar11;
        if (uVar10 != uVar8) {
          if (*(long *)(lVar13 + uVar10 * 8) == 0) {
            *(long **)(lVar13 + uVar10 * 8) = plVar9;
            uVar8 = uVar10;
          }
          else {
            *plVar9 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar13 + uVar10 * 8);
            **(long **)(lVar13 + uVar10 * 8) = (long)plVar11;
            plVar12 = plVar9;
          }
        }
        plVar9 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar6 < uVar14) {
    uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x20) / *(float *)(param_1 + 0x28));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar6 < uVar14) {
      if (uVar6 != 0) goto LAB_107ea9448;
      lVar13 = *(long *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulong *)(param_1 + 0x10);
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x27 = uVar14 - 1 & uVar3;
  }
  else {
    unaff_x27 = uVar3;
    if (uVar14 <= uVar3) {
      uVar6 = 0;
      if (uVar14 != 0) {
        uVar6 = uVar3 / uVar14;
      }
      unaff_x27 = uVar3 - uVar6 * uVar14;
    }
  }
LAB_107ea95b4:
  lVar13 = *(long *)(param_1 + 8);
  plVar9 = *(long **)(lVar13 + unaff_x27 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)(param_1 + 0x18);
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar13 + unaff_x27 * 8) = plVar9;
    if (*plVar7 != 0) {
      uVar6 = *(ulong *)(*plVar7 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar6 = uVar6 & uVar14 - 1;
      }
      else if (uVar14 <= uVar6) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar6 / uVar14;
        }
        uVar6 = uVar6 - uVar8 * uVar14;
      }
      *(long **)(lVar13 + uVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_107ea9624:
  func_0x00010bee50a0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


