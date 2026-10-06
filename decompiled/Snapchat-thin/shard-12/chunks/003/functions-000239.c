/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109015f78; end: 10901600f; -[SCCognacAppPlayersLimits isEqual:] */

bool FUN_109015f78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109016010; end: 109016017; -[SCCognacAppPlayersLimits minPlayersNum] */

undefined8 FUN_109016010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109016018; end: 10901601f; -[SCCognacAppPlayersLimits maxPlayersNum] */

undefined8 FUN_109016018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109016020; end: 109016093; -[SCCognacAppSnapCanvasSDKInfo initWithCoder:] */

undefined1 * FUN_109016020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016094; end: 1090160db; -[SCCognacAppSnapCanvasSDKInfo initWithLocalServerBridgeSupported:] */

void FUN_109016094(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffe18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1090160dc; end: 1090160ff; -[SCCognacAppSnapCanvasSDKInfo copyWithZone:] */

undefined8 FUN_1090160dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109016100; end: 109016117; -[SCCognacAppSnapCanvasSDKInfo encodeWithCoder:] */

void FUN_109016100(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeBool_forKey__1125c2510,*(undefined1 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f17c58);
  return;
}



/* Entry: 109016118; end: 10901611f; -[SCCognacAppSnapCanvasSDKInfo hash] */

undefined1 FUN_109016118(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109016120; end: 1090161a7; -[SCCognacAppSnapCanvasSDKInfo isEqual:] */

bool FUN_109016120(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1090161a8; end: 1090161af; -[SCCognacAppSnapCanvasSDKInfo localServerBridgeSupported] */

undefined1 FUN_1090161a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090161b0; end: 109016287; -[SCCognacContentUpdateInfo initWithCoder:] */

undefined1 * FUN_1090161b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0x10) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016288; end: 10901632b; -[SCCognacContentUpdateInfo initWithNewApp:hasMajorUpdate:majorUpdateVersion:minorUpdateVersion:majorUpdateDescription:] */

undefined1 *
FUN_109016288(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ffe20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10901632c; end: 10901634f; -[SCCognacContentUpdateInfo copyWithZone:] */

undefined8 FUN_10901632c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109016350; end: 1090163eb; -[SCCognacContentUpdateInfo encodeWithCoder:] */

void FUN_109016350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17c78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f17c98);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f17cb8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17cd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f17cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090163ec; end: 10901645f; -[SCCognacContentUpdateInfo hash] */

ulong * FUN_1090163ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  lStack_30 = (long)(int)*(undefined8 *)(param_1 + 0xc);
  lStack_28 = (long)(int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109016514;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))
         || (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) ||
       (*(int *)((long)puVar2 + 0x10) != *(int *)(param_3 + 0x10))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_109016514;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_109016514;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_109016514:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 109016460; end: 10901652f; -[SCCognacContentUpdateInfo isEqual:] */

long FUN_109016460(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109016514;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) ||
       (*(int *)(param_1 + 0x10) != *(int *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_109016514;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_109016514;
    }
  }
  lVar3 = 1;
LAB_109016514:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109016530; end: 109016537; -[SCCognacContentUpdateInfo newApp] */

undefined1 FUN_109016530(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109016538; end: 10901653f; -[SCCognacContentUpdateInfo hasMajorUpdate] */

undefined1 FUN_109016538(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109016540; end: 109016547; -[SCCognacContentUpdateInfo majorUpdateVersion] */

undefined4 FUN_109016540(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 109016548; end: 10901654f; -[SCCognacContentUpdateInfo minorUpdateVersion] */

undefined4 FUN_109016548(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 109016550; end: 109016557; -[SCCognacContentUpdateInfo majorUpdateDescription] */

undefined8 FUN_109016550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109016558; end: 109016563; -[SCCognacContentUpdateInfo .cxx_destruct] */

void FUN_109016558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109016564; end: 1090165ff; -[SCCognacClientRuntimeDataModel initWithCoder:] */

undefined1 * FUN_109016564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016600; end: 109016687; -[SCCognacClientRuntimeDataModel initWithRuntimeInfo:clientRuntimeType:] */

undefined1 *
FUN_109016600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffe28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016688; end: 1090166ab; -[SCCognacClientRuntimeDataModel copyWithZone:] */

undefined8 FUN_109016688(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090166ac; end: 10901670b; -[SCCognacClientRuntimeDataModel encodeWithCoder:] */

void FUN_1090166ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17d18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10901670c; end: 109016777; -[SCCognacClientRuntimeDataModel hash] */

undefined8 * FUN_10901670c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1090167fc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1090167fc;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1090167fc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1090167fc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 109016778; end: 109016817; -[SCCognacClientRuntimeDataModel isEqual:] */

long FUN_109016778(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1090167fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1090167fc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1090167fc;
    }
  }
  lVar3 = 1;
LAB_1090167fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109016818; end: 10901681f; -[SCCognacClientRuntimeDataModel runtimeInfo] */

undefined8 FUN_109016818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109016820; end: 109016827; -[SCCognacClientRuntimeDataModel clientRuntimeType] */

undefined8 FUN_109016820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109016828; end: 109016833; -[SCCognacClientRuntimeDataModel .cxx_destruct] */

void FUN_109016828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109016834; end: 1090168e3; -[SCCognacClientRuntimeInfo initWithCoder:] */

undefined1 * FUN_109016834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090168e4; end: 10901698f; -[SCCognacClientRuntimeInfo initWithPrivateContentUrl:privateBridgeVerificationUuid:] */

undefined1 *
FUN_1090168e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffe30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016990; end: 1090169b3; -[SCCognacClientRuntimeInfo copyWithZone:] */

undefined8 FUN_109016990(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090169b4; end: 109016a13; -[SCCognacClientRuntimeInfo encodeWithCoder:] */

void FUN_1090169b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109016a14; end: 109016a87; -[SCCognacClientRuntimeInfo hash] */

undefined8 * FUN_109016a14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109016b08:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109016b14;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_109016b14;
        }
        goto LAB_109016b08;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109016b14:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109016a88; end: 109016b2f; -[SCCognacClientRuntimeInfo isEqual:] */

long FUN_109016a88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109016b08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109016b14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_109016b14;
        }
        goto LAB_109016b08;
      }
    }
    lVar3 = 0;
  }
LAB_109016b14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109016b30; end: 109016b37; -[SCCognacClientRuntimeInfo privateContentUrl] */

undefined8 FUN_109016b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109016b38; end: 109016b3f; -[SCCognacClientRuntimeInfo privateBridgeVerificationUuid] */

undefined8 FUN_109016b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109016b40; end: 109016b6f; -[SCCognacClientRuntimeInfo .cxx_destruct] */

void FUN_109016b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109016b70; end: 109016c5b; -[SCCognacShareToCameraAttachment initWithCoder:] */

undefined1 * FUN_109016b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016c5c; end: 109016d43; -[SCCognacShareToCameraAttachment initWithCognacAppId:cognacAppShareInfo:cognacAppName:cognacAppType:] */

undefined1 *
FUN_109016c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ffe38;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109016d44; end: 109016d67; -[SCCognacShareToCameraAttachment copyWithZone:] */

undefined8 FUN_109016d44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109016d68; end: 109016def; -[SCCognacShareToCameraAttachment encodeWithCoder:] */

void FUN_109016d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f17dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f17df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109016df0; end: 109016e73; -[SCCognacShareToCameraAttachment hash] */

undefined8 * FUN_109016df0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109016f1c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109016f28;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_109016f28;
          }
          goto LAB_109016f1c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_109016f28:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109016e74; end: 109016f43; -[SCCognacShareToCameraAttachment isEqual:] */

long FUN_109016e74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109016f1c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109016f28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_109016f28;
          }
          goto LAB_109016f1c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_109016f28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109016f44; end: 109016f4b; -[SCCognacShareToCameraAttachment cognacAppId] */

undefined8 FUN_109016f44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109016f4c; end: 109016f53; -[SCCognacShareToCameraAttachment cognacAppShareInfo] */

undefined8 FUN_109016f4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109016f54; end: 109016f5b; -[SCCognacShareToCameraAttachment cognacAppName] */

undefined8 FUN_109016f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109016f5c; end: 109016f63; -[SCCognacShareToCameraAttachment cognacAppType] */

undefined8 FUN_109016f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109016f64; end: 109016f9f; -[SCCognacShareToCameraAttachment .cxx_destruct] */

void FUN_109016f64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109016fa0; end: 109017117; -[SCCognacLeaderboard initWithCoder:] */

undefined1 * FUN_109016fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109017118; end: 109017293; -[SCCognacLeaderboard initWithLeaderboardId:name:logoURL:scoreDecimalOffset:orderingType:lastUpdateDate:appId:scoreIconURL:] */

undefined1 *
FUN_109017118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ffe40;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109017294; end: 1090172b7; -[SCCognacLeaderboard copyWithZone:] */

undefined8 FUN_109017294(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1090172b8; end: 10901738f; -[SCCognacLeaderboard encodeWithCoder:] */

void FUN_1090172b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ed3458);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f17e38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f17e58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f17e78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110dff7d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f17e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109017390; end: 10901743f; -[SCCognacLeaderboard hash] */

undefined8 * FUN_109017390(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109017540:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10901754c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[4] == param_3[4] && (puVar3[5] == param_3[5])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_10901754c;
                }
                goto LAB_109017540;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10901754c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109017440; end: 109017567; -[SCCognacLeaderboard isEqual:] */

long FUN_109017440(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109017540:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10901754c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_10901754c;
                }
                goto LAB_109017540;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10901754c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109017568; end: 10901756f; -[SCCognacLeaderboard leaderboardId] */

undefined8 FUN_109017568(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109017570; end: 109017577; -[SCCognacLeaderboard name] */

undefined8 FUN_109017570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109017578; end: 10901757f; -[SCCognacLeaderboard logoURL] */

undefined8 FUN_109017578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109017580; end: 109017587; -[SCCognacLeaderboard scoreDecimalOffset] */

undefined8 FUN_109017580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109017588; end: 10901758f; -[SCCognacLeaderboard orderingType] */

undefined8 FUN_109017588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109017590; end: 109017597; -[SCCognacLeaderboard lastUpdateDate] */

undefined8 FUN_109017590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109017598; end: 10901759f; -[SCCognacLeaderboard appId] */

undefined8 FUN_109017598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1090175a0; end: 1090175a7; -[SCCognacLeaderboard scoreIconURL] */

undefined8 FUN_1090175a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090175a8; end: 109017607; -[SCCognacLeaderboard .cxx_destruct] */

void FUN_1090175a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109017608; end: 1090177a7; -[SCCognacLeaderboardEntry initWithCoder:] */

undefined1 * FUN_109017608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffe48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1090177a8; end: 109017933; -[SCCognacLeaderboardEntry initWithGlobalExactRank:globalPercentileRank:localRank:score:userId:displayScore:username:displayName:avatarId:selfieId:] */

undefined8 *
FUN_1090177a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ffe48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_4;
    puVar1[2] = param_3;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 109017934; end: 109017957; -[SCCognacLeaderboardEntry copyWithZone:] */

undefined8 FUN_109017934(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109017958; end: 109017a57; -[SCCognacLeaderboardEntry encodeWithCoder:] */

void FUN_109017958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17eb8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f17ed8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f17ef8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e89378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110de81d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f17f18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110de8218);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e51898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f17f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109017a58; end: 109017b1b; -[SCCognacLeaderboardEntry hash] */

long * FUN_109017a58(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
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
  lVar5 = *(long *)(param_1 + 0x10);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  lStack_70 = (long)*(int *)(param_1 + 8);
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  plVar3 = &lStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(plVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_109017c3c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_109017c48;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       ((((plVar3[2] == param_3[2] && ((int)plVar3[1] == (int)param_3[1])) &&
         (plVar3[3] == param_3[3])) && (plVar3[4] == param_3[4])))) {
      lVar5 = plVar3[5];
      if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[6];
        if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = plVar3[7];
          if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = plVar3[8];
            if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = plVar3[9];
              if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                plVar6 = (long *)plVar3[10];
                if (plVar6 != (long *)param_3[10]) {
                  func_0x00010c071ae0();
                  goto LAB_109017c48;
                }
                goto LAB_109017c3c;
              }
            }
          }
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_109017c48:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 109017b1c; end: 109017c63; -[SCCognacLeaderboardEntry isEqual:] */

long FUN_109017b1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109017c3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109017c48;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_109017c48;
                }
                goto LAB_109017c3c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109017c48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109017c64; end: 109017c6b; -[SCCognacLeaderboardEntry globalExactRank] */

undefined8 FUN_109017c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109017c6c; end: 109017c73; -[SCCognacLeaderboardEntry globalPercentileRank] */

undefined4 FUN_109017c6c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 109017c74; end: 109017c7b; -[SCCognacLeaderboardEntry localRank] */

undefined8 FUN_109017c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109017c7c; end: 109017c83; -[SCCognacLeaderboardEntry score] */

undefined8 FUN_109017c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109017c84; end: 109017c8b; -[SCCognacLeaderboardEntry userId] */

undefined8 FUN_109017c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109017c8c; end: 109017c93; -[SCCognacLeaderboardEntry displayScore] */

undefined8 FUN_109017c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109017c94; end: 109017c9b; -[SCCognacLeaderboardEntry username] */

undefined8 FUN_109017c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109017c9c; end: 109017ca3; -[SCCognacLeaderboardEntry displayName] */

undefined8 FUN_109017c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109017ca4; end: 109017cab; -[SCCognacLeaderboardEntry avatarId] */

undefined8 FUN_109017ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109017cac; end: 109017cb3; -[SCCognacLeaderboardEntry selfieId] */

undefined8 FUN_109017cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109017cb4; end: 109017d13; -[SCCognacLeaderboardEntry .cxx_destruct] */

void FUN_109017cb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 109017d14; end: 109017e33;  */

bool FUN_109017d14(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  puVar7 = PTR_PTR_1126b2378;
  if (lVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar7,param_2,lVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  puVar4 = puVar7;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfdb060();
  _objc_release(puVar4);
  if ((int)puVar5 == 0) {
    bVar1 = false;
  }
  else {
    puVar4 = puVar7;
    func_0x00010c27f9c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c1297a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c247940();
    bVar1 = (int)puVar6 == 6;
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar7);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 109017e34; end: 109017eff;  */

undefined * FUN_109017e34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126b2378;
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar5,param_2,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = puVar5;
  func_0x00010c27f9c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfdb060();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 109017f00; end: 109017f2f;  */

void FUN_109017f00(void)

{
  return;
}



/* Entry: 109017f30; end: 10901876f;  */

ulong FUN_109017f30(undefined **param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   ulong param_5,long param_6,undefined8 param_7)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  ppuVar2 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  puVar8 = PTR_PTR_1126b2378;
  if (ppuVar3 == (undefined **)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  puVar4 = puVar8;
  FUN_109019408();
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retain(puVar8);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(param_5);
    puVar4 = puVar8;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0ca780();
    _objc_release(puVar4);
    if ((puVar5 == (undefined *)0x0) || (puVar4 = puVar8, FUN_10901953c(), (int)puVar4 == 0)) {
LAB_1090181a4:
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(puVar8);
LAB_1090181c4:
      _objc_retain(param_1);
      _objc_retain(param_3);
      _objc_retain(param_5);
      ppuVar2 = param_1;
      func_0x00010bf5b080(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0720c0();
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      if ((int)uVar6 != 0) {
        uVar7 = param_5;
        func_0x000109021fbc();
        puStack_e8 = (undefined *)0x0;
        pcStack_d8 = (code *)0x2020000000;
        puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
        ppuVar2 = param_1;
        ppuStack_e0 = &puStack_e8;
        func_0x00010bf0e700(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = (code *)0x10901911c;
        puStack_98 = &UNK_1109258d8;
        ppuStack_90 = &puStack_e8;
        func_0x00010c0c1320();
        _objc_release(ppuVar2);
        uVar9 = param_6 - 0x54;
        if (((uVar9 != 0) || (((uint)*(byte *)(ppuStack_e0 + 3) & (uint)uVar7 & 1) == 0)) &&
           (((uVar9 < 0x14 && ((1L << (uVar9 & 0x3f) & 0x80021U) != 0)) || (param_6 == 7)))) {
          __Block_object_dispose(&puStack_e8,8);
          _objc_release(param_5);
          _objc_release(param_3);
          _objc_release(param_1);
          goto LAB_10901858c;
        }
        __Block_object_dispose(&puStack_e8,8);
      }
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(param_1);
      _objc_retain(param_2);
      ppuStack_e0 = &puStack_e8;
      puStack_e8 = (undefined *)0x0;
      pcStack_d8 = (code *)0x2020000000;
      puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = (code *)0x109017f10;
      puStack_98 = &UNK_110920c78;
      ppuStack_90 = ppuStack_e0;
      func_0x00010c0bdf40(param_2);
      puVar4 = ppuStack_e0[3];
      __Block_object_dispose(&puStack_e8,8);
      _objc_release(param_2);
      if (((ulong)puVar4 & 1) == 0) {
        ppuVar2 = param_1;
        func_0x00010c0c5340();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c25b720();
        _objc_release(ppuVar2);
        if (ppuVar3 != (undefined **)0x1) {
          _objc_retain(param_1);
          _objc_retain(param_2);
          _objc_retain(param_3);
          _objc_retain(param_7);
          puVar4 = PTR___NSConcreteStackBlock_11034bd00;
          if (param_4 == 0) {
            _objc_release(param_7);
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_release(param_1);
            _objc_retain(param_1);
            _objc_retain(param_2);
            _objc_retain(param_3);
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_release(param_1);
          }
          else {
            puStack_130 = (undefined *)0x0;
            uStack_120 = 0x2020000000;
            puStack_118 = (undefined *)((ulong)puStack_118 & 0xffffffffffffff00);
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0xc2000000;
            pcStack_a0 = FUN_109019140;
            puStack_98 = &UNK_1109f89d0;
            ppuStack_128 = &puStack_130;
            _objc_retain(param_1);
            ppuStack_90 = param_1;
            _objc_retain(param_7);
            puStack_e8 = puVar4;
            ppuStack_e0 = (undefined **)0xc2000000;
            pcStack_d8 = FUN_109019294;
            puStack_d0 = &UNK_1109946f8;
            uStack_88 = param_7;
            ppuStack_80 = &puStack_130;
            _objc_retain(param_1);
            ppuStack_c8 = param_1;
            _objc_retain(param_7);
            uStack_c0 = param_7;
            ppuStack_b8 = &puStack_130;
            func_0x00010c0bdf40(param_2);
            puVar4 = ppuStack_128[3];
            _objc_release(uStack_c0);
            _objc_release(ppuStack_c8);
            _objc_release(uStack_88);
            _objc_release(ppuStack_90);
            __Block_object_dispose(&puStack_130,8);
            _objc_release(param_7);
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_release(param_1);
            if (((ulong)puVar4 & 1) != 0) {
              uVar9 = 1;
              goto LAB_109018590;
            }
            _objc_retain(param_1);
            _objc_retain(param_2);
            _objc_retain(param_3);
            puStack_e8 = (undefined *)0x0;
            pcStack_d8 = (code *)0x2020000000;
            puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
            ppuVar2 = param_1;
            ppuStack_e0 = &puStack_e8;
            func_0x00010bf0e700(param_1);
            _objc_retainAutoreleasedReturnValue();
            puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a8 = 0xc2000000;
            pcStack_a0 = (code *)0x1090193d4;
            puStack_98 = &UNK_110992258;
            ppuStack_90 = &puStack_e8;
            func_0x00010c0c1320();
            _objc_release(ppuVar2);
            cVar1 = *(char *)(ppuStack_e0 + 3);
            __Block_object_dispose(&puStack_e8,8);
            _objc_release(param_3);
            _objc_release(param_2);
            _objc_release(param_1);
            if (cVar1 == '\x01') {
              uVar9 = param_5;
              func_0x00010bf1f440(param_5);
              uVar9 = uVar9 & 0xffffffff;
              goto LAB_109018590;
            }
          }
          goto LAB_10901800c;
        }
      }
    }
    else {
      ppuStack_110 = &puStack_108;
      puStack_108 = (undefined *)0x0;
      uStack_f8 = 0x2020000000;
      uStack_f0 = 0;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_1090190b4;
      puStack_98 = &UNK_1109214e8;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_e0 = (undefined **)0xc2000000;
      pcStack_d8 = (code *)0x1090190cc;
      puStack_d0 = &UNK_11092a400;
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_128 = (undefined **)0xc2000000;
      uStack_120 = 0x1090190e4;
      puStack_118 = &UNK_110920c78;
      ppuStack_100 = ppuStack_110;
      ppuStack_c8 = ppuStack_110;
      ppuStack_90 = ppuStack_110;
      func_0x00010c0bdf40(param_2);
      if (((ulong)ppuStack_100[3] & 1) == 0) {
        __Block_object_dispose(&puStack_108,8);
        goto LAB_1090181a4;
      }
      puVar4 = puVar8;
      FUN_1090195e0(puVar8,param_3);
      __Block_object_dispose(&puStack_108,8);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(puVar8);
      if (((ulong)puVar4 & 1) == 0) goto LAB_1090181c4;
    }
LAB_10901858c:
    uVar9 = 2;
  }
  else {
LAB_10901800c:
    uVar9 = 0;
  }
LAB_109018590:
  _objc_release(puVar8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar9;
}



/* Entry: 109018770; end: 109018843;  */

void FUN_109018770(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126b2378;
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar5,param_2,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puVar3 = puVar5;
  func_0x00010c27f9c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_1090196c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109018844; end: 109018dc3;  */

void FUN_109018844(undefined *param_1,double *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  double *pdVar8;
  double *pdVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  double dStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  double dStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  double dStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  double dStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar2 = (undefined **)PTR_PTR_1126d8a70;
  _objc_alloc();
  func_0x00010c055b00();
  dVar18 = 0.0;
  puVar3 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar3;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (puVar17 == (undefined *)0x0) {
    _objc_release(puVar3);
LAB_1090189c0:
    _objc_retain(ppuVar2);
  }
  else {
    lVar12 = 0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        lVar13 = *(long *)((long)puVar16 * 8);
        lVar4 = lVar13;
        func_0x00010c129840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          _objc_retain(lVar13);
          _objc_release(lVar12);
          lVar12 = lVar13;
        }
        puVar16 = puVar16 + 1;
      } while (puVar17 != puVar16);
      puVar17 = puVar3;
      func_0x00010bf52a60();
    } while (puVar17 != (undefined *)0x0);
    _objc_release(puVar3);
    if (lVar12 == 0) goto LAB_1090189c0;
    lVar11 = lVar12;
    func_0x00010c129840();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(lVar12);
    func_0x00010c0ce680(lVar11);
    if (param_1 == (undefined *)0x0) {
      uVar5 = 0;
      dStack_170 = 0.0;
      uStack_168 = 0;
      uStack_160 = 0;
    }
    else {
      func_0x00010c276460(&dStack_170,param_1);
      uVar5 = uStack_168 & 0xffffffff;
    }
    _CMTimeMakeWithSeconds(&dStack_120,dVar18 / 1000.0,uVar5);
    func_0x00010c27c900(&dStack_170,lVar12);
    _objc_release(lVar12);
    uStack_138 = uStack_150;
    dStack_140 = dStack_158;
    uStack_130 = uStack_148;
    if (param_1 == (undefined *)0x0) {
      dStack_190 = 0.0;
      uStack_188 = 0;
      uStack_180 = 0;
    }
    else {
      func_0x00010c276460(&dStack_190,param_1);
    }
    uStack_1a8 = uStack_138;
    dStack_1b0 = dStack_140;
    uStack_1a0 = uStack_130;
    _CMTimeSubtract(&dStack_170,&dStack_190,&dStack_1b0);
    uStack_188 = uStack_168;
    dStack_190 = dStack_170;
    uStack_180 = uStack_160;
    uStack_1a8 = uStack_118;
    dStack_1b0 = dStack_120;
    uStack_1a0 = uStack_110;
    iVar1 = (int)&dStack_190;
    param_2 = &dStack_1b0;
    dVar18 = dStack_120;
    _CMTimeCompare();
    ppuVar6 = (undefined **)PTR_PTR_1126d8a70;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (iVar1 < 0) {
      ppuVar7 = ppuVar6;
      func_0x0001090229dc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055b00();
      _objc_release(puVar3);
      _objc_release(ppuVar7);
    }
    else {
      func_0x00010c055b00();
    }
    _objc_release(param_1);
    _objc_release(ppuVar2);
    ppuVar7 = ppuVar6;
    func_0x00010c27dd80();
    ppuVar2 = ppuVar6;
    if (ppuVar7 == (undefined **)0x0) {
      _objc_retain(param_1);
      _objc_retain(lVar12);
      func_0x00010c0ce540(lVar11);
      if (param_1 == (undefined *)0x0) {
        uVar5 = 0;
        dStack_170 = 0.0;
        uStack_168 = 0;
        uStack_160 = 0;
      }
      else {
        func_0x00010c276460(&dStack_170,param_1);
        uVar5 = uStack_168 & 0xffffffff;
      }
      _CMTimeMakeWithSeconds(&dStack_120,dVar18 / 1000.0,uVar5);
      func_0x00010c27c900(&dStack_170,lVar12);
      _objc_release(lVar12);
      uStack_138 = uStack_150;
      dStack_140 = dStack_158;
      uStack_130 = uStack_148;
      uStack_168 = uStack_118;
      dStack_170 = dStack_120;
      uStack_160 = uStack_110;
      iVar1 = (int)&dStack_140;
      param_2 = &dStack_170;
      dVar18 = dStack_120;
      _CMTimeCompare();
      ppuVar2 = (undefined **)PTR_PTR_1126d8a70;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (iVar1 < 0) {
        ppuVar7 = ppuVar2;
        func_0x0001090229f4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c055b00();
        _objc_release(puVar3);
        _objc_release(ppuVar7);
      }
      else {
        func_0x00010c055b00();
      }
      _objc_release(param_1);
      _objc_release(ppuVar6);
      ppuVar6 = ppuVar2;
      func_0x00010c27dd80();
      if (ppuVar6 == (undefined **)0x0) {
        _objc_retain(param_1);
        func_0x00010c0ce6a0(lVar11);
        if (param_1 == (undefined *)0x0) {
          _CMTimeMakeWithSeconds(&dStack_170,dVar18 / 1000.0,0);
          dStack_120 = 0.0;
          uStack_118 = 0;
          uStack_110 = 0;
        }
        else {
          func_0x00010c276460(&dStack_120,param_1);
          _CMTimeMakeWithSeconds(&dStack_170,dVar18 / 1000.0,uStack_118 & 0xffffffff);
          func_0x00010c276460(&dStack_120,param_1);
        }
        uStack_138 = uStack_168;
        dStack_140 = dStack_170;
        uStack_130 = uStack_160;
        iVar1 = (int)&dStack_120;
        param_2 = &dStack_140;
        _CMTimeCompare();
        ppuVar6 = (undefined **)PTR_PTR_1126d8a70;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (iVar1 < 0) {
          ppuVar7 = ppuVar6;
          func_0x000109022a0c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c055b00();
          _objc_release(puVar3);
          _objc_release(ppuVar7);
        }
        else {
          func_0x00010c055b00();
        }
        _objc_release(param_1);
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar6;
      }
    }
    _objc_retain(ppuVar2);
    _objc_release(lVar11);
    _objc_release(lVar12);
  }
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar17 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar17;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126b2378;
  if (puVar16 == (undefined *)0x0) {
LAB_109019004:
    _objc_release(puVar17);
LAB_109019008:
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar16 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar17);
    if (puVar3 == (undefined *)0x0) goto LAB_109019008;
    puVar16 = puVar3;
    FUN_10901953c();
    puVar17 = puVar3;
    if (((ulong)puVar16 & 1) == 0) goto LAB_109019004;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar17;
    func_0x00010c0ca760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    pdVar8 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pdVar9 = pdVar8;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pdVar8);
    pdVar8 = pdVar9;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (pdVar8 != (double *)0x0) {
      pdVar14 = (double *)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(pdVar9);
        }
        ppuVar15 = *(undefined ***)((long)pdVar14 * 8);
        ppuVar2 = ppuVar15;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010bfe44e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x000107c3094c();
        if ((int)ppuVar7 == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = PTR_PTR_1126afad0;
          _objc_alloc_init(PTR_PTR_1126afad0);
          func_0x00010c1a85a0();
          func_0x00010c1c0fe0(puVar17);
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar15;
        func_0x00010bf2d160();
        if (((int)ppuVar2 != 0) &&
           (puVar10 = puVar16, func_0x00010bf4b900(), ((ulong)puVar10 & 1) != 0)) {
          func_0x00010c1164a0(ppuVar15);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar15;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          _objc_release(puVar17);
          goto LAB_109019094;
        }
        _objc_release(puVar17);
        pdVar14 = (double *)((long)pdVar14 + 1);
      } while (pdVar8 != pdVar14);
      pdVar8 = pdVar9;
      func_0x00010bf52a60();
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_109019094:
    _objc_release(pdVar9);
    _objc_release(puVar16);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 109018dc4; end: 1090190b3;  */

void FUN_109018dc4(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar13 = param_1;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126b2378;
  if (puVar2 == (undefined *)0x0) {
LAB_109019004:
    _objc_release(puVar13);
  }
  else {
    puVar2 = param_1;
    func_0x00010bf4e860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar13);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      FUN_10901953c();
      puVar13 = puVar3;
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00010c27f9c0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010c0ca760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        lVar4 = param_2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b7fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar4 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar5);
            }
            ppuVar12 = *(undefined ***)(lVar11 * 8);
            ppuVar6 = ppuVar12;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar6;
            func_0x00010bfe44e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = ppuVar7;
            func_0x000107c3094c();
            if ((int)ppuVar8 == 0) {
              puVar13 = (undefined *)0x0;
            }
            else {
              puVar13 = PTR_PTR_1126afad0;
              _objc_alloc_init(PTR_PTR_1126afad0);
              func_0x00010c1a85a0();
              func_0x00010c1c0fe0(puVar13);
            }
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
            ppuVar6 = ppuVar12;
            func_0x00010bf2d160();
            if (((int)ppuVar6 != 0) &&
               (puVar9 = puVar2, func_0x00010bf4b900(), ((ulong)puVar9 & 1) != 0)) {
              func_0x00010c1164a0(ppuVar12);
              _objc_retainAutoreleasedReturnValue();
              ppuVar6 = ppuVar12;
              func_0x00010c116a20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar12);
              _objc_release(puVar13);
              goto LAB_109019094;
            }
            _objc_release(puVar13);
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar5;
          func_0x00010bf52a60();
        }
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_109019094:
        _objc_release(lVar5);
        _objc_release(puVar2);
        _objc_release(puVar3);
        goto LAB_109019010;
      }
      goto LAB_109019004;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_109019010:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1090190b4; end: 10901913f;  */

void FUN_1090190b4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 109019140; end: 10901927b;  */

void FUN_109019140(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5b080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0ee920(lVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c2aaa4();
      *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)lVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10901927c; end: 109019293;  */

void FUN_10901927c(void)

{
  return;
}



/* Entry: 109019294; end: 1090193cf;  */

void FUN_109019294(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5b080(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0ee920(lVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c2aaa4();
      *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)lVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1090193d0; end: 109019407;  */

void FUN_1090193d0(void)

{
  return;
}



/* Entry: 109019408; end: 10901953b;  */

uint FUN_109019408(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar6;
  uint uVar7;
  long lVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfdb080();
  if ((int)lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c129980();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c291e40();
    uVar1 = (uint)lVar5;
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfdb240();
  if ((int)lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1344a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    uVar7 = (uint)(lVar6 != 0);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return uVar1 & 1 | uVar7;
}



/* Entry: 10901953c; end: 1090195df;  */

uint FUN_10901953c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb080();
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c129980();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c291e20();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1090195e0; end: 1090196bf;  */

long FUN_1090195e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    _objc_retain(param_2);
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0ca760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar2 = param_2;
    func_0x000107c3094c(param_2,auStack_38,auStack_40);
    _objc_release(param_2);
    if ((int)uVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar3);
    }
    lVar4 = lVar1;
    func_0x00010bf4b900(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  return lVar4;
}



/* Entry: 1090196c0; end: 10901979b;  */

void FUN_1090196c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd95a0();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d2900;
    _objc_alloc(PTR_PTR_1126d2900);
    uVar1 = param_1;
    func_0x00010c0d3a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c277e80();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = param_1;
    func_0x00010c0d3a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb80();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054c40(puVar5,param_2,uVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10901979c; end: 109019a13;  */

void FUN_10901979c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1010;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c02ec80();
  if (param_3 == 1) {
    func_0x00010c1eb220(puVar1);
    func_0x00010c1b13e0(puVar1);
    _objc_retain(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0be1c0(param_7);
    func_0x00010c1b38e0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0be1c0(param_7);
  func_0x00010c1ea120(puVar1);
  _objc_release(param_4);
  func_0x00010c1ea160(puVar1);
  _objc_release(param_5);
  func_0x00010c1833c0(puVar1);
  _objc_release(param_6);
  func_0x00010c1e9fa0(puVar1);
  func_0x00010c1d86a0(puVar1);
  func_0x00010c1e9ea0(puVar1);
  func_0x00010c1ea060(puVar1);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


