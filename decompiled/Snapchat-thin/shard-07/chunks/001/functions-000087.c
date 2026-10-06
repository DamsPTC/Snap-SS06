/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10519ecf0; end: 10519edaf;  */

void FUN_10519ecf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5978;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05ad80(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10519edb0; end: 10519ee0f;  */

void FUN_10519edb0(long param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11086e178);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519ee10; end: 10519ef03;  */

void FUN_10519ee10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b5978;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x000108ffe710(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ad80(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10519ef04; end: 10519ef9b;  */

void FUN_10519ef04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519ef9c; end: 10519f87b; -[SCGroupAvatarImageViewController _updateWithAvatarParticipants:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ef9c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf529e0();
  uVar1 = param_3;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar2 = param_1;
  func_0x00010be378a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(uVar1);
  func_0x00010bead260(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar23 = uVar1;
  func_0x00010bf529e0();
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar23 != 0) {
    uVar23 = 0;
    do {
      uVar6 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_4;
      func_0x00010c0d0400();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_4;
      func_0x00010c0ec860(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010bf1acc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010bf40c40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_4;
      func_0x00010bfa0480();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_1;
      func_0x00010becab00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x00010befa120(puVar3);
      puVar8 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar15 = uVar14;
      func_0x00010c268560(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar17;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10519f87c;
      puStack_88 = &UNK_110849f28;
      puStack_80 = puVar8;
      _objc_retain(puVar8);
      uVar16 = uVar15;
      func_0x00010c25ff60(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      func_0x00010befa120(puVar4);
      puVar9 = puVar8;
      func_0x00010bfbc3e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar9);
      _objc_release(uVar16);
      _objc_release(puStack_80);
      _objc_release(puVar8);
      _objc_release(uVar14);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar23 = uVar23 + 1;
      uVar7 = uVar1;
      func_0x00010bf529e0();
    } while (uVar23 < uVar7);
  }
  puVar17 = PTR_PTR_1126ae6b8;
  puVar8 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar23 = uVar1;
  func_0x00010bf529e0();
  if (uVar23 != 0) {
    uVar23 = 0;
    puVar8 = puVar4;
    do {
      uVar6 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae6b8;
      puVar19 = param_4;
      func_0x00010c09ce80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126ae6b8;
      if (puVar19 == (undefined *)0x0) {
        puVar8 = PTR_PTR_1126ae6b8;
        func_0x00010bf8eb20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_180 = param_4;
        func_0x00010c09ce80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0860a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = puVar13;
      }
      uVar14 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c29c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar14);
      puVar13 = puVar8;
      if (puVar19 != (undefined *)0x0) {
        _objc_release(puStack_188);
        puVar13 = puStack_180;
      }
      _objc_release(puVar13);
      _objc_release(puVar19);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_10519f888;
      puStack_b0 = &UNK_1108577b8;
      _objc_retain(puVar18);
      puVar19 = puVar17;
      puStack_a8 = puVar18;
      func_0x00010c2656e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_d0,param_1);
      puVar13 = PTR_PTR_1126ae6b8;
      uVar14 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c29c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a380(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar13;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar13;
      func_0x00010c0e0ec0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_d8,auStack_d0);
      _objc_retain(uVar6);
      _objc_retain(param_4);
      _objc_retain(uVar7);
      _objc_retain(uVar1);
      puVar22 = puVar21;
      func_0x00010bf87460(puVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar13);
      _objc_release(uVar15);
      _objc_release(uVar14);
      puVar13 = PTR_PTR_1126ae6b8;
      uVar10 = uVar7;
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      func_0x00010bf40c40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_4;
      func_0x00010bfa0480(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_1;
      func_0x00010be0e500(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar13;
      func_0x00010c0860a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c29c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a320(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(puVar21);
      _objc_release(uVar14);
      _objc_release(puVar20);
      _objc_release(uVar11);
      _objc_release(uVar10);
      puVar20 = PTR_PTR_1126ae6b8;
      func_0x00010c09d1a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa620();
      _objc_release(uVar14);
      _objc_release(puVar20);
      _objc_release(puVar13);
      _objc_release(puVar22);
      _objc_release(uVar1);
      _objc_release(uVar7);
      _objc_release(param_4);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_d0);
      _objc_release(puVar19);
      _objc_release(puStack_a8);
      _objc_release(puVar9);
      _objc_release(puVar18);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar23 = uVar23 + 1;
      uVar7 = uVar1;
      func_0x00010bf529e0();
    } while (uVar23 < uVar7);
  }
  _objc_release(puVar17);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10519f87c; end: 10519f887;  */

void FUN_10519f87c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10519f888; end: 10519f8af;  */

void FUN_10519f888(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10519f8b0; end: 10519fa4b;  */

void FUN_10519f8b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10519fa4c;
  puStack_80 = &UNK_11086e198;
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_a0,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10519fa4c; end: 10519faeb;  */

void FUN_10519fa4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ec860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30);
  func_0x00010bf1acc0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf529e0(uVar6);
  func_0x00010be88660(lVar2,param_2,uVar1,uVar3,lVar5 != 0,uVar6);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10519faec; end: 10519fb5b;  */

void FUN_10519faec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ec860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf529e0(uVar4);
  func_0x00010be88660(lVar2,param_2,uVar1,uVar3,0,uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10519fb5c; end: 10519fd1f; -[SCGroupAvatarImageViewController _updateWithNumberOfSilhouettes:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519fb5c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  if (2 < param_3) {
    uVar1 = 3;
  }
  uVar2 = param_1;
  func_0x00010be378a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bead260(param_1);
  if (param_3 != 0) {
    uVar9 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      func_0x000108ffef38(0,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126ae6b8;
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c29c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a320(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      uVar7 = uVar3;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa620();
      _objc_release(uVar7);
      _objc_release(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10519fd20; end: 10519fe43; -[SCGroupAvatarImageViewController _setupImageViewsIfNecessary:participantsCount:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519fd20(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11271e710;
  if (*(long *)(param_1 + lVar4) != param_4) {
    *(long *)(param_1 + lVar4) = param_4;
    func_0x00010be35820(param_1,param_2,param_4);
    if (*(long *)(param_1 + lVar4) != 0) {
      uVar3 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7f60();
        _objc_release(uVar2);
        func_0x00010bed5a80(param_1,param_2,uVar1,0,*(undefined8 *)(param_1 + lVar4));
        uVar2 = param_5;
        func_0x00010c0ec860(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedc640(param_1,param_2,uVar1,uVar2,0,*(undefined8 *)(param_1 + lVar4));
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_1 + lVar4));
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10519fe44; end: 10519ff3f; -[SCGroupAvatarImageViewController _imageViewsForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519fe44(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined8 *)0x1) {
    uStack_48 = *(undefined8 *)(param_1 + _DAT_11271e708);
    param_3 = &uStack_48;
  }
  else if (param_3 == (undefined8 *)0x2) {
    uStack_40 = *(undefined8 *)(param_1 + _DAT_11271e70c);
    uStack_38 = *(undefined8 *)(param_1 + _DAT_11271e704);
    param_3 = &uStack_40;
  }
  else {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined8 *)0x3) goto LAB_10519ff18;
    uStack_30 = *(undefined8 *)(param_1 + _DAT_11271e708);
    uStack_28 = *(undefined8 *)(param_1 + _DAT_11271e70c);
    uStack_20 = *(undefined8 *)(param_1 + _DAT_11271e704);
    param_3 = &uStack_30;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
LAB_10519ff18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  if (param_3 == (undefined8 *)0x2) {
    piVar3 = (int *)&DAT_11271e708;
  }
  else {
    if (param_3 != (undefined8 *)0x1) {
      return;
    }
    piVar3 = (int *)&DAT_11271e704;
    uVar2 = *(undefined8 *)(puVar1 + _DAT_11271e70c);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(puVar1 + *piVar3);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10519ff40; end: 10519ffe3; -[SCGroupAvatarImageViewController _hideImageViewsForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ff40(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_3 == 2) {
    piVar2 = (int *)&DAT_11271e708;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    piVar2 = (int *)&DAT_11271e704;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271e70c);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *piVar2);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519ffe4; end: 1051a009f; -[SCGroupAvatarImageViewController _updateWithViewOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ffe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e700);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051a00a0; end: 1051a0123; -[SCGroupAvatarImageViewController _refreshImageView:options:displayingBitmoji:count:] */

void FUN_1051a00a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bed5a80(param_1,param_2,param_3,param_5,param_6);
  func_0x00010bedc640(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051a0124; end: 1051a01d3; -[SCGroupAvatarImageViewController _updateConstraintForImageView:displayingBitmoji:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a0124(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11271e708)) {
    func_0x00010bedbb60(param_1,param_2,param_4,param_5);
  }
  else if (param_3 == *(long *)(param_1 + _DAT_11271e70c)) {
    func_0x00010bedeb40(param_1,param_2,param_4,param_5);
  }
  else if (param_3 == *(long *)(param_1 + _DAT_11271e704)) {
    func_0x00010beda9c0(param_1,param_2,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051a01d4; end: 1051a06ef; -[SCGroupAvatarImageViewController _updateMiddleImageViewConstraints:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a01d4(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  long lStack_310;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11271e714;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar18));
  lVar19 = (long)_DAT_11271e708;
  uVar1 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar1;
  lStack_d0 = param_1;
  lStack_f8 = param_1;
  if (param_3 == 0) {
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lStack_d0;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar23 = 0.7300000190734863;
    uStack_e0 = uStack_c8;
    func_0x00010bf493e0(0x3fe75c2900000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = *(long *)(param_1 + lVar19);
    uStack_b0 = uStack_e0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lStack_e8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lStack_f8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    lStack_110 = lStack_f0;
    func_0x00010bf493c0(dVar23 * 0.12999999523162842,lStack_f0,param_2,lStack_100);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = *(long *)(param_1 + lVar19);
    lStack_a8 = lStack_110;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_120 = lStack_118;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_120;
    func_0x00010bf493a0(lStack_120,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar19);
    lStack_a0 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf493e0(0x3ff57c57c57c57c6,lVar5,param_2,lVar19);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = 4;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_98 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  else {
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lStack_d0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uStack_c8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = *(long *)(param_1 + lVar19);
    uStack_90 = uStack_e0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lStack_e8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lStack_f8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lStack_f0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = *(long *)(param_1 + lVar19);
    lStack_88 = lStack_108;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = lStack_110;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_120 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lStack_120;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lStack_118;
    func_0x00010bf493a0(lStack_118,param_2,lVar20);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar19);
    lStack_80 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar4;
    func_0x00010bf493a0(lVar4,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = 4;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar19);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(lStack_120);
  _objc_release(lStack_118);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar8;
  _objc_retain(puVar8);
  _objc_release(uVar1);
  iVar16 = (int)*(undefined8 *)(param_1 + lVar18);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11271e718;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar8 + lVar18));
  puStack_210 = puVar8;
  puStack_260 = puVar8;
  puStack_270 = puVar8;
  puVar11 = puVar8;
  puVar13 = puVar8;
  if (iVar16 == 0) {
    lVar19 = 8;
    if (lVar17 != 2) {
      lVar19 = 0;
    }
    dVar21 = *(double *)(&UNK_10dd90440 + lVar19);
    lVar19 = (long)_DAT_11271e704;
    uVar1 = *(undefined8 *)(puVar8 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_208 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = puStack_210;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = uStack_208;
    func_0x00010bf493e0(0x3fe19999a0000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_228 = *(undefined8 *)(puVar8 + lVar19);
    uStack_200 = uStack_220;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_230 = uStack_228;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = *(undefined8 *)(puVar8 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_240 = uStack_238;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar23 = 1.342857142857143;
    uStack_248 = uStack_230;
    func_0x00010bf493e0(0x3ff57c57c57c57c6);
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = *(undefined8 *)(puVar8 + lVar19);
    uStack_1f8 = uStack_248;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uStack_250;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puStack_260;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar21 = dVar21 * dVar23;
    uStack_278 = uStack_258;
    func_0x00010bf493c0(dVar21,uStack_258,param_2,puStack_268);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(puVar8 + lVar19);
    uStack_1f0 = uStack_278;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar21 = dVar21 * 0.27000001072883606;
    puVar14 = puVar10;
    func_0x00010bf493c0(dVar21,puVar10,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = 4;
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1e8 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_200);
    _objc_retainAutoreleasedReturnValue();
LAB_1051a0d70:
    _objc_release(puVar14);
  }
  else {
    lVar19 = (long)_DAT_11271e704;
    uVar1 = *(undefined8 *)(puVar8 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_208 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = puStack_210;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_220 = uStack_208;
    if (lVar17 != 2) {
      dVar21 = 0.824999988079071;
      func_0x00010bf493e0(0x3fea666660000000,uStack_208,param_2,puStack_218);
      _objc_retainAutoreleasedReturnValue();
      uStack_228 = *(undefined8 *)(puVar8 + lVar19);
      uStack_1e0 = uStack_220;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_230 = uStack_228;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_238 = *(undefined8 *)(puVar8 + lVar19);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_240 = uStack_238;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_248 = uStack_230;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_250 = *(undefined8 *)(puVar8 + lVar19);
      uStack_1d8 = uStack_248;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_258 = uStack_250;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_268 = puStack_260;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar21 = dVar21 * -0.25;
      uStack_278 = uStack_258;
      func_0x00010bf493c0(dVar21,uStack_258,param_2,puStack_268);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = *(undefined **)(puVar8 + lVar19);
      uStack_1d0 = uStack_278;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar21 = dVar21 * -0.05000000074505806;
      puVar14 = puVar10;
      func_0x00010bf493c0(dVar21,puVar10,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = 4;
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1c8 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1e0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051a0d70;
    }
    dVar21 = 0.8799999952316284;
    func_0x00010bf493e0(0x3fec28f5c0000000,uStack_208,param_2,puStack_218);
    _objc_retainAutoreleasedReturnValue();
    uStack_228 = *(undefined8 *)(puVar8 + lVar19);
    uStack_1c0 = uStack_220;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_230 = uStack_228;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_238 = *(undefined8 *)(puVar8 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_240 = uStack_238;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = uStack_230;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_250 = *(undefined8 *)(puVar8 + lVar19);
    uStack_1b8 = uStack_248;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uStack_250;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puStack_260;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar21 = dVar21 * -0.23000000417232513;
    uStack_278 = uStack_258;
    func_0x00010bf493c0(dVar21,uStack_258,param_2,puStack_268);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(puVar8 + lVar19);
    uStack_1b0 = uStack_278;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bf493a0(puVar10,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = 4;
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a8 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1c0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(uStack_258);
  _objc_release(uStack_250);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(uStack_238);
  _objc_release(uStack_230);
  _objc_release(uStack_228);
  _objc_release(uStack_220);
  _objc_release(puStack_218);
  _objc_release(puStack_210);
  _objc_release(uStack_208);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(puVar8 + lVar18);
  *(undefined **)(puVar8 + lVar18) = puVar15;
  _objc_retain(puVar15);
  _objc_release(uVar1);
  iVar16 = (int)*(undefined8 *)(puVar8 + lVar18);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11271e71c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar15 + lVar18));
  puStack_380 = puVar15;
  puStack_3d0 = puVar15;
  puStack_3e0 = puVar15;
  puVar13 = puVar15;
  puVar8 = puVar15;
  if (iVar16 == 0) {
    lVar20 = 8;
    if (lVar19 != 2) {
      lVar20 = 0;
    }
    dVar21 = *(double *)(&UNK_10dd90450 + lVar20);
    dVar24 = *(double *)(&UNK_10dd90460 + lVar20);
    uVar22 = *(undefined8 *)(&UNK_10dd90470 + lVar20);
    lVar19 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(puVar15 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_378 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_388 = puStack_380;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_390 = uStack_378;
    func_0x00010bf493e0(uVar22);
    _objc_retainAutoreleasedReturnValue();
    uStack_398 = *(undefined8 *)(puVar15 + lVar19);
    uStack_370 = uStack_390;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a0 = uStack_398;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_3a8 = *(undefined **)(puVar15 + lVar19);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = puStack_3a8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar23 = 1.342857142857143;
    uStack_3b8 = uStack_3a0;
    func_0x00010bf493e0(0x3ff57c57c57c57c6);
    _objc_retainAutoreleasedReturnValue();
    uStack_3c0 = *(undefined8 *)(puVar15 + lVar19);
    uStack_368 = uStack_3b8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3c8 = uStack_3c0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_3d8 = puStack_3d0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar24 = dVar24 * dVar23;
    uStack_3e8 = uStack_3c8;
    func_0x00010bf493c0(dVar24,uStack_3c8,param_2,puStack_3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(puVar15 + lVar19);
    uStack_360 = uStack_3e8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar21 = dVar21 * dVar24;
    puVar12 = puVar11;
    func_0x00010bf493c0(dVar21,puVar11,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = 4;
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_358 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_370);
    _objc_retainAutoreleasedReturnValue();
LAB_1051a151c:
    _objc_release(puVar12);
  }
  else {
    lVar20 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(puVar15 + lVar20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_378 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_388 = puStack_380;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_390 = uStack_378;
    puStack_3a8 = puVar15;
    if (lVar19 != 2) {
      dVar21 = 0.824999988079071;
      func_0x00010bf493e0(0x3fea666660000000,uStack_378,param_2,puStack_388);
      _objc_retainAutoreleasedReturnValue();
      uStack_398 = *(undefined8 *)(puVar15 + lVar20);
      uStack_350 = uStack_390;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_3a0 = uStack_398;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_3b0 = puStack_3a8;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_3b8 = uStack_3a0;
      func_0x00010bf493e0(0x3fea666660000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_3c0 = *(undefined8 *)(puVar15 + lVar20);
      uStack_348 = uStack_3b8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_3c8 = uStack_3c0;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_3d8 = puStack_3d0;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar21 = dVar21 * 0.3499999940395355;
      uStack_3e8 = uStack_3c8;
      func_0x00010bf493c0(dVar21,uStack_3c8,param_2,puStack_3d8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = *(undefined **)(puVar15 + lVar20);
      uStack_340 = uStack_3e8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar13;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar21 = dVar21 * -0.05000000074505806;
      puVar12 = puVar11;
      func_0x00010bf493c0(dVar21,puVar11,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = 4;
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_338 = puVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_350);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051a151c;
    }
    func_0x00010bf493a0(uStack_378,param_2,puStack_388);
    _objc_retainAutoreleasedReturnValue();
    uStack_398 = *(undefined8 *)(puVar15 + lVar20);
    uStack_330 = uStack_390;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3a0 = uStack_398;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_3b0 = puStack_3a8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_3b8 = uStack_3a0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_3c0 = *(undefined8 *)(puVar15 + lVar20);
    uStack_328 = uStack_3b8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_3c8 = uStack_3c0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_3d8 = puStack_3d0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar21 = dVar21 * 0.15000000596046448;
    uStack_3e8 = uStack_3c8;
    func_0x00010bf493c0(dVar21,uStack_3c8,param_2,puStack_3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(puVar15 + lVar20);
    uStack_320 = uStack_3e8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf493a0(puVar11,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = 4;
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_318 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_330);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uStack_3e8);
  _objc_release(puStack_3e0);
  _objc_release(puStack_3d8);
  _objc_release(puStack_3d0);
  _objc_release(uStack_3c8);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3b8);
  _objc_release(puStack_3b0);
  _objc_release(puStack_3a8);
  _objc_release(uStack_3a0);
  _objc_release(uStack_398);
  _objc_release(uStack_390);
  _objc_release(puStack_388);
  _objc_release(puStack_380);
  _objc_release(uStack_378);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(puVar15 + lVar18);
  *(undefined **)(puVar15 + lVar18) = puVar14;
  _objc_retain(puVar14);
  _objc_release(uVar1);
  lVar18 = *(long *)(puVar15 + lVar18);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar18);
  _objc_retain(lVar19);
  if (lVar18 == *(long *)(puVar14 + _DAT_11271e704)) {
    if ((int)param_5 != 0) goto LAB_1051a16c8;
    dVar23 = 0.15000000596046448;
LAB_1051a16f4:
    param_5 = lVar18;
    func_0x00010c269d40(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar23);
  }
  else {
    dVar21 = 0.15000000596046448;
    dVar23 = dVar21;
    if (param_6 != 3 || lVar18 != *(long *)(puVar14 + _DAT_11271e70c)) {
      dVar23 = 1.0;
    }
    if (((int)param_5 == 0) || (param_6 != 3 || lVar18 != *(long *)(puVar14 + _DAT_11271e70c)))
    goto LAB_1051a16f4;
LAB_1051a16c8:
    if (lVar19 == 0) {
      dVar21 = 0.5;
    }
    else {
      param_5 = lVar19;
      func_0x00010c121e20(lVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
    }
    lVar20 = lVar18;
    func_0x00010c269d40(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar21);
    _objc_release(lVar20);
    if (lVar19 == 0) goto LAB_1051a1748;
  }
  _objc_release(param_5);
LAB_1051a1748:
  _objc_release(lVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar18);
  return;
}



/* Entry: 1051a06f0; end: 1051a0e87; -[SCGroupAvatarImageViewController _updateLeftImageViewConstraints:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a06f0(long param_1,undefined8 param_2,int param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11271e718;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar17));
  lStack_f0 = param_1;
  lStack_140 = param_1;
  lStack_150 = param_1;
  lVar16 = param_1;
  lVar18 = param_1;
  if (param_3 == 0) {
    lVar15 = 8;
    if (param_4 != 2) {
      lVar15 = 0;
    }
    dVar19 = *(double *)(&UNK_10dd90440 + lVar15);
    lVar15 = (long)_DAT_11271e704;
    uVar1 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_f8 = lStack_f0;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uStack_e8;
    func_0x00010bf493e0(0x3fe19999a0000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)(param_1 + lVar15);
    uStack_e0 = uStack_100;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uStack_108;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uStack_118;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 1.342857142857143;
    uStack_128 = uStack_110;
    func_0x00010bf493e0(0x3ff57c57c57c57c6);
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = *(undefined8 *)(param_1 + lVar15);
    uStack_d8 = uStack_128;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_130;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = lStack_140;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar19 = dVar19 * dVar21;
    uStack_158 = uStack_138;
    func_0x00010bf493c0(dVar19,uStack_138,param_2,lStack_148);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar15);
    uStack_d0 = uStack_158;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar19 = dVar19 * 0.27000001072883606;
    lVar4 = lVar15;
    func_0x00010bf493c0(dVar19,lVar15,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = 4;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_c8 = lVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_e0);
    _objc_retainAutoreleasedReturnValue();
LAB_1051a0d70:
    _objc_release(lVar4);
  }
  else {
    lVar15 = (long)_DAT_11271e704;
    uVar1 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_f8 = lStack_f0;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uStack_e8;
    if (param_4 != 2) {
      dVar19 = 0.824999988079071;
      func_0x00010bf493e0(0x3fea666660000000,uStack_e8,param_2,lStack_f8);
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = *(undefined8 *)(param_1 + lVar15);
      uStack_c0 = uStack_100;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = uStack_108;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = uStack_118;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_128 = uStack_110;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_130 = *(undefined8 *)(param_1 + lVar15);
      uStack_b8 = uStack_128;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uStack_130;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lStack_148 = lStack_140;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar19 = dVar19 * -0.25;
      uStack_158 = uStack_138;
      func_0x00010bf493c0(dVar19,uStack_138,param_2,lStack_148);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_1 + lVar15);
      uStack_b0 = uStack_158;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar16;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar19 = dVar19 * -0.05000000074505806;
      lVar4 = lVar15;
      func_0x00010bf493c0(dVar19,lVar15,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = 4;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_a8 = lVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051a0d70;
    }
    dVar19 = 0.8799999952316284;
    func_0x00010bf493e0(0x3fec28f5c0000000,uStack_e8,param_2,lStack_f8);
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = *(undefined8 *)(param_1 + lVar15);
    uStack_a0 = uStack_100;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uStack_108;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uStack_118;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uStack_110;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = *(undefined8 *)(param_1 + lVar15);
    uStack_98 = uStack_128;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_130;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = lStack_140;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar19 = dVar19 * -0.23000000417232513;
    uStack_158 = uStack_138;
    func_0x00010bf493c0(dVar19,uStack_138,param_2,lStack_148);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar15);
    uStack_90 = uStack_158;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar15;
    func_0x00010bf493a0(lVar15,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = 4;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_88 = lVar18;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_release(uStack_158);
  _objc_release(lStack_150);
  _objc_release(lStack_148);
  _objc_release(lStack_140);
  _objc_release(uStack_138);
  _objc_release(uStack_130);
  _objc_release(uStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar5;
  _objc_retain(puVar5);
  _objc_release(uVar1);
  iVar13 = (int)*(undefined8 *)(param_1 + lVar17);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11271e71c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(puVar5 + lVar18));
  puStack_260 = puVar5;
  puStack_2b0 = puVar5;
  puStack_2c0 = puVar5;
  puVar8 = puVar5;
  puVar10 = puVar5;
  if (iVar13 == 0) {
    lVar16 = 8;
    if (lVar14 != 2) {
      lVar16 = 0;
    }
    dVar19 = *(double *)(&UNK_10dd90450 + lVar16);
    dVar22 = *(double *)(&UNK_10dd90460 + lVar16);
    uVar20 = *(undefined8 *)(&UNK_10dd90470 + lVar16);
    lVar16 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(puVar5 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puStack_260;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = uStack_258;
    func_0x00010bf493e0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uStack_278 = *(undefined8 *)(puVar5 + lVar16);
    uStack_250 = uStack_270;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_280 = uStack_278;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = *(undefined **)(puVar5 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_290 = puStack_288;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = 1.342857142857143;
    uStack_298 = uStack_280;
    func_0x00010bf493e0(0x3ff57c57c57c57c6);
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = *(undefined8 *)(puVar5 + lVar16);
    uStack_248 = uStack_298;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = uStack_2a0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = puStack_2b0;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar22 = dVar22 * dVar21;
    uStack_2c8 = uStack_2a8;
    func_0x00010bf493c0(dVar22,uStack_2a8,param_2,puStack_2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(puVar5 + lVar16);
    uStack_240 = uStack_2c8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar19 = dVar19 * dVar22;
    puVar11 = puVar7;
    func_0x00010bf493c0(dVar19,puVar7,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = 4;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_238 = puVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_250);
    _objc_retainAutoreleasedReturnValue();
LAB_1051a151c:
    _objc_release(puVar11);
  }
  else {
    lVar16 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(puVar5 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_258 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = puStack_260;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = uStack_258;
    puStack_288 = puVar5;
    if (lVar14 != 2) {
      dVar19 = 0.824999988079071;
      func_0x00010bf493e0(0x3fea666660000000,uStack_258,param_2,puStack_268);
      _objc_retainAutoreleasedReturnValue();
      uStack_278 = *(undefined8 *)(puVar5 + lVar16);
      uStack_230 = uStack_270;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_280 = uStack_278;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_290 = puStack_288;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_298 = uStack_280;
      func_0x00010bf493e0(0x3fea666660000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_2a0 = *(undefined8 *)(puVar5 + lVar16);
      uStack_228 = uStack_298;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_2a8 = uStack_2a0;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_2b8 = puStack_2b0;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      dVar19 = dVar19 * 0.3499999940395355;
      uStack_2c8 = uStack_2a8;
      func_0x00010bf493c0(dVar19,uStack_2a8,param_2,puStack_2b8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(puVar5 + lVar16);
      uStack_220 = uStack_2c8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      dVar19 = dVar19 * -0.05000000074505806;
      puVar11 = puVar7;
      func_0x00010bf493c0(dVar19,puVar7,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = 4;
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_218 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_230);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051a151c;
    }
    func_0x00010bf493a0(uStack_258,param_2,puStack_268);
    _objc_retainAutoreleasedReturnValue();
    uStack_278 = *(undefined8 *)(puVar5 + lVar16);
    uStack_210 = uStack_270;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_280 = uStack_278;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_290 = puStack_288;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = uStack_280;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a0 = *(undefined8 *)(puVar5 + lVar16);
    uStack_208 = uStack_298;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_2a8 = uStack_2a0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b8 = puStack_2b0;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar19 = dVar19 * 0.15000000596046448;
    uStack_2c8 = uStack_2a8;
    func_0x00010bf493c0(dVar19,uStack_2a8,param_2,puStack_2b8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(puVar5 + lVar16);
    uStack_200 = uStack_2c8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf493a0(puVar7,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = 4;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1f8 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_210);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(uStack_280);
  _objc_release(uStack_278);
  _objc_release(uStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(uStack_258);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(puVar5 + lVar18);
  *(undefined **)(puVar5 + lVar18) = puVar12;
  _objc_retain(puVar12);
  _objc_release(uVar1);
  lVar18 = *(long *)(puVar5 + lVar18);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar18);
  _objc_retain(lVar16);
  if (lVar18 == *(long *)(puVar12 + _DAT_11271e704)) {
    if ((int)param_5 != 0) goto LAB_1051a16c8;
    dVar21 = 0.15000000596046448;
LAB_1051a16f4:
    param_5 = lVar18;
    func_0x00010c269d40(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar21);
  }
  else {
    dVar19 = 0.15000000596046448;
    dVar21 = dVar19;
    if (param_6 != 3 || lVar18 != *(long *)(puVar12 + _DAT_11271e70c)) {
      dVar21 = 1.0;
    }
    if (((int)param_5 == 0) || (param_6 != 3 || lVar18 != *(long *)(puVar12 + _DAT_11271e70c)))
    goto LAB_1051a16f4;
LAB_1051a16c8:
    if (lVar16 == 0) {
      dVar19 = 0.5;
    }
    else {
      param_5 = lVar16;
      func_0x00010c121e20(lVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
    }
    lVar17 = lVar18;
    func_0x00010c269d40(lVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar19);
    _objc_release(lVar17);
    if (lVar16 == 0) goto LAB_1051a1748;
  }
  _objc_release(param_5);
LAB_1051a1748:
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar18);
  return;
}



/* Entry: 1051a0e88; end: 1051a1637; -[SCGroupAvatarImageViewController _updateRightImageViewConstraints:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a0e88(double param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11271e71c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_3,
                      *(undefined8 *)(param_2 + lVar10));
  lStack_100 = param_2;
  lStack_150 = param_2;
  lStack_160 = param_2;
  lVar3 = param_2;
  lVar7 = param_2;
  if (param_4 == 0) {
    lVar9 = 8;
    if (param_5 != 2) {
      lVar9 = 0;
    }
    param_1 = *(double *)(&UNK_10dd90450 + lVar9);
    dVar13 = *(double *)(&UNK_10dd90460 + lVar9);
    uVar11 = *(undefined8 *)(&UNK_10dd90470 + lVar9);
    lVar9 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lStack_100;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uStack_f8;
    func_0x00010bf493e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = *(undefined8 *)(param_2 + lVar9);
    uStack_f0 = uStack_110;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uStack_118;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = *(long *)(param_2 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = lStack_128;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 1.342857142857143;
    uStack_138 = uStack_120;
    func_0x00010bf493e0(0x3ff57c57c57c57c6);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = *(undefined8 *)(param_2 + lVar9);
    uStack_e8 = uStack_138;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uStack_140;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = lStack_150;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar13 = dVar13 * dVar12;
    uStack_168 = uStack_148;
    func_0x00010bf493c0(dVar13,uStack_148,param_3,lStack_158);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + lVar9);
    uStack_e0 = uStack_168;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = param_1 * dVar13;
    lVar5 = lVar9;
    func_0x00010bf493c0(param_1,lVar9,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 4;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_d8 = lVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_f0);
    _objc_retainAutoreleasedReturnValue();
LAB_1051a151c:
    _objc_release(lVar5);
  }
  else {
    lVar9 = (long)_DAT_11271e70c;
    uVar1 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lStack_100;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uStack_f8;
    lStack_128 = param_2;
    if (param_5 != 2) {
      param_1 = 0.824999988079071;
      func_0x00010bf493e0(0x3fea666660000000,uStack_f8,param_3,lStack_108);
      _objc_retainAutoreleasedReturnValue();
      uStack_118 = *(undefined8 *)(param_2 + lVar9);
      uStack_d0 = uStack_110;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_120 = uStack_118;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lStack_130 = lStack_128;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = uStack_120;
      func_0x00010bf493e0(0x3fea666660000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = *(undefined8 *)(param_2 + lVar9);
      uStack_c8 = uStack_138;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = uStack_140;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lStack_158 = lStack_150;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      param_1 = param_1 * 0.3499999940395355;
      uStack_168 = uStack_148;
      func_0x00010bf493c0(param_1,uStack_148,param_3,lStack_158);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = *(long *)(param_2 + lVar9);
      uStack_c0 = uStack_168;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      param_1 = param_1 * -0.05000000074505806;
      lVar5 = lVar9;
      func_0x00010bf493c0(param_1,lVar9,param_3,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 4;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_b8 = lVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051a151c;
    }
    func_0x00010bf493a0(uStack_f8,param_3,lStack_108);
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = *(undefined8 *)(param_2 + lVar9);
    uStack_b0 = uStack_110;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uStack_118;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_130 = lStack_128;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_120;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = *(undefined8 *)(param_2 + lVar9);
    uStack_a8 = uStack_138;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uStack_140;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = lStack_150;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    param_1 = param_1 * 0.15000000596046448;
    uStack_168 = uStack_148;
    func_0x00010bf493c0(param_1,uStack_148,param_3,lStack_158);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + lVar9);
    uStack_a0 = uStack_168;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010bf493a0(lVar9,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = 4;
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_98 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_b0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(uStack_168);
  _objc_release(lStack_160);
  _objc_release(lStack_158);
  _objc_release(lStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_140);
  _objc_release(uStack_138);
  _objc_release(lStack_130);
  _objc_release(lStack_128);
  _objc_release(uStack_120);
  _objc_release(uStack_118);
  _objc_release(uStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(uStack_f8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar10);
  *(undefined **)(param_2 + lVar10) = puVar6;
  _objc_retain(puVar6);
  _objc_release(uVar1);
  lVar7 = *(long *)(param_2 + lVar10);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  _objc_retain(lVar8);
  if (lVar7 == *(long *)(puVar6 + _DAT_11271e704)) {
    if ((int)param_6 != 0) goto LAB_1051a16c8;
    dVar12 = 0.15000000596046448;
LAB_1051a16f4:
    param_6 = lVar7;
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(dVar12);
  }
  else {
    param_1 = 0.15000000596046448;
    dVar12 = param_1;
    if (param_7 != 3 || lVar7 != *(long *)(puVar6 + _DAT_11271e70c)) {
      dVar12 = 1.0;
    }
    if (((int)param_6 == 0) || (param_7 != 3 || lVar7 != *(long *)(puVar6 + _DAT_11271e70c)))
    goto LAB_1051a16f4;
LAB_1051a16c8:
    if (lVar8 == 0) {
      param_1 = 0.5;
    }
    else {
      param_6 = lVar8;
      func_0x00010c121e20(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
    }
    lVar3 = lVar7;
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(lVar3);
    if (lVar8 == 0) goto LAB_1051a1748;
  }
  _objc_release(param_6);
LAB_1051a1748:
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1051a1638; end: 1051a176b; -[SCGroupAvatarImageViewController _updateOpacityForImageView:options:displayingBitmoji:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a1638(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == *(long *)(param_2 + _DAT_11271e704)) {
    if ((int)param_6 != 0) goto LAB_1051a16c8;
    uVar3 = 0x3fc3333340000000;
LAB_1051a16f4:
    param_6 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar3);
  }
  else {
    bVar1 = param_4 != *(long *)(param_2 + _DAT_11271e70c);
    param_1 = 0x3fc3333340000000;
    uVar3 = param_1;
    if (param_7 != 3 || bVar1) {
      uVar3 = 0x3ff0000000000000;
    }
    if (((int)param_6 == 0) || (param_7 != 3 || bVar1)) goto LAB_1051a16f4;
LAB_1051a16c8:
    if (param_5 == 0) {
      param_1 = 0x3fe0000000000000;
    }
    else {
      param_6 = param_5;
      func_0x00010c121e20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
    }
    lVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(param_1);
    _objc_release(lVar2);
    if (param_5 == 0) goto LAB_1051a1748;
  }
  _objc_release(param_6);
LAB_1051a1748:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051a176c; end: 1051a1aa7; -[SCGroupAvatarImageViewController _targetImageResultForImageView:modifier:options:userId:bitmojiAvatarId:participantColor:fallbackImageParams:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a176c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar5 = param_9;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    func_0x00010be0e500(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_3);
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uVar6 = 0x3032000000;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1051a1aa8;
    uStack_88 = 0x1051a1ab8;
    _objc_retain(&PTR____CFConstantStringClassReference_110dd70d8);
    ppuStack_80 = &PTR____CFConstantStringClassReference_110dd70d8;
    _objc_retain(param_8);
    _objc_retain(param_8);
    func_0x00010c0c0e00(param_6);
    puVar1 = *(undefined **)(param_3 + _DAT_11271e6ec);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11271e6e4;
    uVar2 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bf4f6c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e960(*(undefined8 *)(param_3 + lVar5));
    func_0x00010bf2db20();
    func_0x00010c106c00(*(undefined8 *)(param_3 + _DAT_11271e6e8));
    uVar3 = *(undefined8 *)(param_3 + _DAT_11271e6fc);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfaa060(uVar6,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_8);
    _objc_release(param_8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(ppuStack_80);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051a1aa8; end: 1051a1abf;  */

void FUN_1051a1aa8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051a1ac0; end: 1051a1b77;  */

void FUN_1051a1ac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110f4b6d8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110f4b6d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051a1b78; end: 1051a1c17; -[SCGroupAvatarImageViewController _fallbackImageForParticipant:participantColor:fallbackImageParams:] */

void FUN_1051a1b78(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x000108ffe710(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    param_3 = param_4;
  }
  uVar1 = param_5;
  func_0x00010c25dba0(param_5);
  func_0x000108ffef38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051a1c18; end: 1051a1c73; -[SCGroupAvatarImageViewController handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a1c18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ffe49c(0x3ff19999a0000000);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11271e6f4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a1c74; end: 1051a1d8f; -[SCGroupAvatarImageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a1c74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e71c,0);
  _objc_storeStrong(param_1 + _DAT_11271e714,0);
  _objc_storeStrong(param_1 + _DAT_11271e718,0);
  _objc_storeStrong(param_1 + _DAT_11271e70c,0);
  _objc_storeStrong(param_1 + _DAT_11271e708,0);
  _objc_storeStrong(param_1 + _DAT_11271e704,0);
  _objc_storeStrong(param_1 + _DAT_11271e700,0);
  _objc_storeStrong(param_1 + _DAT_11271e6f8,0);
  _objc_destroyWeak(param_1 + _DAT_11271e6f4);
  _objc_storeStrong(param_1 + _DAT_11271e6f0,0);
  _objc_storeStrong(param_1 + _DAT_11271e6ec,0);
  _objc_storeStrong(param_1 + _DAT_11271e6fc,0);
  _objc_storeStrong(param_1 + _DAT_11271e6e8,0);
  _objc_storeStrong(param_1 + _DAT_11271e6e4,0);
  _objc_storeStrong(param_1 + _DAT_11271e6e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e6dc,0);
  return;
}



/* Entry: 1051a1d90; end: 1051a1e37; -[SCBloopsReportContentUploader initWithBoltDataUploader:] */

undefined1 * FUN_1051a1d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ac0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a1e38; end: 1051a1f23; -[SCBloopsReportContentUploader uploadImage:] */

void FUN_1051a1e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a1f24; end: 1051a1f87;  */

void FUN_1051a1f24(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5900();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1051a1f88; end: 1051a203f; -[SCBloopsReportContentUploader _uploadImage:observer:] */

void FUN_1051a1f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051a2040;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051a2040; end: 1051a22f7;  */

void FUN_1051a2040(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  puVar9 = PTR_PTR_1126b2bf8;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c156ce0(lVar1,param_2,puVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b5980;
    func_0x00010bf1f1e0(PTR_PTR_1126b5980);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aade0(puVar5,param_2,puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c2b3a20(puVar5,param_2,6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bc180(puVar5,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8800(puVar5,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b5988;
    func_0x00010bfeb740(PTR_PTR_1126b5988,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abca0(puVar5,param_2,puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    pcStack_98 = FUN_1051a234c;
    puStack_90 = &UNK_11086e228;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_88 = puVar2;
    puStack_80 = puVar3;
    _objc_retain(uVar8);
    puStack_d0 = puVar9;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1051a244c;
    puStack_b8 = &UNK_11086e258;
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uStack_78 = uVar8;
    _objc_retain(uVar10);
    uStack_b0 = uVar10;
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    func_0x00010c28eb40(uVar6,param_2,puVar7,uVar11,&puStack_a8,&puStack_d0);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uStack_b0);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_opt_new(puVar9);
  func_0x00010c0d9840(uVar8,param_2,puVar9);
  _objc_release(puVar9);
  func_0x00010bf436e0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1051a22f8; end: 1051a234b;  */

void FUN_1051a22f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2bf8;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c0d9840(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bf436e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a234c; end: 1051a244b;  */

void FUN_1051a234c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2bf8;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf64920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf64920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64a0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf4db80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182aa0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051a244c; end: 1051a2453;  */

void FUN_1051a244c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2bf8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bf436e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1051a2454; end: 1051a2483; -[SCBloopsReportContentUploader .cxx_destruct] */

void FUN_1051a2454(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051a2484; end: 1051a2667; -[SCBloopsReportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a2484(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5990;
  _objc_alloc(PTR_PTR_1126b5990);
  lVar3 = param_1 + _DAT_11271e728;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_11271e72c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271e730;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf44ae0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271e734;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e800(puVar2);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bf17a60(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1051a2668; end: 1051a26a7;  */

void FUN_1051a2668(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051a26a8; end: 1051a2723; -[SCBloopsReportEntryPoint _contentUploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a26a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b5998;
  _objc_alloc(PTR_PTR_1126b5998);
  param_1 = param_1 + _DAT_11271e738;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff90a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a2724; end: 1051a277f; -[SCBloopsReportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a2724(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e738);
  _objc_destroyWeak(param_1 + _DAT_11271e734);
  _objc_destroyWeak(param_1 + _DAT_11271e730);
  _objc_destroyWeak(param_1 + _DAT_11271e72c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e728);
  return;
}



/* Entry: 1051a2780; end: 1051a2883;  */

void FUN_1051a2780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1051a2884;
  uStack_40 = 0x1051a2894;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0c0520(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051a2884; end: 1051a289b;  */

void FUN_1051a2884(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051a289c; end: 1051a2a97;  */

void FUN_1051a289c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b59a0;
  _objc_alloc();
  uVar6 = param_2;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf28b00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010befd4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c0a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  _objc_retain(param_2);
  func_0x00010c21cee0(puVar1);
  puVar5 = PTR_PTR_1126b59a8;
  _objc_alloc();
  func_0x00010c03e860();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar6);
  func_0x00010c175fe0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(param_2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051a2a98; end: 1051a2b27;  */

void FUN_1051a2a98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4c780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c28df60(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051a2b28; end: 1051a2cff;  */

void FUN_1051a2b28(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b59a8;
  _objc_alloc(PTR_PTR_1126b59a8);
  func_0x00010c03e860();
  puVar2 = param_1;
  func_0x00010bf4dac0();
  if (puVar2 + -2 < (undefined *)0x9) {
    uVar5 = *(undefined4 *)(&UNK_10dd90480 + (long)(puVar2 + -2) * 4);
  }
  else {
    uVar5 = 0;
  }
  puVar2 = PTR_PTR_1126b59b0;
  _objc_alloc(PTR_PTR_1126b59b0);
  puVar3 = param_1;
  func_0x00010c118460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003dc0(puVar2,param_2,uVar5,puVar3);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010bf4dc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b59b8;
      _objc_alloc(PTR_PTR_1126b59b8);
      puVar4 = param_1;
      func_0x00010bf4dc80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff91c0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6b40(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010c085300(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b64a0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      func_0x00010c1c4460(puVar2,param_2,puVar3);
      goto LAB_1051a2cc4;
    }
  }
  puVar3 = param_1;
  func_0x00010bf4dc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182aa0(puVar2,param_2,puVar3);
LAB_1051a2cc4:
  _objc_release(puVar3);
  func_0x00010c1a29e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a2d00; end: 1051a318f;  */

void FUN_1051a2d00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b59a8;
  _objc_alloc(PTR_PTR_1126b59a8);
  func_0x00010c03e860();
  puVar2 = PTR_PTR_1126b59c0;
  _objc_alloc(PTR_PTR_1126b59c0);
  uVar3 = param_1;
  func_0x00010bf8a420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf8a400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfe6080(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c292720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e600(puVar2,param_2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c094540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b59c8;
  _objc_alloc(PTR_PTR_1126b59c8);
  func_0x00010c00e640();
  func_0x00010bf4dac0();
  puVar8 = PTR_PTR_1126b59d0;
  _objc_alloc(PTR_PTR_1126b59d0);
  func_0x00010c003da0();
  puVar9 = PTR_PTR_1126b59b8;
  _objc_alloc(PTR_PTR_1126b59b8);
  uVar3 = param_1;
  func_0x00010bf4dc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff91c0(puVar9,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar9,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c085300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64a0(puVar9,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c1c4460(puVar8,param_2,puVar9);
  func_0x00010c191ec0(puVar1,param_2,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a3190; end: 1051a321f;  */

void FUN_1051a3190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4c780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c28df60(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051a3220; end: 1051a36bf;  */

undefined1 * FUN_1051a3220(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126b59e0;
  _objc_alloc();
  func_0x00010bf4dac0(param_1);
  func_0x00010c15b120(param_1);
  lVar2 = param_1;
  func_0x00010befec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010befec20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010befec20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0cf220();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  lVar14 = lVar5;
  func_0x00010c003de0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010befec20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bfb9120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar16 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0400(puVar1);
    _objc_release(puVar6);
  }
  lVar2 = param_1;
  lStack_150 = lVar16;
  puStack_148 = puVar1;
  func_0x00010befec20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c065c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(lVar3);
  puVar11 = auStack_f8;
  uVar12 = 0x10;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar16 = *plStack_130;
    do {
      lVar15 = 0;
      do {
        if (*plStack_130 != lVar16) {
          _objc_enumerationMutation(lVar3);
        }
        uVar17 = *(undefined8 *)(lStack_138 + lVar15 * 8);
        puVar6 = PTR_PTR_1126b59b8;
        _objc_alloc(PTR_PTR_1126b59b8);
        uVar12 = uVar17;
        func_0x00010bf1f220(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff91c0(puVar6);
        _objc_release(uVar12);
        uVar12 = uVar17;
        func_0x00010bf93ec0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b6b40(puVar6);
        _objc_release(uVar12);
        func_0x00010bf93e80(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b64a0(puVar6);
        _objc_release(uVar17);
        func_0x00010befa120(puVar1);
        _objc_release(puVar6);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      puVar11 = auStack_f8;
      uVar12 = 0x10;
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  puVar6 = puStack_148;
  func_0x00010c1ad260(puStack_148);
  lVar2 = param_1;
  func_0x00010befec20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c0eeec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b59b8;
  _objc_alloc(PTR_PTR_1126b59b8);
  lVar2 = lVar15;
  func_0x00010bf1f220(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff91c0(puVar7);
  _objc_release(lVar2);
  lVar2 = lVar15;
  func_0x00010bf93ec0(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar7);
  _objc_release(lVar2);
  lVar2 = lVar15;
  func_0x00010bf93e80(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64a0(puVar7);
  _objc_release(lVar2);
  func_0x00010c1d6f40(puVar6);
  lVar2 = param_1;
  func_0x00010befec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c118460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4c60(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b59a8;
  _objc_alloc(PTR_PTR_1126b59a8);
  func_0x00010c03e860();
  puVar10 = puVar6;
  func_0x00010c160860();
  _objc_release(puVar7);
  _objc_release(lVar15);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lStack_150);
  _objc_release(puVar6);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_1a0;
  puStack_170 = puVar6;
  pcStack_158 = FUN_1051a36c0;
  lStack_190 = lVar15;
  puStack_188 = puVar1;
  lStack_180 = lVar3;
  lStack_178 = lVar16;
  lStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  _objc_retain(lVar13);
  _objc_retain(lVar14);
  puStack_198 = PTR_PTR_1126e6ac8;
  lStack_1a0 = lVar2;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    _objc_retain(puVar10);
    uVar17 = *(undefined8 *)((long)plVar9 + 8);
    *(undefined **)((long)plVar9 + 8) = puVar10;
    _objc_release(uVar17);
    _objc_retain(puVar11);
    uVar17 = *(undefined8 *)((long)plVar9 + 0x10);
    *(undefined1 **)((long)plVar9 + 0x10) = puVar11;
    _objc_release(uVar17);
    _objc_retain(uVar12);
    uVar17 = *(undefined8 *)((long)plVar9 + 0x18);
    *(undefined8 *)((long)plVar9 + 0x18) = uVar12;
    _objc_release(uVar17);
    _objc_retain(lVar13);
    uVar17 = *(undefined8 *)((long)plVar9 + 0x20);
    *(long *)((long)plVar9 + 0x20) = lVar13;
    _objc_release(uVar17);
    _objc_retain(lVar14);
    uVar17 = *(undefined8 *)((long)plVar9 + 0x28);
    *(long *)((long)plVar9 + 0x28) = lVar14;
    _objc_release(uVar17);
  }
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return (undefined1 *)plVar9;
}



/* Entry: 1051a36c0; end: 1051a37e3; -[SCBloopsReportRouter initWithReportScope:valdiRuntimeProvider:customReportComposerFactory:composerNetworkingGrpcServiceFactory:contentUploader:] */

undefined1 *
FUN_1051a36c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6ac8;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a37e4; end: 1051a395f; -[SCBloopsReportRouter begin] */

void FUN_1051a37e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c0b6fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0b7700(param_1,param_2,lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c1c1bc0(puVar1,param_2,puVar6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051a3960; end: 1051a3a9b; -[SCBloopsReportRouter makeReportPageWithCameosDeps:coreDeps:] */

void FUN_1051a3960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f3900(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  FUN_1051a2780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b59e8;
  _objc_alloc(PTR_PTR_1126b59e8);
  func_0x00010c033800();
  func_0x00010c18b5e0();
  puVar3 = PTR_PTR_1126b59f0;
  _objc_alloc(PTR_PTR_1126b59f0);
  func_0x00010bffaf40();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b59f8;
  _objc_alloc(PTR_PTR_1126b59f8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051a3a9c; end: 1051a3af3; -[SCBloopsReportRouter makeCameosDeps] */

void FUN_1051a3a9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5a00;
  _objc_alloc_init(PTR_PTR_1126b5a00);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a3af4; end: 1051a3b77; -[SCBloopsReportRouter reportDidCompleteWithCancelled:] */

void FUN_1051a3af4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1051a3b78;
  puStack_38 = &UNK_110845ce0;
  uStack_30 = uVar1;
  uStack_28 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051a3b78; end: 1051a3b87;  */

void FUN_1051a3b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_bloopsReportDidCompleteWithCance_1125a5208,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051a3b88; end: 1051a3c5b; -[SCBloopsReportRouter reportDidSubmitWithReasonId:comment:] */

void FUN_1051a3b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051a3c5c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = uVar1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051a3c5c; end: 1051a3c6b;  */

void FUN_1051a3c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_bloopsReportDidSubmitWithReasonI_1125a5210,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1051a3c6c; end: 1051a3c77; -[SCBloopsReportRouter pushToValdiMarshaller:] */

undefined8 FUN_1051a3c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5a10;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_1051a4954();
  return param_3;
}



/* Entry: 1051a3c78; end: 1051a3ccb; -[SCBloopsReportRouter .cxx_destruct] */

void FUN_1051a3c78(long param_1)

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



/* Entry: 1051a3ccc; end: 1051a3d3b; -[SCDeckValdiContainerViewController viewWillAppear:] */

void FUN_1051a3ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7960();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e6ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 1051a3d3c; end: 1051a3dab; -[SCDeckValdiContainerViewController viewDidAppear:] */

void FUN_1051a3d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e78c0();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126e6ad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 1051a3dac; end: 1051a3e13; -[SCDeckValdiContainerViewController viewWillDisappear:] */

void FUN_1051a3dac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ad0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79a0();
  _objc_release(param_1);
  return;
}



/* Entry: 1051a3e14; end: 1051a3e7b; -[SCDeckValdiContainerViewController viewDidDisappear:] */

void FUN_1051a3e14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ad0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7900();
  _objc_release(param_1);
  return;
}



/* Entry: 1051a3e7c; end: 1051a3e9b; -[SCDeckValdiContainerViewController deckUIKitLifecycleObservingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a3e7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271e750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a3e9c; end: 1051a3eaf; -[SCDeckValdiContainerViewController setDeckUIKitLifecycleObservingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a3e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271e750,param_3);
  return;
}



/* Entry: 1051a3eb0; end: 1051a3ebf; -[SCDeckValdiContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a3eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e750);
  return;
}



/* Entry: 1051a3ec0; end: 1051a40af; -[SCGenerativeContentReportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a3ec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  lVar2 = param_1 + _DAT_11271e754;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11271e758;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf44ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf55860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0b6fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0b7700(param_1,param_2,lVar2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5a08;
  _objc_alloc(PTR_PTR_1126b5a08);
  func_0x00010c0601e0();
  puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c1c1bc0(puVar1,param_2,puVar6);
  param_1 = param_1 + _DAT_11271e75c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051a40b0; end: 1051a442f; -[SCGenerativeContentReportEntryPoint makeReportPageWithCameosDeps:coreDeps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a40b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11271e75c;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bf8a800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  if (lVar6 == 0) {
    lVar6 = lVar1;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained();
    if (lVar6 == 0) {
      lVar6 = lVar1;
      func_0x00010c0c8ae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar6 != 0) {
        _objc_initWeak(auStack_68,param_1);
        puVar5 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010bf11fe0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1 + lVar7;
        _objc_loadWeakRetained(lVar7);
        lVar1 = lVar7;
        func_0x00010c0c8ae0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x0001051a2f48();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(lVar7);
        _objc_release(puVar5);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        goto LAB_1051a41a8;
      }
      lVar1 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar6 = lVar1;
      func_0x00010befeae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar6 == 0) {
        lVar6 = 0;
        goto LAB_1051a41a8;
      }
      lVar1 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar1);
      lVar7 = lVar1;
      func_0x00010befeae0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      FUN_1051a3220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar7 = lVar1;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      FUN_1051a2b28();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar7 = lVar1;
    func_0x00010bf8a800();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    FUN_1051a2d00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
LAB_1051a41a8:
  puVar5 = PTR_PTR_1126b59e8;
  _objc_alloc(PTR_PTR_1126b59e8);
  func_0x00010c033800();
  func_0x00010c18b5e0();
  func_0x00010c200340(puVar5);
  puVar2 = PTR_PTR_1126b59f0;
  _objc_alloc(PTR_PTR_1126b59f0);
  func_0x00010bffaf40();
  puVar3 = PTR_PTR_1126b59f8;
  _objc_alloc(PTR_PTR_1126b59f8);
  param_1 = param_1 + _DAT_11271e754;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051a4430; end: 1051a446f;  */

void FUN_1051a4430(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1051a4470; end: 1051a44ff; -[SCGenerativeContentReportEntryPoint makeCameosDeps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a4470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b5a00;
  _objc_alloc_init(PTR_PTR_1126b5a00);
  param_1 = param_1 + _DAT_11271e760;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a4500; end: 1051a457b; -[SCGenerativeContentReportEntryPoint _contentUploader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a4500(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b5998;
  _objc_alloc(PTR_PTR_1126b5998);
  param_1 = param_1 + _DAT_11271e764;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff90a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051a457c; end: 1051a4657; -[SCGenerativeContentReportEntryPoint reportDidCompleteWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a457c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar3 = (long)_DAT_11271e75c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051a4658;
  puStack_60 = &UNK_11084d5f8;
  lStack_58 = lVar1;
  lStack_50 = lVar2;
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1051a4658; end: 1051a46b7;  */

void FUN_1051a4658(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1051a46b8;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  uStack_18 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40);
  return;
}



/* Entry: 1051a46b8; end: 1051a46c7;  */

void FUN_1051a46b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_generativeContentReportDidComple_1125cdc68,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051a46c8; end: 1051a46d3; -[SCGenerativeContentReportEntryPoint pushToValdiMarshaller:] */

undefined8 FUN_1051a46c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5a10;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  FUN_1051a4954();
  return param_3;
}



/* Entry: 1051a46d4; end: 1051a472f; -[SCGenerativeContentReportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a46d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e764);
  _objc_destroyWeak(param_1 + _DAT_11271e760);
  _objc_destroyWeak(param_1 + _DAT_11271e758);
  _objc_destroyWeak(param_1 + _DAT_11271e754);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e75c);
  return;
}



/* Entry: 1051a4730; end: 1051a4753; +[SCCCameosReportDelegate valdiMarshallableObjectDescriptor] */

void FUN_1051a4730(undefined8 *param_1)

{
  *param_1 = &PTR_s_reportDidComplete_11086e348;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_11086e318;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1051a4754; end: 1051a477f;  */

undefined8 FUN_1051a4754(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 1051a4780; end: 1051a47fb;  */

void FUN_1051a4780(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1051a4924;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_1051a4954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1051a47fc; end: 1051a4857;  */

undefined8 FUN_1051a47fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5a10;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_1051a4954();
  return param_1;
}



/* Entry: 1051a4858; end: 1051a4863; +[SCCCameosReportPage componentPath] */

undefined ** FUN_1051a4858(void)

{
  return &PTR____CFConstantStringClassReference_110dc9898;
}



/* Entry: 1051a4864; end: 1051a4897; -[SCCCameosReportPage initWithViewModel:componentContext:runtime:] */

void FUN_1051a4864(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6ad8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1051a4898; end: 1051a48e3; -[SCCCameosReportPage setViewModel:] */

void FUN_1051a4898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_1051a4954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051a48e4; end: 1051a4923; -[SCCCameosReportPage viewModel] */

void FUN_1051a48e4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1051a4954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051a4924; end: 1051a4953;  */

void FUN_1051a4924(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051a4954; end: 1051a4a63;  */

void FUN_1051a4954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1051a4a64; end: 1051a4ab7;  */

void FUN_1051a4a64(ulong param_1)

{
  if (param_1 < 2) {
    func_0x0001051a498c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 2) {
    func_0x0001051a49a4();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 3) {
    func_0x0001051a49bc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a4ab8; end: 1051a4b57; +[SCBloopsUserPolicyTitleProvider titleForPolicyType:] */

void FUN_1051a4ab8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((long)param_3 < 4) {
    if (param_3 < 2) {
      func_0x0001051a498c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      func_0x0001051a49a4();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 3) {
      func_0x0001051a49bc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 4) {
    func_0x0001051a49ec();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 5) {
    func_0x0001051a49d4();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 6) {
    func_0x0001051a4a04();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a4b58; end: 1051a4b83; +[SCBloopsUserPolicyTitleProvider subtitleForPolicyType:] */

void FUN_1051a4b58(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 6) {
    func_0x0001051a4a1c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051a4b84; end: 1051a4b87; +[SCBloopsUserPolicyTitleProvider accessibilityTitleForPolicyType:] */

void FUN_1051a4b84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_titleForPolicyType__112679f00);
  return;
}



/* Entry: 1051a4b88; end: 1051a4c47; -[SCBloopsSettingsPolicyViewController initWithSelectedFriendsPolicyType:friendsPolicyTypeTitleProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051a4b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6ae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e768) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e76c) = param_3;
    lVar3 = (long)_DAT_11271e770;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e774);
    *(undefined ***)((long)puVar1 + (long)_DAT_11271e774) =
         &PTR__OBJC_CLASS___NSConstantArray_11117e5b0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a4c48; end: 1051a4cdb; -[SCBloopsSettingsPolicyViewController initWithSelectedAdsPolicyType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1051a4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6ae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e768) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e778) = param_3;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e774);
    *(undefined ***)((long)puVar1 + (long)_DAT_11271e774) =
         &PTR__OBJC_CLASS___NSConstantArray_11117e5c8;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1051a4cdc; end: 1051a4d8f; -[SCBloopsSettingsPolicyViewController initWithDataSource:selectedOptionIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051a4cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e6ae0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e768) = 2;
    lVar3 = (long)_DAT_11271e77c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e780) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051a4d90; end: 1051a5413; -[SCBloopsSettingsPolicyViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a4d90(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  ulong uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126e6ae0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(&uStack_c0,PTR_s_viewDidLoad_112684cd8);
  uVar14 = param_1;
  func_0x00010c20eaa0();
  lVar12 = *(long *)(param_1 + (long)_DAT_11271e768);
  if (lVar12 == 2) {
    lVar12 = (long)_DAT_11271e77c;
    uVar14 = *(ulong *)(param_1 + lVar12);
    func_0x00010bfa2ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(ulong *)(param_1 + lVar12);
    func_0x00010bfa1ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar12 == 1) {
    func_0x0001051a4974();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x0001051a4a34();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar12 == 0) {
    func_0x0001051a495c();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x0001051a4a4c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar15 = 0;
    uVar14 = 0;
  }
  uVar1 = param_1;
  uStack_130 = uVar15;
  uStack_c8 = uVar14;
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar12 = (long)_DAT_11271e784;
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar2;
  _objc_release(uVar13);
  dVar17 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),dVar17,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar12));
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar12));
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  uVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar14);
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c213040();
  func_0x00010c1cfce0(puVar2);
  func_0x00010c219b60(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010c212f20(puVar2);
  func_0x00010c21ad00(puVar2);
  func_0x00010c1bdb00(puVar2);
  func_0x00010c219b60(puVar2);
  uVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c1e0180(dVar17 + -32.0 + -32.0,puVar2);
  _objc_release(uVar14);
  func_0x00010c106d40(puVar2);
  dVar16 = 1.79769313486232e+308;
  func_0x00010c23d5a0(puVar2);
  uVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar14);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(0,0,dVar17,dVar16 + 16.0);
  func_0x00010befbb60();
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar12));
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  uStack_d8 = uVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_e8 = uVar13;
  uStack_b0 = uVar13;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  uStack_f8 = uVar4;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uStack_f0 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar12);
  uStack_108 = uVar4;
  uStack_a8 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  uStack_120 = uVar13;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = uVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_140 = uVar13;
  uStack_a0 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_150 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  uStack_98 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_138 = puVar3;
  func_0x00010bf34860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  puStack_90 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puStack_110);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_140);
  _objc_release(uStack_128);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(puStack_138);
  _objc_release(puVar2);
  _objc_release(uStack_130);
  uVar14 = uStack_c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1051a5414;
  puStack_188 = PTR_PTR_1126e6ae0;
  uStack_190 = uVar14;
  puStack_180 = puVar2;
  puStack_178 = puVar10;
  uStack_170 = param_1;
  puStack_168 = puVar9;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_190,PTR_s_didMoveToParentViewController__1125bb948);
  if (puVar11 != (undefined *)0x0) {
    return;
  }
  lVar12 = *(long *)(uVar14 + (long)_DAT_11271e768);
  if (lVar12 == 2) {
    uVar15 = uVar14;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar15;
    _objc_opt_respondsToSelector();
    _objc_release(uVar15);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar15 = uVar14;
    func_0x00010be9dfc0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e2a0();
    _objc_release(uVar14);
  }
  else if (lVar12 == 1) {
    uVar15 = uVar14;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar15;
    _objc_opt_respondsToSelector();
    _objc_release(uVar15);
    if ((uVar1 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e260();
    uVar15 = uVar14;
  }
  else {
    if (lVar12 != 0) {
      return;
    }
    uVar15 = uVar14;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar15;
    _objc_opt_respondsToSelector();
    _objc_release(uVar15);
    if ((uVar1 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e280();
    uVar15 = uVar14;
  }
  _objc_release(uVar15);
  return;
}



/* Entry: 1051a5414; end: 1051a55b3; -[SCBloopsSettingsPolicyViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5414(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6ae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didMoveToParentViewController__1125bb948);
  if (param_3 != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + (long)_DAT_11271e768);
  if (lVar3 == 2) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010be9dfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e2a0();
    _objc_release(param_1);
  }
  else if (lVar3 == 1) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e260();
    uVar1 = param_1;
  }
  else {
    if (lVar3 != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e280();
    uVar1 = param_1;
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1051a55b4; end: 1051a55c3; -[SCBloopsSettingsPolicyViewController _selectedOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a55b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__optionAtIndex__1125791b0,*(undefined8 *)(param_1 + _DAT_11271e780));
  return;
}



/* Entry: 1051a55c4; end: 1051a5663; -[SCBloopsSettingsPolicyViewController _optionAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a55c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271e77c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0ec860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051a5664; end: 1051a5a13; -[SCBloopsSettingsPolicyViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5664(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte unaff_w28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar9 = *(ulong *)(param_1 + (long)_DAT_11271e774);
  lVar8 = param_4;
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar9,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c067fc0();
  _objc_release(uVar9);
  uVar3 = param_3;
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110dc9a38);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + (long)_DAT_11271e768);
  if (lVar8 == 2) {
    lVar8 = param_4;
    func_0x00010c142240(param_4);
    uVar2 = param_1;
    func_0x00010be6e040(param_1,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010beecec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_1 + (long)_DAT_11271e780);
    lVar8 = param_4;
    func_0x00010c142240();
    unaff_w28 = lVar11 == lVar8;
    _objc_release(uVar2);
  }
  else {
    if (lVar8 == 1) {
      uVar9 = uVar2;
      FUN_1051a4a64(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x000108e9a25c(uVar2);
      _objc_retainAutoreleasedReturnValue();
      iVar1 = _DAT_11271e778;
    }
    else {
      if (lVar8 != 0) {
        uVar4 = 0;
        uVar10 = 0;
        uVar9 = 0;
        goto LAB_1051a582c;
      }
      lVar8 = (long)_DAT_11271e770;
      uVar9 = *(ulong *)(param_1 + lVar8);
      func_0x00010c271360(uVar9,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(ulong *)(param_1 + lVar8);
      func_0x00010beecee0(uVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      iVar1 = _DAT_11271e76c;
    }
    uVar10 = 0;
    unaff_w28 = *(ulong *)(param_1 + (long)iVar1) == uVar2;
  }
LAB_1051a582c:
  lVar8 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c267f60(param_1,param_2,param_3,lVar8);
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161a60();
  _objc_release(uVar5);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a86c0();
  _objc_release(uVar5);
  _objc_release(puVar7);
  func_0x00010c08fa60();
  uVar5 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(uVar5);
  lVar8 = param_4;
  func_0x00010c142240();
  uVar2 = 0;
  if (param_1 <= lVar8 + 1U) {
    uVar2 = 4;
  }
  if (lVar8 == 0) {
    uVar2 = uVar2 + 1;
  }
  func_0x00010c20eaa0(uVar3,param_2,1,uVar2 | 10);
  if ((unaff_w28 & 1) != 0) {
    func_0x00010c158fe0(param_3,param_2,param_4,0,0);
  }
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1051a5a14; end: 1051a5aab; -[SCBloopsSettingsPolicyViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051a5a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + _DAT_11271e768) < 2) {
    unaff_x21 = *(undefined8 *)(param_1 + _DAT_11271e774);
    func_0x00010bf529e0(unaff_x21);
  }
  else if (*(ulong *)(param_1 + _DAT_11271e768) == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271e77c);
    func_0x00010c0ec860(uVar1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return unaff_x21;
}



/* Entry: 1051a5aac; end: 1051a5c0f; -[SCBloopsSettingsPolicyViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051a5aac(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11271e774);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c067fc0();
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c142240();
  *(undefined8 *)(param_1 + (long)_DAT_11271e780) = uVar6;
  lVar5 = *(long *)(param_1 + (long)_DAT_11271e768);
  if (lVar5 == 2) {
    uVar3 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar3 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9dfc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1e2c0(uVar3);
      _objc_release(param_1);
      _objc_release(uVar3);
    }
  }
  else {
    iVar1 = _DAT_11271e778;
    if ((lVar5 == 1) || (iVar1 = _DAT_11271e76c, lVar5 == 0)) {
      *(undefined8 *)(param_1 + (long)iVar1) = uVar2;
    }
  }
  func_0x00010c158fe0(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051a5c10; end: 1051a5cc7; -[SCBloopsSettingsPolicyViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_1051a5c10(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1126e6ae0;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_didSelectDismissalActionWithHead_1125bc3f8,param_3);
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e2e0();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}


