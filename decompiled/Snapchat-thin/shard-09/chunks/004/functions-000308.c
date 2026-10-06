/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d983f8; end: 106d9840f; -[SCGalleryPrivateLockedTabController delegate] */

void FUN_106d983f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d98410; end: 106d9841b; -[SCGalleryPrivateLockedTabController setDelegate:] */

void FUN_106d98410(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106d9841c; end: 106d98423; -[SCGalleryPrivateLockedTabController tabType] */

undefined8 FUN_106d9841c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106d98424; end: 106d984bf; -[SCGalleryPrivateLockedTabController .cxx_destruct] */

void FUN_106d98424(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d984c0; end: 106d98907; -[SCGalleryPrivateTabLockedNormalStateController initWithContainerViewController:reauthenticationService:deleteMutator:hasPasscodeOptions:effects:userTrackedLogger:grapheneRegistry:currentPageTracker:keyService:privateGalleryManager:dataObjectContext:galleryLogger:memoriesProfile:memoriesExperimentService:memoriesPrivateEntriesPurger:applicationLifecycleEvents:] */

undefined8 *
FUN_106d984c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126f6d78;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_3);
    *(undefined1 *)(puVar1 + 4) = param_6;
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2798;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[8]);
    uVar2 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = param_18;
    func_0x00010bf75dc0(param_18);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d98908; end: 106d98933;  */

void FUN_106d98908(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d98934; end: 106d98a0b; -[SCGalleryPrivateTabLockedNormalStateController _applicationWillEnterBackground] */

void FUN_106d98934(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010be3ec80();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf84b00(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106d98a0c; end: 106d98a4f;  */

void FUN_106d98a0c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d98a50; end: 106d98aeb; -[SCGalleryPrivateTabLockedNormalStateController _isChangeOrForgotPasscodeFlowPresented] */

/* WARNING: Possible PIC construction at 0x000106d98ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d98ab8) */
/* WARNING: Removing unreachable block (ram,0x000106d98ad8) */
/* WARNING: Removing unreachable block (ram,0x000106d98abc) */

undefined8 FUN_106d98a50(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d27a0;
  _objc_opt_class(PTR_PTR_1126d27a0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010c07f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_isStarted_1125fd820);
    return uVar5;
  }
  return 0;
}



/* Entry: 106d98aec; end: 106d98f8f; -[SCGalleryPrivateTabLockedNormalStateController view] */

void FUN_106d98aec(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_5 + 0x28);
  if (lVar10 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    func_0x000100841590(param_3,param_4);
    func_0x00010c013de0();
    uVar9 = *(undefined8 *)(param_5 + 0x28);
    *(undefined **)(param_5 + 0x28) = puVar3;
    _objc_release(uVar9);
    _objc_release(puVar4);
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x28));
    puVar3 = PTR_PTR_1126d27a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126d27b0;
    func_0x00010bf690c0(PTR_PTR_1126d27b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c001e60();
    uVar9 = *(undefined8 *)(param_5 + 0x30);
    *(undefined **)(param_5 + 0x30) = puVar3;
    _objc_release(uVar9);
    _objc_release(puVar4);
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x30));
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x30));
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x28));
    func_0x00010c0bbfc0(*(undefined8 *)(param_5 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = *(long *)(param_5 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010bf01800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if ((lVar10 != 0) && (func_0x00010c26f3a0(lVar10), 0.0 < param_3)) {
      func_0x00010c1673c0(*(undefined8 *)(param_5 + 0x40));
      uVar9 = *(undefined8 *)(param_5 + 0x40);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2162e0(*(undefined8 *)(param_5 + 0x40));
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0x28));
      func_0x00010c0bbfe0(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_5 + 0x40));
      _objc_release(uVar9);
    }
    if (*(char *)(param_5 + 0x20) == '\x01') {
      puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_5 + 0x38);
      *(undefined **)(param_5 + 0x38) = puVar3;
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c271420(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c271420(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar9);
      func_0x00010befbd60(*(undefined8 *)(param_5 + 0x38));
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c680();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      iVar1 = (int)*(undefined8 *)(param_5 + 0x40);
      func_0x00010c06c0e0();
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      ppuVar7 = &PTR____CFConstantStringClassReference_110e85db8;
      if (iVar1 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e85dd8;
      }
      param_6 = 0;
      func_0x00010bcbeaa8(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar3);
      _objc_release(ppuVar7);
      func_0x00010c16b780(*(undefined8 *)(param_5 + 0x38));
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0x28));
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010c0bbfc0(*(undefined8 *)(param_5 + 0x38));
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    _objc_release(lVar10);
    _objc_release(puVar2);
    lVar10 = *(long *)(param_5 + 0x28);
  }
  lVar5 = lVar10;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  lVar8 = param_6;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = param_6;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar10 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x30));
  func_0x00010c2971c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106d98f90; end: 106d990fb;  */

void FUN_106d98f90(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  func_0x00010c2971c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d990fc; end: 106d99377;  */

void FUN_106d990fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d99378; end: 106d9937b; -[SCGalleryPrivateTabLockedNormalStateController lockedRateLimitControllerDidReachAllowedFutureDate:] */

void FUN_106d99378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be032d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissRateLimitViewAnimated_11255e650);
  return;
}



/* Entry: 106d9937c; end: 106d9937f; -[SCGalleryPrivateTabLockedNormalStateController galleryPasscodeViewPasscodeDidChange:] */

void FUN_106d9937c(void)

{
  return;
}



/* Entry: 106d99380; end: 106d9947b; -[SCGalleryPrivateTabLockedNormalStateController galleryPasscodeViewPasscodeEntered:] */

void FUN_106d99380(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b280();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0f4d80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280d20();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 106d9947c; end: 106d9956b;  */

void FUN_106d9947c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b24e0;
  uVar4 = param_3;
  func_0x00010bf01820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb02a0(puVar1);
  _objc_release(uVar4);
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar2);
    func_0x000108de5da8();
    _objc_release(lVar2);
    func_0x00010c138aa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9956c; end: 106d9956f; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryChangePasscodeFlowDidCancel:] */

void FUN_106d9956c(void)

{
  return;
}



/* Entry: 106d99570; end: 106d99573; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryChangePasscodeFlowDidFinish:] */

void FUN_106d99570(void)

{
  return;
}



/* Entry: 106d99574; end: 106d99577; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryReauthenticateFlowDidCancel:] */

void FUN_106d99574(void)

{
  return;
}



/* Entry: 106d99578; end: 106d9961b; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryReauthenticateFlowDidSucceed:] */

void FUN_106d99578(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d27b8;
    _objc_alloc();
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0168a0();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x58));
    lVar1 = *(long *)(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_start_112671080);
  return;
}



/* Entry: 106d9961c; end: 106d9961f; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryForgotPasscodeFlowDidCancel:] */

void FUN_106d9961c(void)

{
  return;
}



/* Entry: 106d99620; end: 106d9967b; -[SCGalleryPrivateTabLockedNormalStateController privateGalleryForgotPasscodeFlowDidFinish:] */

void FUN_106d99620(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafac0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9967c; end: 106d999bb; -[SCGalleryPrivateTabLockedNormalStateController keyService:didChangeAllowedFutureAuthorizationDate:errorCode:] */

void FUN_106d9967c(double param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 == 0) || (func_0x00010c26f3a0(param_5), param_1 <= 0.0)) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x00010c06c0e0();
    if (iVar1 != 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_2 + 0x40));
      func_0x00010be032c0(param_2);
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x00010c06c0e0();
    if (iVar1 == 0) {
      func_0x00010c1673c0(*(undefined8 *)(param_2 + 0x40));
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x40);
      uVar3 = *(undefined8 *)(param_2 + 0x88);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b260();
      func_0x00010c2162e0(uVar9);
      _objc_release(uVar3);
      func_0x00010c066f80(*(undefined8 *)(param_2 + 0x28));
      func_0x00010c0bbfe0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1677c0(0,uVar2);
      func_0x00010c21e900(*(undefined8 *)(param_2 + 0x28));
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(uVar2);
      func_0x00010bf03420(0x3fd3333333333333,puVar4);
      func_0x00010c24dbc0(*(undefined8 *)(param_2 + 0x40));
      if (*(char *)(param_2 + 0x20) == '\x01') {
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c14c680();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        ppuVar7 = &PTR____CFConstantStringClassReference_110e85db8;
        param_3 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85db8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar4);
        _objc_release(ppuVar7);
        func_0x00010c16b780(*(undefined8 *)(param_2 + 0x38));
        _objc_release(puVar4);
        _objc_release(puVar6);
      }
      _objc_release(uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c06c0e0();
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d999bc; end: 106d99a27;  */

void FUN_106d999bc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d99a28; end: 106d99a43;  */

void FUN_106d99a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d99a44; end: 106d99a4b; -[SCGalleryPrivateTabLockedNormalStateController reset] */

void FUN_106d99a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106d99a4c; end: 106d99c7b; -[SCGalleryPrivateTabLockedNormalStateController _dismissRateLimitViewAnimated] */

void FUN_106d99a4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(lVar1);
  _objc_retain(lVar1);
  func_0x00010bf03420(0x3fd3333333333333,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e85dd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85dd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2);
  _objc_release(ppuVar5);
  func_0x00010c16b780(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,*(undefined8 *)(lVar1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d99c7c; end: 106d99c87;  */

void FUN_106d99c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d99c88; end: 106d99cb7;  */

void FUN_106d99c88(long param_1,undefined8 param_2)

{
  func_0x00010c21e900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 106d99cb8; end: 106d99d53; -[SCGalleryPrivateTabLockedNormalStateController _didPressPasscodeOptionsButton] */

void FUN_106d99cb8(long param_1)

{
  int iVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c06c0e0();
  if (iVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106d99e28;
    puStack_58 = &UNK_11097b188;
    lStack_50 = param_1;
    func_0x000108de6758(&puStack_70);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106d99d54;
    puStack_30 = &UNK_11097b158;
    lStack_28 = param_1;
    func_0x000108de64d0(&puStack_48);
  }
  return;
}



/* Entry: 106d99d54; end: 106d99e27;  */

void FUN_106d99d54(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c137fe0(uVar3);
    func_0x00010c1a7f60(param_2);
    _objc_release(param_2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d27c0;
      _objc_alloc();
      lVar1 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c03d280();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x50) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c251bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_startWithPresentationAnimationTy_112672110,1)
    ;
    return;
  }
  return;
}



/* Entry: 106d99e28; end: 106d99f8f;  */

void FUN_106d99e28(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    if (param_4 != 0) {
      func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c1a7f60(param_2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
      if (lVar1 == 0) {
        puVar2 = PTR_PTR_1126d27c0;
        _objc_alloc();
        lVar1 = *(long *)(param_1 + 0x20) + 0x18;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c03d280();
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
        *(undefined **)(*(long *)(param_1 + 0x20) + 0x50) = puVar2;
        _objc_release(uVar3);
        _objc_release(lVar1);
        func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
        lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
      }
      func_0x00010c251ba0(lVar1);
    }
  }
  else {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d27c8;
      _objc_alloc();
      lVar1 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0168e0();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    }
    func_0x00010c24d960(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d99f90; end: 106d9a0ab; -[SCGalleryPrivateTabLockedNormalStateController .cxx_destruct] */

void FUN_106d99f90(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d9a0ac; end: 106d9a3ef; -[SCGalleryPrivateTabLockedTopSecretStateController initWithContainerViewController:reauthenticationService:deleteMutator:hasPassphraseOptions:effects:userTrackedLogger:grapheneRegistry:currentPageTracker:keyService:privateGalleryManager:dataObjectContext:galleryLogger:memoriesProfile:memoriesExperimentService:memoriesPrivateEntriesPurger:] */

undefined8 *
FUN_106d9a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f6d80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_3);
    *(undefined1 *)(puVar1 + 4) = param_6;
    _objc_retain(param_10);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2798;
    _objc_alloc_init();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[10]);
    uVar2 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106d9a3f0; end: 106d9a4d3; -[SCGalleryPrivateTabLockedTopSecretStateController _applicationWillEnterBackground:] */

void FUN_106d9a3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be3eca0();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf84b00(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d9a4d4; end: 106d9a517;  */

void FUN_106d9a4d4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d9a518; end: 106d9a5b3; -[SCGalleryPrivateTabLockedTopSecretStateController _isChangeOrForgotPassphraseFlowPresented] */

/* WARNING: Possible PIC construction at 0x000106d9a57c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d9a580) */
/* WARNING: Removing unreachable block (ram,0x000106d9a5a0) */
/* WARNING: Removing unreachable block (ram,0x000106d9a584) */

undefined8 FUN_106d9a518(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d27a0;
  _objc_opt_class(PTR_PTR_1126d27a0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010c07f850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_isStarted_1125fd820);
    return uVar5;
  }
  return 0;
}



/* Entry: 106d9a5b4; end: 106d9acff; -[SCGalleryPrivateTabLockedTopSecretStateController view] */

void FUN_106d9a5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *(long *)(param_5 + 0x30);
  if (lVar16 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    func_0x000100841590(param_3,param_4);
    func_0x00010c013de0();
    uVar15 = *(undefined8 *)(param_5 + 0x30);
    *(undefined **)(param_5 + 0x30) = puVar2;
    _objc_release(uVar15);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x30));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    uVar15 = *(undefined8 *)(param_5 + 0x38);
    *(undefined **)(param_5 + 0x38) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + 0x38));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x30));
    func_0x00010c0bbfc0(*(undefined8 *)(param_5 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010c1677c0(0x3f9eb851eb851eb8);
    func_0x00010c182220(puVar3);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d27d0;
    _objc_alloc();
    func_0x00010c014400(uVar18,uVar19,uVar20,uVar21);
    uVar15 = *(undefined8 *)(param_5 + 0x40);
    *(undefined **)(param_5 + 0x40) = puVar4;
    _objc_release(uVar15);
    func_0x00010c1d9680(*(undefined8 *)(param_5 + 0x40));
    func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x40));
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
    func_0x00010c0bbfc0(*(undefined8 *)(param_5 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e29bf8;
    param_6 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e29bf8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010c28eda0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar4);
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    dVar17 = 14.0;
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar4);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar4);
    _objc_release(puVar6);
    func_0x00010c1cfce0(puVar4);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar8 = *(long *)(param_5 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar8;
    func_0x00010bf01800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if ((lVar16 != 0) && (func_0x00010c26f3a0(lVar16), 0.0 < dVar17)) {
      func_0x00010c1673c0(*(undefined8 *)(param_5 + 0x50));
      uVar15 = *(undefined8 *)(param_5 + 0x50);
      func_0x00010c29bf00(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2162e0(*(undefined8 *)(param_5 + 0x50));
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
      func_0x00010c0bbfe0(uVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c24dbc0(*(undefined8 *)(param_5 + 0x50));
      _objc_release(uVar15);
    }
    if (*(char *)(param_5 + 0x20) == '\x01') {
      puVar6 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_5 + 0x48);
      *(undefined **)(param_5 + 0x48) = puVar6;
      _objc_release(uVar15);
      uVar15 = *(undefined8 *)(param_5 + 0x48);
      func_0x00010c271420(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213040();
      _objc_release(uVar15);
      uVar15 = *(undefined8 *)(param_5 + 0x48);
      func_0x00010c271420(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar15);
      func_0x00010befbd60(*(undefined8 *)(param_5 + 0x48));
      puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar6);
      iVar1 = (int)*(undefined8 *)(param_5 + 0x50);
      func_0x00010c06c0e0();
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e85e18;
      if (iVar1 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e85e38;
      }
      param_6 = 0;
      func_0x00010bcbeaa8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840();
      _objc_release(ppuVar5);
      func_0x00010c16b780(*(undefined8 *)(param_5 + 0x48));
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
      func_0x00010c0bbfc0(*(undefined8 *)(param_5 + 0x48));
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar10);
    }
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar6);
    _objc_release(lVar16);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar16 = *(long *)(param_5 + 0x30);
  }
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  lVar14 = param_6;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar14);
  lVar14 = param_6;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  (**(code **)(lVar16 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar14);
  lVar14 = param_6;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar16 = lVar14;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar16;
  (**(code **)(lVar16 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  (**(code **)(lVar11 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar13 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 106d9ad00; end: 106d9af17;  */

void FUN_106d9ad00(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9af18; end: 106d9b0fb;  */

void FUN_106d9af18(undefined8 param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.8;
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0bc080(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf87140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x30));
  dVar7 = 0.0;
  if (dVar6 != 0.0) {
    if (param_2 == 0.0) {
      dVar7 = INFINITY;
    }
    else {
      dVar7 = dVar6 / param_2;
    }
  }
  (**(code **)(lVar4 + 0x10))(dVar7,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9b0fc; end: 106d9b1fb;  */

void FUN_106d9b0fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c0699c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  func_0x00010c2971c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9b1fc; end: 106d9b323;  */

void FUN_106d9b1fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0bc020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9b324; end: 106d9b38f;  */

void FUN_106d9b324(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d9b390; end: 106d9b60b;  */

void FUN_106d9b390(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0bbec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9b60c; end: 106d9b60f; -[SCGalleryPrivateTabLockedTopSecretStateController lockedRateLimitControllerDidReachAllowedFutureDate:] */

void FUN_106d9b60c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be032d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissRateLimitViewAnimated_11255e650);
  return;
}



/* Entry: 106d9b610; end: 106d9b613; -[SCGalleryPrivateTabLockedTopSecretStateController galleryPassphraseViewDidChangePassphrase:] */

void FUN_106d9b610(void)

{
  return;
}



/* Entry: 106d9b614; end: 106d9b647; -[SCGalleryPrivateTabLockedTopSecretStateController galleryPassphraseViewDidBeginEditingPassphrase:] */

void FUN_106d9b614(long param_1)

{
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d9b648; end: 106d9b67b; -[SCGalleryPrivateTabLockedTopSecretStateController galleryPassphraseViewDidEndEditingPassphrase:] */

void FUN_106d9b648(long param_1)

{
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09ffc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d9b67c; end: 106d9b77f; -[SCGalleryPrivateTabLockedTopSecretStateController galleryPassphraseViewDidPressDoneKey:] */

void FUN_106d9b67c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0f5140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c255f00(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0f5140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c280d20();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d9b780; end: 106d9b8d3;  */

void FUN_106d9b780(double param_1,long param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 0x20) + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b24e0;
  lVar2 = param_4;
  func_0x00010bf01820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb02a0(puVar1);
  _objc_release(lVar2);
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 0x20) + 0x18;
    _objc_loadWeakRetained(lVar2);
    func_0x000108de5da8();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf01820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_4;
      func_0x00010bf01820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (0.0 < param_1) {
        func_0x00010c137fe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40));
        goto LAB_106d9b8b8;
      }
    }
    func_0x00010c138ac0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x40));
  }
LAB_106d9b8b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d9b8d4; end: 106d9b8db; -[SCGalleryPrivateTabLockedTopSecretStateController galleryPassphraseViewShouldLimitLength:] */

undefined8 FUN_106d9b8d4(void)

{
  return 0;
}



/* Entry: 106d9b8dc; end: 106d9b8df; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryReauthenticateFlowDidCancel:] */

void FUN_106d9b8dc(void)

{
  return;
}



/* Entry: 106d9b8e0; end: 106d9b983; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryReauthenticateFlowDidSucceed:] */

void FUN_106d9b8e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d27d8;
    _objc_alloc();
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0168a0();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
    lVar1 = *(long *)(param_1 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_start_112671080);
  return;
}



/* Entry: 106d9b984; end: 106d9b987; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryChangePassphraseFlowDidCancel:] */

void FUN_106d9b984(void)

{
  return;
}



/* Entry: 106d9b988; end: 106d9b98b; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryChangePassphraseFlowDidFinish:] */

void FUN_106d9b988(void)

{
  return;
}



/* Entry: 106d9b98c; end: 106d9b98f; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryForgotPassphraseFlowDidCancel:] */

void FUN_106d9b98c(void)

{
  return;
}



/* Entry: 106d9b990; end: 106d9b9eb; -[SCGalleryPrivateTabLockedTopSecretStateController privateGalleryForgotPassphraseFlowDidFinish:] */

void FUN_106d9b990(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafac0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9b9ec; end: 106d9bd4f; -[SCGalleryPrivateTabLockedTopSecretStateController keyService:didChangeAllowedFutureAuthorizationDate:errorCode:] */

void FUN_106d9b9ec(double param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_5 == 0) || (func_0x00010c26f3a0(param_5), param_1 <= 0.0)) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
    func_0x00010c06c0e0();
    if (iVar1 != 0) {
      func_0x00010c2558c0(*(undefined8 *)(param_2 + 0x50));
      func_0x00010be032c0(param_2);
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x50);
    func_0x00010c06c0e0();
    if (iVar1 == 0) {
      func_0x00010c1673c0(*(undefined8 *)(param_2 + 0x50));
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 0x50);
      uVar3 = *(undefined8 *)(param_2 + 0x98);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b260();
      func_0x00010c2162e0(uVar9);
      _objc_release(uVar3);
      if (*(long *)(param_2 + 0x48) == 0) {
        func_0x00010befbb60(*(undefined8 *)(param_2 + 0x38));
      }
      else {
        func_0x00010c066fe0();
      }
      func_0x00010c0bbfe0(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c08cdc0(uVar2);
      func_0x00010c1677c0(0,uVar2);
      func_0x00010c21e900(*(undefined8 *)(param_2 + 0x30));
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(uVar2);
      func_0x00010bf03420(0x3fd3333333333333,puVar4);
      func_0x00010c255f00(*(undefined8 *)(param_2 + 0x40));
      func_0x00010c24dbc0(*(undefined8 *)(param_2 + 0x50));
      if (*(char *)(param_2 + 0x20) == '\x01') {
        puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4028000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        ppuVar7 = &PTR____CFConstantStringClassReference_110e85e18;
        param_3 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar4);
        _objc_release(ppuVar7);
        func_0x00010c16b780(*(undefined8 *)(param_2 + 0x48));
        _objc_release(puVar4);
        _objc_release(puVar6);
      }
      _objc_release(uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010c06c0e0();
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9bd50; end: 106d9bdbb;  */

void FUN_106d9bd50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d9bdbc; end: 106d9bdd7;  */

void FUN_106d9bdbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d9bdd8; end: 106d9bdff; -[SCGalleryPrivateTabLockedTopSecretStateController reset] */

void FUN_106d9bdd8(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c255f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopEditingPassphrase_1126731e8);
  return;
}



/* Entry: 106d9be00; end: 106d9be07; -[SCGalleryPrivateTabLockedTopSecretStateController isEditingPassphrase] */

void FUN_106d9be00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0712d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_isEditingPassphrase_1125f9ec0);
  return;
}



/* Entry: 106d9be08; end: 106d9be7b; -[SCGalleryPrivateTabLockedTopSecretStateController startEditingPassphrase] */

void FUN_106d9be08(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0712c0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    func_0x00010c06c0e0();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07b260();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x40),PTR_s_startEditingPassphrase_1126714d8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106d9be7c; end: 106d9beaf; -[SCGalleryPrivateTabLockedTopSecretStateController stopEditingPassphrase] */

void FUN_106d9be7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0712c0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x40),PTR_s_stopEditingPassphrase_1126731e8);
    return;
  }
  return;
}



/* Entry: 106d9beb0; end: 106d9c0df; -[SCGalleryPrivateTabLockedTopSecretStateController _dismissRateLimitViewAnimated] */

void FUN_106d9beb0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(lVar1);
  _objc_retain(lVar1);
  func_0x00010bf03420(0x3fd3333333333333,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e85e38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2);
  _objc_release(ppuVar5);
  func_0x00010c16b780(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,*(undefined8 *)(lVar1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d9c0e0; end: 106d9c0eb;  */

void FUN_106d9c0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106d9c0ec; end: 106d9c123;  */

void FUN_106d9c0ec(long param_1,undefined8 param_2)

{
  func_0x00010c21e900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c24ead0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startEditingPassphrase_1126714d8);
  return;
}



/* Entry: 106d9c124; end: 106d9c30f; -[SCGalleryPrivateTabLockedTopSecretStateController _keyboardWillChangeFrame:] */

void FUN_106d9c124(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_5 + 0x40);
  func_0x00010c0712c0();
  dVar6 = 0.0;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c2a71e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_7;
    func_0x00010c0e00e0(param_7,param_6,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(lVar3);
    func_0x00010bf513e0(param_1,param_2,param_3,param_4,uVar2,param_6,0);
    dVar5 = param_1;
    func_0x00010bf20c00(uVar2);
    _CGRectGetMaxY();
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar6 = 0.0;
    if (0.0 <= dVar5 - param_1) {
      dVar6 = dVar5 - param_1;
    }
    _objc_release(uVar2);
  }
  dVar5 = *(double *)(param_5 + 0x28);
  if (dVar5 != dVar6) {
    *(double *)(param_5 + 0x28) = dVar6;
    lVar3 = param_7;
    func_0x00010c0e00e0(param_7,param_6,
                        *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar3);
    lVar3 = param_7;
    func_0x00010c0e00e0(param_7,param_6,
                        *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    _objc_release(lVar3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d9c310;
    puStack_70 = &UNK_110842e18;
    lStack_68 = param_5;
    func_0x00010bf03440(dVar5,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,lVar4 << 0x10 | 4,
                        &puStack_88,0);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106d9c310; end: 106d9c3f3;  */

void FUN_106d9c310(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  dVar3 = 0.0;
  func_0x00010c1d0bc0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c14df20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (0.0 < dVar4) {
    dVar3 = -*(double *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  func_0x00010c1d0bc0(dVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106d9c3f4; end: 106d9c48f; -[SCGalleryPrivateTabLockedTopSecretStateController _didPressPassphraseOptionsButton] */

void FUN_106d9c3f4(long param_1)

{
  int iVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
  func_0x00010c06c0e0();
  if (iVar1 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106d9c544;
    puStack_58 = &UNK_11097b188;
    lStack_50 = param_1;
    func_0x000108de6d20(&puStack_70);
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106d9c490;
    puStack_30 = &UNK_11097b158;
    lStack_28 = param_1;
    func_0x000108de6a98(&puStack_48);
  }
  return;
}



/* Entry: 106d9c490; end: 106d9c543;  */

void FUN_106d9c490(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    func_0x00010c1a7f60(param_2,param_2,1);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d27c0;
      _objc_alloc();
      lVar1 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c03d280();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x58) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c251bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_startWithPresentationAnimationTy_112672110,1)
    ;
    return;
  }
  return;
}



/* Entry: 106d9c544; end: 106d9c69b;  */

void FUN_106d9c544(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    if (param_4 != 0) {
      func_0x00010c1a7f60(param_2);
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
      if (lVar1 == 0) {
        puVar2 = PTR_PTR_1126d27c0;
        _objc_alloc();
        lVar1 = *(long *)(param_1 + 0x20) + 0x18;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c03d280();
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
        *(undefined **)(*(long *)(param_1 + 0x20) + 0x58) = puVar2;
        _objc_release(uVar3);
        _objc_release(lVar1);
        func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
        lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
      }
      func_0x00010c251ba0(lVar1);
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126d27e0;
      _objc_alloc();
      lVar1 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0168e0();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x60) = puVar2;
      _objc_release(uVar3);
      _objc_release(lVar1);
      func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
      lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
    }
    func_0x00010c24d960(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d9c69c; end: 106d9c6b3; -[SCGalleryPrivateTabLockedTopSecretStateController delegate] */

void FUN_106d9c69c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9c6b4; end: 106d9c6bf; -[SCGalleryPrivateTabLockedTopSecretStateController setDelegate:] */

void FUN_106d9c6b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 200,param_3);
  return;
}



/* Entry: 106d9c6c0; end: 106d9c7e3; -[SCGalleryPrivateTabLockedTopSecretStateController .cxx_destruct] */

void FUN_106d9c6c0(long param_1)

{
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d9c7e4; end: 106d9c92f; -[SCGalleryPrivateGalleryChangePasscodeFlow initWithFromViewController:effects:userTrackedLogger:grapheneRegistry:currentPageTracker:privateGalleryManager:] */

undefined1 *
FUN_106d9c7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f6d88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d9c930; end: 106d9c93f; -[SCGalleryPrivateGalleryChangePasscodeFlow isStarted] */

bool FUN_106d9c930(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106d9c940; end: 106d9ca77; -[SCGalleryPrivateGalleryChangePasscodeFlow start] */

void FUN_106d9c940(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010c07f840();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar5 = PTR_PTR_1126d27e8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85e58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeb40();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar5;
  _objc_release(uVar8);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28));
  puVar5 = PTR_PTR_1126d27a0;
  _objc_alloc();
  func_0x00010c040300();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar5;
  _objc_release(uVar2);
  func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c219b20(*(undefined8 *)(param_1 + 0x20));
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c10eda0();
  _objc_release(lVar4);
  puVar5 = *(undefined **)(param_1 + 0x20);
  if (puVar5 != (undefined *)0x0) {
    _objc_retain();
    func_0x00010c1070e0(puVar5);
    func_0x000108df583c();
    puVar7 = puVar5;
    func_0x00010c106ec0();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c14cde0();
    _objc_release(puVar5);
    if (puVar6 == puVar7) {
      return;
    }
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 106d9ca78; end: 106d9cb1b; -[SCGalleryPrivateGalleryChangePasscodeFlow navigationController:willShowViewController:animated:] */

void FUN_106d9ca78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x28) == param_4) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09fc60();
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    if (((lVar1 != param_4) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != param_4)) &&
       (lVar1 = *(long *)(param_1 + 0x48), lVar1 != param_4)) goto LAB_106d9cb00;
  }
  func_0x00010c137fe0(lVar1);
LAB_106d9cb00:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9cb1c; end: 106d9cb2b; -[SCGalleryPrivateGalleryChangePasscodeFlow navigationController:animationControllerForOperation:fromViewController:toViewController:] */

void FUN_106d9cb1c(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0f29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_pagingAnimatorForOperation__11261a488,in_x3);
  return;
}



/* Entry: 106d9cb2c; end: 106d9cb3f; -[SCGalleryPrivateGalleryChangePasscodeFlow animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_106d9cb2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d27a0,PTR_s_transitioningAnimatorForPresenti_11267c550,1,0);
  return;
}



/* Entry: 106d9cb40; end: 106d9cb97; -[SCGalleryPrivateGalleryChangePasscodeFlow animationControllerForDismissedController:] */

void FUN_106d9cb40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c275140(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x58);
  _objc_release();
  func_0x00010c27aca0(PTR_PTR_1126d27a0,param_2,0,lVar1 == lVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9cb98; end: 106d9cca7; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPasscodeViewControllerDidPressBack:] */

void FUN_106d9cb98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == param_3) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf84b00();
    _objc_release(lVar1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x000108df596c();
  }
  else if (*(long *)(param_1 + 0x30) == param_3) {
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x38) != param_3) goto LAB_106d9cc8c;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  _objc_release(lVar1);
LAB_106d9cc8c:
  _objc_release(param_3);
  return;
}



/* Entry: 106d9cca8; end: 106d9cce7;  */

void FUN_106d9cca8(long param_1)

{
  long lVar1;
  
  func_0x00010be92140(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x90;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c114120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d9cce8; end: 106d9cd93; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPasscodeViewController:didCreatePasscode:] */

void FUN_106d9cce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85e78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee8e0();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x38),1);
  return;
}



/* Entry: 106d9cd94; end: 106d9ce7f; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPasscodeViewControllerDidPressUsePassphrase:] */

void FUN_106d9cd94(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d27f0;
  _objc_alloc();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85e98;
  ppuVar2 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e85eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85eb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85e98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee920();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x48),1);
  return;
}



/* Entry: 106d9ce80; end: 106d9cf0f; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPasscodeViewControllerDidConfirmPasscode:] */

void FUN_106d9ce80(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ed8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ed8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee9c0();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x40),1);
  return;
}



/* Entry: 106d9cf10; end: 106d9cfa3; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPasscodeViewControllerDidUnlock:] */

void FUN_106d9cf10(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d27e8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85ef8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85ef8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee900();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x30),1);
  return;
}



/* Entry: 106d9cfa4; end: 106d9cfdb; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPassphraseViewControllerDidPressBack:] */

void FUN_106d9cfa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9cfdc; end: 106d9d083; -[SCGalleryPrivateGalleryChangePasscodeFlow enterPassphraseViewController:didCreatePassphrase:] */

void FUN_106d9cfdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126d27f8;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e85f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea00();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,
             *(undefined8 *)(param_1 + 0x50),1);
  return;
}



/* Entry: 106d9d084; end: 106d9d107; -[SCGalleryPrivateGalleryChangePasscodeFlow confirmPassphraseViewControllerDidPressBack:] */

void FUN_106d9d084(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == param_3) {
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x50) != param_3) goto LAB_106d9d0f8;
    func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  _objc_release(uVar1);
LAB_106d9d0f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9d108; end: 106d9d19b; -[SCGalleryPrivateGalleryChangePasscodeFlow confirmPassphraseViewControllerDidPressQuestionMark:] */

void FUN_106d9d108(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e85f38;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c3a18;
    _objc_alloc();
    func_0x00010c057da0();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar3;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x60));
    func_0x00010c11c520(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106d9d19c; end: 106d9d327; -[SCGalleryPrivateGalleryChangePasscodeFlow confirmPassphraseViewControllerDidConfirmPassphrase:] */

void FUN_106d9d19c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == param_3) {
    lVar3 = 0x10;
  }
  else {
    if (*(long *)(param_1 + 0x50) != param_3) {
      lVar3 = 0;
      goto LAB_106d9d1fc;
    }
    lVar3 = 0x18;
  }
  lVar3 = *(long *)(param_1 + lVar3);
  _objc_retain(lVar3);
LAB_106d9d1fc:
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    func_0x00010c1e3540(uVar2);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106d9d328; end: 106d9d4f3;  */

void FUN_106d9d328(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079a60();
    _objc_release(uVar2);
    func_0x00010bfb0300(PTR_PTR_1126b24e0);
    puVar3 = PTR_PTR_1126d2800;
    _objc_opt_new(PTR_PTR_1126d2800);
    func_0x00010c1acb60();
    func_0x00010c1ccae0(puVar3);
    func_0x00010c226f80(puVar3);
    if (param_3 != 0) {
      lVar4 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1971a0(puVar3);
      _objc_release(lVar4);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar2);
    if (param_2 == 0) {
      func_0x000108de5c34();
    }
    else {
      puVar5 = PTR_PTR_1126d2808;
      _objc_alloc();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e85f78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e85f78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0511e0();
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined **)(lVar1 + 0x58) = puVar5;
      _objc_release(uVar2);
      _objc_release(ppuVar6);
      func_0x00010c18b5e0(*(undefined8 *)(lVar1 + 0x58));
      func_0x00010c11c520(*(undefined8 *)(lVar1 + 0x20));
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d9d4f4; end: 106d9d5e3; -[SCGalleryPrivateGalleryChangePasscodeFlow finishChangeViewControllerDidPressFinish:] */

void FUN_106d9d4f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fc60();
  _objc_release(uVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf84b00();
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x000108df596c();
  _objc_release(param_1);
  return;
}



/* Entry: 106d9d5e4; end: 106d9d61b; -[SCGalleryPrivateGalleryChangePasscodeFlow memoriesInformationWebViewControllerDidPressBack:] */

void FUN_106d9d5e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9d61c; end: 106d9d69f; -[SCGalleryPrivateGalleryChangePasscodeFlow _reset] */

void FUN_106d9d61c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d9d6a0; end: 106d9d6b7; -[SCGalleryPrivateGalleryChangePasscodeFlow delegate] */

void FUN_106d9d6a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d9d6b8; end: 106d9d6c3; -[SCGalleryPrivateGalleryChangePasscodeFlow setDelegate:] */

void FUN_106d9d6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 106d9d6c4; end: 106d9d7ab; -[SCGalleryPrivateGalleryChangePasscodeFlow .cxx_destruct] */

void FUN_106d9d6c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


