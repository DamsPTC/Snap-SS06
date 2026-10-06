/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064f02a0; end: 1064f02cf; -[SCChatWallpaperGenerativeActionHandler setDeckServices:] */

void FUN_1064f02a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064f02d0; end: 1064f02e7; -[SCChatWallpaperGenerativeActionHandler remixChatWallpaperControllerDelegate] */

void FUN_1064f02d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f02e8; end: 1064f02f3; -[SCChatWallpaperGenerativeActionHandler setRemixChatWallpaperControllerDelegate:] */

void FUN_1064f02e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1064f02f4; end: 1064f030b; -[SCChatWallpaperGenerativeActionHandler parentVC] */

void FUN_1064f02f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f030c; end: 1064f0317; -[SCChatWallpaperGenerativeActionHandler setParentVC:] */

void FUN_1064f030c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1064f0318; end: 1064f0393; -[SCChatWallpaperGenerativeActionHandler .cxx_destruct] */

void FUN_1064f0318(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f0394; end: 1064f089f;  */

/* WARNING: Possible PIC construction at 0x0001064f0888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001064f088c) */

void FUN_1064f0394(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long in_x5;
  undefined8 in_x7;
  long lVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  if (param_3 == 0) {
    func_0x00010c0d9840(in_stack_00000008);
  }
  else {
    puVar1 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cb268;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0628c0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    lVar5 = param_3;
    if (param_4 != 0) {
      param_1 = 0x4024000000000000;
      func_0x00010bf1e840(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      if (lVar5 == 0) {
        ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61a8;
        goto code_r0x00010c0d9840;
      }
    }
    func_0x00010c23d0a0(lVar5);
    lVar6 = lVar5;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cb278;
    _objc_alloc();
    func_0x00010c0630e0(param_1,param_2);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156da0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156da0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126bfca8;
    _objc_alloc();
    puVar9 = puVar4;
    func_0x00010bf15da0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf15da0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c020b60();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c6bf8;
    _objc_alloc(PTR_PTR_1126c6bf8);
    puVar10 = puVar9;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029720(puVar9);
    _objc_release(puVar10);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a3a0(in_x7);
    _objc_release(puVar11);
    _objc_release(puVar10);
    puVar10 = puVar9;
    func_0x000107d6ad3c(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126cb280;
    _objc_alloc(PTR_PTR_1126cb280);
    func_0x00010c020b60();
    puVar12 = PTR_PTR_1126cb270;
    _objc_alloc(PTR_PTR_1126cb270);
    func_0x00010c059800();
    puVar13 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    _objc_retain(in_stack_00000008);
    _objc_retain(in_stack_00000008);
    func_0x00010c04f4c0(puVar13);
    func_0x00010c2844c0(in_stack_00000000);
    _objc_release(puVar13);
    _objc_release(in_stack_00000008);
    _objc_release(in_stack_00000008);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  in_stack_00000008 = *(undefined8 *)(in_x5 + 0x20);
  ppuVar14 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61c0;
code_r0x00010c0d9840:
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_stack_00000008,PTR_s_next__112614028,ppuVar14);
  return;
}



/* Entry: 1064f08a0; end: 1064f08bf;  */

void FUN_1064f08a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61c0);
  return;
}



/* Entry: 1064f08c0; end: 1064f092b;  */

void FUN_1064f08c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain();
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_1);
  _objc_release(puVar1);
  func_0x00010bf436e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f092c; end: 1064f0a2f; -[SCChatWallpaperMemoriesActionHandler initWithNativeSessionManager:externalMediaPreparer:memoriesSnapThumbnailProvider:conversationId:source:] */

undefined1 *
FUN_1064f092c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f18a0;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f0a30; end: 1064f0c67; -[SCChatWallpaperMemoriesActionHandler selectWallpaperWithWallpaperItem:isBlurred:] */

void FUN_1064f0a30(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61d8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = *(undefined **)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(puVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126af4b8;
    _objc_alloc(PTR_PTR_1126af4b8);
    lVar2 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047e40(0x4099500000000000,0x40a6800000000000,puVar6,param_2,lVar2);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c119a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ae6b8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1064f0c68;
    puStack_a0 = &UNK_110928f88;
    uStack_98 = uVar4;
    puStack_90 = puVar9;
    uStack_70 = uVar1;
    uStack_68 = param_4;
    _objc_retain(param_3);
    lStack_88 = param_3;
    uStack_80 = uVar11;
    uStack_78 = uVar5;
    func_0x00010bf54280(puVar8,param_2,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lStack_88);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar11);
  }
  _objc_release(puVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1064f0c68; end: 1064f0d77;  */

void FUN_1064f0c68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  _objc_retain(param_2);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f0d78; end: 1064f0e87;  */

void FUN_1064f0d78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 1064f0e88; end: 1064f0f1f;  */

void FUN_1064f0e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined1 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0c5180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1064f0394(param_2,uVar2,0,4,uVar4,uVar1,uVar3,*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1064f0f20; end: 1064f0f2f;  */

void FUN_1064f0f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61d8);
  return;
}



/* Entry: 1064f0f30; end: 1064f114b; -[SCChatWallpaperMemoriesActionHandler remixWallpaperWithWallpaperItem:isBlurred:tool:] */

void FUN_1064f0f30(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR_PTR_1126af4b8;
    _objc_alloc(PTR_PTR_1126af4b8);
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047e40(0x4099500000000000,0x40a6800000000000,puVar6);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c119a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    puVar5 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_4;
    _objc_retain(param_5);
    func_0x00010bf54280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
  }
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064f114c; end: 1064f12c3;  */

void FUN_1064f114c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    _objc_release(uVar2);
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ea0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    _objc_retain(param_2);
    uStack_48 = *(undefined1 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    puVar3 = puVar4;
    func_0x00010c25ff60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f12c4; end: 1064f13eb;  */

void FUN_1064f12c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_60,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 1064f13ec; end: 1064f15d3;  */

void FUN_1064f13ec(long param_1,long param_2)

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
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
      uStack_68 = *(long *)(lVar1 + 0x30);
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
    else {
      uStack_68 = param_2;
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010bf1e840(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar2 = lVar1;
      func_0x00010c1296c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c129680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf669a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0f3c60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf55bc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129700();
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar3);
    }
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064f15d4; end: 1064f1607;  */

void FUN_1064f15d4(long param_1)

{
  undefined8 uVar1;
  
  FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064f1608; end: 1064f160f; -[SCChatWallpaperMemoriesActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f1608(void)

{
  return 0;
}



/* Entry: 1064f1610; end: 1064f161b; -[SCChatWallpaperMemoriesActionHandler pushToValdiMarshaller:] */

void FUN_1064f1610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f161c; end: 1064f1677; -[SCChatWallpaperMemoriesActionHandler didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1064f161c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1064f08c0(*(undefined8 *)(param_1 + 0x30),2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  func_0x00010c1296a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f1678; end: 1064f167f; -[SCChatWallpaperMemoriesActionHandler remixChatWallpaperServices] */

undefined8 FUN_1064f1678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1064f1680; end: 1064f16af; -[SCChatWallpaperMemoriesActionHandler setRemixChatWallpaperServices:] */

void FUN_1064f1680(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064f16b0; end: 1064f16b7; -[SCChatWallpaperMemoriesActionHandler deckServices] */

undefined8 FUN_1064f16b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1064f16b8; end: 1064f16e7; -[SCChatWallpaperMemoriesActionHandler setDeckServices:] */

void FUN_1064f16b8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064f16e8; end: 1064f16ff; -[SCChatWallpaperMemoriesActionHandler remixChatWallpaperControllerDelegate] */

void FUN_1064f16e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f1700; end: 1064f170b; -[SCChatWallpaperMemoriesActionHandler setRemixChatWallpaperControllerDelegate:] */

void FUN_1064f1700(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1064f170c; end: 1064f1723; -[SCChatWallpaperMemoriesActionHandler parentVC] */

void FUN_1064f170c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f1724; end: 1064f172f; -[SCChatWallpaperMemoriesActionHandler setParentVC:] */

void FUN_1064f1724(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1064f1730; end: 1064f17ab; -[SCChatWallpaperMemoriesActionHandler .cxx_destruct] */

void FUN_1064f1730(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f17ac; end: 1064f184f; -[SCChatWallpaperResetWallpaperActionHandler initWithNativeSessionManager:conversationId:] */

undefined1 *
FUN_1064f17ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f18a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f1850; end: 1064f19c7; -[SCChatWallpaperResetWallpaperActionHandler resetWallpaper] */

void FUN_1064f1850(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb268;
  _objc_alloc(PTR_PTR_1126cb268);
  func_0x00010c0628c0();
  puVar3 = PTR_PTR_1126cb270;
  _objc_alloc();
  func_0x00010c059800();
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf54280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064f19c8; end: 1064f1b0b;  */

void FUN_1064f19c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c04f4c0(puVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bde8ce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2844c0();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f1b0c; end: 1064f1b2b;  */

void FUN_1064f1b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c61f0);
  return;
}



/* Entry: 1064f1b2c; end: 1064f1b73; -[SCChatWallpaperResetWallpaperActionHandler _conversationManager] */

void FUN_1064f1b2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f1b74; end: 1064f1ba3; -[SCChatWallpaperResetWallpaperActionHandler .cxx_destruct] */

void FUN_1064f1b74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f1ba4; end: 1064f1cd7; -[SCChatWallpaperSavedInChatActionHandler initWithDataStore:nativeSessionManager:externalMediaPreparer:chatMediaFetcher:conversationId:source:] */

undefined1 *
FUN_1064f1ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f18b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f1cd8; end: 1064f1cdf; -[SCChatWallpaperSavedInChatActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f1cd8(void)

{
  return 0;
}



/* Entry: 1064f1ce0; end: 1064f1ceb; -[SCChatWallpaperSavedInChatActionHandler pushToValdiMarshaller:] */

void FUN_1064f1ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f1cec; end: 1064f1d83; -[SCChatWallpaperSavedInChatActionHandler selectWallpaperWithWallpaperItem:isBlurred:] */

void FUN_1064f1cec(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4620(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_4 == 0) {
    func_0x00010bee4280(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bed4220();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064f1d84; end: 1064f2033; -[SCChatWallpaperSavedInChatActionHandler _updateWallpaperForMedia:] */

void FUN_1064f1d84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar9 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  else {
    puVar3 = PTR_PTR_1126cb268;
    _objc_alloc();
    func_0x00010c0628c0();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    lVar4 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    lVar4 = param_3;
    func_0x00010c085300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar7 = PTR_PTR_1126cb280;
    _objc_alloc(PTR_PTR_1126cb280);
    func_0x00010c020b60();
    puVar8 = PTR_PTR_1126cb270;
    _objc_alloc();
    func_0x00010c059800();
    _objc_initWeak(auStack_68,param_1);
    puVar9 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf54280(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1064f2034; end: 1064f2097;  */

void FUN_1064f2034(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee42a0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1064f2098; end: 1064f21ef; -[SCChatWallpaperSavedInChatActionHandler _updateBlurredWallpaperForMedia:] */

void FUN_1064f2098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126ae6b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1064f21f0;
  puStack_88 = &UNK_110929018;
  uStack_80 = uVar3;
  uStack_78 = param_3;
  uStack_70 = uVar1;
  uStack_68 = uVar8;
  uStack_60 = uVar5;
  uStack_58 = uVar2;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar6,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uStack_78);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064f21f0; end: 1064f22fb;  */

void FUN_1064f21f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x28);
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x28));
  auVar4 = NEON_ext(auVar4,auVar4,8,1);
  _objc_retain(param_2);
  func_0x00010bfe78c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._8_8_);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f22fc; end: 1064f23a7;  */

void FUN_1064f22fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1064f0394(param_2,1,0,3,uVar3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
  else {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064f23a8; end: 1064f24eb; -[SCChatWallpaperSavedInChatActionHandler _updateWallpaperWithUpdate:conversationId:observer:] */

void FUN_1064f23a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
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
  puVar2 = PTR_PTR_1126b2730;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1064f24ec;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_5);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1064f24fc;
  puStack_88 = &UNK_110855e40;
  uStack_80 = param_5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2,param_2,&puStack_78,&puStack_a0);
  func_0x00010bde8ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2844c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 1064f24ec; end: 1064f250b;  */

void FUN_1064f24ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6250);
  return;
}



/* Entry: 1064f250c; end: 1064f2553; -[SCChatWallpaperSavedInChatActionHandler _conversationManager] */

void FUN_1064f250c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f2554; end: 1064f26e3; -[SCChatWallpaperSavedInChatActionHandler remixWallpaperWithWallpaperItem:isBlurred:tool:] */

void FUN_1064f2554(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c4620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_retain(param_5);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f26e4; end: 1064f285f;  */

void FUN_1064f26e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = param_2;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,param_1 + 0x38);
    _objc_retain(param_2);
    uStack_48 = *(undefined1 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    func_0x00010bfe78c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064f2860; end: 1064f2a4f;  */

void FUN_1064f2860(long param_1,long param_2,long param_3)

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
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      FUN_1064f08c0(*(undefined8 *)(param_1 + 0x20),1);
      uStack_68 = *(long *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    else {
      uStack_68 = param_2;
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        _objc_retain(param_2);
      }
      else {
        func_0x00010bf1e840(0x4024000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar2 = lVar1;
      func_0x00010c1296c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c129680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf669a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c0f3c60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bf55bc0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c269d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129700();
      _objc_release(lVar2);
      _objc_release(lVar9);
      _objc_release(lVar3);
    }
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064f2a50; end: 1064f2aab; -[SCChatWallpaperSavedInChatActionHandler didCompleteRemixingWallpaperWithDidRemix:] */

void FUN_1064f2a50(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    FUN_1064f08c0(*(undefined8 *)(param_1 + 0x38),2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  func_0x00010c1296a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f2aac; end: 1064f2ab3; -[SCChatWallpaperSavedInChatActionHandler remixChatWallpaperServices] */

undefined8 FUN_1064f2aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1064f2ab4; end: 1064f2ae3; -[SCChatWallpaperSavedInChatActionHandler setRemixChatWallpaperServices:] */

void FUN_1064f2ab4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064f2ae4; end: 1064f2aeb; -[SCChatWallpaperSavedInChatActionHandler deckServices] */

undefined8 FUN_1064f2ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1064f2aec; end: 1064f2b1b; -[SCChatWallpaperSavedInChatActionHandler setDeckServices:] */

void FUN_1064f2aec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064f2b1c; end: 1064f2b33; -[SCChatWallpaperSavedInChatActionHandler remixChatWallpaperControllerDelegate] */

void FUN_1064f2b1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f2b34; end: 1064f2b3f; -[SCChatWallpaperSavedInChatActionHandler setRemixChatWallpaperControllerDelegate:] */

void FUN_1064f2b34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1064f2b40; end: 1064f2b57; -[SCChatWallpaperSavedInChatActionHandler parentVC] */

void FUN_1064f2b40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f2b58; end: 1064f2b63; -[SCChatWallpaperSavedInChatActionHandler setParentVC:] */

void FUN_1064f2b58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1064f2b64; end: 1064f2beb; -[SCChatWallpaperSavedInChatActionHandler .cxx_destruct] */

void FUN_1064f2b64(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f2bec; end: 1064f2d87;  */

void FUN_1064f2bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_1 == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_new(puVar1);
    lVar2 = param_1;
    func_0x00010bf15d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar2);
    uVar3 = param_2;
    func_0x00010bf15d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf15d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar3);
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6268;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6268);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(ppuVar6);
    puVar4 = puVar1;
    func_0x00010bf51e00(puVar1);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc1718;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1064f2d88; end: 1064f2fe7;  */

void FUN_1064f2d88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_1064f2fbc;
    lVar2 = param_1;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar6 = PTR_PTR_1126cb288;
      _objc_opt_new(PTR_PTR_1126cb288);
      lVar1 = param_1;
      func_0x00010c0c5180(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar6);
      _objc_release(lVar1);
      func_0x00010c1c4e60(puVar6);
      func_0x00010c1afec0(puVar6);
      lVar1 = param_1;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar2 = param_1;
        func_0x00010bf4cce0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar1);
        lVar2 = lVar1;
      }
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      lVar1 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      lVar1 = param_1;
      func_0x00010c085300(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      FUN_1064f2bec(lVar2,puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2144a0(puVar6);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf4cce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      FUN_1064f2bec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182a80(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      goto LAB_1064f2fbc;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1064f2fbc:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064f2fe8; end: 1064f3073;  */

void FUN_1064f2fe8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064f3074; end: 1064f3257; -[SCChatWallpaperCameraRollDataPaginator initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:] */

undefined8 *
FUN_1064f3074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f18b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2670;
    _objc_alloc();
    func_0x00010c035d40();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[1];
    puVar2 = PTR_PTR_1126b2688;
    _objc_opt_new(PTR_PTR_1126b2688);
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bfab780(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064f3258; end: 1064f32b7;  */

void FUN_1064f3258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    _objc_release(uVar1);
    func_0x00010c09bce0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064f32b8; end: 1064f32c3; -[SCChatWallpaperCameraRollDataPaginator pushToValdiMarshaller:] */

void FUN_1064f32b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f32c4; end: 1064f3313; -[SCChatWallpaperCameraRollDataPaginator hasReachedLastPage] */

bool FUN_1064f32c4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar2 == (undefined *)0x3) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    bVar1 = false;
    if (uVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
      bVar1 = uVar3 <= uVar4;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1064f3314; end: 1064f3363; -[SCChatWallpaperCameraRollDataPaginator loadNextPage] */

void FUN_1064f3314(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = param_1;
    func_0x00010bfc8760(param_1,param_2,100,param_1 + 0x20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1064f3364; end: 1064f348f; -[SCChatWallpaperCameraRollDataPaginator getPageOfSize:currentIndex:results:] */

void FUN_1064f3364(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_5);
  uVar5 = *param_4;
  uVar4 = param_5;
  func_0x00010bf529e0();
  uVar1 = uVar5 + param_3;
  if (uVar4 <= uVar5 + param_3) {
    uVar1 = uVar4;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bffc4a0();
  uVar4 = *param_4;
  while (uVar4 < uVar1) {
    uVar4 = param_5;
    func_0x00010c0dfd40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be20720(0x406f400000000000,0x406f400000000000,0x4099500000000000,0x40a6800000000000,
                        param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010befa120(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar4 = *param_4 + 1;
    *param_4 = uVar4;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064f3490; end: 1064f3497; -[SCChatWallpaperCameraRollDataPaginator observe] */

void FUN_1064f3490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 1064f3498; end: 1064f35e7; -[SCChatWallpaperCameraRollDataPaginator _getMediaItemFromPHAsset:thumbnailTargetSize:contentTargetSize:] */

void FUN_1064f3498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cb288;
  _objc_retain(param_7);
  _objc_opt_new(puVar1);
  uVar2 = param_7;
  func_0x00010c09da80(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar1,param_6,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c6618;
  uVar2 = param_7;
  func_0x00010c09da80(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(param_1,param_2,puVar3,param_6,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144a0(puVar1,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c6618;
  uVar2 = param_7;
  func_0x00010c09da80(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bfe8f40(param_3,param_4,puVar3,param_6,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a80(puVar1,param_6,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064f35e8; end: 1064f3623; -[SCChatWallpaperCameraRollDataPaginator .cxx_destruct] */

void FUN_1064f35e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3624; end: 1064f3697; -[SCChatWallpaperCameraRollPermissionHandler initWithPhotoPermissionCoordinator:] */

undefined1 * FUN_1064f3624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18c0;
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



/* Entry: 1064f3698; end: 1064f36db; -[SCChatWallpaperCameraRollPermissionHandler getStateWithCallback:] */

void FUN_1064f3698(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = param_3;
    _objc_retain(param_3);
    FUN_1064f36dc();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1064f36dc; end: 1064f3707;  */

int FUN_1064f36dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fc0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30,param_2,2);
  iVar1 = 0;
  if (puVar2 + -1 < (undefined *)0x4) {
    iVar1 = (int)(puVar2 + -1) + 1;
  }
  return iVar1;
}



/* Entry: 1064f3708; end: 1064f382b; -[SCChatWallpaperCameraRollPermissionHandler requestPermissionWithCallback:] */

void FUN_1064f3708(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c079f60();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c079fa0();
      _objc_release(uVar3);
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar4 & 1) != 0) {
        _objc_retain(param_3);
        func_0x00010c134a40(uVar1);
        _objc_release(uVar1);
        _objc_release(param_3);
        goto LAB_1064f3810;
      }
      func_0x00010c0e99c0(uVar1);
      _objc_release(uVar1);
    }
    FUN_1064f36dc();
    (**(code **)(param_3 + 0x10))(param_3,uVar1);
  }
LAB_1064f3810:
  _objc_release(param_3);
  return;
}



/* Entry: 1064f382c; end: 1064f3857;  */

void FUN_1064f382c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1064f36dc();
                    /* WARNING: Could not recover jumptable at 0x0001064f3854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



/* Entry: 1064f3858; end: 1064f3863; -[SCChatWallpaperCameraRollPermissionHandler pushToValdiMarshaller:] */

void FUN_1064f3858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f3864; end: 1064f386f; -[SCChatWallpaperCameraRollPermissionHandler .cxx_destruct] */

void FUN_1064f3864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3870; end: 1064f38eb; -[SCChatWallpaperForUsDataPaginator initWithDataStore:] */

undefined1 * FUN_1064f3870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c09b7c0(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f38ec; end: 1064f38f3; -[SCChatWallpaperForUsDataPaginator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1064f38ec(void)

{
  return 0;
}



/* Entry: 1064f38f4; end: 1064f38ff; -[SCChatWallpaperForUsDataPaginator pushToValdiMarshaller:] */

void FUN_1064f38f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f3900; end: 1064f3947; -[SCChatWallpaperForUsDataPaginator observe] */

void FUN_1064f3900(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c5460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f3948; end: 1064f394b; -[SCChatWallpaperForUsDataPaginator loadNextPage] */

void FUN_1064f3948(void)

{
  return;
}



/* Entry: 1064f394c; end: 1064f3953; -[SCChatWallpaperForUsDataPaginator hasReachedLastPage] */

undefined8 FUN_1064f394c(void)

{
  return 1;
}



/* Entry: 1064f3954; end: 1064f395f; -[SCChatWallpaperForUsDataPaginator .cxx_destruct] */

void FUN_1064f3954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3960; end: 1064f39d3; -[SCChatWallpaperMemoriesDataPaginator initWithDataStore:] */

undefined1 * FUN_1064f3960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18d0;
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



/* Entry: 1064f39d4; end: 1064f39df; -[SCChatWallpaperMemoriesDataPaginator pushToValdiMarshaller:] */

void FUN_1064f39d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f39e0; end: 1064f39e7; -[SCChatWallpaperMemoriesDataPaginator hasReachedLastPage] */

void FUN_1064f39e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdaf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasReachedLastPage_1125d4580);
  return;
}



/* Entry: 1064f39e8; end: 1064f39ef; -[SCChatWallpaperMemoriesDataPaginator loadNextPage] */

void FUN_1064f39e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_loadNextPage_112604948);
  return;
}



/* Entry: 1064f39f0; end: 1064f3a37; -[SCChatWallpaperMemoriesDataPaginator observe] */

void FUN_1064f39f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c5460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f3a38; end: 1064f3a43; -[SCChatWallpaperMemoriesDataPaginator .cxx_destruct] */

void FUN_1064f3a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f3a44; end: 1064f3ab7; -[SCChatWallpaperSavedInChatDataPaginator initWithDataStore:] */

undefined1 * FUN_1064f3a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f18d8;
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



/* Entry: 1064f3ab8; end: 1064f3ac3; -[SCChatWallpaperSavedInChatDataPaginator pushToValdiMarshaller:] */

void FUN_1064f3ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af35708(param_3,param_1);
  func_0x00010af356bc();
  func_0x00010af356b4();
  func_0x00010af35648();
  func_0x00010af3563c();
  return;
}



/* Entry: 1064f3ac4; end: 1064f3acb; -[SCChatWallpaperSavedInChatDataPaginator hasReachedLastPage] */

void FUN_1064f3ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdaf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasReachedLastPage_1125d4580);
  return;
}



/* Entry: 1064f3acc; end: 1064f3ad3; -[SCChatWallpaperSavedInChatDataPaginator loadNextPage] */

void FUN_1064f3acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_loadNextPage_112604948);
  return;
}



/* Entry: 1064f3ad4; end: 1064f3b1b; -[SCChatWallpaperSavedInChatDataPaginator observe] */

void FUN_1064f3ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c5460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


