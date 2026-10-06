/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e5f630; end: 108e5f6a7; -[SCSnapcodeStickerView loggingParameters] */

undefined ** FUN_108e5f630(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dbe6d8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110efc418;
}



/* Entry: 108e5f6a8; end: 108e5f6b3; -[SCSnapcodeStickerView shortLoggingName] */

undefined ** FUN_108e5f6a8(void)

{
  return &PTR____CFConstantStringClassReference_110efc418;
}



/* Entry: 108e5f6b4; end: 108e5f6d7; -[SCSnapcodeStickerView copyWithZone:] */

undefined8 FUN_108e5f6b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e5f6d8; end: 108e5f83f; -[SCSnapcodeStickerView tappableElementBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f6d8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00();
  lVar10 = (long)_DAT_11277c710;
  dVar16 = param_3;
  dVar17 = param_4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar10));
  dVar12 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar13 = param_1;
  dVar15 = param_2;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar17 = dVar17 / dVar13;
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar10));
  dVar14 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f40(0x3fc5c28f5c28f5c3,dVar16 / dVar12,dVar17,dVar13 / dVar14,dVar15 / param_1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar3 = PTR_PTR_1126dc320;
    _objc_opt_new(PTR_PTR_1126dc320);
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar6 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    func_0x00010c21acc0();
    lVar9 = (long)_DAT_11277c708;
    uVar7 = *(undefined8 *)(puVar1 + lVar9);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x000107c3094c();
    if ((int)uVar8 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar11);
    }
    func_0x00010c21e620(puVar3);
    _objc_release(puVar11);
    _objc_release(uVar7);
    func_0x00010c227120(puVar3);
    uVar8 = *(undefined8 *)(puVar1 + lVar9);
    func_0x00010bf85d80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18fca0(puVar3);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(puVar1 + lVar9);
    func_0x00010c294420(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ecc0(puVar3);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(puVar1 + lVar9);
    func_0x00010bf1acc0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar3);
    _objc_release(uVar8);
    func_0x00010c1ac500(puVar5);
    func_0x00010c196600(puVar4);
    func_0x00010c1b5d40(puVar2);
    puVar1 = puVar2;
    func_0x00010c0cc0c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206080();
    _objc_release(puVar11);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e5f840; end: 108e5fa5f; -[SCSnapcodeStickerView _updateItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e5f840(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126dc320;
  _objc_opt_new(PTR_PTR_1126dc320);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  lVar10 = (long)_DAT_11277c708;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000107c3094c();
  if ((int)uVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar9);
  }
  func_0x00010c21e620(puVar2);
  _objc_release(puVar9);
  _objc_release(uVar6);
  func_0x00010c227120(puVar2);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf85d80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c294420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ecc0(puVar2);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf1acc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar2);
  _objc_release(uVar7);
  func_0x00010c1ac500(puVar4);
  func_0x00010c196600(puVar3);
  func_0x00010c1b5d40(puVar1);
  puVar9 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206080();
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e5fa60; end: 108e5fc2b; +[SCSnapcodeStickerView _fetchCurrentSnapcodeForViewModel:width:completionBlock:] */

void FUN_108e5fa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b0870;
  _objc_alloc();
  func_0x00010c013de0(0,0,param_1,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108e5fc2c;
  uStack_70 = 0x108e5fc3c;
  uStack_68 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108e5fc44;
  puStack_b0 = &UNK_1108ac4a8;
  puStack_98 = &uStack_90;
  puStack_88 = &uStack_90;
  _objc_retain();
  puStack_a8 = puVar2;
  uStack_a0 = param_5;
  _objc_retain(param_5);
  ppuVar3 = &puStack_c8;
  _objc_retainBlock();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108e5fdc4;
  puStack_f0 = &UNK_110883410;
  uStack_e8 = param_4;
  puStack_e0 = puVar2;
  ppuStack_d8 = ppuVar3;
  puStack_d0 = &uStack_90;
  _objc_retain(puVar2);
  _objc_retain(ppuVar3);
  _objc_retain(param_4);
  ppuVar4 = &puStack_108;
  _objc_retainBlock(ppuVar4);
  uVar5 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(puStack_e0);
  _objc_release(ppuStack_d8);
  _objc_release(uStack_e8);
  _objc_release(ppuVar3);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 108e5fc2c; end: 108e5fc43;  */

void FUN_108e5fc2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e5fc44; end: 108e5fdc3;  */

void FUN_108e5fc44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x108e5fd0c;
  puStack_58 = &UNK_110883410;
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 108e5fdc4; end: 108e5ff2f;  */

void FUN_108e5fdc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126b19a0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2942c0(puVar2,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae820;
  func_0x00010c0860a0(PTR_PTR_1126ae820,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dc328;
  _objc_alloc();
  func_0x00010c0004a0();
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b19a8;
  _objc_alloc(PTR_PTR_1126b19a8);
  func_0x00010c0566a0();
  puVar5 = puVar4;
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bdb40;
  _objc_opt_class(PTR_PTR_1126bdb40);
  puVar7 = puVar5;
  func_0x00010beecc40(puVar5,param_2,puVar6,&PTR___NSConcreteGlobalBlock_110ac75b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010bfe63a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e5ff30; end: 108e5ff37;  */

void FUN_108e5ff30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c245130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapcodeScopeLauncher_11266ee70);
  return;
}



/* Entry: 108e5ff38; end: 108e600cf; +[SCSnapcodeStickerView viewModelForStyle:] */

void FUN_108e5ff38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  FUN_108f22bfc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126dc318;
  _objc_alloc(PTR_PTR_1126dc318);
  lVar1 = lVar3;
  func_0x00010c2923e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf85d80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c294420(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf1acc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf1c0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar9 = lVar8;
  func_0x00010b77f210(lVar8);
  func_0x00010c05b1a0(puVar4,param_2,lVar1,lVar2,lVar5,lVar6,lVar7,lVar9 == 0x255e6029,1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e600d0; end: 108e6024f; +[SCSnapcodeStickerView viewModelForStickerPicker] */

void FUN_108e600d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_108f22bfc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126dc318;
  _objc_alloc(PTR_PTR_1126dc318);
  uVar1 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf1bae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b1a0(puVar3,param_2,uVar1,uVar4,uVar5,uVar7,uVar9,0,0);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e60250; end: 108e6031f; +[SCSnapcodeStickerView generateSnapcodeForStickerPicker] */

void FUN_108e60250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126bb318;
  func_0x00010c29d860(PTR_PTR_1126bb318);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126bb318;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e60320;
  puStack_40 = &UNK_11084d858;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010be10b80(0x4059000000000000,puVar3,param_2,puVar1,&puStack_58);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e60320; end: 108e6032b;  */

void FUN_108e60320(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 108e6032c; end: 108e603f7; +[SCSnapcodeStickerView generateSnapcodeStickerForViewModel:] */

void FUN_108e6032c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126bb318;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108e603f8;
  puStack_40 = &UNK_11084d858;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be10b80(0x4064000000000000,puVar2,param_2,param_3,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e603f8; end: 108e60403;  */

void FUN_108e603f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 108e60404; end: 108e6043f; +[SCSnapcodeStickerView stringForDisplayUserTag:] */

void FUN_108e60404(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efc438;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110efc458;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e60440; end: 108e6044f; -[SCSnapcodeStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e60440(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c70c);
}



/* Entry: 108e60450; end: 108e6045f; -[SCSnapcodeStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e60450(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c6fc);
}



/* Entry: 108e60460; end: 108e6046f; -[SCSnapcodeStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e60460(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c6f8);
}



/* Entry: 108e60470; end: 108e6047f; -[SCSnapcodeStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60470(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c6f8) = param_3;
  return;
}



/* Entry: 108e60480; end: 108e6048f; -[SCSnapcodeStickerView config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e60480(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c71c);
}



/* Entry: 108e60490; end: 108e6053f; -[SCSnapcodeStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60490(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c71c,0);
  _objc_storeStrong(param_1 + _DAT_11277c6fc,0);
  _objc_storeStrong(param_1 + _DAT_11277c70c,0);
  _objc_storeStrong(param_1 + _DAT_11277c704,0);
  _objc_storeStrong(param_1 + _DAT_11277c720,0);
  _objc_storeStrong(param_1 + _DAT_11277c708,0);
  _objc_storeStrong(param_1 + _DAT_11277c718,0);
  _objc_storeStrong(param_1 + _DAT_11277c714,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c710,0);
  return;
}



/* Entry: 108e60540; end: 108e605b7; -[SCSnapcodeStickerViewSnapcodeDelegate initWithCompletionBlock:] */

undefined1 * FUN_108e60540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fec18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e605b8; end: 108e605fb; -[SCSnapcodeStickerViewSnapcodeDelegate snapcodeDidLoadWithError:] */

void FUN_108e605b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108e605fc; end: 108e60607; -[SCSnapcodeStickerViewSnapcodeDelegate .cxx_destruct] */

void FUN_108e605fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e60608; end: 108e60be7; -[SCTextEntryStickerView initWithStickerPillViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108e60608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126fec20;
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar5 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    lVar15 = (long)_DAT_11277c728;
    *(undefined8 *)((long)puVar1 + lVar15) = param_3;
    puVar5 = PTR_PTR_1126d4fa8;
    _objc_alloc();
    puVar8 = puVar1;
    func_0x00010bf6a6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfe5400(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe59c0(puVar1);
    func_0x00010c051400();
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar2 = PTR_PTR_1126d4fb0;
    _objc_alloc();
    puStack_b8 = puVar5;
    func_0x00010c061ce0();
    lVar13 = (long)_DAT_11277c72c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(puVar1);
    puVar5 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc_init();
    lVar14 = (long)_DAT_11277c730;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar5;
    _objc_release(uVar12);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1b6da0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c16d0c0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c26b8c0(puVar1);
    func_0x00010c16d0a0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar14));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar5);
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar5);
    puVar8 = puVar1;
    func_0x00010c0fda20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0c20(puVar1);
    _objc_release(puVar8);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    if (*(long *)((long)puVar1 + lVar15) == 1) {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      uStack_e0 = uVar12;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uVar12;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar14);
      uStack_c8 = uVar12;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c08de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar3;
      func_0x00010bf49460();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar3;
      uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c2793a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf49500();
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = uVar9;
      puVar5 = *(undefined **)((long)puVar1 + lVar14);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010bf1ff80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_d8);
      uVar12 = uStack_e0;
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(uVar6);
    }
    else {
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined8 **)((long)puVar1 + lVar13);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar12;
      puStack_c0 = puVar8;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uVar9;
      uVar3 = *(undefined8 *)((long)puVar1 + lVar14);
      uStack_c8 = uVar9;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined8 **)((long)puVar1 + lVar13);
      func_0x00010c08de00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar3;
      func_0x00010bf493c0(0x4041000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uVar3;
      uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = *(undefined8 **)((long)puVar1 + lVar13);
      func_0x00010c2793a0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493c0(0xc030000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_90 = uVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_d8);
    }
    _objc_release(puVar5);
    _objc_release(uVar9);
    _objc_release(puVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(uStack_d0);
    _objc_release(uStack_c8);
    _objc_release(puStack_c0);
    _objc_release(uVar12);
    puVar8 = puVar1;
    func_0x00010bf6a6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c09e940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar5 = puStack_b8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_100;
  pcStack_e8 = FUN_108e60be8;
  puStack_f8 = PTR_PTR_1126fec20;
  puStack_100 = puVar5;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_100,PTR_s_init_1125d9248);
  return ppuVar11;
}



/* Entry: 108e60be8; end: 108e60c1b; -[SCTextEntryStickerView initWithCoder:] */

void FUN_108e60be8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fec20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108e60c1c; end: 108e60c1f; -[SCTextEntryStickerView setText:] */

void FUN_108e60c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStickerForText__112595cb8);
  return;
}



/* Entry: 108e60c20; end: 108e60c2f; -[SCTextEntryStickerView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c730),PTR_s_text_1126787e8);
  return;
}



/* Entry: 108e60c30; end: 108e60c37; -[SCTextEntryStickerView defaultText] */

undefined8 FUN_108e60c30(void)

{
  return 0;
}



/* Entry: 108e60c38; end: 108e60c3f; -[SCTextEntryStickerView iconRenderingMode] */

undefined8 FUN_108e60c38(void)

{
  return 2;
}



/* Entry: 108e60c40; end: 108e60c47; -[SCTextEntryStickerView textAutocapitalizationType] */

undefined8 FUN_108e60c40(void)

{
  return 3;
}



/* Entry: 108e60c48; end: 108e60c4f; -[SCTextEntryStickerView textAutocorrectionType] */

undefined8 FUN_108e60c48(void)

{
  return 2;
}



/* Entry: 108e60c50; end: 108e60d33; -[SCTextEntryStickerView updateWithInfoFromStickerView:] */

void FUN_108e60c50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dc330;
  _objc_opt_class(PTR_PTR_1126dc330);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(param_1);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e60d34; end: 108e60d43; -[SCTextEntryStickerView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277c730),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108e60d44; end: 108e60d6b; -[SCTextEntryStickerView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108e60d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11277c72c));
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 108e60d6c; end: 108e60d6f; -[SCTextEntryStickerView sizeThatFits:] */

void FUN_108e60d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 108e60d70; end: 108e60e03; -[SCTextEntryStickerView tappableElementBounds] */

undefined * FUN_108e60d70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010c26c160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c26c160();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar1 + 0x10))();
    _objc_release(puVar1);
  }
  return (undefined *)0x0;
}



/* Entry: 108e60e04; end: 108e60e5f; -[SCTextEntryStickerView textFieldShouldReturn:] */

undefined8 FUN_108e60e04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c26c160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c26c160();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  return 0;
}



/* Entry: 108e60e60; end: 108e60e67; -[SCTextEntryStickerView infoType] */

undefined8 FUN_108e60e60(void)

{
  return 0x19;
}



/* Entry: 108e60e68; end: 108e60e77; -[SCTextEntryStickerView intrinsicSize] */

undefined1  [16] FUN_108e60e68(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e60e78; end: 108e60e7f; -[SCTextEntryStickerView toCTPItem] */

undefined8 FUN_108e60e78(void)

{
  return 0;
}



/* Entry: 108e60e80; end: 108e60e87; -[SCTextEntryStickerView toCTItemInstance] */

undefined8 FUN_108e60e80(void)

{
  return 0;
}



/* Entry: 108e60e88; end: 108e60e8f; -[SCTextEntryStickerView type] */

undefined8 FUN_108e60e88(void)

{
  return 0;
}



/* Entry: 108e60e90; end: 108e60e97; -[SCTextEntryStickerView packId] */

undefined8 FUN_108e60e90(void)

{
  return 0;
}



/* Entry: 108e60e98; end: 108e60e9f; -[SCTextEntryStickerView stickerId] */

undefined8 FUN_108e60e98(void)

{
  return 0;
}



/* Entry: 108e60ea0; end: 108e60ea7; -[SCTextEntryStickerView loggingParameters] */

undefined8 FUN_108e60ea0(void)

{
  return 0;
}



/* Entry: 108e60ea8; end: 108e60eaf; -[SCTextEntryStickerView shortLoggingName] */

undefined8 FUN_108e60ea8(void)

{
  return 0;
}



/* Entry: 108e60eb0; end: 108e60eb7; -[SCTextEntryStickerView scaleLimit] */

undefined8 FUN_108e60eb0(void)

{
  return 0;
}



/* Entry: 108e60eb8; end: 108e60ebb; -[SCTextEntryStickerView encodeWithCoder:] */

void FUN_108e60eb8(void)

{
  return;
}



/* Entry: 108e60ebc; end: 108e60edf; -[SCTextEntryStickerView copyWithZone:] */

undefined8 FUN_108e60ebc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e60ee0; end: 108e60feb; -[SCTextEntryStickerView setIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11277c734;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d4fa8;
    _objc_alloc(PTR_PTR_1126d4fa8);
    lVar5 = param_1;
    func_0x00010bf6a6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277c728);
    lVar4 = param_1;
    func_0x00010bfe59c0(param_1);
    func_0x00010c051400(puVar3,param_2,lVar5,0,param_3,uVar2,lVar4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11277c72c),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010c26b700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee0c40(param_1,param_2,lVar5);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e60fec; end: 108e61057; -[SCTextEntryStickerView setPlaceholderText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e60fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277c738;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bee0c20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e61058; end: 108e610ff; -[SCTextEntryStickerView _textFieldDidChange:] */

void FUN_108e61058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c069fa0(param_1);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010c26c140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c26c140();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  func_0x00010c212f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e61100; end: 108e6123b; -[SCTextEntryStickerView _updateStickerForText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61100(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26b8c0();
  if (lVar1 == 3) {
    lVar1 = param_3;
    func_0x00010c09e940(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)(param_1 + _DAT_11277c730);
    func_0x00010c212f20(*puVar5,param_2,lVar1);
    _objc_release(lVar1);
  }
  else {
    puVar5 = (undefined8 *)(param_1 + _DAT_11277c730);
    func_0x00010c212f20(*puVar5,param_2,param_3);
  }
  lVar6 = (long)_DAT_11277c72c;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar2 = *puVar5;
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bee0c00(param_1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*puVar5,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c19f0e0(param_1);
  func_0x00010c069fa0(param_1);
  func_0x00010c08cdc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e6123c; end: 108e612f7; -[SCTextEntryStickerView _updateStickerForPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6123c(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = (long)_DAT_11277c72c;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar2));
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar2));
  lVar3 = (long)_DAT_11277c730;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar2));
  func_0x00010c19f0e0(param_1,param_2,dVar4 + 34.0 + 16.0,*(undefined8 *)(param_3 + lVar2));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_3 + lVar3),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e612f8; end: 108e61483; -[SCTextEntryStickerView _updateStickerForPlaceholderText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108e612f8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  uStack_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3ff0000000000000,0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2,param_2,ppuVar1,puVar4);
  _objc_release(param_3);
  lVar6 = (long)_DAT_11277c730;
  func_0x00010c16b680(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar5 = *(long *)(param_1 + lVar6);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release();
  if (lVar6 == 0) {
    func_0x00010bee0c00(param_1);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11277c72c));
    func_0x00010c19f0e0(param_1);
    func_0x00010c069fa0(param_1);
    func_0x00010c08cdc0();
    lVar5 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar5;
  }
  ___stack_chk_fail();
  return *(long *)(lVar5 + _DAT_11277c73c);
}



/* Entry: 108e61484; end: 108e61493; -[SCTextEntryStickerView textInputDidChangeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e61484(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c73c);
}



/* Entry: 108e61494; end: 108e6149f; -[SCTextEntryStickerView setTextInputDidChangeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61494(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e614a0; end: 108e614af; -[SCTextEntryStickerView textInputDidReturnBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e614a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c740);
}



/* Entry: 108e614b0; end: 108e614bb; -[SCTextEntryStickerView setTextInputDidReturnBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e614b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108e614bc; end: 108e614cb; -[SCTextEntryStickerView stickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e614bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c72c);
}



/* Entry: 108e614cc; end: 108e6150b; -[SCTextEntryStickerView setStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e614cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277c72c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e6150c; end: 108e6151b; -[SCTextEntryStickerView icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6150c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c734);
}



/* Entry: 108e6151c; end: 108e6152b; -[SCTextEntryStickerView placeholderText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e6151c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c738);
}



/* Entry: 108e6152c; end: 108e615ab; -[SCTextEntryStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6152c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277c738,0);
  _objc_storeStrong(param_1 + _DAT_11277c734,0);
  _objc_storeStrong(param_1 + _DAT_11277c72c,0);
  _objc_storeStrong(param_1 + _DAT_11277c740,0);
  _objc_storeStrong(param_1 + _DAT_11277c73c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c730,0);
  return;
}



/* Entry: 108e615ac; end: 108e6167f; -[SCTimestampStickerView initWithFrame:time:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e615ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fec28;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_7;
    func_0x00010c27dd80();
    uVar1 = 2;
    if (lVar3 != 0x45eeabef) {
      uVar1 = (ulong)(lVar3 == -0x4c705913);
    }
    *(ulong *)((long)puVar2 + (long)_DAT_11277c744) = uVar1;
    func_0x00010be3aec0(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar2;
}



/* Entry: 108e61680; end: 108e61933; -[SCTimestampStickerView initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e61680(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126fec28;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277c748) = 1;
    lVar11 = (long)_DAT_11277c74c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(long *)((long)puVar1 + lVar11) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba8d8;
    _objc_alloc(PTR_PTR_1126ba8d8);
    func_0x00010c01dac0();
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c750);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c750) = puVar4;
    _objc_release(uVar2);
    lVar11 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf654e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar11);
    func_0x00010c27dd80(lVar6);
    puVar7 = (undefined1 *)puVar1;
    func_0x00010becbee0();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    *(undefined1 **)((long)puVar1 + (long)_DAT_11277c744) = puVar7;
    lVar11 = lVar6;
    func_0x00010c26f000(lVar6);
    func_0x00010bf655e0((double)lVar11 / 1000.0,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c270d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar11;
    func_0x00010c08fa60();
    puVar8 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    if (lVar5 == 0) {
      puVar9 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
      func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar5 = lVar6;
      func_0x00010c270d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26fda0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar8);
        puVar9 = puVar8;
      }
      _objc_release(puVar8);
      _objc_release(lVar5);
    }
    _objc_release(lVar11);
    puVar8 = PTR_PTR_1126d2760;
    _objc_alloc(PTR_PTR_1126d2760);
    puVar10 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009540(puVar8);
    _objc_release(puVar10);
    func_0x00010be3aec0(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(lVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e61934; end: 108e61a3f; -[SCTimestampStickerView _initWithTimestampMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277c754;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c26fc80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215860(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c758);
  *(undefined8 *)(param_1 + _DAT_11277c758) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c75c);
  *(undefined8 *)(param_1 + _DAT_11277c75c) = uVar2;
  _objc_release(uVar3);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010bed6860(param_1,param_2,&uStack_70);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277c760));
  _objc_release(param_3);
  return;
}



/* Entry: 108e61a40; end: 108e61b83; -[SCTimestampStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61a40(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fec28;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(param_2 + _DAT_11277c764 + *(long *)(param_2 + _DAT_11277c744) * 8);
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010bf20c00(lVar1);
    _CGRectGetWidth();
    dVar3 = param_1;
    func_0x00010bf20c00(lVar1);
    _CGRectGetHeight();
    if ((0.0 < param_1) && (0.0 < dVar3)) {
      dVar2 = dVar3;
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
      param_1 = dVar2 / param_1;
      func_0x00010bf20c00(param_2);
      _CGRectGetHeight();
      if (dVar2 / dVar3 <= param_1) {
        param_1 = dVar2 / dVar3;
      }
      uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      _CGAffineTransformScale(&uStack_70,param_1,param_1,&uStack_a0);
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      dStack_80 = dStack_50;
      func_0x00010c219960(lVar1);
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
      dVar3 = dStack_50 * 0.5;
      func_0x00010bf20c00(param_2);
      _CGRectGetHeight();
      func_0x00010c17a6a0(dVar3,dStack_50 * 0.5,lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108e61b84; end: 108e61bd7; -[SCTimestampStickerView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277c760;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108e61bd8; end: 108e61c3b; -[SCTimestampStickerView _updateCurrentViewAndTransformWith:center:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61bd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = param_5[1];
  uStack_60 = *param_5;
  uStack_48 = param_5[3];
  uStack_50 = param_5[2];
  uStack_38 = param_5[5];
  uStack_40 = param_5[4];
  func_0x00010bed6860(param_3,param_4,&uStack_60);
  func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_11277c760));
  return;
}



/* Entry: 108e61c3c; end: 108e61db3; -[SCTimestampStickerView _updateCurrentViewAndTransformWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61c3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + _DAT_11277c764;
  lVar5 = (long)_DAT_11277c744;
  lVar3 = *(long *)(param_1 + lVar5);
  lVar4 = *(long *)(lVar1 + lVar3 * 8);
  if (lVar4 != 0) goto LAB_108e61cf4;
  lVar4 = param_1;
  if (lVar3 == 2) {
    func_0x00010bf01c20();
    _objc_retainAutoreleasedReturnValue();
LAB_108e61ccc:
    lVar3 = *(long *)(param_1 + lVar5);
    uVar2 = *(undefined8 *)(lVar1 + lVar3 * 8);
  }
  else {
    if (lVar3 == 1) {
      func_0x00010c0df980();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e61ccc;
    }
    if (lVar3 == 0) {
      func_0x00010c270ca0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108e61ccc;
    }
    uVar2 = 0;
    lVar4 = 0;
  }
  *(long *)(lVar1 + lVar3 * 8) = lVar4;
  _objc_release(uVar2);
  lVar4 = *(long *)(lVar1 + *(long *)(param_1 + lVar5) * 8);
LAB_108e61cf4:
  lVar3 = (long)_DAT_11277c760;
  _objc_retain(lVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar4;
  _objc_release(uVar2);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  uStack_58 = param_3[5];
  uVar6 = param_3[4];
  uStack_60 = uVar6;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_80);
  lVar1 = param_1;
  func_0x00010bed9f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c74c);
  *(long *)(param_1 + _DAT_11277c74c) = lVar1;
  _objc_release(uVar2);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  _CGRectGetWidth();
  uVar2 = uVar6;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  _CGRectGetHeight();
  func_0x00010c19f0e0(0,0,uVar6,uVar2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19f0e0(param_1);
  return;
}



/* Entry: 108e61db4; end: 108e6241b; -[SCTimestampStickerView timestampView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e61db4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11277c758;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010bfd3fe0();
  dVar12 = 49.0;
  if (iVar2 == 0) {
    dVar12 = 19.0;
  }
  lVar4 = *(long *)(param_1 + lVar11);
  func_0x00010bfe47a0();
  if (lVar4 == 1) {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110efc4b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    dVar12 = dVar12 + 25.0;
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(param_1 + lVar11);
    func_0x00010bfe47a0();
    if (lVar4 - 10U < 10) {
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110efc4b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar5);
      _objc_release(puVar5);
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfe47a0();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110efc4d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8220(puVar10,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar5);
      dVar12 = dVar12 + 85.0;
      lVar4 = 2;
    }
    else {
      lVar4 = *(long *)(param_1 + lVar11);
      func_0x00010bfe47a0();
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar4 + 9U < 0x13) {
        lVar4 = 1;
      }
      else {
        func_0x00010bfe47a0();
        func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110efc4d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe8220(puVar10,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3,param_2,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar5);
        dVar12 = dVar12 + 60.0;
        lVar4 = 2;
      }
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfe47a0();
      func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110efc4d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8220(puVar10,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar5);
      dVar12 = dVar12 + 60.0;
    }
  }
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0ce880();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110efc4d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220(puVar10,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar5);
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0ce880();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110efc4d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220(puVar10,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar5);
  dVar13 = 120.0;
  func_0x00010bfb68e0(param_1);
  _CGRectGetWidth();
  dVar13 = dVar13 - (dVar12 + 120.0);
  dVar14 = dVar13 * 0.5;
  func_0x00010bfb68e0(param_1);
  _CGRectGetHeight();
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(dVar14,(dVar13 + -100.0) * 0.5,dVar12 + 120.0,0x4059000000000000);
  puVar10 = puVar3;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    dVar12 = 0.0;
  }
  else {
    puVar10 = (undefined *)0x0;
    dVar12 = 0.0;
    do {
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      puVar7 = puVar3;
      func_0x00010c0dfd40(puVar3,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      func_0x00010bfb68e0(puVar6);
      _CGRectGetWidth();
      func_0x00010c19f0e0(dVar12,0,dVar14,0x4059000000000000,puVar6);
      func_0x00010befbb60(puVar5,param_2,puVar6);
      func_0x00010bfb68e0(puVar6);
      _CGRectGetMaxX();
      dVar14 = dVar12;
      if ((undefined *)(lVar4 - 1U) == puVar10) {
        puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110efc4f8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60(puVar7,param_2,puVar8);
        _objc_release(puVar8);
        func_0x00010c19f0e0(dVar12,0,0x4033000000000000,0x4059000000000000,puVar7);
        func_0x00010befbb60(puVar5,param_2,puVar7);
        func_0x00010bfb68e0(puVar7);
        _CGRectGetMaxX();
        dVar14 = dVar12;
        _objc_release(puVar7);
      }
      puVar10 = puVar10 + 1;
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010bf529e0();
    } while (puVar10 < puVar6);
  }
  uVar9 = *(ulong *)(param_1 + lVar11);
  func_0x00010bfd3fe0();
  puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((uVar9 & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + lVar11);
    func_0x00010c06bf80();
    ppuVar1 = &PTR____CFConstantStringClassReference_110efc518;
    if (iVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110efc538;
    }
    func_0x00010bfe8220(puVar10,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c19f0e0(dVar12,0,0x403e000000000000,0x4059000000000000);
    func_0x00010befbb60(puVar5,param_2,puVar6);
    dVar12 = dVar12 + 30.0;
    _objc_release(puVar6);
    _objc_release(puVar10);
  }
  func_0x00010c19f0e0(0,0,dVar12,0x4059000000000000,puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e6241c; end: 108e625af; -[SCTimestampStickerView numericView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6241c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf650c0(puVar2,param_3,&PTR____CFConstantStringClassReference_110efc558,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277c754;
  func_0x00010c189b60(*(undefined8 *)(param_2 + lVar5),param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010bf20c00(param_2);
  func_0x00010c013de0(puVar1);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c25d400(uVar3,param_3,*(undefined8 *)(param_2 + _DAT_11277c75c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010c127e40(param_1 / 6.5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
  func_0x00010bf345e0(param_2);
  func_0x00010c17a6a0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e625b0; end: 108e6272b; -[SCTimestampStickerView alphabeticView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e625b0(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277c754;
  func_0x00010c189c20(*(undefined8 *)(param_2 + lVar6),param_3,3);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(*(undefined8 *)(param_2 + lVar6),param_3,puVar1);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010bf20c00(param_2);
  func_0x00010c013de0(puVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c25d400(uVar3,param_3,*(undefined8 *)(param_2 + _DAT_11277c75c));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  func_0x00010bf1ecc0(param_1 / 12.0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010c23d620(puVar2);
  func_0x00010bf345e0(param_2);
  func_0x00010c17a6a0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e6272c; end: 108e62853; -[SCTimestampStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6272c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = (long)_DAT_11277c760;
  func_0x00010c12c960(*(undefined8 *)(param_2 + lVar5));
  uVar1 = *(long *)(param_2 + _DAT_11277c744) + 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  *(ulong *)(param_2 + _DAT_11277c744) =
       uVar1 - ((SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar1 / 3);
  if (*(long *)(param_2 + lVar5) == 0) {
    param_1 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uVar3 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_70);
    uVar3 = *(undefined8 *)(param_2 + lVar5);
  }
  func_0x00010bf345e0(uVar3);
  func_0x00010bed6880(param_2,param_3,&uStack_70);
  lVar4 = param_2;
  func_0x00010c0cc2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
  _objc_release(lVar4);
  func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
  _CGRectGetWidth();
  uVar3 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
  _CGRectGetHeight();
  func_0x00010c19f0e0(0,0,param_1,uVar3,*(undefined8 *)(param_2 + lVar5));
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar5));
  func_0x00010c19f0e0(param_2);
  return;
}



/* Entry: 108e62854; end: 108e628f3; -[SCTimestampStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e62854(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277c760);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,uVar3,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e628f4; end: 108e628f7; -[SCTimestampStickerView willDisplay] */

void FUN_108e628f4(void)

{
  return;
}



/* Entry: 108e628f8; end: 108e628fb; -[SCTimestampStickerView didEndDisplay] */

void FUN_108e628f8(void)

{
  return;
}



/* Entry: 108e628fc; end: 108e628ff; -[SCTimestampStickerView encodeWithCoder:] */

void FUN_108e628fc(void)

{
  return;
}



/* Entry: 108e62900; end: 108e62923; -[SCTimestampStickerView copyWithZone:] */

undefined8 FUN_108e62900(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e62924; end: 108e6292b; -[SCTimestampStickerView loggingParameters] */

undefined8 FUN_108e62924(void)

{
  return 0;
}



/* Entry: 108e6292c; end: 108e62937; -[SCTimestampStickerView packId] */

undefined ** FUN_108e6292c(void)

{
  return &PTR____CFConstantStringClassReference_110e9f2d8;
}



/* Entry: 108e62938; end: 108e62943; -[SCTimestampStickerView shortLoggingName] */

undefined ** FUN_108e62938(void)

{
  return &PTR____CFConstantStringClassReference_110efc498;
}



/* Entry: 108e62944; end: 108e6294b; -[SCTimestampStickerView stickerId] */

undefined8 FUN_108e62944(void)

{
  return 0;
}



/* Entry: 108e6294c; end: 108e6297b; -[SCTimestampStickerView toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6294c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c74c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e6297c; end: 108e629ab; -[SCTimestampStickerView toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e6297c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277c750);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e629ac; end: 108e629b3; -[SCTimestampStickerView infoType] */

undefined8 FUN_108e629ac(void)

{
  return 0;
}



/* Entry: 108e629b4; end: 108e629bb; -[SCTimestampStickerView type] */

undefined8 FUN_108e629b4(void)

{
  return 6;
}



/* Entry: 108e629bc; end: 108e629cb; -[SCTimestampStickerView intrinsicSize] */

undefined1  [16] FUN_108e629bc(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108e629cc; end: 108e62b8f; -[SCTimestampStickerView _updateItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e629cc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126dc338;
  _objc_opt_new(PTR_PTR_1126dc338);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar5 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  lVar6 = param_2;
  func_0x00010bdf8120(param_2,param_3,*(undefined8 *)(param_2 + _DAT_11277c744));
  func_0x00010c21acc0(puVar2,param_3,lVar6);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(*(undefined8 *)(param_2 + _DAT_11277c75c));
  func_0x00010c0df720(param_1 * 1000.0,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0b4ca0();
  func_0x00010c214bc0(puVar2,param_3,puVar8);
  _objc_release(puVar7);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11277c758);
  func_0x00010c26fc80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216020(puVar2,param_3,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  func_0x00010c1ac500(puVar4,param_3,puVar5);
  func_0x00010c196600(puVar3,param_3,puVar4);
  func_0x00010c1b5d40(puVar1,param_3,puVar3);
  puVar7 = puVar1;
  func_0x00010c0cc0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189c80();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e62b90; end: 108e62bb3; -[SCTimestampStickerView _dateTimeStickerMetadataTypeForTimeFilterStyle:] */

undefined4 FUN_108e62b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined4 *)(&UNK_10dfa3b58 + (param_3 - 1U) * 4);
  }
  return 3;
}



/* Entry: 108e62bb4; end: 108e62bf7; -[SCTimestampStickerView _timeFilterStyleForCTPDateTime:] */

undefined8 FUN_108e62bb4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 2) {
    if ((param_3 != -0x4524111) && (param_3 != 0)) {
      return 1;
    }
  }
  else if (param_3 != 3) {
    uVar1 = 1;
    if (param_3 == 2) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 108e62bf8; end: 108e62c07; -[SCTimestampStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e62bf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c750);
}



/* Entry: 108e62c08; end: 108e62c17; -[SCTimestampStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e62c08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c74c);
}



/* Entry: 108e62c18; end: 108e62c27; -[SCTimestampStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e62c18(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277c748);
}



/* Entry: 108e62c28; end: 108e62c37; -[SCTimestampStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e62c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277c748) = param_3;
  return;
}



/* Entry: 108e62c38; end: 108e62c47; -[SCTimestampStickerView currentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e62c38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277c744);
}


