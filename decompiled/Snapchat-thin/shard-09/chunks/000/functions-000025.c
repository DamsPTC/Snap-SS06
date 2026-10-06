/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068382ac; end: 1068382af;  */

void FUN_1068382ac(void)

{
  return;
}



/* Entry: 1068382b0; end: 106838423;  */

void FUN_1068382b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2a2a40();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbea00();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(uVar2);
      func_0x00010befcaa0(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      goto LAB_1068383f0;
    }
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
LAB_1068383f0:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106838424; end: 106838483;  */

/* WARNING: Possible PIC construction at 0x000106838460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106838464) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106838424(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = *(undefined **)(param_1 + 0x38);
  }
  else {
    puVar1 = PTR_PTR_1126b1c68;
    func_0x00010c29be00(PTR_PTR_1126b1c68,param_2,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_completeWithValue__1125ae900,puVar1);
  return;
}



/* Entry: 106838484; end: 1068389cf; -[SCStandardExternalShareActionHandler initWithUiContainer:router:textConfiguration:mediaConfiguration:phoneNumber:shareUIType:shareSource:eventSubject:performerProvider:externalMediaLinkSendingService:watermarkGenerator:videoWatermarkService:circumstanceEngine:delegate:notificationPool:genAIDreamsService:featureSettingsService:] */

undefined8 *
FUN_106838484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,ulong param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126f3718;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_14;
    _objc_release(uVar2);
    puVar1[0xd] = param_9;
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1068389d0;
    puStack_a8 = &UNK_1108544e0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_11);
    uStack_a0 = param_11;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_16);
    _objc_retain();
    uVar4 = param_16;
    _objc_opt_respondsToSelector(param_16,PTR_s_setShareDestinationSelectionHand_11265d520);
    _objc_release(param_16);
    if ((uVar4 & 1) != 0) {
      puVar5 = puVar1 + 10;
      _objc_loadWeakRetained(puVar5);
      puStack_e8 = puVar6;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x106838a18;
      puStack_d0 = &UNK_110850658;
      _objc_copyWeak(auStack_c8,auStack_90);
      func_0x00010c1febe0(puVar5);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_c8);
    }
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar6;
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    _objc_copyWeak(auStack_f0,auStack_90);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar6;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126ce6a0;
    _objc_opt_new();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar6;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068389d0; end: 106838a93;  */

void FUN_1068389d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106838a94; end: 106838ba7; -[SCStandardExternalShareActionHandler handleShareDestination:] */

void FUN_106838a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b5630;
  func_0x00010c159000(PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010beb9a20(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106838ba8; end: 106838bdb;  */

void FUN_106838ba8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ff60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106838bdc; end: 106838ca3; -[SCStandardExternalShareActionHandler handleDismiss] */

void FUN_106838bdc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106838ca4; end: 106838ccf;  */

void FUN_106838ca4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106838cd0; end: 106838f27; -[SCStandardExternalShareActionHandler _generateMediaLinkWithShareDestination:mediaConfiguration:textConfiguration:phoneNumber:] */

void FUN_106838cd0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x000108f935c4(param_4,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar2);
    func_0x000108f95118();
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar2;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar8);
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    uVar5 = uVar8;
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c45e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071260(param_4);
    uVar4 = uVar5;
    func_0x00010bf57120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106838f28; end: 106839167;  */

void FUN_106838f28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000108f95118();
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  puVar2 = PTR_PTR_1126b5630;
  func_0x00010bfbfb20(uVar10,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126af5d0;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0 || param_4 != 0) {
    if (param_4 == 0) {
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_50 = &PTR____CFConstantStringClassReference_110e614b8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  _objc_initWeak(auStack_60,uVar9);
  _objc_retain();
  func_0x00010be97a40(uVar9);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  uVar5 = *(ulong *)(param_3 + 0x20);
  if (uVar5 == 0) {
    return;
  }
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c06f880();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) {
    return;
  }
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
  uVar9 = uVar10;
  func_0x000108faa364();
  puVar2 = PTR_PTR_1126ae558;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x58);
    func_0x000108faa350();
    if (iVar1 == 0) goto LAB_106839260;
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0c3fe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57500();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c0c45e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
  }
  _objc_release(uVar7);
LAB_106839260:
  func_0x000108f95118();
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  puVar2 = PTR_PTR_1126b5630;
  func_0x00010bfbfb00(uVar10,uVar9,PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106839168; end: 1068392b3; -[SCStandardExternalShareActionHandler _generateMediaForShareDestination:] */

void FUN_106839168(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (uVar2 == 0) {
    return;
  }
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06f880();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  func_0x000108f95118();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x58);
  uVar7 = param_1;
  func_0x000108faa364();
  puVar6 = PTR_PTR_1126ae558;
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x58);
    func_0x000108faa350();
    if (iVar1 == 0) goto LAB_106839260;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0c3fe0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57500();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0c45e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beffb40(puVar6,param_3,uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
LAB_106839260:
  func_0x000108f95118();
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  puVar6 = PTR_PTR_1126b5630;
  func_0x00010bfbfb00(param_1,uVar7,PTR_PTR_1126b5630,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_3,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1068392b4; end: 10683943f; -[SCStandardExternalShareActionHandler _updateMediaConfigurationForShareDestination:lensData:] */

void FUN_1068392b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_4;
      func_0x00010c094fa0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c11a5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_4;
        func_0x00010c094540(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        func_0x00010c094fa0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c11a5e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010c092080(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108f95f00(param_3);
        uVar7 = uVar4;
        func_0x00010c097fa0(uVar4,param_2,lVar1,lVar3,lVar6,0,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(uVar4);
        func_0x00010bedb420(param_1,param_2,uVar7);
        _objc_release(uVar7);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106839440; end: 106839713; -[SCStandardExternalShareActionHandler _updateMediaConfigurationWithWatermarkProfile:] */

void FUN_106839440(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010c0c3fe0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c0c45e0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  if (*(ulong *)(param_1 + 0x68) < 0x1a &&
      (1L << (*(ulong *)(param_1 + 0x68) & 0x3f) & 0x3fbff6bU) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x000108faa364();
    if (iVar1 != 0) goto LAB_1068394d8;
    func_0x00010bfc0740();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 != 0) && (lVar5 != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x000108faa350();
      _objc_release(lVar5);
      if (iVar1 == 0) goto LAB_1068395b0;
      lVar5 = lVar11;
      func_0x00010bfc0740();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      (**(code **)(lVar5 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      goto LAB_106839598;
    }
  }
  else {
LAB_1068394d8:
    lVar6 = lVar11;
    func_0x00010bfc0780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_3 == 0) || (lVar6 == 0)) goto LAB_1068395b0;
    func_0x00010bfc0780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    lVar6 = lVar2;
    lVar3 = lVar4;
LAB_106839598:
    _objc_release(lVar8);
    lVar2 = lVar6;
  }
  _objc_release(lVar5);
LAB_1068395b0:
  puVar7 = PTR_PTR_1126b2490;
  _objc_alloc();
  func_0x00010c0c6c20();
  func_0x00010c106740();
  func_0x00010bfb4ac0();
  if (param_3 != 0) {
    func_0x00010c2357e0(param_3);
  }
  lVar5 = lVar11;
  func_0x00010bfc0740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010bfc0780();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0c6d00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010c116020();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010bf8a6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071260();
  func_0x00010c028f20();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar7;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106839714; end: 1068398b7; -[SCStandardExternalShareActionHandler _updateMediaConfigurationWatermarkProfileShareDestination:] */

void FUN_106839714(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2a2a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c2a2a00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2488;
    _objc_alloc();
    uVar4 = uVar2;
    func_0x00010c2357e0();
    uVar5 = uVar2;
    func_0x00010c094540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c095760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c090160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c2a2a20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c290c40(uVar2);
    uVar10 = uVar2;
    func_0x00010bf0e960();
    func_0x000108f95f00();
    func_0x00010c2a2a40();
    func_0x00010c10aa20();
    func_0x00010c046300(puVar3,param_2,uVar4 & 0xffffffff,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                        param_3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bedb420(param_1,param_2,puVar3);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1068398b8; end: 106839ad3; -[SCStandardExternalShareActionHandler _handleShareDestination:] */

void FUN_1068398b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  lVar2 = param_1;
  func_0x00010be08b40();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106839ad4;
  puStack_a8 = &UNK_1109433b8;
  uStack_78 = (undefined1)lVar2;
  ppuVar1 = &puStack_c0;
  lStack_a0 = param_1;
  uStack_98 = uVar6;
  uStack_90 = uVar5;
  uStack_88 = uVar7;
  uStack_80 = param_3;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    _objc_initWeak(auStack_c8,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar8);
    _objc_retain(ppuVar1);
    _objc_copyWeak(auStack_d8,auStack_c8);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uStack_d0 = param_3;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_d8);
    _objc_release(ppuVar1);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(uVar8);
  _objc_release(ppuVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  return;
}



/* Entry: 106839ad4; end: 106839e23;  */

void FUN_106839ad4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2a2a00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2357e0();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar2);
LAB_106839b58:
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126b5630;
    func_0x00010bfd2740(PTR_PTR_1126b5630);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4);
  }
  else {
    uVar5 = param_3;
    func_0x00010c0c6c20();
    if ((uVar5 == 0) || (uVar5 = param_3, func_0x00010c0c6c20(), uVar5 == 1)) {
      uVar5 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010c2a2a00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c290c40();
      _objc_release(uVar1);
    }
    _objc_release(uVar2);
    if (((*(byte *)(param_1 + 0x48) & 1) != 0) || ((uVar5 & 1) != 0)) goto LAB_106839b58;
    uVar2 = param_3;
    func_0x000108f935c4(param_3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
    if ((int)uVar2 == 0) goto LAB_106839b94;
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar3);
    func_0x00010be1b600(*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar3);
    func_0x00010bedb400(*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar3);
    func_0x000108f95118();
    uVar2 = param_3;
    func_0x00010c2a2a00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c2a2a00();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 != 0) goto LAB_106839ce0;
    }
    else {
LAB_106839ce0:
      uVar5 = uVar2;
      func_0x00010c2a2a40();
      if ((uVar5 == 1) && (uVar5 = uVar2, func_0x00010c10aa20(), uVar5 != 0xffffffffffffffff)) {
        func_0x00010c10aa20(uVar2);
      }
      func_0x00010c2a2a40(uVar2);
      _objc_release(uVar2);
    }
    func_0x00010c077880();
    func_0x00010bf8a6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfc0760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar3);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_release(param_3);
  }
  _objc_release(puVar3);
LAB_106839b94:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106839e24; end: 106839f8b;  */

void FUN_106839e24(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  lVar6 = param_3;
  if (param_3 == 0) {
    lVar6 = *(long *)(param_2 + 0x20);
  }
  _objc_retain(lVar6);
  func_0x000108f95118();
  puVar2 = PTR_PTR_1126b5630;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0922e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfed9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a2a60(*(undefined8 *)(param_2 + 0x50),param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = PTR_PTR_1126b5630;
  func_0x00010bfd2740(PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106839f8c; end: 10683a2bb;  */

void FUN_106839f8c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c2a2a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010c0922e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfed9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      lVar3 = param_1 + 0x38;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        puVar1 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf17b60();
        _objc_release(puVar1);
        uVar8 = *(undefined8 *)(lVar3 + 0x60);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010c0922e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfed9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108f95f00(*(undefined8 *)(param_1 + 0x40));
        puStack_78 = puVar6;
        _objc_copyWeak(auStack_80,param_1 + 0x38);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        puStack_70 = puVar2;
        _objc_retain(uVar9);
        _objc_retain(param_2);
        uStack_68 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c097f80(uVar8);
        _objc_release(lVar7);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(uVar8);
        _objc_release(param_2);
        _objc_release(uVar9);
        _objc_destroyWeak(auStack_80);
        _objc_release(lVar3);
      }
      goto LAB_10683a04c;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    lVar3 = param_2;
    func_0x00010c0922e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfed9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedb3e0(uVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  }
  else {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  (**(code **)(lVar3 + 0x10))(lVar3,param_2,uVar8);
LAB_10683a04c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10683a2bc; end: 10683a3d7;  */

void FUN_10683a2bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x00010c2357e0();
    if ((int)uVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0922e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfed9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedb3e0(lVar2);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bedb420(lVar2);
    }
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(lVar2 + 0x20));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10683a3d8; end: 10683a407; -[SCStandardExternalShareActionHandler _handleDismiss] */

void FUN_10683a3d8(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22af00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683a408; end: 10683a4ff; -[SCStandardExternalShareActionHandler _respondToEvent:] */

void FUN_10683a408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10683a500; end: 10683a617;  */

void FUN_10683a500(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10683a624;
  puStack_50 = &UNK_110943178;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0bfa40(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10683a618; end: 10683a623;  */

void FUN_10683a618(void)

{
  return;
}



/* Entry: 10683a624; end: 10683a6b3;  */

void FUN_10683a624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be979c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683a6b4; end: 10683a6c3;  */

void FUN_10683a6b4(void)

{
  return;
}



/* Entry: 10683a6c4; end: 10683a6f7;  */

void FUN_10683a6c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683a6f8; end: 10683a72b; -[SCStandardExternalShareActionHandler _handleCompleteShareWithShareDestination:] */

void FUN_10683a6f8(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22af00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683a72c; end: 10683a817; -[SCStandardExternalShareActionHandler _routeShareAction:mediaConfiguration:textConfiguration:phoneNumber:] */

void FUN_10683a72c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010be08b40(param_1,param_2,*(undefined8 *)(param_1 + 0x68),param_3,param_4);
  if ((int)lVar3 == 0) {
    func_0x00010be97a00(param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  else {
    func_0x00010be97a20(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683a818; end: 10683aa07; -[SCStandardExternalShareActionHandler _routeShareActionForMediaLink:mediaConfiguration:textConfiguration:phoneNumber:] */

void FUN_10683a818(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x000108f935c4(param_4,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    func_0x00010be97a00(param_1);
  }
  else {
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10683aa08;
    puStack_90 = &UNK_110943568;
    lStack_88 = param_1;
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    _objc_retain(param_6);
    ppuVar2 = &puStack_a8;
    uStack_70 = param_6;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00010be04c00(param_1);
    }
    else {
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b60();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010bfb0d80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10683aa08; end: 10683aaab;  */

void FUN_10683aa08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_initWeak(auStack_38,uVar1);
  _objc_retain();
  func_0x00010be97a40(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10683aaac; end: 10683ab7b;  */

void FUN_10683aaac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10683ab7c; end: 10683ab9f;  */

void FUN_10683ab7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010683ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 10683aba0; end: 10683ad2f; -[SCStandardExternalShareActionHandler _displayPrivacyAlertIfNeededForMediaLinkGeneration:mediaConfiguration:textConfiguration:phoneNumber:] */

void FUN_10683aba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb9c0();
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10683ad30;
    puStack_a0 = &UNK_1108e3c60;
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_98 = uVar1;
    uStack_90 = uVar3;
    uStack_60 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    uStack_80 = param_5;
    _objc_retain(param_6);
    uStack_78 = param_6;
    uStack_70 = uVar4;
    func_0x000100162d98("APPSTORE",&puStack_b8);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be1b620(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10683ad30; end: 10683af57;  */

void FUN_10683ad30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdda9e0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001068472a4();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10683af58;
  puStack_a0 = &UNK_1109435f8;
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  lVar9 = param_1 + 0x50;
  _objc_copyWeak(auStack_70,lVar9);
  uStack_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_88 = uStack_c8;
  uStack_90 = uStack_d0;
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar10;
  _objc_retain(uVar11);
  uStack_78 = uVar11;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000106847274();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010684728c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  puVar7 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_d8 = FUN_10683af58;
  puStack_110 = puVar6;
  puStack_108 = puVar3;
  puStack_100 = puVar5;
  puStack_f8 = puVar4;
  puStack_f0 = puVar2;
  puStack_e8 = puVar7;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  func_0x00010bf84b00(lVar9);
  func_0x00010c1a6b60(*(undefined8 *)(puVar8 + 0x20));
  puVar7 = puVar8 + 0x48;
  _objc_loadWeakRetained(puVar7);
  func_0x00010beb9a20();
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(puVar8 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_120,puVar8 + 0x48);
  uStack_118 = *(undefined8 *)(puVar8 + 0x50);
  uVar12 = *(undefined8 *)(puVar8 + 0x30);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(puVar8 + 0x38);
  _objc_retain(uVar13);
  uVar11 = *(undefined8 *)(puVar8 + 0x40);
  _objc_retain(uVar11);
  func_0x00010c0f7fc0(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_destroyWeak(auStack_120);
  _objc_release(lVar9);
  return;
}



/* Entry: 10683af58; end: 10683b0a7;  */

void FUN_10683af58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  func_0x00010c1a6b60(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beb9a20();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x48);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10683b0a8; end: 10683b0e3;  */

void FUN_10683b0a8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1b620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683b0e4; end: 10683b5a7; -[SCStandardExternalShareActionHandler _routeShareActionForMediaLinkResponse:linkCreationError:shareDestination:mediaConfiguration:textConfiguration:phoneNumber:] */

void FUN_10683b0e4(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  ulong param_6,undefined *param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x80));
  if ((param_3 == (undefined *)0x0) || (param_4 != 0)) {
    if ((param_7 == (undefined *)0x0) &&
       (lVar1 = param_1, func_0x00010beb1b60(param_1,param_2,param_5), (int)lVar1 != 0)) {
      if (*(long *)(param_1 + 0xa0) != 0) {
        puVar18 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941e0();
        _objc_release(puVar18);
      }
      puVar18 = PTR_PTR_1126b5630;
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      func_0x000108f95118();
      func_0x00010bf43b60(puVar18,param_2,param_5,1,0,param_6,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar17,param_2,puVar18);
      _objc_release(puVar18);
      puVar18 = *(undefined **)(param_1 + 0x10);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10683b5a8;
      puStack_78 = &UNK_110842e18;
      puStack_70 = puVar18;
      _objc_retain(puVar18);
      func_0x00010be8c700(param_1,param_2,&puStack_90);
    }
    else {
      _objc_retain(param_7);
      puVar18 = param_7;
      if (param_5 == 0x1b) {
        puVar18 = PTR_PTR_1126b0800;
        _objc_alloc(PTR_PTR_1126b0800);
        puVar2 = param_7;
        func_0x00010c0922e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c051840(puVar18,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,0,0,1
                            ,puVar2);
        _objc_release(param_7);
        _objc_release(puVar2);
      }
      func_0x00010be97a00(param_1,param_2,param_5,param_6,puVar18,param_8,0);
    }
  }
  else {
    puVar2 = param_3;
    func_0x00010c22d2c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar18 = param_3;
      func_0x00010c0b4fc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar18 = puVar2;
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b0800;
    _objc_alloc();
    puVar19 = param_3;
    func_0x00010c0b4fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x00010c04e820();
    puVar4 = param_7;
    func_0x00010c0922e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051840(puVar2,param_2,puVar19,puVar3,0,0x11,1,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar19);
    if (param_6 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR_PTR_1126b2490;
      _objc_alloc();
      uVar5 = param_6;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_6;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_6;
      func_0x00010c0c6c20();
      uVar8 = param_6;
      func_0x00010bfb4ac0();
      uVar9 = param_6;
      func_0x00010bfde6e0();
      uVar10 = param_6;
      func_0x00010c2a2a00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_6;
      func_0x00010bfc0740();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_6;
      func_0x00010bfc0780();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_6;
      func_0x00010c0c6d00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_6;
      func_0x00010c116020();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_6;
      func_0x00010bf8a6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = param_6;
      func_0x00010c077880();
      func_0x00010c071260();
      func_0x00010c028f20(puVar19,param_2,uVar5,uVar6,uVar7,1,uVar8,uVar9 & 0xffffffff,uVar10,uVar11
                          ,uVar12,uVar13,uVar14,uVar15,(char)uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    func_0x00010be97a00(param_1,param_2,param_5,puVar19,puVar2,param_8,0);
    _objc_release(puVar19);
    _objc_release(puVar2);
  }
  _objc_release(puVar18);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10683b5a8; end: 10683b5af;  */

void FUN_10683b5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentShareFailureFeedback_1126212e8);
  return;
}



/* Entry: 10683b5b0; end: 10683b713; -[SCStandardExternalShareActionHandler _routeShareActionAndRemoveNotificationIfNeeded:mediaConfiguration:textConfiguration:phoneNumber:shareIdOverride:] */

void FUN_10683b5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be8c700(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10683b714; end: 10683b74f;  */

void FUN_10683b714(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be979e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683b750; end: 10683ba07; -[SCStandardExternalShareActionHandler _routeShareActionAfterLoadingDismissal:mediaConfiguration:textConfiguration:phoneNumber:shareIdOverride:] */

void FUN_10683b750(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_1 + 0xa0) != 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar2);
  }
  if ((param_4 == 0) || (param_5 == 0)) {
    if (param_4 != 0) goto LAB_10683b814;
LAB_10683b824:
    if (param_5 == 0) goto LAB_10683b9cc;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar3 = param_4;
    func_0x00010c106740();
    if (((int)uVar3 == 0) || (uVar3 = param_1, func_0x00010beb1b40(), (uVar3 & 1) != 0)) {
LAB_10683b814:
      uVar3 = param_1;
      func_0x00010beb1b60();
      if ((uVar3 & 1) != 0) goto LAB_10683b824;
      iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
      func_0x000108faa364();
      uVar3 = param_4;
      if (iVar1 == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
        func_0x000108faa350();
        if (iVar1 != 0) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar3;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10683b8a8;
        }
        uVar7 = 0;
      }
      else {
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar3;
        func_0x00010c08d600();
        _objc_retainAutoreleasedReturnValue();
LAB_10683b8a8:
        _objc_release(uVar3);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      func_0x000108f94918(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(uVar7);
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      func_0x000108f94dd8(uVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_106847a74(uVar6,param_3,puVar5,uVar4,1);
      _objc_release(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(param_3);
      uVar3 = uVar7;
      func_0x00010bf529e0();
      if (1 < uVar3) {
        func_0x00010c10d1a0(*(undefined8 *)(param_1 + 0x10));
      }
      uVar3 = uVar7;
      func_0x00010bf529e0();
      if (uVar3 == 1) {
        func_0x00010c10e420(*(undefined8 *)(param_1 + 0x10));
      }
      _objc_release(uVar7);
      goto LAB_10683b9cc;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x00010c10e7a0(uVar4);
LAB_10683b9cc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683ba08; end: 10683ba23; -[SCStandardExternalShareActionHandler _shareDestinationSupportsTextOnly:] */

uint FUN_10683ba08(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x1b) & 0x4800010U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 10683ba24; end: 10683ba3f; -[SCStandardExternalShareActionHandler _shareDestinationSupportsMediaOnly:] */

uint FUN_10683ba24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x12) & 0x20862U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 10683ba40; end: 10683bac7; -[SCStandardExternalShareActionHandler _enableExportedMediaLinksWithShareSource:shareDestination:mediaConfiguration:] */

uint FUN_10683ba40(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain(param_5);
  if ((param_4 == 0) ||
     ((uVar1 = param_1, func_0x00010beb1b40(), (uVar1 & 1) == 0 &&
      (func_0x000108f95a18(param_4,*(undefined8 *)(param_1 + 0x58)), (int)param_4 != 0)))) {
    uVar2 = 1;
    if (param_3 < 0x1a) {
      uVar2 = 0x40094 >> (ulong)((uint)param_3 & 0x1f);
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_5);
  return uVar2 & 1;
}



/* Entry: 10683bac8; end: 10683bb23; -[SCStandardExternalShareActionHandler _createPerformerWithPerformerProvider:] */

void FUN_10683bac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10683bb24; end: 10683bc07; -[SCStandardExternalShareActionHandler _showAsyncMediaUploadNotificationForShareDestination:] */

void FUN_10683bb24(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  if (param_3 == 1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e61598;
    func_0x000106847154();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e615b8;
    func_0x00010684713c();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ce6b0;
  func_0x00010bf54780(0x4034000000000000,PTR_PTR_1126ce6b0,param_2,uVar3,ppuVar4,
                      *(undefined8 *)(param_1 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10683bc08; end: 10683bcf3; -[SCStandardExternalShareActionHandler _removeLoadingNotificationIfNeededWithCompletion:] */

void FUN_10683bc08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10683bcf4;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = uVar1;
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10683bcf4; end: 10683bdfb;  */

void FUN_10683bcf4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    lVar5 = *(long *)(lVar1 + 0x90);
    if (lVar5 == 0) {
      func_0x00010bdda9e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_new(PTR__OBJC_CLASS___NSNull_1126aef28);
      func_0x00010c0d9840(lVar5,param_2,puVar2);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)(lVar1 + 0x90) = 0;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_10683bdfc;
      puStack_40 = &UNK_110849530;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uStack_38 = uVar4;
      func_0x00010c0f7fc0(uVar3,param_2,&puStack_58);
      _objc_release(uVar3);
      _objc_release(uStack_38);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10683bdfc; end: 10683be07;  */

void FUN_10683bdfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010683be04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10683be08; end: 10683bebf; -[SCStandardExternalShareActionHandler _cancelLoadingNotificationIfNeededHelperWithCompletion:] */

void FUN_10683be08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10683bec0;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10683bec0; end: 10683bed3;  */

void FUN_10683bec0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010683becc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10683bed4; end: 10683bfa7; -[SCStandardExternalShareActionHandler _showLoadingNotificationAfterDelayForShareDestination:] */

void FUN_10683bed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10683bfa8;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uVar1 = 0;
  uStack_40 = param_3;
  func_0x0001008553e8(0,&puStack_68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retainBlock(uVar1);
  func_0x000100c749e0(0x3c23d70a,"APPSTORE",uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10683bfa8; end: 10683bfdb;  */

void FUN_10683bfa8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb7c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683bfdc; end: 10683c05b; -[SCStandardExternalShareActionHandler dealloc] */

void FUN_10683bfdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_new(PTR__OBJC_CLASS___NSNull_1126aef28);
    func_0x00010c0d9840(lVar3);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar2);
  }
  puStack_38 = PTR_PTR_1126f3718;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10683c05c; end: 10683c063; -[SCStandardExternalShareActionHandler circumstanceEngine] */

undefined8 FUN_10683c05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10683c064; end: 10683c06b; -[SCStandardExternalShareActionHandler watermarkGenerator] */

undefined8 FUN_10683c064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10683c06c; end: 10683c073; -[SCStandardExternalShareActionHandler performer] */

undefined8 FUN_10683c06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10683c074; end: 10683c07b; -[SCStandardExternalShareActionHandler subscription] */

undefined8 FUN_10683c074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10683c07c; end: 10683c083; -[SCStandardExternalShareActionHandler videoWatermarkService] */

undefined8 FUN_10683c07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10683c084; end: 10683c08b; -[SCStandardExternalShareActionHandler genAIDreamsService] */

undefined8 FUN_10683c084(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10683c08c; end: 10683c19b; -[SCStandardExternalShareActionHandler .cxx_destruct] */

void FUN_10683c08c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 10683c19c; end: 10683c54b; -[SCStandardExternalShareActionRouter initWithUiContainer:eventSubject:snapSavingService:notificationPool:performerProvider:temporaryFileWriter:inviteService:circumstanceEngine:textConfiguration:delegate:crashLogger:shareSource:pageLauncher:] */

undefined8 *
FUN_10683c19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f3720;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce6a0;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar1[0x11] = 0;
    puVar1[0x12] = param_14;
    uVar2 = param_10;
    func_0x000108faa8c4();
    *(char *)(puVar1 + 0x13) = (char)uVar2;
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[5];
    _objc_retain(param_11);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_release(param_11);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10683c54c; end: 10683c5fb;  */

void FUN_10683c54c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10683c5fc; end: 10683c68f;  */

void FUN_10683c5fc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf80820();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    if ((int)lVar1 == 0) {
      func_0x00010be1be40();
      goto LAB_10683c66c;
    }
  }
  func_0x00010bedfd80();
LAB_10683c66c:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10683c690; end: 10683c84f; -[SCStandardExternalShareActionRouter presentTextOnlyForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

void FUN_10683c690(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010be2ffa0(param_1,param_2,param_3,param_4,0);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_7;
    _objc_release(uVar2);
    switch(param_3) {
    case 2:
    case 3:
    case 0x10:
      func_0x00010be31f80(param_1,param_2,param_4);
      break;
    case 4:
      func_0x00010be31fa0(param_1,param_2,param_4);
      break;
    case 7:
    case 8:
    case 0x12:
      func_0x00010be31fe0(param_1,param_2,param_4);
      break;
    case 9:
      func_0x00010be320e0(param_1,param_2,param_4,param_5);
      break;
    case 10:
      func_0x00010be32000(param_1,param_2,param_4,param_6);
      break;
    case 0xc:
    case 0xd:
    case 0x13:
      func_0x00010be32060(param_1,param_2,param_4);
      break;
    case 0xe:
      func_0x00010be320a0(param_1,param_2,param_4,param_6);
      break;
    case 0xf:
    case 0x19:
      func_0x00010be279a0(param_1,param_2,param_4,param_3);
      break;
    case 0x14:
      func_0x00010be31fc0(param_1,param_2,param_4);
      break;
    case 0x15:
      func_0x00010be32040(param_1,param_2,param_4);
      break;
    case 0x16:
      func_0x00010be32080(param_1,param_2,param_4);
      break;
    case 0x17:
      func_0x00010be2b6a0(param_1,param_2,param_4);
      break;
    case 0x1a:
      func_0x00010be32020(param_1,param_2,param_4);
      break;
    case 0x1b:
      func_0x00010be320c0(param_1,param_2,0,param_4);
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



/* Entry: 10683c850; end: 10683c90f; -[SCStandardExternalShareActionRouter presentSingleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

void FUN_10683c850(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010be2ffa0(param_1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_7;
    _objc_release(uVar2);
    func_0x00010be7e920(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683c910; end: 10683cb13; -[SCStandardExternalShareActionRouter _presentSingleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:] */

void FUN_10683c910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  switch(param_3) {
  case 1:
    func_0x00010be9a220(param_1,param_2,param_5,param_4);
    break;
  case 2:
  case 3:
  case 0x10:
    func_0x00010be30360(param_1,param_2,param_5,param_4);
    break;
  case 5:
  case 0x11:
    func_0x00010be30320(param_1,param_2,param_5,param_4);
    break;
  case 6:
    func_0x00010be30340(param_1,param_2,param_5,param_4);
    break;
  case 7:
  case 8:
  case 0x12:
    func_0x00010be303a0(param_1,param_2,param_5,param_4);
    break;
  case 9:
    uVar1 = param_4;
    func_0x00010c0922e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2ffe0(param_1,param_2,9,PTR____NSArray0__struct_11034ab48,0,param_5,param_4,uVar2)
    ;
    _objc_release(uVar2);
    _objc_release(uVar1);
    break;
  case 10:
    func_0x00010be303c0(param_1,param_2,param_5,param_4,param_6);
    break;
  case 0xb:
    func_0x00010be30400(param_1,param_2,param_5,param_4);
    break;
  case 0xc:
  case 0xd:
  case 0x13:
    func_0x00010be30420(param_1,param_2,param_5,param_4);
    break;
  case 0xe:
    func_0x00010be30460(param_1,param_2,param_5,param_4);
    break;
  case 0xf:
  case 0x19:
    func_0x00010be30300(param_1,param_2,param_5,param_4,param_3);
    break;
  case 0x14:
    func_0x00010be30380(param_1,param_2,param_5,param_4);
    break;
  case 0x15:
    func_0x00010be303e0(param_1,param_2,param_5,param_4);
    break;
  case 0x16:
    func_0x00010be30440(param_1,param_2,param_5,param_4);
    break;
  case 0x1b:
    func_0x00010be320c0(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683cb14; end: 10683cbd3; -[SCStandardExternalShareActionRouter presentMultipleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:shareIdOverride:] */

void FUN_10683cb14(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010be2ffa0(param_1,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_7;
    _objc_release(uVar2);
    func_0x00010be7c9c0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683cbd4; end: 10683cdbf; -[SCStandardExternalShareActionRouter _presentMultipleMediaForShareDestination:textConfiguration:mediaConfiguration:phoneNumber:] */

void FUN_10683cbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  switch(param_3) {
  case 1:
    func_0x00010be9a220(param_1,param_2,param_5,param_4);
    break;
  case 2:
  case 3:
  case 0x10:
    func_0x00010be30360(param_1,param_2,param_5,param_4);
    break;
  case 4:
  case 5:
  case 6:
  case 0x11:
    func_0x00010be2c740(param_1,param_2,param_5,param_4);
    break;
  case 7:
  case 8:
  case 0x12:
    func_0x00010be303a0(param_1,param_2,param_5,param_4);
    break;
  case 9:
    uVar1 = param_4;
    func_0x00010c0922e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2ffe0(param_1,param_2,9,PTR____NSArray0__struct_11034ab48,0,param_5,param_4,uVar2)
    ;
    _objc_release(uVar2);
    _objc_release(uVar1);
    break;
  case 10:
    func_0x00010be303c0(param_1,param_2,param_5,param_4,param_6);
    break;
  case 0xb:
    func_0x00010be30400(param_1,param_2,param_5,param_4);
    break;
  case 0xc:
  case 0xd:
  case 0x13:
    func_0x00010be30420(param_1,param_2,param_5,param_4);
    break;
  case 0xe:
    func_0x00010be30460(param_1,param_2,param_5,param_4);
    break;
  case 0xf:
  case 0x19:
    func_0x00010be2c720(param_1,param_2,param_5,param_4);
    break;
  case 0x14:
    func_0x00010be30380(param_1,param_2,param_5,param_4);
    break;
  case 0x15:
    func_0x00010be303e0(param_1,param_2,param_5,param_4);
    break;
  case 0x16:
    func_0x00010be30440(param_1,param_2,param_5,param_4);
    break;
  case 0x1b:
    func_0x00010be320c0(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10683cdc0; end: 10683d017; -[SCStandardExternalShareActionRouter _handleCopyLinkShare:shareDestination:] */

void FUN_10683cdc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  char cStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf17b60();
  _objc_release(puVar2);
  func_0x000108f95118();
  puVar4 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_2 + 0x98);
  _objc_initWeak(auStack_80,param_2);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (cVar1 == '\x01') {
    lVar5 = param_4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar6;
    func_0x00010c08fa60();
    lVar7 = lVar6;
    if (lVar5 == 0) {
      lVar7 = param_4;
      func_0x00010c26bac0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c20e7c0(puVar4);
    if (lVar5 == 0) {
      _objc_release(lVar7);
    }
    puStack_a8 = puVar2;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10683d018;
    puStack_90 = &UNK_1108434b0;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x0001000d76cc("APPSTORE",&puStack_a8);
    _objc_destroyWeak(auStack_88);
    _objc_release(lVar6);
  }
  _objc_retain(puVar4);
  _objc_retain(param_4);
  cStack_b0 = cVar1;
  _objc_copyWeak(auStack_d0,auStack_80);
  uStack_c8 = param_5;
  uStack_c0 = param_1;
  puStack_b8 = puVar3;
  func_0x00010becb4c0(param_2);
  _objc_destroyWeak(auStack_d0);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 10683d018; end: 10683d043;  */

void FUN_10683d018(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683d044; end: 10683d1e7;  */

void FUN_10683d044(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (lVar1 == 0) {
      lVar1 = param_2;
      FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e7c0(uVar2);
      _objc_release(lVar1);
      goto LAB_10683d0b0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010c20e7c0(uVar2);
LAB_10683d0b0:
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10683d37c;
    puStack_60 = &UNK_1108434b0;
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_destroyWeak(auStack_58);
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10683d1e8; end: 10683d37b;  */

void FUN_10683d1e8(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar6 = param_2;
  if (lVar1 != 0) {
    puVar2 = param_2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c26bac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c26bac0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      puVar5 = puVar2;
      func_0x00010c25cfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c26bac0(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar6 = puVar5;
      }
      _objc_release(puVar5);
      _objc_release(puVar2);
      goto LAB_10683d34c;
    }
  }
  func_0x00010c26bac0(param_2);
  _objc_retainAutoreleasedReturnValue();
LAB_10683d34c:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10683d37c; end: 10683d3a7;  */

void FUN_10683d37c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10683d3a8; end: 10683d663; -[SCStandardExternalShareActionRouter _handleTextOrMediaShareForSystemShareSheet:mediaConfiguration:] */

void FUN_10683d3a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf17b60();
  _objc_release(puVar8);
  func_0x000108f95118();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar7);
  if (param_5 == 0) {
LAB_10683d4f8:
    puVar8 = (undefined *)0x0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
    func_0x000108faa364();
    puVar8 = PTR_PTR_1126ae558;
    lVar3 = param_5;
    if (iVar1 == 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x40);
      func_0x000108faa350();
      puVar8 = PTR_PTR_1126ae558;
      if (iVar1 == 0) goto LAB_10683d4f8;
      func_0x00010c0c3fe0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    else {
      func_0x00010c0c45e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08d600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beffb40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_initWeak(auStack_78,param_2);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10683d664;
  puStack_a8 = &UNK_1109436b8;
  puStack_88 = puVar2;
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_5);
  ppuVar6 = &puStack_c0;
  lStack_98 = param_5;
  uStack_80 = param_1;
  _objc_retainBlock();
  _objc_retain(param_5);
  _objc_retain(puVar8);
  _objc_retain(param_4);
  func_0x00010becb4c0(param_2);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(param_5);
  _objc_release(ppuVar6);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10683d664; end: 10683d81b;  */

void FUN_10683d664(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000108f95118();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aeb08;
  _objc_alloc(PTR_PTR_1126aeb08);
  func_0x00010bff0f80();
  _objc_copyWeak(auStack_78,param_2 + 0x30);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_5);
  uStack_70 = *(undefined8 *)(param_2 + 0x40);
  uStack_68 = param_1;
  func_0x00010c17fc60(puVar1);
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdd0840();
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10683d81c; end: 10683da23;  */

void FUN_10683d81c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be52e40();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    puVar3 = PTR_PTR_1132b17b0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(PTR_PTR_1132b17b0);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52ee0(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  if (param_3 != 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    puVar3 = PTR_PTR_1132b17b0;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(PTR_PTR_1132b17b0);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52ee0(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10683da24; end: 10683dd0b;  */

void FUN_10683da24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10683dd0c;
  uStack_70 = 0x10683dd1c;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR_PTR_1126ce6b8;
    _objc_opt_new(PTR_PTR_1126ce6b8);
    func_0x00010c1b1020();
    uVar4 = param_2;
    FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213220(puVar2);
    _objc_release(uVar4);
    func_0x00010c216240(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar2);
    _objc_release(puVar3);
    func_0x00010befa120(puVar1);
    uVar4 = puStack_88[5];
    puStack_88[5] = &PTR____CFConstantStringClassReference_110dbf1d8;
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
              (*(long *)(param_1 + 0x40),puVar1,puStack_88[5],param_2);
    _objc_release(puVar2);
  }
  else {
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x2020000000;
    uStack_98 = 0;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x2020000000;
    uStack_b8 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x2020000000;
    uStack_d8 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c297260(uVar4);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_f0,8);
    __Block_object_dispose(&uStack_d0,8);
    __Block_object_dispose(&uStack_b0,8);
  }
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10683dd0c; end: 10683dd23;  */

void FUN_10683dd0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10683dd24; end: 10683e02f;  */

void FUN_10683dd24(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 != 0) goto LAB_10683dfe8;
  lVar8 = param_2;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      puVar3 = PTR_PTR_1126ce6b8;
      _objc_opt_new(PTR_PTR_1126ce6b8);
      func_0x00010c1b1020();
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        FUN_10683d1e8(uVar4,*(undefined8 *)(param_1 + 0x28));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213220(puVar3);
        _objc_release(uVar4);
        func_0x00010c216240(puVar3);
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21d340(puVar3);
        _objc_release(puVar5);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
      }
      func_0x00010c1dfd20(puVar3);
      func_0x00010c1c4020(puVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c0be4e0(uVar10);
      _objc_release(puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar8 != lVar9);
    lVar8 = param_2;
    func_0x00010bf52a60();
  }
  cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) == '\x01') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    uVar10 = *(undefined8 *)(lVar8 + 0x28);
    if (cVar1 == '\0') {
      ppuVar7 = &PTR____CFConstantStringClassReference_110db6dd8;
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e615f8;
    }
    *(undefined ***)(lVar8 + 0x28) = ppuVar7;
LAB_10683dfc8:
    _objc_release(uVar10);
  }
  else if (cVar1 != '\0') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    uVar10 = *(undefined8 *)(lVar8 + 0x28);
    *(undefined ***)(lVar8 + 0x28) = &PTR____CFConstantStringClassReference_110de7678;
    goto LAB_10683dfc8;
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x20));
LAB_10683dfe8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10683e030; end: 10683e057;  */

void FUN_10683e030(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10683e058; end: 10683e153;  */

void FUN_10683e058(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  return;
}



/* Entry: 10683e154; end: 10683e273; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForFacebook:] */

void FUN_10683e154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010becb4c0(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683e274; end: 10683e353;  */

void FUN_10683e274(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_3;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  func_0x000108f94240(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683e354; end: 10683e4a3; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForWhatsApp:phoneNumber:] */

void FUN_10683e354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_58,param_2);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_68 = param_1;
  puStack_60 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10683e4a4; end: 10683e593;  */

void FUN_10683e4a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f943f0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683e594; end: 10683e6b3; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForMessenger:] */

void FUN_10683e594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683e6b4; end: 10683e79f;  */

void FUN_10683e6b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f94550();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683e7a0; end: 10683e8bf; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForTwitter:] */

void FUN_10683e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683e8c0; end: 10683e9ab;  */

void FUN_10683e8c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f945e4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683e9ac; end: 10683eacb; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForLine:] */

void FUN_10683e9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683eacc; end: 10683ebb7;  */

void FUN_10683eacc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f94678();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683ebb8; end: 10683ecd7; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForTelegram:] */

void FUN_10683ebb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683ecd8; end: 10683edc3;  */

void FUN_10683ecd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f9470c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683edc4; end: 10683eee3; -[SCStandardExternalShareActionRouter _handleTextOnlyShareForViber:] */

void FUN_10683edc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_1;
  puStack_50 = puVar2;
  func_0x00010be22900(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10683eee4; end: 10683efcf;  */

void FUN_10683eee4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  FUN_10683d1e8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f947a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10683efd0; end: 10683f12b; -[SCStandardExternalShareActionRouter _handleLinkShareForLinktree:] */

void FUN_10683efd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x000108f95118();
  uVar3 = param_2;
  func_0x00010becb4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_2);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_1;
  puStack_60 = puVar2;
  func_0x00010becb4c0(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10683f12c; end: 10683f2a3;  */

void FUN_10683f12c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10683f2a4;
  puStack_78 = &UNK_110850cf8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  _objc_retain(param_2);
  uStack_68 = param_2;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6d860(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10683f2a4; end: 10683f32b;  */

void FUN_10683f2a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bd5b0;
  _objc_alloc(PTR_PTR_1126bd5b0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
  }
  func_0x000108f94834(uVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1);
  _objc_release(uVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0840();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


