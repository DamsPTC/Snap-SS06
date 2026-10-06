/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b626be4; end: 10b626c57; -[SCStoriesSharedStoryFeatureMetadata hash] */

undefined8 * FUN_10b626be4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b626cd8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b626ce4;
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
          goto LAB_10b626ce4;
        }
        goto LAB_10b626cd8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b626ce4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b626c58; end: 10b626cff; -[SCStoriesSharedStoryFeatureMetadata isEqual:] */

long FUN_10b626c58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b626cd8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b626ce4;
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
          goto LAB_10b626ce4;
        }
        goto LAB_10b626cd8;
      }
    }
    lVar3 = 0;
  }
LAB_10b626ce4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b626d00; end: 10b626d07; -[SCStoriesSharedStoryFeatureMetadata storyDescription] */

undefined8 FUN_10b626d00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b626d08; end: 10b626d0f; -[SCStoriesSharedStoryFeatureMetadata boltMediaServingInfo] */

undefined8 FUN_10b626d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b626d10; end: 10b626d3f; -[SCStoriesSharedStoryFeatureMetadata .cxx_destruct] */

void FUN_10b626d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b626d40; end: 10b626db7; -[SCStoriesShortcutStoryFeatureMetadata initWithShortcutId:] */

undefined1 * FUN_10b626d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706c50;
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



/* Entry: 10b626db8; end: 10b626ddb; -[SCStoriesShortcutStoryFeatureMetadata copyWithZone:] */

undefined8 FUN_10b626db8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b626ddc; end: 10b626de3; -[SCStoriesShortcutStoryFeatureMetadata hash] */

void FUN_10b626ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b626de4; end: 10b626e73; -[SCStoriesShortcutStoryFeatureMetadata isEqual:] */

long FUN_10b626de4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b626e58;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b626e58;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b626e58;
    }
  }
  lVar3 = 1;
LAB_10b626e58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b626e74; end: 10b626e7b; -[SCStoriesShortcutStoryFeatureMetadata shortcutId] */

undefined8 FUN_10b626e74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b626e7c; end: 10b626e87; -[SCStoriesShortcutStoryFeatureMetadata .cxx_destruct] */

void FUN_10b626e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b626e88; end: 10b626ecf; -[SCStoriesBestFriendStoryFeatureMetadata initWithLastUpdatedTimestamp:] */

void FUN_10b626e88(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706c58;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 10b626ed0; end: 10b626ef3; -[SCStoriesBestFriendStoryFeatureMetadata copyWithZone:] */

undefined8 FUN_10b626ed0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b626ef4; end: 10b626f1b; -[SCStoriesBestFriendStoryFeatureMetadata hash] */

ulong FUN_10b626ef4(long param_1)

{
  ulong uVar1;
  
  uVar1 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 10b626f1c; end: 10b626fc7; -[SCStoriesBestFriendStoryFeatureMetadata isEqual:] */

bool FUN_10b626f1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10b626fc8; end: 10b626fcf; -[SCStoriesBestFriendStoryFeatureMetadata lastUpdatedTimestamp] */

undefined8 FUN_10b626fc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b626fd0; end: 10b62706f; -[SCStoriesSnapViewer initWithUserId:viewTimestampMs:screenshotted:saved:] */

undefined1 *
FUN_10b626fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706c60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b627070; end: 10b627093; -[SCStoriesSnapViewer copyWithZone:] */

undefined8 FUN_10b627070(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b627094; end: 10b627113; -[SCStoriesSnapViewer hash] */

undefined8 * FUN_10b627094(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar2 = &uStack_48;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6271b8;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[3] != param_3[3] || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) ||
        (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))))) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b6271b8;
    }
    puVar5 = (undefined8 *)puVar2[2];
    if (puVar5 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b6271b8;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b6271b8:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b627114; end: 10b6271d3; -[SCStoriesSnapViewer isEqual:] */

long FUN_10b627114(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6271b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10b6271b8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b6271b8;
    }
  }
  lVar3 = 1;
LAB_10b6271b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6271d4; end: 10b6271db; -[SCStoriesSnapViewer userId] */

undefined8 FUN_10b6271d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6271dc; end: 10b6271e3; -[SCStoriesSnapViewer viewTimestampMs] */

undefined8 FUN_10b6271dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6271e4; end: 10b6271eb; -[SCStoriesSnapViewer screenshotted] */

undefined1 FUN_10b6271e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6271ec; end: 10b6271f3; -[SCStoriesSnapViewer saved] */

undefined1 FUN_10b6271ec(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b6271f4; end: 10b6271ff; -[SCStoriesSnapViewer .cxx_destruct] */

void FUN_10b6271f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b627200; end: 10b6272eb;  */

void FUN_10b627200(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126c3330);
    func_0x00010c04d900();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6272ec; end: 10b62748b;  */

undefined8 * FUN_10b6272ec(undefined8 *param_1,undefined8 param_2)

{
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_10b62748c;
  puStack_50 = &UNK_110d26d78;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc0000000;
  pcStack_80 = FUN_10b627540;
  puStack_78 = &UNK_110d26d98;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc0000000;
  pcStack_a8 = FUN_10b627620;
  puStack_a0 = &UNK_110d26db8;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc0000000;
  pcStack_d0 = FUN_10b627740;
  puStack_c8 = &UNK_110d26dd8;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc0000000;
  pcStack_f8 = FUN_10b6278a8;
  puStack_f0 = &UNK_110d26df8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc0000000;
  pcStack_120 = FUN_10b627970;
  puStack_118 = &UNK_110d26e18;
  puStack_110 = param_1;
  puStack_e8 = param_1;
  puStack_c0 = param_1;
  puStack_98 = param_1;
  puStack_70 = param_1;
  puStack_48 = param_1;
  func_0x00010c0c1340(param_2,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130);
  return param_1;
}



/* Entry: 10b62748c; end: 10b62753f;  */

void FUN_10b62748c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  _objc_retain(param_2);
  plVar3 = *(long **)(param_1 + 0x20);
  lVar1 = 0x18;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c27dd80();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010bf62820();
  *(long *)(lVar1 + 0x10) = lVar2;
  _objc_release(param_2);
  lVar2 = *plVar3;
  *plVar3 = lVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b627540; end: 10b62761f;  */

void FUN_10b627540(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0x28;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010c27dd80();
  *(long *)(lVar1 + 0x10) = lVar2;
  lVar2 = param_2;
  func_0x00010bf62820();
  *(long *)(lVar1 + 0x18) = lVar2;
  lVar2 = param_2;
  func_0x00010c1143e0();
  *(long *)(lVar1 + 0x20) = lVar2;
  _objc_release(param_2);
  func_0x00010805bea4(lVar3 + 8,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b627620; end: 10b62773f;  */

void FUN_10b627620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0x28;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c2751c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x10) = lVar2;
  lVar2 = param_2;
  func_0x00010c0ed9e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x18) = lVar2;
  lVar2 = param_2;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x20) = lVar2;
  _objc_release(param_2);
  plVar4 = (long *)(lVar3 + 0x10);
  lVar2 = *plVar4;
  *plVar4 = lVar1;
  if (lVar2 != 0) {
    func_0x00010805be5c(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b627740; end: 10b6278a7;  */

void FUN_10b627740(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0x40;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x10) = lVar2;
  lVar2 = param_2;
  func_0x00010c0ed940();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x18) = lVar2;
  lVar2 = param_2;
  func_0x00010c07f5e0();
  *(char *)(lVar1 + 0x20) = (char)lVar2;
  lVar2 = param_2;
  func_0x00010c077620();
  *(char *)(lVar1 + 0x21) = (char)lVar2;
  lVar2 = param_2;
  func_0x00010c24c380();
  *(long *)(lVar1 + 0x28) = lVar2;
  lVar2 = param_2;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x30) = lVar2;
  lVar2 = param_2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x38) = lVar2;
  _objc_release(param_2);
  plVar4 = (long *)(lVar3 + 0x18);
  lVar2 = *plVar4;
  *plVar4 = lVar1;
  if (lVar2 != 0) {
    func_0x00010805be0c(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b6278a8; end: 10b62796f;  */

void FUN_10b6278a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0x18;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010c25b720();
  *(long *)(lVar1 + 0x10) = lVar2;
  _objc_release(param_2);
  func_0x00010805bdd0(lVar3 + 0x20,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b627970; end: 10b627a83;  */

void FUN_10b627970(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = 0x28;
  __Znwm();
  _objc_retain(param_2);
  *(bool *)lVar1 = param_2 == 0;
  lVar2 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 8) = lVar2;
  lVar2 = param_2;
  func_0x00010c078f60();
  *(char *)(lVar1 + 0x10) = (char)lVar2;
  lVar2 = param_2;
  func_0x00010bf15520();
  *(int *)(lVar1 + 0x14) = (int)lVar2;
  lVar2 = param_2;
  func_0x00010c25b6c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x18) = lVar2;
  lVar2 = param_2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar1 + 0x20) = lVar2;
  _objc_release(param_2);
  plVar4 = (long *)(lVar3 + 0x28);
  lVar2 = *plVar4;
  *plVar4 = lVar1;
  if (lVar2 != 0) {
    func_0x00010805bd90(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b627a84; end: 10b627b0b;  */

undefined8 FUN_10b627a84(undefined8 *param_1)

{
  if (((((char *)*param_1 == (char *)0x0) || (*(char *)*param_1 == '\x01')) &&
      (((char *)param_1[1] == (char *)0x0 || (*(char *)param_1[1] == '\x01')))) &&
     (((((char *)param_1[2] == (char *)0x0 || (*(char *)param_1[2] == '\x01')) &&
       (((char *)param_1[3] == (char *)0x0 || (*(char *)param_1[3] == '\x01')))) &&
      ((((char *)param_1[4] == (char *)0x0 || (*(char *)param_1[4] == '\x01')) &&
       (((char *)param_1[5] == (char *)0x0 || (*(char *)param_1[5] == '\x01')))))))) {
    return 1;
  }
  return 0;
}



/* Entry: 10b627b0c; end: 10b627db7;  */

long FUN_10b627b0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x10) = lVar1;
  lVar1 = param_2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = param_2;
  func_0x00010c27dd80();
  *(long *)(param_1 + 0x20) = lVar1;
  lVar1 = param_2;
  func_0x00010bf06600();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x28) = lVar1;
  lVar1 = param_2;
  func_0x00010bf7f0c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x30) = lVar1;
  lVar1 = param_2;
  func_0x00010c083e00();
  *(char *)(param_1 + 0x38) = (char)lVar1;
  lVar1 = param_2;
  func_0x00010bf1eee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_1 + 0x40) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c08f8c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x48) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0c4440();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x50) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0ef640();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x58) = lVar2;
  lVar2 = lVar1;
  func_0x00010c26d900();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x60) = lVar2;
  lVar2 = lVar1;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x68) = lVar2;
  lVar2 = lVar1;
  func_0x00010c260e20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x70) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf03740();
  *(long *)(param_1 + 0x78) = lVar1;
  lVar1 = param_2;
  func_0x00010bf1f2a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x80) = lVar1;
  lVar1 = param_2;
  func_0x00010bfb26c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_1 + 0x88) = lVar1;
  lVar1 = param_2;
  func_0x00010c0802a0();
  *(char *)(param_1 + 0x90) = (char)lVar1;
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b627db8; end: 10b627e07;  */

long FUN_10b627db8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b627e08; end: 10b627f1b;  */

void FUN_10b627e08(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if ((*param_1 == '\x01') && ((param_1[0x40] & 1U) != 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126cf3c0;
    _objc_alloc(PTR_PTR_1126cf3c0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    cVar7 = param_1[0x38];
    if ((param_1[0x40] & 1U) == 0) {
      puVar9 = PTR_PTR_1126d5df0;
      _objc_alloc();
      func_0x00010c022620();
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    func_0x00010c01b280(puVar8,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,cVar7);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b627f1c; end: 10b627f83;  */

long FUN_10b627f1c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b627f84; end: 10b62933b;  */

long FUN_10b627f84(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 8) = lVar1;
  lVar1 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x10) = lVar1;
  lVar1 = param_3;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b6272ec(param_2 + 0x18,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf12320();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x48) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x50) = lVar2;
  lVar2 = lVar1;
  func_0x00010bfc11c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x58) = lVar2;
  lVar2 = lVar1;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x60) = lVar2;
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x68) = lVar2;
  lVar2 = lVar1;
  func_0x00010c096600();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x70) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x78) = lVar1;
  lVar1 = param_3;
  func_0x00010bf5bc00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x80) = lVar1;
  lVar1 = param_3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x88) = lVar1 == 0;
  func_0x00010bf8b160(lVar1);
  *(undefined8 *)(param_2 + 0x90) = param_1;
  lVar2 = lVar1;
  func_0x00010c071060();
  *(char *)(param_2 + 0x98) = (char)lVar2;
  func_0x00010bf9c720(lVar1);
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  func_0x00010c2709c0(lVar1);
  *(undefined8 *)(param_2 + 0xa8) = param_1;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b627b0c(param_2 + 0xb0,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x148) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x150) = lVar2;
  lVar2 = lVar1;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x158) = lVar2;
  lVar2 = lVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x160) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0ed6a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x168) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0880c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x170) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x178) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x180) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf4cd40();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x188) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf4cd20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 400) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf30da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x198) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010bf28e60();
  *(long *)(param_2 + 0x1a0) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0ed100();
  *(long *)(param_2 + 0x1a8) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf93b00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x1b0) = lVar2;
  lVar2 = lVar1;
  func_0x00010c1048c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x1b8) = lVar2 == 0;
  func_0x00010c0b55a0(lVar2);
  *(undefined8 *)(param_2 + 0x1c0) = param_1;
  func_0x00010c08b3c0(lVar2);
  *(undefined8 *)(param_2 + 0x1c8) = param_1;
  func_0x00010bf01f00(lVar2);
  *(undefined8 *)(param_2 + 0x1d0) = param_1;
  func_0x00010bfe4080(lVar2);
  *(undefined8 *)(param_2 + 0x1d8) = param_1;
  func_0x00010c298e00(lVar2);
  *(undefined8 *)(param_2 + 0x1e0) = param_1;
  func_0x00010bf537c0(lVar2);
  *(undefined8 *)(param_2 + 0x1e8) = param_1;
  func_0x00010c249ca0(lVar2);
  *(undefined8 *)(param_2 + 0x1f0) = param_1;
  func_0x00010c2709c0(lVar2);
  *(undefined8 *)(param_2 + 0x1f8) = param_1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c12fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x200) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x208) = lVar2;
  lVar2 = lVar1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x210) = lVar2 == 0;
  lVar3 = lVar2;
  func_0x00010bf59940();
  *(long *)(param_2 + 0x218) = lVar3;
  lVar3 = lVar2;
  func_0x00010c247520();
  *(long *)(param_2 + 0x220) = lVar3;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf30620();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x228) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_3;
  func_0x00010bef2d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x230) = lVar2 == 0;
  lVar1 = lVar2;
  func_0x00010bf20ec0();
  *(long *)(param_2 + 0x238) = lVar1;
  lVar1 = lVar2;
  func_0x00010bef3aa0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x240) = lVar1;
  lVar3 = lVar2;
  func_0x00010c23d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x248) = lVar3 == 0;
  lVar1 = lVar3;
  func_0x00010bef38a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x250) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf2bfa0();
  *(int *)(param_2 + 600) = (int)lVar1;
  lVar1 = lVar3;
  func_0x00010c270a60();
  *(long *)(param_2 + 0x260) = lVar1;
  lVar1 = lVar3;
  func_0x00010c2475c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x268) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x270) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf3c980();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x278) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf3c9a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x280) = lVar1;
  lVar1 = lVar3;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x288) = lVar1;
  lVar1 = lVar3;
  func_0x00010c29e3e0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x290) = lVar1;
  lVar1 = lVar3;
  func_0x00010c29e400();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x298) = lVar1;
  lVar1 = lVar3;
  func_0x00010c247820();
  *(int *)(param_2 + 0x2a0) = (int)lVar1;
  lVar1 = lVar3;
  func_0x00010beec120();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2a8) = lVar1;
  _objc_release(lVar3);
  _objc_release(lVar3);
  lVar1 = lVar2;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2b0) = lVar1;
  lVar1 = lVar2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2b8) = lVar1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010c24a0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x2c0) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2c8) = lVar2;
  lVar2 = lVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2d0) = lVar2;
  lVar2 = lVar1;
  func_0x00010c24a0e0();
  *(int *)(param_2 + 0x2d8) = (int)lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf4e880();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_2 + 0x2e0) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2e8) = lVar2;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c094820();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_2 + 0x2f0) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x2f8) = lVar2;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c281620();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_2 + 0x300) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c11ff60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x308) = lVar2;
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf10040();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x310) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010bf10020();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x318) = lVar2;
  lVar2 = lVar1;
  func_0x00010c245860();
  *(long *)(param_2 + 800) = lVar2;
  lVar2 = lVar1;
  func_0x00010c245820();
  *(long *)(param_2 + 0x328) = lVar2;
  lVar2 = lVar1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x330) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf5b380();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x338) = lVar1;
  lVar2 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(param_2 + 0x340) = lVar2 == 0;
  lVar1 = lVar2;
  func_0x00010c2475a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x348) = lVar1;
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x350) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x358) = lVar2;
  lVar2 = lVar1;
  func_0x00010c247520();
  *(char *)(param_2 + 0x360) = (char)lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c15e560();
  *(long *)(param_2 + 0x368) = lVar1;
  lVar1 = param_3;
  func_0x00010c141c40();
  *(char *)(param_2 + 0x370) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c0d2260();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x378) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010bf24a40();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x380) = lVar2;
  lVar2 = lVar1;
  func_0x00010c158380();
  *(long *)(param_2 + 0x388) = lVar2;
  lVar2 = lVar1;
  func_0x00010c1581e0();
  *(long *)(param_2 + 0x390) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x398) = lVar1;
  lVar1 = param_3;
  func_0x00010bf1f6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x3a0) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x3a8) = lVar2;
  func_0x00010bf1f9a0(lVar1);
  *(undefined8 *)(param_2 + 0x3b0) = param_1;
  func_0x00010bf1f740(lVar1);
  *(undefined8 *)(param_2 + 0x3b8) = param_1;
  func_0x00010c123160(lVar1);
  *(undefined8 *)(param_2 + 0x3c0) = param_1;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar2 = param_3;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x3c8) = lVar2 == 0;
  func_0x00010c270aa0(lVar2);
  *(undefined8 *)(param_2 + 0x3d0) = param_1;
  lVar1 = lVar2;
  func_0x00010bf1f680();
  *(long *)(param_2 + 0x3d8) = lVar1;
  lVar1 = lVar2;
  func_0x00010c22a980();
  *(long *)(param_2 + 0x3e0) = lVar1;
  lVar1 = lVar2;
  func_0x00010c29c5c0();
  *(long *)(param_2 + 1000) = lVar1;
  lVar1 = lVar2;
  func_0x00010c25fae0();
  *(long *)(param_2 + 0x3f0) = lVar1;
  lVar1 = lVar2;
  func_0x00010c24b7a0();
  *(long *)(param_2 + 0x3f8) = lVar1;
  lVar1 = lVar2;
  func_0x00010c24b580();
  *(long *)(param_2 + 0x400) = lVar1;
  lVar1 = lVar2;
  func_0x00010c24ba40();
  *(long *)(param_2 + 0x408) = lVar1;
  lVar1 = lVar2;
  func_0x00010c129760();
  *(long *)(param_2 + 0x410) = lVar1;
  lVar1 = lVar2;
  func_0x00010c123100();
  *(long *)(param_2 + 0x418) = lVar1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x420) = lVar1;
  lVar2 = param_3;
  func_0x00010bf28d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x428) = lVar2 == 0;
  lVar1 = lVar2;
  func_0x00010bfbec20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x430) = lVar1;
  lVar1 = lVar2;
  func_0x00010bfa0480();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x438) = lVar1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010c24be20();
  *(char *)(param_2 + 0x440) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c2490c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x448) = lVar1;
  lVar1 = param_3;
  func_0x00010c14ede0();
  *(char *)(param_2 + 0x450) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010bf5b120();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x458) = lVar1;
  lVar1 = param_3;
  func_0x00010bf5b140();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x460) = lVar1;
  lVar2 = param_3;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x468) = lVar2 == 0;
  lVar3 = lVar2;
  func_0x00010c0676a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x470) = lVar3 == 0;
  lVar1 = lVar3;
  func_0x00010c0676c0();
  *(char *)(param_2 + 0x471) = (char)lVar1;
  lVar1 = lVar3;
  func_0x00010c29f0c0();
  *(long *)(param_2 + 0x478) = lVar1;
  lVar1 = lVar3;
  func_0x00010c280740();
  *(long *)(param_2 + 0x480) = lVar1;
  lVar1 = lVar3;
  func_0x00010c151b20();
  *(long *)(param_2 + 0x488) = lVar1;
  lVar1 = lVar3;
  func_0x00010c25aca0();
  *(long *)(param_2 + 0x490) = lVar1;
  lVar1 = lVar3;
  func_0x00010c280780();
  *(long *)(param_2 + 0x498) = lVar1;
  lVar1 = lVar3;
  func_0x00010c280760();
  *(long *)(param_2 + 0x4a0) = lVar1;
  lVar1 = lVar3;
  func_0x00010c243e80();
  *(long *)(param_2 + 0x4a8) = lVar1;
  lVar1 = lVar3;
  func_0x00010c2652a0();
  *(long *)(param_2 + 0x4b0) = lVar1;
  lVar1 = lVar3;
  func_0x00010c264600();
  *(long *)(param_2 + 0x4b8) = lVar1;
  lVar1 = lVar3;
  func_0x00010c269000();
  *(long *)(param_2 + 0x4c0) = lVar1;
  lVar1 = lVar3;
  func_0x00010c268e00();
  *(long *)(param_2 + 0x4c8) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf1f680();
  *(long *)(param_2 + 0x4d0) = lVar1;
  lVar1 = lVar3;
  func_0x00010c22a980();
  *(long *)(param_2 + 0x4d8) = lVar1;
  lVar1 = lVar3;
  func_0x00010c25fe00();
  *(long *)(param_2 + 0x4e0) = lVar1;
  lVar1 = lVar3;
  func_0x00010c0f2a80();
  *(long *)(param_2 + 0x4e8) = lVar1;
  lVar1 = lVar3;
  func_0x00010c0f2a20();
  *(long *)(param_2 + 0x4f0) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf41980();
  *(long *)(param_2 + 0x4f8) = lVar1;
  lVar1 = lVar3;
  func_0x00010bf41920();
  *(long *)(param_2 + 0x500) = lVar1;
  _objc_release(lVar3);
  _objc_release(lVar3);
  lVar1 = lVar2;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x508) = lVar1;
  lVar1 = lVar2;
  func_0x00010c08b940();
  *(char *)(param_2 + 0x510) = (char)lVar1;
  lVar1 = lVar2;
  func_0x00010c07d060();
  *(char *)(param_2 + 0x511) = (char)lVar1;
  lVar1 = lVar2;
  func_0x00010c070680();
  *(char *)(param_2 + 0x512) = (char)lVar1;
  lVar1 = lVar2;
  func_0x00010bf93440();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x518) = lVar1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x520) = lVar1;
  lVar1 = param_3;
  func_0x00010c25b820();
  *(long *)(param_2 + 0x528) = lVar1;
  lVar2 = param_3;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x530) = lVar2 == 0;
  lVar1 = lVar2;
  func_0x00010c071360();
  *(char *)(param_2 + 0x531) = (char)lVar1;
  lVar1 = lVar2;
  func_0x00010bf4de40();
  *(int *)(param_2 + 0x534) = (int)lVar1;
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar1 = param_3;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x538) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x540) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0ed780();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x548) = lVar2;
  lVar2 = lVar1;
  func_0x00010c0ed7c0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x550) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfa0a00();
  *(long *)(param_2 + 0x558) = lVar1;
  lVar1 = param_3;
  func_0x00010bfbaac0();
  *(char *)(param_2 + 0x560) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c262140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  *(bool *)(param_2 + 0x568) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x570) = lVar2;
  lVar2 = lVar1;
  func_0x00010c27dd80();
  *(int *)(param_2 + 0x578) = (int)lVar2;
  lVar2 = lVar1;
  func_0x00010c1029e0();
  *(long *)(param_2 + 0x580) = lVar2;
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 10b62933c; end: 10b629613;  */

long FUN_10b62933c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b629614; end: 10b62a3cb;  */

void FUN_10b629614(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puStack_138;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_90;
  undefined *puStack_80;
  
  if (*param_1 == '\x01') {
    iVar6 = (int)param_1 + 0x18;
    FUN_10b627a84();
    if ((((((((((iVar6 != 0) && (param_1[0x48] == '\x01')) && (param_1[0x88] == '\x01')) &&
             ((param_1[0xb0] == '\x01' && (param_1[0xf0] == '\x01')))) && (param_1[0x148] == '\x01')
            ) && (((param_1[0x198] == '\x01' && (param_1[0x1b8] == '\x01')) &&
                  ((param_1[0x200] == '\x01' &&
                   (((param_1[0x210] == '\x01' && (param_1[0x230] == '\x01')) &&
                    (param_1[0x248] == '\x01')))))))) &&
          ((param_1[0x2c0] == '\x01' && (param_1[0x2e0] == '\x01')))) &&
         ((param_1[0x2f0] == '\x01' &&
          (((param_1[0x300] == '\x01' && (param_1[0x310] == '\x01')) &&
           ((param_1[0x340] == '\x01' &&
            (((param_1[0x350] == '\x01' && (param_1[0x378] == '\x01')) && (param_1[0x3a0] == '\x01')
             ))))))))) &&
        (((param_1[0x3c8] == '\x01' && (param_1[0x428] == '\x01')) && (param_1[0x468] == '\x01'))))
       && (((param_1[0x470] == '\x01' && (param_1[0x530] == '\x01')) &&
           ((param_1[0x538] == '\x01' && ((param_1[0x568] & 1U) != 0)))))) {
      puStack_d0 = (undefined *)0x0;
      goto LAB_10b62a140;
    }
  }
  puStack_d0 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  pcVar7 = param_1 + 0x18;
  FUN_10b627a84();
  puVar20 = PTR_PTR_1126c2fd0;
  if (((ulong)pcVar7 & 1) == 0) {
    if (*(byte **)(param_1 + 0x18) == (byte *)0x0) {
      if (*(byte **)(param_1 + 0x20) == (byte *)0x0) {
        if (*(byte **)(param_1 + 0x28) == (byte *)0x0) {
          puVar19 = *(undefined **)(param_1 + 0x30);
          if (puVar19 == (undefined *)0x0) {
            puVar19 = *(undefined **)(param_1 + 0x38);
            if (puVar19 == (undefined *)0x0) {
              puVar19 = *(undefined **)(param_1 + 0x40);
              if (puVar19 == (undefined *)0x0) goto LAB_10b6297bc;
              func_0x00010b6272a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14bbc0(puVar20,param_2,puVar19);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010b627260();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befea20(puVar20,param_2,puVar19);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            FUN_10b627200();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0ee380(puVar20,param_2,puVar19);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          if ((**(byte **)(param_1 + 0x28) & 1) == 0) {
            puVar19 = PTR_PTR_1126d9f10;
            _objc_alloc(PTR_PTR_1126d9f10);
            func_0x00010c054380();
          }
          else {
            puVar19 = (undefined *)0x0;
          }
          func_0x00010c2756c0(puVar20,param_2,puVar19);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if ((**(byte **)(param_1 + 0x20) & 1) == 0) {
          puVar19 = PTR_PTR_1126c3328;
          _objc_alloc(PTR_PTR_1126c3328);
          func_0x00010c04dca0();
        }
        else {
          puVar19 = (undefined *)0x0;
        }
        func_0x00010bf62300(puVar20,param_2,puVar19);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if ((**(byte **)(param_1 + 0x18) & 1) == 0) {
        puVar19 = PTR_PTR_1126c2fc8;
        _objc_alloc(PTR_PTR_1126c2fc8);
        func_0x00010c0559e0();
      }
      else {
        puVar19 = (undefined *)0x0;
      }
      func_0x00010c293b20(puVar20,param_2,puVar19);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar19);
  }
  else {
LAB_10b6297bc:
    puVar20 = (undefined *)0x0;
  }
  if ((param_1[0x48] & 1U) == 0) {
    puVar19 = PTR_PTR_1126cf3b0;
    _objc_alloc();
    func_0x00010c0607c0();
  }
  else {
    puVar19 = (undefined *)0x0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  if ((param_1[0x88] & 1U) == 0) {
    puStack_80 = PTR_PTR_1126cf3b8;
    _objc_alloc();
    func_0x00010c00eac0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),
                        *(undefined8 *)(param_1 + 0xa8));
  }
  else {
    puStack_80 = (undefined *)0x0;
  }
  pcVar7 = param_1 + 0xb0;
  FUN_10b627e08();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1[0x148] & 1U) == 0) {
    puStack_90 = PTR_PTR_1126cb008;
    _objc_alloc();
    func_0x00010c020be0();
  }
  else {
    puStack_90 = (undefined *)0x0;
  }
  if ((param_1[0x198] == '\x01') && ((param_1[0x1b8] & 1U) != 0)) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126cf3c8;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x1a0);
    uVar10 = *(undefined8 *)(param_1 + 0x1a8);
    uVar16 = *(undefined8 *)(param_1 + 0x1b0);
    if ((param_1[0x1b8] & 1U) == 0) {
      puVar18 = PTR_PTR_1126cf3d0;
      _objc_alloc(PTR_PTR_1126cf3d0);
      func_0x00010c027c60(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8),
                          *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                          *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                          *(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1f8));
    }
    else {
      puVar18 = (undefined *)0x0;
    }
    func_0x00010bffafc0(puVar12,param_2,uVar9,uVar10,uVar16,puVar18);
    _objc_release(puVar18);
  }
  if ((param_1[0x200] == '\x01') && ((param_1[0x210] & 1U) != 0)) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126cf3d8;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x208);
    if ((param_1[0x210] & 1U) == 0) {
      puVar13 = PTR_PTR_1126c3340;
      _objc_alloc(PTR_PTR_1126c3340);
      func_0x00010c0066c0();
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    func_0x00010bff4d60(puVar18,param_2,uVar9,puVar13,*(undefined8 *)(param_1 + 0x228));
    _objc_release(puVar13);
  }
  if ((param_1[0x230] == '\x01') && ((param_1[0x248] & 1U) != 0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126d9f28;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x238);
    uVar10 = *(undefined8 *)(param_1 + 0x240);
    if ((param_1[0x248] & 1U) == 0) {
      puVar17 = PTR_PTR_1126d9f30;
      _objc_alloc(PTR_PTR_1126d9f30);
      func_0x00010bff19a0();
    }
    else {
      puVar17 = (undefined *)0x0;
    }
    func_0x00010bff9620(puVar13,param_2,uVar9,uVar10,puVar17,*(undefined8 *)(param_1 + 0x2b0),
                        *(undefined8 *)(param_1 + 0x2b8));
    _objc_release(puVar17);
  }
  if ((param_1[0x2c0] & 1U) == 0) {
    puVar17 = PTR_PTR_1126cf3e0;
    _objc_alloc();
    func_0x00010c03ae60();
  }
  else {
    puVar17 = (undefined *)0x0;
  }
  if ((param_1[0x2e0] & 1U) == 0) {
    puVar14 = PTR_PTR_1126cf3e8;
    _objc_alloc();
    func_0x00010c03cda0();
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  if ((param_1[0x2f0] & 1U) == 0) {
    puVar21 = PTR_PTR_1126d9f38;
    _objc_alloc();
    func_0x00010c03cda0();
  }
  else {
    puVar21 = (undefined *)0x0;
  }
  if ((param_1[0x300] & 1U) == 0) {
    puVar15 = PTR_PTR_1126cf3f0;
    _objc_alloc();
    func_0x00010c03cda0();
  }
  else {
    puVar15 = (undefined *)0x0;
  }
  if ((param_1[0x310] & 1U) == 0) {
    puStack_c8 = PTR_PTR_1126d9f40;
    _objc_alloc();
    func_0x00010bff56a0();
  }
  else {
    puStack_c8 = (undefined *)0x0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x338);
  if ((param_1[0x340] & 1U) == 0) {
    puStack_e8 = PTR_PTR_1126cf3f8;
    _objc_alloc();
    func_0x00010c04a9a0();
  }
  else {
    puStack_e8 = (undefined *)0x0;
  }
  if ((param_1[0x350] & 1U) == 0) {
    puStack_f0 = PTR_PTR_1126cf400;
    _objc_alloc();
    func_0x00010c00d4e0();
  }
  else {
    puStack_f0 = (undefined *)0x0;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x368);
  cVar5 = param_1[0x370];
  if ((param_1[0x378] & 1U) == 0) {
    puStack_f8 = PTR_PTR_1126c32f8;
    _objc_alloc();
    func_0x00010bff9aa0();
  }
  else {
    puStack_f8 = (undefined *)0x0;
  }
  if ((param_1[0x3a0] & 1U) == 0) {
    puStack_100 = PTR_PTR_1126d9f50;
    _objc_alloc();
    func_0x00010c04d780(*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3b8),
                        *(undefined8 *)(param_1 + 0x3c0));
  }
  else {
    puStack_100 = (undefined *)0x0;
  }
  if ((param_1[0x3c8] & 1U) == 0) {
    puStack_108 = PTR_PTR_1126d9f58;
    _objc_alloc();
    func_0x00010c052ac0(*(undefined8 *)(param_1 + 0x3d0));
  }
  else {
    puStack_108 = (undefined *)0x0;
  }
  if ((param_1[0x428] & 1U) == 0) {
    puStack_110 = PTR_PTR_1126d9f60;
    _objc_alloc();
    func_0x00010c017640();
  }
  else {
    puStack_110 = (undefined *)0x0;
  }
  if ((param_1[0x468] == '\x01') && ((param_1[0x470] & 1U) != 0)) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puStack_138 = PTR_PTR_1126cc4d8;
    _objc_alloc();
    if ((param_1[0x470] & 1U) == 0) {
      puVar11 = PTR_PTR_1126d9f68;
      _objc_alloc(PTR_PTR_1126d9f68);
      func_0x00010c01e400();
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    func_0x00010c01e3e0(puStack_138,param_2,puVar11,*(undefined8 *)(param_1 + 0x508),param_1[0x510],
                        param_1[0x511],param_1[0x512],*(undefined8 *)(param_1 + 0x518));
    _objc_release(puVar11);
  }
  if ((param_1[0x530] & 1U) == 0) {
    puVar11 = PTR_PTR_1126d9f70;
    _objc_alloc();
    func_0x00010c01ef40();
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  if ((param_1[0x538] & 1U) == 0) {
    puVar22 = PTR_PTR_1126cf3a8;
    _objc_alloc();
    func_0x00010c032520();
  }
  else {
    puVar22 = (undefined *)0x0;
  }
  if ((param_1[0x568] & 1U) == 0) {
    puVar8 = PTR_PTR_1126d9f78;
    _objc_alloc();
    func_0x00010c03c2a0();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  func_0x00010c044c20(puStack_d0,param_2,uVar1,uVar3,puVar20,puVar19,uVar2,uVar4,puStack_80,pcVar7,
                      puStack_90,puVar12,puVar18,puVar13,puVar17,puVar14,puVar21,puVar15,puStack_c8,
                      uVar9,puStack_e8,puStack_f0,uVar10,cVar5);
  _objc_release(puVar8);
  _objc_release(puVar22);
  _objc_release(puVar11);
  _objc_release(puStack_138);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_release(puStack_f0);
  _objc_release(puStack_e8);
  _objc_release(puStack_c8);
  _objc_release(puVar15);
  _objc_release(puVar21);
  _objc_release(puVar14);
  _objc_release(puVar17);
  _objc_release(puVar13);
  _objc_release(puVar18);
  _objc_release(puVar12);
  _objc_release(puStack_90);
  _objc_release(pcVar7);
  _objc_release(puStack_80);
  _objc_release(puVar19);
  _objc_release(puVar20);
LAB_10b62a140:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_d0);
  return;
}



/* Entry: 10b62a3cc; end: 10b62a51b;  */

void FUN_10b62a3cc(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  FUN_10b6272ec(&lStack_60);
  lVar1 = lStack_60;
  lStack_60 = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar1 = lStack_58;
  lStack_58 = 0;
  func_0x00010805bea4(param_1 + 0x20,lVar1);
  lVar1 = lStack_50;
  lVar2 = *(long *)(param_1 + 0x28);
  lStack_50 = 0;
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar2 != 0) {
    func_0x00010805be5c();
  }
  lVar1 = lStack_48;
  lVar2 = *(long *)(param_1 + 0x30);
  lStack_48 = 0;
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar2 != 0) {
    func_0x00010805be0c();
  }
  lVar1 = lStack_40;
  lStack_40 = 0;
  func_0x00010805bdd0(param_1 + 0x38,lVar1);
  lVar1 = lStack_38;
  plVar3 = (long *)(param_1 + 0x40);
  lVar2 = *plVar3;
  lStack_38 = 0;
  *plVar3 = lVar1;
  if (lVar2 != 0) {
    func_0x00010805bd90(plVar3);
    lVar1 = lStack_38;
    lStack_38 = 0;
    if (lVar1 != 0) {
      func_0x00010805bd90(&lStack_38);
    }
  }
  lVar1 = lStack_40;
  lStack_40 = 0;
  if (lVar1 != 0) {
    _objc_release(*(undefined8 *)(lVar1 + 8));
    __ZdlPv(lVar1);
  }
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    func_0x00010805be0c(&lStack_48);
  }
  lVar1 = lStack_50;
  lStack_50 = 0;
  if (lVar1 != 0) {
    func_0x00010805be5c(&lStack_50);
  }
  lVar1 = lStack_58;
  lStack_58 = 0;
  if (lVar1 != 0) {
    _objc_release(*(undefined8 *)(lVar1 + 8));
    __ZdlPv(lVar1);
  }
  lVar1 = lStack_60;
  lStack_60 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b62a51c; end: 10b62a707;  */

void FUN_10b62a51c(undefined1 *param_1)

{
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *param_1 = 0;
  FUN_10b627b0c(auStack_b8);
  func_0x00010b62a5c0(param_1 + 0xb0,auStack_b8);
  _objc_release(uStack_30);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  return;
}



/* Entry: 10b62a708; end: 10b62a70f; -[SCPlaybackMediaResolutionPluginScope plugInRegistry] */

undefined8 FUN_10b62a708(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62a710; end: 10b62a71b; -[SCPlaybackMediaResolutionPluginScope .cxx_destruct] */

void FUN_10b62a710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62a71c; end: 10b62a727; -[SCPlaybackMediaResolutionService .cxx_destruct] */

void FUN_10b62a71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62a728; end: 10b62a7d3; -[SCPlaybackMediaResolutionRequest initWithMediaRequests:contentIdentifier:] */

undefined1 *
FUN_10b62a728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706c78;
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



/* Entry: 10b62a7d4; end: 10b62a7f7; -[SCPlaybackMediaResolutionRequest copyWithZone:] */

undefined8 FUN_10b62a7d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62a7f8; end: 10b62a86b; -[SCPlaybackMediaResolutionRequest hash] */

undefined8 * FUN_10b62a7f8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b62a8ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b62a8f8;
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
          goto LAB_10b62a8f8;
        }
        goto LAB_10b62a8ec;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b62a8f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b62a86c; end: 10b62a913; -[SCPlaybackMediaResolutionRequest isEqual:] */

long FUN_10b62a86c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62a8ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62a8f8;
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
          goto LAB_10b62a8f8;
        }
        goto LAB_10b62a8ec;
      }
    }
    lVar3 = 0;
  }
LAB_10b62a8f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62a914; end: 10b62a91b; -[SCPlaybackMediaResolutionRequest mediaRequests] */

undefined8 FUN_10b62a914(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62a91c; end: 10b62a923; -[SCPlaybackMediaResolutionRequest contentIdentifier] */

undefined8 FUN_10b62a91c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62a924; end: 10b62a953; -[SCPlaybackMediaResolutionRequest .cxx_destruct] */

void FUN_10b62a924(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62a954; end: 10b62a9db; -[SCPlaybackMediaResolutionRequestContentIdentifier initWithMediaContextType:contentId:] */

undefined1 *
FUN_10b62a954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706c80;
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



/* Entry: 10b62a9dc; end: 10b62a9ff; -[SCPlaybackMediaResolutionRequestContentIdentifier copyWithZone:] */

undefined8 FUN_10b62a9dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62aa00; end: 10b62aa67; -[SCPlaybackMediaResolutionRequestContentIdentifier hash] */

long * FUN_10b62aa00(long param_1,undefined8 param_2,long *param_3)

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
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b62aaec;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b62aaec;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b62aaec;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b62aaec:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b62aa68; end: 10b62ab07; -[SCPlaybackMediaResolutionRequestContentIdentifier isEqual:] */

long FUN_10b62aa68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62aaec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b62aaec;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b62aaec;
    }
  }
  lVar3 = 1;
LAB_10b62aaec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62ab08; end: 10b62ab0f; -[SCPlaybackMediaResolutionRequestContentIdentifier mediaContextType] */

undefined8 FUN_10b62ab08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62ab10; end: 10b62ab17; -[SCPlaybackMediaResolutionRequestContentIdentifier contentId] */

undefined8 FUN_10b62ab10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62ab18; end: 10b62ab23; -[SCPlaybackMediaResolutionRequestContentIdentifier .cxx_destruct] */

void FUN_10b62ab18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62ab24; end: 10b62ab8f; +[SCPlaybackMediaIdentifier contentObjectWithContentObject:] */

void FUN_10b62ab24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b62ab90; end: 10b62abf3; +[SCPlaybackMediaIdentifier urlWithUrlString:] */

void FUN_10b62ab90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b62abf4; end: 10b62ac17; -[SCPlaybackMediaIdentifier copyWithZone:] */

undefined8 FUN_10b62abf4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62ac18; end: 10b62ac8f; -[SCPlaybackMediaIdentifier hash] */

void FUN_10b62ac18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112706c88;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b62ac90; end: 10b62acd3; -[SCPlaybackMediaIdentifier internalInit] */

void FUN_10b62ac90(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706c88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b62acd4; end: 10b62ad8b; -[SCPlaybackMediaIdentifier isEqual:] */

long FUN_10b62acd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62ad64:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62ad70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b62ad70;
        }
        goto LAB_10b62ad64;
      }
    }
    lVar3 = 0;
  }
LAB_10b62ad70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62ad8c; end: 10b62ae0f; -[SCPlaybackMediaIdentifier matchUrl:contentObject:] */

void FUN_10b62ad8c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b62adf4;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b62adf4;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b62adf4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b62ae10; end: 10b62ae3f; -[SCPlaybackMediaIdentifier .cxx_destruct] */

void FUN_10b62ae10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62ae40; end: 10b62aeff; -[SCPlaybackSingleMediaResolutionRequest initWithMediaIdentifier:mediaType:layerType:extPayload:] */

undefined1 *
FUN_10b62ae40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706c90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b62af00; end: 10b62af23; -[SCPlaybackSingleMediaResolutionRequest copyWithZone:] */

undefined8 FUN_10b62af00(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62af24; end: 10b62af9f; -[SCPlaybackSingleMediaResolutionRequest hash] */

undefined8 * FUN_10b62af24(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b62b040:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b62b04c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[4];
        if (puVar6 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b62b04c;
        }
        goto LAB_10b62b040;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b62b04c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b62afa0; end: 10b62b067; -[SCPlaybackSingleMediaResolutionRequest isEqual:] */

long FUN_10b62afa0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62b040:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62b04c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b62b04c;
        }
        goto LAB_10b62b040;
      }
    }
    lVar3 = 0;
  }
LAB_10b62b04c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62b068; end: 10b62b06f; -[SCPlaybackSingleMediaResolutionRequest mediaIdentifier] */

undefined8 FUN_10b62b068(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b62b070; end: 10b62b077; -[SCPlaybackSingleMediaResolutionRequest mediaType] */

undefined8 FUN_10b62b070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62b078; end: 10b62b07f; -[SCPlaybackSingleMediaResolutionRequest layerType] */

undefined8 FUN_10b62b078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62b080; end: 10b62b087; -[SCPlaybackSingleMediaResolutionRequest extPayload] */

undefined8 FUN_10b62b080(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b62b088; end: 10b62b0b7; -[SCPlaybackSingleMediaResolutionRequest .cxx_destruct] */

void FUN_10b62b088(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b62b0b8; end: 10b62b22f; -[SCPlaybackSingleMediaResolutionRequestExtPayload initWithContentKey:expirationDate:encryptionInfo:userInitiated:prefetchSignals:retrieveCachedContentOnly:requestContext:trustRequestContext:ABREnabled:viewLocation:] */

undefined8 *
FUN_10b62b0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112706c98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10._1_1_;
    puVar1[7] = param_12;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b62b230; end: 10b62b253; -[SCPlaybackSingleMediaResolutionRequestExtPayload copyWithZone:] */

undefined8 FUN_10b62b230(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b62b254; end: 10b62b30b; -[SCPlaybackSingleMediaResolutionRequestExtPayload hash] */

undefined8 * FUN_10b62b254(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_78;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b62b424:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b62b430;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))) &&
        ((*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (puVar3[7] == param_3[7])))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[6];
              if (puVar6 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_10b62b430;
              }
              goto LAB_10b62b424;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b62b430:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b62b30c; end: 10b62b44b; -[SCPlaybackSingleMediaResolutionRequestExtPayload isEqual:] */

long FUN_10b62b30c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62b424:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b62b430;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b62b430;
              }
              goto LAB_10b62b424;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b62b430:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b62b44c; end: 10b62b453; -[SCPlaybackSingleMediaResolutionRequestExtPayload contentKey] */

undefined8 FUN_10b62b44c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62b454; end: 10b62b45b; -[SCPlaybackSingleMediaResolutionRequestExtPayload expirationDate] */

undefined8 FUN_10b62b454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62b45c; end: 10b62b463; -[SCPlaybackSingleMediaResolutionRequestExtPayload encryptionInfo] */

undefined8 FUN_10b62b45c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b62b464; end: 10b62b46b; -[SCPlaybackSingleMediaResolutionRequestExtPayload userInitiated] */

undefined1 FUN_10b62b464(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b62b46c; end: 10b62b473; -[SCPlaybackSingleMediaResolutionRequestExtPayload prefetchSignals] */

undefined8 FUN_10b62b46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b62b474; end: 10b62b47b; -[SCPlaybackSingleMediaResolutionRequestExtPayload retrieveCachedContentOnly] */

undefined1 FUN_10b62b474(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b62b47c; end: 10b62b483; -[SCPlaybackSingleMediaResolutionRequestExtPayload requestContext] */

undefined8 FUN_10b62b47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b62b484; end: 10b62b48b; -[SCPlaybackSingleMediaResolutionRequestExtPayload trustRequestContext] */

undefined1 FUN_10b62b484(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b62b48c; end: 10b62b493; -[SCPlaybackSingleMediaResolutionRequestExtPayload ABREnabled] */

undefined1 FUN_10b62b48c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b62b494; end: 10b62b49b; -[SCPlaybackSingleMediaResolutionRequestExtPayload viewLocation] */

undefined8 FUN_10b62b494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b62b49c; end: 10b62b4ef; -[SCPlaybackSingleMediaResolutionRequestExtPayload .cxx_destruct] */

void FUN_10b62b49c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62b4f0; end: 10b62b50b; +[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder playbackSingleMediaResolutionRequestExtPayload] */

void FUN_10b62b4f0(void)

{
  _objc_alloc_init(PTR_PTR_1126bff90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b62b50c; end: 10b62b787; +[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder playbackSingleMediaResolutionRequestExtPayloadFromExistingPlaybackSingleMediaResolutionRequestExtPayload:] */

void FUN_10b62b50c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126bff90;
  _objc_retain(param_3);
  func_0x00010c100200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aae20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ad7e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ad2c0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c292920(param_3);
  puVar9 = puVar7;
  func_0x00010c2bc3a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c107de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2b5b20(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c13e320(param_3);
  puVar12 = puVar10;
  func_0x00010c2b74a0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c135080(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b70a0(puVar12,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c27cbe0(param_3);
  puVar15 = puVar13;
  func_0x00010c2bbcc0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bdc0ca0(param_3);
  puVar16 = puVar15;
  func_0x00010c2a7460(puVar15,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c29d360(param_3);
  _objc_release(param_3);
  puVar17 = puVar16;
  func_0x00010c2bc8c0(puVar16,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10b62b788; end: 10b62b7e7; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder build] */

void FUN_10b62b788(void)

{
  _objc_alloc(PTR_PTR_1126d5390);
  func_0x00010c0036c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b62b7e8; end: 10b62b81f; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder withContentKey:] */

long FUN_10b62b7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b62b820; end: 10b62b857; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder withExpirationDate:] */

long FUN_10b62b820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b62b858; end: 10b62b88f; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder withEncryptionInfo:] */

long FUN_10b62b858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b62b890; end: 10b62b897; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder withUserInitiated:] */

void FUN_10b62b890(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b62b898; end: 10b62b8cf; -[SCPlaybackSingleMediaResolutionRequestExtPayloadBuilder withPrefetchSignals:] */

long FUN_10b62b898(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}


