/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10844bae0; end: 10844bc3f; -[SCCaptionStyleMetricsValues initWithCaptionStyleListFromTap:captionStyleListFromScroll:captionStyleExploredListFromTap:captionStyleExploredListFromScroll:captionScrollCount:captionStyleIsBackgroundStyle:captionMenuOpened:captionPlaceList:] */

undefined1 *
FUN_10844bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fc8b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10844bc40; end: 10844bda3; -[SCCaptionStyleMetricsValues initWithCoder:] */

undefined1 * FUN_10844bc40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc8b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10844bda4; end: 10844bdc7; -[SCCaptionStyleMetricsValues copyWithZone:] */

undefined8 FUN_10844bda4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10844bdc8; end: 10844be9f; -[SCCaptionStyleMetricsValues encodeWithCoder:] */

void FUN_10844bdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edba78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110edba98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110edbab8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110edbad8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110edbaf8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110edbb18);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110edbb38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110edbb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10844bea0; end: 10844bf4f; -[SCCaptionStyleMetricsValues hash] */

undefined8 * FUN_10844bea0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10844c048:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10844c054;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[6] == param_3[6] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[7];
              if (puVar6 != (undefined8 *)param_3[7]) {
                func_0x00010c071ae0();
                goto LAB_10844c054;
              }
              goto LAB_10844c048;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10844c054:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10844bf50; end: 10844c06f; -[SCCaptionStyleMetricsValues isEqual:] */

long FUN_10844bf50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10844c048:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10844c054;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10844c054;
              }
              goto LAB_10844c048;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10844c054:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10844c070; end: 10844c077; -[SCCaptionStyleMetricsValues captionStyleListFromTap] */

undefined8 FUN_10844c070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10844c078; end: 10844c07f; -[SCCaptionStyleMetricsValues captionStyleListFromScroll] */

undefined8 FUN_10844c078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10844c080; end: 10844c087; -[SCCaptionStyleMetricsValues captionStyleExploredListFromTap] */

undefined8 FUN_10844c080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10844c088; end: 10844c08f; -[SCCaptionStyleMetricsValues captionStyleExploredListFromScroll] */

undefined8 FUN_10844c088(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10844c090; end: 10844c097; -[SCCaptionStyleMetricsValues captionScrollCount] */

undefined8 FUN_10844c090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10844c098; end: 10844c09f; -[SCCaptionStyleMetricsValues captionStyleIsBackgroundStyle] */

undefined1 FUN_10844c098(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10844c0a0; end: 10844c0a7; -[SCCaptionStyleMetricsValues captionMenuOpened] */

undefined1 FUN_10844c0a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10844c0a8; end: 10844c0af; -[SCCaptionStyleMetricsValues captionPlaceList] */

undefined8 FUN_10844c0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10844c0b0; end: 10844c103; -[SCCaptionStyleMetricsValues .cxx_destruct] */

void FUN_10844c0b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10844c104; end: 10844c18b; -[SCStickerMetricsValues initWithCameraRollCount:cameraRollList:] */

undefined1 *
FUN_10844c104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc8b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10844c18c; end: 10844c227; -[SCStickerMetricsValues initWithCoder:] */

undefined1 * FUN_10844c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc8b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
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



/* Entry: 10844c228; end: 10844c24b; -[SCStickerMetricsValues copyWithZone:] */

undefined8 FUN_10844c228(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10844c24c; end: 10844c2ab; -[SCStickerMetricsValues encodeWithCoder:] */

void FUN_10844c24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110edbb78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110edbb98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10844c2ac; end: 10844c313; -[SCStickerMetricsValues hash] */

long * FUN_10844c2ac(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000100505190(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10844c398;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10844c398;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10844c398;
    }
  }
  plVar5 = (long *)0x1;
LAB_10844c398:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10844c314; end: 10844c3b3; -[SCStickerMetricsValues isEqual:] */

long FUN_10844c314(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10844c398;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10844c398;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10844c398;
    }
  }
  lVar3 = 1;
LAB_10844c398:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10844c3b4; end: 10844c3bb; -[SCStickerMetricsValues cameraRollCount] */

undefined8 FUN_10844c3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10844c3bc; end: 10844c3c3; -[SCStickerMetricsValues cameraRollList] */

undefined8 FUN_10844c3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10844c3c4; end: 10844c3cf; -[SCStickerMetricsValues .cxx_destruct] */

void FUN_10844c3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10844c3d0; end: 10844c5d7; +[SCLens lensSourceFromApplicableContext:] */

undefined8 FUN_10844c3d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92a0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9358);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92c0);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92b8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92a8);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = param_3, func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92c8),
             (uVar1 & 1) == 0)) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92b0);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92d0);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92e0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c92e8);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9368);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9370);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9380);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9360);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,PTR_PTR_1133c9388);
                            uVar2 = 0x2b;
                            if ((int)uVar1 == 0) {
                              uVar2 = 0xffffffffffffffff;
                            }
                          }
                          else {
                            uVar2 = 0x2c;
                          }
                        }
                        else {
                          uVar2 = 0x1b;
                        }
                      }
                      else {
                        uVar2 = 0x1a;
                      }
                    }
                    else {
                      uVar2 = 0xc;
                    }
                  }
                  else {
                    uVar2 = 0xb;
                  }
                }
                else {
                  uVar2 = 9;
                }
              }
              else {
                uVar2 = 10;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0x11;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10844c5d8; end: 10844c5fb; +[SCLens lensTypeFromLensType:] */

undefined8 FUN_10844c5d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x19) {
    return *(undefined8 *)(&UNK_10df2fb40 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 10844c5fc; end: 10844c61b; -[SCLens sponsoredUnlockableType] */

ulong FUN_10844c5fc(long param_1)

{
  ulong uVar1;
  
  func_0x00010c24ab20();
  uVar1 = param_1 - 1;
  if (10 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 10844c61c; end: 10844c6ff; -[SCLens sponsoredLensAdId] */

void FUN_10844c61c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0x10) {
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x00010c2813a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar4,param_2,lVar2);
    puVar5 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10844c700; end: 10844c717; -[SCUcoPreviewInfoProvider _previewEditingStatesProvider] */

void FUN_10844c700(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10844c718; end: 10844c71b; -[SCUcoPreviewInfoProvider uco_shoudReplacePhotoInPhotoSnap] */

void FUN_10844c718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uco_filterHasBeenChanged_11267d4a8);
  return;
}



/* Entry: 10844c71c; end: 10844c71f; -[SCUcoPreviewInfoProvider uco_shoudReplaceVideoInVideoSnap] */

void FUN_10844c71c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uco_filterHasBeenChanged_11267d4a8);
  return;
}



/* Entry: 10844c720; end: 10844c757; -[SCUcoPreviewInfoProvider uco_hasOrHadUcoFilter] */

ulong FUN_10844c720(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c27ea60();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c27ea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uco_hadUcoFilter_11267d4b0);
  return param_1;
}



/* Entry: 10844c758; end: 10844c88f; -[SCUcoPreviewInfoProvider uco_hasUcoFilter] */

bool FUN_10844c758(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  func_0x00010be7fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf600c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27e660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27e6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    func_0x00010be7fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c244120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf954e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c27e660();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27e6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    bVar1 = lVar10 != 0;
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10844c890; end: 10844c9c7; -[SCUcoPreviewInfoProvider uco_hadUcoFilter] */

bool FUN_10844c890(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  func_0x00010be7fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08b020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27e660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27e6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    func_0x00010be7fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c244120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf18aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c27e660();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c27e6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    bVar1 = lVar10 != 0;
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(param_1);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10844c9c8; end: 10844cb4f; -[SCUcoPreviewInfoProvider uco_filterHasBeenChanged] */

uint FUN_10844c9c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar1 = param_1;
  func_0x00010be7fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar7 = 1;
  }
  else {
    func_0x00010be7fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c244120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bf18aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27e660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf954e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27e660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar3 == lVar5) {
      uVar7 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bf18aa0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27e660();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf954e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27e660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c071ae0(lVar3,param_2,lVar5);
      uVar7 = (uint)lVar6 ^ 1;
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  return uVar7;
}



/* Entry: 10844cb50; end: 10844cb67; -[SCUcoPreviewInfoProvider previewEditingStatesProvider] */

void FUN_10844cb50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10844cb68; end: 10844cb73; -[SCUcoPreviewInfoProvider setPreviewEditingStatesProvider:] */

void FUN_10844cb68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10844cb74; end: 10844cb7b; -[SCUcoPreviewInfoProvider .cxx_destruct] */

void FUN_10844cb74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10844cb7c; end: 10844cd7b; -[SCPreviewFeatureUcoImplV2 initWithPreviewConfiguration:filterUIStateProvider:imagePlayback:videoPlayback:swipeInteractionTracker:commonLoggingServices:lensProcessingSharedServices:] */

undefined8 *
FUN_10844cb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_60 = PTR_PTR_1126fc8c0;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_58;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar3);
    puVar2 = auStack_58;
    _objc_loadWeakRetained(puVar2);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010befa300(puVar2);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_7);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  return puVar1;
}



/* Entry: 10844cd7c; end: 10844ce0b;  */

void FUN_10844cd7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10844ce0c;
  puStack_38 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = uVar2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 10844ce0c; end: 10844ceb7;  */

void FUN_10844ce0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20(uVar1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10844ceb8; end: 10844cebf; -[SCPreviewFeatureUcoImplV2 responderChainPriority] */

undefined8 FUN_10844ceb8(void)

{
  return 0x7fffffff;
}



/* Entry: 10844cec0; end: 10844d0fb; -[SCPreviewFeatureUcoImplV2 activate] */

void FUN_10844cec0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0c6c20();
  func_0x00010bed0b40(param_1);
  _objc_release(lVar2);
  func_0x00010c1c5440(*(undefined8 *)(param_1 + 0x40));
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = param_1;
    func_0x00010be37620();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = puVar1;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10844d0fc;
    puStack_58 = &UNK_110842c58;
    _objc_copyWeak(auStack_50,auStack_48);
    lVar3 = lVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3;
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_50);
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf7a4e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10844d334;
    puStack_80 = &UNK_110857468;
    _objc_copyWeak(auStack_78,auStack_48);
    uVar5 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_78);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c277220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_48);
  func_0x00010c0e33e0(uVar6);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10844d0fc; end: 10844d1d7;  */

void FUN_10844d0fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar2);
        func_0x00010bf3b260();
        _objc_release(lVar2);
        _objc_storeWeak(param_1 + 0x38,0);
      }
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfb1920(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + 0x38,lVar2);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10844d1d8; end: 10844d333;  */

void FUN_10844d1d8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c40e0;
  _objc_opt_class(PTR_PTR_1126c40e0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bf4a8;
  if (uVar1 == 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    uVar4 = uVar1;
    func_0x00010c08e620();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c40e0;
    _objc_opt_class(PTR_PTR_1126c40e0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 == 0) {
      uVar5 = uVar1;
      func_0x00010c140aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c40e0;
      _objc_opt_class(PTR_PTR_1126c40e0);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar2);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
    }
    else {
      _objc_retain(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_2);
    uVar3 = param_2;
    uVar4 = param_2;
  }
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10844d334; end: 10844d373;  */

void FUN_10844d334(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10844d374; end: 10844d407;  */

void FUN_10844d374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1a3080(param_2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfc1b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2fe0(param_2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10844d408; end: 10844d4a3; -[SCPreviewFeatureUcoImplV2 _imageProcessCommandsObservable] */

void FUN_10844d408(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0c6c20();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar2 = 0x18;
    }
    else {
      if (lVar2 != 1) goto LAB_10844d490;
      lVar2 = 0x20;
    }
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfe85a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
LAB_10844d490:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10844d4a4; end: 10844d4b3; -[SCPreviewFeatureUcoImplV2 _ucoMediaTypeFromPreviewMediaType:] */

undefined8 FUN_10844d4a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10844d4b4; end: 10844d4f3; -[SCPreviewFeatureUcoImplV2 configureWithView:] */

void FUN_10844d4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x50,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10844d4f4; end: 10844d53b; -[SCPreviewFeatureUcoImplV2 _touchController] */

void FUN_10844d4f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c277220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10844d53c; end: 10844d5b3; -[SCPreviewFeatureUcoImplV2 isAnyLensTouchProcessingGestureRecognizer:] */

undefined8 FUN_10844d53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010becdb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b3858;
  func_0x00010c08fb40(PTR_PTR_1126b3858);
  uVar2 = param_1;
  func_0x00010c074620(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10844d5b4; end: 10844d7f7; -[SCPreviewFeatureUcoImplV2 shouldBlockTouchesForGestureRecognizer:] */

long FUN_10844d5b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_7);
  func_0x00010c0db140(PTR_PTR_1126b3860);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  uVar6 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  if ((uVar6 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
    uVar6 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar1);
    if ((uVar6 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar6 = param_7;
      _objc_opt_isKindOfClass(param_7,puVar1);
      if ((uVar6 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
        _objc_opt_class(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
        uVar6 = param_7;
        _objc_opt_isKindOfClass(param_7,puVar1);
        if ((uVar6 & 1) != 0) {
          func_0x00010c264560(PTR_PTR_1126b3860);
        }
      }
      else {
        func_0x00010c0f35e0(PTR_PTR_1126b3860);
      }
    }
    else {
      func_0x00010c0fc1c0(PTR_PTR_1126b3860);
    }
  }
  else {
    uVar6 = param_7;
    func_0x00010c0df4e0();
    if (uVar6 == 2) {
      func_0x00010bf883c0();
    }
    else {
      func_0x00010c268bc0(PTR_PTR_1126b3860);
    }
  }
  lVar2 = param_5 + 0x50;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf20c00();
  lVar5 = 0;
  if ((0.0 < param_3) && (0.0 < param_4)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    param_3 = 1.0 / param_3;
    param_4 = 1.0 / param_4;
    _CGAffineTransformMakeScale(&dStack_90,param_3,param_4);
    uVar6 = param_7;
    func_0x00010c0df520();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        func_0x00010c09f140(param_7);
        dVar7 = dStack_88 * param_3;
        param_3 = dStack_70 + dStack_80 * param_4 + dStack_90 * param_3;
        param_4 = dStack_68 + dStack_78 * param_4 + dVar7;
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(param_3,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        uVar6 = uVar6 + 1;
        uVar4 = param_7;
        func_0x00010c0df520();
      } while (uVar6 < uVar4);
    }
    func_0x00010becdb20(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    lVar5 = param_5;
    func_0x00010bf1d560(param_5);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  return lVar5;
}



/* Entry: 10844d7f8; end: 10844d89b; -[SCPreviewFeatureUcoImplV2 isLensTouchProcessingGestureRecognizer:] */

undefined8 FUN_10844d7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becdb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3858;
  func_0x00010c08fb40(PTR_PTR_1126b3858);
  uVar3 = uVar1;
  func_0x00010c081600(uVar1,param_2,puVar2);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010becdb20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0835c0();
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10844d89c; end: 10844da27; -[SCPreviewFeatureUcoImplV2 configureVideoFilterForAnimatedUco:] */

void FUN_10844d89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    puVar4 = PTR_PTR_1126c40c8;
    _objc_opt_class(PTR_PTR_1126c40c8);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      puVar4 = (undefined *)(param_1 + 0x38);
      _objc_loadWeakRetained();
      puVar6 = PTR_PTR_1126d9660;
      _objc_opt_class(PTR_PTR_1126d9660);
      puVar7 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar6);
      puVar6 = puVar4;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar4);
      if (puVar6 == (undefined *)0x0) {
        puVar7 = (undefined *)(param_1 + 0x38);
        _objc_loadWeakRetained(puVar7);
        func_0x00010c1bb2a0(param_3);
      }
      else {
        func_0x00010bf41e20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = PTR_PTR_1126d9660;
        _objc_alloc(PTR_PTR_1126d9660);
        func_0x00010bfffe00();
        func_0x00010c1bb2a0(param_3);
        _objc_release(puVar4);
      }
      _objc_release(puVar7);
    }
    else {
      puVar6 = PTR_PTR_1126c40c8;
      _objc_alloc(PTR_PTR_1126c40c8);
      func_0x00010bfffd20();
      func_0x00010c1bb2a0(param_3);
    }
    _objc_release(puVar6);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10844da28; end: 10844dabb;  */

void FUN_10844da28(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c40c8;
  _objc_opt_class(PTR_PTR_1126c40c8);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = param_2;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_2);
    puVar2 = param_2;
  }
  else {
    puVar2 = PTR_PTR_1126c40c8;
    _objc_alloc(PTR_PTR_1126c40c8);
    func_0x00010bfffd20();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10844dabc; end: 10844dad3; -[SCPreviewFeatureUcoImplV2 gestureRecognizerDelegate] */

void FUN_10844dabc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10844dad4; end: 10844dadf; -[SCPreviewFeatureUcoImplV2 setGestureRecognizerDelegate:] */

void FUN_10844dad4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10844dae0; end: 10844db6b; -[SCPreviewFeatureUcoImplV2 .cxx_destruct] */

void FUN_10844dae0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10844db6c; end: 10844dd03; -[SCPreviewFeatureUcoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844db6c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_1127754ec;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d9678;
  _objc_alloc(PTR_PTR_1126d9678);
  func_0x00010c057f20();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112775518);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 10844dd04; end: 10844dee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844dd04(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1 + _DAT_112775514;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c068920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar12 = PTR_PTR_1126d9668;
    _objc_opt_class(PTR_PTR_1126d9668);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar12);
    uVar1 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126d9670;
    _objc_alloc();
    lVar4 = param_1 + _DAT_112775504;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c2527c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_1127754f8;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bfe8440();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_1127754fc;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_1127754f4;
    _objc_loadWeakRetained(lVar10);
    lVar11 = param_1 + _DAT_112775510;
    _objc_loadWeakRetained();
    func_0x00010c0397e0(puVar12);
    _objc_release(uVar1);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10844dee4; end: 10844df97; -[SCPreviewFeatureUcoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844dee4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112775518,0);
  _objc_destroyWeak(param_1 + _DAT_112775514);
  _objc_destroyWeak(param_1 + _DAT_112775510);
  _objc_destroyWeak(param_1 + _DAT_11277550c);
  _objc_destroyWeak(param_1 + _DAT_112775508);
  _objc_destroyWeak(param_1 + _DAT_112775504);
  _objc_destroyWeak(param_1 + _DAT_112775500);
  _objc_destroyWeak(param_1 + _DAT_1127754fc);
  _objc_destroyWeak(param_1 + _DAT_1127754f8);
  _objc_destroyWeak(param_1 + _DAT_1127754f4);
  _objc_destroyWeak(param_1 + _DAT_1127754f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127754ec);
  return;
}



/* Entry: 10844df98; end: 10844e043; -[SCPreviewFeatureUcoServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844df98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_11277551c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112775520;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c27e580(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10844e044; end: 10844e07b; -[SCPreviewFeatureUcoServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844e044(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112775520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277551c);
  return;
}



/* Entry: 10844e07c; end: 10844e15f; -[SCPreviewUcoInteractionTrackingServiceProvider provide] */

void FUN_10844e07c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d9680;
  _objc_alloc(PTR_PTR_1126d9680);
  func_0x00010c01e7a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10844e160; end: 10844e39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844e160(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112775530;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c27e840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar16 = PTR_PTR_1126d9668;
    _objc_alloc();
    lVar1 = param_1 + _DAT_11277552c;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c281440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112775528;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c243340();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_112775530;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c0951c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112775534;
    _objc_loadWeakRetained(lVar13);
    lVar14 = lVar13;
    func_0x00010c24a560();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059300(puVar16,param_2,lVar5,lVar3,lVar10,lVar12,lVar15);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10844e3a0; end: 10844e3a7;  */

void FUN_10844e3a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensReadyTracker_1126033a0);
  return;
}



/* Entry: 10844e3a8; end: 10844e403; -[SCPreviewUcoInteractionTrackingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10844e3a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112775534);
  _objc_destroyWeak(param_1 + _DAT_112775530);
  _objc_destroyWeak(param_1 + _DAT_11277552c);
  _objc_destroyWeak(param_1 + _DAT_112775528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112775524);
  return;
}



/* Entry: 10844e404; end: 10844e487; -[SCUcoCarouselConfigProvider initWithCircumstanceEngine:] */

undefined1 * FUN_10844e404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc8c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010beb16c0(puVar1);
    func_0x00010be10640(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10844e488; end: 10844e4e3; -[SCUcoCarouselConfigProvider splitScreenEnabledForCarouselGroup:] */

long FUN_10844e488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010844f3f4();
  func_0x00010be3ebc0(param_1,param_2,param_3,uVar2,uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10844e4e4; end: 10844e53f; -[SCUcoCarouselConfigProvider loadingIndicatorEnabledForCarouselGroup:] */

long FUN_10844e4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010844f3dc();
  func_0x00010be3ebc0(param_1,param_2,param_3,uVar2,uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10844e540; end: 10844e59b; -[SCUcoCarouselConfigProvider darkOverlayEnabledForCarouselGroup:] */

long FUN_10844e540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010844f3e8();
  func_0x00010be3ebc0(param_1,param_2,param_3,uVar2,uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10844e59c; end: 10844e5f7; -[SCUcoCarouselConfigProvider infoCardEnabledForCarouselGroup:] */

uint FUN_10844e59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010844f400();
  func_0x00010be3ebc0(param_1,param_2,param_3,uVar2,uVar1);
  _objc_release(param_3);
  return (uint)param_1 ^ 1;
}



/* Entry: 10844e5f8; end: 10844e6a7; -[SCUcoCarouselConfigProvider _isCarouselGroup:inSet:withTweakValue:] */

ulong FUN_10844e5f8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 1;
  if (param_5 < 3) {
    if (param_5 == 0) {
      uVar2 = param_4;
      func_0x00010bf4b900(param_4,param_2,param_3);
      goto LAB_10844e684;
    }
    if (param_5 != 2) goto LAB_10844e684;
    ppuVar1 = &PTR_PTR_110ac2330;
  }
  else {
    if (param_5 != 3) {
      uVar2 = (ulong)(param_5 != 4);
      goto LAB_10844e684;
    }
    ppuVar1 = &PTR_PTR_110ac2328;
  }
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,*ppuVar1);
LAB_10844e684:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10844e6a8; end: 10844e7a3; -[SCUcoCarouselConfigProvider _fetchCofValues] */

void FUN_10844e6a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126af7d0;
  _objc_opt_new(PTR_PTR_1126af7d0);
  puVar2 = puVar1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1195c0(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10844e7a4; end: 10844e7eb;  */

void FUN_10844e7a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beab720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10844e7ec; end: 10844e9cf; -[SCUcoCarouselConfigProvider _setupCarouselConfigurationFromProto:] */

void FUN_10844e7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lStack_58;
  
  puVar3 = PTR_PTR_1126d9688;
  _objc_retain(param_3);
  _objc_alloc();
  uVar7 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_58 = 0;
  func_0x00010c008360(puVar3,param_2,uVar7,&lStack_58);
  lVar2 = lStack_58;
  _objc_retain(lStack_58);
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar2 == 0) {
    puVar4 = puVar3;
    func_0x00010c249fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
    }
    func_0x00010c225c20(puVar5,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar4 = puVar3;
    func_0x00010c09cfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    func_0x00010c225c20(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar4 = puVar3;
    func_0x00010bf63500();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
    }
    func_0x00010c225c20(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar6 = puVar3;
    func_0x00010bfed9e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar1 = puVar6;
    }
    func_0x00010c225c20(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10844e9d0; end: 10844ea77; -[SCUcoCarouselConfigProvider _setupWithDefaultValues] */

void FUN_10844e9d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e77078);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10844ea78; end: 10844eacb; -[SCUcoCarouselConfigProvider .cxx_destruct] */

void FUN_10844ea78(long param_1)

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



/* Entry: 10844eacc; end: 10844ebeb; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker initWithUnlockableTracker:lensReadyTracker:sessionId:lensMetadataRepository:sponsoredLensScheduleService:] */

undefined1 *
FUN_10844eacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fc8d0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    func_0x00010c251c00(*(undefined8 *)((long)puVar1 + 8));
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



/* Entry: 10844ebec; end: 10844ebf3; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker setMediaType:] */

void FUN_10844ebec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10844ebf4; end: 10844ee43; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker addInteractionWithUnlockableId:swipeStartTime:swipeEndTime:swipeTimeSec:carouselIndex:] */

void FUN_10844ebf4(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c8c40;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  func_0x00010c21bbe0();
  func_0x00010be75e00(param_2);
  func_0x00010c0720c0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c225ca0(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210880(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1ac060(puVar1);
  uVar2 = param_5;
  func_0x00010bf64de0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1ae200(puVar1);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010bf64de0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1ae0c0(puVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0952e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar6 = param_3;
    func_0x00010c2813a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bcc0(*(undefined8 *)(puVar1 + 0x20));
    _objc_release(uVar6);
    lVar9 = *(long *)(puVar1 + 0x28);
    func_0x00010be63e20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c07f200();
    if (((uVar6 & 1) != 0) || (lVar9 != 0)) {
      uVar6 = param_3;
      func_0x00010bf93ae0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195a40(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(uVar6);
      func_0x00010c07de20(param_3);
      func_0x00010c1b4580(*(undefined8 *)(puVar1 + 0x20));
      func_0x00010c24ab20(param_3);
      func_0x00010c1bcce0(*(undefined8 *)(puVar1 + 0x20));
      uVar6 = param_3;
      func_0x00010c0d53e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc3e0(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(uVar6);
      lVar7 = lVar9;
      func_0x00010c15ed20(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd800(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(lVar7);
      lVar7 = lVar9;
      func_0x00010bf93980(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd7e0(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(lVar7);
      uVar6 = param_3;
      func_0x00010bfca960(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf0d600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b360(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar5 = *(undefined8 *)(puVar1 + 0x28);
      func_0x00010bebebc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c089660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c87c0(*(undefined8 *)(puVar1 + 0x20));
      _objc_release(uVar2);
      _objc_release(uVar5);
    }
    _objc_release(lVar9);
  }
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(puVar1 + 0x28) + 8);
  func_0x00010c2810a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9460(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10844ee44; end: 10844f05b;  */

void FUN_10844ee44(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bcc0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010be63e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c07f200();
    if (((uVar1 & 1) != 0) || (lVar2 != 0)) {
      uVar1 = param_2;
      func_0x00010bf93ae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195a40(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar1);
      func_0x00010c07de20(param_2);
      func_0x00010c1b4580(*(undefined8 *)(param_1 + 0x20));
      func_0x00010c24ab20(param_2);
      func_0x00010c1bcce0(*(undefined8 *)(param_1 + 0x20));
      uVar1 = param_2;
      func_0x00010c0d53e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc3e0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar1);
      lVar3 = lVar2;
      func_0x00010c15ed20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd800(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010bf93980(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd7e0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar3);
      uVar1 = param_2;
      func_0x00010bfca960(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf0d600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b360(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bebebc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c089660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c87c0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c2810a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9460(uVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10844f05c; end: 10844f063; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker setSessionId:] */

void FUN_10844f05c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setSessionId__11265d0b0)
  ;
  return;
}



/* Entry: 10844f064; end: 10844f06b; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker endSessionWithCommonLoggingParameters:appliedUnlockableIds:] */

void FUN_10844f064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf95490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endSessionWithCommonLoggingParam_1125c2ec8);
  return;
}



/* Entry: 10844f06c; end: 10844f09b; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker attachmentOpenedWithLensId:] */

void FUN_10844f06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10844f09c; end: 10844f13f; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker _noFillForLens:carouselIndex:] */

void FUN_10844f09c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bebebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10844f140; end: 10844f16f;  */

bool FUN_10844f140(long param_1,long param_2)

{
  func_0x00010bf32840(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 10844f170; end: 10844f20f; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker _sponsoredScheduleNamespaceDataForLens:] */

void FUN_10844f170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c073c60();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf273c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0d53e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10844f210; end: 10844f2ff; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker _populateLensPerformanceMetrics:lensId:] */

void FUN_10844f210(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf08420(lVar1,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07c360();
    func_0x00010c1b3da0(param_4,param_3,lVar3);
    func_0x00010bf07860(lVar2);
    if (0.0 < param_1) {
      func_0x00010bf07860(lVar2);
      dVar4 = param_1;
      func_0x00010bf07b20(lVar2);
      func_0x00010c1ba9e0(param_4,param_3,(long)((param_1 - dVar4) * 1000.0));
    }
    func_0x00010c1c3640(param_4,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111852d0);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10844f300; end: 10844f353; -[SCFeatureSwipeFiltersUcoSwipeInteractionTracker .cxx_destruct] */

void FUN_10844f300(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10844f354; end: 10844f3c7; -[SCPreviewFeatureUcoServices initWithUco:] */

undefined1 * FUN_10844f354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc8d8;
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



/* Entry: 10844f3c8; end: 10844f3cf; -[SCPreviewFeatureUcoServices uco] */

undefined8 FUN_10844f3c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10844f3d0; end: 10844f40b; -[SCPreviewFeatureUcoServices .cxx_destruct] */

void FUN_10844f3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10844f40c; end: 10844f503; -[SCMultiSnapIndividualEditingState initWithTimeBase:] */

undefined1 * FUN_10844f40c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc8e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    *(undefined8 *)((long)puVar1 + 0xc0) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0xb8) = uVar4;
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c3ca0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = 1;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10844f504; end: 10844f5d3; -[SCMultiSnapIndividualEditingState setTimeBase:] */

void FUN_10844f504(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0xb8);
  uStack_40 = *(undefined8 *)(param_1 + 0xb0);
  uStack_30 = *(undefined8 *)(param_1 + 0xc0);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  puVar1 = &uStack_40;
  _CMTimeCompare(puVar1,&uStack_60);
  if ((int)puVar1 != 0) {
    if (*(long *)(param_1 + 0x80) != 0) {
      func_0x00010bf0ffa0(&uStack_60);
      func_0x00010be62ca0(&uStack_40,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      uStack_50 = uStack_30;
      FUN_1084532b0(uVar2,&uStack_60);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      _objc_release(uVar3);
    }
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0xc0) = param_3[2];
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  return;
}



/* Entry: 10844f5d4; end: 10844f67f; -[SCMultiSnapIndividualEditingState visualFilterName] */

void FUN_10844f5d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c2a0460(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c2a0460();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c2a04c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2a04c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2a0460(uVar5);
    uVar6 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    uVar6 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10844f680; end: 10844f777; -[SCMultiSnapIndividualEditingState videoPlaybackRate] */

undefined8 FUN_10844f680(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c249de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x3ff0000000000000;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c249d80();
    _objc_release(lVar1);
    if (lVar2 != 0x7fffffffffffffff) {
      uVar3 = *(ulong *)(param_1 + 0x30);
      func_0x00010c249de0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c249d80(uVar6);
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010c0e00e0(uVar4,param_2,PTR_PTR_11329cf70);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c067fc0();
      _objc_release(uVar3);
      uVar6 = 0;
      if (uVar5 < 4) {
        uVar6 = *(undefined8 *)(&UNK_10df2fc08 + uVar5 * 8);
      }
      _objc_release(uVar4);
    }
  }
  return uVar6;
}



/* Entry: 10844f778; end: 10844f9d7; -[SCMultiSnapIndividualEditingState hasAnimatedOrTrackingContent] */

void FUN_10844f778(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [128];
  long lStack_310;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_58;
  
  puVar2 = &uStack_2a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar12);
  puVar11 = &uStack_220;
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar15 = *plStack_210;
    do {
      lVar16 = 0;
      do {
        if (*plStack_210 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        uVar14 = *(ulong *)(lStack_218 + lVar16 * 8);
        uVar1 = uVar14;
        func_0x00010c06c000();
        if (((uVar1 & 1) != 0) || (func_0x00010c081660(), (uVar14 & 1) != 0)) goto LAB_10844f994;
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
      puVar11 = &uStack_220;
      lVar8 = lVar12;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar12);
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar12);
  puVar11 = &uStack_260;
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar15 = *plStack_250;
    do {
      lVar16 = 0;
      do {
        if (*plStack_250 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        uVar1 = *(ulong *)(lStack_258 + lVar16 * 8);
        func_0x00010c081660();
        if ((uVar1 & 1) != 0) goto LAB_10844f994;
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
      puVar11 = &uStack_260;
      lVar8 = lVar12;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar12);
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 0x30);
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar15 = *plStack_290;
    do {
      lVar16 = 0;
      puVar11 = puVar2;
      do {
        if (*plStack_290 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        uVar1 = *(ulong *)(lStack_298 + lVar16 * 8);
        func_0x00010c06c000();
        if ((uVar1 & 1) != 0) goto LAB_10844f994;
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
      lVar8 = lVar12;
      puVar2 = &uStack_2a0;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar12);
  uVar1 = (ulong)(*(long *)(param_1 + 0x18) != 0);
  puVar11 = puVar2;
LAB_10844f9a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  puVar2 = puVar11;
  func_0x00010bf4e4e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182f00(*(undefined8 *)(uVar1 + 0x30),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2a0460(*(undefined8 *)(uVar1 + 0x30));
  uVar3 = *(ulong *)(uVar1 + 0x30);
  func_0x00010c2a0460();
  uVar4 = *(ulong *)(uVar1 + 0x30);
  func_0x00010c2a04c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar3 < uVar14) {
    uVar5 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c2a04c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c2a0460(uVar6);
    uVar13 = uVar5;
    func_0x00010c0dfd40(uVar5,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    uVar13 = 0;
  }
  puVar2 = puVar11;
  func_0x00010c2a04c0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223ee0(*(undefined8 *)(uVar1 + 0x30),param_2,puVar2);
  _objc_release(puVar2);
  uVar6 = *(undefined8 *)(uVar1 + 0x30);
  func_0x00010c2a04c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bfecde0();
  func_0x00010c223ea0(*(undefined8 *)(uVar1 + 0x30),param_2,uVar5);
  _objc_release(uVar6);
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  lVar12 = *(long *)(uVar1 + 0x30);
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010bf52a60();
  if (lVar8 == 0) {
    _objc_release(lVar12);
  }
  else {
    lVar15 = *plStack_3c0;
    uVar17 = 1;
    do {
      lVar16 = 0;
      do {
        if (*plStack_3c0 != lVar15) {
          _objc_enumerationMutation(lVar12);
        }
        puVar2 = puVar11;
        func_0x00010bfc1440();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010bf4b900();
        _objc_release(puVar2);
        uVar17 = (uint)puVar7 & uVar17;
        lVar16 = lVar16 + 1;
      } while (lVar8 != lVar16);
      lVar8 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,&uStack_3d0,auStack_390,0x10);
    } while (lVar8 != 0);
    _objc_release(lVar12);
    if (uVar17 == 0) goto LAB_10844fc18;
  }
  puVar2 = puVar11;
  func_0x00010bfc1440(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2c80(*(undefined8 *)(uVar1 + 0x30),param_2,puVar2);
  _objc_release(puVar2);
LAB_10844fc18:
  lVar8 = *(long *)(uVar1 + 0x30);
  func_0x00010c249d80();
  if (lVar8 == 0x7fffffffffffffff) {
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c249de0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c249d80(uVar9);
    uVar5 = uVar6;
    func_0x00010c0dfd40(uVar6,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
  }
  puVar2 = puVar11;
  func_0x00010c249de0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207d20(*(undefined8 *)(uVar1 + 0x30),param_2,puVar2);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(uVar1 + 0x30);
  func_0x00010c249de0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010bfecde0();
  func_0x00010c207ce0(*(undefined8 *)(uVar1 + 0x30),param_2,uVar6);
  _objc_release(uVar9);
  lVar8 = *(long *)(uVar1 + 0x30);
  func_0x00010c23ebe0();
  if (lVar8 == 0x7fffffffffffffff) {
    uVar6 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c23ec00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(uVar1 + 0x30);
    func_0x00010c23ebe0(uVar10);
    uVar6 = uVar9;
    func_0x00010c0dfd40(uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  puVar2 = puVar11;
  func_0x00010c23ec00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203460(*(undefined8 *)(uVar1 + 0x30),param_2,puVar2);
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(uVar1 + 0x30);
  func_0x00010c23ec00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfecde0();
  func_0x00010c203440(*(undefined8 *)(uVar1 + 0x30),param_2,uVar9);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
    ___stack_chk_fail();
    lVar8 = puVar11[0x10];
    if (lVar8 == 0) {
      lVar8 = puVar11[0x11];
    }
    _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  return;
LAB_10844f994:
  _objc_release(lVar12);
  uVar1 = 1;
  goto LAB_10844f9a0;
}



/* Entry: 10844f9d8; end: 10844fdcf; -[SCMultiSnapIndividualEditingState updateAvailableFiltersWithState:] */

void FUN_10844f9d8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  lVar9 = param_3;
  func_0x00010bf4e4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182f00(*(undefined8 *)(param_1 + 0x30),param_2,lVar9);
  _objc_release(lVar9);
  func_0x00010c2a0460(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c2a0460();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c2a04c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2a04c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2a0460(uVar5);
    uVar12 = uVar4;
    func_0x00010c0dfd40(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    uVar12 = 0;
  }
  lVar9 = param_3;
  func_0x00010c2a04c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223ee0(*(undefined8 *)(param_1 + 0x30),param_2,lVar9);
  _objc_release(lVar9);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2a04c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfecde0();
  func_0x00010c223ea0(*(undefined8 *)(param_1 + 0x30),param_2,uVar4);
  _objc_release(uVar5);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010bfc1460();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf52a60();
  if (lVar9 == 0) {
    _objc_release(lVar6);
  }
  else {
    lVar14 = *plStack_120;
    uVar13 = 1;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = param_3;
        func_0x00010bfc1440();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf4b900();
        _objc_release(lVar7);
        uVar13 = (uint)lVar8 & uVar13;
        lVar15 = lVar15 + 1;
      } while (lVar9 != lVar15);
      lVar9 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar9 != 0);
    _objc_release(lVar6);
    if (uVar13 == 0) goto LAB_10844fc18;
  }
  lVar9 = param_3;
  func_0x00010bfc1440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2c80(*(undefined8 *)(param_1 + 0x30),param_2,lVar9);
  _objc_release(lVar9);
LAB_10844fc18:
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c249d80();
  if (lVar9 == 0x7fffffffffffffff) {
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c249de0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c249d80(uVar10);
    uVar4 = uVar5;
    func_0x00010c0dfd40(uVar5,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  lVar9 = param_3;
  func_0x00010c249de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207d20(*(undefined8 *)(param_1 + 0x30),param_2,lVar9);
  _objc_release(lVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c249de0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bfecde0();
  func_0x00010c207ce0(*(undefined8 *)(param_1 + 0x30),param_2,uVar5);
  _objc_release(uVar10);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c23ebe0();
  if (lVar9 == 0x7fffffffffffffff) {
    uVar5 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c23ec00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c23ebe0(uVar11);
    uVar5 = uVar10;
    func_0x00010c0dfd40(uVar10,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
  }
  lVar9 = param_3;
  func_0x00010c23ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203460(*(undefined8 *)(param_1 + 0x30),param_2,lVar9);
  _objc_release(lVar9);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23ec00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bfecde0();
  func_0x00010c203440(*(undefined8 *)(param_1 + 0x30),param_2,uVar10);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar9 = *(long *)(param_3 + 0x80);
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_3 + 0x88);
    }
    _objc_retain(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    return;
  }
  return;
}


