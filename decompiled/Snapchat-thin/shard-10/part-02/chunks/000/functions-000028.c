/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a26244; end: 107a26283; -[SCStoryManagementSnapViewersCollectionViewSectionHeader setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768284;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a26284; end: 107a262d3; -[SCStoryManagementSnapViewersCollectionViewSectionHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26284(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768284,0);
  _objc_storeStrong(param_1 + _DAT_11276827c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768280,0);
  return;
}



/* Entry: 107a262d4; end: 107a26797; -[SCStoryManagementSnapViewersFailedUploadCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a262d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9570;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112768288);
    *(undefined **)((long)puVar1 + (long)_DAT_112768288) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c213040(puVar2);
    puVar4 = puVar2;
    func_0x00010c21ad00(puVar2);
    func_0x000108f588ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar4);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276828c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276828c) = puVar6;
    _objc_release(uVar3);
    _objc_retain(puVar6);
    func_0x00010c219b60(puVar6);
    puVar4 = puVar6;
    func_0x00010c216380(puVar6);
    func_0x000108f588c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar6);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c1a9fc0(puVar6);
    func_0x00010c1aab40(puVar6);
    func_0x00010c16e480(puVar6);
    func_0x00010befbd60(puVar6);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    puStack_88 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    puStack_80 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2;
    puStack_78 = puVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar6;
    func_0x00010c274200(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bf493c0(0xc022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  FUN_107a1a1dc();
  func_0x000107a1a204();
  return puVar1;
}



/* Entry: 107a26798; end: 107a2682b; +[SCStoryManagementSnapViewersFailedUploadCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_107a26798(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  FUN_107a1a1dc();
  dVar2 = (param_4 - param_1) + -8.0 + -180.0 + -8.0 + -38.0;
  dVar3 = dVar2 + -16.0;
  func_0x000107a1a204();
  auVar4._8_8_ = (dVar3 - dVar2) * 0.5;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 107a2682c; end: 107a26903; -[SCStoryManagementSnapViewersFailedUploadCell _onButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2682c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d5f20;
  uVar4 = *(ulong *)(param_1 + _DAT_112768290);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112768294);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a26904; end: 107a26913; -[SCStoryManagementSnapViewersFailedUploadCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768290);
}



/* Entry: 107a26914; end: 107a26953; -[SCStoryManagementSnapViewersFailedUploadCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768290;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a26954; end: 107a26963; -[SCStoryManagementSnapViewersFailedUploadCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26954(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768294);
}



/* Entry: 107a26964; end: 107a269a3; -[SCStoryManagementSnapViewersFailedUploadCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112768294;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a269a4; end: 107a26a03; -[SCStoryManagementSnapViewersFailedUploadCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a269a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768294,0);
  _objc_storeStrong(param_1 + _DAT_112768290,0);
  _objc_storeStrong(param_1 + _DAT_11276828c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768288,0);
  return;
}



/* Entry: 107a26a04; end: 107a26dbf; -[SCStoryManagementSnapViewersPlaceholderCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a26a04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f9578;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFrame__1125e2948);
  puVar6 = (undefined *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar2);
    puVar3 = PTR_PTR_1126d5f60;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4072c00000000000,0x4072c00000000000);
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112768298);
    *(undefined **)((long)puVar2 + (long)_DAT_112768298) = puVar3;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d5f68;
    _objc_retain(puVar3);
    _objc_alloc();
    func_0x00010c003f40();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276829c);
    *(undefined **)((long)puVar2 + (long)_DAT_11276829c) = puVar5;
    _objc_release(uVar4);
    _objc_retain(puVar5);
    func_0x00010c219b60(puVar5);
    func_0x00010c20eaa0(puVar5);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5);
    _objc_release(puVar6);
    puVar7 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar7);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_88 = puVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar5;
    puStack_80 = puVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf4dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar5;
    puStack_78 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar22;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(puVar6 + _DAT_1127682a0);
  *(undefined8 **)(puVar6 + _DAT_1127682a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  func_0x00010c2226c0(*(undefined8 *)(puVar6 + _DAT_112768298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 107a26dc0; end: 107a26e27; -[SCStoryManagementSnapViewersPlaceholderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127682a0);
  *(undefined8 *)(param_1 + _DAT_1127682a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112768298),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a26e28; end: 107a26eb3; +[SCStoryManagementSnapViewersPlaceholderCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_107a26e28(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  FUN_107a1a1dc();
  dVar2 = (param_4 - param_1) + -8.0 + -180.0 + -8.0 + -38.0;
  dVar3 = dVar2 + -16.0;
  func_0x000107a1a204();
  auVar4._8_8_ = dVar3 - dVar2;
  auVar4._0_8_ = param_3;
  return auVar4;
}



/* Entry: 107a26eb4; end: 107a26ec3; -[SCStoryManagementSnapViewersPlaceholderCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26eb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682a0);
}



/* Entry: 107a26ec4; end: 107a26ed3; -[SCStoryManagementSnapViewersPlaceholderCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a26ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682a4);
}



/* Entry: 107a26ed4; end: 107a26f13; -[SCStoryManagementSnapViewersPlaceholderCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127682a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a26f14; end: 107a26f73; -[SCStoryManagementSnapViewersPlaceholderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a26f14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127682a4,0);
  _objc_storeStrong(param_1 + _DAT_1127682a0,0);
  _objc_storeStrong(param_1 + _DAT_112768298,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276829c,0);
  return;
}



/* Entry: 107a26f74; end: 107a271af; -[SCStoryManagementSnapViewersPlaceholderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107a26f74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9580;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107a271b0;
    puStack_78 = &UNK_11091a968;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127682a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127682a8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127682ac);
    *(undefined **)((long)puVar1 + (long)_DAT_1127682ac) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127682b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127682b0) = puVar2;
    _objc_release(uVar4);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c1cfce0(puVar2);
    func_0x00010c213040(puVar2);
    func_0x00010c21ad00(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010beda7c0(puVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 107a271b0; end: 107a2722f;  */

void FUN_107a271b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4f0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a27230; end: 107a2727b; -[SCStoryManagementSnapViewersPlaceholderView _loadingIndicatorView] */

void FUN_107a27230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
  func_0x00010c219b60();
  func_0x00010c1a8560(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a2727c; end: 107a272f3; -[SCStoryManagementSnapViewersPlaceholderView _imageView] */

void FUN_107a2727c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107a272f4; end: 107a27823; -[SCStoryManagementSnapViewersPlaceholderView _updateLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107a272f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127682b4;
  if (*(long *)(param_3 + lVar14) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_3 + lVar14);
    *(undefined8 *)(param_3 + lVar14) = 0;
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar15 = (long)_DAT_1127682b0;
  uVar3 = *(undefined8 *)(param_3 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf493a0(uVar3,param_4,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar15);
  uStack_80 = uVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010bf348e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0(uVar4,param_4,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + lVar15);
  uStack_78 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c2a5060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_4,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2,param_4,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar16);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(lVar10);
  _objc_release(uVar3);
  lVar16 = (long)_DAT_1127682a8;
  lVar10 = *(long *)(param_3 + lVar16);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    uVar11 = *(ulong *)(param_3 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c074c20();
    _objc_release(uVar11);
    _objc_release(lVar10);
    if ((uVar12 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar16);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010bf34860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf493a0(uVar1,param_4,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + lVar16);
      uStack_90 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c274200(uVar13);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc034000000000000;
      uVar3 = uVar8;
      func_0x00010bf493c0(0xc034000000000000,uVar8,param_4,uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_90,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2,param_4,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar10);
      _objc_release(uVar1);
      _objc_release(uVar4);
    }
  }
  lVar16 = (long)_DAT_1127682ac;
  lVar10 = *(long *)(param_3 + lVar16);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    uVar11 = *(ulong *)(param_3 + lVar16);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c074c20();
    _objc_release(uVar11);
    _objc_release(lVar10);
    if ((uVar12 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar16);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010bf34860(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bf493a0(uVar1,param_4,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_3 + lVar16);
      uStack_a0 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_3 + lVar15);
      func_0x00010c274200(uVar13);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc034000000000000;
      uVar3 = uVar8;
      func_0x00010bf493c0(0xc034000000000000,uVar8,param_4,uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_98 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_a0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar2,param_4,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar10);
      _objc_release(uVar1);
      _objc_release(uVar4);
    }
  }
  puVar9 = puVar2;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_3 + lVar14);
  *(undefined **)(param_3 + lVar14) = puVar9;
  _objc_release(uVar1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_4,
                      *(undefined8 *)(param_3 + lVar14));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  ___stack_chk_fail();
  auVar18._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar18._8_8_ = 0x4069000000000000;
  return auVar18;
}



/* Entry: 107a27824; end: 107a2783b; -[SCStoryManagementSnapViewersPlaceholderView intrinsicContentSize] */

undefined1  [16] FUN_107a27824(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4069000000000000;
  return auVar1;
}



/* Entry: 107a2783c; end: 107a27a17; -[SCStoryManagementSnapViewersPlaceholderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a2783c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127682b8;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_107a279fc;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010bfe5400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127682a8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2558c0();
      _objc_release(uVar2);
      uVar3 = *(ulong *)(param_1 + _DAT_1127682ac);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      uVar3 = param_3;
      func_0x00010bfe5400(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bea80();
    }
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127682b0),param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010beda7c0(param_1);
  }
LAB_107a279fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a27a18; end: 107a27ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a27a18(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127682a8;
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127682ac);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a27ae4; end: 107a27bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a27ae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127682ac;
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar4);
  _objc_retain(param_2);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(lVar3 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar3);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127682a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a27bf8; end: 107a27c07; -[SCStoryManagementSnapViewersPlaceholderView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a27bf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682b8);
}



/* Entry: 107a27c08; end: 107a27c77; -[SCStoryManagementSnapViewersPlaceholderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a27c08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127682b8,0);
  _objc_storeStrong(param_1 + _DAT_1127682b4,0);
  _objc_storeStrong(param_1 + _DAT_1127682b0,0);
  _objc_storeStrong(param_1 + _DAT_1127682ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127682a8,0);
  return;
}



/* Entry: 107a27c78; end: 107a27d1f; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider initWithHeaderViewModel:actionHandler:] */

undefined1 *
FUN_107a27c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9588;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a27d20; end: 107a27d27; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_107a27d20(void)

{
  return 1;
}



/* Entry: 107a27d28; end: 107a27df3; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_107a27d28(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = puVar1 + 0x20;
      _objc_loadWeakRetained();
      puVar3 = puVar1;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126d5f70;
      _objc_opt_class(PTR_PTR_1126d5f70);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar6 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar6);
      func_0x00010c161980(puVar6);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107a27df4; end: 107a27edb; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider viewForSupplementaryElementOfKind:atIndexInSection:] */

void FUN_107a27df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = uVar5;
    func_0x00010c1565c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d5f70;
    _objc_opt_class(PTR_PTR_1126d5f70);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010c2226c0(uVar5);
    func_0x00010c161980(uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107a27edc; end: 107a27f4f; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider referenceSizeForSupplementaryElementOfKind:atIndexInSection:withWidth:] */

undefined8 FUN_107a27edc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0720c0(param_4,param_3,
                      *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00);
  if ((int)param_4 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  else {
    func_0x00010c23d6e0(param_1,0x7fefffffffffffff,PTR_PTR_1126d5f70,param_3,
                        *(undefined8 *)(param_2 + 8));
  }
  return param_1;
}



/* Entry: 107a27f50; end: 107a27f57; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider supplementaryViewModels] */

undefined8 FUN_107a27f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a27f58; end: 107a27f5f; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider setSupplementaryViewModels:] */

void FUN_107a27f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a27f60; end: 107a27f77; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider supplementaryViewProviderDelegate] */

void FUN_107a27f60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a27f78; end: 107a27f83; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider setSupplementaryViewProviderDelegate:] */

void FUN_107a27f78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107a27f84; end: 107a27fc7; -[SCStoryManagementSnapViewersSupplementaryHeaderProvider .cxx_destruct] */

void FUN_107a27f84(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a27fc8; end: 107a280c7; -[SCStoryManagementSnapchatterCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107a27fc8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9590;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127682cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127682cc) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c18b5e0(puVar2);
    func_0x00010c1d0120(puVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107a280c8; end: 107a2812f; -[SCStoryManagementSnapchatterCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a280c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127682d0);
  *(undefined8 *)(param_1 + _DAT_1127682d0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_1127682d4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a28130; end: 107a281b7; -[SCStoryManagementSnapchatterCell setAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127682d8;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2284c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a281b8; end: 107a2893b; -[SCStoryManagementSnapchatterCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_107a281b8(double param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar12 = (long)_DAT_1127682dc;
  uVar1 = *(ulong *)(param_2 + lVar12);
  func_0x00010c071ae0();
  if ((uVar1 & 1) != 0) goto LAB_107a288f4;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + lVar12);
  *(undefined **)(param_2 + lVar12) = param_4;
  _objc_release(uVar2);
  param_3 = PTR_PTR_1126d5f28;
  _objc_retain(param_4);
  _objc_opt_class(param_3);
  puVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,param_3);
  puVar10 = param_4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar10 = (undefined *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(param_4);
  FUN_107a2893c(puVar10);
  func_0x00010c20eaa0(param_2);
  puVar5 = puVar10;
  func_0x00010bf13300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar12 = (long)_DAT_1127682d4;
  if (puVar5 == (undefined *)0x0) {
    *(undefined8 *)(param_2 + lVar12) = 0;
    _objc_release();
    puVar5 = param_2;
    func_0x00010c27f7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
  }
  else {
    if (*(long *)(param_2 + lVar12) == 0) {
      puVar5 = PTR_PTR_1126b1a08;
      _objc_alloc();
      func_0x00010c013de0(0,0,0x4040000000000000,0x4040000000000000);
      uVar2 = *(undefined8 *)(param_2 + lVar12);
      *(undefined **)(param_2 + lVar12) = puVar5;
      _objc_release(uVar2);
      _objc_retain(puVar5);
      func_0x00010c1d5da0(puVar5);
      param_1 = 32.0;
      func_0x00010c1e0040(0x4040000000000000,0x4040000000000000,puVar5);
      uVar2 = *(undefined8 *)(param_2 + _DAT_1127682d8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2284c0();
      _objc_release(uVar2);
      func_0x00010c1aa200(puVar5);
      func_0x00010c18b5e0(puVar5);
      puVar3 = param_2;
      func_0x00010c27f7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9fe0();
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    puVar5 = puVar10;
    func_0x00010bf13300(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar12));
  }
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010bf85d80(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c27f7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010c29e580();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar10;
    func_0x00010c29e580();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar3 == (undefined *)0x0) {
LAB_107a2847c:
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar15 = param_1;
      func_0x00010c26f320(puVar3);
      param_1 = param_1 - dVar15;
      _objc_release(puVar14);
      if (param_1 < 0.0) goto LAB_107a2847c;
      puVar4 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      if (86400.0 <= param_1) {
        func_0x00010bf65720(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
        _objc_retainAutoreleasedReturnValue();
LAB_107a284d8:
        puVar14 = puVar4;
        func_0x00010c25d400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        if (1800.0 < param_1) {
          func_0x00010c22d4a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107a284d8;
        }
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bfb59e0(0x404dffdf3b645a1d,PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar3);
  }
  puVar4 = param_2;
  func_0x00010c27f7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(puVar4);
  if (puVar5 != (undefined *)0x0) {
    _objc_release(puVar14);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010c279400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_2;
  if (puVar5 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127682e0);
    *(undefined8 *)(param_2 + _DAT_1127682e0) = 0;
    _objc_release(uVar2);
    func_0x00010c27f7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
  }
  else {
    puVar14 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x402e000000000000,0x402e000000000000);
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127682e0);
    *(undefined **)(param_2 + _DAT_1127682e0) = puVar14;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar14);
    func_0x00010c23ba80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar14);
    _objc_release(puVar5);
    puVar5 = puVar10;
    func_0x00010c279400(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c27f7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2194c0();
    _objc_release(puVar14);
  }
  _objc_release(puVar3);
  puVar5 = puVar10;
  func_0x00010c0f06e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar13 = (long)_DAT_1127682e4;
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c12c960();
    puVar5 = *(undefined **)(param_2 + lVar13);
    *(undefined8 *)(param_2 + lVar13) = 0;
  }
  else if (*(long *)(param_2 + lVar13) == 0) {
    puVar14 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4030000000000000,0x4030000000000000);
    uVar2 = *(undefined8 *)(param_2 + lVar13);
    *(undefined **)(param_2 + lVar13) = puVar14;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(puVar14);
    func_0x00010c23ba80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar14);
    _objc_release(puVar5);
    func_0x00010c182220(puVar14);
    puVar5 = puVar10;
    func_0x00010c0f06e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar14);
    _objc_release(puVar5);
    func_0x00010c219b60(puVar14);
    puVar5 = param_2;
    func_0x00010c27f7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar14;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c1408a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010bf1ff80(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  else {
    puVar5 = puVar10;
    func_0x00010c0f06e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar13));
  }
  _objc_release(puVar5);
  func_0x00010c1cbe20(param_2);
  _objc_release(puVar10);
LAB_107a288f4:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = param_4;
    return auVar16;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar10 = param_4;
  func_0x00010bfcf7e0(param_4);
  puVar5 = param_4;
  func_0x00010bf9e0a0(param_4);
  _objc_release(param_4);
  auVar17._8_8_ = puVar5;
  auVar17._0_8_ = puVar10;
  return auVar17;
}



/* Entry: 107a2893c; end: 107a2898b;  */

undefined1  [16] FUN_107a2893c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfcf7e0(param_1);
  uVar2 = param_1;
  func_0x00010bf9e0a0(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 107a2898c; end: 107a28a2f; +[SCStoryManagementSnapchatterCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107a2898c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_1;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d5f28;
  _objc_opt_class(PTR_PTR_1126d5f28);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  FUN_107a2893c(uVar1);
  _objc_release(uVar1);
  func_0x00010bfe0740(PTR_PTR_1126b2780);
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107a28a30; end: 107a28a6f; -[SCStoryManagementSnapchatterCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_107a28a30(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107a28a70; end: 107a28b53; -[SCStoryManagementSnapchatterCell handleTapOnBitmojiFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5f28;
  uVar4 = *(ulong *)(param_1 + _DAT_1127682dc);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127682e8);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a28b54; end: 107a28c37; -[SCStoryManagementSnapchatterCell handleTapOnStoryIconFromAvatarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5f28;
  uVar4 = *(ulong *)(param_1 + _DAT_1127682dc);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c2693a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127682e8);
    uVar3 = uVar1;
    func_0x00010c2693a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a28c38; end: 107a28c3b; -[SCStoryManagementSnapchatterCell handleLongPressOnStoryIconFromAvatarView:] */

void FUN_107a28c38(void)

{
  return;
}



/* Entry: 107a28c3c; end: 107a28d03; -[SCStoryManagementSnapchatterCell _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28c3c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d5f28;
  uVar4 = *(ulong *)(param_1 + _DAT_1127682dc);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127682e8);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a28d04; end: 107a28d13; -[SCStoryManagementSnapchatterCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a28d04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682dc);
}



/* Entry: 107a28d14; end: 107a28d23; -[SCStoryManagementSnapchatterCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a28d14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682e8);
}



/* Entry: 107a28d24; end: 107a28d63; -[SCStoryManagementSnapchatterCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127682e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a28d64; end: 107a28d73; -[SCStoryManagementSnapchatterCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a28d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682d0);
}



/* Entry: 107a28d74; end: 107a28d83; -[SCStoryManagementSnapchatterCell avatarFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a28d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127682d8);
}



/* Entry: 107a28d84; end: 107a28e23; -[SCStoryManagementSnapchatterCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a28d84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127682d8,0);
  _objc_storeStrong(param_1 + _DAT_1127682d0,0);
  _objc_storeStrong(param_1 + _DAT_1127682e8,0);
  _objc_storeStrong(param_1 + _DAT_1127682dc,0);
  _objc_storeStrong(param_1 + _DAT_1127682cc,0);
  _objc_storeStrong(param_1 + _DAT_1127682e4,0);
  _objc_storeStrong(param_1 + _DAT_1127682e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127682d4,0);
  return;
}



/* Entry: 107a28e24; end: 107a28feb; -[SCStoryManagementSnapCarouselCellViewModel initWithThumbnail:thumbnailBorderColor:timestampText:viewCountText:screenshotCountText:rewatchCountText:inFocusTapActionModel:outOfFocusTapActionModel:] */

undefined1 *
FUN_107a28e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f9598;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a28fec; end: 107a2900f; -[SCStoryManagementSnapCarouselCellViewModel copyWithZone:] */

undefined8 FUN_107a28fec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a29010; end: 107a290cb; -[SCStoryManagementSnapCarouselCellViewModel hash] */

undefined8 * FUN_107a29010(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107a291dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107a291e8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[8];
                    if (puVar6 != (undefined8 *)param_3[8]) {
                      func_0x00010c071ae0();
                      goto LAB_107a291e8;
                    }
                    goto LAB_107a291dc;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107a291e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107a290cc; end: 107a29203; -[SCStoryManagementSnapCarouselCellViewModel isEqual:] */

long FUN_107a290cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a291dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a291e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if (lVar3 != *(long *)(param_3 + 0x40)) {
                      func_0x00010c071ae0();
                      goto LAB_107a291e8;
                    }
                    goto LAB_107a291dc;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a291e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a29204; end: 107a2920b; -[SCStoryManagementSnapCarouselCellViewModel thumbnail] */

undefined8 FUN_107a29204(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a2920c; end: 107a29213; -[SCStoryManagementSnapCarouselCellViewModel thumbnailBorderColor] */

undefined8 FUN_107a2920c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a29214; end: 107a2921b; -[SCStoryManagementSnapCarouselCellViewModel timestampText] */

undefined8 FUN_107a29214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a2921c; end: 107a29223; -[SCStoryManagementSnapCarouselCellViewModel viewCountText] */

undefined8 FUN_107a2921c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a29224; end: 107a2922b; -[SCStoryManagementSnapCarouselCellViewModel screenshotCountText] */

undefined8 FUN_107a29224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a2922c; end: 107a29233; -[SCStoryManagementSnapCarouselCellViewModel rewatchCountText] */

undefined8 FUN_107a2922c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a29234; end: 107a2923b; -[SCStoryManagementSnapCarouselCellViewModel inFocusTapActionModel] */

undefined8 FUN_107a29234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a2923c; end: 107a29243; -[SCStoryManagementSnapCarouselCellViewModel outOfFocusTapActionModel] */

undefined8 FUN_107a2923c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a29244; end: 107a292bb; -[SCStoryManagementSnapCarouselCellViewModel .cxx_destruct] */

void FUN_107a29244(long param_1)

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



/* Entry: 107a292bc; end: 107a293f3; -[SCStoryManagementSnapDataModel initWithSnap:postingState:viewCount:screenshotCount:rewatchCount:friendViewers:otherViewers:userIdToStorySummary:showViewTimestamps:] */

undefined1 *
FUN_107a292bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f95a0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a293f4; end: 107a29417; -[SCStoryManagementSnapDataModel copyWithZone:] */

undefined8 FUN_107a293f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a29418; end: 107a294bf; -[SCStoryManagementSnapDataModel hash] */

undefined8 * FUN_107a29418(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107a295c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107a295cc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)((long)puVar3 + 8) == param_3[8])))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x38);
        if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x40);
          if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
            if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_107a295cc;
            }
            goto LAB_107a295c0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107a295cc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107a294c0; end: 107a295e7; -[SCStoryManagementSnapDataModel isEqual:] */

long FUN_107a294c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a295c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a295cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x38);
        if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x40);
          if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x48);
            if (lVar3 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071ae0();
              goto LAB_107a295cc;
            }
            goto LAB_107a295c0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a295cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a295e8; end: 107a295ef; -[SCStoryManagementSnapDataModel snap] */

undefined8 FUN_107a295e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a295f0; end: 107a295f7; -[SCStoryManagementSnapDataModel postingState] */

undefined8 FUN_107a295f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a295f8; end: 107a295ff; -[SCStoryManagementSnapDataModel viewCount] */

undefined8 FUN_107a295f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a29600; end: 107a29607; -[SCStoryManagementSnapDataModel screenshotCount] */

undefined8 FUN_107a29600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a29608; end: 107a2960f; -[SCStoryManagementSnapDataModel rewatchCount] */

undefined8 FUN_107a29608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107a29610; end: 107a29617; -[SCStoryManagementSnapDataModel friendViewers] */

undefined8 FUN_107a29610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107a29618; end: 107a2961f; -[SCStoryManagementSnapDataModel otherViewers] */

undefined8 FUN_107a29618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107a29620; end: 107a29627; -[SCStoryManagementSnapDataModel userIdToStorySummary] */

undefined8 FUN_107a29620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107a29628; end: 107a2962f; -[SCStoryManagementSnapDataModel showViewTimestamps] */

undefined1 FUN_107a29628(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107a29630; end: 107a29677; -[SCStoryManagementSnapDataModel .cxx_destruct] */

void FUN_107a29630(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107a29678; end: 107a296ef; -[SCStoryManagementSearchEvent initWithKeyword:] */

undefined1 * FUN_107a29678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f95a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a296f0; end: 107a29713; -[SCStoryManagementSearchEvent copyWithZone:] */

undefined8 FUN_107a296f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a29714; end: 107a2971b; -[SCStoryManagementSearchEvent hash] */

void FUN_107a29714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107a2971c; end: 107a297ab; -[SCStoryManagementSearchEvent isEqual:] */

long FUN_107a2971c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a29790;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107a29790;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107a29790;
    }
  }
  lVar3 = 1;
LAB_107a29790:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a297ac; end: 107a297b3; -[SCStoryManagementSearchEvent keyword] */

undefined8 FUN_107a297ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a297b4; end: 107a297bf; -[SCStoryManagementSearchEvent .cxx_destruct] */

void FUN_107a297b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a297c0; end: 107a298f7; -[SCStoryManagementSnapViewersSectionDataModel initWithSectionIdentifier:query:headerViewModel:snapDataModel:viewers:] */

undefined1 *
FUN_107a297c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f95b0;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a298f8; end: 107a2991b; -[SCStoryManagementSnapViewersSectionDataModel copyWithZone:] */

undefined8 FUN_107a298f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107a2991c; end: 107a299b3; -[SCStoryManagementSnapViewersSectionDataModel hash] */

undefined8 * FUN_107a2991c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107a29a7c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107a29a88;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107a29a88;
              }
              goto LAB_107a29a7c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107a29a88:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107a299b4; end: 107a29aa3; -[SCStoryManagementSnapViewersSectionDataModel isEqual:] */

long FUN_107a299b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107a29a7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107a29a88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107a29a88;
              }
              goto LAB_107a29a7c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107a29a88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107a29aa4; end: 107a29aab; -[SCStoryManagementSnapViewersSectionDataModel sectionIdentifier] */

undefined8 FUN_107a29aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a29aac; end: 107a29ab3; -[SCStoryManagementSnapViewersSectionDataModel query] */

undefined8 FUN_107a29aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a29ab4; end: 107a29abb; -[SCStoryManagementSnapViewersSectionDataModel headerViewModel] */

undefined8 FUN_107a29ab4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107a29abc; end: 107a29ac3; -[SCStoryManagementSnapViewersSectionDataModel snapDataModel] */

undefined8 FUN_107a29abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107a29ac4; end: 107a29acb; -[SCStoryManagementSnapViewersSectionDataModel viewers] */

undefined8 FUN_107a29ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107a29acc; end: 107a29b1f; -[SCStoryManagementSnapViewersSectionDataModel .cxx_destruct] */

void FUN_107a29acc(long param_1)

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



/* Entry: 107a29b20; end: 107a29cc7; -[SCStoryManagementSnapchatterCellViewModel initWithAvatarViewModel:displayName:trailingIcon:ownerIcon:groupingStyle:externalEdges:tapActionModel:tapStoryActionModel:viewTimestamp:] */

undefined1 *
FUN_107a29b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f95b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107a29cc8; end: 107a29ceb; -[SCStoryManagementSnapchatterCellViewModel copyWithZone:] */

undefined8 FUN_107a29cc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


