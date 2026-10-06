/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b69dfbc; end: 10b69e117;  */

void FUN_10b69dfbc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b69e118; end: 10b69e357; +[SCCustomStickerData fetchCustomStickerDataForOwner:options:error:dataObjectContext:] */

void FUN_10b69e118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b69dacc;
  uStack_88 = 0x10b69dadc;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b69dacc;
  uStack_d8 = 0x10b69dadc;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b69e358; end: 10b69e73f;  */

long FUN_10b69e358(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    param_5 = 0x10;
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126e04e8);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = 0x10;
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f6e0f8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
  do {
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar7);
    uVar1 = param_5;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_220 + 3) & 1) != 0);
  lVar9 = puStack_200[3];
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
  return lVar9;
}



/* Entry: 10b69e740; end: 10b69e8fb; +[SCCustomStickerData countOfCustomStickerDataForOwner:options:dataObjectContext:] */

undefined8
FUN_10b69e740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b69e8fc; end: 10b69eb87;  */

void FUN_10b69e8fc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126e0498;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar6 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar8 == 0) {
    func_0x00010c1dfc80(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar3);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar5);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar5);
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f6e118;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10b69ed4c;
  uStack_100 = 0x10b69ed5c;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  do {
    _objc_retain(ppuVar11);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar10 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar1 = ppuVar11;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar13);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_138 + 3) & 1) != 0);
  uVar3 = puStack_118[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b69eb88; end: 10b69ed4b; +[SCCustomStickerDeletion fetchCustomStickerDeletionsWithOptions:dataObjectContext:] */

void FUN_10b69eb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b69ed4c;
  uStack_80 = 0x10b69ed5c;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b69ed4c; end: 10b69ed63;  */

void FUN_10b69ed4c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b69ed64; end: 10b69f0a7;  */

long FUN_10b69ed64(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126e04f0);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f6e138;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b69f0a8; end: 10b69f23b; +[SCCustomStickerDeletion countOfCustomStickerDeletionsWithOptions:dataObjectContext:] */

undefined8 FUN_10b69f0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b69f23c; end: 10b69f397;  */

void FUN_10b69f23c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b69f398; end: 10b69f5d7; +[SCCustomStickerDeletion fetchCustomStickerDeletionsForOwner:options:error:dataObjectContext:] */

void FUN_10b69f398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b69ed4c;
  uStack_88 = 0x10b69ed5c;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b69ed4c;
  uStack_d8 = 0x10b69ed5c;
  uStack_d0 = 0;
  do {
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar2);
    uVar1 = param_6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_6);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  if (param_5 != (undefined8 *)0x0) {
    uVar4 = puStack_f0[5];
    _objc_retainAutorelease();
    *param_5 = uVar4;
  }
  uVar4 = puStack_a0[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b69f5d8; end: 10b69f9bf;  */

long FUN_10b69f5d8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    param_5 = 0x10;
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126e04f0);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = 0x10;
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f6e178;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x2020000000;
  uStack_1f0 = 0;
  puStack_220 = &uStack_228;
  uStack_228 = 0;
  uStack_218 = 0x2020000000;
  uStack_210 = 0;
  do {
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar7);
    uVar1 = param_5;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_220 + 3) & 1) != 0);
  lVar9 = puStack_200[3];
  __Block_object_dispose(&uStack_228,8);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
  return lVar9;
}



/* Entry: 10b69f9c0; end: 10b69fb7b; +[SCCustomStickerDeletion countOfCustomStickerDeletionsForOwner:options:dataObjectContext:] */

undefined8
FUN_10b69f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b0 + 3) & 1) != 0);
  uVar4 = puStack_90[3];
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b69fb7c; end: 10b69fe07;  */

void FUN_10b69fb7c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126e0498;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar6 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar8 == 0) {
    func_0x00010c1dfc80(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar3);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar5);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar5);
  uVar3 = param_2;
  func_0x00010bf52ae0();
  uVar13 = 0;
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  ppuVar11 = &PTR____CFConstantStringClassReference_110f6e198;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = uVar2;
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar13);
  _objc_retain(ppuVar11);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_10b69ffcc;
  uStack_100 = 0x10b69ffdc;
  uStack_f8 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  do {
    _objc_retain(ppuVar11);
    puVar6 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    ppuVar10 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar1 = ppuVar11;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar11);
    _objc_retain(uVar13);
    _objc_retain(ppuVar1);
    func_0x00010c0f8240(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar13);
    _objc_release(ppuVar1);
  } while ((*(byte *)(puStack_138 + 3) & 1) != 0);
  uVar3 = puStack_118[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(ppuVar11);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b69fe08; end: 10b69ffcb; +[SCCustomStickerOwner fetchCustomStickerOwnersWithOptions:dataObjectContext:] */

void FUN_10b69fe08(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b69ffcc;
  uStack_80 = 0x10b69ffdc;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_b8 + 3) & 1) != 0);
  uVar4 = puStack_98[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b69ffcc; end: 10b69ffe3;  */

void FUN_10b69ffcc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b69ffe4; end: 10b6a0327;  */

long FUN_10b69ffe4(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar5 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar6);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar4);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar4);
  func_0x00010c1edca0(puVar4);
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010c118bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  if (lVar12 != 0) {
    func_0x00010c1ed520(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c118bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5060(puVar4);
    _objc_release(uVar6);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (lVar7 != 0) {
    if (lVar12 == 0) {
      _objc_retain(lVar7);
      lVar12 = lVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar7);
          }
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(PTR_PTR_1126dbc30);
          func_0x00010bfe9d60(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(uVar6);
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar8 = puVar5;
      func_0x00010bf51e00();
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(undefined **)(lVar12 + 0x28) = puVar8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(lVar7);
      uVar6 = *(undefined8 *)(lVar12 + 0x28);
      *(long *)(lVar12 + 0x28) = lVar7;
    }
    _objc_release(uVar6);
  }
  uVar6 = 0;
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f6e1b8;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar3;
  _objc_release(lVar7);
  _objc_release(0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain(uVar6);
    _objc_retain(ppuVar10);
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x2020000000;
    uStack_1c8 = 0;
    puStack_1f8 = &uStack_200;
    uStack_200 = 0;
    uStack_1f0 = 0x2020000000;
    uStack_1e8 = 0;
    do {
      _objc_retain(ppuVar10);
      puVar4 = PTR_PTR_1126e0498;
      _objc_opt_class(PTR_PTR_1126e0498);
      ppuVar9 = ppuVar10;
      _objc_opt_isKindOfClass(ppuVar10,puVar4);
      ppuVar1 = ppuVar10;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar10);
      _objc_retain(uVar6);
      _objc_retain(ppuVar1);
      func_0x00010c0f8240(ppuVar1);
      _objc_release(ppuVar1);
      _objc_release(uVar6);
      _objc_release(ppuVar1);
    } while ((*(byte *)(puStack_1f8 + 3) & 1) != 0);
    lVar12 = puStack_1d8[3];
    __Block_object_dispose(&uStack_200,8);
    __Block_object_dispose(&uStack_1e0,8);
    _objc_release(ppuVar10);
    _objc_release(uVar6);
    return lVar12;
  }
  return param_2;
}



/* Entry: 10b6a0328; end: 10b6a04bb; +[SCCustomStickerOwner countOfCustomStickerOwnersWithOptions:dataObjectContext:] */

undefined8 FUN_10b6a0328(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  do {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_a8 + 3) & 1) != 0);
  uVar4 = puStack_88[3];
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b6a04bc; end: 10b6a0617;  */

void FUN_10b6a04bc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  puVar3 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c106300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b440(puVar2);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c19b420(puVar2);
  uVar4 = param_2;
  func_0x00010bf52ae0();
  _objc_release(param_2);
  _objc_retain(0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar4;
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uVar1;
  _objc_release(0);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b6a0618; end: 10b6a085f; +[SCCustomStickerOwner fetchCustomStickerOwnerForDeletion:options:dataObjectContext:] */

void FUN_10b6a0618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b69ffcc;
  uStack_88 = 0x10b69ffdc;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b69ffcc;
  uStack_d8 = 0x10b69ffdc;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6a0860; end: 10b6a0c47;  */

void FUN_10b6a0860(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar5 = PTR_PTR_1126e0498;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar9 == 0) {
    func_0x00010c1dfc80(puVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar6);
  _objc_release(uVar4);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar6);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar6);
  func_0x00010c1edca0(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  lVar9 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(lVar15 + 0x28) = uVar14;
  _objc_release(uVar4);
  if ((lVar9 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar9);
    param_5 = 0x10;
    lVar15 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar15 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126dbc30);
        func_0x00010bfe9d60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7);
        _objc_release(uVar4);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      param_5 = 0x10;
      lVar15 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
  }
  puVar10 = puVar7;
  func_0x00010bf51e00();
  lVar15 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar4 = *(undefined8 *)(lVar15 + 0x28);
  *(undefined **)(lVar15 + 0x28) = puVar10;
  _objc_release(uVar4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar12 = &PTR____CFConstantStringClassReference_110f6e218;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar3;
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  pcStack_200 = FUN_10b69ffcc;
  uStack_1f8 = 0x10b69ffdc;
  uStack_1f0 = 0;
  puStack_230 = &uStack_238;
  uStack_238 = 0;
  uStack_228 = 0x2020000000;
  uStack_220 = 0;
  puStack_260 = &uStack_268;
  uStack_268 = 0;
  uStack_258 = 0x3032000000;
  pcStack_250 = FUN_10b69ffcc;
  uStack_248 = 0x10b69ffdc;
  uStack_240 = 0;
  do {
    _objc_retain(param_5);
    puVar7 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar11 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar7);
    uVar1 = param_5;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(uVar4);
    _objc_retain(ppuVar12);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(ppuVar12);
    _objc_release(uVar4);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_230 + 3) & 1) != 0);
  lVar9 = puStack_210[5];
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = puStack_210[5];
    func_0x00010bfb1920(uVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_268,8);
  _objc_release(uStack_240);
  __Block_object_dispose(&uStack_238,8);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 10b6a0c48; end: 10b6a0e8f; +[SCCustomStickerOwner fetchCustomStickerOwnerForSticker:options:dataObjectContext:] */

void FUN_10b6a0c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10b69ffcc;
  uStack_88 = 0x10b69ffdc;
  uStack_80 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_10b69ffcc;
  uStack_d8 = 0x10b69ffdc;
  uStack_d0 = 0;
  do {
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126e0498;
    _objc_opt_class(PTR_PTR_1126e0498);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_5);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010c0f8240(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  } while ((*(byte *)(puStack_c0 + 3) & 1) != 0);
  lVar4 = puStack_a0[5];
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puStack_a0[5];
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b6a0e90; end: 10b6a1277;  */

void FUN_10b6a0e90(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_168;
  undefined *puStack_160;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar4 = PTR_PTR_1126e0498;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar6 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar6);
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c106300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  if (lVar8 == 0) {
    func_0x00010c1dfc80(puVar5);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c106300();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02a20(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2469c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar3);
  func_0x00010bfa8fe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b440(puVar5);
  func_0x00010bfa8040(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c19b420(puVar5);
  func_0x00010c1edca0(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  lVar8 = param_2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar12);
  uVar3 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = uVar12;
  _objc_release(uVar3);
  if ((lVar8 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0)) {
    _objc_retain(lVar8);
    param_5 = 0x10;
    lVar13 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_opt_class(PTR_PTR_1126dbc30);
        func_0x00010bfe9d60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(uVar3);
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      param_5 = 0x10;
      lVar13 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    puStack_168 = puVar7;
    puStack_160 = puVar4;
  }
  puVar9 = puVar6;
  func_0x00010bf51e00();
  lVar13 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar3 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined **)(lVar13 + 0x28) = puVar9;
  _objc_release(uVar3);
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  ppuVar10 = &PTR____CFConstantStringClassReference_110f6e258;
  func_0x00010bfd1e00();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = uVar2;
  _objc_release(lVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126e04e8;
  _objc_retain(puStack_160);
  _objc_retain(puStack_168);
  _objc_retain(puVar4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(ppuVar10);
  _objc_retain(uVar3);
  _objc_alloc(puVar6);
  func_0x00010c030880();
  _objc_release(puStack_160);
  _objc_release(puStack_168);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(ppuVar10);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6a1278; end: 10b6a138f; +[SCCustomStickerData customStickerDataWithCreationTime:encIv:encKey:isSynced:lastInteractionTime:numSyncFailed:originalSnapId:packId:stickerId:type:] */

void FUN_10b6a1278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e04e8;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030880();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6a1390; end: 10b6a1403; -[SCCustomStickerDataChangeRequest initWithCustomStickerData:] */

undefined1 * FUN_10b6a1390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709c48;
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



/* Entry: 10b6a1404; end: 10b6a154f; +[SCCustomStickerDataChangeRequest changeRequestForCustomStickerData:] */

void FUN_10b6a1404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126e0518;
      _objc_alloc(PTR_PTR_1126e0518);
      func_0x00010c007cc0();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6a1514;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6a1514:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6a1550; end: 10b6a178b; +[SCCustomStickerDataChangeRequest creationRequestWithCustomStickerData:] */

void FUN_10b6a1550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0500;
  func_0x00010c0668a0(PTR_PTR_1126e0500,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bf5aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195640(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195660(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c080740(param_3);
  func_0x00010c1b4e60(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c089180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7f60(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0de780(param_3);
  func_0x00010c1cf520(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c0ed940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6820(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7da0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010c21ad60(puVar2,param_2,uVar5);
  puVar4 = PTR_PTR_1126e0518;
  _objc_alloc(PTR_PTR_1126e0518);
  func_0x00010c007cc0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6a178c; end: 10b6a195f; +[SCCustomStickerDataChangeRequest deleteCustomStickerData:] */

void FUN_10b6a178c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar9 = PTR_PTR_1126e0498;
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c0e0160(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar2);
        }
      }
      _objc_release(puVar7);
      _objc_release(0);
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  func_0x00010c1abe60(puVar9);
  puVar7 = puVar2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar7;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010bf6c4a0(puVar2);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar7;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar7 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = (undefined *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar9);
  puVar9 = PTR_DAT_1126a5c58;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      goto LAB_10b6a1c50;
    }
    _objc_retain(puVar5);
    puVar4 = (undefined *)puVar5;
    func_0x000107c318f8(puVar5,puVar9);
    puVar9 = (undefined *)puVar5;
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126e0498;
    puVar10 = puVar9;
    func_0x00010c0e0160(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar7;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      }
    }
    _objc_release(puVar9);
    _objc_release(0);
  }
  else {
    puVar4 = (undefined *)puVar5;
    func_0x00010c0b7f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
  }
  _objc_release(puVar4);
LAB_10b6a1c50:
  _objc_release(puVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b6a1960; end: 10b6a1adb; +[SCCustomStickerDataChangeRequest deleteAllCustomStickerData] */

void FUN_10b6a1960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126e0500;
  func_0x00010bf96ec0(PTR_PTR_1126e0500);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar2);
  func_0x00010c1abe60(puVar6);
  puVar2 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar3 = (undefined *)puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_DAT_1126a5c58;
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      goto LAB_10b6a1c50;
    }
    _objc_retain(puVar4);
    puVar3 = (undefined *)puVar4;
    func_0x000107c318f8(puVar4,puVar6);
    puVar6 = (undefined *)puVar4;
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e0498;
    puVar7 = puVar6;
    func_0x00010c0e0160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010c0b7f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puVar3);
LAB_10b6a1c50:
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b6a1adc; end: 10b6a1c77; -[SCCustomStickerDataChangeRequest setOwner:] */

void FUN_10b6a1adc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c58;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6a1c50;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6a1c50:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6a1c78; end: 10b6a1cf7; -[SCCustomStickerDataChangeRequest placeholderForCreatedCustomStickerData] */

void FUN_10b6a1c78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6a1cf8; end: 10b6a1d5f; -[SCCustomStickerDataChangeRequest objectID] */

void FUN_10b6a1cf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6a1d60; end: 10b6a1eeb; -[SCCustomStickerDataChangeRequest setWithCustomStickerData:] */

void FUN_10b6a1d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5aac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195640(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195660(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c080740(param_3);
  func_0x00010c1b4e60(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c089180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7f60(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  func_0x00010c0de780(param_3);
  func_0x00010c1cf520(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010c0ed940(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6820(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0f0a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7da0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setTypeValue__112664580,uVar1);
  return;
}



/* Entry: 10b6a1eec; end: 10b6a1ef3; -[SCCustomStickerDataChangeRequest creationTime] */

void FUN_10b6a1eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_creationTime_1125b4458);
  return;
}



/* Entry: 10b6a1ef4; end: 10b6a1efb; -[SCCustomStickerDataChangeRequest setCreationTime:] */

void FUN_10b6a1ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1856d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCreationTime__11263efd0);
  return;
}



/* Entry: 10b6a1efc; end: 10b6a1f03; -[SCCustomStickerDataChangeRequest encIv] */

void FUN_10b6a1efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_encIv_1125c24c0);
  return;
}



/* Entry: 10b6a1f04; end: 10b6a1f0b; -[SCCustomStickerDataChangeRequest setEncIv:] */

void FUN_10b6a1f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setEncIv__112642fb0);
  return;
}



/* Entry: 10b6a1f0c; end: 10b6a1f13; -[SCCustomStickerDataChangeRequest encKey] */

void FUN_10b6a1f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_encKey_1125c24c8);
  return;
}



/* Entry: 10b6a1f14; end: 10b6a1f1b; -[SCCustomStickerDataChangeRequest setEncKey:] */

void FUN_10b6a1f14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setEncKey__112642fb8);
  return;
}



/* Entry: 10b6a1f1c; end: 10b6a1f23; -[SCCustomStickerDataChangeRequest isSynced] */

void FUN_10b6a1f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c080790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isSyncedValue_1125fdbf0)
  ;
  return;
}



/* Entry: 10b6a1f24; end: 10b6a1f2b; -[SCCustomStickerDataChangeRequest setIsSynced:] */

void FUN_10b6a1f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b4e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setIsSyncedValue__11264adc0);
  return;
}



/* Entry: 10b6a1f2c; end: 10b6a1f33; -[SCCustomStickerDataChangeRequest lastInteractionTime] */

void FUN_10b6a1f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_lastInteractionTime_1125ffe70);
  return;
}



/* Entry: 10b6a1f34; end: 10b6a1f3b; -[SCCustomStickerDataChangeRequest setLastInteractionTime:] */

void FUN_10b6a1f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLastInteractionTime__11264ba00);
  return;
}



/* Entry: 10b6a1f3c; end: 10b6a1f43; -[SCCustomStickerDataChangeRequest numSyncFailed] */

void FUN_10b6a1f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numSyncFailedValue_112615400);
  return;
}



/* Entry: 10b6a1f44; end: 10b6a1f4b; -[SCCustomStickerDataChangeRequest setNumSyncFailed:] */

void FUN_10b6a1f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setNumSyncFailedValue__112651770);
  return;
}



/* Entry: 10b6a1f4c; end: 10b6a1f53; -[SCCustomStickerDataChangeRequest originalSnapId] */

void FUN_10b6a1f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ed950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_originalSnapId_112619068);
  return;
}



/* Entry: 10b6a1f54; end: 10b6a1f5b; -[SCCustomStickerDataChangeRequest setOriginalSnapId:] */

void FUN_10b6a1f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d6830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setOriginalSnapId__112653430);
  return;
}



/* Entry: 10b6a1f5c; end: 10b6a1f63; -[SCCustomStickerDataChangeRequest packId] */

void FUN_10b6a1f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_packId_112619c98);
  return;
}



/* Entry: 10b6a1f64; end: 10b6a1f6b; -[SCCustomStickerDataChangeRequest setPackId:] */

void FUN_10b6a1f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d7db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setPackId__112653990);
  return;
}



/* Entry: 10b6a1f6c; end: 10b6a1f73; -[SCCustomStickerDataChangeRequest stickerId] */

void FUN_10b6a1f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2540d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stickerId_112672a58);
  return;
}



/* Entry: 10b6a1f74; end: 10b6a1f7b; -[SCCustomStickerDataChangeRequest setStickerId:] */

void FUN_10b6a1f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setStickerId__112660660)
  ;
  return;
}



/* Entry: 10b6a1f7c; end: 10b6a1f83; -[SCCustomStickerDataChangeRequest type] */

void FUN_10b6a1f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27e070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_typeValue_11267d240);
  return;
}



/* Entry: 10b6a1f84; end: 10b6a1f8b; -[SCCustomStickerDataChangeRequest setType:] */

void FUN_10b6a1f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setTypeValue__112664580)
  ;
  return;
}



/* Entry: 10b6a1f8c; end: 10b6a1fbb; -[SCCustomStickerDataChangeRequest .cxx_destruct] */

void FUN_10b6a1f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6a1fbc; end: 10b6a201b; +[SCCustomStickerDeletion customStickerDeletionWithNumSyncFailed:stickerId:] */

void FUN_10b6a1fbc(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126e04f0;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c030900();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6a201c; end: 10b6a208f; -[SCCustomStickerDeletionChangeRequest initWithCustomStickerDeletion:] */

undefined1 * FUN_10b6a201c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709c50;
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



/* Entry: 10b6a2090; end: 10b6a21db; +[SCCustomStickerDeletionChangeRequest changeRequestForCustomStickerDeletion:] */

void FUN_10b6a2090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126e0528;
      _objc_alloc(PTR_PTR_1126e0528);
      func_0x00010c007ce0();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6a21a0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6a21a0:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6a21dc; end: 10b6a22fb; +[SCCustomStickerDeletionChangeRequest creationRequestWithCustomStickerDeletion:] */

void FUN_10b6a21dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0508;
  func_0x00010c0668a0(PTR_PTR_1126e0508,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010c0de780(param_3);
  func_0x00010c1cf520(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c20b0e0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126e0528;
  _objc_alloc(PTR_PTR_1126e0528);
  func_0x00010c007ce0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6a22fc; end: 10b6a24cf; +[SCCustomStickerDeletionChangeRequest deleteCustomStickerDeletions:] */

void FUN_10b6a22fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar9 = PTR_PTR_1126e0498;
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c0e0160(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar2);
        }
      }
      _objc_release(puVar7);
      _objc_release(0);
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  func_0x00010c1abe60(puVar9);
  puVar7 = puVar2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar7;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010bf6c4a0(puVar2);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar7;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar7 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = (undefined *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar9);
  puVar9 = PTR_DAT_1126a5c58;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      goto LAB_10b6a27c0;
    }
    _objc_retain(puVar5);
    puVar4 = (undefined *)puVar5;
    func_0x000107c318f8(puVar5,puVar9);
    puVar9 = (undefined *)puVar5;
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126e0498;
    puVar10 = puVar9;
    func_0x00010c0e0160(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar7;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
      }
    }
    _objc_release(puVar9);
    _objc_release(0);
  }
  else {
    puVar4 = (undefined *)puVar5;
    func_0x00010c0b7f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar2 + 8));
  }
  _objc_release(puVar4);
LAB_10b6a27c0:
  _objc_release(puVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b6a24d0; end: 10b6a264b; +[SCCustomStickerDeletionChangeRequest deleteAllCustomStickerDeletions] */

void FUN_10b6a24d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126e0508;
  func_0x00010bf96ec0(PTR_PTR_1126e0508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar2);
  func_0x00010c1abe60(puVar6);
  puVar2 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar3 = (undefined *)puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_DAT_1126a5c58;
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      goto LAB_10b6a27c0;
    }
    _objc_retain(puVar4);
    puVar3 = (undefined *)puVar4;
    func_0x000107c318f8(puVar4,puVar6);
    puVar6 = (undefined *)puVar4;
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e0498;
    puVar7 = puVar6;
    func_0x00010c0e0160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010c0b7f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puVar3);
LAB_10b6a27c0:
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b6a264c; end: 10b6a27e7; -[SCCustomStickerDeletionChangeRequest setOwner:] */

void FUN_10b6a264c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c58;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6a27c0;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6a27c0:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6a27e8; end: 10b6a2867; -[SCCustomStickerDeletionChangeRequest placeholderForCreatedCustomStickerDeletion] */

void FUN_10b6a27e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6a2868; end: 10b6a28cf; -[SCCustomStickerDeletionChangeRequest objectID] */

void FUN_10b6a2868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6a28d0; end: 10b6a293f; -[SCCustomStickerDeletionChangeRequest setWithCustomStickerDeletion:] */

void FUN_10b6a28d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0de780(param_3);
  func_0x00010c1cf520(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c20b0e0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6a2940; end: 10b6a2947; -[SCCustomStickerDeletionChangeRequest numSyncFailed] */

void FUN_10b6a2940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0de7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_numSyncFailedValue_112615400);
  return;
}



/* Entry: 10b6a2948; end: 10b6a294f; -[SCCustomStickerDeletionChangeRequest setNumSyncFailed:] */

void FUN_10b6a2948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cf530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setNumSyncFailedValue__112651770);
  return;
}



/* Entry: 10b6a2950; end: 10b6a2957; -[SCCustomStickerDeletionChangeRequest stickerId] */

void FUN_10b6a2950(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2540d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_stickerId_112672a58);
  return;
}



/* Entry: 10b6a2958; end: 10b6a295f; -[SCCustomStickerDeletionChangeRequest setStickerId:] */

void FUN_10b6a2958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setStickerId__112660660)
  ;
  return;
}



/* Entry: 10b6a2960; end: 10b6a298f; -[SCCustomStickerDeletionChangeRequest .cxx_destruct] */

void FUN_10b6a2960(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6a2990; end: 10b6a29df; +[SCCustomStickerOwner customStickerOwnerWithUserId:] */

void FUN_10b6a2990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dbc30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6a29e0; end: 10b6a2a53; -[SCCustomStickerOwnerChangeRequest initWithCustomStickerOwner:] */

undefined1 * FUN_10b6a29e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709c58;
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



/* Entry: 10b6a2a54; end: 10b6a2b9f; +[SCCustomStickerOwnerChangeRequest changeRequestForCustomStickerOwner:] */

void FUN_10b6a2a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126dbc38;
      _objc_alloc(PTR_PTR_1126dbc38);
      func_0x00010c007d40();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6a2b64;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6a2b64:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6a2ba0; end: 10b6a2cab; +[SCCustomStickerOwnerChangeRequest creationRequestWithCustomStickerOwner:] */

void FUN_10b6a2ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0510;
  func_0x00010c0668a0(PTR_PTR_1126e0510,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21e620(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126dbc38;
  _objc_alloc(PTR_PTR_1126dbc38);
  func_0x00010c007d40();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6a2cac; end: 10b6a2e7f; +[SCCustomStickerOwnerChangeRequest deleteCustomStickerOwners:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b6a3350 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10b6a2cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar14 = param_3;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR_PTR_1126e0498;
      uVar2 = *(undefined8 *)(lVar19 * 8);
      func_0x00010c0e0160(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = puVar1;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar13 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar1);
        }
      }
      _objc_release(puVar13);
      _objc_release(0);
      _objc_release(puVar3);
      lVar19 = lVar19 + 1;
    } while (lVar14 != lVar19);
    lVar14 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar13 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar13);
  func_0x00010c1abe60(puVar3);
  puVar13 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar13;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar14 = *plStack_250;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(puVar13);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = puVar13;
      puVar8 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  puVar5 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar5 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar8);
      }
      uVar16 = *(ulong *)((long)puVar11 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar4);
      puVar4 = PTR_DAT_1126a5c60;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar16);
        uVar7 = uVar16;
        func_0x000107c318f8(uVar16,puVar4);
        uVar6 = uVar16;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar16);
        puVar4 = PTR_PTR_1126e0498;
        uVar16 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        if (puVar4 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar3;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar13);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar13);
        uVar6 = uVar16;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar5 != puVar11);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  uVar2 = *(undefined8 *)(puVar1 + 8);
  puVar1 = puVar13;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  func_0x00010bef7d40(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar4);
      }
      uVar16 = *(ulong *)((long)puVar15 * 8);
      puVar12 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar12);
      puVar12 = PTR_DAT_1126a5c60;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar16);
        uVar7 = uVar16;
        func_0x000107c318f8(uVar16,puVar12);
        uVar6 = uVar16;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar16);
        puVar12 = PTR_PTR_1126e0498;
        uVar16 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        if (puVar12 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar3;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar13);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar12);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar13);
        uVar6 = uVar16;
      }
      _objc_release(uVar6);
      puVar15 = puVar15 + 1;
    } while (puVar1 != puVar15);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)((long)puVar8 + 8);
  puVar1 = puVar13;
  func_0x00010bf51e00();
  puVar15 = puVar1;
  func_0x00010c12bec0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar15);
  puVar1 = puVar15;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar15);
      }
      uVar16 = *(ulong *)((long)puVar12 * 8);
      puVar17 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar17);
      puVar17 = PTR_DAT_1126a5c68;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar16);
        uVar7 = uVar16;
        func_0x000107c318f8(uVar16,puVar17);
        uVar6 = uVar16;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar16);
        puVar17 = PTR_PTR_1126e0498;
        uVar16 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        if (puVar17 == (undefined *)0x0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          puVar18 = puVar3;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar18 != (undefined *)0x0) {
            func_0x00010befa120(puVar13);
          }
        }
        _objc_release(puVar18);
        _objc_release(0);
        _objc_release(puVar17);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar13);
        uVar6 = uVar16;
      }
      _objc_release(uVar6);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  uVar2 = *(undefined8 *)(puVar4 + 8);
  puVar1 = puVar13;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  func_0x00010befb9e0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar4);
      }
      uVar16 = *(ulong *)((long)puVar12 * 8);
      puVar17 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar17);
      puVar17 = PTR_DAT_1126a5c68;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar16);
        uVar7 = uVar16;
        func_0x000107c318f8(uVar16,puVar17);
        uVar6 = uVar16;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar16);
        puVar17 = PTR_PTR_1126e0498;
        uVar16 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        if (puVar17 == (undefined *)0x0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          puVar18 = puVar3;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar18 != (undefined *)0x0) {
            func_0x00010befa120(puVar13);
          }
        }
        _objc_release(puVar18);
        _objc_release(0);
        _objc_release(puVar17);
      }
      else {
        func_0x00010c0b7f60(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar13);
        uVar6 = uVar16;
      }
      _objc_release(uVar6);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(puVar15 + 8);
  puVar1 = puVar13;
  func_0x00010bf51e00(puVar13);
  func_0x00010c12e5a0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0(PTR_PTR_1126e0498);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(puVar4 + 0x10);
    if (lVar14 == 0) {
      puVar3 = PTR_PTR_1126e0520;
      _objc_alloc();
      func_0x00010c028260();
      uVar2 = *(undefined8 *)(puVar4 + 0x10);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      _objc_release(uVar2);
      lVar14 = *(long *)(puVar4 + 0x10);
    }
    _objc_retain(lVar14);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
    return;
  }
  return;
}



/* Entry: 10b6a2e80; end: 10b6a2ffb; +[SCCustomStickerOwnerChangeRequest deleteAllCustomStickerOwners] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b6a3350 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10b6a2e80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar8 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126e0510;
  func_0x00010bf96ec0(PTR_PTR_1126e0510);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar3);
  func_0x00010c1abe60(puVar2);
  puVar3 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar13 = *plStack_110;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar4 = puVar3;
      puVar8 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar8);
  puVar5 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar5 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar8);
      }
      uVar15 = *(ulong *)((long)puVar10 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar4);
      puVar4 = PTR_DAT_1126a5c60;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar4);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar4 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar4 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bf52a60();
  }
  _objc_release(puVar8);
  uVar12 = *(undefined8 *)(puVar1 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  func_0x00010bef7d40(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar4);
      }
      uVar15 = *(ulong *)((long)puVar14 * 8);
      puVar11 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar11);
      puVar11 = PTR_DAT_1126a5c60;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar11);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar11 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar11 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar11);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar14 = puVar14 + 1;
    } while (puVar1 != puVar14);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  uVar12 = *(undefined8 *)((long)puVar8 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar14 = puVar1;
  func_0x00010c12bec0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar14);
      }
      uVar15 = *(ulong *)((long)puVar11 * 8);
      puVar16 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      puVar16 = PTR_DAT_1126a5c68;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar16);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar16 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar16);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar12 = *(undefined8 *)(puVar4 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  func_0x00010befb9e0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(puVar4);
      }
      uVar15 = *(ulong *)((long)puVar11 * 8);
      puVar16 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar6 = uVar15;
      _objc_opt_isKindOfClass(uVar15,puVar16);
      puVar16 = PTR_DAT_1126a5c68;
      if ((uVar6 & 1) == 0) {
        _objc_retain(uVar15);
        uVar7 = uVar15;
        func_0x000107c318f8(uVar15,puVar16);
        uVar6 = uVar15;
        if ((int)uVar7 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar15);
        puVar16 = PTR_PTR_1126e0498;
        uVar15 = uVar6;
        func_0x00010c0e0160(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        if (puVar16 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar17 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar17);
        _objc_release(0);
        _objc_release(puVar16);
      }
      else {
        func_0x00010c0b7f60(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar6 = uVar15;
      }
      _objc_release(uVar6);
      puVar11 = puVar11 + 1;
    } while (puVar1 != puVar11);
    puVar1 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  uVar12 = *(undefined8 *)(puVar14 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c12e5a0(uVar12);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(puVar4 + 0x10);
  if (lVar13 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar12 = *(undefined8 *)(puVar4 + 0x10);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    _objc_release(uVar12);
    lVar13 = *(long *)(puVar4 + 0x10);
  }
  _objc_retain(lVar13);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 10b6a2ffc; end: 10b6a32a7; -[SCCustomStickerOwnerChangeRequest addDeletion:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b6a3350 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10b6a2ffc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar3);
      puVar3 = PTR_DAT_1126a5c60;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar3);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar3 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar3 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar12 != lVar8);
    lVar12 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar3;
  func_0x00010bef7d40(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5c60;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar11 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010c12bec0(uVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  puVar1 = puVar9;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar9);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar15 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar15);
      puVar15 = PTR_DAT_1126a5c68;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar15);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar15 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar15 == (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar16);
        _objc_release(0);
        _objc_release(puVar15);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  uVar11 = *(undefined8 *)(puVar14 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar14 = puVar1;
  func_0x00010befb9e0(uVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar14);
    puVar2 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar14);
    puVar1 = puVar14;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar14);
        }
        uVar13 = *(ulong *)((long)puVar10 * 8);
        puVar15 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        uVar4 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar15);
        puVar15 = PTR_DAT_1126a5c68;
        if ((uVar4 & 1) == 0) {
          _objc_retain(uVar13);
          uVar5 = uVar13;
          func_0x000107c318f8(uVar13,puVar15);
          uVar4 = uVar13;
          if ((int)uVar5 == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar13);
          puVar15 = PTR_PTR_1126e0498;
          uVar13 = uVar4;
          func_0x00010c0e0160(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          if (puVar15 == (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
          }
          else {
            puVar16 = puVar2;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            if (puVar16 != (undefined *)0x0) {
              func_0x00010befa120(puVar3);
            }
          }
          _objc_release(puVar16);
          _objc_release(0);
          _objc_release(puVar15);
        }
        else {
          func_0x00010c0b7f60(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          uVar4 = uVar13;
        }
        _objc_release(uVar4);
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar1 = puVar14;
      func_0x00010bf52a60();
    }
    _objc_release(puVar14);
    uVar11 = *(undefined8 *)(puVar9 + 8);
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c12e5a0(uVar11);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0(PTR_PTR_1126e0498);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(puVar14 + 0x10);
    if (lVar12 == 0) {
      puVar2 = PTR_PTR_1126e0520;
      _objc_alloc();
      func_0x00010c028260();
      uVar11 = *(undefined8 *)(puVar14 + 0x10);
      *(undefined **)(puVar14 + 0x10) = puVar2;
      _objc_release(uVar11);
      lVar12 = *(long *)(puVar14 + 0x10);
    }
    _objc_retain(lVar12);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
    return;
  }
  return;
}



/* Entry: 10b6a32a8; end: 10b6a3553; -[SCCustomStickerOwnerChangeRequest removeDeletion:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010b6a3350 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10b6a32a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar3);
      puVar3 = PTR_DAT_1126a5c60;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar3);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar3 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar3 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar12 != lVar8);
    lVar12 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar3;
  func_0x00010c12bec0(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar9 * 8);
      puVar10 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar10);
      puVar10 = PTR_DAT_1126a5c68;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar10);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar10 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar10 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar10);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar11 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar9 = puVar1;
  func_0x00010befb9e0(uVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar9);
    puVar2 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar9);
    puVar1 = puVar9;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar9);
        }
        uVar13 = *(ulong *)((long)puVar10 * 8);
        puVar15 = PTR_PTR_1126e0520;
        _objc_opt_class(PTR_PTR_1126e0520);
        uVar4 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar15);
        puVar15 = PTR_DAT_1126a5c68;
        if ((uVar4 & 1) == 0) {
          _objc_retain(uVar13);
          uVar5 = uVar13;
          func_0x000107c318f8(uVar13,puVar15);
          uVar4 = uVar13;
          if ((int)uVar5 == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar13);
          puVar15 = PTR_PTR_1126e0498;
          uVar13 = uVar4;
          func_0x00010c0e0160(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7f80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          if (puVar15 == (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
          }
          else {
            puVar16 = puVar2;
            func_0x00010bf9b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            if (puVar16 != (undefined *)0x0) {
              func_0x00010befa120(puVar3);
            }
          }
          _objc_release(puVar16);
          _objc_release(0);
          _objc_release(puVar15);
        }
        else {
          func_0x00010c0b7f60(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          uVar4 = uVar13;
        }
        _objc_release(uVar4);
        puVar10 = puVar10 + 1;
      } while (puVar1 != puVar10);
      puVar1 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    uVar11 = *(undefined8 *)(puVar14 + 8);
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c12e5a0(uVar11);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126e0498;
      func_0x00010bf5f5e0(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *(long *)(puVar9 + 0x10);
      if (lVar12 == 0) {
        puVar2 = PTR_PTR_1126e0520;
        _objc_alloc();
        func_0x00010c028260();
        uVar11 = *(undefined8 *)(puVar9 + 0x10);
        *(undefined **)(puVar9 + 0x10) = puVar2;
        _objc_release(uVar11);
        lVar12 = *(long *)(puVar9 + 0x10);
      }
      _objc_retain(lVar12);
      _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b6a3554; end: 10b6a37ff; -[SCCustomStickerOwnerChangeRequest addStickers:] */

void FUN_10b6a3554(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar12 = param_3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar12 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_3);
      }
      uVar13 = *(ulong *)(lVar9 * 8);
      puVar3 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar3);
      puVar3 = PTR_DAT_1126a5c68;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar3);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar3 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar3 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar1;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar14 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
        }
        _objc_release(puVar14);
        _objc_release(0);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c0b7f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      lVar9 = lVar9 + 1;
    } while (lVar12 != lVar9);
    lVar12 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puVar14 = puVar3;
  func_0x00010befb9e0(uVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar14);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar14);
  puVar1 = puVar14;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar14);
      }
      uVar13 = *(ulong *)((long)puVar10 * 8);
      puVar6 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar4 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar6);
      puVar6 = PTR_DAT_1126a5c68;
      if ((uVar4 & 1) == 0) {
        _objc_retain(uVar13);
        uVar5 = uVar13;
        func_0x000107c318f8(uVar13,puVar6);
        uVar4 = uVar13;
        if ((int)uVar5 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar13);
        puVar6 = PTR_PTR_1126e0498;
        uVar13 = uVar4;
        func_0x00010c0e0160(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (puVar6 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar15 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar15);
        _objc_release(0);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c0b7f60(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar4 = uVar13;
      }
      _objc_release(uVar4);
      puVar10 = puVar10 + 1;
    } while (puVar1 != puVar10);
    puVar1 = puVar14;
    func_0x00010bf52a60();
  }
  _objc_release(puVar14);
  uVar11 = *(undefined8 *)(param_3 + 8);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c12e5a0(uVar11);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(puVar14 + 0x10);
  if (lVar12 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar11 = *(undefined8 *)(puVar14 + 0x10);
    *(undefined **)(puVar14 + 0x10) = puVar2;
    _objc_release(uVar11);
    lVar12 = *(long *)(puVar14 + 0x10);
  }
  _objc_retain(lVar12);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar12);
  return;
}



/* Entry: 10b6a3800; end: 10b6a3aab; -[SCCustomStickerOwnerChangeRequest removeStickers:] */

void FUN_10b6a3800(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126e0520;
      _objc_opt_class(PTR_PTR_1126e0520);
      uVar5 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar4);
      puVar4 = PTR_DAT_1126a5c68;
      if ((uVar5 & 1) == 0) {
        _objc_retain(uVar11);
        uVar6 = uVar11;
        func_0x000107c318f8(uVar11,puVar4);
        uVar5 = uVar11;
        if ((int)uVar6 == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar11);
        puVar4 = PTR_PTR_1126e0498;
        uVar11 = uVar5;
        func_0x00010c0e0160(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b7f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        if (puVar4 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar2;
          func_0x00010bf9b3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          if (puVar12 != (undefined *)0x0) {
            func_0x00010befa120(puVar3);
          }
        }
        _objc_release(puVar12);
        _objc_release(0);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c0b7f60(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        uVar5 = uVar11;
      }
      _objc_release(uVar5);
      lVar8 = lVar8 + 1;
    } while (lVar10 != lVar8);
    lVar10 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c12e5a0(uVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126e0498;
    func_0x00010bf5f5e0(PTR_PTR_1126e0498);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_3 + 0x10);
    if (lVar10 == 0) {
      puVar3 = PTR_PTR_1126e0520;
      _objc_alloc();
      func_0x00010c028260();
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      *(undefined **)(param_3 + 0x10) = puVar3;
      _objc_release(uVar9);
      lVar10 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar10);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  return;
}



/* Entry: 10b6a3aac; end: 10b6a3b2b; -[SCCustomStickerOwnerChangeRequest placeholderForCreatedCustomStickerOwner] */

void FUN_10b6a3aac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6a3b2c; end: 10b6a3b93; -[SCCustomStickerOwnerChangeRequest objectID] */

void FUN_10b6a3b2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6a3b94; end: 10b6a3bd3; -[SCCustomStickerOwnerChangeRequest setWithCustomStickerOwner:] */

void FUN_10b6a3b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6a3bd4; end: 10b6a3bdb; -[SCCustomStickerOwnerChangeRequest userId] */

void FUN_10b6a3bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_userId_112682320);
  return;
}



/* Entry: 10b6a3bdc; end: 10b6a3be3; -[SCCustomStickerOwnerChangeRequest setUserId:] */

void FUN_10b6a3bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setUserId__1126653b0);
  return;
}



/* Entry: 10b6a3be4; end: 10b6a3c13; -[SCCustomStickerOwnerChangeRequest .cxx_destruct] */

void FUN_10b6a3be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6a3c14; end: 10b6a3cc3; +[SCCustomStickerData observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6a3c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e04e8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6a3cc4; end: 10b6a3d17; +[SCCustomStickerData allKeys] */

void FUN_10b6a3cc4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7898 != -1) {
    func_0x000107c27d9c(0x1137f7898,&PTR___NSConcreteGlobalBlock_110d59040);
  }
  uVar1 = uRam00000001137f7890;
  _objc_retain(uRam00000001137f7890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6a3d18; end: 10b6a3dc3;  */

void FUN_10b6a3d18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110ef1318);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7890;
  puRam00000001137f7890 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6a3dc4; end: 10b6a3e73; +[SCCustomStickerDeletion observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6a3dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e04f0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6a3e74; end: 10b6a3ec7; +[SCCustomStickerDeletion allKeys] */

void FUN_10b6a3e74(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78a8 != -1) {
    func_0x000107c27d9c(0x1137f78a8,&PTR___NSConcreteGlobalBlock_110d59060);
  }
  uVar1 = uRam00000001137f78a0;
  _objc_retain(uRam00000001137f78a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6a3ec8; end: 10b6a3f23;  */

void FUN_10b6a3ec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6deb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78a0;
  puRam00000001137f78a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6a3f24; end: 10b6a3fd3; +[SCCustomStickerOwner observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6a3f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dbc30;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6a3fd4; end: 10b6a4027; +[SCCustomStickerOwner allKeys] */

void FUN_10b6a3fd4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78b8 != -1) {
    func_0x000107c27d9c(0x1137f78b8,&PTR___NSConcreteGlobalBlock_110d59080);
  }
  uVar1 = uRam00000001137f78b0;
  _objc_retain(uRam00000001137f78b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6a4028; end: 10b6a4083;  */

void FUN_10b6a4028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110db1318);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78b0;
  puRam00000001137f78b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6a4084; end: 10b6a409b; +[_SCCDCloudSyncOperationSnapshot insertInManagedObjectContext:] */

void FUN_10b6a4084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_insertNewObjectForEntityForName__1125f74c0,
             &PTR____CFConstantStringClassReference_110f6e278,param_3);
  return;
}



/* Entry: 10b6a409c; end: 10b6a40a7; +[_SCCDCloudSyncOperationSnapshot entityName] */

undefined ** FUN_10b6a409c(void)

{
  return &PTR____CFConstantStringClassReference_110f6e278;
}



/* Entry: 10b6a40a8; end: 10b6a40bf; +[_SCCDCloudSyncOperationSnapshot entityInManagedObjectContext:] */

void FUN_10b6a40a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSEntityDescription_1126e04e0,
             PTR_s_entityForName_inManagedObjectCon_1125c3520,
             &PTR____CFConstantStringClassReference_110f6e278,param_3);
  return;
}



/* Entry: 10b6a40c0; end: 10b6a40fb; -[_SCCDCloudSyncOperationSnapshot objectID] */

void FUN_10b6a40c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112709c60;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_objectID_112615a70);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6a40fc; end: 10b6a41eb; +[_SCCDCloudSyncOperationSnapshot keyPathsForValuesAffectingValueForKey:] */

void FUN_10b6a40fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR_s_keyPathsForValuesAffectingValueF_112543760;
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112709c68;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    _objc_retain(puVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c174c00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar1 = (undefined8 *)puVar4;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6a41ec; end: 10b6a4227; -[_SCCDCloudSyncOperationSnapshot seqNumValue] */

undefined8 FUN_10b6a41ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15e520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4ca0();
  _objc_release(param_1);
  return uVar1;
}


