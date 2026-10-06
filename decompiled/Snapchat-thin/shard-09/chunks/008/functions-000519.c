/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071764c4; end: 107176573; -[SCPreviewCameraRollSnapSavingData encodeWithCoder:] */

void FUN_1071764c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea0cd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ea0cf8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ea0d18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ea0d38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ea0d58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110ea0d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107176574; end: 107176607; -[SCPreviewCameraRollSnapSavingData hash] */

ulong * FUN_107176574(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_40 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1071766d0:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_1071766dc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((char)puVar3[1] == (char)param_3[1] && (puVar3[5] == param_3[5])) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        uVar5 = puVar3[3];
        if ((uVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
          puVar6 = (ulong *)puVar3[4];
          if (puVar6 != (ulong *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1071766dc;
          }
          goto LAB_1071766d0;
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_1071766dc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107176608; end: 1071766f7; -[SCPreviewCameraRollSnapSavingData isEqual:] */

long FUN_107176608(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1071766d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1071766dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1071766dc;
          }
          goto LAB_1071766d0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1071766dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1071766f8; end: 1071766ff; -[SCPreviewCameraRollSnapSavingData isImageSnap] */

undefined1 FUN_1071766f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107176700; end: 107176707; -[SCPreviewCameraRollSnapSavingData saveSessionId] */

undefined8 FUN_107176700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107176708; end: 10717670f; -[SCPreviewCameraRollSnapSavingData exportPolicy] */

undefined8 FUN_107176708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107176710; end: 107176717; -[SCPreviewCameraRollSnapSavingData watermarkProfile] */

undefined8 FUN_107176710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107176718; end: 10717671f; -[SCPreviewCameraRollSnapSavingData watermarkLayout] */

undefined8 FUN_107176718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107176720; end: 107176727; -[SCPreviewCameraRollSnapSavingData isWatermarkingEnabledForImages] */

undefined1 FUN_107176720(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107176728; end: 107176763; -[SCPreviewCameraRollSnapSavingData .cxx_destruct] */

void FUN_107176728(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107176764; end: 10717676b; -[SCCommerceConfigServices commerceConfigProvider] */

undefined8 FUN_107176764(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10717676c; end: 107176777; -[SCCommerceConfigServices .cxx_destruct] */

void FUN_10717676c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107176778; end: 10717677f; -[SCCCommerceShowcaseShowcaseRouteTagType__Enum init] */

void FUN_107176778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10717ed04; end: 10717f267;  */

void FUN_10717ed04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c4328;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c096ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00104();
  func_0x00010c2b2ca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c11fae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6760(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c11fa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6740(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c270160(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb2a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010b70473c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2a7840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10717f268; end: 10717f43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_10717f268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 *****param_7,ulong param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 ****ppppuStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar1 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar2);
  if ((uVar1 & 1) != 0) {
    puVar2 = *(undefined **)(param_6 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_8);
    param_10 = 0x10;
    uVar1 = param_8;
    func_0x00010bf52a60();
    lVar9 = lRam0000000000000000;
    while (uVar1 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar9) {
          _objc_enumerationMutation(param_8);
        }
        uVar8 = *(ulong *)(uVar10 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_opt_isKindOfClass(uVar8,puVar2);
        if ((uVar8 & 1) != 0) {
          func_0x00010befa120(puVar3);
        }
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      param_10 = 0x10;
      uVar1 = param_8;
      func_0x00010bf52a60();
    }
    _objc_release(param_8);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(param_6 + 0x20));
    }
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_7;
  }
  ___stack_chk_fail();
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(uStack_130);
  _objc_retain(uStack_128);
  _objc_retain(uStack_120);
  _objc_retain(uStack_118);
  _objc_retain(uStack_110);
  _objc_retain(uStack_108);
  _objc_retain(uStack_100);
  _objc_retain(uStack_f8);
  _objc_retain(uStack_f0);
  _objc_retain(uStack_e8);
  _objc_retain(uStack_e0);
  _objc_retain(uStack_d8);
  _objc_retain(uStack_d0);
  _objc_retain(uStack_c8);
  puStack_1d0 = PTR_PTR_1126f8ab0;
  pppppuVar4 = &ppppuStack_1d8;
  ppppuStack_1d8 = param_7;
  _objc_msgSendSuper2(pppppuVar4,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    func_0x00010c189400(pppppuVar4);
    lVar6 = (long)_DAT_112764878;
    _objc_retain(uStack_110);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = uStack_110;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11276487c;
    _objc_retain(uStack_120);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = uStack_120;
    _objc_release(uVar5);
    lVar9 = (long)_DAT_112764880;
    _objc_retain(uStack_108);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar9);
    *(undefined8 *)((long)pppppuVar4 + lVar9) = uStack_108;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c3440;
    _objc_alloc();
    func_0x00010c014e00(param_1,param_2,param_3,param_4,param_5);
    lVar9 = (long)_DAT_112764884;
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar9);
    *(undefined **)((long)pppppuVar4 + lVar9) = puVar2;
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar9);
    func_0x00010c153ee0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8740(uVar7);
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)pppppuVar4 + lVar9));
    func_0x00010c189840(*(undefined8 *)((long)pppppuVar4 + lVar9));
    func_0x00010c1ae180(*(undefined8 *)((long)pppppuVar4 + lVar9));
    puVar2 = PTR_PTR_1126d4e48;
    _objc_alloc();
    func_0x00010c035f40();
    uVar5 = *(undefined8 *)((long)pppppuVar4 + (long)_DAT_112764888);
    *(undefined **)((long)pppppuVar4 + (long)_DAT_112764888) = puVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11276488c;
    _objc_retain(param_11);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = param_11;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112764890;
    _objc_retain(param_13);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = param_13;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112764894;
    _objc_retain(param_12);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = param_12;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112764898;
    _objc_retain(uStack_e8);
    uVar5 = *(undefined8 *)((long)pppppuVar4 + lVar6);
    *(undefined8 *)((long)pppppuVar4 + lVar6) = uStack_e8;
    _objc_release(uVar5);
  }
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return pppppuVar4;
}



/* Entry: 10717f440; end: 10717f86b; -[SCPreviewStickerPickerViewController initWithViewFrame:isQuickSend:hideGiphy:commonLoggingParamsBuilder:userSession:bottomInset:stickerPickerLogger:userInteractionStateLogger:menuDelegate:menuDataSource:bitmojiProvider:friendmojiFilteredContainer:itemPresentationModelProvider:ctpItemViewService:stickerSearcher:stickerInjector:customStickerManager:creativeToolsABProvider:runtime:bitmoji3DContentFetcher:userBlizzardLogger:avatarProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10717f440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  puStack_a0 = PTR_PTR_1126f8ab0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_6;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112764878;
    _objc_retain(in_stack_00000020);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_stack_00000020;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276487c;
    _objc_retain(in_stack_00000010);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_stack_00000010;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112764880;
    _objc_retain(in_stack_00000028);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = in_stack_00000028;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3440;
    _objc_alloc();
    func_0x00010c014e00(param_1,param_2,param_3,param_4,param_5);
    lVar6 = (long)_DAT_112764884;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c153ee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8740(uVar4);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1ae180(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR_PTR_1126d4e48;
    _objc_alloc();
    func_0x00010c035f40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764888);
    *(undefined **)((long)puVar1 + (long)_DAT_112764888) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11276488c;
    _objc_retain(in_x5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_x5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764890;
    _objc_retain(in_x7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_x7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764894;
    _objc_retain(in_x6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_x6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764898;
    _objc_retain(in_stack_00000048);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = in_stack_00000048;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 10717f86c; end: 10717f89b; -[SCPreviewStickerPickerViewController pickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717f86c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764884);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10717f89c; end: 10717fc97; -[SCPreviewStickerPickerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717f89c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = PTR_PTR_1126f8ab0;
  lStack_b0 = param_2;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_viewDidLoad_112684cd8);
  lVar9 = param_2;
  func_0x00010c0fbbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar9);
  func_0x00010c0fba60(PTR_PTR_1126c3440);
  lVar9 = param_2;
  func_0x00010c0fbbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010c0fbbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0fbbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar9);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = param_2;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  lStack_c8 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  lStack_d8 = lVar9;
  lStack_a0 = lVar9;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  lStack_f0 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  lStack_108 = lVar1;
  lStack_98 = lVar1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  lStack_90 = lVar3;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(lStack_e8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e0);
  _objc_release(lStack_d8);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(lStack_c8);
  lVar1 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10717fc98;
  puStack_148 = PTR_PTR_1126f8ab0;
  lStack_150 = lVar1;
  lStack_140 = lVar9;
  puStack_138 = puVar8;
  lStack_130 = param_2;
  lStack_128 = lVar7;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_150,PTR_s_viewDidAppear__112684bd0);
  lVar9 = (long)_DAT_11276489c;
  if ((*(byte *)(lVar1 + lVar9) & 1) == 0) {
    func_0x00010c292100(*(undefined8 *)(lVar1 + _DAT_112764890));
    *(undefined1 *)(lVar1 + _DAT_1127648a0) = 0;
    *(undefined1 *)(lVar1 + lVar9) = 1;
  }
  return;
}



/* Entry: 10717fc98; end: 10717fd17; -[SCPreviewStickerPickerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717fc98(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8ab0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar1 = (long)_DAT_11276489c;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010c292100(*(undefined8 *)(param_1 + _DAT_112764890));
    *(undefined1 *)(param_1 + _DAT_1127648a0) = 0;
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 10717fd18; end: 10717fd1f; -[SCPreviewStickerPickerViewController shouldDisplayStatusBar] */

undefined8 FUN_10717fd18(void)

{
  return 0;
}



/* Entry: 10717fd20; end: 10717fd27; -[SCPreviewStickerPickerViewController prefersStatusBarHidden] */

undefined8 FUN_10717fd20(void)

{
  return 1;
}



/* Entry: 10717fd28; end: 10717fd63; -[SCPreviewStickerPickerViewController isOpen] */

undefined8 FUN_10717fd28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0791a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10717fd64; end: 10717fdd3; -[SCPreviewStickerPickerViewController openAtCategory:stickerOffset:] */

void FUN_10717fd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fb9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e8f00();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10717fdd4; end: 10717fe03; -[SCPreviewStickerPickerViewController close] */

void FUN_10717fdd4(undefined8 param_1)

{
  func_0x00010c0fb9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10717fe04; end: 10717fe53; -[SCPreviewStickerPickerViewController reloadDataWithDataSourceUpdateHint:] */

void FUN_10717fe04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fb9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10717fe54; end: 10717feb3; -[SCPreviewStickerPickerViewController reloadDataWithDataSourceUpdateHint:shouldRefreshSuperCategoryIcons:] */

void FUN_10717fe54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fb9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128c20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10717feb4; end: 10717febb; -[SCPreviewStickerPickerViewController supportedInterfaceOrientations] */

undefined8 FUN_10717feb4(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  puVar2 = param_1;
  _objc_retain();
  iVar1 = (int)puVar2;
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = param_1;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c252de0();
        _objc_release(puVar2);
      }
      else {
        puVar3 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar3 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar3 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10717febc; end: 10717ffa3; -[SCPreviewStickerPickerViewController additionalS2RDebugOutput] */

void FUN_10717febc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c254e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2553f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_stickers_112672f20);
  return;
}



/* Entry: 10717ffa4; end: 10717ffaf; -[SCPreviewStickerPickerViewController defaultProjectNameV2] */

void FUN_10717ffa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2553f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_stickers_112672f20);
  return;
}



/* Entry: 10717ffb0; end: 107180037; -[SCPreviewStickerPickerViewController exit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10717ffb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764884;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ddc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107180038; end: 107180043; -[SCPreviewStickerPickerViewController backgroundExitBehavior] */

void FUN_107180038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 107180044; end: 1071800c3; -[SCPreviewStickerPickerViewController venueEditorScreenDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107180044(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127648a4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1071800c4; end: 1071800c7; -[SCPreviewStickerPickerViewController bitmojiFriendmojiPickerComplete] */

void FUN_1071800c4(void)

{
  return;
}



/* Entry: 1071800c8; end: 107180127; -[SCPreviewStickerPickerViewController bitmojiFriendmojiPickerUserSelected:] */

void FUN_1071800c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10718012c;
  puStack_20 = &UNK_110862228;
  uStack_18 = param_1;
  func_0x00010c0bf0a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1109909d8,&puStack_38);
  return;
}



/* Entry: 107180128; end: 10718012b;  */

void FUN_107180128(void)

{
  return;
}



/* Entry: 10718012c; end: 107180197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718012c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276487c);
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286080(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107180198; end: 10718025f; -[SCPreviewStickerPickerViewController didPerformTapOnStickerPickerMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107180198(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127648a0;
  if (((*(byte *)(param_1 + lVar4) & 1) == 0) && (*(char *)(param_1 + _DAT_11276489c) == '\x01')) {
    func_0x00010c2929c0(*(undefined8 *)(param_1 + _DAT_112764890),param_2,3);
    lVar5 = (long)_DAT_112764884;
    uVar1 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bf6b020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2929e0();
      _objc_release(uVar3);
    }
    *(undefined1 *)(param_1 + lVar4) = 1;
  }
  return;
}



/* Entry: 107180260; end: 10718026f; -[SCPreviewStickerPickerViewController itemPresentationModelProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107180260(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764878);
}



/* Entry: 107180270; end: 1071802af; -[SCPreviewStickerPickerViewController setItemPresentationModelProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107180270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764878;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071802b0; end: 1071802bf; -[SCPreviewStickerPickerViewController pickerController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071802b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764888);
}



/* Entry: 1071802c0; end: 1071802cf; -[SCPreviewStickerPickerViewController userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071802c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276488c);
}



/* Entry: 1071802d0; end: 10718030f; -[SCPreviewStickerPickerViewController setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071802d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276488c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107180310; end: 1071803cf; -[SCPreviewStickerPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107180310(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276488c,0);
  _objc_storeStrong(param_1 + _DAT_112764888,0);
  _objc_storeStrong(param_1 + _DAT_112764878,0);
  _objc_storeStrong(param_1 + _DAT_112764898,0);
  _objc_storeStrong(param_1 + _DAT_112764894,0);
  _objc_storeStrong(param_1 + _DAT_112764880,0);
  _objc_storeStrong(param_1 + _DAT_11276487c,0);
  _objc_storeStrong(param_1 + _DAT_1127648a4,0);
  _objc_storeStrong(param_1 + _DAT_112764890,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764884,0);
  return;
}



/* Entry: 1071803d0; end: 1071803f3; +[SCStickerPickerMenuView pickerMenuCornerRadiusForPreview] */

undefined8 FUN_1071803d0(int param_1)

{
  undefined8 uVar1;
  
  func_0x0001008522a8();
  uVar1 = 0x4022000000000000;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1071803f4; end: 1071804cb;  */

void FUN_1071803f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x106,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071804cc; end: 107180537; -[SCChatInputStickerMemoriesPickerDelegateProxy initWithDelegate:] */

undefined1 * FUN_1071804cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8ab8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107180538; end: 10718057f; -[SCChatInputStickerMemoriesPickerDelegateProxy memoriesPickerV2DidSelectItemsWithMediaSegments:] */

void FUN_107180538(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c92c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107180580; end: 1071805ab; -[SCChatInputStickerMemoriesPickerDelegateProxy memoriesPickerV2DidDismiss] */

void FUN_107180580(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c92a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071805ac; end: 10718061b; -[SCChatInputStickerMemoriesPickerDelegateProxy onBackPressed] */

void FUN_1071805ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e2a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10718061c; end: 107180623; -[SCChatInputStickerMemoriesPickerDelegateProxy .cxx_destruct] */

void FUN_10718061c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107180624; end: 1071814ff; -[SCChatInputStickerAccessory initWithChatStickerSearch:userSession:chatInputStickerQuickReplyCarouselDelegate:navigationDelegate:notificationPool:repositoryServices:ctpItemViewService:chatFriendmojiUserContainer:userDataFeedServices:activeConversationId:bitmojiStickerCategoryIconProvider:stickerSearcher:chatNewMessageProvider:creativeToolsMetricsServices:chatInputStickerPluginDelegate:cameoServices:circumstanceEngine:bitmojiAvatarProvider:featureSettingsService:ctpSearchServices:bitmojiFriendmojiHintScopeExposer:stickerInjector:customStickerManager:customojiServices:creativeToolsABProvider:aiStickersServiceFactory:discoverFeedBaseDeepLinkProcessor:bitmoji3DContentFetcher:blizzardLogger:bitmojiAvatarBuilderScopeExposer:renderStyleProvider:bitmojiAppEventsEmitter:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:modularStickerCutoutScopeExposer:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusFeatureGating:remixStickerServices:mapChatLocationTrayPresenter:snapPlanChatDrawerPresenter:pollChatDrawerPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107180624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  puStack_80 = PTR_PTR_1126f8ac0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar14 = (long)_DAT_1127648b0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127648b4,param_4);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648b8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127648b8) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127648bc) = 1;
    lVar12 = (long)_DAT_1127648c0;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_7;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648c4;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_19;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648c8;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_15;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127648cc) = uVar2;
    _objc_release(uVar9);
    uVar2 = param_8;
    func_0x00010c085260();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127648d0) = uVar2;
    _objc_release(uVar9);
    uVar2 = param_8;
    func_0x00010bfa4700();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648d4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127648d4) = uVar2;
    _objc_release(uVar9);
    lVar12 = (long)_DAT_1127648d8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127648dc) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127648e0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127648e0) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127648e4,param_17);
    lVar12 = (long)_DAT_1127648e8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_16;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648ec;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_10;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648f0;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_21;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_1127648f4;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_22;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648f8;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_24;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127648fc;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_25;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764900;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_26;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764904;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_27;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764908;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_31;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = param_28;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf58c80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276490c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276490c) = uVar9;
    _objc_release(uVar10);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d4ce0;
    _objc_alloc();
    uVar2 = param_18;
    func_0x00010bf1dfe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ac60();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764910);
    *(undefined **)((long)puVar1 + (long)_DAT_112764910) = puVar4;
    _objc_release(uVar9);
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c2918c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764914);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112764914) = uVar2;
    _objc_release(uVar9);
    lVar12 = (long)_DAT_112764918;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_13;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126cf958;
    _objc_alloc();
    func_0x00010c00a140();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276491c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276491c) = puVar4;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764920;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_23;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_112764924;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_20;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764928;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_29;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_11276492c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_14;
    _objc_release(uVar2);
    lVar12 = *(long *)((long)puVar1 + lVar14);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) {
      func_0x00010be89920(puVar1);
    }
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107181500;
    puStack_a0 = &UNK_110990a00;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764930);
    *(undefined **)((long)puVar1 + (long)_DAT_112764930) = puVar5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112764934,param_5);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764938);
    *(undefined **)((long)puVar1 + (long)_DAT_112764938) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276493c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276493c) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126bb1d8;
    _objc_alloc_init();
    lVar12 = (long)_DAT_112764940;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_33;
    _objc_release(uVar2);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar9;
    func_0x00010bfd46e0();
    _objc_release(uVar9);
    if ((int)uVar2 != 0) {
      func_0x00010bed4120(puVar1);
    }
    puVar6 = PTR_PTR_1126bb1e8;
    _objc_alloc(PTR_PTR_1126bb1e8);
    func_0x00010c01ce40();
    func_0x00010c1e12a0(puVar5);
    puVar7 = PTR_PTR_1126bb1e0;
    _objc_alloc(PTR_PTR_1126bb1e0);
    func_0x00010c01ce40();
    func_0x00010c1e12a0(puVar5);
    puVar8 = PTR_PTR_1126bb1e8;
    _objc_alloc(PTR_PTR_1126bb1e8);
    func_0x00010c01ce40();
    func_0x00010c1e12a0(puVar5);
    lVar12 = (long)_DAT_112764944;
    _objc_retain(puVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar5;
    _objc_release(uVar2);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x10718157c;
    puStack_d0 = &UNK_110859c28;
    _objc_copyWeak(auStack_c0,auStack_90);
    _objc_retain(puVar5);
    uVar9 = uVar2;
    puStack_c8 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276494c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276494c) = uVar9;
    _objc_release(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar10);
    func_0x00010be11220(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764950);
    *(undefined **)((long)puVar1 + (long)_DAT_112764950) = puVar4;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764954;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_30;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112764958,param_6);
    lVar12 = (long)_DAT_11276495c;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_32;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764960;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_35;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764964;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_36;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764968;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_37;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_11276496c;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_38;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764970;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_39;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764974;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_40;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764978;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_41;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_11276497c;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_42;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764980;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_43;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764984;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_44;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c1541a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112764988;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = uVar2;
    _objc_release(uVar9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4e50;
    func_0x00010c154540(PTR_PTR_1126d4e50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa800(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276498c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276498c) = puVar4;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_112764990;
    _objc_retain(param_34);
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_34;
    _objc_release(uVar10);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_12;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f0,auStack_90);
    uVar9 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_f0);
    _objc_release(puStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar3);
  }
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107181500; end: 1071815db;  */

void FUN_107181500(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bec2b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3c920(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1071815dc; end: 107181623;  */

void FUN_1071815dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebc3c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107181624; end: 10718167f; -[SCChatInputStickerAccessory dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107181624(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112764994;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f8ac0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107181680; end: 1071816af; -[SCChatInputStickerAccessory stickerSendEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107181680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127648b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071816b0; end: 10718179f; -[SCChatInputStickerAccessory viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071816b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8ac0;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c23d160(param_3,*(undefined8 *)(param_4 + _DAT_112764998),param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 1071817a0; end: 107181823; -[SCChatInputStickerAccessory isBitmojiTabVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071817a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_11276499c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == param_1) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127649a0);
    func_0x00010c254b00(uVar3,param_2,4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 107181824; end: 10718182b; -[SCChatInputStickerAccessory bloopsChatDrawerActioMetadataForActionType:] */

undefined8 FUN_107181824(void)

{
  return 0;
}



/* Entry: 10718182c; end: 10718182f; -[SCChatInputStickerAccessory isStickerPickerInDarkMode] */

void FUN_10718182c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isDarkMode_11256d770);
  return;
}



/* Entry: 107181830; end: 107181b5f; -[SCChatInputStickerAccessory _setupCTPSearchIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107181830(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar12 = (long)_DAT_1127649a4;
  if (*(long *)(param_1 + lVar12) == 0) {
    lVar11 = (long)_DAT_1127648f4;
    uVar1 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c15fea0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4e58;
    _objc_alloc();
    func_0x00010c050960();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127649a8);
    *(undefined **)(param_1 + _DAT_1127649a8) = puVar2;
    _objc_release(uVar8);
    func_0x00010bed4740(param_1);
    uVar8 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c111be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0b37c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c0b3900();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127649b0);
    *(undefined8 *)(param_1 + _DAT_1127649b0) = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c1543c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4e60;
    _objc_alloc_init();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127649b4);
    *(undefined **)(param_1 + _DAT_1127649b4) = puVar2;
    _objc_release(uVar8);
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c1538e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d4e68;
    _objc_alloc();
    uVar8 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf57360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044fe0();
    _objc_release(uVar7);
    _objc_release(uVar8);
    puVar6 = puVar2;
    func_0x00010c26c1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127649b8);
    *(undefined **)(param_1 + _DAT_1127649b8) = puVar6;
    _objc_release(uVar8);
    uVar8 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf58a80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = uVar7;
    _objc_release(uVar10);
    _objc_release(uVar8);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112764938));
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + lVar12);
    func_0x00010c252740(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107181b60; end: 107181ba7;  */

void FUN_107181b60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107181ba8; end: 107181cb3; -[SCChatInputStickerAccessory _updateCTPSearchSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107181ba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127648ec);
  func_0x00010c088c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca2a0);
  }
  puVar5 = PTR_PTR_1126d4e70;
  _objc_alloc(PTR_PTR_1126d4e70);
  func_0x00010c04f980();
  func_0x00010c28c520(*(undefined8 *)(param_1 + _DAT_1127649a8),param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107181cb4; end: 107182033; -[SCChatInputStickerAccessory _addStickerSearchBarIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107181cb4(undefined1 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_1127649bc;
  if (*(long *)(param_1 + lVar15) == 0) {
    puVar1 = PTR_PTR_1126d4e78;
    _objc_alloc_init();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar1;
    _objc_release(uVar14);
    func_0x00010c1b6dc0(*(undefined8 *)(param_1 + lVar15));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar15));
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar15);
    uStack_80 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar15);
    uStack_78 = uVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar13);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(puVar2);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11276493c));
    _objc_initWeak(auStack_88,param_1);
    uVar13 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c154560();
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_88;
    _objc_copyWeak(auStack_90,param_2);
    uVar14 = uVar13;
    func_0x00010c25ff60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_destroyWeak(auStack_90);
    param_1 = auStack_88;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(param_1);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c5e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107182034; end: 10718207b;  */

void FUN_107182034(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0c5e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10718207c; end: 10718208f; -[SCChatInputStickerAccessory _explicitSearchBarTextDidChangeWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718207c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127649c0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be71710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performCTPSearchWithSearchText__112579f60);
  return;
}



/* Entry: 107182090; end: 107182207; -[SCChatInputStickerAccessory _performCTPSearchWithSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127649c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  func_0x00010bed7b20(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar2 == 0) {
    func_0x00010beab440(param_1);
    func_0x00010be8ad20(param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764988);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c22e8c0();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      func_0x00010c28ade0(*(undefined8 *)(param_1 + _DAT_1127649b8),param_2,param_3);
    }
    else {
      func_0x00010be4e680(param_1,param_2,param_3);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_112764930);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9940();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127649c8);
    *(undefined8 *)(param_1 + _DAT_1127649c8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127649a0);
    func_0x00010c284460(uVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112764930);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128c20();
    _objc_release(uVar3);
    func_0x00010be6d780(param_1);
    func_0x00010bee0c60(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107182208; end: 10718233f; -[SCChatInputStickerAccessory _loadSearchStickersFromCacheForSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764988);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa92e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127649cc);
  *(undefined8 *)(param_1 + _DAT_1127649cc) = uVar1;
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107182340; end: 107182393;  */

void FUN_107182340(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107182394; end: 10718245f; -[SCChatInputStickerAccessory _handleCachedSearchResult:searchText:] */

void FUN_107182394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107182460;
  puStack_58 = &UNK_110860d58;
  uStack_50 = param_1;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107182620;
  puStack_88 = &UNK_1108420a0;
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3,param_2,&puStack_70,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107182460; end: 1071825db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_1127649b0);
  _objc_retain(param_2);
  func_0x00010be9c780(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aee40(uVar4);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126beba0;
  _objc_alloc(PTR_PTR_1126beba0);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c051580(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bebd8;
  _objc_alloc();
  func_0x00010c04bfc0();
  _objc_release(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar5 = (long)_DAT_1127649d0;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(lVar3 + lVar5);
  *(undefined **)(lVar3 + lVar5) = puVar2;
  _objc_release(uVar4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1071825dc;
  puStack_58 = &UNK_110841f80;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1071825dc; end: 10718261f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071825dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127649d0);
  func_0x00010c071ae0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be291f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleExplicitChatSearchState__112567e18,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 107182620; end: 107182697;  */

void FUN_107182620(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107182698;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 107182698; end: 1071826ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127649b8),
             PTR_s_updateText__1126805a0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071826ac; end: 10718293f; -[SCChatInputStickerAccessory _handleCTPStickerSearchResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071826ac(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c252440();
  puVar4 = PTR_PTR_1126d4e80;
  if ((long)puVar1 < 6) {
    puVar4 = param_3;
    if (puVar1 == (undefined *)0x3) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127649b0);
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9c780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aee20(uVar5);
    }
    else {
      if (puVar1 != (undefined *)0x4) goto LAB_10718291c;
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127649b0);
      func_0x00010c11d080(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c11d080(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9c780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aee80(uVar5);
      _objc_release(param_1);
      _objc_release(puVar3);
      param_1 = puVar2;
    }
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  else if (puVar1 == (undefined *)0x6) {
    lVar6 = (long)_DAT_1127649d0;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = param_3;
    _objc_release(uVar5);
    puVar4 = param_3;
    func_0x00010bf66180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127649d4);
    *(undefined **)(param_1 + _DAT_1127649d4) = puVar4;
    _objc_release(uVar5);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107182940;
    puStack_68 = &UNK_110841f80;
    puStack_60 = param_1;
    _objc_retain(param_3);
    puStack_58 = param_3;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
    func_0x00010be73460(param_1);
    puVar4 = puStack_58;
  }
  else {
    if (puVar1 != (undefined *)0x7) goto LAB_10718291c;
    puVar1 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153900(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127649d8));
  }
  _objc_release(puVar4);
LAB_10718291c:
  _objc_release(param_3);
  return;
}



/* Entry: 107182940; end: 10718294b;  */

void FUN_107182940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be291f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleExplicitChatSearchState__112567e18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10718294c; end: 107182e5b; -[SCChatInputStickerAccessory _handleExplicitChatSearchState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718294c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + _DAT_1127648ec);
  func_0x00010c088c60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar4;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  iVar3 = (int)*(undefined8 *)(param_1 + _DAT_112764904);
  func_0x00010c06e680();
  lVar7 = param_3;
  func_0x00010c13cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar7;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar14 == 0) {
      _objc_release(lVar7);
      func_0x00010be9c260(param_1);
      uVar20 = *(ulong *)(param_1 + _DAT_1127649dc);
      uVar13 = *(undefined8 *)(param_1 + _DAT_1127649a0);
      func_0x00010c08d0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0deba0();
      bVar2 = uVar20 < 2;
      if (iVar3 == 0) {
        if (bVar2) {
          lVar14 = param_1;
          func_0x00010bebe1a0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar14 = *(long *)(param_1 + _DAT_11276491c);
          func_0x00010c246b40(lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if (bVar2) {
          lVar4 = *(long *)(param_1 + _DAT_11276491c);
          func_0x00010c246a20(lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar4 = *(long *)(param_1 + _DAT_11276491c);
          func_0x00010c246a40(lVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar14 = lVar4;
        func_0x00010bf51e00();
        _objc_release(lVar4);
      }
      puVar15 = PTR_PTR_1126d4e88;
      _objc_alloc();
      func_0x00010c04ca00();
      puVar11 = PTR_PTR_1126d4e80;
      lVar4 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c254d40(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar16 = puVar11;
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127649d8));
      func_0x00010be8ad20(param_1);
      _objc_release(puVar11);
      _objc_release(puVar15);
      _objc_release(uVar13);
      _objc_release(lVar14);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
        return;
      }
      ___stack_chk_fail();
      uVar13 = *(undefined8 *)(param_3 + _DAT_112764988);
      _objc_retain(puVar16);
      func_0x00010c269d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar16;
      func_0x00010c13cf20(puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar16;
      func_0x00010c11d080(puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar15 = puVar11;
      func_0x00010c26b700(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf263e0(uVar13);
      _objc_release(puVar15);
      _objc_release(puVar11);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar13);
      return;
    }
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar7);
      }
      lVar8 = *(long *)(lVar18 * 8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar19 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          uVar21 = *(ulong *)(lVar19 * 8);
          uVar20 = uVar21;
          func_0x00010bf96f00();
          if (uVar20 == 2 && lVar5 == 0) {
            uVar10 = uVar21;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126ba800;
            _objc_opt_class(PTR_PTR_1126ba800);
            uVar12 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar11);
            uVar20 = uVar10;
            if ((uVar12 & 1) == 0) {
              uVar20 = 0;
            }
            _objc_retain(uVar20);
            _objc_release(uVar10);
            uVar10 = uVar20;
            func_0x00010bf1c500();
            _objc_release(uVar20);
            if (uVar10 != 2) goto LAB_107182b54;
          }
          else {
LAB_107182b54:
            if (iVar3 == 0) {
              uVar13 = *(undefined8 *)(param_1 + _DAT_112764944);
              func_0x00010c10f580(uVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2721e0();
              _objc_retainAutoreleasedReturnValue();
              if (uVar21 != 0) {
                func_0x00010befa120(puVar6);
                _objc_release(uVar21);
              }
              _objc_release(uVar13);
            }
            else {
              func_0x00010befa120(puVar6);
            }
          }
          lVar19 = lVar19 + 1;
        } while (lVar9 != lVar19);
        lVar9 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar14);
    lVar14 = lVar7;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107182e5c; end: 107182f1b; -[SCChatInputStickerAccessory _persistSearchState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764988);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c13cf20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11d080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c26b700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf263e0(uVar4,param_2,uVar1,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107182f1c; end: 10718301f; -[SCChatInputStickerAccessory _updateExplicitSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107182f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c078c00(puVar2,param_2,param_3);
  lVar3 = (long)_DAT_1127649d8;
  if ((int)puVar2 == 0) {
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar2 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar2;
      _objc_release(uVar1);
    }
    puVar2 = PTR_PTR_1126d4e80;
    func_0x00010c154ae0(PTR_PTR_1126d4e80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
  }
  else {
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release();
    func_0x00010c254e80(*(undefined8 *)(param_1 + _DAT_1127649bc),param_2,0);
    puVar2 = *(undefined **)(param_1 + _DAT_1127649c4);
    *(undefined8 *)(param_1 + _DAT_1127649c4) = 0;
  }
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284420();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183020; end: 10718309f; -[SCChatInputStickerAccessory launchCreateBitmojiFlowWithPageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11276495c),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071830a0; end: 1071830f7; -[SCChatInputStickerAccessory bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071830a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276495c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071830f8; end: 10718310f; -[SCChatInputStickerAccessory _updateExplicitSearchResultsFromFriendmojiChangeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071830f8(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127649d0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be291f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleExplicitChatSearchState__112567e18);
    return;
  }
  return;
}



/* Entry: 107183110; end: 10718314b; -[SCChatInputStickerAccessory _resetExplicitStickerSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183110(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112764938));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127649a4);
  *(undefined8 *)(param_1 + _DAT_1127649a4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10718314c; end: 10718318b; -[SCChatInputStickerAccessory _isDarkMode] */

bool FUN_10718314c(long param_1)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c292b20();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 10718318c; end: 10718319f; -[SCChatInputStickerAccessory setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10718318c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127649e0,param_3);
  return;
}



/* Entry: 1071831a0; end: 10718320f; -[SCChatInputStickerAccessory setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071831a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276499c;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar2,param_3);
  uVar1 = param_3;
  func_0x00010c0660e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bec86a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183210; end: 107183303; -[SCChatInputStickerAccessory _subscribeToTextEditingEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127648e0));
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107183304; end: 1071833bf;  */

void FUN_107183304(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd4c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1071833c0; end: 107183407;  */

void FUN_1071833c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becb7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107183408; end: 107183453; -[SCChatInputStickerAccessory defaultDrawerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107183408(long param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_1127649bc;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07d4c0();
  dVar3 = 0.0;
  if (iVar1 != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar2));
  }
  return dVar3 + *(double *)(param_1 + _DAT_112764998);
}



/* Entry: 107183454; end: 107183503; -[SCChatInputStickerAccessory maximumDrawerHeight] */

long FUN_107183454(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetHeight();
    param_1 = param_1 + param_1;
    _objc_release(puVar2);
  }
  else {
    func_0x00010bf20c00(lVar1);
    _CGRectGetHeight();
    param_1 = param_1 + param_1;
  }
  _objc_release(lVar1);
  return (long)(param_1 / 3.0);
}



/* Entry: 107183504; end: 107183527; -[SCChatInputStickerAccessory canPanDrawer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107183504(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127649bc);
  func_0x00010c07d4c0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107183528; end: 10718352b; -[SCChatInputStickerAccessory willBeginPanningFromState:gestureRecognizer:] */

void FUN_107183528(void)

{
  return;
}



/* Entry: 10718352c; end: 10718352f; -[SCChatInputStickerAccessory didPanFromState:gestureRecognizer:] */

void FUN_10718352c(void)

{
  return;
}



/* Entry: 107183530; end: 107183533; -[SCChatInputStickerAccessory willEndPanningToState:] */

void FUN_107183530(void)

{
  return;
}



/* Entry: 107183534; end: 107183537; -[SCChatInputStickerAccessory didEndPanningToState:] */

void FUN_107183534(void)

{
  return;
}



/* Entry: 107183538; end: 107183587; -[SCChatInputStickerAccessory sizeDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd560(param_1);
  func_0x00010c28c280(uVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107183588; end: 1071836c7; -[SCChatInputStickerAccessory willBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107183588(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  *(undefined8 *)(param_1 + _DAT_1127649e4) = 0;
  func_0x00010be885a0();
  func_0x00010bdd5e40(param_1);
  lVar4 = (long)_DAT_112764930;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f80();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf9ccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1f8740(*(undefined8 *)(param_1 + _DAT_1127649e8));
  lVar1 = (long)_DAT_1127648bc;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010bee0c60(param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1071836c8;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_58);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1071836c8; end: 1071836cf;  */

void FUN_1071836c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openToInitialStickerPickerCateg_112578f80);
  return;
}



/* Entry: 1071836d0; end: 107183763; -[SCChatInputStickerAccessory didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071836d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar1);
  func_0x00010be6d780(param_1);
  lVar1 = param_1 + _DAT_1127648e4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c065f20();
  _objc_release(lVar1);
  func_0x00010be9c260(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764930);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107183764; end: 107183767; -[SCChatInputStickerAccessory willResignActive] */

void FUN_107183764(void)

{
  return;
}


