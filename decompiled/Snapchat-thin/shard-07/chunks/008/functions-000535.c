/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059f36a4; end: 1059f36d7;  */

void FUN_1059f36a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f36d8; end: 1059f38ab; -[SCSpotlightRepliesDataStore allFetchedThreadedRepliesUnderParentCommentId:completion:] */

void FUN_1059f36d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1059f37e4;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010007380c(uVar2,&puStack_70);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f38ac; end: 1059f38c7;  */

void FUN_1059f38ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059f38c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1059f38c8; end: 1059f3a2f; -[SCSpotlightRepliesDataStore deleteCommentsFromUserID:] */

undefined ** FUN_1059f38c8(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1059f3a30;
  puStack_e8 = &UNK_1108ccdd8;
  _objc_retain(param_3);
  ppuVar3 = &puStack_100;
  ppuStack_e0 = param_3;
  func_0x0001006372a4(lVar5,ppuVar3);
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010bf6c6a0(param_1);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(ppuStack_e0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c131f60(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0720c0();
  _objc_release(ppuVar3);
  return ppuVar4;
}



/* Entry: 1059f3a30; end: 1059f3a77;  */

undefined8 FUN_1059f3a30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c131f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1059f3a78; end: 1059f3b57; -[SCSpotlightRepliesDataStore addSpotlightSnapReplies:position:] */

void FUN_1059f3a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3b58; end: 1059f3b8f;  */

void FUN_1059f3b58(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f3b90; end: 1059f3c67; -[SCSpotlightRepliesDataStore removeSpotlightSnapReplies:] */

void FUN_1059f3b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f3c68; end: 1059f3c9b;  */

void FUN_1059f3c68(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f3c9c; end: 1059f3e03; -[SCSpotlightRepliesDataStore _decrementThreadedReplyCountWithReplyId:] */

void FUN_1059f3c9c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  if ((param_3 != 0) &&
     (uVar1 = param_1, func_0x00010be38ca0(param_1,param_2,param_3), uVar1 != 0x7fffffffffffffff)) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126c0e88;
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24bfc0(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010c0dfd40(lVar5,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c26d4e0();
      lVar7 = *(long *)(param_1 + 8);
      func_0x00010c0dfd40(lVar7,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c26d4e0();
      _objc_release(lVar7);
      _objc_release(lVar5);
      func_0x00010c2baf20(puVar4,param_2,lVar8 - (ulong)(lVar6 != 0));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0d3c80();
      puVar9 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(uVar3,param_2,puVar9,uVar1);
      _objc_release(puVar9);
      uVar10 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar3;
      _objc_release(uVar10);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f3e04; end: 1059f407b; -[SCSpotlightRepliesDataStore _hideThreadedRepliesUnderParentComment:] */

void FUN_1059f3e04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong unaff_x26;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar14 = *(long *)(param_1 + 8);
  lStack_140 = param_1;
  puStack_138 = puVar3;
  _objc_retain(lVar14);
  lVar4 = lVar14;
  func_0x00010bf52a60(lVar14,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar14);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar12 * 8);
        unaff_x26 = uVar16;
        func_0x00010c0f3b40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c131d20(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = unaff_x26;
        func_0x00010c0720c0(unaff_x26,param_2,lVar5);
        puVar3 = puVar2;
        if ((int)uVar9 == 0) {
          _objc_release(lVar5);
          _objc_release(unaff_x26);
        }
        else {
          uVar9 = uVar16;
          func_0x00010c07a860();
          _objc_release(lVar5);
          _objc_release(unaff_x26);
          if ((uVar9 & 1) == 0) {
            puVar3 = puStack_138;
          }
        }
        func_0x00010befa120(puVar3,param_2,uVar16);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = lVar14;
      func_0x00010bf52a60(lVar14,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar14);
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  lVar4 = lStack_140;
  uVar10 = *(undefined8 *)(lStack_140 + 8);
  *(undefined **)(lStack_140 + 8) = puVar3;
  _objc_release(uVar10);
  puVar3 = puStack_138;
  puVar6 = puStack_138;
  func_0x00010bf51e00(puStack_138);
  uVar15 = *(undefined8 *)(lVar4 + 0x30);
  lVar14 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar15,param_2,puVar6,lVar14);
  _objc_release(lVar14);
  _objc_release(puVar6);
  uVar10 = *(undefined8 *)(lVar4 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  lVar13 = lVar4;
  func_0x00010bf046c0(uVar10);
  _objc_release(lVar4);
  _objc_release(uVar10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_168 = puVar3;
  pcStack_148 = FUN_1059f407c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = 3;
  if (lVar13 < 4) {
    if (lVar13 - 1U < 2) {
      lVar12 = 0;
    }
    else if (lVar13 == 0) {
      lVar5 = lVar12;
      lVar12 = 5;
      goto LAB_1059f4120;
    }
  }
  else {
    if (lVar13 == 4) {
      lVar12 = 2;
      lVar5 = 1;
      goto LAB_1059f4120;
    }
    if (lVar13 == 5) {
      lVar12 = 4;
      lVar5 = 1;
      goto LAB_1059f4120;
    }
  }
  lVar5 = 3;
  if (lVar13 == 1) {
    lVar5 = 2;
  }
  lVar1 = 0;
  if (lVar13 != 2) {
    lVar1 = lVar5;
  }
  lVar5 = 1;
  if (lVar13 != 3) {
    lVar5 = lVar1;
  }
LAB_1059f4120:
  if ((uVar9 & 1) == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e15a98;
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e15a78;
  }
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_190 = unaff_x26;
  lStack_188 = lVar14;
  uStack_180 = uVar15;
  lStack_178 = lVar4;
  uStack_170 = uVar10;
  puStack_160 = puVar2;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e15ab8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (lVar12 == 0) {
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e15a98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e15ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
  }
  puVar11 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  _objc_alloc(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1b0 = puVar6;
  puStack_1a8 = puVar2;
  puStack_1a0 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056120(puVar11,param_2,1,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    puVar11 = *(undefined **)(puVar6 + 8);
    func_0x00010bdf1c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40(puVar11,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1059f407c; end: 1059f42b3; -[SCSpotlightRepliesDataStore _createPredicateFromFetchType:fromCurrentUserOnly:] */

void FUN_1059f407c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = 3;
  if (param_3 < 4) {
    if (param_3 - 1U < 2) {
      lVar8 = 0;
    }
    else if (param_3 == 0) {
      lVar9 = lVar8;
      lVar8 = 5;
      goto LAB_1059f4120;
    }
  }
  else {
    if (param_3 == 4) {
      lVar8 = 2;
      lVar9 = 1;
      goto LAB_1059f4120;
    }
    if (param_3 == 5) {
      lVar8 = 4;
      lVar9 = 1;
      goto LAB_1059f4120;
    }
  }
  lVar9 = 3;
  if (param_3 == 1) {
    lVar9 = 2;
  }
  lVar1 = 0;
  if (param_3 != 2) {
    lVar1 = lVar9;
  }
  lVar9 = 1;
  if (param_3 != 3) {
    lVar9 = lVar1;
  }
LAB_1059f4120:
  if ((param_4 & 1) == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e15a98;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e15a78;
  }
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e15ab8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  if (lVar8 == 0) {
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e15a98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1063c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e15ad8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  _objc_alloc(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  puStack_68 = puVar4;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056120(puVar7,param_2,1,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar7 = *(undefined **)(puVar2 + 8);
    func_0x00010bdf1c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaea40(puVar7,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059f42b4; end: 1059f4307; -[SCSpotlightRepliesDataStore _fetchRepliesWithFetchType:] */

void FUN_1059f42b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdf1c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaea40(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f4308; end: 1059f43ef; -[SCSpotlightRepliesDataStore _fetchCurrentUserRepliesWithFetchType:] */

void FUN_1059f4308(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1059f0500;
  uStack_40 = 0x1059f0510;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_38 = puVar1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x38));
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1059f43f0; end: 1059f4527;  */

void FUN_1059f43f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 8);
  func_0x00010bdf1c80(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaea40(uVar7,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  _objc_release(uVar5);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  _objc_alloc();
  func_0x00010c020a80();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  lVar1 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c246cc0(uVar7,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if ((lVar1 == 2) && (dVar8 = *(double *)(puVar2 + 0x48), dVar8 == 0.0)) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    *(double *)(puVar2 + 0x48) = dVar8;
    _objc_release(puVar3);
  }
  uVar7 = *(undefined8 *)(puVar2 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7,param_2,puVar4,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1059f4528; end: 1059f45cb; -[SCSpotlightRepliesDataStore _addPaginationToken:forApprovalState:] */

void FUN_1059f4528(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if ((param_4 == 2) && (dVar3 = *(double *)(param_1 + 0x48), dVar3 == 0.0)) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    *(double *)(param_1 + 0x48) = dVar3;
    _objc_release(puVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f45cc; end: 1059f4643; -[SCSpotlightRepliesDataStore _isReplyInPendingTab:] */

uint FUN_1059f45cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c131f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c131a00(param_3);
  _objc_release(param_3);
  return (uint)(lVar1 == 2) & ((uint)lVar2 ^ 0xffffffff);
}



/* Entry: 1059f4644; end: 1059f46eb; -[SCSpotlightRepliesDataStore .cxx_destruct] */

void FUN_1059f4644(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1059f46ec; end: 1059f47cf; -[SCSpotlightRepliesNetworkingServiceProvider provide] */

void FUN_1059f46ec(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c0ea8;
  _objc_alloc(PTR_PTR_1126c0ea8);
  func_0x00010c03e480();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f47d0; end: 1059f480f;  */

void FUN_1059f47d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059f4810; end: 1059f4ae7; -[SCSpotlightRepliesNetworkingServiceProvider _createRepliesFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f4810(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272d3e8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar15;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272d3f8;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar15;
  func_0x00010bf584a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272d3f0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar15;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11272d3f4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar15;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  puVar5 = PTR_PTR_1126c0d78;
  _objc_alloc(PTR_PTR_1126c0d78);
  func_0x00010c05b6c0();
  puVar6 = PTR_PTR_1126c0eb0;
  _objc_alloc();
  func_0x00010bfff160();
  puVar7 = PTR_PTR_1126c0eb8;
  _objc_alloc();
  lVar8 = param_1;
  FUN_1059f4ae8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  FUN_1059f4ae8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c24be80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + _DAT_11272d3fc;
    _objc_loadWeakRetained(lVar15);
  }
  lVar14 = lVar15;
  func_0x00010c0cef00(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03edc0(puVar7,param_2,puVar6,lVar9,lVar11,lVar13,lVar14,puVar5);
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1059f4ae8; end: 1059f4b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f4ae8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272d3ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059f4b0c; end: 1059f4b73; -[SCSpotlightRepliesNetworkingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f4b0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d3fc);
  _objc_destroyWeak(param_1 + _DAT_11272d3f8);
  _objc_destroyWeak(param_1 + _DAT_11272d3f4);
  _objc_destroyWeak(param_1 + _DAT_11272d3f0);
  _objc_destroyWeak(param_1 + _DAT_11272d3ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d3e8);
  return;
}



/* Entry: 1059f4b74; end: 1059f4b7f;  */

void FUN_1059f4b74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1863d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCtItemInstance__11263f310,param_2);
  return;
}



/* Entry: 1059f4b80; end: 1059f4bef;  */

void FUN_1059f4b80(long param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == -0x4524111 || param_2 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 2;
  if (param_2 != 2) {
    uVar1 = param_2 == 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1059f4bf0; end: 1059f4c23;  */

uint FUN_1059f4bf0(uint param_1)

{
  if (6 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1059f4c24; end: 1059f5fbf;  */

undefined1 * FUN_1059f4c24(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined1 **ppuStack_690;
  code *pcStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined1 uStack_618;
  undefined *puStack_610;
  undefined1 uStack_608;
  long lStack_600;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  long lStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_3d0 [128];
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_2d0;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
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
  lVar22 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar17 = PTR_PTR_1126c0ef8;
  _objc_opt_new();
  puVar13 = param_1;
  func_0x00010c131d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb0c0(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c242640(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar13;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205080(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar17);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c132180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb260(puVar17);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010c132080();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar18 = puVar13;
  func_0x00010bf529e0();
  puStack_238 = puVar17;
  if (puVar18 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(puVar13);
    puVar18 = puVar13;
    func_0x00010bf52a60();
    if (puVar18 != (undefined *)0x0) {
      lVar12 = *plStack_1b0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar12) {
            _objc_enumerationMutation(puVar13);
          }
          uVar21 = *(undefined8 *)(lStack_1b8 + (long)puVar15 * 8);
          puVar16 = PTR_PTR_1126c0ee8;
          _objc_opt_new();
          func_0x00010c120d00(uVar21);
          func_0x00010c1e7b00(puVar16);
          func_0x00010c120aa0(uVar21);
          func_0x00010c1e7ac0(puVar16);
          func_0x00010befa120(puVar17);
          _objc_release(puVar16);
          puVar15 = puVar15 + 1;
        } while (puVar18 != puVar15);
        puVar18 = puVar13;
        func_0x00010bf52a60();
      } while (puVar18 != (undefined *)0x0);
    }
    _objc_release(puVar13);
  }
  puVar18 = puStack_238;
  _objc_release(puVar13);
  func_0x00010c1e7ae0(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar13);
  func_0x00010c1eb400(puVar18);
  puVar17 = param_1;
  func_0x00010c131f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar17;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb1c0(puVar18);
  _objc_release(puVar13);
  _objc_release(puVar17);
  func_0x00010c131a00(param_1);
  func_0x0001059f4c00();
  func_0x00010c169c80(puVar18);
  func_0x00010c1321a0(param_1);
  func_0x00010c1eb280(puVar18);
  puVar17 = param_1;
  func_0x00010c131f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb1a0(puVar18);
  _objc_release(puVar17);
  puVar17 = param_1;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar13 = puVar17;
  func_0x00010bf529e0();
  lStack_248 = param_2;
  puStack_240 = param_1;
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(puVar17);
    puVar15 = puVar17;
    func_0x00010bf52a60();
    puVar18 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar15 != (undefined *)0x0) {
      lVar12 = *plStack_1b0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar12) {
            _objc_enumerationMutation(puVar17);
          }
          uVar21 = *(undefined8 *)(lStack_1b8 + (long)puVar16 * 8);
          puVar2 = PTR_PTR_1126c0ef0;
          _objc_opt_new();
          puStack_1e8 = puVar18;
          uStack_1e0 = 0xc2000000;
          pcStack_1d8 = FUN_1059f4b74;
          puStack_1d0 = &UNK_1108cce38;
          puStack_1c8 = puVar2;
          func_0x00010c0bd240(uVar21);
          func_0x00010befa120(puVar13);
          _objc_release(puVar2);
          puVar16 = puVar16 + 1;
        } while (puVar15 != puVar16);
        puVar15 = puVar17;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined *)0x0);
    }
    _objc_release(puVar17);
    puVar18 = puStack_238;
  }
  puVar15 = puStack_240;
  lVar12 = lStack_248;
  _objc_release(puVar17);
  func_0x00010c1eaf20(puVar18);
  _objc_release(puVar13);
  _objc_release(puVar17);
  puVar17 = puVar15;
  func_0x00010c0f3b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar17 != (undefined *)0x0) {
    puVar17 = puVar15;
    func_0x00010c0f3b40(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar17;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9040(puVar18);
    _objc_release(puVar13);
    _objc_release(puVar17);
  }
  lVar19 = lVar12;
  func_0x00010c08fa60();
  if (lVar19 != 0) {
    func_0x00010c20d1a0(puVar18);
  }
  puVar17 = puVar15;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar17;
  func_0x00010bf529e0();
  _objc_release(puVar17);
  if (puVar13 != (undefined *)0x0) {
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    func_0x00010c0ca820();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar12 = *plStack_220;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar12) {
            _objc_enumerationMutation(puVar15);
          }
          puVar16 = PTR_PTR_1126c0ec0;
          uVar23 = *(undefined8 *)(lStack_228 + (long)puVar18 * 8);
          _objc_retain(uVar23);
          _objc_opt_new();
          puVar2 = PTR_PTR_1126c0ec8;
          _objc_opt_new();
          uVar21 = uVar23;
          func_0x00010c2923e0(uVar23);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar21;
          func_0x000100576e9c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620(puVar2);
          _objc_release(uVar20);
          _objc_release(uVar21);
          uVar21 = uVar23;
          func_0x00010bf85d80(uVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18fca0(puVar2);
          _objc_release(uVar21);
          uVar21 = uVar23;
          func_0x00010c11a720(uVar23);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar21;
          func_0x000100576e9c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e58a0(puVar2);
          _objc_release(uVar20);
          _objc_release(uVar21);
          func_0x00010c1c6880(puVar16);
          puVar3 = PTR_PTR_1126c0ed0;
          _objc_opt_new();
          func_0x00010c11f2a0(uVar23);
          func_0x00010c209380(puVar3);
          func_0x00010c11f2a0(uVar23);
          _objc_release(uVar23);
          func_0x00010c1ba840(puVar3);
          func_0x00010c1e6f40(puVar16);
          _objc_release(puVar3);
          _objc_release(puVar2);
          func_0x00010befa120(puVar17);
          _objc_release(puVar16);
          puVar18 = puVar18 + 1;
        } while (puVar13 != puVar18);
        puVar13 = puVar15;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar15);
    puVar18 = puStack_238;
    func_0x00010c16b9a0(puStack_238);
    _objc_release(puVar17);
    puVar15 = puStack_240;
    lVar12 = lStack_248;
  }
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uStack_258 = 0x1059f5388;
    lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_260 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_5c8 = lVar22;
    _objc_retain(lVar22);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    puStack_5d0 = puVar13;
    _objc_retain(puVar15);
    puVar10 = &uStack_4d0;
    puVar11 = auStack_3d0;
    puStack_5f0 = puVar15;
    func_0x00010bf52a60();
    puStack_5c0 = puVar15;
    if (puVar15 != (undefined *)0x0) {
      lStack_5d8 = *plStack_4c0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_4c0 != lStack_5d8) {
            _objc_enumerationMutation(puStack_5f0);
          }
          puVar18 = *(undefined **)(lStack_4c8 + (long)puVar13 * 8);
          puStack_578 = puVar13;
          puStack_528 = puVar18;
          func_0x00010c1208e0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar18;
          func_0x00010bf51e00();
          _objc_retain();
          puVar13 = puVar17;
          func_0x00010bf529e0();
          if (puVar13 == (undefined *)0x0) {
            puStack_580 = (undefined *)0x0;
          }
          else {
            puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            lStack_488 = 0;
            uStack_490 = 0;
            uStack_478 = 0;
            plStack_480 = (long *)0x0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            _objc_retain(puVar17);
            puVar15 = puVar17;
            func_0x00010bf52a60();
            if (puVar15 != (undefined *)0x0) {
              lVar22 = *plStack_480;
              do {
                puVar16 = (undefined *)0x0;
                do {
                  if (*plStack_480 != lVar22) {
                    _objc_enumerationMutation(puVar17);
                  }
                  uVar21 = *(undefined8 *)(lStack_488 + (long)puVar16 * 8);
                  puVar2 = PTR_PTR_1126c0e90;
                  _objc_alloc(PTR_PTR_1126c0e90);
                  func_0x00010c120980(uVar21);
                  func_0x00010c1208c0(uVar21);
                  func_0x00010c03cfa0(puVar2);
                  func_0x00010befa120(puVar13);
                  _objc_release(puVar2);
                  puVar16 = puVar16 + 1;
                } while (puVar15 != puVar16);
                puVar15 = puVar17;
                func_0x00010bf52a60();
              } while (puVar15 != (undefined *)0x0);
            }
            _objc_release(puVar17);
            puVar15 = puVar13;
            func_0x00010bf51e00();
            puStack_580 = puVar15;
            _objc_release(puVar13);
          }
          _objc_release(puVar17);
          _objc_release(puVar17);
          _objc_release(puVar18);
          puVar17 = puStack_528;
          puVar13 = puStack_528;
          func_0x00010bf08be0();
          func_0x0001059f4bf0();
          lStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          plStack_500 = (long *)0x0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          puStack_588 = puVar13;
          func_0x00010bf0ec60();
          _objc_retainAutoreleasedReturnValue();
          puStack_518 = puVar17;
          func_0x00010bf52a60();
          if (puVar17 == (undefined *)0x0) {
            puStack_520 = (undefined *)0x0;
            puVar13 = (undefined *)0x0;
          }
          else {
            puStack_520 = (undefined *)0x0;
            puVar13 = (undefined *)0x0;
            lVar22 = *plStack_500;
            do {
              puVar18 = (undefined *)0x0;
              do {
                if (*plStack_500 != lVar22) {
                  _objc_enumerationMutation(puStack_518);
                }
                lVar19 = *(long *)(lStack_508 + (long)puVar18 * 8);
                lVar12 = lVar19;
                func_0x00010bf0eac0();
                if ((int)lVar12 == 2) {
                  if (puVar13 == (undefined *)0x0) {
                    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                    _objc_opt_new();
                  }
                  _objc_retain(lVar19);
                  puVar15 = PTR_PTR_1126c0ed8;
                  _objc_opt_new();
                  lVar12 = lVar19;
                  func_0x00010c0ca400();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar12;
                  func_0x00010bfde100();
                  if ((int)lVar4 == 0) {
                    puVar16 = (undefined *)0x0;
                  }
                  else {
                    lVar4 = lVar12;
                    func_0x00010bfde100();
                    if ((int)lVar4 != 0) {
                      lVar4 = lVar12;
                      func_0x00010c2923e0(lVar12);
                      _objc_retainAutoreleasedReturnValue();
                      lVar5 = lVar4;
                      func_0x000108f579f0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2bc360(puVar15);
                      _objc_unsafeClaimAutoreleasedReturnValue();
                      _objc_release(lVar5);
                      _objc_release(lVar4);
                    }
                    lVar4 = lVar12;
                    func_0x00010bf85d80(lVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c2ac7a0(puVar15);
                    _objc_unsafeClaimAutoreleasedReturnValue();
                    _objc_release(lVar4);
                    lVar4 = lVar12;
                    func_0x00010bfdac60();
                    if ((int)lVar4 != 0) {
                      lVar4 = lVar12;
                      func_0x00010c11a720(lVar12);
                      _objc_retainAutoreleasedReturnValue();
                      lVar5 = lVar4;
                      func_0x000108f579f0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2b63e0(puVar15);
                      _objc_unsafeClaimAutoreleasedReturnValue();
                      _objc_release(lVar5);
                      _objc_release(lVar4);
                    }
                    lVar4 = lVar19;
                    func_0x00010c11f2a0(lVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c24d960();
                    lVar5 = lVar19;
                    func_0x00010c11f2a0(lVar19);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c08fa60();
                    func_0x00010c2b66e0(puVar15);
                    _objc_unsafeClaimAutoreleasedReturnValue();
                    _objc_release(lVar5);
                    _objc_release(lVar4);
                    puVar16 = puVar15;
                    func_0x00010bf21f60();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  _objc_release(lVar12);
                  _objc_release(puVar15);
                  _objc_release(lVar19);
                  puVar15 = puVar13;
joined_r0x0001059f5924:
                  if (puVar16 != (undefined *)0x0) {
                    func_0x00010befa120(puVar15);
                  }
                  _objc_release(puVar16);
                }
                else {
                  lVar12 = lVar19;
                  func_0x00010bf0eac0();
                  if ((int)lVar12 == 3) {
                    if (puStack_520 == (undefined *)0x0) {
                      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                      _objc_opt_new();
                      puStack_520 = puVar15;
                    }
                    _objc_retain(lVar19);
                    puVar15 = PTR_PTR_1126c0ee0;
                    _objc_opt_new();
                    lVar12 = lVar19;
                    func_0x00010c2620e0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar4 = lVar12;
                    func_0x00010c153fe0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar5 = lVar4;
                    func_0x00010c08fa60();
                    _objc_release(lVar4);
                    if (lVar5 == 0) {
                      puVar16 = (undefined *)0x0;
                    }
                    else {
                      lVar4 = lVar12;
                      func_0x00010c153fe0(lVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2b7be0(puVar15);
                      _objc_unsafeClaimAutoreleasedReturnValue();
                      _objc_release(lVar4);
                      lVar4 = lVar19;
                      func_0x00010c11f2a0(lVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c24d960();
                      lVar5 = lVar19;
                      func_0x00010c11f2a0(lVar19);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c08fa60();
                      func_0x00010c2b66e0(puVar15);
                      _objc_unsafeClaimAutoreleasedReturnValue();
                      _objc_release(lVar5);
                      _objc_release(lVar4);
                      puVar16 = puVar15;
                      func_0x00010bf21f60();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    _objc_release(lVar12);
                    _objc_release(puVar15);
                    _objc_release(lVar19);
                    puVar15 = puStack_520;
                    goto joined_r0x0001059f5924;
                  }
                }
                puVar18 = puVar18 + 1;
              } while (puVar17 != puVar18);
              puVar17 = puStack_518;
              func_0x00010bf52a60();
            } while (puVar17 != (undefined *)0x0);
          }
          _objc_release(puStack_518);
          puVar17 = puVar13;
          func_0x00010bf529e0();
          puVar18 = puStack_528;
          if (puVar17 != (undefined *)0x0) {
            puVar17 = puStack_528;
            func_0x00010c132180();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar17;
            func_0x00010623b898();
            _objc_release(puVar17);
            if (((ulong)puVar15 & 1) == 0) {
              _objc_release(puVar13);
              puStack_518 = (undefined *)0x0;
              puVar13 = puStack_518;
            }
          }
          puStack_518 = puVar13;
          puVar17 = puVar18;
          func_0x00010c131fc0();
          puVar13 = puVar18;
          if ((int)puVar17 == 0x1c) {
            func_0x00010bfb8760();
            _objc_retainAutoreleasedReturnValue();
            uStack_590 = 2;
LAB_1059f5a4c:
            puVar17 = puVar13;
            func_0x000108f579f0();
            _objc_retainAutoreleasedReturnValue();
            puStack_528 = puVar17;
            _objc_release(puVar13);
          }
          else {
            if ((int)puVar17 == 0x1b) {
              func_0x00010bf25140();
              _objc_retainAutoreleasedReturnValue();
LAB_1059f5a44:
              uStack_590 = 1;
              goto LAB_1059f5a4c;
            }
            puVar17 = puVar18;
            func_0x00010bfdb1c0();
            if ((int)puVar17 != 0) {
              func_0x00010c131f80();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1059f5a44;
            }
            puStack_528 = (undefined *)0x0;
            uStack_590 = 0;
          }
          puVar17 = puVar18;
          func_0x00010c131a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar13 = puVar17;
          func_0x00010bf529e0();
          if (puVar13 == (undefined *)0x0) {
            puStack_530 = (undefined *)0x0;
          }
          else {
            puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new();
            lStack_488 = 0;
            uStack_490 = 0;
            uStack_478 = 0;
            plStack_480 = (long *)0x0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            uStack_460 = 0;
            _objc_retain(puVar17);
            puVar15 = puVar17;
            func_0x00010bf52a60();
            if (puVar15 != (undefined *)0x0) {
              lVar22 = *plStack_480;
              do {
                puVar16 = (undefined *)0x0;
                do {
                  if (*plStack_480 != lVar22) {
                    _objc_enumerationMutation(puVar17);
                  }
                  uVar20 = *(undefined8 *)(lStack_488 + (long)puVar16 * 8);
                  uVar21 = uVar20;
                  func_0x00010bf0d0a0();
                  puVar2 = PTR_PTR_1126b5ff8;
                  if ((int)uVar21 == 1) {
                    func_0x00010bf5cca0(uVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf5cda0(puVar2);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar20);
                    func_0x00010befa120(puVar13);
                    _objc_release(puVar2);
                  }
                  puVar16 = puVar16 + 1;
                } while (puVar15 != puVar16);
                puVar15 = puVar17;
                func_0x00010bf52a60();
              } while (puVar15 != (undefined *)0x0);
            }
            _objc_release(puVar17);
            puVar15 = puVar13;
            func_0x00010bf51e00();
            puStack_530 = puVar15;
            _objc_release(puVar13);
          }
          _objc_release(puVar17);
          _objc_release(puVar17);
          puVar17 = PTR_PTR_1126c0e98;
          _objc_alloc();
          puVar13 = puVar18;
          puStack_5b0 = puVar17;
          func_0x00010c131d20();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar13;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar18;
          puStack_538 = puVar17;
          func_0x00010c242640();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar18;
          puStack_540 = puVar17;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar18;
          puStack_548 = puVar15;
          func_0x00010c132180();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar18;
          puStack_550 = puVar17;
          func_0x00010c131f60();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar2;
          func_0x000108f579f0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar18;
          puStack_558 = puVar17;
          func_0x00010c131f40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar18;
          puStack_560 = puVar15;
          func_0x00010c1321a0(puVar18);
          puVar17 = puVar18;
          func_0x00010c131f00();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar18;
          puStack_568 = puVar17;
          func_0x00010c131f20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar18;
          puStack_570 = puVar15;
          func_0x00010bf15660(puVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_retain();
          _objc_opt_new();
          puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_348 = 0xc2000000;
          pcStack_340 = FUN_1059f4b80;
          puStack_338 = &UNK_110842ff8;
          _objc_retain();
          puStack_330 = puVar15;
          func_0x00010bf980c0(puVar6);
          _objc_release(puVar6);
          _objc_release(puStack_330);
          puVar17 = puVar18;
          func_0x00010bfda000();
          puStack_5a8 = puVar2;
          puStack_5a0 = puVar16;
          puStack_598 = puVar13;
          if ((int)puVar17 == 0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar13 = puVar18;
            func_0x00010c0f3b40();
            _objc_retainAutoreleasedReturnValue();
            puStack_5e0 = puVar13;
            func_0x000108f579f0();
            _objc_retainAutoreleasedReturnValue();
            puStack_5e8 = puVar13;
          }
          puVar16 = puVar18;
          func_0x00010c26d4e0();
          puVar2 = puVar18;
          func_0x00010c131fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar2;
          func_0x00010c08fa60();
          if (puVar7 == (undefined *)0x0) {
            puVar14 = (undefined *)0x0;
          }
          else {
            puVar14 = puVar18;
            func_0x00010c131fa0();
            _objc_retainAutoreleasedReturnValue();
            puStack_5b8 = puVar14;
          }
          func_0x00010c068760();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar18;
          func_0x00010c072ae0();
          puVar1 = puStack_580;
          lStack_600 = lStack_5c8;
          uStack_608 = SUB81(puVar8,0);
          uStack_618 = 0;
          uStack_638 = uStack_590;
          puStack_648 = puStack_570;
          puStack_640 = puStack_528;
          uStack_658 = 1;
          puStack_650 = puStack_568;
          puStack_668 = puStack_560;
          puStack_660 = puStack_588;
          puStack_678 = puStack_520;
          puStack_670 = puStack_558;
          puStack_680 = puStack_518;
          puVar8 = puStack_5b0;
          puStack_630 = puVar15;
          puStack_628 = puVar13;
          puStack_620 = puVar16;
          puStack_610 = puVar14;
          func_0x00010c03e5c0((double)(long)puVar3,puStack_5b0);
          _objc_release(puVar18);
          if (puVar7 != (undefined *)0x0) {
            _objc_release(puStack_5b8);
          }
          _objc_release(puVar2);
          puVar13 = puStack_578;
          if ((int)puVar17 != 0) {
            _objc_release(puStack_5e8);
            _objc_release(puStack_5e0);
          }
          _objc_release(puVar15);
          _objc_release(puVar6);
          _objc_release(puStack_570);
          _objc_release(puStack_568);
          _objc_release(puStack_560);
          _objc_release(puStack_558);
          _objc_release(puStack_5a8);
          _objc_release(puStack_550);
          _objc_release(puStack_548);
          _objc_release(puStack_540);
          _objc_release(puStack_5a0);
          _objc_release(puStack_538);
          _objc_release(puStack_598);
          func_0x00010befa120(puStack_5d0);
          _objc_release(puVar8);
          _objc_release(puStack_530);
          _objc_release(puStack_528);
          _objc_release(puStack_520);
          _objc_release(puStack_518);
          _objc_release(puVar1);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puStack_5c0);
        puVar10 = &uStack_4d0;
        puVar11 = auStack_3d0;
        puVar13 = puStack_5f0;
        func_0x00010bf52a60();
        puStack_5c0 = puVar13;
      } while (puVar13 != (undefined *)0x0);
    }
    puVar13 = puStack_5f0;
    _objc_release(puStack_5f0);
    puVar15 = puStack_5d0;
    puVar18 = puStack_5d0;
    func_0x00010bf51e00();
    _objc_release(puVar15);
    _objc_release(lStack_5c8);
    puVar16 = puVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
      ___stack_chk_fail();
      ppuVar9 = &puStack_6c0;
      puStack_6a8 = puVar15;
      puStack_6a0 = puVar13;
      pcStack_688 = FUN_1059f5fc0;
      puStack_6b0 = puVar17;
      puStack_698 = puVar18;
      ppuStack_690 = &puStack_260;
      _objc_retain(puVar10);
      _objc_retain(puVar11);
      puStack_6b8 = PTR_PTR_1126eb440;
      puStack_6c0 = puVar16;
      _objc_msgSendSuper2(&puStack_6c0,PTR_s_init_1125d9248);
      if (ppuVar9 != (undefined **)0x0) {
        _objc_retain(puVar10);
        uVar21 = *(undefined8 *)((long)ppuVar9 + 8);
        *(undefined8 **)((long)ppuVar9 + 8) = puVar10;
        _objc_release(uVar21);
        _objc_retain(puVar11);
        uVar21 = *(undefined8 *)((long)ppuVar9 + 0x10);
        *(undefined1 **)((long)ppuVar9 + 0x10) = puVar11;
        _objc_release(uVar21);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
      return (undefined1 *)ppuVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return puVar18;
}



/* Entry: 1059f5fc0; end: 1059f6063; -[SCSpotlightRepliesRequestCreator initWithClientInfoProvider:userId:] */

undefined1 *
FUN_1059f5fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb440;
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



/* Entry: 1059f6064; end: 1059f6127; -[SCSpotlightRepliesRequestCreator _createRequestMetadata] */

void FUN_1059f6064(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0f00;
  _objc_opt_new(PTR_PTR_1126c0f00);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  func_0x00010c1d64a0(puVar1,param_3,1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfc3b20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar1,param_3,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059f6128; end: 1059f62c3; -[SCSpotlightRepliesRequestCreator createGetSpotlightRepliesRequestWithSnapId:storyId:approvalState:paginationToken:parentCommentId:snapCreatorUserId:] */

void FUN_1059f6128(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126c0f08;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bdf2780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c204680(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100576e9c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x0001059f4c00(param_5);
  func_0x00010c169c80(puVar1,param_2,param_5);
  func_0x00010c1d8b40(puVar1,param_2,param_6);
  _objc_release(param_6);
  if (param_7 != 0) {
    lVar2 = param_7;
    func_0x000100576e9c(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9040(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c20d1a0(puVar1,param_2,param_4);
  }
  uVar3 = param_8;
  func_0x00010c0720c0(param_8,param_2,*(undefined8 *)(param_1 + 0x10));
  uVar4 = 1;
  if ((int)uVar3 == 0) {
    uVar4 = 2;
  }
  func_0x00010c1810e0(puVar1,param_2,uVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059f62c4; end: 1059f637b; -[SCSpotlightRepliesRequestCreator createPostSpotlightReplyRequestWithReply:storyId:] */

void FUN_1059f62c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0f10;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bdf2780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar1);
  _objc_release(param_1);
  uVar2 = param_3;
  FUN_1059f4c24(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1eaee0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059f637c; end: 1059f653b; -[SCSpotlightRepliesRequestCreator createUpdateReplyStateRequestWithReplyId:snapId:storyId:approvalState:] */

void FUN_1059f637c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_6;
  lVar13 = param_7;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c0f18;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c0f20;
  _objc_opt_new();
  func_0x0001059f4c00(param_7);
  func_0x00010c169c80(puVar3,param_3,param_7);
  uVar8 = param_4;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1eb0c0(puVar3,param_3,uVar8);
  _objc_release(uVar8);
  func_0x00010c204680(puVar3,param_3,param_5);
  _objc_release(param_5);
  lVar12 = param_6;
  func_0x00010c08fa60();
  if (lVar12 != 0) {
    func_0x00010c20d1a0(puVar3,param_3,param_6);
  }
  func_0x00010bdf2780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar2,param_3,param_2);
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar11 = 1;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar4,param_3,puVar5);
  puVar10 = puVar4;
  func_0x00010c169cc0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  lVar12 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126c0f28;
    pcStack_68 = FUN_1059f653c;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_a0 = uVar8;
    puStack_98 = puVar5;
    puStack_90 = puVar4;
    puStack_88 = puVar3;
    puStack_80 = puVar2;
    lStack_78 = param_6;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(uVar11);
    _objc_retain(puVar10);
    _objc_opt_new();
    puVar3 = PTR_PTR_1126c0f30;
    _objc_opt_new();
    puVar2 = puVar10;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010c1eb0c0(puVar3,param_3,puVar2);
    _objc_release(puVar2);
    func_0x00010c204680(puVar3,param_3,uVar11);
    _objc_release(uVar11);
    lVar7 = lVar12;
    func_0x00010bdf2780(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(puVar6,param_3,lVar7);
    _objc_release(lVar7);
    uVar8 = *(undefined8 *)(lVar12 + 0x10);
    func_0x000100576e9c(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb360(puVar6,param_3,uVar8);
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar12 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar2,param_3,puVar4);
    puVar5 = puVar2;
    func_0x00010c1eb040(puVar6,param_3,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = puVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_retain(lVar12);
      puVar2 = PTR_PTR_1126c0f38;
      _objc_retain(puVar5);
      _objc_opt_new(puVar2);
      func_0x00010bdf2780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c73c0(puVar2,param_3,puVar3);
      _objc_release(puVar3);
      func_0x00010c204680(puVar2,param_3,puVar5);
      _objc_release(puVar5);
      lVar7 = lVar12;
      func_0x00010c08fa60();
      if (lVar7 != 0) {
        func_0x00010c20d1a0(puVar2,param_3,lVar12);
      }
      func_0x0001059f4c00(lVar9);
      func_0x00010c169c80(puVar2,param_3,lVar9);
      func_0x00010c1da260(puVar2,param_3,(long)(param_1 * 1000.0));
      iVar1 = 0;
      if (lVar13 - 1U < 3) {
        iVar1 = (int)(lVar13 - 1U) + 1;
      }
      func_0x00010c16cb60(puVar2,param_3,iVar1);
      _objc_release(lVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f653c; end: 1059f66d7; -[SCSpotlightRepliesRequestCreator createDeleteUserRepliesRequestWithReplyId:snapId:] */

void FUN_1059f653c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126c0f28;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c0f30;
  _objc_opt_new();
  uVar4 = param_4;
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1eb0c0(puVar3,param_3,uVar4);
  _objc_release(uVar4);
  func_0x00010c204680(puVar3,param_3,param_5);
  _objc_release(param_5);
  lVar9 = param_2;
  func_0x00010bdf2780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar2,param_3,lVar9);
  _objc_release(lVar9);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100576e9c(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb360(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar9 = 1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar5,param_3,puVar6);
  puVar8 = puVar5;
  func_0x00010c1eb040(puVar2,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(lVar9);
    puVar2 = PTR_PTR_1126c0f38;
    _objc_retain(puVar8);
    _objc_opt_new(puVar2);
    func_0x00010bdf2780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c204680(puVar2,param_3,puVar8);
    _objc_release(puVar8);
    lVar7 = lVar9;
    func_0x00010c08fa60();
    if (lVar7 != 0) {
      func_0x00010c20d1a0(puVar2,param_3,lVar9);
    }
    func_0x0001059f4c00(param_6);
    func_0x00010c169c80(puVar2,param_3,param_6);
    func_0x00010c1da260(puVar2,param_3,(long)(param_1 * 1000.0));
    iVar1 = 0;
    if (param_7 - 1U < 3) {
      iVar1 = (int)(param_7 - 1U) + 1;
    }
    func_0x00010c16cb60(puVar2,param_3,iVar1);
    _objc_release(lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f66d8; end: 1059f67e3; -[SCSpotlightRepliesRequestCreator createUpdateAllRepliesStateRequestWithSnapId:storyId:approvalState:updateAllTimestamp:autoApprovalSettingType:] */

void FUN_1059f66d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c0f38;
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x00010bdf2780(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar2,param_3,param_2);
  _objc_release(param_2);
  func_0x00010c204680(puVar2,param_3,param_4);
  _objc_release(param_4);
  lVar3 = param_5;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c20d1a0(puVar2,param_3,param_5);
  }
  func_0x0001059f4c00(param_6);
  func_0x00010c169c80(puVar2,param_3,param_6);
  func_0x00010c1da260(puVar2,param_3,(long)(param_1 * 1000.0));
  iVar1 = 0;
  if (param_7 - 1U < 3) {
    iVar1 = (int)(param_7 - 1U) + 1;
  }
  func_0x00010c16cb60(puVar2,param_3,iVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f67e4; end: 1059f69fb; -[SCSpotlightRepliesRequestCreator createReplyReactRequestWithReactTypeId:replyId:snapId:compositeStoryId:reactOption:] */

void FUN_1059f67e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_5;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c0f40;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126c0f48;
  _objc_opt_new();
  func_0x00010c1e7b00();
  uVar7 = param_4;
  func_0x000100576e9c(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1eb0c0(puVar3,param_2,uVar7);
  _objc_release(uVar7);
  func_0x00010c204680(puVar3,param_2,param_5);
  _objc_release(param_5);
  uVar1 = 2;
  if (param_7 != 2) {
    uVar1 = param_7 == 1;
  }
  func_0x00010c1d5de0(puVar3,param_2,uVar1);
  lVar4 = param_6;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = param_6;
    func_0x000108f520ec(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar3,param_2,lVar4);
    _objc_release(lVar4);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar8 = 1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  lVar4 = param_1;
  func_0x00010bdf2780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100576e9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb200(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  puVar6 = puVar5;
  func_0x00010c1e7dc0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126c0f50;
    _objc_retain(uVar9);
    _objc_retain(puVar6);
    _objc_opt_new(puVar2);
    lVar4 = param_6;
    func_0x00010bdf2780(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(puVar2,param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c204680(puVar2,param_2,puVar6);
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(param_6 + 0x10);
    func_0x000100576e9c(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb360(puVar2,param_2,uVar7);
    _objc_release(uVar7);
    func_0x0001059f4c00(uVar8);
    func_0x00010c169c80(puVar2,param_2,uVar8);
    func_0x00010c1d8b40(puVar2,param_2,uVar9);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f69fc; end: 1059f6ae7; -[SCSpotlightRepliesRequestCreator createGetUserRepliesRequestWithSnapId:approvalState:paginationCursor:] */

void FUN_1059f69fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0f50;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010bdf2780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c204680(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100576e9c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb360(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x0001059f4c00(param_4);
  func_0x00010c169c80(puVar1,param_2,param_4);
  func_0x00010c1d8b40(puVar1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059f6ae8; end: 1059f6cef; -[SCSpotlightRepliesRequestCreator createReplyLookupRequestWithReplyIds:snapId:] */

void FUN_1059f6ae8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126c0f58;
      _objc_opt_new(PTR_PTR_1126c0f58);
      func_0x000100576e9c(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb0c0(puVar4);
      _objc_release(uVar7);
      func_0x00010c204680(puVar4);
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c0f60;
  _objc_opt_new(PTR_PTR_1126c0f60);
  func_0x00010bdf2780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c73c0(puVar4);
  _objc_release(param_1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010c1eb0e0(puVar4);
  _objc_release(puVar5);
  func_0x00010c1810e0(puVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1059f6cf0; end: 1059f6d1f; -[SCSpotlightRepliesRequestCreator .cxx_destruct] */

void FUN_1059f6cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059f6d20; end: 1059f6f83; -[SCSpotlightRepliesRequestSenderImpl initWithRequestCreator:httpMetadataService:httpRequestModifier:spotlightRepliesDataFetching:mixerEndpointManager:clientInfoProvider:] */

undefined8 *
FUN_1059f6d20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126eb448;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_7);
    lVar5 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release();
    func_0x000108f553f4();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release();
    if (lVar6 != 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
      func_0x000108f553f4();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_70 = lVar5;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[7];
      puVar1[7] = puVar3;
      _objc_release(uVar2);
      _objc_release(lVar5);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(uStack_90);
  puVar7 = *(undefined8 **)(param_3 + 8);
  func_0x00010bf56480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  puVar1 = puVar7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar2,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15b38,puVar1,
                      *(undefined8 *)(param_3 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(uStack_90);
  func_0x00010be9fee0(param_3);
  _objc_release(uStack_90);
  _objc_release(uStack_90);
  _objc_release(uVar2);
  _objc_release(puVar7);
  return puVar7;
}



/* Entry: 1059f6f84; end: 1059f70c7; -[SCSpotlightRepliesRequestSenderImpl fetchRepliesForSnap:identifierOfCompositeStoryId:approvalState:parentCommentId:paginationCursor:snapCreatorUserId:completion:] */

void FUN_1059f6f84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf56480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15b38,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_stack_00000000);
  func_0x00010be9fee0(param_1);
  _objc_release(in_stack_00000000);
  _objc_release(in_stack_00000000);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f70c8; end: 1059f72db;  */

void FUN_1059f70c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126c0f68;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain();
      puVar3 = PTR_PTR_1126c0f68;
      _objc_retain(puVar2);
      _objc_opt_class(puVar3);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar3);
      puVar3 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      puVar4 = puVar3;
      func_0x00010c131800();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0cc0c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x0001059f5388(puVar8,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar8);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c0f2740();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c08fa60();
      if (puVar8 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar3;
        func_0x00010c0f2740(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf5b160(puVar3);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),1,puVar7,puVar8,(long)(int)puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(0);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059f72dc; end: 1059f7417; -[SCSpotlightRepliesRequestSenderImpl boostReplyWithReplyId:snapId:compositeStoryId:reactionTypeId:reactOption:completion:] */

void FUN_1059f72dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x7;
  undefined8 uVar3;
  
  _objc_retain(in_x7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf584e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15bf8,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x7);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x7);
  _objc_release(in_x7);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f7418; end: 1059f748b;  */

void FUN_1059f7418(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4 == 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059f748c; end: 1059f75af; -[SCSpotlightRepliesRequestSenderImpl fetchUserRepliesWithSnapId:approvalState:paginationToken:completion:] */

void FUN_1059f748c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 uVar3;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf564a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15b58,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x5);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x5);
  _objc_release(in_x5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f75b0; end: 1059f77af;  */

void FUN_1059f75b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126c0f70;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar3 = PTR_PTR_1126c0f70;
    _objc_retain(puVar2);
    _objc_opt_class(puVar3);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,0);
      }
    }
    else {
      puVar4 = puVar2;
      func_0x00010c131800();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0cc0c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x0001059f5388(puVar5,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,1,puVar8,0,0);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059f77b0; end: 1059f77b3; -[SCSpotlightRepliesRequestSenderImpl postSpotlightReply:identifierOfCompositeStoryId:completion:] */

void FUN_1059f77b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__postReply_identifierOfComposite_11257b3a0);
  return;
}



/* Entry: 1059f77b4; end: 1059f78df; -[SCSpotlightRepliesRequestSenderImpl updateSpotlightReplyWithReplyId:snapId:identifierOfCompositeStoryId:approvalState:completion:] */

void FUN_1059f77b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  undefined8 uVar3;
  
  _objc_retain(in_x6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf59d00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15b98,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x6);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x6);
  _objc_release(in_x6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f78e0; end: 1059f7953;  */

void FUN_1059f78e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4 == 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059f7954; end: 1059f7a6f; -[SCSpotlightRepliesRequestSenderImpl deleteSpotlightUserRepliesWithReplyId:snapId:completion:] */

void FUN_1059f7954(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 uVar3;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf55ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15bb8,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x4);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f7a70; end: 1059f7ae3;  */

void FUN_1059f7a70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4 == 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059f7ae4; end: 1059f7c1b; -[SCSpotlightRepliesRequestSenderImpl updateAllSpotlightRepliesInPendingTabWithSnapId:identifierOfCompositeStoryId:approvalState:updateAllTimestamp:completion:] */

void FUN_1059f7ae4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined8 uVar3;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf59ce0(param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15bd8,uVar2,
                      *(undefined8 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x5);
  func_0x00010be9fee0(param_2);
  _objc_release(in_x5);
  _objc_release(in_x5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f7c1c; end: 1059f7c8f;  */

void FUN_1059f7c1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4 == 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059f7c90; end: 1059f7dc3; -[SCSpotlightRepliesRequestSenderImpl updateRepliesStatusOnAllSpotlightSnapsWithAutoApprovalSettingType:approvalState:updateAllTimestamp:completion:] */

void FUN_1059f7c90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 uVar3;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf59ce0(param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15bd8,uVar2,
                      *(undefined8 *)(param_2 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x4);
  func_0x00010be9fee0(param_2);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f7dc4; end: 1059f7e37;  */

void FUN_1059f7dc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_4 == 0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059f7e38; end: 1059f7f53; -[SCSpotlightRepliesRequestSenderImpl replyLookupWithReplyIds:snapId:completion:] */

void FUN_1059f7e38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 uVar3;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf584c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15c18,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x4);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f7f54; end: 1059f8113;  */

void FUN_1059f7f54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126c0f78;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      puVar3 = PTR_PTR_1126c0f78;
      _objc_retain(puVar2);
      _objc_opt_class(puVar3);
      puVar4 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar3);
      puVar3 = puVar2;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar2);
      puVar4 = puVar3;
      func_0x00010c131800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0cc0c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x0001059f5388(puVar4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf529e0();
      puVar7 = puVar3;
      if (puVar4 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),puVar4 != (undefined *)0x0,puVar7);
      _objc_release(0);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059f8114; end: 1059f822f; -[SCSpotlightRepliesRequestSenderImpl _postReply:identifierOfCompositeStoryId:completion:] */

void FUN_1059f8114(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 uVar3;
  
  _objc_retain(in_x4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf57d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar3,&PTR____CFConstantStringClassReference_110e15b18,
                      &PTR____CFConstantStringClassReference_110e15b78,uVar2,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(in_x4);
  func_0x00010be9fee0(param_1);
  _objc_release(in_x4);
  _objc_release(in_x4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1059f8230; end: 1059f83d3;  */

void FUN_1059f8230(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126c0f80;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar3 = PTR_PTR_1126c0f80;
    _objc_retain(puVar2);
    _objc_opt_class(puVar3);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + 0x20);
    if (puVar3 == (undefined *)0x0) {
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
      }
    }
    else if (lVar1 != 0) {
      puVar4 = puVar2;
      func_0x00010c131d20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bf08be0(puVar2);
      FUN_1059f4bf0();
      (**(code **)(lVar1 + 0x10))(lVar1,1,puVar5,puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1059f83d4; end: 1059f851b; -[SCSpotlightRepliesRequestSenderImpl _sendRequest:timeoutInSecond:completion:] */

void FUN_1059f83d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b5730;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c01b560();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1059f851c;
  puStack_50 = &UNK_11086d168;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c25f600(uVar2,param_2,param_3,puVar1,uVar3,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1059f851c; end: 1059f853b;  */

void FUN_1059f851c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059f8534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_4,param_5,param_6);
    return;
  }
  return;
}



/* Entry: 1059f853c; end: 1059f8ba7; -[SCSpotlightRepliesRequestSenderImpl fetchCommentSanpRepliesWithCompositeStoryId:paginationCursor:completion:] */

void FUN_1059f853c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c0f88;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar4 = param_3;
  func_0x00010846d990(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d6720(puVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c0f90;
  _objc_opt_new(PTR_PTR_1126c0f90);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c135700(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cb60(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfc7a00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd40(puVar2);
  _objc_release(uVar4);
  func_0x00010c17ef00(puVar2);
  func_0x00010c19b200(puVar2);
  func_0x00010c1d64a0(puVar2);
  func_0x00010c1b8a60(puVar2);
  _objc_release(param_4);
  func_0x00010c21a2a0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c2588e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar6,uVar4,uVar5,puVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c25f600(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1059f8ba8; end: 1059f8e9f; -[SCSpotlightRepliesRequestSenderImpl hideCommentSnapRepliesWithCompositeStoryId:originalPostCompositeStoryId:snapReplyPosterUserId:currentUserId:completion:] */

void FUN_1059f8ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c0fa0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c0fa8;
  _objc_opt_new(PTR_PTR_1126c0fa8);
  puVar3 = PTR_PTR_1126c0fb0;
  _objc_opt_new(PTR_PTR_1126c0fb0);
  uVar7 = param_3;
  func_0x00010846d990(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1805c0(puVar3);
  _objc_release(uVar7);
  uVar7 = param_4;
  func_0x00010846d990(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d6720(puVar3);
  _objc_release(uVar7);
  func_0x00010c185c40(puVar3);
  _objc_release(param_5);
  func_0x00010c202be0(puVar2);
  func_0x00010c21e620(puVar1);
  _objc_release(param_6);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar1);
  _objc_release(puVar4);
  func_0x00010c216900(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c20d3a0(puVar1);
  func_0x00010c1a8480(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f4ca84(uVar7,&PTR____CFConstantStringClassReference_110def498,
                      &PTR____CFConstantStringClassReference_110e15c38,puVar4,
                      *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c25f600(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1059f8ea0; end: 1059f8ebb;  */

void FUN_1059f8ea0(long param_1)

{
  long lVar1;
  long in_x5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001059f8eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,in_x5 == 0);
    return;
  }
  return;
}



/* Entry: 1059f8ebc; end: 1059f8f33; -[SCSpotlightRepliesRequestSenderImpl .cxx_destruct] */

void FUN_1059f8ebc(long param_1)

{
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



/* Entry: 1059f8f34; end: 1059f8fff; -[SCSpotlightClientInfoProvider initWithUserId:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_1059f8f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb450;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059f9000; end: 1059f900f; -[SCSpotlightClientInfoProvider getClientInfo] */

void FUN_1059f9000(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(lVar1);
  puVar2 = PTR_PTR_1126dc7b0;
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar10);
  func_0x000107c61160(puVar2);
  uVar3 = uVar10;
  func_0x000100576e9c(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c5a344(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126dc7b8;
  func_0x000107c61160(PTR_PTR_1126dc7b8);
  func_0x000107c570e0();
  puVar5 = PTR_PTR_1126b2930;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c570e4(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170();
  func_0x000100150168();
  func_0x000107c52754(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4539c();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c527fc(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c52780(puVar2);
  func_0x000107c61170(puVar4);
  puVar5 = PTR_PTR_1126c1070;
  func_0x000107c61174(lVar1);
  func_0x000107c61160(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR_PTR_1126c1078;
  func_0x000107c3f6d8(PTR_PTR_1126c1078);
  func_0x000107c61180();
  func_0x000107c4d6c4(puVar4);
  func_0x000107c61180();
  func_0x000107c53274(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x00010058b024();
  func_0x000107c61180();
  func_0x000107c53278(puVar5);
  func_0x000107c61170(puVar6);
  lVar8 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar9 = lVar8;
  func_0x000107c40244();
  func_0x000107c61170(lVar8);
  if ((lVar9 + 1U < 6) && ((0x2fU >> (ulong)((uint)(lVar9 + 1U) & 0x1f) & 1) != 0)) {
    func_0x000107c53774(puVar5);
  }
  func_0x000107c5376c(puVar2);
  func_0x000107c61170(puVar5);
  puVar4 = PTR_PTR_1126dc7c0;
  func_0x000107c61160(PTR_PTR_1126dc7c0);
  puVar5 = puVar4;
  func_0x00010058d4ac();
  func_0x000107c61180();
  func_0x000107c55234(puVar4);
  func_0x000107c61170(puVar5);
  func_0x00010059bcb0();
  func_0x000107c61180();
  func_0x000107c54098(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c54088(puVar2);
  func_0x000107c61170(puVar4);
  uVar10 = uVar11;
  func_0x00010059bd44(uVar11);
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c5603c(puVar2);
  func_0x000107c61170(uVar10);
  func_0x00010059c064();
  func_0x000107c61180();
  func_0x000107c53a20(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f9010; end: 1059f901b; -[SCSpotlightClientInfoProvider getMixerClientInfo] */

void FUN_1059f9010(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126c0e20;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  _objc_opt_new(puVar2);
  func_0x000108f1337c();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar2);
  _objc_release(puVar3);
  uVar4 = uVar1;
  func_0x000108f136bc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c180e80(puVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf88860();
  _objc_release(puVar3);
  if (puVar5 != (undefined *)0xffffffffffffffff) {
    puVar3 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88860();
    puVar5 = puVar2;
    func_0x00010bf48c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eee0();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  func_0x000108f137cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9e0(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f901c; end: 1059f9057; -[SCSpotlightClientInfoProvider .cxx_destruct] */

void FUN_1059f901c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059f9058; end: 1059f90b3; -[SCSpotlightRepliesUpdateAnnouncerServiceProvider provide] */

void FUN_1059f9058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108ccee8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0fc0;
  _objc_alloc(PTR_PTR_1126c0fc0);
  func_0x00010c03e4c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059f90b4; end: 1059f90cf;  */

void FUN_1059f90b4(void)

{
  _objc_opt_new(PTR_PTR_1126c0fb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059f90d0; end: 1059f90df; -[SCSpotlightRepliesUpdateAnnouncerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f90d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d434);
  return;
}



/* Entry: 1059f90e0; end: 1059f90eb; +[SCSpotlightRepliesUpdateAnnouncer announcerIdentifier] */

undefined ** FUN_1059f90e0(void)

{
  return &PTR____CFConstantStringClassReference_110e15c58;
}



/* Entry: 1059f90ec; end: 1059f90f3; -[SCSpotlightRepliesUpdateAnnouncer addListener:] */

void FUN_1059f90ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1059f90f4; end: 1059f90fb; -[SCSpotlightRepliesUpdateAnnouncer removeListener:] */

void FUN_1059f90f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1059f90fc; end: 1059f915f; -[SCSpotlightRepliesUpdateAnnouncer init] */

undefined1 * FUN_1059f90fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1059f9160; end: 1059f9313; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesStatusUpdateWithReplyId:snapId:toApprovalState:] */

void FUN_1059f9160(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f41298;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f412b8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f412d8;
  puVar3 = param_4;
  puStack_78 = puVar2;
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41118,param_1,puVar4)
  ;
  _objc_release(puVar4);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41138,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f9314; end: 1059f936f; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesReactionUpdate] */

void FUN_1059f9314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41138,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9370; end: 1059f93cb; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesAdditionToDataStoreUpdate] */

void FUN_1059f9370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41158,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f93cc; end: 1059f9427; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDeletionFromDataStoreUpdate] */

void FUN_1059f93cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41178,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9428; end: 1059f9483; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesPostingStateUpdate] */

void FUN_1059f9428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41198,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9484; end: 1059f960b; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesThreadedRepliesFetchStateUpdateWithCommentId:threadedRepliesFetchState:] */

void FUN_1059f9484(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f41298;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f412f8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f411b8,param_1,puVar4)
  ;
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41198,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f960c; end: 1059f9667; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesAutoApprovalSettingUpdate] */

void FUN_1059f960c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41198,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9668; end: 1059f96d3; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesPresentViewControllerOverRepliesTrayWithEvent:] */

void FUN_1059f9668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f96d4; end: 1059f973f; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidDismissPresentedViewControllerWithEvent:] */

void FUN_1059f96d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9740; end: 1059f98f3; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidTapReplyToCommentWithSpotlightReply:interactionContext:parentCommentRequestId:] */

void FUN_1059f9740(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f41278;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f41318;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f41338;
  puVar3 = param_5;
  puStack_78 = puVar2;
  if (param_5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41218,param_1,puVar4)
  ;
  _objc_release(puVar4);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f41238,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f98f4; end: 1059f994f; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesHighlightPrependedComments] */

void FUN_1059f98f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41238,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9950; end: 1059f99ab; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesCancelHighlightPrependedComments] */

void FUN_1059f9950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f41258,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f99ac; end: 1059f9a07; -[SCSpotlightRepliesUpdateAnnouncer announceRepliesDidTapShowMoreCell] */

void FUN_1059f99ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110f411f8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9a08; end: 1059f9a13; -[SCSpotlightRepliesUpdateAnnouncer .cxx_destruct] */

void FUN_1059f9a08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059f9a14; end: 1059f9a53;  */

void FUN_1059f9a14(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059f9a54; end: 1059f9aef; -[SCSpotlightRepliesViewCountManagerServiceProvider _createRepliesViewCountManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f9a54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c0fd0;
  _objc_alloc(PTR_PTR_1126c0fd0);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11272d440;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf87660(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059f9af0; end: 1059f9b27; -[SCSpotlightRepliesViewCountManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059f9af0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d43c);
  return;
}



/* Entry: 1059f9b28; end: 1059f9c23; -[SCSpotlightRepliesViewCountManager initWithDocObjectContext:] */

undefined1 * FUN_1059f9b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb460;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059f9c24; end: 1059f9cab; -[SCSpotlightRepliesViewCountManager updateCreatorInfoForCreatorId:creatorId:] */

void FUN_1059f9c24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    func_0x00010c220220(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059f9cac; end: 1059f9d23; -[SCSpotlightRepliesViewCountManager contextCreatorInfoForCreatorId:] */

void FUN_1059f9cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059f9d24; end: 1059f9e23; -[SCSpotlightRepliesViewCountManager setRepliesCount:] */

void FUN_1059f9d24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010c29c640(), lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059f9e24; end: 1059f9e57;  */

void FUN_1059f9e24(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9e58; end: 1059f9f4b; -[SCSpotlightRepliesViewCountManager setRepliesCountFromSnapPlaybackInfo:] */

void FUN_1059f9e58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059f9f4c; end: 1059f9f7f;  */

void FUN_1059f9f4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059f9f80; end: 1059fa08f; -[SCSpotlightRepliesViewCountManager fetchRepliesCountForSnapID:viewCountType:completion:] */

void FUN_1059f9f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


