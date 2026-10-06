/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2969f0; end: 10b2969f7; -[SCM3U8Segment url] */

undefined8 FUN_10b2969f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2969f8; end: 10b2969ff; -[SCM3U8Segment duration] */

undefined8 FUN_10b2969f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b296a00; end: 10b296a07; -[SCM3U8Segment byteRangeValue] */

undefined8 FUN_10b296a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b296a08; end: 10b296a37; -[SCM3U8Segment .cxx_destruct] */

void FUN_10b296a08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b296a38; end: 10b296b33; -[SCM3U8Variant initWithVideoManifestURL:audioManifestURL:iframeManifestURL:bandwidth:resolution:] */

undefined1 *
FUN_10b296a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112706148;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b296b34; end: 10b296b57; -[SCM3U8Variant copyWithZone:] */

undefined8 FUN_10b296b34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b296b58; end: 10b296c1f; -[SCM3U8Variant hash] */

undefined8 * FUN_10b296b58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b296cec:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b296cf8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[4] == param_3[4])) {
      puVar8 = (undefined8 *)0x0;
      if (((double)puVar4[5] != (double)param_3[5]) || ((double)puVar4[6] != (double)param_3[6]))
      goto LAB_10b296cf8;
      lVar6 = puVar4[1];
      if (((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10b296cf8;
        }
        goto LAB_10b296cec;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b296cf8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b296c20; end: 10b296d13; -[SCM3U8Variant isEqual:] */

long FUN_10b296c20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b296cec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b296cf8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28)) ||
         (*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) goto LAB_10b296cf8;
      lVar3 = *(long *)(param_1 + 8);
      if (((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b296cf8;
        }
        goto LAB_10b296cec;
      }
    }
    lVar3 = 0;
  }
LAB_10b296cf8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b296d14; end: 10b296d1b; -[SCM3U8Variant videoManifestURL] */

undefined8 FUN_10b296d14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b296d1c; end: 10b296d23; -[SCM3U8Variant audioManifestURL] */

undefined8 FUN_10b296d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b296d24; end: 10b296d2b; -[SCM3U8Variant iframeManifestURL] */

undefined8 FUN_10b296d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b296d2c; end: 10b296d33; -[SCM3U8Variant bandwidth] */

undefined8 FUN_10b296d2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b296d34; end: 10b296d3b; -[SCM3U8Variant resolution] */

undefined1  [16] FUN_10b296d34(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 10b296d3c; end: 10b296d77; -[SCM3U8Variant .cxx_destruct] */

void FUN_10b296d3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b296d78; end: 10b296e23; -[SCM3U8VariantReorder initWithTagLine:urlLine:] */

undefined1 *
FUN_10b296d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706150;
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



/* Entry: 10b296e24; end: 10b296e47; -[SCM3U8VariantReorder copyWithZone:] */

undefined8 FUN_10b296e24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b296e48; end: 10b296ebb; -[SCM3U8VariantReorder hash] */

undefined8 * FUN_10b296e48(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b296f3c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b296f48;
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
          goto LAB_10b296f48;
        }
        goto LAB_10b296f3c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b296f48:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b296ebc; end: 10b296f63; -[SCM3U8VariantReorder isEqual:] */

long FUN_10b296ebc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b296f3c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b296f48;
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
          goto LAB_10b296f48;
        }
        goto LAB_10b296f3c;
      }
    }
    lVar3 = 0;
  }
LAB_10b296f48:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b296f64; end: 10b296f6b; -[SCM3U8VariantReorder tagLine] */

undefined8 FUN_10b296f64(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b296f6c; end: 10b296f73; -[SCM3U8VariantReorder urlLine] */

undefined8 FUN_10b296f6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b296f74; end: 10b296fa3; -[SCM3U8VariantReorder .cxx_destruct] */

void FUN_10b296f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b296fa4; end: 10b296fcf; +[SCGraphenePlaybackMetric assetCompositionLatency] */

void FUN_10b296fa4(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b296fd0; end: 10b296ffb; +[SCGraphenePlaybackMetric missPlaybackEndNotif] */

void FUN_10b296fd0(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b296ffc; end: 10b297027; +[SCGraphenePlaybackMetric gaplessAssetLatency] */

void FUN_10b296ffc(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b297028; end: 10b297053; +[SCGraphenePlaybackMetric streamingPriorityBoost] */

void FUN_10b297028(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b297054; end: 10b29707f; +[SCGraphenePlaybackMetric mediaResolveReqLatency] */

void FUN_10b297054(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b297080; end: 10b2970ab; +[SCGraphenePlaybackMetric mediaResolveReqStarted] */

void FUN_10b297080(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2970ac; end: 10b2970d7; +[SCGraphenePlaybackMetric mediaResolveReqEnded] */

void FUN_10b2970ac(void)

{
  _objc_alloc(PTR_PTR_1126bcb98);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2970d8; end: 10b297177; -[SCGraphenePlaybackMetric description] */

void FUN_10b2970d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e62358;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e62358,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112706158;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10b297178; end: 10b2972f7; -[SCGrapheneRegistry playbackGraphene] */

void FUN_10b297178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b297200;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f4840 != -1) {
    func_0x000107c27d9c(0x1137f4840,&puStack_48);
  }
  uVar1 = uRam00000001137f4838;
  _objc_retain(uRam00000001137f4838);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2972f8; end: 10b29736b; -[SCGraphenePlaybackMetric2 init] */

undefined1 * FUN_10b2972f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706160;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29736c; end: 10b29762b;  */

/* WARNING: Removing unreachable block (ram,0x00010b2975f4) */
/* WARNING: Removing unreachable block (ram,0x00010b2978e4) */

void FUN_10b29736c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  char *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  char acStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar1 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = param_2;
  pcVar3 = param_3;
  pcVar4 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar8 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar8 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar8);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar8 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar6 = 0;
    pcVar3 = pcVar1;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_10b29762c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar4);
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    plVar7 = *(long **)(pcVar1 + 8);
    pcVar1 = "true";
    if ((int)pcVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x000107c278b8(acStack_178,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar8 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_160,pcVar8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar8 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_148,pcVar8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar8 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_130,pcVar8);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,acStack_178,&lStack_118,4);
    pcVar2 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110cd0b60,&uStack_198,param_6);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar6 = 0;
    pcVar8 = acStack_178;
    do {
      if ((&cStack_119)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x60);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar5);
    do {
      pcVar8 = pcVar8 + -0x18;
    } while (pcVar8 != acStack_178);
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    _objc_release(pcVar3);
    __Unwind_Resume();
    puStack_1c8 = (undefined1 *)&uStack_1e0;
    pcStack_1a8 = FUN_10b29791c;
    if (pcVar1 != (char *)0x0) {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      pcStack_1c0 = pcVar4;
      pcStack_1b8 = pcVar3;
      ppuStack_1b0 = &puStack_d0;
      (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                (*(long **)(pcVar1 + 8),&UNK_110cd0bb0,&uStack_1e0,pcVar2);
      func_0x000107c278ac(&puStack_1c8);
    }
    return;
  }
  return;
}



/* Entry: 10b29762c; end: 10b29791b;  */

/* WARNING: Removing unreachable block (ram,0x00010b2978e4) */

void FUN_10b29762c(long param_1,undefined *param_2,char *param_3,char *param_4,char *param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x000107c278b8(auStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar2 = &UNK_110cd0b60;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cd0b60,&uStack_d8,param_6);
    puStack_c0 = &uStack_d8;
    func_0x000107c278ac(&puStack_c0);
    lVar3 = 0;
    param_2 = auStack_b8;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      param_2 = param_2 + -0x18;
    } while (param_2 != auStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    puStack_108 = (undefined1 *)&uStack_120;
    pcStack_e8 = FUN_10b29791c;
    if (pcVar1 != (char *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      pcStack_100 = param_4;
      pcStack_f8 = param_3;
      puStack_f0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                (*(long **)(pcVar1 + 8),&UNK_110cd0bb0,&uStack_120,puVar2);
      func_0x000107c278ac(&puStack_108);
    }
    return;
  }
  return;
}



/* Entry: 10b29791c; end: 10b297993;  */

void FUN_10b29791c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110cd0bb0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b297994; end: 10b297a07; -[SCGrapheneVideoPlayerMetric2 init] */

undefined1 * FUN_10b297994(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706168;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b297a08; end: 10b297cc7;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b2985b0) */
/* WARNING: Removing unreachable block (ram,0x00010b297f50) */
/* WARNING: Removing unreachable block (ram,0x00010b297c90) */
/* WARNING: Removing unreachable block (ram,0x00010b29827c) */
/* WARNING: Removing unreachable block (ram,0x00010b298878) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b297a08(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x24;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_c00 [24];
  undefined1 *puStack_be8;
  char acStack_be0 [24];
  undefined1 auStack_bc8 [24];
  undefined8 auStack_bb0 [2];
  char cStack_b99;
  long lStack_b98;
  char *pcStack_b90;
  char *pcStack_b88;
  char *pcStack_b80;
  char *pcStack_b78;
  char *pcStack_b70;
  char *pcStack_b68;
  char *pcStack_b60;
  char *pcStack_b58;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  char acStack_b40 [24];
  undefined1 *puStack_b28;
  char acStack_b20 [24];
  undefined1 auStack_b08 [24];
  undefined8 auStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  char *pcStack_ad0;
  char *pcStack_ac8;
  char *pcStack_ac0;
  char *pcStack_ab8;
  char *pcStack_ab0;
  char *pcStack_aa8;
  char *pcStack_aa0;
  char *pcStack_a98;
  undefined8 ***pppuStack_a90;
  code *pcStack_a88;
  char acStack_a80 [24];
  undefined1 *puStack_a68;
  char acStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined8 auStack_a30 [2];
  char cStack_a19;
  long lStack_a18;
  char *pcStack_a10;
  char *pcStack_a08;
  char *pcStack_a00;
  char *pcStack_9f8;
  char *pcStack_9f0;
  char *pcStack_9e8;
  char *pcStack_9e0;
  char *pcStack_9d8;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  char acStack_9c0 [24];
  undefined1 *puStack_9a8;
  char acStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined8 auStack_970 [2];
  char cStack_959;
  long lStack_958;
  char *pcStack_950;
  char *pcStack_948;
  char *pcStack_940;
  char *pcStack_938;
  char *pcStack_930;
  char *pcStack_928;
  char *pcStack_920;
  char *pcStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  char acStack_900 [24];
  undefined1 *puStack_8e8;
  char acStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined8 auStack_8b0 [2];
  char cStack_899;
  long lStack_898;
  char *pcStack_890;
  char *pcStack_888;
  char *pcStack_880;
  char *pcStack_878;
  char *pcStack_870;
  char *pcStack_868;
  char *pcStack_860;
  char *pcStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  char acStack_840 [24];
  undefined1 *puStack_828;
  char acStack_820 [24];
  undefined1 auStack_808 [24];
  undefined8 auStack_7f0 [2];
  char cStack_7d9;
  long lStack_7d8;
  char *pcStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  char *pcStack_7b0;
  char *pcStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_780 [24];
  undefined1 *puStack_768;
  char acStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined8 auStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  char acStack_678 [24];
  char *pcStack_660;
  char acStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  char acStack_598 [24];
  char *pcStack_580;
  char acStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  char *pcStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  char *pcStack_4f0;
  char *pcStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  char acStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  char acStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar1 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_2;
  pcVar5 = param_3;
  pcVar11 = param_4;
  pcVar2 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar19);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar19 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar19);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar19 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar17 = 0;
    pcVar5 = pcVar1;
    pcVar11 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_10b297cc8;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar19;
  pcVar4 = pcVar5;
  pcVar7 = pcVar11;
  pcVar10 = pcVar2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar19);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(auStack_160,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_148,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      unaff_x25 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_130,unaff_x25);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar12 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar17 = 0;
    pcVar4 = pcVar9;
    pcVar7 = pcVar2;
    do {
      if ((&cStack_119)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar2 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar19);
  __Unwind_Resume();
  pcStack_188 = FUN_10b297f88;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = pcVar12;
  pcVar5 = pcVar4;
  pcVar11 = pcVar7;
  pcVar1 = pcVar10;
  pcVar9 = param_6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar12);
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(acStack_238,pcVar19);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar19 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_220,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_208,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      unaff_x26 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_1f0,unaff_x26);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x000107c27984(acStack_258,acStack_238,&lStack_1d8,4);
    pcVar19 = "\x02";
    unaff_x25 = acStack_258;
    pcVar5 = acStack_258;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_240 = unaff_x25;
    func_0x000107c278ac(&pcStack_240);
    lVar17 = 0;
    pcVar11 = param_6;
    do {
      if ((&cStack_1d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  pcVar2 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_2a0 = acStack_238;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_2a0);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  _objc_release(pcVar12);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_10b2982bc;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar19;
  pcVar8 = pcVar5;
  pcVar16 = pcVar11;
  pcVar13 = pcVar1;
  pcVar15 = pcVar9;
  pcStack_2b0 = unaff_x26;
  pcStack_2a8 = unaff_x25;
  pcStack_298 = pcVar2;
  pcStack_290 = pcVar10;
  pcStack_288 = pcVar7;
  pcStack_280 = pcVar4;
  pcStack_278 = pcVar12;
  pppuStack_270 = &ppuStack_190;
  _objc_retain(pcVar19);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(acStack_318,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_300,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_2e8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      unaff_x26 = pcVar1;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_2d0,unaff_x26);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x000107c27984(acStack_338,acStack_318,&lStack_2b8,4);
    pcVar6 = "\x02";
    unaff_x25 = acStack_338;
    pcVar8 = acStack_338;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_320 = unaff_x25;
    func_0x000107c278ac(&pcStack_320);
    lVar17 = 0;
    pcVar16 = pcVar9;
    do {
      if ((&cStack_2b9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar1);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar2 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_318);
  _objc_release(pcVar1);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar19);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcVar3 = acStack_400;
  pcStack_348 = FUN_10b2985f0;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar12 = pcVar6;
  pcVar7 = pcVar8;
  pcVar10 = pcVar16;
  pcVar9 = pcVar13;
  pcStack_390 = unaff_x26;
  pcStack_388 = unaff_x25;
  pcStack_380 = acStack_318;
  pcStack_378 = pcVar2;
  pcStack_370 = pcVar1;
  pcStack_368 = pcVar11;
  pcStack_360 = pcVar5;
  pcStack_358 = pcVar19;
  pppuStack_350 = &pppuStack_270;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  _objc_retain(pcVar16);
  pcVar19 = acStack_318;
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(acStack_3e0,pcVar19);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar19 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_3c8,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x25 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_3b0,unaff_x25);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x000107c27984(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar12 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_3e8 = acStack_400;
    func_0x000107c278ac(&puStack_3e8);
    lVar17 = 0;
    pcVar7 = pcVar3;
    pcVar10 = pcVar13;
    do {
      if ((&cStack_399)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_400;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar8);
  pcVar5 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_438 = acStack_3e0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_438);
  _objc_release(pcVar16);
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  pcVar13 = acStack_4c0;
  pcStack_408 = FUN_10b2988b0;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar12;
  pcVar1 = pcVar7;
  pcVar4 = pcVar10;
  pcVar3 = pcVar9;
  pcStack_450 = unaff_x26;
  pcStack_448 = unaff_x25;
  pcStack_440 = pcVar19;
  pcStack_430 = pcVar5;
  pcStack_428 = pcVar16;
  pcStack_420 = pcVar8;
  pcStack_418 = pcVar6;
  pppuStack_410 = &pppuStack_350;
  _objc_retain(pcVar12);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar12;
      _objc_retainAutorelease(pcVar12);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(acStack_4a0,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_488,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      unaff_x25 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_470,unaff_x25);
    acStack_4c0[0] = '\0';
    acStack_4c0[1] = '\0';
    acStack_4c0[2] = '\0';
    acStack_4c0[3] = '\0';
    acStack_4c0[4] = '\0';
    acStack_4c0[5] = '\0';
    acStack_4c0[6] = '\0';
    acStack_4c0[7] = '\0';
    acStack_4c0[8] = '\0';
    acStack_4c0[9] = '\0';
    acStack_4c0[10] = '\0';
    acStack_4c0[0xb] = '\0';
    acStack_4c0[0xc] = '\0';
    acStack_4c0[0xd] = '\0';
    acStack_4c0[0xe] = '\0';
    acStack_4c0[0xf] = '\0';
    acStack_4c0[0x10] = '\0';
    acStack_4c0[0x11] = '\0';
    acStack_4c0[0x12] = '\0';
    acStack_4c0[0x13] = '\0';
    acStack_4c0[0x14] = '\0';
    acStack_4c0[0x15] = '\0';
    acStack_4c0[0x16] = '\0';
    acStack_4c0[0x17] = '\0';
    func_0x000107c27984(acStack_4c0,acStack_4a0,&lStack_458,3);
    pcVar11 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_4a8 = acStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    lVar17 = 0;
    pcVar1 = pcVar13;
    pcVar4 = pcVar9;
    do {
      if ((&cStack_459)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_4c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar5 = pcVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_4f8 = acStack_4a0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_4f8);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar12);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_4c8 = FUN_10b298b70;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar11;
  pcVar9 = pcVar1;
  pcVar8 = pcVar4;
  pcVar16 = pcVar3;
  pcVar13 = pcVar15;
  pcStack_510 = unaff_x26;
  pcStack_508 = unaff_x25;
  pcStack_500 = pcVar19;
  pcStack_4f0 = pcVar5;
  pcStack_4e8 = pcVar10;
  pcStack_4e0 = pcVar7;
  pcStack_4d8 = pcVar12;
  pppuStack_4d0 = &pppuStack_410;
  _objc_retain(pcVar11);
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar3);
  if (pcVar6 != (char *)0x0) {
    plVar18 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(acStack_578,pcVar19);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar19 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_560,pcVar19);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar19 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_548,pcVar19);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      unaff_x26 = pcVar3;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_530,unaff_x26);
    acStack_598[0] = '\0';
    acStack_598[1] = '\0';
    acStack_598[2] = '\0';
    acStack_598[3] = '\0';
    acStack_598[4] = '\0';
    acStack_598[5] = '\0';
    acStack_598[6] = '\0';
    acStack_598[7] = '\0';
    acStack_598[8] = '\0';
    acStack_598[9] = '\0';
    acStack_598[10] = '\0';
    acStack_598[0xb] = '\0';
    acStack_598[0xc] = '\0';
    acStack_598[0xd] = '\0';
    acStack_598[0xe] = '\0';
    acStack_598[0xf] = '\0';
    acStack_598[0x10] = '\0';
    acStack_598[0x11] = '\0';
    acStack_598[0x12] = '\0';
    acStack_598[0x13] = '\0';
    acStack_598[0x14] = '\0';
    acStack_598[0x15] = '\0';
    acStack_598[0x16] = '\0';
    acStack_598[0x17] = '\0';
    func_0x000107c27984(acStack_598,acStack_578,&lStack_518,4);
    pcVar2 = "\x01";
    unaff_x25 = acStack_598;
    pcVar9 = acStack_598;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_580 = unaff_x25;
    func_0x000107c278ac(&pcStack_580);
    lVar17 = 0;
    pcVar8 = pcVar15;
    do {
      if ((&cStack_519)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar19 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  pcStack_5e0 = acStack_578;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_5e0);
  _objc_release(pcVar3);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar11);
  pcVar7 = pcVar19;
  __Unwind_Resume();
  pcStack_5a8 = FUN_10b298ea4;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar12 = pcVar9;
  pcVar10 = pcVar8;
  pcVar6 = pcVar16;
  pcVar15 = pcVar13;
  pcStack_5f0 = unaff_x26;
  pcStack_5e8 = unaff_x25;
  pcStack_5d8 = pcVar19;
  pcStack_5d0 = pcVar3;
  pcStack_5c8 = pcVar4;
  pcStack_5c0 = pcVar1;
  pcStack_5b8 = pcVar11;
  pppuStack_5b0 = &pppuStack_4d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  _objc_retain(pcVar8);
  _objc_retain(pcVar16);
  if (pcVar7 != (char *)0x0) {
    plVar18 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(acStack_658,pcVar19);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar19 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_640,pcVar19);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar19 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_628,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar19 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_610,pcVar19);
    acStack_678[0] = '\0';
    acStack_678[1] = '\0';
    acStack_678[2] = '\0';
    acStack_678[3] = '\0';
    acStack_678[4] = '\0';
    acStack_678[5] = '\0';
    acStack_678[6] = '\0';
    acStack_678[7] = '\0';
    acStack_678[8] = '\0';
    acStack_678[9] = '\0';
    acStack_678[10] = '\0';
    acStack_678[0xb] = '\0';
    acStack_678[0xc] = '\0';
    acStack_678[0xd] = '\0';
    acStack_678[0xe] = '\0';
    acStack_678[0xf] = '\0';
    acStack_678[0x10] = '\0';
    acStack_678[0x11] = '\0';
    acStack_678[0x12] = '\0';
    acStack_678[0x13] = '\0';
    acStack_678[0x14] = '\0';
    acStack_678[0x15] = '\0';
    acStack_678[0x16] = '\0';
    acStack_678[0x17] = '\0';
    func_0x000107c27984(acStack_678,acStack_658,&lStack_5f8,4);
    pcVar5 = "\x01";
    unaff_x25 = acStack_678;
    pcVar12 = acStack_678;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_660 = unaff_x25;
    func_0x000107c278ac(&pcStack_660);
    lVar17 = 0;
    pcVar10 = pcVar13;
    do {
      if ((&cStack_5f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar8);
  _objc_release(pcVar9);
  pcVar19 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_658);
  _objc_release(pcVar16);
  _objc_release(pcVar8);
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar9 = acStack_780;
  pcStack_688 = FUN_10b2991d8;
  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar5;
  pcVar1 = pcVar12;
  pcVar4 = pcVar10;
  pcVar7 = pcVar6;
  pppuStack_690 = &pppuStack_5b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar12);
  _objc_retain(pcVar10);
  _objc_retain(pcVar6);
  _objc_retain(pcVar15);
  pcVar2 = (char *)0x0;
  if (pcVar19 != (char *)0x0) {
    plVar18 = *(long **)(pcVar19 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(acStack_760,pcVar19);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar19 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_748,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_730,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar19 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_718,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar19 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_700,pcVar19);
    acStack_780[0] = '\0';
    acStack_780[1] = '\0';
    acStack_780[2] = '\0';
    acStack_780[3] = '\0';
    acStack_780[4] = '\0';
    acStack_780[5] = '\0';
    acStack_780[6] = '\0';
    acStack_780[7] = '\0';
    acStack_780[8] = '\0';
    acStack_780[9] = '\0';
    acStack_780[10] = '\0';
    acStack_780[0xb] = '\0';
    acStack_780[0xc] = '\0';
    acStack_780[0xd] = '\0';
    acStack_780[0xe] = '\0';
    acStack_780[0xf] = '\0';
    acStack_780[0x10] = '\0';
    acStack_780[0x11] = '\0';
    acStack_780[0x12] = '\0';
    acStack_780[0x13] = '\0';
    acStack_780[0x14] = '\0';
    acStack_780[0x15] = '\0';
    acStack_780[0x16] = '\0';
    acStack_780[0x17] = '\0';
    func_0x000107c27984(acStack_780,acStack_760,&lStack_6e8,5);
    pcVar11 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_768 = acStack_780;
    func_0x000107c278ac(&puStack_768);
    lVar17 = 0;
    pcVar2 = acStack_760;
    pcVar1 = pcVar9;
    pcVar4 = param_7;
    do {
      if ((&cStack_6e9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_700 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x78);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar6);
  _objc_release(pcVar10);
  _objc_release(pcVar12);
  pcVar19 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e8) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    do {
      pcVar2 = pcVar2 + -0x18;
    } while (pcVar2 != acStack_760);
    _objc_release(pcVar15);
    _objc_release(pcVar6);
    _objc_release(pcVar10);
    _objc_release(pcVar12);
    _objc_release(pcVar5);
    pcVar8 = pcVar19;
    __Unwind_Resume();
    pcVar14 = acStack_840;
    pcStack_788 = FUN_10b299588;
    lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar11;
    pcVar3 = pcVar1;
    pcVar16 = pcVar4;
    pcVar13 = pcVar7;
    pcStack_7d0 = acStack_760;
    pcStack_7c8 = pcVar2;
    pcStack_7c0 = pcVar19;
    pcStack_7b8 = pcVar15;
    pcStack_7b0 = pcVar6;
    pcStack_7a8 = pcVar10;
    pcStack_7a0 = pcVar12;
    pcStack_798 = pcVar5;
    pppuStack_790 = &pppuStack_690;
    _objc_retain(pcVar11);
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    if (pcVar8 != (char *)0x0) {
      plVar18 = *(long **)(pcVar8 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(acStack_820,pcVar19);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar19 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_808,pcVar19);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(auStack_7f0,pcVar2);
      acStack_840[0] = '\0';
      acStack_840[1] = '\0';
      acStack_840[2] = '\0';
      acStack_840[3] = '\0';
      acStack_840[4] = '\0';
      acStack_840[5] = '\0';
      acStack_840[6] = '\0';
      acStack_840[7] = '\0';
      acStack_840[8] = '\0';
      acStack_840[9] = '\0';
      acStack_840[10] = '\0';
      acStack_840[0xb] = '\0';
      acStack_840[0xc] = '\0';
      acStack_840[0xd] = '\0';
      acStack_840[0xe] = '\0';
      acStack_840[0xf] = '\0';
      acStack_840[0x10] = '\0';
      acStack_840[0x11] = '\0';
      acStack_840[0x12] = '\0';
      acStack_840[0x13] = '\0';
      acStack_840[0x14] = '\0';
      acStack_840[0x15] = '\0';
      acStack_840[0x16] = '\0';
      acStack_840[0x17] = '\0';
      func_0x000107c27984(acStack_840,acStack_820,&lStack_7d8,3);
      pcVar9 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_828 = acStack_840;
      func_0x000107c278ac(&puStack_828);
      lVar17 = 0;
      pcVar3 = pcVar14;
      pcVar16 = pcVar7;
      do {
        if ((&cStack_7d9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7f0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_840;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    pcVar5 = pcVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    pcStack_878 = acStack_820;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_878);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    _objc_release(pcVar11);
    pcVar7 = pcVar5;
    __Unwind_Resume();
    pcVar15 = acStack_900;
    pcStack_848 = FUN_10b299848;
    lStack_898 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar9;
    pcVar10 = pcVar3;
    pcVar6 = pcVar16;
    pcVar8 = pcVar13;
    pcStack_890 = acStack_760;
    pcStack_888 = pcVar2;
    pcStack_880 = pcVar19;
    pcStack_870 = pcVar5;
    pcStack_868 = pcVar4;
    pcStack_860 = pcVar1;
    pcStack_858 = pcVar11;
    pppuStack_850 = &pppuStack_790;
    _objc_retain(pcVar9);
    _objc_retain(pcVar3);
    _objc_retain(pcVar16);
    if (pcVar7 != (char *)0x0) {
      plVar18 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(acStack_8e0,pcVar19);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar19 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_8c8,pcVar19);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        pcVar2 = pcVar16;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x000107c278b8(auStack_8b0,pcVar2);
      acStack_900[0] = '\0';
      acStack_900[1] = '\0';
      acStack_900[2] = '\0';
      acStack_900[3] = '\0';
      acStack_900[4] = '\0';
      acStack_900[5] = '\0';
      acStack_900[6] = '\0';
      acStack_900[7] = '\0';
      acStack_900[8] = '\0';
      acStack_900[9] = '\0';
      acStack_900[10] = '\0';
      acStack_900[0xb] = '\0';
      acStack_900[0xc] = '\0';
      acStack_900[0xd] = '\0';
      acStack_900[0xe] = '\0';
      acStack_900[0xf] = '\0';
      acStack_900[0x10] = '\0';
      acStack_900[0x11] = '\0';
      acStack_900[0x12] = '\0';
      acStack_900[0x13] = '\0';
      acStack_900[0x14] = '\0';
      acStack_900[0x15] = '\0';
      acStack_900[0x16] = '\0';
      acStack_900[0x17] = '\0';
      func_0x000107c27984(acStack_900,acStack_8e0,&lStack_898,3);
      pcVar12 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_8e8 = acStack_900;
      func_0x000107c278ac(&puStack_8e8);
      lVar17 = 0;
      pcVar10 = pcVar15;
      pcVar6 = pcVar13;
      do {
        if ((&cStack_899)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_8b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_900;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar3);
    pcVar5 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_898) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar16);
    pcStack_938 = acStack_8e0;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_938);
    _objc_release(pcVar16);
    _objc_release(pcVar3);
    _objc_release(pcVar9);
    pcVar1 = pcVar5;
    __Unwind_Resume();
    pcVar15 = acStack_9c0;
    pcStack_908 = FUN_10b299b08;
    lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar11 = pcVar12;
    pcVar4 = pcVar10;
    pcVar7 = pcVar6;
    pcVar13 = pcVar8;
    pcStack_950 = acStack_760;
    pcStack_948 = pcVar2;
    pcStack_940 = pcVar19;
    pcStack_930 = pcVar5;
    pcStack_928 = pcVar16;
    pcStack_920 = pcVar3;
    pcStack_918 = pcVar9;
    pppuStack_910 = &pppuStack_850;
    _objc_retain(pcVar12);
    _objc_retain(pcVar10);
    _objc_retain(pcVar6);
    if (pcVar1 != (char *)0x0) {
      plVar18 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar12;
        _objc_retainAutorelease(pcVar12);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(acStack_9a0,pcVar19);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar19 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_988,pcVar19);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_970,pcVar2);
      acStack_9c0[0] = '\0';
      acStack_9c0[1] = '\0';
      acStack_9c0[2] = '\0';
      acStack_9c0[3] = '\0';
      acStack_9c0[4] = '\0';
      acStack_9c0[5] = '\0';
      acStack_9c0[6] = '\0';
      acStack_9c0[7] = '\0';
      acStack_9c0[8] = '\0';
      acStack_9c0[9] = '\0';
      acStack_9c0[10] = '\0';
      acStack_9c0[0xb] = '\0';
      acStack_9c0[0xc] = '\0';
      acStack_9c0[0xd] = '\0';
      acStack_9c0[0xe] = '\0';
      acStack_9c0[0xf] = '\0';
      acStack_9c0[0x10] = '\0';
      acStack_9c0[0x11] = '\0';
      acStack_9c0[0x12] = '\0';
      acStack_9c0[0x13] = '\0';
      acStack_9c0[0x14] = '\0';
      acStack_9c0[0x15] = '\0';
      acStack_9c0[0x16] = '\0';
      acStack_9c0[0x17] = '\0';
      func_0x000107c27984(acStack_9c0,acStack_9a0,&lStack_958,3);
      pcVar11 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_9a8 = acStack_9c0;
      func_0x000107c278ac(&puStack_9a8);
      lVar17 = 0;
      pcVar4 = pcVar15;
      pcVar7 = pcVar8;
      do {
        if ((&cStack_959)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_970 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_9c0;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar10);
    pcVar5 = pcVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_958) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    pcStack_9f8 = acStack_9a0;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_9f8);
    _objc_release(pcVar6);
    _objc_release(pcVar10);
    _objc_release(pcVar12);
    pcVar9 = pcVar5;
    __Unwind_Resume();
    pcVar15 = acStack_a80;
    pcStack_9c8 = FUN_10b299dc8;
    lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar11;
    pcVar8 = pcVar4;
    pcVar3 = pcVar7;
    pcVar16 = pcVar13;
    pcStack_a10 = acStack_760;
    pcStack_a08 = pcVar2;
    pcStack_a00 = pcVar19;
    pcStack_9f0 = pcVar5;
    pcStack_9e8 = pcVar6;
    pcStack_9e0 = pcVar10;
    pcStack_9d8 = pcVar12;
    pppuStack_9d0 = &pppuStack_910;
    _objc_retain(pcVar11);
    _objc_retain(pcVar4);
    _objc_retain(pcVar7);
    if (pcVar9 != (char *)0x0) {
      plVar18 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(acStack_a60,pcVar19);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar19 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(auStack_a48,pcVar19);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_a30,pcVar2);
      acStack_a80[0] = '\0';
      acStack_a80[1] = '\0';
      acStack_a80[2] = '\0';
      acStack_a80[3] = '\0';
      acStack_a80[4] = '\0';
      acStack_a80[5] = '\0';
      acStack_a80[6] = '\0';
      acStack_a80[7] = '\0';
      acStack_a80[8] = '\0';
      acStack_a80[9] = '\0';
      acStack_a80[10] = '\0';
      acStack_a80[0xb] = '\0';
      acStack_a80[0xc] = '\0';
      acStack_a80[0xd] = '\0';
      acStack_a80[0xe] = '\0';
      acStack_a80[0xf] = '\0';
      acStack_a80[0x10] = '\0';
      acStack_a80[0x11] = '\0';
      acStack_a80[0x12] = '\0';
      acStack_a80[0x13] = '\0';
      acStack_a80[0x14] = '\0';
      acStack_a80[0x15] = '\0';
      acStack_a80[0x16] = '\0';
      acStack_a80[0x17] = '\0';
      func_0x000107c27984(acStack_a80,acStack_a60,&lStack_a18,3);
      pcVar1 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_a68 = acStack_a80;
      func_0x000107c278ac(&puStack_a68);
      lVar17 = 0;
      pcVar8 = pcVar15;
      pcVar3 = pcVar13;
      do {
        if ((&cStack_a19)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a30 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_a80;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    pcVar5 = pcVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a18) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    pcStack_ab8 = acStack_a60;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_ab8);
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    _objc_release(pcVar11);
    pcVar10 = pcVar5;
    __Unwind_Resume();
    pcVar15 = acStack_b40;
    pcStack_a88 = FUN_10b29a088;
    lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar12 = pcVar1;
    pcVar9 = pcVar8;
    pcVar6 = pcVar3;
    pcVar13 = pcVar16;
    pcStack_ad0 = acStack_760;
    pcStack_ac8 = pcVar2;
    pcStack_ac0 = pcVar19;
    pcStack_ab0 = pcVar5;
    pcStack_aa8 = pcVar7;
    pcStack_aa0 = pcVar4;
    pcStack_a98 = pcVar11;
    pppuStack_a90 = &pppuStack_9d0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar8);
    _objc_retain(pcVar3);
    if (pcVar10 != (char *)0x0) {
      plVar18 = *(long **)(pcVar10 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(acStack_b20,pcVar19);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar19 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_b08,pcVar19);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_af0,pcVar2);
      acStack_b40[0] = '\0';
      acStack_b40[1] = '\0';
      acStack_b40[2] = '\0';
      acStack_b40[3] = '\0';
      acStack_b40[4] = '\0';
      acStack_b40[5] = '\0';
      acStack_b40[6] = '\0';
      acStack_b40[7] = '\0';
      acStack_b40[8] = '\0';
      acStack_b40[9] = '\0';
      acStack_b40[10] = '\0';
      acStack_b40[0xb] = '\0';
      acStack_b40[0xc] = '\0';
      acStack_b40[0xd] = '\0';
      acStack_b40[0xe] = '\0';
      acStack_b40[0xf] = '\0';
      acStack_b40[0x10] = '\0';
      acStack_b40[0x11] = '\0';
      acStack_b40[0x12] = '\0';
      acStack_b40[0x13] = '\0';
      acStack_b40[0x14] = '\0';
      acStack_b40[0x15] = '\0';
      acStack_b40[0x16] = '\0';
      acStack_b40[0x17] = '\0';
      func_0x000107c27984(acStack_b40,acStack_b20,&lStack_ad8,3);
      pcVar12 = "\x01";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_b28 = acStack_b40;
      func_0x000107c278ac(&puStack_b28);
      lVar17 = 0;
      pcVar9 = pcVar15;
      pcVar6 = pcVar16;
      do {
        if ((&cStack_ad9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_af0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_b40;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar8);
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ad8) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      pcStack_b78 = acStack_b20;
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != pcStack_b78);
      _objc_release(pcVar3);
      _objc_release(pcVar8);
      _objc_release(pcVar1);
      pcVar11 = pcVar5;
      __Unwind_Resume();
      pcVar7 = acStack_c00;
      pcStack_b48 = FUN_10b29a348;
      lStack_b98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar9;
      pcStack_b90 = acStack_760;
      pcStack_b88 = pcVar2;
      pcStack_b80 = pcVar19;
      pcStack_b70 = pcVar5;
      pcStack_b68 = pcVar3;
      pcStack_b60 = pcVar8;
      pcStack_b58 = pcVar1;
      pppuStack_b50 = &pppuStack_a90;
      _objc_retain(pcVar12);
      _objc_retain(pcVar9);
      _objc_retain(pcVar6);
      if (pcVar11 != (char *)0x0) {
        plVar18 = *(long **)(pcVar11 + 8);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = pcVar12;
          _objc_retainAutorelease(pcVar12);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(acStack_be0,pcVar19);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar19 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x000107c278b8(auStack_bc8,pcVar19);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar19 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x000107c278b8(auStack_bb0,pcVar19);
        acStack_c00[0] = '\0';
        acStack_c00[1] = '\0';
        acStack_c00[2] = '\0';
        acStack_c00[3] = '\0';
        acStack_c00[4] = '\0';
        acStack_c00[5] = '\0';
        acStack_c00[6] = '\0';
        acStack_c00[7] = '\0';
        acStack_c00[8] = '\0';
        acStack_c00[9] = '\0';
        acStack_c00[10] = '\0';
        acStack_c00[0xb] = '\0';
        acStack_c00[0xc] = '\0';
        acStack_c00[0xd] = '\0';
        acStack_c00[0xe] = '\0';
        acStack_c00[0xf] = '\0';
        acStack_c00[0x10] = '\0';
        acStack_c00[0x11] = '\0';
        acStack_c00[0x12] = '\0';
        acStack_c00[0x13] = '\0';
        acStack_c00[0x14] = '\0';
        acStack_c00[0x15] = '\0';
        acStack_c00[0x16] = '\0';
        acStack_c00[0x17] = '\0';
        func_0x000107c27984(acStack_c00,acStack_be0,&lStack_b98,3);
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_c00,pcVar13);
        puStack_be8 = acStack_c00;
        func_0x000107c278ac(&puStack_be8);
        lVar17 = 0;
        pcVar4 = pcVar7;
        do {
          if ((&cStack_b99)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_bb0 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_c00;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar6);
      _objc_release(pcVar9);
      pcVar5 = pcVar12;
      _objc_release(pcVar12);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b98) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        do {
          pcVar19 = pcVar19 + -0x18;
        } while (pcVar19 != acStack_be0);
        _objc_release(pcVar6);
        _objc_release(pcVar9);
        _objc_release(pcVar12);
        __Unwind_Resume(pcVar5);
        if ((long)pcVar4 < 1) {
          if (pcVar4 == (char *)0xffffffffffffffff) {
            func_0x00010c14cea0(pcVar5);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar4 == (char *)0x0) {
            _objc_retain(pcVar5);
          }
        }
        else if (pcVar4 == (char *)0x1) {
          func_0x00010c14ce80(pcVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar4 == (char *)0x9) {
          func_0x00010c14ce60(pcVar5);
          _objc_retainAutoreleasedReturnValue();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar5);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b297cc8; end: 10b297f87;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b2985b0) */
/* WARNING: Removing unreachable block (ram,0x00010b297f50) */
/* WARNING: Removing unreachable block (ram,0x00010b29827c) */
/* WARNING: Removing unreachable block (ram,0x00010b298878) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b297cc8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x24;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_b40 [24];
  undefined1 *puStack_b28;
  char acStack_b20 [24];
  undefined1 auStack_b08 [24];
  undefined8 auStack_af0 [2];
  char cStack_ad9;
  long lStack_ad8;
  char *pcStack_ad0;
  char *pcStack_ac8;
  char *pcStack_ac0;
  char *pcStack_ab8;
  char *pcStack_ab0;
  char *pcStack_aa8;
  char *pcStack_aa0;
  char *pcStack_a98;
  undefined8 ***pppuStack_a90;
  code *pcStack_a88;
  char acStack_a80 [24];
  undefined1 *puStack_a68;
  char acStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined8 auStack_a30 [2];
  char cStack_a19;
  long lStack_a18;
  char *pcStack_a10;
  char *pcStack_a08;
  char *pcStack_a00;
  char *pcStack_9f8;
  char *pcStack_9f0;
  char *pcStack_9e8;
  char *pcStack_9e0;
  char *pcStack_9d8;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  char acStack_9c0 [24];
  undefined1 *puStack_9a8;
  char acStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined8 auStack_970 [2];
  char cStack_959;
  long lStack_958;
  char *pcStack_950;
  char *pcStack_948;
  char *pcStack_940;
  char *pcStack_938;
  char *pcStack_930;
  char *pcStack_928;
  char *pcStack_920;
  char *pcStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  char acStack_900 [24];
  undefined1 *puStack_8e8;
  char acStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined8 auStack_8b0 [2];
  char cStack_899;
  long lStack_898;
  char *pcStack_890;
  char *pcStack_888;
  char *pcStack_880;
  char *pcStack_878;
  char *pcStack_870;
  char *pcStack_868;
  char *pcStack_860;
  char *pcStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  char acStack_840 [24];
  undefined1 *puStack_828;
  char acStack_820 [24];
  undefined1 auStack_808 [24];
  undefined8 auStack_7f0 [2];
  char cStack_7d9;
  long lStack_7d8;
  char *pcStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  char *pcStack_7b0;
  char *pcStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_780 [24];
  undefined1 *puStack_768;
  char acStack_760 [24];
  undefined1 auStack_748 [24];
  undefined8 auStack_730 [2];
  char cStack_719;
  long lStack_718;
  char *pcStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  char acStack_6c0 [24];
  undefined1 *puStack_6a8;
  char acStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5b8 [24];
  char *pcStack_5a0;
  char acStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  char *pcStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4d8 [24];
  char *pcStack_4c0;
  char acStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  char acStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  char acStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar1 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_2;
  pcVar9 = param_3;
  pcVar3 = param_4;
  pcVar6 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar19);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar19 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar19);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar19 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar17 = 0;
    pcVar9 = pcVar1;
    pcVar3 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_10b297f88;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar19;
  pcVar4 = pcVar9;
  pcVar12 = pcVar3;
  pcVar11 = pcVar6;
  pcVar10 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar19);
  _objc_retain(pcVar9);
  _objc_retain(pcVar3);
  _objc_retain(pcVar6);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(acStack_178,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_160,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_148,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      unaff_x26 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_130,unaff_x26);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x000107c27984(acStack_198,acStack_178,&lStack_118,4);
    pcVar8 = "\x02";
    unaff_x25 = acStack_198;
    pcVar4 = acStack_198;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_180 = unaff_x25;
    func_0x000107c278ac(&pcStack_180);
    lVar17 = 0;
    pcVar12 = param_6;
    do {
      if ((&cStack_119)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar3);
  _objc_release(pcVar9);
  pcVar1 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_1e0 = acStack_178;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_1e0);
  _objc_release(pcVar6);
  _objc_release(pcVar3);
  _objc_release(pcVar9);
  _objc_release(pcVar19);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10b2982bc;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar8;
  pcVar7 = pcVar4;
  pcVar16 = pcVar12;
  pcVar13 = pcVar11;
  pcVar15 = pcVar10;
  pcStack_1f0 = unaff_x26;
  pcStack_1e8 = unaff_x25;
  pcStack_1d8 = pcVar1;
  pcStack_1d0 = pcVar6;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar9;
  pcStack_1b8 = pcVar19;
  ppuStack_1b0 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar4);
  _objc_retain(pcVar12);
  _objc_retain(pcVar11);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_258,pcVar19);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar19 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_240,pcVar19);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar19 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_228,pcVar19);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      unaff_x26 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_210,unaff_x26);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x000107c27984(acStack_278,acStack_258,&lStack_1f8,4);
    pcVar5 = "\x02";
    unaff_x25 = acStack_278;
    pcVar7 = acStack_278;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_260 = unaff_x25;
    func_0x000107c278ac(&pcStack_260);
    lVar17 = 0;
    pcVar16 = pcVar10;
    do {
      if ((&cStack_1f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar12);
  _objc_release(pcVar4);
  pcVar19 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_258);
  _objc_release(pcVar11);
  _objc_release(pcVar12);
  _objc_release(pcVar4);
  _objc_release(pcVar8);
  pcVar3 = pcVar19;
  __Unwind_Resume();
  pcVar2 = acStack_340;
  pcStack_288 = FUN_10b2985f0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar5;
  pcVar6 = pcVar7;
  pcVar1 = pcVar16;
  pcVar10 = pcVar13;
  pcStack_2d0 = unaff_x26;
  pcStack_2c8 = unaff_x25;
  pcStack_2c0 = acStack_258;
  pcStack_2b8 = pcVar19;
  pcStack_2b0 = pcVar11;
  pcStack_2a8 = pcVar12;
  pcStack_2a0 = pcVar4;
  pcStack_298 = pcVar8;
  pppuStack_290 = &ppuStack_1b0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  _objc_retain(pcVar16);
  pcVar19 = acStack_258;
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(acStack_320,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_308,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x25 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_2f0,unaff_x25);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x000107c27984(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar9 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_328 = acStack_340;
    func_0x000107c278ac(&puStack_328);
    lVar17 = 0;
    pcVar6 = pcVar2;
    pcVar1 = pcVar13;
    do {
      if ((&cStack_2d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_340;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar7);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_378 = acStack_320;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_378);
  _objc_release(pcVar16);
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar13 = acStack_400;
  pcStack_348 = FUN_10b2988b0;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar9;
  pcVar12 = pcVar6;
  pcVar11 = pcVar1;
  pcVar2 = pcVar10;
  pcStack_390 = unaff_x26;
  pcStack_388 = unaff_x25;
  pcStack_380 = pcVar19;
  pcStack_370 = pcVar3;
  pcStack_368 = pcVar16;
  pcStack_360 = pcVar7;
  pcStack_358 = pcVar5;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  _objc_retain(pcVar1);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(acStack_3e0,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar19 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_3c8,pcVar19);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      unaff_x25 = pcVar1;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_3b0,unaff_x25);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x000107c27984(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_3e8 = acStack_400;
    func_0x000107c278ac(&puStack_3e8);
    lVar17 = 0;
    pcVar12 = pcVar13;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_399)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_400;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar1);
  _objc_release(pcVar6);
  pcVar3 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    pcStack_438 = acStack_3e0;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_438);
    _objc_release(pcVar1);
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar5 = pcVar3;
    __Unwind_Resume();
    pcStack_408 = FUN_10b298b70;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar8;
    pcVar10 = pcVar12;
    pcVar7 = pcVar11;
    pcVar16 = pcVar2;
    pcVar13 = pcVar15;
    pcStack_450 = unaff_x26;
    pcStack_448 = unaff_x25;
    pcStack_440 = pcVar19;
    pcStack_430 = pcVar3;
    pcStack_428 = pcVar1;
    pcStack_420 = pcVar6;
    pcStack_418 = pcVar9;
    pppuStack_410 = &pppuStack_350;
    _objc_retain(pcVar8);
    _objc_retain(pcVar12);
    _objc_retain(pcVar11);
    _objc_retain(pcVar2);
    if (pcVar5 != (char *)0x0) {
      plVar18 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_4b8,pcVar19);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar19 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(auStack_4a0,pcVar19);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar19 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(auStack_488,pcVar19);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        unaff_x26 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        unaff_x26 = pcVar2;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_470,unaff_x26);
      acStack_4d8[0] = '\0';
      acStack_4d8[1] = '\0';
      acStack_4d8[2] = '\0';
      acStack_4d8[3] = '\0';
      acStack_4d8[4] = '\0';
      acStack_4d8[5] = '\0';
      acStack_4d8[6] = '\0';
      acStack_4d8[7] = '\0';
      acStack_4d8[8] = '\0';
      acStack_4d8[9] = '\0';
      acStack_4d8[10] = '\0';
      acStack_4d8[0xb] = '\0';
      acStack_4d8[0xc] = '\0';
      acStack_4d8[0xd] = '\0';
      acStack_4d8[0xe] = '\0';
      acStack_4d8[0xf] = '\0';
      acStack_4d8[0x10] = '\0';
      acStack_4d8[0x11] = '\0';
      acStack_4d8[0x12] = '\0';
      acStack_4d8[0x13] = '\0';
      acStack_4d8[0x14] = '\0';
      acStack_4d8[0x15] = '\0';
      acStack_4d8[0x16] = '\0';
      acStack_4d8[0x17] = '\0';
      func_0x000107c27984(acStack_4d8,acStack_4b8,&lStack_458,4);
      pcVar4 = "\x01";
      unaff_x25 = acStack_4d8;
      pcVar10 = acStack_4d8;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pcStack_4c0 = unaff_x25;
      func_0x000107c278ac(&pcStack_4c0);
      lVar17 = 0;
      pcVar7 = pcVar15;
      do {
        if ((&cStack_459)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x60);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar11);
    _objc_release(pcVar12);
    pcVar19 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    pcStack_520 = acStack_4b8;
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != pcStack_520);
    _objc_release(pcVar2);
    _objc_release(pcVar11);
    _objc_release(pcVar12);
    _objc_release(pcVar8);
    pcVar6 = pcVar19;
    __Unwind_Resume();
    pcStack_4e8 = FUN_10b298ea4;
    lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar4;
    pcVar3 = pcVar10;
    pcVar1 = pcVar7;
    pcVar5 = pcVar16;
    pcVar15 = pcVar13;
    pcStack_530 = unaff_x26;
    pcStack_528 = unaff_x25;
    pcStack_518 = pcVar19;
    pcStack_510 = pcVar2;
    pcStack_508 = pcVar11;
    pcStack_500 = pcVar12;
    pcStack_4f8 = pcVar8;
    pppuStack_4f0 = &pppuStack_410;
    _objc_retain(pcVar4);
    _objc_retain(pcVar10);
    _objc_retain(pcVar7);
    _objc_retain(pcVar16);
    if (pcVar6 != (char *)0x0) {
      plVar18 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(acStack_598,pcVar19);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar19 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_580,pcVar19);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar19 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_568,pcVar19);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        pcVar19 = pcVar16;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x000107c278b8(auStack_550,pcVar19);
      acStack_5b8[0] = '\0';
      acStack_5b8[1] = '\0';
      acStack_5b8[2] = '\0';
      acStack_5b8[3] = '\0';
      acStack_5b8[4] = '\0';
      acStack_5b8[5] = '\0';
      acStack_5b8[6] = '\0';
      acStack_5b8[7] = '\0';
      acStack_5b8[8] = '\0';
      acStack_5b8[9] = '\0';
      acStack_5b8[10] = '\0';
      acStack_5b8[0xb] = '\0';
      acStack_5b8[0xc] = '\0';
      acStack_5b8[0xd] = '\0';
      acStack_5b8[0xe] = '\0';
      acStack_5b8[0xf] = '\0';
      acStack_5b8[0x10] = '\0';
      acStack_5b8[0x11] = '\0';
      acStack_5b8[0x12] = '\0';
      acStack_5b8[0x13] = '\0';
      acStack_5b8[0x14] = '\0';
      acStack_5b8[0x15] = '\0';
      acStack_5b8[0x16] = '\0';
      acStack_5b8[0x17] = '\0';
      func_0x000107c27984(acStack_5b8,acStack_598,&lStack_538,4);
      pcVar9 = "\x01";
      unaff_x25 = acStack_5b8;
      pcVar3 = acStack_5b8;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      pcStack_5a0 = unaff_x25;
      func_0x000107c278ac(&pcStack_5a0);
      lVar17 = 0;
      pcVar1 = pcVar13;
      do {
        if ((&cStack_539)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x60);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar7);
    _objc_release(pcVar10);
    pcVar19 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar16);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_598);
    _objc_release(pcVar16);
    _objc_release(pcVar7);
    _objc_release(pcVar10);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcVar10 = acStack_6c0;
    pcStack_5c8 = FUN_10b2991d8;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar9;
    pcVar4 = pcVar3;
    pcVar12 = pcVar1;
    pcVar11 = pcVar5;
    pppuStack_5d0 = &pppuStack_4f0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar3);
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    _objc_retain(pcVar15);
    pcVar8 = (char *)0x0;
    if (pcVar19 != (char *)0x0) {
      plVar18 = *(long **)(pcVar19 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(acStack_6a0,pcVar19);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar19 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_688,pcVar19);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar19 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_670,pcVar19);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar19 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_658,pcVar19);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        pcVar19 = pcVar15;
        func_0x00010bdc3520(pcVar15);
      }
      _objc_release(pcVar15);
      func_0x000107c278b8(auStack_640,pcVar19);
      acStack_6c0[0] = '\0';
      acStack_6c0[1] = '\0';
      acStack_6c0[2] = '\0';
      acStack_6c0[3] = '\0';
      acStack_6c0[4] = '\0';
      acStack_6c0[5] = '\0';
      acStack_6c0[6] = '\0';
      acStack_6c0[7] = '\0';
      acStack_6c0[8] = '\0';
      acStack_6c0[9] = '\0';
      acStack_6c0[10] = '\0';
      acStack_6c0[0xb] = '\0';
      acStack_6c0[0xc] = '\0';
      acStack_6c0[0xd] = '\0';
      acStack_6c0[0xe] = '\0';
      acStack_6c0[0xf] = '\0';
      acStack_6c0[0x10] = '\0';
      acStack_6c0[0x11] = '\0';
      acStack_6c0[0x12] = '\0';
      acStack_6c0[0x13] = '\0';
      acStack_6c0[0x14] = '\0';
      acStack_6c0[0x15] = '\0';
      acStack_6c0[0x16] = '\0';
      acStack_6c0[0x17] = '\0';
      func_0x000107c27984(acStack_6c0,acStack_6a0,&lStack_628,5);
      pcVar6 = "\x01";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_6a8 = acStack_6c0;
      func_0x000107c278ac(&puStack_6a8);
      lVar17 = 0;
      pcVar8 = acStack_6a0;
      pcVar4 = pcVar10;
      pcVar12 = param_7;
      do {
        if ((&cStack_629)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x78);
    }
    _objc_release(pcVar15);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    _objc_release(pcVar3);
    pcVar19 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
      ___stack_chk_fail();
      _objc_release(pcVar15);
      do {
        pcVar8 = pcVar8 + -0x18;
      } while (pcVar8 != acStack_6a0);
      _objc_release(pcVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      _objc_release(pcVar3);
      _objc_release(pcVar9);
      pcVar7 = pcVar19;
      __Unwind_Resume();
      pcVar14 = acStack_780;
      pcStack_6c8 = FUN_10b299588;
      lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar6;
      pcVar2 = pcVar4;
      pcVar16 = pcVar12;
      pcVar13 = pcVar11;
      pcStack_710 = acStack_6a0;
      pcStack_708 = pcVar8;
      pcStack_700 = pcVar19;
      pcStack_6f8 = pcVar15;
      pcStack_6f0 = pcVar5;
      pcStack_6e8 = pcVar1;
      pcStack_6e0 = pcVar3;
      pcStack_6d8 = pcVar9;
      pppuStack_6d0 = &pppuStack_5d0;
      _objc_retain(pcVar6);
      _objc_retain(pcVar4);
      _objc_retain(pcVar12);
      if (pcVar7 != (char *)0x0) {
        plVar18 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x000107c278b8(acStack_760,pcVar19);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar19 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x000107c278b8(auStack_748,pcVar19);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar8 = pcVar12;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(auStack_730,pcVar8);
        acStack_780[0] = '\0';
        acStack_780[1] = '\0';
        acStack_780[2] = '\0';
        acStack_780[3] = '\0';
        acStack_780[4] = '\0';
        acStack_780[5] = '\0';
        acStack_780[6] = '\0';
        acStack_780[7] = '\0';
        acStack_780[8] = '\0';
        acStack_780[9] = '\0';
        acStack_780[10] = '\0';
        acStack_780[0xb] = '\0';
        acStack_780[0xc] = '\0';
        acStack_780[0xd] = '\0';
        acStack_780[0xe] = '\0';
        acStack_780[0xf] = '\0';
        acStack_780[0x10] = '\0';
        acStack_780[0x11] = '\0';
        acStack_780[0x12] = '\0';
        acStack_780[0x13] = '\0';
        acStack_780[0x14] = '\0';
        acStack_780[0x15] = '\0';
        acStack_780[0x16] = '\0';
        acStack_780[0x17] = '\0';
        func_0x000107c27984(acStack_780,acStack_760,&lStack_718,3);
        pcVar10 = "\x02";
        (**(code **)(*plVar18 + 0x18))(plVar18);
        puStack_768 = acStack_780;
        func_0x000107c278ac(&puStack_768);
        lVar17 = 0;
        pcVar2 = pcVar14;
        pcVar16 = pcVar11;
        do {
          if ((&cStack_719)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_730 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_780;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar12);
      _objc_release(pcVar4);
      pcVar9 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar12);
      pcStack_7b8 = acStack_760;
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != pcStack_7b8);
      _objc_release(pcVar12);
      _objc_release(pcVar4);
      _objc_release(pcVar6);
      pcVar1 = pcVar9;
      __Unwind_Resume();
      pcVar15 = acStack_840;
      pcStack_788 = FUN_10b299848;
      lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar10;
      pcVar11 = pcVar2;
      pcVar5 = pcVar16;
      pcVar7 = pcVar13;
      pcStack_7d0 = acStack_6a0;
      pcStack_7c8 = pcVar8;
      pcStack_7c0 = pcVar19;
      pcStack_7b0 = pcVar9;
      pcStack_7a8 = pcVar12;
      pcStack_7a0 = pcVar4;
      pcStack_798 = pcVar6;
      pppuStack_790 = &pppuStack_6d0;
      _objc_retain(pcVar10);
      _objc_retain(pcVar2);
      _objc_retain(pcVar16);
      if (pcVar1 != (char *)0x0) {
        plVar18 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = pcVar10;
          _objc_retainAutorelease(pcVar10);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x000107c278b8(acStack_820,pcVar19);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar19 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x000107c278b8(auStack_808,pcVar19);
        _objc_retain(pcVar16);
        if (pcVar16 == (char *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(pcVar16);
          pcVar8 = pcVar16;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar16);
        func_0x000107c278b8(auStack_7f0,pcVar8);
        acStack_840[0] = '\0';
        acStack_840[1] = '\0';
        acStack_840[2] = '\0';
        acStack_840[3] = '\0';
        acStack_840[4] = '\0';
        acStack_840[5] = '\0';
        acStack_840[6] = '\0';
        acStack_840[7] = '\0';
        acStack_840[8] = '\0';
        acStack_840[9] = '\0';
        acStack_840[10] = '\0';
        acStack_840[0xb] = '\0';
        acStack_840[0xc] = '\0';
        acStack_840[0xd] = '\0';
        acStack_840[0xe] = '\0';
        acStack_840[0xf] = '\0';
        acStack_840[0x10] = '\0';
        acStack_840[0x11] = '\0';
        acStack_840[0x12] = '\0';
        acStack_840[0x13] = '\0';
        acStack_840[0x14] = '\0';
        acStack_840[0x15] = '\0';
        acStack_840[0x16] = '\0';
        acStack_840[0x17] = '\0';
        func_0x000107c27984(acStack_840,acStack_820,&lStack_7d8,3);
        pcVar3 = "\x02";
        (**(code **)(*plVar18 + 0x18))(plVar18);
        puStack_828 = acStack_840;
        func_0x000107c278ac(&puStack_828);
        lVar17 = 0;
        pcVar11 = pcVar15;
        pcVar5 = pcVar13;
        do {
          if ((&cStack_7d9)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_7f0 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_840;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar16);
      _objc_release(pcVar2);
      pcVar9 = pcVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7d8) {
        ___stack_chk_fail();
        _objc_release(pcVar16);
        pcStack_878 = acStack_820;
        do {
          pcVar19 = pcVar19 + -0x18;
        } while (pcVar19 != pcStack_878);
        _objc_release(pcVar16);
        _objc_release(pcVar2);
        _objc_release(pcVar10);
        pcVar1 = pcVar9;
        __Unwind_Resume();
        pcVar15 = acStack_900;
        pcStack_848 = FUN_10b299b08;
        lStack_898 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar6 = pcVar3;
        pcVar4 = pcVar11;
        pcVar12 = pcVar5;
        pcVar13 = pcVar7;
        pcStack_890 = acStack_6a0;
        pcStack_888 = pcVar8;
        pcStack_880 = pcVar19;
        pcStack_870 = pcVar9;
        pcStack_868 = pcVar16;
        pcStack_860 = pcVar2;
        pcStack_858 = pcVar10;
        pppuStack_850 = &pppuStack_790;
        _objc_retain(pcVar3);
        _objc_retain(pcVar11);
        _objc_retain(pcVar5);
        if (pcVar1 != (char *)0x0) {
          plVar18 = *(long **)(pcVar1 + 8);
          _objc_retain(pcVar3);
          if (pcVar3 == (char *)0x0) {
            pcVar19 = "";
          }
          else {
            pcVar19 = pcVar3;
            _objc_retainAutorelease(pcVar3);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar3);
          func_0x000107c278b8(acStack_8e0,pcVar19);
          _objc_retain(pcVar11);
          if (pcVar11 == (char *)0x0) {
            pcVar19 = "";
          }
          else {
            _objc_retainAutorelease(pcVar11);
            pcVar19 = pcVar11;
            func_0x00010bdc3520(pcVar11);
          }
          _objc_release(pcVar11);
          func_0x000107c278b8(auStack_8c8,pcVar19);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar8 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar8 = pcVar5;
            func_0x00010bdc3520();
          }
          _objc_release(pcVar5);
          func_0x000107c278b8(auStack_8b0,pcVar8);
          acStack_900[0] = '\0';
          acStack_900[1] = '\0';
          acStack_900[2] = '\0';
          acStack_900[3] = '\0';
          acStack_900[4] = '\0';
          acStack_900[5] = '\0';
          acStack_900[6] = '\0';
          acStack_900[7] = '\0';
          acStack_900[8] = '\0';
          acStack_900[9] = '\0';
          acStack_900[10] = '\0';
          acStack_900[0xb] = '\0';
          acStack_900[0xc] = '\0';
          acStack_900[0xd] = '\0';
          acStack_900[0xe] = '\0';
          acStack_900[0xf] = '\0';
          acStack_900[0x10] = '\0';
          acStack_900[0x11] = '\0';
          acStack_900[0x12] = '\0';
          acStack_900[0x13] = '\0';
          acStack_900[0x14] = '\0';
          acStack_900[0x15] = '\0';
          acStack_900[0x16] = '\0';
          acStack_900[0x17] = '\0';
          func_0x000107c27984(acStack_900,acStack_8e0,&lStack_898,3);
          pcVar6 = "\x02";
          (**(code **)(*plVar18 + 0x18))(plVar18);
          puStack_8e8 = acStack_900;
          func_0x000107c278ac(&puStack_8e8);
          lVar17 = 0;
          pcVar4 = pcVar15;
          pcVar12 = pcVar7;
          do {
            if ((&cStack_899)[lVar17] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_8b0 + lVar17));
            }
            lVar17 = lVar17 + -0x18;
            pcVar19 = acStack_900;
          } while (lVar17 != -0x48);
        }
        _objc_release(pcVar5);
        _objc_release(pcVar11);
        pcVar9 = pcVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_898) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          pcStack_938 = acStack_8e0;
          do {
            pcVar19 = pcVar19 + -0x18;
          } while (pcVar19 != pcStack_938);
          _objc_release(pcVar5);
          _objc_release(pcVar11);
          _objc_release(pcVar3);
          pcVar10 = pcVar9;
          __Unwind_Resume();
          pcVar15 = acStack_9c0;
          pcStack_908 = FUN_10b299dc8;
          lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar1 = pcVar6;
          pcVar7 = pcVar4;
          pcVar2 = pcVar12;
          pcVar16 = pcVar13;
          pcStack_950 = acStack_6a0;
          pcStack_948 = pcVar8;
          pcStack_940 = pcVar19;
          pcStack_930 = pcVar9;
          pcStack_928 = pcVar5;
          pcStack_920 = pcVar11;
          pcStack_918 = pcVar3;
          pppuStack_910 = &pppuStack_850;
          _objc_retain(pcVar6);
          _objc_retain(pcVar4);
          _objc_retain(pcVar12);
          if (pcVar10 != (char *)0x0) {
            plVar18 = *(long **)(pcVar10 + 8);
            _objc_retain(pcVar6);
            if (pcVar6 == (char *)0x0) {
              pcVar19 = "";
            }
            else {
              pcVar19 = pcVar6;
              _objc_retainAutorelease(pcVar6);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar6);
            func_0x000107c278b8(acStack_9a0,pcVar19);
            _objc_retain(pcVar4);
            if (pcVar4 == (char *)0x0) {
              pcVar19 = "";
            }
            else {
              _objc_retainAutorelease(pcVar4);
              pcVar19 = pcVar4;
              func_0x00010bdc3520(pcVar4);
            }
            _objc_release(pcVar4);
            func_0x000107c278b8(auStack_988,pcVar19);
            _objc_retain(pcVar12);
            if (pcVar12 == (char *)0x0) {
              pcVar8 = "";
            }
            else {
              _objc_retainAutorelease(pcVar12);
              pcVar8 = pcVar12;
              func_0x00010bdc3520();
            }
            _objc_release(pcVar12);
            func_0x000107c278b8(auStack_970,pcVar8);
            acStack_9c0[0] = '\0';
            acStack_9c0[1] = '\0';
            acStack_9c0[2] = '\0';
            acStack_9c0[3] = '\0';
            acStack_9c0[4] = '\0';
            acStack_9c0[5] = '\0';
            acStack_9c0[6] = '\0';
            acStack_9c0[7] = '\0';
            acStack_9c0[8] = '\0';
            acStack_9c0[9] = '\0';
            acStack_9c0[10] = '\0';
            acStack_9c0[0xb] = '\0';
            acStack_9c0[0xc] = '\0';
            acStack_9c0[0xd] = '\0';
            acStack_9c0[0xe] = '\0';
            acStack_9c0[0xf] = '\0';
            acStack_9c0[0x10] = '\0';
            acStack_9c0[0x11] = '\0';
            acStack_9c0[0x12] = '\0';
            acStack_9c0[0x13] = '\0';
            acStack_9c0[0x14] = '\0';
            acStack_9c0[0x15] = '\0';
            acStack_9c0[0x16] = '\0';
            acStack_9c0[0x17] = '\0';
            func_0x000107c27984(acStack_9c0,acStack_9a0,&lStack_958,3);
            pcVar1 = "\x02";
            (**(code **)(*plVar18 + 0x18))(plVar18);
            puStack_9a8 = acStack_9c0;
            func_0x000107c278ac(&puStack_9a8);
            lVar17 = 0;
            pcVar7 = pcVar15;
            pcVar2 = pcVar13;
            do {
              if ((&cStack_959)[lVar17] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_970 + lVar17));
              }
              lVar17 = lVar17 + -0x18;
              pcVar19 = acStack_9c0;
            } while (lVar17 != -0x48);
          }
          _objc_release(pcVar12);
          _objc_release(pcVar4);
          pcVar9 = pcVar6;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_958) {
            ___stack_chk_fail();
            _objc_release(pcVar12);
            pcStack_9f8 = acStack_9a0;
            do {
              pcVar19 = pcVar19 + -0x18;
            } while (pcVar19 != pcStack_9f8);
            _objc_release(pcVar12);
            _objc_release(pcVar4);
            _objc_release(pcVar6);
            pcVar11 = pcVar9;
            __Unwind_Resume();
            pcVar15 = acStack_a80;
            pcStack_9c8 = FUN_10b29a088;
            lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcVar3 = pcVar1;
            pcVar10 = pcVar7;
            pcVar5 = pcVar2;
            pcVar13 = pcVar16;
            pcStack_a10 = acStack_6a0;
            pcStack_a08 = pcVar8;
            pcStack_a00 = pcVar19;
            pcStack_9f0 = pcVar9;
            pcStack_9e8 = pcVar12;
            pcStack_9e0 = pcVar4;
            pcStack_9d8 = pcVar6;
            pppuStack_9d0 = &pppuStack_910;
            _objc_retain(pcVar1);
            _objc_retain(pcVar7);
            _objc_retain(pcVar2);
            if (pcVar11 != (char *)0x0) {
              plVar18 = *(long **)(pcVar11 + 8);
              _objc_retain(pcVar1);
              if (pcVar1 == (char *)0x0) {
                pcVar19 = "";
              }
              else {
                pcVar19 = pcVar1;
                _objc_retainAutorelease(pcVar1);
                func_0x00010bdc3520();
              }
              _objc_release(pcVar1);
              func_0x000107c278b8(acStack_a60,pcVar19);
              _objc_retain(pcVar7);
              if (pcVar7 == (char *)0x0) {
                pcVar19 = "";
              }
              else {
                _objc_retainAutorelease(pcVar7);
                pcVar19 = pcVar7;
                func_0x00010bdc3520(pcVar7);
              }
              _objc_release(pcVar7);
              func_0x000107c278b8(auStack_a48,pcVar19);
              _objc_retain(pcVar2);
              if (pcVar2 == (char *)0x0) {
                pcVar8 = "";
              }
              else {
                _objc_retainAutorelease(pcVar2);
                pcVar8 = pcVar2;
                func_0x00010bdc3520();
              }
              _objc_release(pcVar2);
              func_0x000107c278b8(auStack_a30,pcVar8);
              acStack_a80[0] = '\0';
              acStack_a80[1] = '\0';
              acStack_a80[2] = '\0';
              acStack_a80[3] = '\0';
              acStack_a80[4] = '\0';
              acStack_a80[5] = '\0';
              acStack_a80[6] = '\0';
              acStack_a80[7] = '\0';
              acStack_a80[8] = '\0';
              acStack_a80[9] = '\0';
              acStack_a80[10] = '\0';
              acStack_a80[0xb] = '\0';
              acStack_a80[0xc] = '\0';
              acStack_a80[0xd] = '\0';
              acStack_a80[0xe] = '\0';
              acStack_a80[0xf] = '\0';
              acStack_a80[0x10] = '\0';
              acStack_a80[0x11] = '\0';
              acStack_a80[0x12] = '\0';
              acStack_a80[0x13] = '\0';
              acStack_a80[0x14] = '\0';
              acStack_a80[0x15] = '\0';
              acStack_a80[0x16] = '\0';
              acStack_a80[0x17] = '\0';
              func_0x000107c27984(acStack_a80,acStack_a60,&lStack_a18,3);
              pcVar3 = "\x01";
              (**(code **)(*plVar18 + 0x18))(plVar18);
              puStack_a68 = acStack_a80;
              func_0x000107c278ac(&puStack_a68);
              lVar17 = 0;
              pcVar10 = pcVar15;
              pcVar5 = pcVar16;
              do {
                if ((&cStack_a19)[lVar17] < '\0') {
                  __ZdlPv(*(undefined8 *)((long)auStack_a30 + lVar17));
                }
                lVar17 = lVar17 + -0x18;
                pcVar19 = acStack_a80;
              } while (lVar17 != -0x48);
            }
            _objc_release(pcVar2);
            _objc_release(pcVar7);
            pcVar9 = pcVar1;
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a18) {
              ___stack_chk_fail();
              _objc_release(pcVar2);
              pcStack_ab8 = acStack_a60;
              do {
                pcVar19 = pcVar19 + -0x18;
              } while (pcVar19 != pcStack_ab8);
              _objc_release(pcVar2);
              _objc_release(pcVar7);
              _objc_release(pcVar1);
              pcVar6 = pcVar9;
              __Unwind_Resume();
              pcVar12 = acStack_b40;
              pcStack_a88 = FUN_10b29a348;
              lStack_ad8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              pcVar4 = pcVar10;
              pcStack_ad0 = acStack_6a0;
              pcStack_ac8 = pcVar8;
              pcStack_ac0 = pcVar19;
              pcStack_ab0 = pcVar9;
              pcStack_aa8 = pcVar2;
              pcStack_aa0 = pcVar7;
              pcStack_a98 = pcVar1;
              pppuStack_a90 = &pppuStack_9d0;
              _objc_retain(pcVar3);
              _objc_retain(pcVar10);
              _objc_retain(pcVar5);
              if (pcVar6 != (char *)0x0) {
                plVar18 = *(long **)(pcVar6 + 8);
                _objc_retain(pcVar3);
                if (pcVar3 == (char *)0x0) {
                  pcVar19 = "";
                }
                else {
                  pcVar19 = pcVar3;
                  _objc_retainAutorelease(pcVar3);
                  func_0x00010bdc3520();
                }
                _objc_release(pcVar3);
                func_0x000107c278b8(acStack_b20,pcVar19);
                _objc_retain(pcVar10);
                if (pcVar10 == (char *)0x0) {
                  pcVar19 = "";
                }
                else {
                  _objc_retainAutorelease(pcVar10);
                  pcVar19 = pcVar10;
                  func_0x00010bdc3520(pcVar10);
                }
                _objc_release(pcVar10);
                func_0x000107c278b8(auStack_b08,pcVar19);
                _objc_retain(pcVar5);
                if (pcVar5 == (char *)0x0) {
                  pcVar19 = "";
                }
                else {
                  _objc_retainAutorelease(pcVar5);
                  pcVar19 = pcVar5;
                  func_0x00010bdc3520(pcVar5);
                }
                _objc_release(pcVar5);
                func_0x000107c278b8(auStack_af0,pcVar19);
                acStack_b40[0] = '\0';
                acStack_b40[1] = '\0';
                acStack_b40[2] = '\0';
                acStack_b40[3] = '\0';
                acStack_b40[4] = '\0';
                acStack_b40[5] = '\0';
                acStack_b40[6] = '\0';
                acStack_b40[7] = '\0';
                acStack_b40[8] = '\0';
                acStack_b40[9] = '\0';
                acStack_b40[10] = '\0';
                acStack_b40[0xb] = '\0';
                acStack_b40[0xc] = '\0';
                acStack_b40[0xd] = '\0';
                acStack_b40[0xe] = '\0';
                acStack_b40[0xf] = '\0';
                acStack_b40[0x10] = '\0';
                acStack_b40[0x11] = '\0';
                acStack_b40[0x12] = '\0';
                acStack_b40[0x13] = '\0';
                acStack_b40[0x14] = '\0';
                acStack_b40[0x15] = '\0';
                acStack_b40[0x16] = '\0';
                acStack_b40[0x17] = '\0';
                func_0x000107c27984(acStack_b40,acStack_b20,&lStack_ad8,3);
                (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_b40,pcVar13);
                puStack_b28 = acStack_b40;
                func_0x000107c278ac(&puStack_b28);
                lVar17 = 0;
                pcVar4 = pcVar12;
                do {
                  if ((&cStack_ad9)[lVar17] < '\0') {
                    __ZdlPv(*(undefined8 *)((long)auStack_af0 + lVar17));
                  }
                  lVar17 = lVar17 + -0x18;
                  pcVar19 = acStack_b40;
                } while (lVar17 != -0x48);
              }
              _objc_release(pcVar5);
              _objc_release(pcVar10);
              pcVar9 = pcVar3;
              _objc_release(pcVar3);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_ad8) {
                ___stack_chk_fail();
                _objc_release(pcVar5);
                do {
                  pcVar19 = pcVar19 + -0x18;
                } while (pcVar19 != acStack_b20);
                _objc_release(pcVar5);
                _objc_release(pcVar10);
                _objc_release(pcVar3);
                __Unwind_Resume(pcVar9);
                if ((long)pcVar4 < 1) {
                  if (pcVar4 == (char *)0xffffffffffffffff) {
                    func_0x00010c14cea0(pcVar9);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else if (pcVar4 == (char *)0x0) {
                    _objc_retain(pcVar9);
                  }
                }
                else if (pcVar4 == (char *)0x1) {
                  func_0x00010c14ce80(pcVar9);
                  _objc_retainAutoreleasedReturnValue();
                }
                else if (pcVar4 == (char *)0x9) {
                  func_0x00010c14ce60(pcVar9);
                  _objc_retainAutoreleasedReturnValue();
                }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar9);
                return;
              }
              return;
            }
            return;
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b297f88; end: 10b2982bb;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b2985b0) */
/* WARNING: Removing unreachable block (ram,0x00010b29827c) */
/* WARNING: Removing unreachable block (ram,0x00010b298878) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b297f88(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_a80 [24];
  undefined1 *puStack_a68;
  char acStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined8 auStack_a30 [2];
  char cStack_a19;
  long lStack_a18;
  char *pcStack_a10;
  char *pcStack_a08;
  char *pcStack_a00;
  char *pcStack_9f8;
  char *pcStack_9f0;
  char *pcStack_9e8;
  char *pcStack_9e0;
  char *pcStack_9d8;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  char acStack_9c0 [24];
  undefined1 *puStack_9a8;
  char acStack_9a0 [24];
  undefined1 auStack_988 [24];
  undefined8 auStack_970 [2];
  char cStack_959;
  long lStack_958;
  char *pcStack_950;
  char *pcStack_948;
  char *pcStack_940;
  char *pcStack_938;
  char *pcStack_930;
  char *pcStack_928;
  char *pcStack_920;
  char *pcStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  char acStack_900 [24];
  undefined1 *puStack_8e8;
  char acStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined8 auStack_8b0 [2];
  char cStack_899;
  long lStack_898;
  char *pcStack_890;
  char *pcStack_888;
  char *pcStack_880;
  char *pcStack_878;
  char *pcStack_870;
  char *pcStack_868;
  char *pcStack_860;
  char *pcStack_858;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  char acStack_840 [24];
  undefined1 *puStack_828;
  char acStack_820 [24];
  undefined1 auStack_808 [24];
  undefined8 auStack_7f0 [2];
  char cStack_7d9;
  long lStack_7d8;
  char *pcStack_7d0;
  char *pcStack_7c8;
  char *pcStack_7c0;
  char *pcStack_7b8;
  char *pcStack_7b0;
  char *pcStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  char acStack_780 [24];
  undefined1 *puStack_768;
  char acStack_760 [24];
  undefined1 auStack_748 [24];
  undefined8 auStack_730 [2];
  char cStack_719;
  long lStack_718;
  char *pcStack_710;
  char *pcStack_708;
  char *pcStack_700;
  char *pcStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  char acStack_6c0 [24];
  undefined1 *puStack_6a8;
  char acStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  char acStack_600 [24];
  undefined1 *puStack_5e8;
  char acStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  char acStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  char acStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  char acStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_2;
  pcVar4 = param_3;
  pcVar8 = param_4;
  pcVar5 = param_5;
  pcVar3 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar19);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar19 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar19);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar19 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar19);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar19 = "\x02";
    unaff_x25 = acStack_d8;
    pcVar4 = acStack_d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar17 = 0;
    pcVar8 = param_6;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b2982bc;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar19;
  pcVar6 = pcVar4;
  pcVar7 = pcVar8;
  pcVar12 = pcVar5;
  pcVar16 = pcVar3;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar1;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar19);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(acStack_198,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_180,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_168,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      unaff_x26 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_150,unaff_x26);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x000107c27984(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar9 = "\x02";
    unaff_x25 = acStack_1b8;
    pcVar6 = acStack_1b8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_1a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_1a0);
    lVar17 = 0;
    pcVar7 = pcVar3;
    do {
      if ((&cStack_139)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar3 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_198);
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  _objc_release(pcVar19);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_280;
  pcStack_1c8 = FUN_10b2985f0;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar10 = pcVar6;
  pcVar14 = pcVar7;
  pcVar15 = pcVar12;
  pcStack_210 = unaff_x26;
  pcStack_208 = unaff_x25;
  pcStack_200 = acStack_198;
  pcStack_1f8 = pcVar3;
  pcStack_1f0 = pcVar5;
  pcStack_1e8 = pcVar8;
  pcStack_1e0 = pcVar4;
  pcStack_1d8 = pcVar19;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  pcVar19 = acStack_198;
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(acStack_260,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar19 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_248,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      unaff_x25 = pcVar7;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_230,unaff_x25);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x000107c27984(acStack_280,acStack_260,&lStack_218,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_268 = acStack_280;
    func_0x000107c278ac(&puStack_268);
    lVar17 = 0;
    pcVar10 = pcVar11;
    pcVar14 = pcVar12;
    do {
      if ((&cStack_219)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_280;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar4 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  pcStack_2b8 = acStack_260;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_2b8);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_340;
  pcStack_288 = FUN_10b2988b0;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar3 = pcVar10;
  pcVar2 = pcVar14;
  pcVar12 = pcVar15;
  pcStack_2d0 = unaff_x26;
  pcStack_2c8 = unaff_x25;
  pcStack_2c0 = pcVar19;
  pcStack_2b0 = pcVar4;
  pcStack_2a8 = pcVar7;
  pcStack_2a0 = pcVar6;
  pcStack_298 = pcVar9;
  pppuStack_290 = &ppuStack_1d0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  _objc_retain(pcVar14);
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_320,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_308,pcVar19);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      unaff_x25 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_2f0,unaff_x25);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x000107c27984(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_328 = acStack_340;
    func_0x000107c278ac(&puStack_328);
    lVar17 = 0;
    pcVar3 = pcVar11;
    pcVar2 = pcVar15;
    do {
      if ((&cStack_2d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_340;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcStack_378 = acStack_320;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_378);
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  pcVar6 = pcVar4;
  __Unwind_Resume();
  pcStack_348 = FUN_10b298b70;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar8;
  pcVar9 = pcVar3;
  pcVar7 = pcVar2;
  pcVar15 = pcVar12;
  pcVar11 = pcVar16;
  pcStack_390 = unaff_x26;
  pcStack_388 = unaff_x25;
  pcStack_380 = pcVar19;
  pcStack_370 = pcVar4;
  pcStack_368 = pcVar14;
  pcStack_360 = pcVar10;
  pcStack_358 = pcVar1;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pcVar8);
  _objc_retain(pcVar3);
  _objc_retain(pcVar2);
  _objc_retain(pcVar12);
  if (pcVar6 != (char *)0x0) {
    plVar18 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_3f8,pcVar19);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar19 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_3e0,pcVar19);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar19 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_3c8,pcVar19);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x26 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_3b0,unaff_x26);
    acStack_418[0] = '\0';
    acStack_418[1] = '\0';
    acStack_418[2] = '\0';
    acStack_418[3] = '\0';
    acStack_418[4] = '\0';
    acStack_418[5] = '\0';
    acStack_418[6] = '\0';
    acStack_418[7] = '\0';
    acStack_418[8] = '\0';
    acStack_418[9] = '\0';
    acStack_418[10] = '\0';
    acStack_418[0xb] = '\0';
    acStack_418[0xc] = '\0';
    acStack_418[0xd] = '\0';
    acStack_418[0xe] = '\0';
    acStack_418[0xf] = '\0';
    acStack_418[0x10] = '\0';
    acStack_418[0x11] = '\0';
    acStack_418[0x12] = '\0';
    acStack_418[0x13] = '\0';
    acStack_418[0x14] = '\0';
    acStack_418[0x15] = '\0';
    acStack_418[0x16] = '\0';
    acStack_418[0x17] = '\0';
    func_0x000107c27984(acStack_418,acStack_3f8,&lStack_398,4);
    pcVar5 = "\x01";
    unaff_x25 = acStack_418;
    pcVar9 = acStack_418;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_400 = unaff_x25;
    func_0x000107c278ac(&pcStack_400);
    lVar17 = 0;
    pcVar7 = pcVar16;
    do {
      if ((&cStack_399)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar2);
  _objc_release(pcVar3);
  pcVar19 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcStack_460 = acStack_3f8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_460);
  _objc_release(pcVar12);
  _objc_release(pcVar2);
  _objc_release(pcVar3);
  _objc_release(pcVar8);
  pcVar6 = pcVar19;
  __Unwind_Resume();
  pcStack_428 = FUN_10b298ea4;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar5;
  pcVar1 = pcVar9;
  pcVar16 = pcVar7;
  pcVar10 = pcVar15;
  pcVar14 = pcVar11;
  pcStack_470 = unaff_x26;
  pcStack_468 = unaff_x25;
  pcStack_458 = pcVar19;
  pcStack_450 = pcVar12;
  pcStack_448 = pcVar2;
  pcStack_440 = pcVar3;
  pcStack_438 = pcVar8;
  pppuStack_430 = &pppuStack_350;
  _objc_retain(pcVar5);
  _objc_retain(pcVar9);
  _objc_retain(pcVar7);
  _objc_retain(pcVar15);
  if (pcVar6 != (char *)0x0) {
    plVar18 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(acStack_4d8,pcVar19);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar19 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_4c0,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_4a8,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar19 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_490,pcVar19);
    acStack_4f8[0] = '\0';
    acStack_4f8[1] = '\0';
    acStack_4f8[2] = '\0';
    acStack_4f8[3] = '\0';
    acStack_4f8[4] = '\0';
    acStack_4f8[5] = '\0';
    acStack_4f8[6] = '\0';
    acStack_4f8[7] = '\0';
    acStack_4f8[8] = '\0';
    acStack_4f8[9] = '\0';
    acStack_4f8[10] = '\0';
    acStack_4f8[0xb] = '\0';
    acStack_4f8[0xc] = '\0';
    acStack_4f8[0xd] = '\0';
    acStack_4f8[0xe] = '\0';
    acStack_4f8[0xf] = '\0';
    acStack_4f8[0x10] = '\0';
    acStack_4f8[0x11] = '\0';
    acStack_4f8[0x12] = '\0';
    acStack_4f8[0x13] = '\0';
    acStack_4f8[0x14] = '\0';
    acStack_4f8[0x15] = '\0';
    acStack_4f8[0x16] = '\0';
    acStack_4f8[0x17] = '\0';
    func_0x000107c27984(acStack_4f8,acStack_4d8,&lStack_478,4);
    pcVar4 = "\x01";
    unaff_x25 = acStack_4f8;
    pcVar1 = acStack_4f8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_4e0 = unaff_x25;
    func_0x000107c278ac(&pcStack_4e0);
    lVar17 = 0;
    pcVar16 = pcVar11;
    do {
      if ((&cStack_479)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar7);
  _objc_release(pcVar9);
  pcVar19 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_4d8);
    _objc_release(pcVar15);
    _objc_release(pcVar7);
    _objc_release(pcVar9);
    _objc_release(pcVar5);
    __Unwind_Resume();
    pcVar2 = acStack_600;
    pcStack_508 = FUN_10b2991d8;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar4;
    pcVar3 = pcVar1;
    pcVar9 = pcVar16;
    pcVar6 = pcVar10;
    pppuStack_510 = &pppuStack_430;
    _objc_retain(pcVar4);
    _objc_retain(pcVar1);
    _objc_retain(pcVar16);
    _objc_retain(pcVar10);
    _objc_retain(pcVar14);
    pcVar5 = (char *)0x0;
    if (pcVar19 != (char *)0x0) {
      plVar18 = *(long **)(pcVar19 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(acStack_5e0,pcVar19);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar19 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_5c8,pcVar19);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        pcVar19 = pcVar16;
        func_0x00010bdc3520(pcVar16);
      }
      _objc_release(pcVar16);
      func_0x000107c278b8(auStack_5b0,pcVar19);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar19 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_598,pcVar19);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        pcVar19 = pcVar14;
        func_0x00010bdc3520(pcVar14);
      }
      _objc_release(pcVar14);
      func_0x000107c278b8(auStack_580,pcVar19);
      acStack_600[0] = '\0';
      acStack_600[1] = '\0';
      acStack_600[2] = '\0';
      acStack_600[3] = '\0';
      acStack_600[4] = '\0';
      acStack_600[5] = '\0';
      acStack_600[6] = '\0';
      acStack_600[7] = '\0';
      acStack_600[8] = '\0';
      acStack_600[9] = '\0';
      acStack_600[10] = '\0';
      acStack_600[0xb] = '\0';
      acStack_600[0xc] = '\0';
      acStack_600[0xd] = '\0';
      acStack_600[0xe] = '\0';
      acStack_600[0xf] = '\0';
      acStack_600[0x10] = '\0';
      acStack_600[0x11] = '\0';
      acStack_600[0x12] = '\0';
      acStack_600[0x13] = '\0';
      acStack_600[0x14] = '\0';
      acStack_600[0x15] = '\0';
      acStack_600[0x16] = '\0';
      acStack_600[0x17] = '\0';
      func_0x000107c27984(acStack_600,acStack_5e0,&lStack_568,5);
      pcVar8 = "\x01";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_5e8 = acStack_600;
      func_0x000107c278ac(&puStack_5e8);
      lVar17 = 0;
      pcVar5 = acStack_5e0;
      pcVar3 = pcVar2;
      pcVar9 = param_7;
      do {
        if ((&cStack_569)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_580 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x78);
    }
    _objc_release(pcVar14);
    _objc_release(pcVar10);
    _objc_release(pcVar16);
    _objc_release(pcVar1);
    pcVar19 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar14);
    do {
      pcVar5 = pcVar5 + -0x18;
    } while (pcVar5 != acStack_5e0);
    _objc_release(pcVar14);
    _objc_release(pcVar10);
    _objc_release(pcVar16);
    _objc_release(pcVar1);
    _objc_release(pcVar4);
    pcVar7 = pcVar19;
    __Unwind_Resume();
    pcVar13 = acStack_6c0;
    pcStack_608 = FUN_10b299588;
    lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar8;
    pcVar12 = pcVar3;
    pcVar15 = pcVar9;
    pcVar11 = pcVar6;
    pcStack_650 = acStack_5e0;
    pcStack_648 = pcVar5;
    pcStack_640 = pcVar19;
    pcStack_638 = pcVar14;
    pcStack_630 = pcVar10;
    pcStack_628 = pcVar16;
    pcStack_620 = pcVar1;
    pcStack_618 = pcVar4;
    pppuStack_610 = &pppuStack_510;
    _objc_retain(pcVar8);
    _objc_retain(pcVar3);
    _objc_retain(pcVar9);
    if (pcVar7 != (char *)0x0) {
      plVar18 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_6a0,pcVar19);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar19 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(auStack_688,pcVar19);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar5 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_670,pcVar5);
      acStack_6c0[0] = '\0';
      acStack_6c0[1] = '\0';
      acStack_6c0[2] = '\0';
      acStack_6c0[3] = '\0';
      acStack_6c0[4] = '\0';
      acStack_6c0[5] = '\0';
      acStack_6c0[6] = '\0';
      acStack_6c0[7] = '\0';
      acStack_6c0[8] = '\0';
      acStack_6c0[9] = '\0';
      acStack_6c0[10] = '\0';
      acStack_6c0[0xb] = '\0';
      acStack_6c0[0xc] = '\0';
      acStack_6c0[0xd] = '\0';
      acStack_6c0[0xe] = '\0';
      acStack_6c0[0xf] = '\0';
      acStack_6c0[0x10] = '\0';
      acStack_6c0[0x11] = '\0';
      acStack_6c0[0x12] = '\0';
      acStack_6c0[0x13] = '\0';
      acStack_6c0[0x14] = '\0';
      acStack_6c0[0x15] = '\0';
      acStack_6c0[0x16] = '\0';
      acStack_6c0[0x17] = '\0';
      func_0x000107c27984(acStack_6c0,acStack_6a0,&lStack_658,3);
      pcVar2 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_6a8 = acStack_6c0;
      func_0x000107c278ac(&puStack_6a8);
      lVar17 = 0;
      pcVar12 = pcVar13;
      pcVar15 = pcVar6;
      do {
        if ((&cStack_659)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_670 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_6c0;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar3);
    pcVar4 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    pcStack_6f8 = acStack_6a0;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_6f8);
    _objc_release(pcVar9);
    _objc_release(pcVar3);
    _objc_release(pcVar8);
    pcVar6 = pcVar4;
    __Unwind_Resume();
    pcVar14 = acStack_780;
    pcStack_6c8 = FUN_10b299848;
    lStack_718 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar2;
    pcVar7 = pcVar12;
    pcVar16 = pcVar15;
    pcVar10 = pcVar11;
    pcStack_710 = acStack_5e0;
    pcStack_708 = pcVar5;
    pcStack_700 = pcVar19;
    pcStack_6f0 = pcVar4;
    pcStack_6e8 = pcVar9;
    pcStack_6e0 = pcVar3;
    pcStack_6d8 = pcVar8;
    pppuStack_6d0 = &pppuStack_610;
    _objc_retain(pcVar2);
    _objc_retain(pcVar12);
    _objc_retain(pcVar15);
    if (pcVar6 != (char *)0x0) {
      plVar18 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(acStack_760,pcVar19);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar19 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(auStack_748,pcVar19);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        pcVar5 = pcVar15;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      func_0x000107c278b8(auStack_730,pcVar5);
      acStack_780[0] = '\0';
      acStack_780[1] = '\0';
      acStack_780[2] = '\0';
      acStack_780[3] = '\0';
      acStack_780[4] = '\0';
      acStack_780[5] = '\0';
      acStack_780[6] = '\0';
      acStack_780[7] = '\0';
      acStack_780[8] = '\0';
      acStack_780[9] = '\0';
      acStack_780[10] = '\0';
      acStack_780[0xb] = '\0';
      acStack_780[0xc] = '\0';
      acStack_780[0xd] = '\0';
      acStack_780[0xe] = '\0';
      acStack_780[0xf] = '\0';
      acStack_780[0x10] = '\0';
      acStack_780[0x11] = '\0';
      acStack_780[0x12] = '\0';
      acStack_780[0x13] = '\0';
      acStack_780[0x14] = '\0';
      acStack_780[0x15] = '\0';
      acStack_780[0x16] = '\0';
      acStack_780[0x17] = '\0';
      func_0x000107c27984(acStack_780,acStack_760,&lStack_718,3);
      pcVar1 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_768 = acStack_780;
      func_0x000107c278ac(&puStack_768);
      lVar17 = 0;
      pcVar7 = pcVar14;
      pcVar16 = pcVar11;
      do {
        if ((&cStack_719)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_730 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_780;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar15);
    _objc_release(pcVar12);
    pcVar4 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_718) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_7b8 = acStack_760;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_7b8);
    _objc_release(pcVar15);
    _objc_release(pcVar12);
    _objc_release(pcVar2);
    pcVar3 = pcVar4;
    __Unwind_Resume();
    pcVar11 = acStack_840;
    pcStack_788 = FUN_10b299b08;
    lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar1;
    pcVar9 = pcVar7;
    pcVar6 = pcVar16;
    pcVar14 = pcVar10;
    pcStack_7d0 = acStack_5e0;
    pcStack_7c8 = pcVar5;
    pcStack_7c0 = pcVar19;
    pcStack_7b0 = pcVar4;
    pcStack_7a8 = pcVar15;
    pcStack_7a0 = pcVar12;
    pcStack_798 = pcVar2;
    pppuStack_790 = &pppuStack_6d0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar7);
    _objc_retain(pcVar16);
    if (pcVar3 != (char *)0x0) {
      plVar18 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(acStack_820,pcVar19);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar19 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_808,pcVar19);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar16);
        pcVar5 = pcVar16;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x000107c278b8(auStack_7f0,pcVar5);
      acStack_840[0] = '\0';
      acStack_840[1] = '\0';
      acStack_840[2] = '\0';
      acStack_840[3] = '\0';
      acStack_840[4] = '\0';
      acStack_840[5] = '\0';
      acStack_840[6] = '\0';
      acStack_840[7] = '\0';
      acStack_840[8] = '\0';
      acStack_840[9] = '\0';
      acStack_840[10] = '\0';
      acStack_840[0xb] = '\0';
      acStack_840[0xc] = '\0';
      acStack_840[0xd] = '\0';
      acStack_840[0xe] = '\0';
      acStack_840[0xf] = '\0';
      acStack_840[0x10] = '\0';
      acStack_840[0x11] = '\0';
      acStack_840[0x12] = '\0';
      acStack_840[0x13] = '\0';
      acStack_840[0x14] = '\0';
      acStack_840[0x15] = '\0';
      acStack_840[0x16] = '\0';
      acStack_840[0x17] = '\0';
      func_0x000107c27984(acStack_840,acStack_820,&lStack_7d8,3);
      pcVar8 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_828 = acStack_840;
      func_0x000107c278ac(&puStack_828);
      lVar17 = 0;
      pcVar9 = pcVar11;
      pcVar6 = pcVar10;
      do {
        if ((&cStack_7d9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7f0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_840;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar16);
    _objc_release(pcVar7);
    pcVar4 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar16);
    pcStack_878 = acStack_820;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_878);
    _objc_release(pcVar16);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar2 = pcVar4;
    __Unwind_Resume();
    pcVar11 = acStack_900;
    pcStack_848 = FUN_10b299dc8;
    lStack_898 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar8;
    pcVar12 = pcVar9;
    pcVar10 = pcVar6;
    pcVar15 = pcVar14;
    pcStack_890 = acStack_5e0;
    pcStack_888 = pcVar5;
    pcStack_880 = pcVar19;
    pcStack_870 = pcVar4;
    pcStack_868 = pcVar16;
    pcStack_860 = pcVar7;
    pcStack_858 = pcVar1;
    pppuStack_850 = &pppuStack_790;
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      plVar18 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_8e0,pcVar19);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar19 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_8c8,pcVar19);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar5 = pcVar6;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_8b0,pcVar5);
      acStack_900[0] = '\0';
      acStack_900[1] = '\0';
      acStack_900[2] = '\0';
      acStack_900[3] = '\0';
      acStack_900[4] = '\0';
      acStack_900[5] = '\0';
      acStack_900[6] = '\0';
      acStack_900[7] = '\0';
      acStack_900[8] = '\0';
      acStack_900[9] = '\0';
      acStack_900[10] = '\0';
      acStack_900[0xb] = '\0';
      acStack_900[0xc] = '\0';
      acStack_900[0xd] = '\0';
      acStack_900[0xe] = '\0';
      acStack_900[0xf] = '\0';
      acStack_900[0x10] = '\0';
      acStack_900[0x11] = '\0';
      acStack_900[0x12] = '\0';
      acStack_900[0x13] = '\0';
      acStack_900[0x14] = '\0';
      acStack_900[0x15] = '\0';
      acStack_900[0x16] = '\0';
      acStack_900[0x17] = '\0';
      func_0x000107c27984(acStack_900,acStack_8e0,&lStack_898,3);
      pcVar3 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_8e8 = acStack_900;
      func_0x000107c278ac(&puStack_8e8);
      lVar17 = 0;
      pcVar12 = pcVar11;
      pcVar10 = pcVar14;
      do {
        if ((&cStack_899)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_8b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_900;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar4 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_898) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      pcStack_938 = acStack_8e0;
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != pcStack_938);
      _objc_release(pcVar6);
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      pcVar2 = pcVar4;
      __Unwind_Resume();
      pcVar11 = acStack_9c0;
      pcStack_908 = FUN_10b29a088;
      lStack_958 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar3;
      pcVar7 = pcVar12;
      pcVar16 = pcVar10;
      pcVar14 = pcVar15;
      pcStack_950 = acStack_5e0;
      pcStack_948 = pcVar5;
      pcStack_940 = pcVar19;
      pcStack_930 = pcVar4;
      pcStack_928 = pcVar6;
      pcStack_920 = pcVar9;
      pcStack_918 = pcVar8;
      pppuStack_910 = &pppuStack_850;
      _objc_retain(pcVar3);
      _objc_retain(pcVar12);
      _objc_retain(pcVar10);
      if (pcVar2 != (char *)0x0) {
        plVar18 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x000107c278b8(acStack_9a0,pcVar19);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar19 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(auStack_988,pcVar19);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar5 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x000107c278b8(auStack_970,pcVar5);
        acStack_9c0[0] = '\0';
        acStack_9c0[1] = '\0';
        acStack_9c0[2] = '\0';
        acStack_9c0[3] = '\0';
        acStack_9c0[4] = '\0';
        acStack_9c0[5] = '\0';
        acStack_9c0[6] = '\0';
        acStack_9c0[7] = '\0';
        acStack_9c0[8] = '\0';
        acStack_9c0[9] = '\0';
        acStack_9c0[10] = '\0';
        acStack_9c0[0xb] = '\0';
        acStack_9c0[0xc] = '\0';
        acStack_9c0[0xd] = '\0';
        acStack_9c0[0xe] = '\0';
        acStack_9c0[0xf] = '\0';
        acStack_9c0[0x10] = '\0';
        acStack_9c0[0x11] = '\0';
        acStack_9c0[0x12] = '\0';
        acStack_9c0[0x13] = '\0';
        acStack_9c0[0x14] = '\0';
        acStack_9c0[0x15] = '\0';
        acStack_9c0[0x16] = '\0';
        acStack_9c0[0x17] = '\0';
        func_0x000107c27984(acStack_9c0,acStack_9a0,&lStack_958,3);
        pcVar1 = "\x01";
        (**(code **)(*plVar18 + 0x18))(plVar18);
        puStack_9a8 = acStack_9c0;
        func_0x000107c278ac(&puStack_9a8);
        lVar17 = 0;
        pcVar7 = pcVar11;
        pcVar16 = pcVar15;
        do {
          if ((&cStack_959)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_970 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_9c0;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar12);
      pcVar4 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_958) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar10);
      pcStack_9f8 = acStack_9a0;
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != pcStack_9f8);
      _objc_release(pcVar10);
      _objc_release(pcVar12);
      _objc_release(pcVar3);
      pcVar8 = pcVar4;
      __Unwind_Resume();
      pcVar6 = acStack_a80;
      pcStack_9c8 = FUN_10b29a348;
      lStack_a18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar7;
      pcStack_a10 = acStack_5e0;
      pcStack_a08 = pcVar5;
      pcStack_a00 = pcVar19;
      pcStack_9f0 = pcVar4;
      pcStack_9e8 = pcVar10;
      pcStack_9e0 = pcVar12;
      pcStack_9d8 = pcVar3;
      pppuStack_9d0 = &pppuStack_910;
      _objc_retain(pcVar1);
      _objc_retain(pcVar7);
      _objc_retain(pcVar16);
      if (pcVar8 != (char *)0x0) {
        plVar18 = *(long **)(pcVar8 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x000107c278b8(acStack_a60,pcVar19);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar19 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x000107c278b8(auStack_a48,pcVar19);
        _objc_retain(pcVar16);
        if (pcVar16 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar16);
          pcVar19 = pcVar16;
          func_0x00010bdc3520(pcVar16);
        }
        _objc_release(pcVar16);
        func_0x000107c278b8(auStack_a30,pcVar19);
        acStack_a80[0] = '\0';
        acStack_a80[1] = '\0';
        acStack_a80[2] = '\0';
        acStack_a80[3] = '\0';
        acStack_a80[4] = '\0';
        acStack_a80[5] = '\0';
        acStack_a80[6] = '\0';
        acStack_a80[7] = '\0';
        acStack_a80[8] = '\0';
        acStack_a80[9] = '\0';
        acStack_a80[10] = '\0';
        acStack_a80[0xb] = '\0';
        acStack_a80[0xc] = '\0';
        acStack_a80[0xd] = '\0';
        acStack_a80[0xe] = '\0';
        acStack_a80[0xf] = '\0';
        acStack_a80[0x10] = '\0';
        acStack_a80[0x11] = '\0';
        acStack_a80[0x12] = '\0';
        acStack_a80[0x13] = '\0';
        acStack_a80[0x14] = '\0';
        acStack_a80[0x15] = '\0';
        acStack_a80[0x16] = '\0';
        acStack_a80[0x17] = '\0';
        func_0x000107c27984(acStack_a80,acStack_a60,&lStack_a18,3);
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_a80,pcVar14);
        puStack_a68 = acStack_a80;
        func_0x000107c278ac(&puStack_a68);
        lVar17 = 0;
        pcVar9 = pcVar6;
        do {
          if ((&cStack_a19)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_a30 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_a80;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar16);
      _objc_release(pcVar7);
      pcVar4 = pcVar1;
      _objc_release(pcVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a18) {
        ___stack_chk_fail();
        _objc_release(pcVar16);
        do {
          pcVar19 = pcVar19 + -0x18;
        } while (pcVar19 != acStack_a60);
        _objc_release(pcVar16);
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        __Unwind_Resume(pcVar4);
        if ((long)pcVar9 < 1) {
          if (pcVar9 == (char *)0xffffffffffffffff) {
            func_0x00010c14cea0(pcVar4);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar9 == (char *)0x0) {
            _objc_retain(pcVar4);
          }
        }
        else if (pcVar9 == (char *)0x1) {
          func_0x00010c14ce80(pcVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar9 == (char *)0x9) {
          func_0x00010c14ce60(pcVar4);
          _objc_retainAutoreleasedReturnValue();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b2982bc; end: 10b2985ef;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b2985b0) */
/* WARNING: Removing unreachable block (ram,0x00010b298878) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b2982bc(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_9a0 [24];
  undefined1 *puStack_988;
  char acStack_980 [24];
  undefined1 auStack_968 [24];
  undefined8 auStack_950 [2];
  char cStack_939;
  long lStack_938;
  char *pcStack_930;
  char *pcStack_928;
  char *pcStack_920;
  char *pcStack_918;
  char *pcStack_910;
  char *pcStack_908;
  char *pcStack_900;
  char *pcStack_8f8;
  undefined8 ***pppuStack_8f0;
  code *pcStack_8e8;
  char acStack_8e0 [24];
  undefined1 *puStack_8c8;
  char acStack_8c0 [24];
  undefined1 auStack_8a8 [24];
  undefined8 auStack_890 [2];
  char cStack_879;
  long lStack_878;
  char *pcStack_870;
  char *pcStack_868;
  char *pcStack_860;
  char *pcStack_858;
  char *pcStack_850;
  char *pcStack_848;
  char *pcStack_840;
  char *pcStack_838;
  undefined8 ***pppuStack_830;
  code *pcStack_828;
  char acStack_820 [24];
  undefined1 *puStack_808;
  char acStack_800 [24];
  undefined1 auStack_7e8 [24];
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  char *pcStack_7b0;
  char *pcStack_7a8;
  char *pcStack_7a0;
  char *pcStack_798;
  char *pcStack_790;
  char *pcStack_788;
  char *pcStack_780;
  char *pcStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  char acStack_760 [24];
  undefined1 *puStack_748;
  char acStack_740 [24];
  undefined1 auStack_728 [24];
  undefined8 auStack_710 [2];
  char cStack_6f9;
  long lStack_6f8;
  char *pcStack_6f0;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  undefined8 ***pppuStack_6b0;
  code *pcStack_6a8;
  char acStack_6a0 [24];
  undefined1 *puStack_688;
  char acStack_680 [24];
  undefined1 auStack_668 [24];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  char acStack_5e0 [24];
  undefined1 *puStack_5c8;
  char acStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined8 auStack_590 [2];
  char cStack_579;
  long lStack_578;
  char *pcStack_570;
  char *pcStack_568;
  char *pcStack_560;
  char *pcStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  char acStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  char acStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  char acStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  char acStack_260 [24];
  undefined1 *puStack_248;
  char acStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  char acStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_2;
  pcVar8 = param_3;
  pcVar6 = param_4;
  pcVar3 = param_5;
  pcVar11 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar19);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar19 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar19);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar19 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar19);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar19 = "\x02";
    unaff_x25 = acStack_d8;
    pcVar8 = acStack_d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar17 = 0;
    pcVar6 = param_6;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar4 = acStack_1a0;
  pcStack_e8 = FUN_10b2985f0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar19;
  pcVar10 = pcVar8;
  pcVar15 = pcVar6;
  pcVar9 = pcVar3;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_120 = acStack_b8;
  pcStack_118 = pcVar1;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar19);
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  pcVar1 = acStack_b8;
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(acStack_180,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_168,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      unaff_x25 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_150,unaff_x25);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x000107c27984(acStack_1a0,acStack_180,&lStack_138,3);
    pcVar7 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_188 = acStack_1a0;
    func_0x000107c278ac(&puStack_188);
    lVar17 = 0;
    pcVar10 = pcVar4;
    pcVar15 = pcVar3;
    do {
      if ((&cStack_139)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar1 = acStack_1a0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  pcVar3 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_1d8 = acStack_180;
  do {
    pcVar1 = pcVar1 + -0x18;
  } while (pcVar1 != pcStack_1d8);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  _objc_release(pcVar19);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar12 = acStack_260;
  pcStack_1a8 = FUN_10b2988b0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar5 = pcVar10;
  pcVar13 = pcVar15;
  pcVar16 = pcVar9;
  pcStack_1f0 = unaff_x26;
  pcStack_1e8 = unaff_x25;
  pcStack_1e0 = pcVar1;
  pcStack_1d0 = pcVar3;
  pcStack_1c8 = pcVar6;
  pcStack_1c0 = pcVar8;
  pcStack_1b8 = pcVar19;
  ppuStack_1b0 = &puStack_f0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  _objc_retain(pcVar15);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(acStack_240,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_228,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      unaff_x25 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_210,unaff_x25);
    acStack_260[0] = '\0';
    acStack_260[1] = '\0';
    acStack_260[2] = '\0';
    acStack_260[3] = '\0';
    acStack_260[4] = '\0';
    acStack_260[5] = '\0';
    acStack_260[6] = '\0';
    acStack_260[7] = '\0';
    acStack_260[8] = '\0';
    acStack_260[9] = '\0';
    acStack_260[10] = '\0';
    acStack_260[0xb] = '\0';
    acStack_260[0xc] = '\0';
    acStack_260[0xd] = '\0';
    acStack_260[0xe] = '\0';
    acStack_260[0xf] = '\0';
    acStack_260[0x10] = '\0';
    acStack_260[0x11] = '\0';
    acStack_260[0x12] = '\0';
    acStack_260[0x13] = '\0';
    acStack_260[0x14] = '\0';
    acStack_260[0x15] = '\0';
    acStack_260[0x16] = '\0';
    acStack_260[0x17] = '\0';
    func_0x000107c27984(acStack_260,acStack_240,&lStack_1f8,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_248 = acStack_260;
    func_0x000107c278ac(&puStack_248);
    lVar17 = 0;
    pcVar5 = pcVar12;
    pcVar13 = pcVar9;
    do {
      if ((&cStack_1f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar1 = acStack_260;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  pcVar19 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  pcStack_298 = acStack_240;
  do {
    pcVar1 = pcVar1 + -0x18;
  } while (pcVar1 != pcStack_298);
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar19;
  __Unwind_Resume();
  pcStack_268 = FUN_10b298b70;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar2;
  pcVar6 = pcVar5;
  pcVar9 = pcVar13;
  pcVar4 = pcVar16;
  pcVar12 = pcVar11;
  pcStack_2b0 = unaff_x26;
  pcStack_2a8 = unaff_x25;
  pcStack_2a0 = pcVar1;
  pcStack_290 = pcVar19;
  pcStack_288 = pcVar15;
  pcStack_280 = pcVar10;
  pcStack_278 = pcVar7;
  pppuStack_270 = &ppuStack_1b0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  _objc_retain(pcVar13);
  _objc_retain(pcVar16);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(acStack_318,pcVar19);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar19 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_300,pcVar19);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar19 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_2e8,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      unaff_x26 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_2d0,unaff_x26);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x000107c27984(acStack_338,acStack_318,&lStack_2b8,4);
    pcVar8 = "\x01";
    unaff_x25 = acStack_338;
    pcVar6 = acStack_338;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_320 = unaff_x25;
    func_0x000107c278ac(&pcStack_320);
    lVar17 = 0;
    pcVar9 = pcVar11;
    do {
      if ((&cStack_2b9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar5);
  pcVar19 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_380 = acStack_318;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_380);
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar1 = pcVar19;
  __Unwind_Resume();
  pcStack_348 = FUN_10b298ea4;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar11 = pcVar6;
  pcVar7 = pcVar9;
  pcVar10 = pcVar4;
  pcVar15 = pcVar12;
  pcStack_390 = unaff_x26;
  pcStack_388 = unaff_x25;
  pcStack_378 = pcVar19;
  pcStack_370 = pcVar16;
  pcStack_368 = pcVar13;
  pcStack_360 = pcVar5;
  pcStack_358 = pcVar2;
  pppuStack_350 = &pppuStack_270;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  _objc_retain(pcVar4);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_3f8,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar19 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_3e0,pcVar19);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar19 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_3c8,pcVar19);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar19 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_3b0,pcVar19);
    acStack_418[0] = '\0';
    acStack_418[1] = '\0';
    acStack_418[2] = '\0';
    acStack_418[3] = '\0';
    acStack_418[4] = '\0';
    acStack_418[5] = '\0';
    acStack_418[6] = '\0';
    acStack_418[7] = '\0';
    acStack_418[8] = '\0';
    acStack_418[9] = '\0';
    acStack_418[10] = '\0';
    acStack_418[0xb] = '\0';
    acStack_418[0xc] = '\0';
    acStack_418[0xd] = '\0';
    acStack_418[0xe] = '\0';
    acStack_418[0xf] = '\0';
    acStack_418[0x10] = '\0';
    acStack_418[0x11] = '\0';
    acStack_418[0x12] = '\0';
    acStack_418[0x13] = '\0';
    acStack_418[0x14] = '\0';
    acStack_418[0x15] = '\0';
    acStack_418[0x16] = '\0';
    acStack_418[0x17] = '\0';
    func_0x000107c27984(acStack_418,acStack_3f8,&lStack_398,4);
    pcVar3 = "\x01";
    unaff_x25 = acStack_418;
    pcVar11 = acStack_418;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_400 = unaff_x25;
    func_0x000107c278ac(&pcStack_400);
    lVar17 = 0;
    pcVar7 = pcVar12;
    do {
      if ((&cStack_399)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar19 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_3f8);
  _objc_release(pcVar4);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcVar4 = acStack_520;
  pcStack_428 = FUN_10b2991d8;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar1 = pcVar11;
  pcVar2 = pcVar7;
  pcVar9 = pcVar10;
  pppuStack_430 = &pppuStack_350;
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  _objc_retain(pcVar15);
  pcVar6 = (char *)0x0;
  if (pcVar19 != (char *)0x0) {
    plVar18 = *(long **)(pcVar19 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(acStack_500,pcVar19);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar19 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_4e8,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_4d0,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_4b8,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar19 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_4a0,pcVar19);
    acStack_520[0] = '\0';
    acStack_520[1] = '\0';
    acStack_520[2] = '\0';
    acStack_520[3] = '\0';
    acStack_520[4] = '\0';
    acStack_520[5] = '\0';
    acStack_520[6] = '\0';
    acStack_520[7] = '\0';
    acStack_520[8] = '\0';
    acStack_520[9] = '\0';
    acStack_520[10] = '\0';
    acStack_520[0xb] = '\0';
    acStack_520[0xc] = '\0';
    acStack_520[0xd] = '\0';
    acStack_520[0xe] = '\0';
    acStack_520[0xf] = '\0';
    acStack_520[0x10] = '\0';
    acStack_520[0x11] = '\0';
    acStack_520[0x12] = '\0';
    acStack_520[0x13] = '\0';
    acStack_520[0x14] = '\0';
    acStack_520[0x15] = '\0';
    acStack_520[0x16] = '\0';
    acStack_520[0x17] = '\0';
    func_0x000107c27984(acStack_520,acStack_500,&lStack_488,5);
    pcVar8 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_508 = acStack_520;
    func_0x000107c278ac(&puStack_508);
    lVar17 = 0;
    pcVar6 = acStack_500;
    pcVar1 = pcVar4;
    pcVar2 = param_7;
    do {
      if ((&cStack_489)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x78);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar11);
  pcVar19 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  do {
    pcVar6 = pcVar6 + -0x18;
  } while (pcVar6 != acStack_500);
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar5 = pcVar19;
  __Unwind_Resume();
  pcVar14 = acStack_5e0;
  pcStack_528 = FUN_10b299588;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar8;
  pcVar13 = pcVar1;
  pcVar16 = pcVar2;
  pcVar12 = pcVar9;
  pcStack_570 = acStack_500;
  pcStack_568 = pcVar6;
  pcStack_560 = pcVar19;
  pcStack_558 = pcVar15;
  pcStack_550 = pcVar10;
  pcStack_548 = pcVar7;
  pcStack_540 = pcVar11;
  pcStack_538 = pcVar3;
  pppuStack_530 = &pppuStack_430;
  _objc_retain(pcVar8);
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_5c0,pcVar19);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar19 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_5a8,pcVar19);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar6 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_590,pcVar6);
    acStack_5e0[0] = '\0';
    acStack_5e0[1] = '\0';
    acStack_5e0[2] = '\0';
    acStack_5e0[3] = '\0';
    acStack_5e0[4] = '\0';
    acStack_5e0[5] = '\0';
    acStack_5e0[6] = '\0';
    acStack_5e0[7] = '\0';
    acStack_5e0[8] = '\0';
    acStack_5e0[9] = '\0';
    acStack_5e0[10] = '\0';
    acStack_5e0[0xb] = '\0';
    acStack_5e0[0xc] = '\0';
    acStack_5e0[0xd] = '\0';
    acStack_5e0[0xe] = '\0';
    acStack_5e0[0xf] = '\0';
    acStack_5e0[0x10] = '\0';
    acStack_5e0[0x11] = '\0';
    acStack_5e0[0x12] = '\0';
    acStack_5e0[0x13] = '\0';
    acStack_5e0[0x14] = '\0';
    acStack_5e0[0x15] = '\0';
    acStack_5e0[0x16] = '\0';
    acStack_5e0[0x17] = '\0';
    func_0x000107c27984(acStack_5e0,acStack_5c0,&lStack_578,3);
    pcVar4 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_5c8 = acStack_5e0;
    func_0x000107c278ac(&puStack_5c8);
    lVar17 = 0;
    pcVar13 = pcVar14;
    pcVar16 = pcVar9;
    do {
      if ((&cStack_579)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_590 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_5e0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  pcStack_618 = acStack_5c0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_618);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  _objc_release(pcVar8);
  pcVar7 = pcVar3;
  __Unwind_Resume();
  pcVar5 = acStack_6a0;
  pcStack_5e8 = FUN_10b299848;
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar4;
  pcVar10 = pcVar13;
  pcVar15 = pcVar16;
  pcVar9 = pcVar12;
  pcStack_630 = acStack_500;
  pcStack_628 = pcVar6;
  pcStack_620 = pcVar19;
  pcStack_610 = pcVar3;
  pcStack_608 = pcVar2;
  pcStack_600 = pcVar1;
  pcStack_5f8 = pcVar8;
  pppuStack_5f0 = &pppuStack_530;
  _objc_retain(pcVar4);
  _objc_retain(pcVar13);
  _objc_retain(pcVar16);
  if (pcVar7 != (char *)0x0) {
    plVar18 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(acStack_680,pcVar19);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar19 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_668,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar6 = pcVar16;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_650,pcVar6);
    acStack_6a0[0] = '\0';
    acStack_6a0[1] = '\0';
    acStack_6a0[2] = '\0';
    acStack_6a0[3] = '\0';
    acStack_6a0[4] = '\0';
    acStack_6a0[5] = '\0';
    acStack_6a0[6] = '\0';
    acStack_6a0[7] = '\0';
    acStack_6a0[8] = '\0';
    acStack_6a0[9] = '\0';
    acStack_6a0[10] = '\0';
    acStack_6a0[0xb] = '\0';
    acStack_6a0[0xc] = '\0';
    acStack_6a0[0xd] = '\0';
    acStack_6a0[0xe] = '\0';
    acStack_6a0[0xf] = '\0';
    acStack_6a0[0x10] = '\0';
    acStack_6a0[0x11] = '\0';
    acStack_6a0[0x12] = '\0';
    acStack_6a0[0x13] = '\0';
    acStack_6a0[0x14] = '\0';
    acStack_6a0[0x15] = '\0';
    acStack_6a0[0x16] = '\0';
    acStack_6a0[0x17] = '\0';
    func_0x000107c27984(acStack_6a0,acStack_680,&lStack_638,3);
    pcVar11 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_688 = acStack_6a0;
    func_0x000107c278ac(&puStack_688);
    lVar17 = 0;
    pcVar10 = pcVar5;
    pcVar15 = pcVar12;
    do {
      if ((&cStack_639)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_650 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_6a0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  pcVar8 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar16);
  pcStack_6d8 = acStack_680;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_6d8);
  _objc_release(pcVar16);
  _objc_release(pcVar13);
  _objc_release(pcVar4);
  pcVar1 = pcVar8;
  __Unwind_Resume();
  pcVar12 = acStack_760;
  pcStack_6a8 = FUN_10b299b08;
  lStack_6f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar11;
  pcVar7 = pcVar10;
  pcVar2 = pcVar15;
  pcVar5 = pcVar9;
  pcStack_6f0 = acStack_500;
  pcStack_6e8 = pcVar6;
  pcStack_6e0 = pcVar19;
  pcStack_6d0 = pcVar8;
  pcStack_6c8 = pcVar16;
  pcStack_6c0 = pcVar13;
  pcStack_6b8 = pcVar4;
  pppuStack_6b0 = &pppuStack_5f0;
  _objc_retain(pcVar11);
  _objc_retain(pcVar10);
  _objc_retain(pcVar15);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(acStack_740,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_728,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar6 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_710,pcVar6);
    acStack_760[0] = '\0';
    acStack_760[1] = '\0';
    acStack_760[2] = '\0';
    acStack_760[3] = '\0';
    acStack_760[4] = '\0';
    acStack_760[5] = '\0';
    acStack_760[6] = '\0';
    acStack_760[7] = '\0';
    acStack_760[8] = '\0';
    acStack_760[9] = '\0';
    acStack_760[10] = '\0';
    acStack_760[0xb] = '\0';
    acStack_760[0xc] = '\0';
    acStack_760[0xd] = '\0';
    acStack_760[0xe] = '\0';
    acStack_760[0xf] = '\0';
    acStack_760[0x10] = '\0';
    acStack_760[0x11] = '\0';
    acStack_760[0x12] = '\0';
    acStack_760[0x13] = '\0';
    acStack_760[0x14] = '\0';
    acStack_760[0x15] = '\0';
    acStack_760[0x16] = '\0';
    acStack_760[0x17] = '\0';
    func_0x000107c27984(acStack_760,acStack_740,&lStack_6f8,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_748 = acStack_760;
    func_0x000107c278ac(&puStack_748);
    lVar17 = 0;
    pcVar7 = pcVar12;
    pcVar2 = pcVar9;
    do {
      if ((&cStack_6f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_710 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_760;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  pcVar8 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  pcStack_798 = acStack_740;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_798);
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  _objc_release(pcVar11);
  pcVar9 = pcVar8;
  __Unwind_Resume();
  pcVar12 = acStack_820;
  pcStack_768 = FUN_10b299dc8;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  pcVar4 = pcVar7;
  pcVar13 = pcVar2;
  pcVar16 = pcVar5;
  pcStack_7b0 = acStack_500;
  pcStack_7a8 = pcVar6;
  pcStack_7a0 = pcVar19;
  pcStack_790 = pcVar8;
  pcStack_788 = pcVar15;
  pcStack_780 = pcVar10;
  pcStack_778 = pcVar11;
  pppuStack_770 = &pppuStack_6b0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  _objc_retain(pcVar2);
  if (pcVar9 != (char *)0x0) {
    plVar18 = *(long **)(pcVar9 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(acStack_800,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_7e8,pcVar19);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar6 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_7d0,pcVar6);
    acStack_820[0] = '\0';
    acStack_820[1] = '\0';
    acStack_820[2] = '\0';
    acStack_820[3] = '\0';
    acStack_820[4] = '\0';
    acStack_820[5] = '\0';
    acStack_820[6] = '\0';
    acStack_820[7] = '\0';
    acStack_820[8] = '\0';
    acStack_820[9] = '\0';
    acStack_820[10] = '\0';
    acStack_820[0xb] = '\0';
    acStack_820[0xc] = '\0';
    acStack_820[0xd] = '\0';
    acStack_820[0xe] = '\0';
    acStack_820[0xf] = '\0';
    acStack_820[0x10] = '\0';
    acStack_820[0x11] = '\0';
    acStack_820[0x12] = '\0';
    acStack_820[0x13] = '\0';
    acStack_820[0x14] = '\0';
    acStack_820[0x15] = '\0';
    acStack_820[0x16] = '\0';
    acStack_820[0x17] = '\0';
    func_0x000107c27984(acStack_820,acStack_800,&lStack_7b8,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_808 = acStack_820;
    func_0x000107c278ac(&puStack_808);
    lVar17 = 0;
    pcVar4 = pcVar12;
    pcVar13 = pcVar5;
    do {
      if ((&cStack_7b9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_7d0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_820;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar7);
  pcVar8 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  pcStack_858 = acStack_800;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_858);
  _objc_release(pcVar2);
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  pcVar10 = pcVar8;
  __Unwind_Resume();
  pcVar12 = acStack_8e0;
  pcStack_828 = FUN_10b29a088;
  lStack_878 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar1;
  pcVar15 = pcVar4;
  pcVar9 = pcVar13;
  pcVar5 = pcVar16;
  pcStack_870 = acStack_500;
  pcStack_868 = pcVar6;
  pcStack_860 = pcVar19;
  pcStack_850 = pcVar8;
  pcStack_848 = pcVar2;
  pcStack_840 = pcVar7;
  pcStack_838 = pcVar3;
  pppuStack_830 = &pppuStack_770;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar13);
  if (pcVar10 != (char *)0x0) {
    plVar18 = *(long **)(pcVar10 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_8c0,pcVar19);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar19 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_8a8,pcVar19);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar6 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_890,pcVar6);
    acStack_8e0[0] = '\0';
    acStack_8e0[1] = '\0';
    acStack_8e0[2] = '\0';
    acStack_8e0[3] = '\0';
    acStack_8e0[4] = '\0';
    acStack_8e0[5] = '\0';
    acStack_8e0[6] = '\0';
    acStack_8e0[7] = '\0';
    acStack_8e0[8] = '\0';
    acStack_8e0[9] = '\0';
    acStack_8e0[10] = '\0';
    acStack_8e0[0xb] = '\0';
    acStack_8e0[0xc] = '\0';
    acStack_8e0[0xd] = '\0';
    acStack_8e0[0xe] = '\0';
    acStack_8e0[0xf] = '\0';
    acStack_8e0[0x10] = '\0';
    acStack_8e0[0x11] = '\0';
    acStack_8e0[0x12] = '\0';
    acStack_8e0[0x13] = '\0';
    acStack_8e0[0x14] = '\0';
    acStack_8e0[0x15] = '\0';
    acStack_8e0[0x16] = '\0';
    acStack_8e0[0x17] = '\0';
    func_0x000107c27984(acStack_8e0,acStack_8c0,&lStack_878,3);
    pcVar11 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_8c8 = acStack_8e0;
    func_0x000107c278ac(&puStack_8c8);
    lVar17 = 0;
    pcVar15 = pcVar12;
    pcVar9 = pcVar16;
    do {
      if ((&cStack_879)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_890 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_8e0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar4);
  pcVar8 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_878) {
    ___stack_chk_fail();
    _objc_release(pcVar13);
    pcStack_918 = acStack_8c0;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_918);
    _objc_release(pcVar13);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    pcVar3 = pcVar8;
    __Unwind_Resume();
    pcVar2 = acStack_9a0;
    pcStack_8e8 = FUN_10b29a348;
    lStack_938 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar15;
    pcStack_930 = acStack_500;
    pcStack_928 = pcVar6;
    pcStack_920 = pcVar19;
    pcStack_910 = pcVar8;
    pcStack_908 = pcVar13;
    pcStack_900 = pcVar4;
    pcStack_8f8 = pcVar1;
    pppuStack_8f0 = &pppuStack_830;
    _objc_retain(pcVar11);
    _objc_retain(pcVar15);
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      plVar18 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar11;
        _objc_retainAutorelease(pcVar11);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar11);
      func_0x000107c278b8(acStack_980,pcVar19);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        pcVar19 = pcVar15;
        func_0x00010bdc3520(pcVar15);
      }
      _objc_release(pcVar15);
      func_0x000107c278b8(auStack_968,pcVar19);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar19 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_950,pcVar19);
      acStack_9a0[0] = '\0';
      acStack_9a0[1] = '\0';
      acStack_9a0[2] = '\0';
      acStack_9a0[3] = '\0';
      acStack_9a0[4] = '\0';
      acStack_9a0[5] = '\0';
      acStack_9a0[6] = '\0';
      acStack_9a0[7] = '\0';
      acStack_9a0[8] = '\0';
      acStack_9a0[9] = '\0';
      acStack_9a0[10] = '\0';
      acStack_9a0[0xb] = '\0';
      acStack_9a0[0xc] = '\0';
      acStack_9a0[0xd] = '\0';
      acStack_9a0[0xe] = '\0';
      acStack_9a0[0xf] = '\0';
      acStack_9a0[0x10] = '\0';
      acStack_9a0[0x11] = '\0';
      acStack_9a0[0x12] = '\0';
      acStack_9a0[0x13] = '\0';
      acStack_9a0[0x14] = '\0';
      acStack_9a0[0x15] = '\0';
      acStack_9a0[0x16] = '\0';
      acStack_9a0[0x17] = '\0';
      func_0x000107c27984(acStack_9a0,acStack_980,&lStack_938,3);
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_9a0,pcVar5);
      puStack_988 = acStack_9a0;
      func_0x000107c278ac(&puStack_988);
      lVar17 = 0;
      pcVar7 = pcVar2;
      do {
        if ((&cStack_939)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_950 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_9a0;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar15);
    pcVar8 = pcVar11;
    _objc_release(pcVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_938) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != acStack_980);
      _objc_release(pcVar9);
      _objc_release(pcVar15);
      _objc_release(pcVar11);
      __Unwind_Resume(pcVar8);
      if ((long)pcVar7 < 1) {
        if (pcVar7 == (char *)0xffffffffffffffff) {
          func_0x00010c14cea0(pcVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar7 == (char *)0x0) {
          _objc_retain(pcVar8);
        }
      }
      else if (pcVar7 == (char *)0x1) {
        func_0x00010c14ce80(pcVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar7 == (char *)0x9) {
        func_0x00010c14ce60(pcVar8);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b2985f0; end: 10b2988af;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b298878) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b2985f0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x24;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_8c0 [24];
  undefined1 *puStack_8a8;
  char acStack_8a0 [24];
  undefined1 auStack_888 [24];
  undefined8 auStack_870 [2];
  char cStack_859;
  long lStack_858;
  char *pcStack_850;
  char *pcStack_848;
  char *pcStack_840;
  char *pcStack_838;
  char *pcStack_830;
  char *pcStack_828;
  char *pcStack_820;
  char *pcStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  char acStack_800 [24];
  undefined1 *puStack_7e8;
  char acStack_7e0 [24];
  undefined1 auStack_7c8 [24];
  undefined8 auStack_7b0 [2];
  char cStack_799;
  long lStack_798;
  char *pcStack_790;
  char *pcStack_788;
  char *pcStack_780;
  char *pcStack_778;
  char *pcStack_770;
  char *pcStack_768;
  char *pcStack_760;
  char *pcStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  char *pcStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  char acStack_660 [24];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  char acStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_338 [24];
  char *pcStack_320;
  char acStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  char acStack_258 [24];
  char *pcStack_240;
  char acStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar9 = param_4;
  pcVar19 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar17 = 0;
    pcVar5 = pcVar2;
    pcVar9 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar10 = acStack_180;
  pcStack_c8 = FUN_10b2988b0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar5;
  pcVar4 = pcVar9;
  pcVar12 = pcVar19;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      unaff_x25 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_130,unaff_x25);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar17 = 0;
    pcVar8 = pcVar10;
    pcVar4 = pcVar19;
    do {
      if ((&cStack_119)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  pcVar19 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_188 = FUN_10b298b70;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar5 = pcVar8;
  pcVar9 = pcVar4;
  pcVar2 = pcVar12;
  pcVar10 = param_6;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  _objc_retain(pcVar4);
  _objc_retain(pcVar12);
  if (pcVar19 != (char *)0x0) {
    plVar18 = *(long **)(pcVar19 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(acStack_238,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_220,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_208,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      unaff_x26 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_1f0,unaff_x26);
    acStack_258[0] = '\0';
    acStack_258[1] = '\0';
    acStack_258[2] = '\0';
    acStack_258[3] = '\0';
    acStack_258[4] = '\0';
    acStack_258[5] = '\0';
    acStack_258[6] = '\0';
    acStack_258[7] = '\0';
    acStack_258[8] = '\0';
    acStack_258[9] = '\0';
    acStack_258[10] = '\0';
    acStack_258[0xb] = '\0';
    acStack_258[0xc] = '\0';
    acStack_258[0xd] = '\0';
    acStack_258[0xe] = '\0';
    acStack_258[0xf] = '\0';
    acStack_258[0x10] = '\0';
    acStack_258[0x11] = '\0';
    acStack_258[0x12] = '\0';
    acStack_258[0x13] = '\0';
    acStack_258[0x14] = '\0';
    acStack_258[0x15] = '\0';
    acStack_258[0x16] = '\0';
    acStack_258[0x17] = '\0';
    func_0x000107c27984(acStack_258,acStack_238,&lStack_1d8,4);
    pcVar1 = "\x01";
    unaff_x25 = acStack_258;
    pcVar5 = acStack_258;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_240 = unaff_x25;
    func_0x000107c278ac(&pcStack_240);
    lVar17 = 0;
    pcVar9 = param_6;
    do {
      if ((&cStack_1d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar4);
  _objc_release(pcVar8);
  pcVar19 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcStack_2a0 = acStack_238;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_2a0);
  _objc_release(pcVar12);
  _objc_release(pcVar4);
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar3 = pcVar19;
  __Unwind_Resume();
  pcStack_268 = FUN_10b298ea4;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar11 = pcVar5;
  pcVar15 = pcVar9;
  pcVar16 = pcVar2;
  pcVar14 = pcVar10;
  pcStack_2b0 = unaff_x26;
  pcStack_2a8 = unaff_x25;
  pcStack_298 = pcVar19;
  pcStack_290 = pcVar12;
  pcStack_288 = pcVar4;
  pcStack_280 = pcVar8;
  pcStack_278 = pcVar6;
  pppuStack_270 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar9);
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_318,pcVar19);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar19 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_300,pcVar19);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar19 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_2e8,pcVar19);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar19 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_2d0,pcVar19);
    acStack_338[0] = '\0';
    acStack_338[1] = '\0';
    acStack_338[2] = '\0';
    acStack_338[3] = '\0';
    acStack_338[4] = '\0';
    acStack_338[5] = '\0';
    acStack_338[6] = '\0';
    acStack_338[7] = '\0';
    acStack_338[8] = '\0';
    acStack_338[9] = '\0';
    acStack_338[10] = '\0';
    acStack_338[0xb] = '\0';
    acStack_338[0xc] = '\0';
    acStack_338[0xd] = '\0';
    acStack_338[0xe] = '\0';
    acStack_338[0xf] = '\0';
    acStack_338[0x10] = '\0';
    acStack_338[0x11] = '\0';
    acStack_338[0x12] = '\0';
    acStack_338[0x13] = '\0';
    acStack_338[0x14] = '\0';
    acStack_338[0x15] = '\0';
    acStack_338[0x16] = '\0';
    acStack_338[0x17] = '\0';
    func_0x000107c27984(acStack_338,acStack_318,&lStack_2b8,4);
    pcVar7 = "\x01";
    unaff_x25 = acStack_338;
    pcVar11 = acStack_338;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_320 = unaff_x25;
    func_0x000107c278ac(&pcStack_320);
    lVar17 = 0;
    pcVar15 = pcVar10;
    do {
      if ((&cStack_2b9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  pcVar19 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_318);
  _objc_release(pcVar2);
  _objc_release(pcVar9);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar8 = acStack_440;
  pcStack_348 = FUN_10b2991d8;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar9 = pcVar11;
  pcVar2 = pcVar15;
  pcVar6 = pcVar16;
  pppuStack_350 = &pppuStack_270;
  _objc_retain(pcVar7);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  _objc_retain(pcVar16);
  _objc_retain(pcVar14);
  pcVar5 = (char *)0x0;
  if (pcVar19 != (char *)0x0) {
    plVar18 = *(long **)(pcVar19 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(acStack_420,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_408,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_3f0,pcVar1);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar1 = pcVar16;
      func_0x00010bdc3520(pcVar16);
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_3d8,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar1 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_3c0,pcVar1);
    acStack_440[0] = '\0';
    acStack_440[1] = '\0';
    acStack_440[2] = '\0';
    acStack_440[3] = '\0';
    acStack_440[4] = '\0';
    acStack_440[5] = '\0';
    acStack_440[6] = '\0';
    acStack_440[7] = '\0';
    acStack_440[8] = '\0';
    acStack_440[9] = '\0';
    acStack_440[10] = '\0';
    acStack_440[0xb] = '\0';
    acStack_440[0xc] = '\0';
    acStack_440[0xd] = '\0';
    acStack_440[0xe] = '\0';
    acStack_440[0xf] = '\0';
    acStack_440[0x10] = '\0';
    acStack_440[0x11] = '\0';
    acStack_440[0x12] = '\0';
    acStack_440[0x13] = '\0';
    acStack_440[0x14] = '\0';
    acStack_440[0x15] = '\0';
    acStack_440[0x16] = '\0';
    acStack_440[0x17] = '\0';
    func_0x000107c27984(acStack_440,acStack_420,&lStack_3a8,5);
    pcVar1 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_428 = acStack_440;
    func_0x000107c278ac(&puStack_428);
    lVar17 = 0;
    pcVar5 = acStack_420;
    pcVar9 = pcVar8;
    pcVar2 = param_7;
    do {
      if ((&cStack_3a9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x78);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  pcVar19 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  do {
    pcVar5 = pcVar5 + -0x18;
  } while (pcVar5 != acStack_420);
  _objc_release(pcVar14);
  _objc_release(pcVar16);
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  _objc_release(pcVar7);
  pcVar4 = pcVar19;
  __Unwind_Resume();
  pcVar13 = acStack_500;
  pcStack_448 = FUN_10b299588;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar12 = pcVar9;
  pcVar10 = pcVar2;
  pcVar3 = pcVar6;
  pcStack_490 = acStack_420;
  pcStack_488 = pcVar5;
  pcStack_480 = pcVar19;
  pcStack_478 = pcVar14;
  pcStack_470 = pcVar16;
  pcStack_468 = pcVar15;
  pcStack_460 = pcVar11;
  pcStack_458 = pcVar7;
  pppuStack_450 = &pppuStack_350;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_4e0,pcVar5);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar5 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_4c8,pcVar5);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar5 = pcVar2;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(auStack_4b0,pcVar5);
    acStack_500[0] = '\0';
    acStack_500[1] = '\0';
    acStack_500[2] = '\0';
    acStack_500[3] = '\0';
    acStack_500[4] = '\0';
    acStack_500[5] = '\0';
    acStack_500[6] = '\0';
    acStack_500[7] = '\0';
    acStack_500[8] = '\0';
    acStack_500[9] = '\0';
    acStack_500[10] = '\0';
    acStack_500[0xb] = '\0';
    acStack_500[0xc] = '\0';
    acStack_500[0xd] = '\0';
    acStack_500[0xe] = '\0';
    acStack_500[0xf] = '\0';
    acStack_500[0x10] = '\0';
    acStack_500[0x11] = '\0';
    acStack_500[0x12] = '\0';
    acStack_500[0x13] = '\0';
    acStack_500[0x14] = '\0';
    acStack_500[0x15] = '\0';
    acStack_500[0x16] = '\0';
    acStack_500[0x17] = '\0';
    func_0x000107c27984(acStack_500,acStack_4e0,&lStack_498,3);
    pcVar8 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_4e8 = acStack_500;
    func_0x000107c278ac(&puStack_4e8);
    lVar17 = 0;
    pcVar12 = pcVar13;
    pcVar10 = pcVar6;
    do {
      if ((&cStack_499)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_500;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar9);
  pcVar6 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  pcStack_538 = acStack_4e0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_538);
  _objc_release(pcVar2);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar7 = pcVar6;
  __Unwind_Resume();
  pcVar14 = acStack_5c0;
  pcStack_508 = FUN_10b299848;
  lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar8;
  pcVar11 = pcVar12;
  pcVar15 = pcVar10;
  pcVar16 = pcVar3;
  pcStack_550 = acStack_420;
  pcStack_548 = pcVar5;
  pcStack_540 = pcVar19;
  pcStack_530 = pcVar6;
  pcStack_528 = pcVar2;
  pcStack_520 = pcVar9;
  pcStack_518 = pcVar1;
  pppuStack_510 = &pppuStack_450;
  _objc_retain(pcVar8);
  _objc_retain(pcVar12);
  _objc_retain(pcVar10);
  if (pcVar7 != (char *)0x0) {
    plVar18 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_5a0,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_588,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar5 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_570,pcVar5);
    acStack_5c0[0] = '\0';
    acStack_5c0[1] = '\0';
    acStack_5c0[2] = '\0';
    acStack_5c0[3] = '\0';
    acStack_5c0[4] = '\0';
    acStack_5c0[5] = '\0';
    acStack_5c0[6] = '\0';
    acStack_5c0[7] = '\0';
    acStack_5c0[8] = '\0';
    acStack_5c0[9] = '\0';
    acStack_5c0[10] = '\0';
    acStack_5c0[0xb] = '\0';
    acStack_5c0[0xc] = '\0';
    acStack_5c0[0xd] = '\0';
    acStack_5c0[0xe] = '\0';
    acStack_5c0[0xf] = '\0';
    acStack_5c0[0x10] = '\0';
    acStack_5c0[0x11] = '\0';
    acStack_5c0[0x12] = '\0';
    acStack_5c0[0x13] = '\0';
    acStack_5c0[0x14] = '\0';
    acStack_5c0[0x15] = '\0';
    acStack_5c0[0x16] = '\0';
    acStack_5c0[0x17] = '\0';
    func_0x000107c27984(acStack_5c0,acStack_5a0,&lStack_558,3);
    pcVar4 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_5a8 = acStack_5c0;
    func_0x000107c278ac(&puStack_5a8);
    lVar17 = 0;
    pcVar11 = pcVar14;
    pcVar15 = pcVar3;
    do {
      if ((&cStack_559)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_5c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar12);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_558) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  pcStack_5f8 = acStack_5a0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_5f8);
  _objc_release(pcVar10);
  _objc_release(pcVar12);
  _objc_release(pcVar8);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar14 = acStack_680;
  pcStack_5c8 = FUN_10b299b08;
  lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  pcVar6 = pcVar11;
  pcVar7 = pcVar15;
  pcVar3 = pcVar16;
  pcStack_610 = acStack_420;
  pcStack_608 = pcVar5;
  pcStack_600 = pcVar19;
  pcStack_5f0 = pcVar1;
  pcStack_5e8 = pcVar10;
  pcStack_5e0 = pcVar12;
  pcStack_5d8 = pcVar8;
  pppuStack_5d0 = &pppuStack_510;
  _objc_retain(pcVar4);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(acStack_660,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_648,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar5 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_630,pcVar5);
    acStack_680[0] = '\0';
    acStack_680[1] = '\0';
    acStack_680[2] = '\0';
    acStack_680[3] = '\0';
    acStack_680[4] = '\0';
    acStack_680[5] = '\0';
    acStack_680[6] = '\0';
    acStack_680[7] = '\0';
    acStack_680[8] = '\0';
    acStack_680[9] = '\0';
    acStack_680[10] = '\0';
    acStack_680[0xb] = '\0';
    acStack_680[0xc] = '\0';
    acStack_680[0xd] = '\0';
    acStack_680[0xe] = '\0';
    acStack_680[0xf] = '\0';
    acStack_680[0x10] = '\0';
    acStack_680[0x11] = '\0';
    acStack_680[0x12] = '\0';
    acStack_680[0x13] = '\0';
    acStack_680[0x14] = '\0';
    acStack_680[0x15] = '\0';
    acStack_680[0x16] = '\0';
    acStack_680[0x17] = '\0';
    func_0x000107c27984(acStack_680,acStack_660,&lStack_618,3);
    pcVar9 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_668 = acStack_680;
    func_0x000107c278ac(&puStack_668);
    lVar17 = 0;
    pcVar6 = pcVar14;
    pcVar7 = pcVar16;
    do {
      if ((&cStack_619)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_680;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_618) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_6b8 = acStack_660;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_6b8);
    _objc_release(pcVar15);
    _objc_release(pcVar11);
    _objc_release(pcVar4);
    pcVar8 = pcVar1;
    __Unwind_Resume();
    pcVar14 = acStack_740;
    pcStack_688 = FUN_10b299dc8;
    lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar9;
    pcVar12 = pcVar6;
    pcVar10 = pcVar7;
    pcVar16 = pcVar3;
    pcStack_6d0 = acStack_420;
    pcStack_6c8 = pcVar5;
    pcStack_6c0 = pcVar19;
    pcStack_6b0 = pcVar1;
    pcStack_6a8 = pcVar15;
    pcStack_6a0 = pcVar11;
    pcStack_698 = pcVar4;
    pppuStack_690 = &pppuStack_5d0;
    _objc_retain(pcVar9);
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    if (pcVar8 != (char *)0x0) {
      plVar18 = *(long **)(pcVar8 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(acStack_720,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_708,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar5 = pcVar7;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(auStack_6f0,pcVar5);
      acStack_740[0] = '\0';
      acStack_740[1] = '\0';
      acStack_740[2] = '\0';
      acStack_740[3] = '\0';
      acStack_740[4] = '\0';
      acStack_740[5] = '\0';
      acStack_740[6] = '\0';
      acStack_740[7] = '\0';
      acStack_740[8] = '\0';
      acStack_740[9] = '\0';
      acStack_740[10] = '\0';
      acStack_740[0xb] = '\0';
      acStack_740[0xc] = '\0';
      acStack_740[0xd] = '\0';
      acStack_740[0xe] = '\0';
      acStack_740[0xf] = '\0';
      acStack_740[0x10] = '\0';
      acStack_740[0x11] = '\0';
      acStack_740[0x12] = '\0';
      acStack_740[0x13] = '\0';
      acStack_740[0x14] = '\0';
      acStack_740[0x15] = '\0';
      acStack_740[0x16] = '\0';
      acStack_740[0x17] = '\0';
      func_0x000107c27984(acStack_740,acStack_720,&lStack_6d8,3);
      pcVar2 = "\x02";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_728 = acStack_740;
      func_0x000107c278ac(&puStack_728);
      lVar17 = 0;
      pcVar12 = pcVar14;
      pcVar10 = pcVar3;
      do {
        if ((&cStack_6d9)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_740;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    pcStack_778 = acStack_720;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_778);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar9);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcVar14 = acStack_800;
    pcStack_748 = FUN_10b29a088;
    lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar2;
    pcVar11 = pcVar12;
    pcVar3 = pcVar10;
    pcVar15 = pcVar16;
    pcStack_790 = acStack_420;
    pcStack_788 = pcVar5;
    pcStack_780 = pcVar19;
    pcStack_770 = pcVar1;
    pcStack_768 = pcVar7;
    pcStack_760 = pcVar6;
    pcStack_758 = pcVar9;
    pppuStack_750 = &pppuStack_690;
    _objc_retain(pcVar2);
    _objc_retain(pcVar12);
    _objc_retain(pcVar10);
    if (pcVar4 != (char *)0x0) {
      plVar18 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(acStack_7e0,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x000107c278b8(auStack_7c8,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar5 = pcVar10;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_7b0,pcVar5);
      acStack_800[0] = '\0';
      acStack_800[1] = '\0';
      acStack_800[2] = '\0';
      acStack_800[3] = '\0';
      acStack_800[4] = '\0';
      acStack_800[5] = '\0';
      acStack_800[6] = '\0';
      acStack_800[7] = '\0';
      acStack_800[8] = '\0';
      acStack_800[9] = '\0';
      acStack_800[10] = '\0';
      acStack_800[0xb] = '\0';
      acStack_800[0xc] = '\0';
      acStack_800[0xd] = '\0';
      acStack_800[0xe] = '\0';
      acStack_800[0xf] = '\0';
      acStack_800[0x10] = '\0';
      acStack_800[0x11] = '\0';
      acStack_800[0x12] = '\0';
      acStack_800[0x13] = '\0';
      acStack_800[0x14] = '\0';
      acStack_800[0x15] = '\0';
      acStack_800[0x16] = '\0';
      acStack_800[0x17] = '\0';
      func_0x000107c27984(acStack_800,acStack_7e0,&lStack_798,3);
      pcVar8 = "\x01";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_7e8 = acStack_800;
      func_0x000107c278ac(&puStack_7e8);
      lVar17 = 0;
      pcVar11 = pcVar14;
      pcVar3 = pcVar16;
      do {
        if ((&cStack_799)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_800;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar12);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      pcStack_838 = acStack_7e0;
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != pcStack_838);
      _objc_release(pcVar10);
      _objc_release(pcVar12);
      _objc_release(pcVar2);
      pcVar9 = pcVar1;
      __Unwind_Resume();
      pcVar4 = acStack_8c0;
      pcStack_808 = FUN_10b29a348;
      lStack_858 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar11;
      pcStack_850 = acStack_420;
      pcStack_848 = pcVar5;
      pcStack_840 = pcVar19;
      pcStack_830 = pcVar1;
      pcStack_828 = pcVar10;
      pcStack_820 = pcVar12;
      pcStack_818 = pcVar2;
      pppuStack_810 = &pppuStack_750;
      _objc_retain(pcVar8);
      _objc_retain(pcVar11);
      _objc_retain(pcVar3);
      if (pcVar9 != (char *)0x0) {
        plVar18 = *(long **)(pcVar9 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(acStack_8a0,pcVar1);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar11);
          pcVar1 = pcVar11;
          func_0x00010bdc3520(pcVar11);
        }
        _objc_release(pcVar11);
        func_0x000107c278b8(auStack_888,pcVar1);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar3);
          pcVar1 = pcVar3;
          func_0x00010bdc3520(pcVar3);
        }
        _objc_release(pcVar3);
        func_0x000107c278b8(auStack_870,pcVar1);
        acStack_8c0[0] = '\0';
        acStack_8c0[1] = '\0';
        acStack_8c0[2] = '\0';
        acStack_8c0[3] = '\0';
        acStack_8c0[4] = '\0';
        acStack_8c0[5] = '\0';
        acStack_8c0[6] = '\0';
        acStack_8c0[7] = '\0';
        acStack_8c0[8] = '\0';
        acStack_8c0[9] = '\0';
        acStack_8c0[10] = '\0';
        acStack_8c0[0xb] = '\0';
        acStack_8c0[0xc] = '\0';
        acStack_8c0[0xd] = '\0';
        acStack_8c0[0xe] = '\0';
        acStack_8c0[0xf] = '\0';
        acStack_8c0[0x10] = '\0';
        acStack_8c0[0x11] = '\0';
        acStack_8c0[0x12] = '\0';
        acStack_8c0[0x13] = '\0';
        acStack_8c0[0x14] = '\0';
        acStack_8c0[0x15] = '\0';
        acStack_8c0[0x16] = '\0';
        acStack_8c0[0x17] = '\0';
        func_0x000107c27984(acStack_8c0,acStack_8a0,&lStack_858,3);
        (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_8c0,pcVar15);
        puStack_8a8 = acStack_8c0;
        func_0x000107c278ac(&puStack_8a8);
        lVar17 = 0;
        pcVar6 = pcVar4;
        do {
          if ((&cStack_859)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_870 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
          pcVar19 = acStack_8c0;
        } while (lVar17 != -0x48);
      }
      _objc_release(pcVar3);
      _objc_release(pcVar11);
      pcVar1 = pcVar8;
      _objc_release(pcVar8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_858) {
        ___stack_chk_fail();
        _objc_release(pcVar3);
        do {
          pcVar19 = pcVar19 + -0x18;
        } while (pcVar19 != acStack_8a0);
        _objc_release(pcVar3);
        _objc_release(pcVar11);
        _objc_release(pcVar8);
        __Unwind_Resume(pcVar1);
        if ((long)pcVar6 < 1) {
          if (pcVar6 == (char *)0xffffffffffffffff) {
            func_0x00010c14cea0(pcVar1);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar6 == (char *)0x0) {
            _objc_retain(pcVar1);
          }
        }
        else if (pcVar6 == (char *)0x1) {
          func_0x00010c14ce80(pcVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar6 == (char *)0x9) {
          func_0x00010c14ce60(pcVar1);
          _objc_retainAutoreleasedReturnValue();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b2988b0; end: 10b298b6f;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298b38) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b2988b0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x24;
  char *pcVar19;
  char *unaff_x25;
  char *unaff_x26;
  char acStack_800 [24];
  undefined1 *puStack_7e8;
  char acStack_7e0 [24];
  undefined1 auStack_7c8 [24];
  undefined8 auStack_7b0 [2];
  char cStack_799;
  long lStack_798;
  char *pcStack_790;
  char *pcStack_788;
  char *pcStack_780;
  char *pcStack_778;
  char *pcStack_770;
  char *pcStack_768;
  char *pcStack_760;
  char *pcStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  char *pcStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  char acStack_660 [24];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  char acStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  char *pcStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  char acStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  char acStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar1 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar19 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar19);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar19 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar19);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      unaff_x25 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      unaff_x25 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,unaff_x25);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar19 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar17 = 0;
    pcVar7 = pcVar1;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_10b298b70;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar19;
  pcVar8 = pcVar7;
  pcVar3 = pcVar4;
  pcVar11 = pcVar9;
  pcVar15 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar19);
  _objc_retain(pcVar7);
  _objc_retain(pcVar4);
  _objc_retain(pcVar9);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar19;
      _objc_retainAutorelease(pcVar19);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(acStack_178,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_160,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_148,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      unaff_x26 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_130,unaff_x26);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x000107c27984(acStack_198,acStack_178,&lStack_118,4);
    pcVar5 = "\x01";
    unaff_x25 = acStack_198;
    pcVar8 = acStack_198;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_180 = unaff_x25;
    func_0x000107c278ac(&pcStack_180);
    lVar17 = 0;
    pcVar3 = param_6;
    do {
      if ((&cStack_119)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  pcVar1 = pcVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  pcStack_1e0 = acStack_178;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_1e0);
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  _objc_release(pcVar7);
  _objc_release(pcVar19);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10b298ea4;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar10 = pcVar8;
  pcVar14 = pcVar3;
  pcVar16 = pcVar11;
  pcVar13 = pcVar15;
  pcStack_1f0 = unaff_x26;
  pcStack_1e8 = unaff_x25;
  pcStack_1d8 = pcVar1;
  pcStack_1d0 = pcVar9;
  pcStack_1c8 = pcVar4;
  pcStack_1c0 = pcVar7;
  pcStack_1b8 = pcVar19;
  ppuStack_1b0 = &puStack_d0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(acStack_258,pcVar19);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar19 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_240,pcVar19);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar19 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_228,pcVar19);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar19 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_210,pcVar19);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x000107c27984(acStack_278,acStack_258,&lStack_1f8,4);
    pcVar6 = "\x01";
    unaff_x25 = acStack_278;
    pcVar10 = acStack_278;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    pcStack_260 = unaff_x25;
    func_0x000107c278ac(&pcStack_260);
    lVar17 = 0;
    pcVar14 = pcVar15;
    do {
      if ((&cStack_1f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  _objc_release(pcVar8);
  pcVar19 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_258);
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar8 = acStack_380;
  pcStack_288 = FUN_10b2991d8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar9 = pcVar10;
  pcVar1 = pcVar14;
  pcVar5 = pcVar16;
  pppuStack_290 = &ppuStack_1b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  _objc_retain(pcVar14);
  _objc_retain(pcVar16);
  _objc_retain(pcVar13);
  pcVar4 = (char *)0x0;
  if (pcVar19 != (char *)0x0) {
    plVar18 = *(long **)(pcVar19 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(acStack_360,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_348,pcVar19);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar19 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_330,pcVar19);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar16);
      pcVar19 = pcVar16;
      func_0x00010bdc3520(pcVar16);
    }
    _objc_release(pcVar16);
    func_0x000107c278b8(auStack_318,pcVar19);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar19 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_300,pcVar19);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x000107c27984(acStack_380,acStack_360,&lStack_2e8,5);
    pcVar7 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_368 = acStack_380;
    func_0x000107c278ac(&puStack_368);
    lVar17 = 0;
    pcVar4 = acStack_360;
    pcVar9 = pcVar8;
    pcVar1 = param_7;
    do {
      if ((&cStack_2e9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x78);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar16);
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  pcVar19 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    pcVar4 = pcVar4 + -0x18;
  } while (pcVar4 != acStack_360);
  _objc_release(pcVar13);
  _objc_release(pcVar16);
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar3 = pcVar19;
  __Unwind_Resume();
  pcVar12 = acStack_440;
  pcStack_388 = FUN_10b299588;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar11 = pcVar9;
  pcVar15 = pcVar1;
  pcVar2 = pcVar5;
  pcStack_3d0 = acStack_360;
  pcStack_3c8 = pcVar4;
  pcStack_3c0 = pcVar19;
  pcStack_3b8 = pcVar13;
  pcStack_3b0 = pcVar16;
  pcStack_3a8 = pcVar14;
  pcStack_3a0 = pcVar10;
  pcStack_398 = pcVar6;
  pppuStack_390 = &pppuStack_290;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(acStack_420,pcVar19);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar19 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_408,pcVar19);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_3f0,pcVar4);
    acStack_440[0] = '\0';
    acStack_440[1] = '\0';
    acStack_440[2] = '\0';
    acStack_440[3] = '\0';
    acStack_440[4] = '\0';
    acStack_440[5] = '\0';
    acStack_440[6] = '\0';
    acStack_440[7] = '\0';
    acStack_440[8] = '\0';
    acStack_440[9] = '\0';
    acStack_440[10] = '\0';
    acStack_440[0xb] = '\0';
    acStack_440[0xc] = '\0';
    acStack_440[0xd] = '\0';
    acStack_440[0xe] = '\0';
    acStack_440[0xf] = '\0';
    acStack_440[0x10] = '\0';
    acStack_440[0x11] = '\0';
    acStack_440[0x12] = '\0';
    acStack_440[0x13] = '\0';
    acStack_440[0x14] = '\0';
    acStack_440[0x15] = '\0';
    acStack_440[0x16] = '\0';
    acStack_440[0x17] = '\0';
    func_0x000107c27984(acStack_440,acStack_420,&lStack_3d8,3);
    pcVar8 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_428 = acStack_440;
    func_0x000107c278ac(&puStack_428);
    lVar17 = 0;
    pcVar11 = pcVar12;
    pcVar15 = pcVar5;
    do {
      if ((&cStack_3d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_440;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar1);
  _objc_release(pcVar9);
  pcVar5 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  pcStack_478 = acStack_420;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_478);
  _objc_release(pcVar1);
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcVar13 = acStack_500;
  pcStack_448 = FUN_10b299848;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar8;
  pcVar10 = pcVar11;
  pcVar14 = pcVar15;
  pcVar16 = pcVar2;
  pcStack_490 = acStack_360;
  pcStack_488 = pcVar4;
  pcStack_480 = pcVar19;
  pcStack_470 = pcVar5;
  pcStack_468 = pcVar1;
  pcStack_460 = pcVar9;
  pcStack_458 = pcVar7;
  pppuStack_450 = &pppuStack_390;
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  if (pcVar6 != (char *)0x0) {
    plVar18 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_4e0,pcVar19);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar19 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_4c8,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar4 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_4b0,pcVar4);
    acStack_500[0] = '\0';
    acStack_500[1] = '\0';
    acStack_500[2] = '\0';
    acStack_500[3] = '\0';
    acStack_500[4] = '\0';
    acStack_500[5] = '\0';
    acStack_500[6] = '\0';
    acStack_500[7] = '\0';
    acStack_500[8] = '\0';
    acStack_500[9] = '\0';
    acStack_500[10] = '\0';
    acStack_500[0xb] = '\0';
    acStack_500[0xc] = '\0';
    acStack_500[0xd] = '\0';
    acStack_500[0xe] = '\0';
    acStack_500[0xf] = '\0';
    acStack_500[0x10] = '\0';
    acStack_500[0x11] = '\0';
    acStack_500[0x12] = '\0';
    acStack_500[0x13] = '\0';
    acStack_500[0x14] = '\0';
    acStack_500[0x15] = '\0';
    acStack_500[0x16] = '\0';
    acStack_500[0x17] = '\0';
    func_0x000107c27984(acStack_500,acStack_4e0,&lStack_498,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_4e8 = acStack_500;
    func_0x000107c278ac(&puStack_4e8);
    lVar17 = 0;
    pcVar10 = pcVar13;
    pcVar14 = pcVar2;
    do {
      if ((&cStack_499)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_500;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  pcVar7 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  pcStack_538 = acStack_4e0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_538);
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  __Unwind_Resume();
  pcVar13 = acStack_5c0;
  pcStack_508 = FUN_10b299b08;
  lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar3;
  pcVar5 = pcVar10;
  pcVar6 = pcVar14;
  pcVar2 = pcVar16;
  pcStack_550 = acStack_360;
  pcStack_548 = pcVar4;
  pcStack_540 = pcVar19;
  pcStack_530 = pcVar7;
  pcStack_528 = pcVar15;
  pcStack_520 = pcVar11;
  pcStack_518 = pcVar8;
  pppuStack_510 = &pppuStack_450;
  _objc_retain(pcVar3);
  _objc_retain(pcVar10);
  _objc_retain(pcVar14);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(acStack_5a0,pcVar19);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar19 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_588,pcVar19);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar4 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_570,pcVar4);
    acStack_5c0[0] = '\0';
    acStack_5c0[1] = '\0';
    acStack_5c0[2] = '\0';
    acStack_5c0[3] = '\0';
    acStack_5c0[4] = '\0';
    acStack_5c0[5] = '\0';
    acStack_5c0[6] = '\0';
    acStack_5c0[7] = '\0';
    acStack_5c0[8] = '\0';
    acStack_5c0[9] = '\0';
    acStack_5c0[10] = '\0';
    acStack_5c0[0xb] = '\0';
    acStack_5c0[0xc] = '\0';
    acStack_5c0[0xd] = '\0';
    acStack_5c0[0xe] = '\0';
    acStack_5c0[0xf] = '\0';
    acStack_5c0[0x10] = '\0';
    acStack_5c0[0x11] = '\0';
    acStack_5c0[0x12] = '\0';
    acStack_5c0[0x13] = '\0';
    acStack_5c0[0x14] = '\0';
    acStack_5c0[0x15] = '\0';
    acStack_5c0[0x16] = '\0';
    acStack_5c0[0x17] = '\0';
    func_0x000107c27984(acStack_5c0,acStack_5a0,&lStack_558,3);
    pcVar9 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_5a8 = acStack_5c0;
    func_0x000107c278ac(&puStack_5a8);
    lVar17 = 0;
    pcVar5 = pcVar13;
    pcVar6 = pcVar16;
    do {
      if ((&cStack_559)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_5c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  pcVar7 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_558) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcStack_5f8 = acStack_5a0;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_5f8);
  _objc_release(pcVar14);
  _objc_release(pcVar10);
  _objc_release(pcVar3);
  pcVar8 = pcVar7;
  __Unwind_Resume();
  pcVar13 = acStack_680;
  pcStack_5c8 = FUN_10b299dc8;
  lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar9;
  pcVar11 = pcVar5;
  pcVar15 = pcVar6;
  pcVar16 = pcVar2;
  pcStack_610 = acStack_360;
  pcStack_608 = pcVar4;
  pcStack_600 = pcVar19;
  pcStack_5f0 = pcVar7;
  pcStack_5e8 = pcVar14;
  pcStack_5e0 = pcVar10;
  pcStack_5d8 = pcVar3;
  pppuStack_5d0 = &pppuStack_510;
  _objc_retain(pcVar9);
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar8 != (char *)0x0) {
    plVar18 = *(long **)(pcVar8 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(acStack_660,pcVar19);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar19 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_648,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar4 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_630,pcVar4);
    acStack_680[0] = '\0';
    acStack_680[1] = '\0';
    acStack_680[2] = '\0';
    acStack_680[3] = '\0';
    acStack_680[4] = '\0';
    acStack_680[5] = '\0';
    acStack_680[6] = '\0';
    acStack_680[7] = '\0';
    acStack_680[8] = '\0';
    acStack_680[9] = '\0';
    acStack_680[10] = '\0';
    acStack_680[0xb] = '\0';
    acStack_680[0xc] = '\0';
    acStack_680[0xd] = '\0';
    acStack_680[0xe] = '\0';
    acStack_680[0xf] = '\0';
    acStack_680[0x10] = '\0';
    acStack_680[0x11] = '\0';
    acStack_680[0x12] = '\0';
    acStack_680[0x13] = '\0';
    acStack_680[0x14] = '\0';
    acStack_680[0x15] = '\0';
    acStack_680[0x16] = '\0';
    acStack_680[0x17] = '\0';
    func_0x000107c27984(acStack_680,acStack_660,&lStack_618,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_668 = acStack_680;
    func_0x000107c278ac(&puStack_668);
    lVar17 = 0;
    pcVar11 = pcVar13;
    pcVar15 = pcVar2;
    do {
      if ((&cStack_619)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_680;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  pcVar7 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_618) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_6b8 = acStack_660;
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != pcStack_6b8);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  _objc_release(pcVar9);
  pcVar3 = pcVar7;
  __Unwind_Resume();
  pcVar13 = acStack_740;
  pcStack_688 = FUN_10b29a088;
  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar11;
  pcVar2 = pcVar15;
  pcVar14 = pcVar16;
  pcStack_6d0 = acStack_360;
  pcStack_6c8 = pcVar4;
  pcStack_6c0 = pcVar19;
  pcStack_6b0 = pcVar7;
  pcStack_6a8 = pcVar6;
  pcStack_6a0 = pcVar5;
  pcStack_698 = pcVar9;
  pppuStack_690 = &pppuStack_5d0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_720,pcVar19);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar19 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_708,pcVar19);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar4 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_6f0,pcVar4);
    acStack_740[0] = '\0';
    acStack_740[1] = '\0';
    acStack_740[2] = '\0';
    acStack_740[3] = '\0';
    acStack_740[4] = '\0';
    acStack_740[5] = '\0';
    acStack_740[6] = '\0';
    acStack_740[7] = '\0';
    acStack_740[8] = '\0';
    acStack_740[9] = '\0';
    acStack_740[10] = '\0';
    acStack_740[0xb] = '\0';
    acStack_740[0xc] = '\0';
    acStack_740[0xd] = '\0';
    acStack_740[0xe] = '\0';
    acStack_740[0xf] = '\0';
    acStack_740[0x10] = '\0';
    acStack_740[0x11] = '\0';
    acStack_740[0x12] = '\0';
    acStack_740[0x13] = '\0';
    acStack_740[0x14] = '\0';
    acStack_740[0x15] = '\0';
    acStack_740[0x16] = '\0';
    acStack_740[0x17] = '\0';
    func_0x000107c27984(acStack_740,acStack_720,&lStack_6d8,3);
    pcVar8 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_728 = acStack_740;
    func_0x000107c278ac(&puStack_728);
    lVar17 = 0;
    pcVar10 = pcVar13;
    pcVar2 = pcVar16;
    do {
      if ((&cStack_6d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      pcVar19 = acStack_740;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  pcVar7 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_778 = acStack_720;
    do {
      pcVar19 = pcVar19 + -0x18;
    } while (pcVar19 != pcStack_778);
    _objc_release(pcVar15);
    _objc_release(pcVar11);
    _objc_release(pcVar1);
    pcVar9 = pcVar7;
    __Unwind_Resume();
    pcVar3 = acStack_800;
    pcStack_748 = FUN_10b29a348;
    lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar10;
    pcStack_790 = acStack_360;
    pcStack_788 = pcVar4;
    pcStack_780 = pcVar19;
    pcStack_770 = pcVar7;
    pcStack_768 = pcVar15;
    pcStack_760 = pcVar11;
    pcStack_758 = pcVar1;
    pppuStack_750 = &pppuStack_690;
    _objc_retain(pcVar8);
    _objc_retain(pcVar10);
    _objc_retain(pcVar2);
    if (pcVar9 != (char *)0x0) {
      plVar18 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_7e0,pcVar19);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar19 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x000107c278b8(auStack_7c8,pcVar19);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar19 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_7b0,pcVar19);
      acStack_800[0] = '\0';
      acStack_800[1] = '\0';
      acStack_800[2] = '\0';
      acStack_800[3] = '\0';
      acStack_800[4] = '\0';
      acStack_800[5] = '\0';
      acStack_800[6] = '\0';
      acStack_800[7] = '\0';
      acStack_800[8] = '\0';
      acStack_800[9] = '\0';
      acStack_800[10] = '\0';
      acStack_800[0xb] = '\0';
      acStack_800[0xc] = '\0';
      acStack_800[0xd] = '\0';
      acStack_800[0xe] = '\0';
      acStack_800[0xf] = '\0';
      acStack_800[0x10] = '\0';
      acStack_800[0x11] = '\0';
      acStack_800[0x12] = '\0';
      acStack_800[0x13] = '\0';
      acStack_800[0x14] = '\0';
      acStack_800[0x15] = '\0';
      acStack_800[0x16] = '\0';
      acStack_800[0x17] = '\0';
      func_0x000107c27984(acStack_800,acStack_7e0,&lStack_798,3);
      (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_800,pcVar14);
      puStack_7e8 = acStack_800;
      func_0x000107c278ac(&puStack_7e8);
      lVar17 = 0;
      pcVar5 = pcVar3;
      do {
        if ((&cStack_799)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        pcVar19 = acStack_800;
      } while (lVar17 != -0x48);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar10);
    pcVar7 = pcVar8;
    _objc_release(pcVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_798) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        pcVar19 = pcVar19 + -0x18;
      } while (pcVar19 != acStack_7e0);
      _objc_release(pcVar2);
      _objc_release(pcVar10);
      _objc_release(pcVar8);
      __Unwind_Resume(pcVar7);
      if ((long)pcVar5 < 1) {
        if (pcVar5 == (char *)0xffffffffffffffff) {
          func_0x00010c14cea0(pcVar7);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar5 == (char *)0x0) {
          _objc_retain(pcVar7);
        }
      }
      else if (pcVar5 == (char *)0x1) {
        func_0x00010c14ce80(pcVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar5 == (char *)0x9) {
        func_0x00010c14ce60(pcVar7);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b298b70; end: 10b298ea3;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b298e64) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b298b70(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  char *unaff_x25;
  char *pcVar19;
  char *unaff_x26;
  char acStack_740 [24];
  undefined1 *puStack_728;
  char acStack_720 [24];
  undefined1 auStack_708 [24];
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  char *pcStack_6d0;
  char *pcStack_6c8;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  char *pcStack_6a8;
  char *pcStack_6a0;
  char *pcStack_698;
  undefined8 ****ppppuStack_690;
  code *pcStack_688;
  char acStack_680 [24];
  undefined1 *puStack_668;
  char acStack_660 [24];
  undefined1 auStack_648 [24];
  undefined8 auStack_630 [2];
  char cStack_619;
  long lStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  char acStack_5c0 [24];
  undefined1 *puStack_5a8;
  char acStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  undefined8 ****ppppuStack_510;
  code *pcStack_508;
  char acStack_500 [24];
  undefined1 *puStack_4e8;
  char acStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined8 auStack_4b0 [2];
  char cStack_499;
  long lStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 ****ppppuStack_450;
  code *pcStack_448;
  char acStack_440 [24];
  undefined1 *puStack_428;
  char acStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  char *pcStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined1 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_380 [24];
  undefined1 *puStack_368;
  char acStack_360 [24];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  char acStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  char acStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar19 = param_3;
  pcVar7 = param_4;
  pcVar6 = param_5;
  pcVar18 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      unaff_x26 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,unaff_x26);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "\x01";
    unaff_x25 = acStack_d8;
    pcVar19 = acStack_d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar16 = 0;
    pcVar7 = param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  pcStack_120 = acStack_b8;
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != pcStack_120);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_10b298ea4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar19;
  pcVar11 = pcVar7;
  pcVar15 = pcVar6;
  pcVar13 = pcVar18;
  pcStack_130 = unaff_x26;
  pcStack_128 = unaff_x25;
  pcStack_118 = pcVar2;
  pcStack_110 = param_5;
  pcStack_108 = param_4;
  pcStack_100 = param_3;
  pcStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar19);
  _objc_retain(pcVar7);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_198,pcVar2);
    _objc_retain(pcVar19);
    if (pcVar19 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar19);
      pcVar2 = pcVar19;
      func_0x00010bdc3520(pcVar19);
    }
    _objc_release(pcVar19);
    func_0x000107c278b8(auStack_180,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_168,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_150,pcVar2);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x000107c27984(acStack_1b8,acStack_198,&lStack_138,4);
    pcVar8 = "\x01";
    unaff_x25 = acStack_1b8;
    pcVar5 = acStack_1b8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_1a0 = unaff_x25;
    func_0x000107c278ac(&pcStack_1a0);
    lVar16 = 0;
    pcVar11 = pcVar18;
    do {
      if ((&cStack_139)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  _objc_release(pcVar19);
  pcVar18 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_198);
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  _objc_release(pcVar19);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar3 = acStack_2c0;
  pcStack_1c8 = FUN_10b2991d8;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar7 = pcVar5;
  pcVar6 = pcVar11;
  pcVar2 = pcVar15;
  ppuStack_1d0 = &puStack_f0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  _objc_retain(pcVar13);
  pcVar19 = (char *)0x0;
  if (pcVar18 != (char *)0x0) {
    plVar17 = *(long **)(pcVar18 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_2a0,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_288,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_270,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_258,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar1 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_240,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x000107c27984(acStack_2c0,acStack_2a0,&lStack_228,5);
    pcVar1 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a8 = acStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    lVar16 = 0;
    pcVar19 = acStack_2a0;
    pcVar7 = pcVar3;
    pcVar6 = param_7;
    do {
      if ((&cStack_229)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x78);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  pcVar18 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != acStack_2a0);
  _objc_release(pcVar13);
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  pcVar4 = pcVar18;
  __Unwind_Resume();
  pcVar10 = acStack_380;
  pcStack_2c8 = FUN_10b299588;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar9 = pcVar7;
  pcVar14 = pcVar6;
  pcVar12 = pcVar2;
  pcStack_310 = acStack_2a0;
  pcStack_308 = pcVar19;
  pcStack_300 = pcVar18;
  pcStack_2f8 = pcVar13;
  pcStack_2f0 = pcVar15;
  pcStack_2e8 = pcVar11;
  pcStack_2e0 = pcVar5;
  pcStack_2d8 = pcVar8;
  pppuStack_2d0 = &ppuStack_1d0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_360,pcVar19);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar19 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_348,pcVar19);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar19 = pcVar6;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_330,pcVar19);
    acStack_380[0] = '\0';
    acStack_380[1] = '\0';
    acStack_380[2] = '\0';
    acStack_380[3] = '\0';
    acStack_380[4] = '\0';
    acStack_380[5] = '\0';
    acStack_380[6] = '\0';
    acStack_380[7] = '\0';
    acStack_380[8] = '\0';
    acStack_380[9] = '\0';
    acStack_380[10] = '\0';
    acStack_380[0xb] = '\0';
    acStack_380[0xc] = '\0';
    acStack_380[0xd] = '\0';
    acStack_380[0xe] = '\0';
    acStack_380[0xf] = '\0';
    acStack_380[0x10] = '\0';
    acStack_380[0x11] = '\0';
    acStack_380[0x12] = '\0';
    acStack_380[0x13] = '\0';
    acStack_380[0x14] = '\0';
    acStack_380[0x15] = '\0';
    acStack_380[0x16] = '\0';
    acStack_380[0x17] = '\0';
    func_0x000107c27984(acStack_380,acStack_360,&lStack_318,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_368 = acStack_380;
    func_0x000107c278ac(&puStack_368);
    lVar16 = 0;
    pcVar9 = pcVar10;
    pcVar14 = pcVar2;
    do {
      if ((&cStack_319)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      pcVar18 = acStack_380;
    } while (lVar16 != -0x48);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  pcStack_3b8 = acStack_360;
  do {
    pcVar18 = pcVar18 + -0x18;
  } while (pcVar18 != pcStack_3b8);
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcVar4 = acStack_440;
  pcStack_388 = FUN_10b299848;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar11 = pcVar9;
  pcVar15 = pcVar14;
  pcVar13 = pcVar12;
  pcStack_3d0 = acStack_2a0;
  pcStack_3c8 = pcVar19;
  pcStack_3c0 = pcVar18;
  pcStack_3b0 = pcVar2;
  pcStack_3a8 = pcVar6;
  pcStack_3a0 = pcVar7;
  pcStack_398 = pcVar1;
  ppppuStack_390 = &pppuStack_2d0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar9);
  _objc_retain(pcVar14);
  if (pcVar5 != (char *)0x0) {
    plVar17 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(acStack_420,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_408,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar19 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_3f0,pcVar19);
    acStack_440[0] = '\0';
    acStack_440[1] = '\0';
    acStack_440[2] = '\0';
    acStack_440[3] = '\0';
    acStack_440[4] = '\0';
    acStack_440[5] = '\0';
    acStack_440[6] = '\0';
    acStack_440[7] = '\0';
    acStack_440[8] = '\0';
    acStack_440[9] = '\0';
    acStack_440[10] = '\0';
    acStack_440[0xb] = '\0';
    acStack_440[0xc] = '\0';
    acStack_440[0xd] = '\0';
    acStack_440[0xe] = '\0';
    acStack_440[0xf] = '\0';
    acStack_440[0x10] = '\0';
    acStack_440[0x11] = '\0';
    acStack_440[0x12] = '\0';
    acStack_440[0x13] = '\0';
    acStack_440[0x14] = '\0';
    acStack_440[0x15] = '\0';
    acStack_440[0x16] = '\0';
    acStack_440[0x17] = '\0';
    func_0x000107c27984(acStack_440,acStack_420,&lStack_3d8,3);
    pcVar8 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_428 = acStack_440;
    func_0x000107c278ac(&puStack_428);
    lVar16 = 0;
    pcVar11 = pcVar4;
    pcVar15 = pcVar12;
    do {
      if ((&cStack_3d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      pcVar18 = acStack_440;
    } while (lVar16 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar9);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcStack_478 = acStack_420;
  do {
    pcVar18 = pcVar18 + -0x18;
  } while (pcVar18 != pcStack_478);
  _objc_release(pcVar14);
  _objc_release(pcVar9);
  _objc_release(pcVar3);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcVar12 = acStack_500;
  pcStack_448 = FUN_10b299b08;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar8;
  pcVar2 = pcVar11;
  pcVar5 = pcVar15;
  pcVar4 = pcVar13;
  pcStack_490 = acStack_2a0;
  pcStack_488 = pcVar19;
  pcStack_480 = pcVar18;
  pcStack_470 = pcVar1;
  pcStack_468 = pcVar14;
  pcStack_460 = pcVar9;
  pcStack_458 = pcVar3;
  ppppuStack_450 = &ppppuStack_390;
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  _objc_retain(pcVar15);
  if (pcVar6 != (char *)0x0) {
    plVar17 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(acStack_4e0,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_4c8,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar19 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_4b0,pcVar19);
    acStack_500[0] = '\0';
    acStack_500[1] = '\0';
    acStack_500[2] = '\0';
    acStack_500[3] = '\0';
    acStack_500[4] = '\0';
    acStack_500[5] = '\0';
    acStack_500[6] = '\0';
    acStack_500[7] = '\0';
    acStack_500[8] = '\0';
    acStack_500[9] = '\0';
    acStack_500[10] = '\0';
    acStack_500[0xb] = '\0';
    acStack_500[0xc] = '\0';
    acStack_500[0xd] = '\0';
    acStack_500[0xe] = '\0';
    acStack_500[0xf] = '\0';
    acStack_500[0x10] = '\0';
    acStack_500[0x11] = '\0';
    acStack_500[0x12] = '\0';
    acStack_500[0x13] = '\0';
    acStack_500[0x14] = '\0';
    acStack_500[0x15] = '\0';
    acStack_500[0x16] = '\0';
    acStack_500[0x17] = '\0';
    func_0x000107c27984(acStack_500,acStack_4e0,&lStack_498,3);
    pcVar7 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_4e8 = acStack_500;
    func_0x000107c278ac(&puStack_4e8);
    lVar16 = 0;
    pcVar2 = pcVar12;
    pcVar5 = pcVar13;
    do {
      if ((&cStack_499)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      pcVar18 = acStack_500;
    } while (lVar16 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar11);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_538 = acStack_4e0;
    do {
      pcVar18 = pcVar18 + -0x18;
    } while (pcVar18 != pcStack_538);
    _objc_release(pcVar15);
    _objc_release(pcVar11);
    _objc_release(pcVar8);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar12 = acStack_5c0;
    pcStack_508 = FUN_10b299dc8;
    lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar7;
    pcVar13 = pcVar2;
    pcVar9 = pcVar5;
    pcVar14 = pcVar4;
    pcStack_550 = acStack_2a0;
    pcStack_548 = pcVar19;
    pcStack_540 = pcVar18;
    pcStack_530 = pcVar1;
    pcStack_528 = pcVar15;
    pcStack_520 = pcVar11;
    pcStack_518 = pcVar8;
    ppppuStack_510 = &ppppuStack_450;
    _objc_retain(pcVar7);
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      plVar17 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x000107c278b8(acStack_5a0,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_588,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar19 = pcVar5;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_570,pcVar19);
      acStack_5c0[0] = '\0';
      acStack_5c0[1] = '\0';
      acStack_5c0[2] = '\0';
      acStack_5c0[3] = '\0';
      acStack_5c0[4] = '\0';
      acStack_5c0[5] = '\0';
      acStack_5c0[6] = '\0';
      acStack_5c0[7] = '\0';
      acStack_5c0[8] = '\0';
      acStack_5c0[9] = '\0';
      acStack_5c0[10] = '\0';
      acStack_5c0[0xb] = '\0';
      acStack_5c0[0xc] = '\0';
      acStack_5c0[0xd] = '\0';
      acStack_5c0[0xe] = '\0';
      acStack_5c0[0xf] = '\0';
      acStack_5c0[0x10] = '\0';
      acStack_5c0[0x11] = '\0';
      acStack_5c0[0x12] = '\0';
      acStack_5c0[0x13] = '\0';
      acStack_5c0[0x14] = '\0';
      acStack_5c0[0x15] = '\0';
      acStack_5c0[0x16] = '\0';
      acStack_5c0[0x17] = '\0';
      func_0x000107c27984(acStack_5c0,acStack_5a0,&lStack_558,3);
      pcVar6 = "\x02";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_5a8 = acStack_5c0;
      func_0x000107c278ac(&puStack_5a8);
      lVar16 = 0;
      pcVar13 = pcVar12;
      pcVar9 = pcVar4;
      do {
        if ((&cStack_559)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        pcVar18 = acStack_5c0;
      } while (lVar16 != -0x48);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      pcStack_5f8 = acStack_5a0;
      do {
        pcVar18 = pcVar18 + -0x18;
      } while (pcVar18 != pcStack_5f8);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar7);
      pcVar3 = pcVar1;
      __Unwind_Resume();
      pcVar12 = acStack_680;
      pcStack_5c8 = FUN_10b29a088;
      lStack_618 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar6;
      pcVar11 = pcVar13;
      pcVar15 = pcVar9;
      pcVar4 = pcVar14;
      pcStack_610 = acStack_2a0;
      pcStack_608 = pcVar19;
      pcStack_600 = pcVar18;
      pcStack_5f0 = pcVar1;
      pcStack_5e8 = pcVar5;
      pcStack_5e0 = pcVar2;
      pcStack_5d8 = pcVar7;
      ppppuStack_5d0 = &ppppuStack_510;
      _objc_retain(pcVar6);
      _objc_retain(pcVar13);
      _objc_retain(pcVar9);
      if (pcVar3 != (char *)0x0) {
        plVar17 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x000107c278b8(acStack_660,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x000107c278b8(auStack_648,pcVar1);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar19 = pcVar9;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x000107c278b8(auStack_630,pcVar19);
        acStack_680[0] = '\0';
        acStack_680[1] = '\0';
        acStack_680[2] = '\0';
        acStack_680[3] = '\0';
        acStack_680[4] = '\0';
        acStack_680[5] = '\0';
        acStack_680[6] = '\0';
        acStack_680[7] = '\0';
        acStack_680[8] = '\0';
        acStack_680[9] = '\0';
        acStack_680[10] = '\0';
        acStack_680[0xb] = '\0';
        acStack_680[0xc] = '\0';
        acStack_680[0xd] = '\0';
        acStack_680[0xe] = '\0';
        acStack_680[0xf] = '\0';
        acStack_680[0x10] = '\0';
        acStack_680[0x11] = '\0';
        acStack_680[0x12] = '\0';
        acStack_680[0x13] = '\0';
        acStack_680[0x14] = '\0';
        acStack_680[0x15] = '\0';
        acStack_680[0x16] = '\0';
        acStack_680[0x17] = '\0';
        func_0x000107c27984(acStack_680,acStack_660,&lStack_618,3);
        pcVar8 = "\x01";
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puStack_668 = acStack_680;
        func_0x000107c278ac(&puStack_668);
        lVar16 = 0;
        pcVar11 = pcVar12;
        pcVar15 = pcVar14;
        do {
          if ((&cStack_619)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_630 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
          pcVar18 = acStack_680;
        } while (lVar16 != -0x48);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar13);
      pcVar1 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_618) {
        ___stack_chk_fail();
        _objc_release(pcVar9);
        pcStack_6b8 = acStack_660;
        do {
          pcVar18 = pcVar18 + -0x18;
        } while (pcVar18 != pcStack_6b8);
        _objc_release(pcVar9);
        _objc_release(pcVar13);
        _objc_release(pcVar6);
        pcVar7 = pcVar1;
        __Unwind_Resume();
        pcVar5 = acStack_740;
        pcStack_688 = FUN_10b29a348;
        lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar2 = pcVar11;
        pcStack_6d0 = acStack_2a0;
        pcStack_6c8 = pcVar19;
        pcStack_6c0 = pcVar18;
        pcStack_6b0 = pcVar1;
        pcStack_6a8 = pcVar9;
        pcStack_6a0 = pcVar13;
        pcStack_698 = pcVar6;
        ppppuStack_690 = &ppppuStack_5d0;
        _objc_retain(pcVar8);
        _objc_retain(pcVar11);
        _objc_retain(pcVar15);
        if (pcVar7 != (char *)0x0) {
          plVar17 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          func_0x000107c278b8(acStack_720,pcVar1);
          _objc_retain(pcVar11);
          if (pcVar11 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar11);
            pcVar1 = pcVar11;
            func_0x00010bdc3520(pcVar11);
          }
          _objc_release(pcVar11);
          func_0x000107c278b8(auStack_708,pcVar1);
          _objc_retain(pcVar15);
          if (pcVar15 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar15);
            pcVar1 = pcVar15;
            func_0x00010bdc3520(pcVar15);
          }
          _objc_release(pcVar15);
          func_0x000107c278b8(auStack_6f0,pcVar1);
          acStack_740[0] = '\0';
          acStack_740[1] = '\0';
          acStack_740[2] = '\0';
          acStack_740[3] = '\0';
          acStack_740[4] = '\0';
          acStack_740[5] = '\0';
          acStack_740[6] = '\0';
          acStack_740[7] = '\0';
          acStack_740[8] = '\0';
          acStack_740[9] = '\0';
          acStack_740[10] = '\0';
          acStack_740[0xb] = '\0';
          acStack_740[0xc] = '\0';
          acStack_740[0xd] = '\0';
          acStack_740[0xe] = '\0';
          acStack_740[0xf] = '\0';
          acStack_740[0x10] = '\0';
          acStack_740[0x11] = '\0';
          acStack_740[0x12] = '\0';
          acStack_740[0x13] = '\0';
          acStack_740[0x14] = '\0';
          acStack_740[0x15] = '\0';
          acStack_740[0x16] = '\0';
          acStack_740[0x17] = '\0';
          func_0x000107c27984(acStack_740,acStack_720,&lStack_6d8,3);
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110cd10d0,acStack_740,pcVar4);
          puStack_728 = acStack_740;
          func_0x000107c278ac(&puStack_728);
          lVar16 = 0;
          pcVar2 = pcVar5;
          do {
            if ((&cStack_6d9)[lVar16] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_6f0 + lVar16));
            }
            lVar16 = lVar16 + -0x18;
            pcVar18 = acStack_740;
          } while (lVar16 != -0x48);
        }
        _objc_release(pcVar15);
        _objc_release(pcVar11);
        pcVar1 = pcVar8;
        _objc_release(pcVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
          ___stack_chk_fail();
          _objc_release(pcVar15);
          do {
            pcVar18 = pcVar18 + -0x18;
          } while (pcVar18 != acStack_720);
          _objc_release(pcVar15);
          _objc_release(pcVar11);
          _objc_release(pcVar8);
          __Unwind_Resume(pcVar1);
          if ((long)pcVar2 < 1) {
            if (pcVar2 == (char *)0xffffffffffffffff) {
              func_0x00010c14cea0(pcVar1);
              _objc_retainAutoreleasedReturnValue();
            }
            else if (pcVar2 == (char *)0x0) {
              _objc_retain(pcVar1);
            }
          }
          else if (pcVar2 == (char *)0x1) {
            func_0x00010c14ce80(pcVar1);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar2 == (char *)0x9) {
            func_0x00010c14ce60(pcVar1);
            _objc_retainAutoreleasedReturnValue();
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b298ea4; end: 10b2991d7;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299198) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b298ea4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  char *unaff_x25;
  char *pcVar19;
  char acStack_660 [24];
  undefined1 *puStack_648;
  char acStack_640 [24];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  undefined8 ****ppppuStack_5b0;
  code *pcStack_5a8;
  char acStack_5a0 [24];
  undefined1 *puStack_588;
  char acStack_580 [24];
  undefined1 auStack_568 [24];
  undefined8 auStack_550 [2];
  char cStack_539;
  long lStack_538;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  char *pcStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  undefined8 ****ppppuStack_4f0;
  code *pcStack_4e8;
  char acStack_4e0 [24];
  undefined1 *puStack_4c8;
  char acStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_420 [24];
  undefined1 *puStack_408;
  char acStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  char *pcStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined1 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_360 [24];
  undefined1 *puStack_348;
  char acStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  char acStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  char acStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar8 = param_3;
  pcVar3 = param_4;
  pcVar6 = param_5;
  pcVar13 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_b8,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x000107c27984(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar1 = "\x01";
    unaff_x25 = acStack_d8;
    pcVar8 = acStack_d8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    pcStack_c0 = unaff_x25;
    func_0x000107c278ac(&pcStack_c0);
    lVar16 = 0;
    pcVar3 = param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar18 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_1e0;
  pcStack_e8 = FUN_10b2991d8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar9 = pcVar8;
  pcVar14 = pcVar3;
  pcVar5 = pcVar6;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(pcVar3);
  _objc_retain(pcVar6);
  _objc_retain(pcVar13);
  pcVar19 = (char *)0x0;
  if (pcVar18 != (char *)0x0) {
    plVar17 = *(long **)(pcVar18 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar18 = "";
    }
    else {
      pcVar18 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_1c0,pcVar18);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar18 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar18 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_1a8,pcVar18);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar18 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar18 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_190,pcVar18);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar18 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar18 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_178,pcVar18);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar18 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar18 = pcVar13;
      func_0x00010bdc3520(pcVar13);
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_160,pcVar18);
    acStack_1e0[0] = '\0';
    acStack_1e0[1] = '\0';
    acStack_1e0[2] = '\0';
    acStack_1e0[3] = '\0';
    acStack_1e0[4] = '\0';
    acStack_1e0[5] = '\0';
    acStack_1e0[6] = '\0';
    acStack_1e0[7] = '\0';
    acStack_1e0[8] = '\0';
    acStack_1e0[9] = '\0';
    acStack_1e0[10] = '\0';
    acStack_1e0[0xb] = '\0';
    acStack_1e0[0xc] = '\0';
    acStack_1e0[0xd] = '\0';
    acStack_1e0[0xe] = '\0';
    acStack_1e0[0xf] = '\0';
    acStack_1e0[0x10] = '\0';
    acStack_1e0[0x11] = '\0';
    acStack_1e0[0x12] = '\0';
    acStack_1e0[0x13] = '\0';
    acStack_1e0[0x14] = '\0';
    acStack_1e0[0x15] = '\0';
    acStack_1e0[0x16] = '\0';
    acStack_1e0[0x17] = '\0';
    func_0x000107c27984(acStack_1e0,acStack_1c0,&lStack_148,5);
    pcVar4 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1c8 = acStack_1e0;
    func_0x000107c278ac(&puStack_1c8);
    lVar16 = 0;
    pcVar19 = acStack_1c0;
    pcVar9 = pcVar7;
    pcVar14 = param_7;
    do {
      if ((&cStack_149)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x78);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar6);
  _objc_release(pcVar3);
  _objc_release(pcVar8);
  pcVar18 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  do {
    pcVar19 = pcVar19 + -0x18;
  } while (pcVar19 != acStack_1c0);
  _objc_release(pcVar13);
  _objc_release(pcVar6);
  _objc_release(pcVar3);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  pcVar2 = pcVar18;
  __Unwind_Resume();
  pcVar11 = acStack_2a0;
  pcStack_1e8 = FUN_10b299588;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar4;
  pcVar10 = pcVar9;
  pcVar15 = pcVar14;
  pcVar12 = pcVar5;
  pcStack_230 = acStack_1c0;
  pcStack_228 = pcVar19;
  pcStack_220 = pcVar18;
  pcStack_218 = pcVar13;
  pcStack_210 = pcVar6;
  pcStack_208 = pcVar3;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar1;
  ppuStack_1f0 = &puStack_f0;
  _objc_retain(pcVar4);
  _objc_retain(pcVar9);
  _objc_retain(pcVar14);
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(acStack_280,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_268,pcVar1);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar19 = pcVar14;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar14);
    func_0x000107c278b8(auStack_250,pcVar19);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x000107c27984(acStack_2a0,acStack_280,&lStack_238,3);
    pcVar7 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_288 = acStack_2a0;
    func_0x000107c278ac(&puStack_288);
    lVar16 = 0;
    pcVar10 = pcVar11;
    pcVar15 = pcVar5;
    do {
      if ((&cStack_239)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      pcVar18 = acStack_2a0;
    } while (lVar16 != -0x48);
  }
  _objc_release(pcVar14);
  _objc_release(pcVar9);
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar14);
  pcStack_2d8 = acStack_280;
  do {
    pcVar18 = pcVar18 + -0x18;
  } while (pcVar18 != pcStack_2d8);
  _objc_release(pcVar14);
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcVar2 = acStack_360;
  pcStack_2a8 = FUN_10b299848;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar6 = pcVar10;
  pcVar13 = pcVar15;
  pcVar5 = pcVar12;
  pcStack_2f0 = acStack_1c0;
  pcStack_2e8 = pcVar19;
  pcStack_2e0 = pcVar18;
  pcStack_2d0 = pcVar1;
  pcStack_2c8 = pcVar14;
  pcStack_2c0 = pcVar9;
  pcStack_2b8 = pcVar4;
  pppuStack_2b0 = &ppuStack_1f0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  _objc_retain(pcVar15);
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(acStack_340,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_328,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar19 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x000107c278b8(auStack_310,pcVar19);
    acStack_360[0] = '\0';
    acStack_360[1] = '\0';
    acStack_360[2] = '\0';
    acStack_360[3] = '\0';
    acStack_360[4] = '\0';
    acStack_360[5] = '\0';
    acStack_360[6] = '\0';
    acStack_360[7] = '\0';
    acStack_360[8] = '\0';
    acStack_360[9] = '\0';
    acStack_360[10] = '\0';
    acStack_360[0xb] = '\0';
    acStack_360[0xc] = '\0';
    acStack_360[0xd] = '\0';
    acStack_360[0xe] = '\0';
    acStack_360[0xf] = '\0';
    acStack_360[0x10] = '\0';
    acStack_360[0x11] = '\0';
    acStack_360[0x12] = '\0';
    acStack_360[0x13] = '\0';
    acStack_360[0x14] = '\0';
    acStack_360[0x15] = '\0';
    acStack_360[0x16] = '\0';
    acStack_360[0x17] = '\0';
    func_0x000107c27984(acStack_360,acStack_340,&lStack_2f8,3);
    pcVar8 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_348 = acStack_360;
    func_0x000107c278ac(&puStack_348);
    lVar16 = 0;
    pcVar6 = pcVar2;
    pcVar13 = pcVar12;
    do {
      if ((&cStack_2f9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      pcVar18 = acStack_360;
    } while (lVar16 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar10);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcStack_398 = acStack_340;
    do {
      pcVar18 = pcVar18 + -0x18;
    } while (pcVar18 != pcStack_398);
    _objc_release(pcVar15);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    pcVar4 = pcVar1;
    __Unwind_Resume();
    pcVar12 = acStack_420;
    pcStack_368 = FUN_10b299b08;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar8;
    pcVar9 = pcVar6;
    pcVar14 = pcVar13;
    pcVar2 = pcVar5;
    pcStack_3b0 = acStack_1c0;
    pcStack_3a8 = pcVar19;
    pcStack_3a0 = pcVar18;
    pcStack_390 = pcVar1;
    pcStack_388 = pcVar15;
    pcStack_380 = pcVar10;
    pcStack_378 = pcVar7;
    ppppuStack_370 = &pppuStack_2b0;
    _objc_retain(pcVar8);
    _objc_retain(pcVar6);
    _objc_retain(pcVar13);
    if (pcVar4 != (char *)0x0) {
      plVar17 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(acStack_400,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_3e8,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar19 = pcVar13;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar13);
      func_0x000107c278b8(auStack_3d0,pcVar19);
      acStack_420[0] = '\0';
      acStack_420[1] = '\0';
      acStack_420[2] = '\0';
      acStack_420[3] = '\0';
      acStack_420[4] = '\0';
      acStack_420[5] = '\0';
      acStack_420[6] = '\0';
      acStack_420[7] = '\0';
      acStack_420[8] = '\0';
      acStack_420[9] = '\0';
      acStack_420[10] = '\0';
      acStack_420[0xb] = '\0';
      acStack_420[0xc] = '\0';
      acStack_420[0xd] = '\0';
      acStack_420[0xe] = '\0';
      acStack_420[0xf] = '\0';
      acStack_420[0x10] = '\0';
      acStack_420[0x11] = '\0';
      acStack_420[0x12] = '\0';
      acStack_420[0x13] = '\0';
      acStack_420[0x14] = '\0';
      acStack_420[0x15] = '\0';
      acStack_420[0x16] = '\0';
      acStack_420[0x17] = '\0';
      func_0x000107c27984(acStack_420,acStack_400,&lStack_3b8,3);
      pcVar3 = "\x02";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_408 = acStack_420;
      func_0x000107c278ac(&puStack_408);
      lVar16 = 0;
      pcVar9 = pcVar12;
      pcVar14 = pcVar5;
      do {
        if ((&cStack_3b9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3d0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        pcVar18 = acStack_420;
      } while (lVar16 != -0x48);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar6);
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar13);
    pcStack_458 = acStack_400;
    do {
      pcVar18 = pcVar18 + -0x18;
    } while (pcVar18 != pcStack_458);
    _objc_release(pcVar13);
    _objc_release(pcVar6);
    _objc_release(pcVar8);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcVar12 = acStack_4e0;
    pcStack_428 = FUN_10b299dc8;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar3;
    pcVar7 = pcVar9;
    pcVar10 = pcVar14;
    pcVar15 = pcVar2;
    pcStack_470 = acStack_1c0;
    pcStack_468 = pcVar19;
    pcStack_460 = pcVar18;
    pcStack_450 = pcVar1;
    pcStack_448 = pcVar13;
    pcStack_440 = pcVar6;
    pcStack_438 = pcVar8;
    ppppuStack_430 = &ppppuStack_370;
    _objc_retain(pcVar3);
    _objc_retain(pcVar9);
    _objc_retain(pcVar14);
    if (pcVar5 != (char *)0x0) {
      plVar17 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x000107c278b8(acStack_4c0,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_4a8,pcVar1);
      _objc_retain(pcVar14);
      if (pcVar14 == (char *)0x0) {
        pcVar19 = "";
      }
      else {
        _objc_retainAutorelease(pcVar14);
        pcVar19 = pcVar14;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar14);
      func_0x000107c278b8(auStack_490,pcVar19);
      acStack_4e0[0] = '\0';
      acStack_4e0[1] = '\0';
      acStack_4e0[2] = '\0';
      acStack_4e0[3] = '\0';
      acStack_4e0[4] = '\0';
      acStack_4e0[5] = '\0';
      acStack_4e0[6] = '\0';
      acStack_4e0[7] = '\0';
      acStack_4e0[8] = '\0';
      acStack_4e0[9] = '\0';
      acStack_4e0[10] = '\0';
      acStack_4e0[0xb] = '\0';
      acStack_4e0[0xc] = '\0';
      acStack_4e0[0xd] = '\0';
      acStack_4e0[0xe] = '\0';
      acStack_4e0[0xf] = '\0';
      acStack_4e0[0x10] = '\0';
      acStack_4e0[0x11] = '\0';
      acStack_4e0[0x12] = '\0';
      acStack_4e0[0x13] = '\0';
      acStack_4e0[0x14] = '\0';
      acStack_4e0[0x15] = '\0';
      acStack_4e0[0x16] = '\0';
      acStack_4e0[0x17] = '\0';
      func_0x000107c27984(acStack_4e0,acStack_4c0,&lStack_478,3);
      pcVar4 = "\x02";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_4c8 = acStack_4e0;
      func_0x000107c278ac(&puStack_4c8);
      lVar16 = 0;
      pcVar7 = pcVar12;
      pcVar10 = pcVar2;
      do {
        if ((&cStack_479)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        pcVar18 = acStack_4e0;
      } while (lVar16 != -0x48);
    }
    _objc_release(pcVar14);
    _objc_release(pcVar9);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
      ___stack_chk_fail();
      _objc_release(pcVar14);
      pcStack_518 = acStack_4c0;
      do {
        pcVar18 = pcVar18 + -0x18;
      } while (pcVar18 != pcStack_518);
      _objc_release(pcVar14);
      _objc_release(pcVar9);
      _objc_release(pcVar3);
      pcVar6 = pcVar1;
      __Unwind_Resume();
      pcVar12 = acStack_5a0;
      pcStack_4e8 = FUN_10b29a088;
      lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar8 = pcVar4;
      pcVar13 = pcVar7;
      pcVar5 = pcVar10;
      pcVar2 = pcVar15;
      pcStack_530 = acStack_1c0;
      pcStack_528 = pcVar19;
      pcStack_520 = pcVar18;
      pcStack_510 = pcVar1;
      pcStack_508 = pcVar14;
      pcStack_500 = pcVar9;
      pcStack_4f8 = pcVar3;
      ppppuStack_4f0 = &ppppuStack_430;
      _objc_retain(pcVar4);
      _objc_retain(pcVar7);
      _objc_retain(pcVar10);
      if (pcVar6 != (char *)0x0) {
        plVar17 = *(long **)(pcVar6 + 8);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar4;
          _objc_retainAutorelease(pcVar4);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar4);
        func_0x000107c278b8(acStack_580,pcVar1);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar1 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x000107c278b8(auStack_568,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar19 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar19 = pcVar10;
          func_0x00010bdc3520();
        }
        _objc_release(pcVar10);
        func_0x000107c278b8(auStack_550,pcVar19);
        acStack_5a0[0] = '\0';
        acStack_5a0[1] = '\0';
        acStack_5a0[2] = '\0';
        acStack_5a0[3] = '\0';
        acStack_5a0[4] = '\0';
        acStack_5a0[5] = '\0';
        acStack_5a0[6] = '\0';
        acStack_5a0[7] = '\0';
        acStack_5a0[8] = '\0';
        acStack_5a0[9] = '\0';
        acStack_5a0[10] = '\0';
        acStack_5a0[0xb] = '\0';
        acStack_5a0[0xc] = '\0';
        acStack_5a0[0xd] = '\0';
        acStack_5a0[0xe] = '\0';
        acStack_5a0[0xf] = '\0';
        acStack_5a0[0x10] = '\0';
        acStack_5a0[0x11] = '\0';
        acStack_5a0[0x12] = '\0';
        acStack_5a0[0x13] = '\0';
        acStack_5a0[0x14] = '\0';
        acStack_5a0[0x15] = '\0';
        acStack_5a0[0x16] = '\0';
        acStack_5a0[0x17] = '\0';
        func_0x000107c27984(acStack_5a0,acStack_580,&lStack_538,3);
        pcVar8 = "\x01";
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puStack_588 = acStack_5a0;
        func_0x000107c278ac(&puStack_588);
        lVar16 = 0;
        pcVar13 = pcVar12;
        pcVar5 = pcVar15;
        do {
          if ((&cStack_539)[lVar16] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_550 + lVar16));
          }
          lVar16 = lVar16 + -0x18;
          pcVar18 = acStack_5a0;
        } while (lVar16 != -0x48);
      }
      _objc_release(pcVar10);
      _objc_release(pcVar7);
      pcVar1 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_538) {
        ___stack_chk_fail();
        _objc_release(pcVar10);
        pcStack_5d8 = acStack_580;
        do {
          pcVar18 = pcVar18 + -0x18;
        } while (pcVar18 != pcStack_5d8);
        _objc_release(pcVar10);
        _objc_release(pcVar7);
        _objc_release(pcVar4);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        pcVar9 = acStack_660;
        pcStack_5a8 = FUN_10b29a348;
        lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar6 = pcVar13;
        pcStack_5f0 = acStack_1c0;
        pcStack_5e8 = pcVar19;
        pcStack_5e0 = pcVar18;
        pcStack_5d0 = pcVar1;
        pcStack_5c8 = pcVar10;
        pcStack_5c0 = pcVar7;
        pcStack_5b8 = pcVar4;
        ppppuStack_5b0 = &ppppuStack_4f0;
        _objc_retain(pcVar8);
        _objc_retain(pcVar13);
        _objc_retain(pcVar5);
        if (pcVar3 != (char *)0x0) {
          plVar17 = *(long **)(pcVar3 + 8);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar8;
            _objc_retainAutorelease(pcVar8);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar8);
          func_0x000107c278b8(acStack_640,pcVar1);
          _objc_retain(pcVar13);
          if (pcVar13 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar13);
            pcVar1 = pcVar13;
            func_0x00010bdc3520(pcVar13);
          }
          _objc_release(pcVar13);
          func_0x000107c278b8(auStack_628,pcVar1);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar5);
            pcVar1 = pcVar5;
            func_0x00010bdc3520(pcVar5);
          }
          _objc_release(pcVar5);
          func_0x000107c278b8(auStack_610,pcVar1);
          acStack_660[0] = '\0';
          acStack_660[1] = '\0';
          acStack_660[2] = '\0';
          acStack_660[3] = '\0';
          acStack_660[4] = '\0';
          acStack_660[5] = '\0';
          acStack_660[6] = '\0';
          acStack_660[7] = '\0';
          acStack_660[8] = '\0';
          acStack_660[9] = '\0';
          acStack_660[10] = '\0';
          acStack_660[0xb] = '\0';
          acStack_660[0xc] = '\0';
          acStack_660[0xd] = '\0';
          acStack_660[0xe] = '\0';
          acStack_660[0xf] = '\0';
          acStack_660[0x10] = '\0';
          acStack_660[0x11] = '\0';
          acStack_660[0x12] = '\0';
          acStack_660[0x13] = '\0';
          acStack_660[0x14] = '\0';
          acStack_660[0x15] = '\0';
          acStack_660[0x16] = '\0';
          acStack_660[0x17] = '\0';
          func_0x000107c27984(acStack_660,acStack_640,&lStack_5f8,3);
          (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110cd10d0,acStack_660,pcVar2);
          puStack_648 = acStack_660;
          func_0x000107c278ac(&puStack_648);
          lVar16 = 0;
          pcVar6 = pcVar9;
          do {
            if ((&cStack_5f9)[lVar16] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar16));
            }
            lVar16 = lVar16 + -0x18;
            pcVar18 = acStack_660;
          } while (lVar16 != -0x48);
        }
        _objc_release(pcVar5);
        _objc_release(pcVar13);
        pcVar1 = pcVar8;
        _objc_release(pcVar8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5f8) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          do {
            pcVar18 = pcVar18 + -0x18;
          } while (pcVar18 != acStack_640);
          _objc_release(pcVar5);
          _objc_release(pcVar13);
          _objc_release(pcVar8);
          __Unwind_Resume(pcVar1);
          if ((long)pcVar6 < 1) {
            if (pcVar6 == (char *)0xffffffffffffffff) {
              func_0x00010c14cea0(pcVar1);
              _objc_retainAutoreleasedReturnValue();
            }
            else if (pcVar6 == (char *)0x0) {
              _objc_retain(pcVar1);
            }
          }
          else if (pcVar6 == (char *)0x1) {
            func_0x00010c14ce80(pcVar1);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar6 == (char *)0x9) {
            func_0x00010c14ce60(pcVar1);
            _objc_retainAutoreleasedReturnValue();
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b2991d8; end: 10b299587;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299540) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b2991d8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  long *plVar18;
  char acStack_580 [24];
  undefined1 *puStack_568;
  char acStack_560 [24];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  char *pcStack_510;
  char *pcStack_508;
  char *pcStack_500;
  char *pcStack_4f8;
  char *pcStack_4f0;
  char *pcStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  char acStack_400 [24];
  undefined1 *puStack_3e8;
  char acStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  char acStack_320 [24];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  char acStack_280 [24];
  undefined1 *puStack_268;
  char acStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1c0 [24];
  undefined1 *puStack_1a8;
  char acStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  char acStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  pcVar16 = acStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  pcVar17 = (char *)0x0;
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(acStack_e0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_c8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_b0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_98,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      pcVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_80,pcVar1);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x000107c27984(acStack_100,acStack_e0,&lStack_68,5);
    pcVar1 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_e8 = acStack_100;
    func_0x000107c278ac(&puStack_e8);
    lVar15 = 0;
    pcVar17 = acStack_e0;
    pcVar7 = pcVar16;
    pcVar5 = param_7;
    do {
      if ((&cStack_69)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    pcVar17 = pcVar17 + -0x18;
  } while (pcVar17 != acStack_e0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar16;
  __Unwind_Resume();
  pcVar4 = acStack_1c0;
  pcStack_108 = FUN_10b299588;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = pcVar5;
  pcVar13 = pcVar3;
  pcStack_150 = acStack_e0;
  pcStack_148 = pcVar17;
  pcStack_140 = pcVar16;
  pcStack_138 = param_6;
  pcStack_130 = param_5;
  pcStack_128 = param_4;
  pcStack_120 = param_3;
  pcStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(acStack_1a0,pcVar17);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar17 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_188,pcVar17);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar17 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_170,pcVar17);
    acStack_1c0[0] = '\0';
    acStack_1c0[1] = '\0';
    acStack_1c0[2] = '\0';
    acStack_1c0[3] = '\0';
    acStack_1c0[4] = '\0';
    acStack_1c0[5] = '\0';
    acStack_1c0[6] = '\0';
    acStack_1c0[7] = '\0';
    acStack_1c0[8] = '\0';
    acStack_1c0[9] = '\0';
    acStack_1c0[10] = '\0';
    acStack_1c0[0xb] = '\0';
    acStack_1c0[0xc] = '\0';
    acStack_1c0[0xd] = '\0';
    acStack_1c0[0xe] = '\0';
    acStack_1c0[0xf] = '\0';
    acStack_1c0[0x10] = '\0';
    acStack_1c0[0x11] = '\0';
    acStack_1c0[0x12] = '\0';
    acStack_1c0[0x13] = '\0';
    acStack_1c0[0x14] = '\0';
    acStack_1c0[0x15] = '\0';
    acStack_1c0[0x16] = '\0';
    acStack_1c0[0x17] = '\0';
    func_0x000107c27984(acStack_1c0,acStack_1a0,&lStack_158,3);
    pcVar6 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_1a8 = acStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    lVar15 = 0;
    pcVar8 = pcVar4;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_159)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_1c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  pcStack_1f8 = acStack_1a0;
  do {
    pcVar16 = pcVar16 + -0x18;
  } while (pcVar16 != pcStack_1f8);
  _objc_release(pcVar5);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar10 = acStack_280;
  pcStack_1c8 = FUN_10b299848;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar9 = pcVar8;
  pcVar12 = pcVar11;
  pcVar14 = pcVar13;
  pcStack_210 = acStack_e0;
  pcStack_208 = pcVar17;
  pcStack_200 = pcVar16;
  pcStack_1f0 = pcVar3;
  pcStack_1e8 = pcVar5;
  pcStack_1e0 = pcVar7;
  pcStack_1d8 = pcVar1;
  ppuStack_1d0 = &puStack_110;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(acStack_260,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_248,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar17 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_230,pcVar17);
    acStack_280[0] = '\0';
    acStack_280[1] = '\0';
    acStack_280[2] = '\0';
    acStack_280[3] = '\0';
    acStack_280[4] = '\0';
    acStack_280[5] = '\0';
    acStack_280[6] = '\0';
    acStack_280[7] = '\0';
    acStack_280[8] = '\0';
    acStack_280[9] = '\0';
    acStack_280[10] = '\0';
    acStack_280[0xb] = '\0';
    acStack_280[0xc] = '\0';
    acStack_280[0xd] = '\0';
    acStack_280[0xe] = '\0';
    acStack_280[0xf] = '\0';
    acStack_280[0x10] = '\0';
    acStack_280[0x11] = '\0';
    acStack_280[0x12] = '\0';
    acStack_280[0x13] = '\0';
    acStack_280[0x14] = '\0';
    acStack_280[0x15] = '\0';
    acStack_280[0x16] = '\0';
    acStack_280[0x17] = '\0';
    func_0x000107c27984(acStack_280,acStack_260,&lStack_218,3);
    pcVar2 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_268 = acStack_280;
    func_0x000107c278ac(&puStack_268);
    lVar15 = 0;
    pcVar9 = pcVar10;
    pcVar12 = pcVar13;
    do {
      if ((&cStack_219)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_280;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  pcStack_2b8 = acStack_260;
  do {
    pcVar16 = pcVar16 + -0x18;
  } while (pcVar16 != pcStack_2b8);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_340;
  pcStack_288 = FUN_10b299b08;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar3 = pcVar9;
  pcVar13 = pcVar12;
  pcVar4 = pcVar14;
  pcStack_2d0 = acStack_e0;
  pcStack_2c8 = pcVar17;
  pcStack_2c0 = pcVar16;
  pcStack_2b0 = pcVar1;
  pcStack_2a8 = pcVar11;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar6;
  pppuStack_290 = &ppuStack_1d0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  _objc_retain(pcVar12);
  if (pcVar5 != (char *)0x0) {
    plVar18 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x000107c278b8(acStack_320,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_308,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar17 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_2f0,pcVar17);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x000107c27984(acStack_340,acStack_320,&lStack_2d8,3);
    pcVar7 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_328 = acStack_340;
    func_0x000107c278ac(&puStack_328);
    lVar15 = 0;
    pcVar3 = pcVar10;
    pcVar13 = pcVar14;
    do {
      if ((&cStack_2d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_340;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar9);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcStack_378 = acStack_320;
  do {
    pcVar16 = pcVar16 + -0x18;
  } while (pcVar16 != pcStack_378);
  _objc_release(pcVar12);
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_400;
  pcStack_348 = FUN_10b299dc8;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar7;
  pcVar8 = pcVar3;
  pcVar11 = pcVar13;
  pcVar14 = pcVar4;
  pcStack_390 = acStack_e0;
  pcStack_388 = pcVar17;
  pcStack_380 = pcVar16;
  pcStack_370 = pcVar1;
  pcStack_368 = pcVar12;
  pcStack_360 = pcVar9;
  pcStack_358 = pcVar2;
  pppuStack_350 = &pppuStack_290;
  _objc_retain(pcVar7);
  _objc_retain(pcVar3);
  _objc_retain(pcVar13);
  if (pcVar6 != (char *)0x0) {
    plVar18 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(acStack_3e0,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x000107c278b8(auStack_3c8,pcVar1);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar13);
      pcVar17 = pcVar13;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x000107c278b8(auStack_3b0,pcVar17);
    acStack_400[0] = '\0';
    acStack_400[1] = '\0';
    acStack_400[2] = '\0';
    acStack_400[3] = '\0';
    acStack_400[4] = '\0';
    acStack_400[5] = '\0';
    acStack_400[6] = '\0';
    acStack_400[7] = '\0';
    acStack_400[8] = '\0';
    acStack_400[9] = '\0';
    acStack_400[10] = '\0';
    acStack_400[0xb] = '\0';
    acStack_400[0xc] = '\0';
    acStack_400[0xd] = '\0';
    acStack_400[0xe] = '\0';
    acStack_400[0xf] = '\0';
    acStack_400[0x10] = '\0';
    acStack_400[0x11] = '\0';
    acStack_400[0x12] = '\0';
    acStack_400[0x13] = '\0';
    acStack_400[0x14] = '\0';
    acStack_400[0x15] = '\0';
    acStack_400[0x16] = '\0';
    acStack_400[0x17] = '\0';
    func_0x000107c27984(acStack_400,acStack_3e0,&lStack_398,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_3e8 = acStack_400;
    func_0x000107c278ac(&puStack_3e8);
    lVar15 = 0;
    pcVar8 = pcVar10;
    pcVar11 = pcVar4;
    do {
      if ((&cStack_399)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_400;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar13);
  pcStack_438 = acStack_3e0;
  do {
    pcVar16 = pcVar16 + -0x18;
  } while (pcVar16 != pcStack_438);
  _objc_release(pcVar13);
  _objc_release(pcVar3);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_4c0;
  pcStack_408 = FUN_10b29a088;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar4 = pcVar8;
  pcVar9 = pcVar11;
  pcVar12 = pcVar14;
  pcStack_450 = acStack_e0;
  pcStack_448 = pcVar17;
  pcStack_440 = pcVar16;
  pcStack_430 = pcVar1;
  pcStack_428 = pcVar13;
  pcStack_420 = pcVar3;
  pcStack_418 = pcVar7;
  pppuStack_410 = &pppuStack_350;
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(acStack_4a0,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_488,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar17 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_470,pcVar17);
    acStack_4c0[0] = '\0';
    acStack_4c0[1] = '\0';
    acStack_4c0[2] = '\0';
    acStack_4c0[3] = '\0';
    acStack_4c0[4] = '\0';
    acStack_4c0[5] = '\0';
    acStack_4c0[6] = '\0';
    acStack_4c0[7] = '\0';
    acStack_4c0[8] = '\0';
    acStack_4c0[9] = '\0';
    acStack_4c0[10] = '\0';
    acStack_4c0[0xb] = '\0';
    acStack_4c0[0xc] = '\0';
    acStack_4c0[0xd] = '\0';
    acStack_4c0[0xe] = '\0';
    acStack_4c0[0xf] = '\0';
    acStack_4c0[0x10] = '\0';
    acStack_4c0[0x11] = '\0';
    acStack_4c0[0x12] = '\0';
    acStack_4c0[0x13] = '\0';
    acStack_4c0[0x14] = '\0';
    acStack_4c0[0x15] = '\0';
    acStack_4c0[0x16] = '\0';
    acStack_4c0[0x17] = '\0';
    func_0x000107c27984(acStack_4c0,acStack_4a0,&lStack_458,3);
    pcVar6 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_4a8 = acStack_4c0;
    func_0x000107c278ac(&puStack_4a8);
    lVar15 = 0;
    pcVar4 = pcVar10;
    pcVar9 = pcVar14;
    do {
      if ((&cStack_459)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_4c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  pcStack_4f8 = acStack_4a0;
  do {
    pcVar16 = pcVar16 + -0x18;
  } while (pcVar16 != pcStack_4f8);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar7 = pcVar1;
  __Unwind_Resume();
  pcVar2 = acStack_580;
  pcStack_4c8 = FUN_10b29a348;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar4;
  pcStack_510 = acStack_e0;
  pcStack_508 = pcVar17;
  pcStack_500 = pcVar16;
  pcStack_4f0 = pcVar1;
  pcStack_4e8 = pcVar11;
  pcStack_4e0 = pcVar8;
  pcStack_4d8 = pcVar5;
  pppuStack_4d0 = &pppuStack_410;
  _objc_retain(pcVar6);
  _objc_retain(pcVar4);
  _objc_retain(pcVar9);
  if (pcVar7 != (char *)0x0) {
    plVar18 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(acStack_560,pcVar1);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar1 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_548,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_530,pcVar1);
    acStack_580[0] = '\0';
    acStack_580[1] = '\0';
    acStack_580[2] = '\0';
    acStack_580[3] = '\0';
    acStack_580[4] = '\0';
    acStack_580[5] = '\0';
    acStack_580[6] = '\0';
    acStack_580[7] = '\0';
    acStack_580[8] = '\0';
    acStack_580[9] = '\0';
    acStack_580[10] = '\0';
    acStack_580[0xb] = '\0';
    acStack_580[0xc] = '\0';
    acStack_580[0xd] = '\0';
    acStack_580[0xe] = '\0';
    acStack_580[0xf] = '\0';
    acStack_580[0x10] = '\0';
    acStack_580[0x11] = '\0';
    acStack_580[0x12] = '\0';
    acStack_580[0x13] = '\0';
    acStack_580[0x14] = '\0';
    acStack_580[0x15] = '\0';
    acStack_580[0x16] = '\0';
    acStack_580[0x17] = '\0';
    func_0x000107c27984(acStack_580,acStack_560,&lStack_518,3);
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_110cd10d0,acStack_580,pcVar12);
    puStack_568 = acStack_580;
    func_0x000107c278ac(&puStack_568);
    lVar15 = 0;
    pcVar3 = pcVar2;
    do {
      if ((&cStack_519)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      pcVar16 = acStack_580;
    } while (lVar15 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar4);
  pcVar1 = pcVar6;
  _objc_release(pcVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      pcVar16 = pcVar16 + -0x18;
    } while (pcVar16 != acStack_560);
    _objc_release(pcVar9);
    _objc_release(pcVar4);
    _objc_release(pcVar6);
    __Unwind_Resume(pcVar1);
    if ((long)pcVar3 < 1) {
      if (pcVar3 == (char *)0xffffffffffffffff) {
        func_0x00010c14cea0(pcVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar3 == (char *)0x0) {
        _objc_retain(pcVar1);
      }
    }
    else if (pcVar3 == (char *)0x1) {
      func_0x00010c14ce80(pcVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (pcVar3 == (char *)0x9) {
      func_0x00010c14ce60(pcVar1);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar1);
    return;
  }
  return;
}



/* Entry: 10b299588; end: 10b299847;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299810) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b299588(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char acStack_480 [24];
  undefined1 *puStack_468;
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    pcVar5 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  pcVar9 = pcVar8;
  pcVar10 = pcVar3;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_240;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar5 = pcVar6;
  pcVar8 = pcVar9;
  pcVar2 = pcVar10;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_220,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_208,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_228 = acStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar11 = 0;
    pcVar5 = pcVar7;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_1d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_220);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcVar7 = acStack_300;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  pcVar9 = pcVar8;
  pcVar10 = pcVar2;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_2e0,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar3 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_2c8,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x000107c27984(acStack_300,auStack_2e0,&lStack_298,3);
    pcVar4 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = acStack_300;
    func_0x000107c278ac(&puStack_2e8);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar2;
    do {
      if ((&cStack_299)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_2e0);
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_3c0;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  pcVar5 = pcVar6;
  pcVar8 = pcVar9;
  pcVar2 = pcVar10;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_3a0,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_388,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_370,pcVar1);
    acStack_3c0[0] = '\0';
    acStack_3c0[1] = '\0';
    acStack_3c0[2] = '\0';
    acStack_3c0[3] = '\0';
    acStack_3c0[4] = '\0';
    acStack_3c0[5] = '\0';
    acStack_3c0[6] = '\0';
    acStack_3c0[7] = '\0';
    acStack_3c0[8] = '\0';
    acStack_3c0[9] = '\0';
    acStack_3c0[10] = '\0';
    acStack_3c0[0xb] = '\0';
    acStack_3c0[0xc] = '\0';
    acStack_3c0[0xd] = '\0';
    acStack_3c0[0xe] = '\0';
    acStack_3c0[0xf] = '\0';
    acStack_3c0[0x10] = '\0';
    acStack_3c0[0x11] = '\0';
    acStack_3c0[0x12] = '\0';
    acStack_3c0[0x13] = '\0';
    acStack_3c0[0x14] = '\0';
    acStack_3c0[0x15] = '\0';
    acStack_3c0[0x16] = '\0';
    acStack_3c0[0x17] = '\0';
    func_0x000107c27984(acStack_3c0,auStack_3a0,&lStack_358,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_3a8 = acStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    lVar11 = 0;
    pcVar5 = pcVar7;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_359)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_3c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_3a0);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcVar6 = acStack_480;
    lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar5;
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_460,pcVar3);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar3 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_448,pcVar3);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar3 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_430,pcVar3);
      acStack_480[0] = '\0';
      acStack_480[1] = '\0';
      acStack_480[2] = '\0';
      acStack_480[3] = '\0';
      acStack_480[4] = '\0';
      acStack_480[5] = '\0';
      acStack_480[6] = '\0';
      acStack_480[7] = '\0';
      acStack_480[8] = '\0';
      acStack_480[9] = '\0';
      acStack_480[10] = '\0';
      acStack_480[0xb] = '\0';
      acStack_480[0xc] = '\0';
      acStack_480[0xd] = '\0';
      acStack_480[0xe] = '\0';
      acStack_480[0xf] = '\0';
      acStack_480[0x10] = '\0';
      acStack_480[0x11] = '\0';
      acStack_480[0x12] = '\0';
      acStack_480[0x13] = '\0';
      acStack_480[0x14] = '\0';
      acStack_480[0x15] = '\0';
      acStack_480[0x16] = '\0';
      acStack_480[0x17] = '\0';
      func_0x000107c27984(acStack_480,auStack_460,&lStack_418,3);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110cd10d0,acStack_480,pcVar2);
      puStack_468 = acStack_480;
      func_0x000107c278ac(&puStack_468);
      lVar11 = 0;
      pcVar4 = pcVar6;
      do {
        if ((&cStack_419)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_480;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar5);
    pcVar3 = pcVar1;
    _objc_release(pcVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != auStack_460);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      __Unwind_Resume(pcVar3);
      if ((long)pcVar4 < 1) {
        if (pcVar4 == (char *)0xffffffffffffffff) {
          func_0x00010c14cea0(pcVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar4 == (char *)0x0) {
          _objc_retain(pcVar3);
        }
      }
      else if (pcVar4 == (char *)0x1) {
        func_0x00010c14ce80(pcVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar4 == (char *)0x9) {
        func_0x00010c14ce60(pcVar3);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b299848; end: 10b299b07;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b299ad0) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b299848(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char acStack_3c0 [24];
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    pcVar4 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  pcVar10 = pcVar3;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_240;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar4 = pcVar6;
  pcVar8 = pcVar9;
  pcVar2 = pcVar10;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_220,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_208,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar1 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_228 = acStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar11 = 0;
    pcVar4 = pcVar7;
    pcVar8 = pcVar10;
    do {
      if ((&cStack_1d9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_220);
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar7 = acStack_300;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  pcVar10 = pcVar2;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_2e0,pcVar3);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar3 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_2c8,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x000107c27984(acStack_300,auStack_2e0,&lStack_298,3);
    pcVar5 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_2e8 = acStack_300;
    func_0x000107c278ac(&puStack_2e8);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar2;
    do {
      if ((&cStack_299)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_2e0);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar4 = acStack_3c0;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_3a0,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_388,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_370,pcVar1);
      acStack_3c0[0] = '\0';
      acStack_3c0[1] = '\0';
      acStack_3c0[2] = '\0';
      acStack_3c0[3] = '\0';
      acStack_3c0[4] = '\0';
      acStack_3c0[5] = '\0';
      acStack_3c0[6] = '\0';
      acStack_3c0[7] = '\0';
      acStack_3c0[8] = '\0';
      acStack_3c0[9] = '\0';
      acStack_3c0[10] = '\0';
      acStack_3c0[0xb] = '\0';
      acStack_3c0[0xc] = '\0';
      acStack_3c0[0xd] = '\0';
      acStack_3c0[0xe] = '\0';
      acStack_3c0[0xf] = '\0';
      acStack_3c0[0x10] = '\0';
      acStack_3c0[0x11] = '\0';
      acStack_3c0[0x12] = '\0';
      acStack_3c0[0x13] = '\0';
      acStack_3c0[0x14] = '\0';
      acStack_3c0[0x15] = '\0';
      acStack_3c0[0x16] = '\0';
      acStack_3c0[0x17] = '\0';
      func_0x000107c27984(acStack_3c0,auStack_3a0,&lStack_358,3);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110cd10d0,acStack_3c0,pcVar10);
      puStack_3a8 = acStack_3c0;
      func_0x000107c278ac(&puStack_3a8);
      lVar11 = 0;
      pcVar1 = pcVar4;
      do {
        if ((&cStack_359)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_3c0;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar4 = pcVar5;
    _objc_release(pcVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != auStack_3a0);
      _objc_release(pcVar9);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      __Unwind_Resume(pcVar4);
      if ((long)pcVar1 < 1) {
        if (pcVar1 == (char *)0xffffffffffffffff) {
          func_0x00010c14cea0(pcVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar1 == (char *)0x0) {
          _objc_retain(pcVar4);
        }
      }
      else if (pcVar1 == (char *)0x1) {
        func_0x00010c14ce80(pcVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar1 == (char *)0x9) {
        func_0x00010c14ce60(pcVar4);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b299b08; end: 10b299dc7;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b299d90) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b299b08(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    pcVar5 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  pcVar9 = pcVar8;
  pcVar10 = pcVar3;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    _objc_release(pcVar8);
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar7 = acStack_240;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar4;
    pcVar5 = pcVar6;
    pcVar8 = pcVar9;
    pcVar2 = pcVar10;
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(auStack_220,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_208,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_1f0,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
      pcVar1 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_228 = acStack_240;
      func_0x000107c278ac(&puStack_228);
      lVar11 = 0;
      pcVar5 = pcVar7;
      pcVar8 = pcVar10;
      do {
        if ((&cStack_1d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_240;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar3 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != auStack_220);
      _objc_release(pcVar9);
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      __Unwind_Resume();
      pcVar6 = acStack_300;
      lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar5;
      _objc_retain(pcVar1);
      _objc_retain(pcVar5);
      _objc_retain(pcVar8);
      if (pcVar3 != (char *)0x0) {
        plVar12 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x000107c278b8(auStack_2e0,pcVar3);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar3 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x000107c278b8(auStack_2c8,pcVar3);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar3 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_2b0,pcVar3);
        acStack_300[0] = '\0';
        acStack_300[1] = '\0';
        acStack_300[2] = '\0';
        acStack_300[3] = '\0';
        acStack_300[4] = '\0';
        acStack_300[5] = '\0';
        acStack_300[6] = '\0';
        acStack_300[7] = '\0';
        acStack_300[8] = '\0';
        acStack_300[9] = '\0';
        acStack_300[10] = '\0';
        acStack_300[0xb] = '\0';
        acStack_300[0xc] = '\0';
        acStack_300[0xd] = '\0';
        acStack_300[0xe] = '\0';
        acStack_300[0xf] = '\0';
        acStack_300[0x10] = '\0';
        acStack_300[0x11] = '\0';
        acStack_300[0x12] = '\0';
        acStack_300[0x13] = '\0';
        acStack_300[0x14] = '\0';
        acStack_300[0x15] = '\0';
        acStack_300[0x16] = '\0';
        acStack_300[0x17] = '\0';
        func_0x000107c27984(acStack_300,auStack_2e0,&lStack_298,3);
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110cd10d0,acStack_300,pcVar2);
        puStack_2e8 = acStack_300;
        func_0x000107c278ac(&puStack_2e8);
        lVar11 = 0;
        pcVar4 = pcVar6;
        do {
          if ((&cStack_299)[lVar11] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar11));
          }
          lVar11 = lVar11 + -0x18;
          unaff_x24 = acStack_300;
        } while (lVar11 != -0x48);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      pcVar3 = pcVar1;
      _objc_release(pcVar1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        do {
          unaff_x24 = unaff_x24 + -0x18;
        } while (unaff_x24 != auStack_2e0);
        _objc_release(pcVar8);
        _objc_release(pcVar5);
        _objc_release(pcVar1);
        __Unwind_Resume(pcVar3);
        if ((long)pcVar4 < 1) {
          if (pcVar4 == (char *)0xffffffffffffffff) {
            func_0x00010c14cea0(pcVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          else if (pcVar4 == (char *)0x0) {
            _objc_retain(pcVar3);
          }
        }
        else if (pcVar4 == (char *)0x1) {
          func_0x00010c14ce80(pcVar3);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar4 == (char *)0x9) {
          func_0x00010c14ce60(pcVar3);
          _objc_retainAutoreleasedReturnValue();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b299dc8; end: 10b29a087;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b29a050) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b299dc8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar8 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    pcVar4 = pcVar2;
    pcVar8 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  pcVar10 = pcVar3;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar11 = 0;
    pcVar6 = pcVar7;
    pcVar9 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar4 = acStack_240;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    if (pcVar3 != (char *)0x0) {
      plVar12 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_220,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_208,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_1f0,pcVar1);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110cd10d0,acStack_240,pcVar10);
      puStack_228 = acStack_240;
      func_0x000107c278ac(&puStack_228);
      lVar11 = 0;
      pcVar1 = pcVar4;
      do {
        if ((&cStack_1d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = acStack_240;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar4 = pcVar5;
    _objc_release(pcVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        unaff_x24 = unaff_x24 + -0x18;
      } while (unaff_x24 != auStack_220);
      _objc_release(pcVar9);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      __Unwind_Resume(pcVar4);
      if ((long)pcVar1 < 1) {
        if (pcVar1 == (char *)0xffffffffffffffff) {
          func_0x00010c14cea0(pcVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (pcVar1 == (char *)0x0) {
          _objc_retain(pcVar4);
        }
      }
      else if (pcVar1 == (char *)0x1) {
        func_0x00010c14ce80(pcVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar1 == (char *)0x9) {
        func_0x00010c14ce60(pcVar4);
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b29a088; end: 10b29a347;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a310) */
/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b29a088(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x24;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar7 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar8 = 0;
    pcVar4 = pcVar2;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar6 = acStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110cd10d0,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar8 = 0;
    pcVar5 = pcVar6;
    do {
      if ((&cStack_119)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar8 != -0x48);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  pcVar3 = pcVar1;
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume(pcVar3);
    if ((long)pcVar5 < 1) {
      if (pcVar5 == (char *)0xffffffffffffffff) {
        func_0x00010c14cea0(pcVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar5 == (char *)0x0) {
        _objc_retain(pcVar3);
      }
    }
    else if (pcVar5 == (char *)0x1) {
      func_0x00010c14ce80(pcVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (pcVar5 == (char *)0x9) {
      func_0x00010c14ce60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
    return;
  }
  return;
}



/* Entry: 10b29a348; end: 10b29a607;  */

/* WARNING: Removing unreachable block (ram,0x00010b29a5d0) */

void FUN_10b29a348(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  char *unaff_x24;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110cd10d0,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    pcVar1 = pcVar2;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(pcVar2);
    if ((long)pcVar1 < 1) {
      if (pcVar1 == (char *)0xffffffffffffffff) {
        func_0x00010c14cea0(pcVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (pcVar1 == (char *)0x0) {
        _objc_retain(pcVar2);
      }
    }
    else if (pcVar1 == (char *)0x1) {
      func_0x00010c14ce80(pcVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (pcVar1 == (char *)0x9) {
      func_0x00010c14ce60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 10b29a608; end: 10b29a693;  */

void FUN_10b29a608(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 1) {
    if (param_3 == -1) {
      func_0x00010c14cea0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 0) {
      _objc_retain(param_1);
    }
  }
  else if (param_3 == 1) {
    func_0x00010c14ce80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 9) {
    func_0x00010c14ce60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b29a694; end: 10b29a69b;  */

void FUN_10b29a694(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined *puStack_88;
  int iStack_80;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&puStack_a0;
  _objc_retain();
  puVar4 = param_1;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = param_1, func_0x00010c14d260(), (int)puVar4 != 0)) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    iStack_80 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar4 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = param_1;
    puStack_a0 = puVar4;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    uStack_98 = SUB84(puVar2,0);
    func_0x00010c08fa60(param_1);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    _deflateInit2_(&puStack_a0,1,8,0x1f,8,0,&UNK_10f45dced,0x70);
    puVar4 = (undefined *)0x0;
    if (iVar1 == 0) {
      do {
        puVar4 = puStack_78;
        puVar2 = puVar3;
        func_0x00010c08fa60();
        if (puVar2 <= puVar4) {
          _deflateEnd(&puStack_a0);
          goto LAB_10b29a80c;
        }
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        puStack_88 = puVar4 + (long)puStack_78;
        puVar4 = puVar3;
        func_0x00010c08fa60();
        iStack_80 = (int)puVar4 - (int)puStack_78;
        iVar1 = (int)&puStack_a0;
        _deflate(&puStack_a0,4);
      } while (iVar1 == 0);
      _deflateEnd(&puStack_a0);
      func_0x00010c1ba840(puVar3);
      if (iVar1 == 1) {
        _objc_retain(puVar3);
        puVar4 = puVar3;
      }
      else {
LAB_10b29a80c:
        puVar4 = param_1;
        func_0x00010b29aa54(param_1,1);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b29a69c; end: 10b29a84b;  */

void FUN_10b29a69c(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined *puStack_88;
  int iStack_80;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&puStack_a0;
  _objc_retain();
  puVar4 = param_1;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = param_1, func_0x00010c14d260(), (int)puVar4 != 0)) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    iStack_80 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar4 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = param_1;
    puStack_a0 = puVar4;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    uStack_98 = SUB84(puVar2,0);
    func_0x00010c08fa60(param_1);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    _deflateInit2_(&puStack_a0,param_2,8,0x1f,8,0,&UNK_10f45dced,0x70);
    puVar4 = (undefined *)0x0;
    if (iVar1 == 0) {
      do {
        puVar4 = puStack_78;
        puVar2 = puVar3;
        func_0x00010c08fa60();
        if (puVar2 <= puVar4) {
          _deflateEnd(&puStack_a0);
          goto LAB_10b29a80c;
        }
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        puStack_88 = puVar4 + (long)puStack_78;
        puVar4 = puVar3;
        func_0x00010c08fa60();
        iStack_80 = (int)puVar4 - (int)puStack_78;
        iVar1 = (int)&puStack_a0;
        _deflate(&puStack_a0,4);
      } while (iVar1 == 0);
      _deflateEnd(&puStack_a0);
      func_0x00010c1ba840(puVar3);
      if (iVar1 == 1) {
        _objc_retain(puVar3);
        puVar4 = puVar3;
      }
      else {
LAB_10b29a80c:
        puVar4 = param_1;
        func_0x00010b29aa54(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b29a84c; end: 10b29a85b;  */

void FUN_10b29a84c(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined *puStack_88;
  int iStack_80;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&puStack_a0;
  _objc_retain();
  puVar4 = param_1;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = param_1, func_0x00010c14d260(), (int)puVar4 != 0)) {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    iStack_80 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar4 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = param_1;
    puStack_a0 = puVar4;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    uStack_98 = SUB84(puVar2,0);
    func_0x00010c08fa60(param_1);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    _deflateInit2_(&puStack_a0,0xffffffff,8,0x1f,8,0,&UNK_10f45dced,0x70);
    puVar4 = (undefined *)0x0;
    if (iVar1 == 0) {
      do {
        puVar4 = puStack_78;
        puVar2 = puVar3;
        func_0x00010c08fa60();
        if (puVar2 <= puVar4) {
          _deflateEnd(&puStack_a0);
          goto LAB_10b29a80c;
        }
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        puStack_88 = puVar4 + (long)puStack_78;
        puVar4 = puVar3;
        func_0x00010c08fa60();
        iStack_80 = (int)puVar4 - (int)puStack_78;
        iVar1 = (int)&puStack_a0;
        _deflate(&puStack_a0,4);
      } while (iVar1 == 0);
      _deflateEnd(&puStack_a0);
      func_0x00010c1ba840(puVar3);
      if (iVar1 == 1) {
        _objc_retain(puVar3);
        puVar4 = puVar3;
      }
      else {
LAB_10b29a80c:
        puVar4 = param_1;
        func_0x00010b29aa54(param_1,0xffffffff);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b29a85c; end: 10b29a9db;  */

void FUN_10b29a85c(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined *puStack_88;
  int iStack_80;
  undefined *puStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&puStack_a0;
  _objc_retain();
  puVar4 = param_1;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) || (puVar4 = param_1, FUN_10b29a9e0(), ((ulong)puVar4 & 1) == 0))
  {
    _objc_retain(param_1);
    puVar4 = param_1;
  }
  else {
    iStack_80 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    puVar4 = param_1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = param_1;
    puStack_a0 = puVar4;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    uStack_98 = SUB84(puVar2,0);
    func_0x00010c08fa60(param_1);
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    _inflateInit2_(&puStack_a0,0x2f,&UNK_10f45dced,0x70);
    puVar4 = puStack_78;
    while (puStack_78 = puVar4, iVar1 == 0) {
      puVar2 = puVar3;
      func_0x00010c08fa60();
      if (puVar2 <= puVar4) {
        func_0x00010c08fa60(param_1);
        func_0x00010c08fa60(puVar3);
        func_0x00010c1ba840(puVar3);
      }
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      puStack_88 = puVar4 + (long)puStack_78;
      puVar4 = puVar3;
      func_0x00010c08fa60();
      iStack_80 = (int)puVar4 - (int)puStack_78;
      iVar1 = (int)&puStack_a0;
      _inflate(&puStack_a0,2);
      puVar4 = puStack_78;
    }
    _inflateEnd(&puStack_a0);
    func_0x00010c1ba840(puVar3);
    if (iVar1 == 1) {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b29a9dc; end: 10b29a9df;  */

bool FUN_10b29a9dc(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  _objc_retainAutorelease();
  _objc_retain();
  pcVar2 = param_1;
  func_0x00010bf25f00();
  pcVar3 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  if ((pcVar3 < (char *)0x2) || (*pcVar2 != '\x1f')) {
    bVar1 = false;
  }
  else {
    bVar1 = pcVar2[1] == -0x75;
  }
  return bVar1;
}



/* Entry: 10b29a9e0; end: 10b29abb3;  */

bool FUN_10b29a9e0(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  
  _objc_retainAutorelease();
  _objc_retain();
  pcVar2 = param_1;
  func_0x00010bf25f00();
  pcVar3 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  if ((pcVar3 < (char *)0x2) || (*pcVar2 != '\x1f')) {
    bVar1 = false;
  }
  else {
    bVar1 = pcVar2[1] == -0x75;
  }
  return bVar1;
}



/* Entry: 10b29abb4; end: 10b29ad63;  */

void FUN_10b29abb4(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  if (param_3 - 0x17U < 0xffffffffffffffea) {
    puVar8 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    puVar1 = &UNK_10e00f928;
    func_0x000107c2ae34();
    func_0x000107c2ae3c();
    if (puVar1 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      uStack_48 = 0;
      uVar7 = param_1;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uVar4 = param_1;
      uStack_58 = uVar7;
      func_0x00010c08fa60();
      uStack_50 = uVar4;
      if (uVar4 != 0) {
        do {
          uStack_60 = 0;
          puVar5 = puVar3;
          puStack_70 = puVar8;
          func_0x00010c08fa60();
          puVar6 = puVar1;
          puStack_68 = puVar5;
          func_0x0001099b2970(puVar1,&puStack_70,&uStack_58,0);
          if ((undefined *)0xffffffffffffff88 < puVar6) {
LAB_10b29ad2c:
            puVar8 = (undefined *)0x0;
            goto LAB_10b29ad30;
          }
          uVar7 = *(long *)(puVar1 + 0x400) - *(long *)(puVar1 + 0x3f8);
          if (uVar7 == 0) {
            uVar7 = *(ulong *)(puVar1 + 0x178);
          }
          if (0xffffffffffffff88 < uVar7) goto LAB_10b29ad2c;
          func_0x00010bf06a40(puVar2);
        } while (uStack_48 < uStack_50);
      }
      uStack_60 = 0;
      puVar5 = puVar3;
      puStack_70 = puVar8;
      func_0x00010c08fa60();
      puVar6 = puVar1;
      puStack_68 = puVar5;
      func_0x0001099b304c(puVar1,&puStack_70);
      puVar8 = (undefined *)0x0;
      if (puVar6 == (undefined *)0x0) {
        func_0x00010bf06a40(puVar2);
        func_0x0001099b10c0(puVar1);
        _objc_retain(puVar2);
        puVar8 = puVar2;
      }
LAB_10b29ad30:
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b29ad64; end: 10b29ae07; -[SCLRUCache removeObjectForKey:] */

void FUN_10b29ad64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be8ca40(param_1,param_2,lVar1);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    lVar2 = lVar1;
    func_0x00010bf528a0(lVar1);
    lVar3 = param_1;
    func_0x00010c276280(param_1);
    func_0x00010c2181a0(param_1,param_2,lVar3 - lVar2);
    lVar2 = param_1;
    func_0x00010bf529e0(param_1);
    func_0x00010c1846c0(param_1,param_2,lVar2 + -1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b29ae08; end: 10b29ae57; -[SCLRUCache removeAllObjects] */

void FUN_10b29ae08(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c2181a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1846d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCount__11263ebd0,0);
  return;
}



/* Entry: 10b29ae58; end: 10b29aecf; -[SCLRUCache allValues] */

void FUN_10b29ae58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_value_112683588;
  _NSStringFromSelector(PTR_s_value_112683588);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c296f60(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b29aed0; end: 10b29af47; -[SCLRUCache allKeys] */

void FUN_10b29aed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_key_1125ff368;
  _NSStringFromSelector(PTR_s_key_1125ff368);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c296f60(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b29af48; end: 10b29af57; -[SCLRUCache setTotalCostLimit:] */

void FUN_10b29af48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be0b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__evictObjectsForCostChange_count_112560730,0,0);
  return;
}



/* Entry: 10b29af58; end: 10b29af6f; -[SCLRUCache delegate] */

void FUN_10b29af58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b29af70; end: 10b29af7b; -[SCLRUCache setDelegate:] */

void FUN_10b29af70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10b29af7c; end: 10b29af83; -[SCLRUCache name] */

undefined8 FUN_10b29af7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b29af84; end: 10b29af8b; -[SCLRUCache setName:] */

void FUN_10b29af84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b29af8c; end: 10b29af93; -[SCLRUCacheNode key] */

undefined8 FUN_10b29af8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b29af94; end: 10b29afd3; -[SCLRUCacheNode .cxx_destruct] */

void FUN_10b29af94(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b29afd4; end: 10b29b1ff;  */

void FUN_10b29afd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (lRam00000001137f4850 != -1) {
    func_0x000107c27d9c(0x1137f4850,&PTR___NSConcreteGlobalBlock_110cd1450);
  }
  uVar1 = (ulong)puRam00000001137f4848;
  func_0x00010bf4b900();
  puVar7 = PTR____NSDictionary0__struct_11034ab58;
  if ((uVar1 & 1) == 0) {
    ppuVar2 = (undefined **)PTR_PTR_1126b7e50;
    _objc_alloc_init();
    func_0x00010c1ec1c0();
    func_0x00010c1ebf60(ppuVar2);
    func_0x00010c21fce0(ppuVar2);
    func_0x00010c1ec220(ppuVar2);
    ppuVar3 = ppuVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000104b30cdc();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = ppuVar4;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar6 = ppuVar5;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar6;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (ulong)puRam00000001137f4848;
  puRam00000001137f4848 = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29b200; end: 10b29b23b;  */

void FUN_10b29b200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111183bd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f4848;
  puRam00000001137f4848 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29b23c; end: 10b29b253;  */

undefined4 FUN_10b29b23c(void)

{
  return uRam00000001137f4858;
}



/* Entry: 10b29b254; end: 10b29b38f; -[SCTouchTracker _handleUIEvent:] */

void FUN_10b29b254(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 3)) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    unaff_x20 = param_3;
    func_0x00010bf00c80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(unaff_x20);
          }
          lVar2 = *(long *)(lStack_108 + lVar5 * 8);
          func_0x00010c0fa9c0();
          if (lVar2 == 0) {
            iRam00000001137f4858 = iRam00000001137f4858 + 1;
            goto LAB_10b29b34c;
          }
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
LAB_10b29b34c:
    _objc_release(unaff_x20);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_118 = FUN_10b29b390;
    lStack_130 = unaff_x20;
    lStack_128 = param_3;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010bf86d80(*(undefined8 *)(lVar1 + 8));
    uVar3 = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    _objc_release(uVar3);
    puStack_138 = PTR_PTR_112706178;
    lStack_140 = lVar1;
    _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
    return;
  }
  return;
}



/* Entry: 10b29b390; end: 10b29b3e3; -[SCTouchTracker dealloc] */

void FUN_10b29b390(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112706178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b29b3e4; end: 10b29b3ef; -[SCTouchTracker .cxx_destruct] */

void FUN_10b29b3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b29b3f0; end: 10b29b4d3; +[GetAttestationPayloadRequest descriptor] */

void FUN_10b29b3f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f4860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73890,
                        &PTR____CFConstantStringClassReference_110f61f98,&PTR_s_security_11336f310,
                        &PTR_DAT_11336f328,7,0x38,0x1c);
    puRam00000001137f4860 = puVar1;
  }
  return;
}



/* Entry: 10b29b4d4; end: 10b29b4df;  */

bool FUN_10b29b4d4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b29b4e0; end: 10b29b6f3; +[SCAPISecurityUtil isOurOwnHost:] */

uint FUN_10b29b4e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_68;
  uint uStack_64;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62038);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62058);
    uStack_64 = (uint)uVar1;
  }
  else {
    uStack_64 = 1;
  }
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62078);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62098);
    uStack_68 = (uint)uVar1;
  }
  else {
    uStack_68 = 1;
  }
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e8b7b8);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f620b8);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f609f8);
    uVar7 = (uint)uVar2;
  }
  else {
    uVar7 = 1;
  }
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f620d8);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f620f8);
    uVar8 = (uint)uVar2;
  }
  else {
    uVar8 = 1;
  }
  uVar3 = param_1;
  func_0x00010c0775c0(param_1,param_2,param_3);
  uVar4 = param_1;
  func_0x00010c07cd20(param_1,param_2,param_3);
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62118);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62138);
    uVar9 = (uint)uVar2;
  }
  else {
    uVar9 = 1;
  }
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62158);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f62178),
     (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f61238);
    uVar6 = (uint)uVar2;
  }
  else {
    uVar6 = 1;
  }
  uVar5 = param_1;
  func_0x00010c06c380(param_1,param_2,param_3);
  func_0x00010c06c360(param_1,param_2,param_3);
  _objc_release(param_3);
  return (uStack_64 | uStack_68 | uVar8 | (uint)uVar1 | uVar7 | (uint)uVar3 | uVar9 | uVar6 |
         (uint)uVar5 | (uint)param_1 | (uint)uVar4) & 1;
}



/* Entry: 10b29b6f4; end: 10b29b807; +[SCAPISecurityUtil isRtamCollectorURL:] */

undefined8 FUN_10b29b6f4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x22;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c07cd20(param_1,param_2,uVar1);
  if ((uVar2 & 1) != 0) {
    uVar5 = 1;
    goto LAB_10b29b7dc;
  }
  uVar3 = param_3;
  func_0x00010bfe4420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c06c380(param_1,param_2,uVar3);
  if ((uVar2 & 1) == 0) {
    unaff_x22 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c360(param_1,param_2,unaff_x22);
    if ((int)param_1 != 0) goto LAB_10b29b794;
    uVar5 = 0;
LAB_10b29b7cc:
    _objc_release(unaff_x22);
  }
  else {
LAB_10b29b794:
    uVar4 = param_3;
    func_0x00010c0f5800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) goto LAB_10b29b7cc;
  }
  _objc_release(uVar3);
LAB_10b29b7dc:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10b29b808; end: 10b29b867; +[SCAPISecurityUtil isRtamCollectorHost:] */

ulong FUN_10b29b808(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62198);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f621b8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b29b868; end: 10b29b8ef; +[SCAPISecurityUtil isMapServerHost:] */

ulong FUN_10b29b868(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f621d8);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = param_3,
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f621f8),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_3,
     func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62218),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62238);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b29b8f0; end: 10b29b977; +[SCAPISecurityUtil isApiGatewayProdHost:] */

ulong FUN_10b29b8f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62258);
  if ((((uVar1 & 1) == 0) &&
      (uVar1 = param_3,
      func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62278),
      (uVar1 & 1) == 0)) &&
     (uVar1 = param_3,
     func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f62298),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f622b8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b29b978; end: 10b29b9d7; +[SCAPISecurityUtil isApiGatewayDevHost:] */

ulong FUN_10b29b978(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f622d8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bfdcf80(param_3,param_2,&PTR____CFConstantStringClassReference_110f622f8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b29b9d8; end: 10b29bb87; +[SCAPISecurityUtil isPinningEnabledHost:] */

undefined8 FUN_10b29b9d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_3;
  _objc_retain();
  func_0x000107c318f4();
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126e00c8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c07a0e0();
    _objc_release(puVar5);
    if (((ulong)puVar6 & 1) != 0) {
      uVar8 = 0;
      goto LAB_10b29bb40;
    }
  }
  func_0x00010be3b120(PTR_PTR_1126bd000);
  lVar3 = lRam00000001137f4888;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lRam00000001137f4888);
  lVar7 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar7 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110f62318);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010bfdcf80(param_3,param_2,puVar5);
        _objc_release(puVar5);
        if ((uVar4 & 1) != 0) {
          uVar8 = 1;
          goto LAB_10b29bb38;
        }
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      lVar7 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar7 != 0);
  }
  uVar8 = 0;
LAB_10b29bb38:
  _objc_release(lVar3);
LAB_10b29bb40:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 8);
    func_0x00010c0dfd40(uVar8,param_2,*(undefined8 *)(param_3 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*(undefined8 *)(param_3 + 8),param_2,puVar5,*(undefined8 *)(param_3 + 0x18))
    ;
    _objc_release(puVar5);
    uVar1 = *(ulong *)(param_3 + 0x10);
    uVar4 = *(long *)(param_3 + 0x18) + 1;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    *(ulong *)(param_3 + 0x18) = uVar4 - uVar2 * uVar1;
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return uVar8;
}



/* Entry: 10b29bb88; end: 10b29bc23; -[SCQueueWithCapacity dequeue] */

void FUN_10b29bb88(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0dfd40(uVar4,param_2,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8),param_2,puVar5,*(undefined8 *)(param_1 + 0x18))
    ;
    _objc_release(puVar5);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar1 = *(long *)(param_1 + 0x18) + 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x18) = uVar1 - uVar3 * uVar2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b29bc24; end: 10b29bceb; -[SCQueueWithCapacity allObjects] */

void FUN_10b29bc24(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      uVar4 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar3);
      if ((uVar4 & 1) == 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x20));
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b29bcec; end: 10b29bd03; -[SCQueueWithCapacity objectAtIndex:] */

void FUN_10b29bcec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(long *)(param_1 + 0x18) + param_3;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectAtIndex__112615960,uVar1 - uVar3 * uVar2);
  return;
}



/* Entry: 10b29bd04; end: 10b29bd0b; -[SCQueueWithCapacity capacity] */

undefined8 FUN_10b29bd04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b29bd0c; end: 10b29bd13; -[SCQueueWithCapacity count] */

undefined8 FUN_10b29bd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b29bd14; end: 10b29bd1f; -[SCQueueWithCapacity .cxx_destruct] */

void FUN_10b29bd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b29bd20; end: 10b29bd7f; -[SCBarButton init] */

undefined1 * FUN_10b29bd20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a8c60(0xc034000000000000,0xc034000000000000,0xc034000000000000,0xc034000000000000,
                        puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29bd80; end: 10b29bf0b; -[SCBarButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29bd80(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706188;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11278e0c8;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar2 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar3 = (dVar2 - param_1) * 0.5;
  dVar5 = (double)(long)dVar3;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar2 = dVar5;
  _CGRectGetHeight(dVar5,param_2,param_3,param_4);
  lVar4 = (long)((dVar3 - dVar2) * 0.5);
  func_0x00010c19f0e0(dVar5,lVar4,param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  lVar1 = (long)_DAT_11278e0cc;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar2 = dVar5;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  _CGRectGetWidth(dVar5,lVar4,param_3,param_4);
  dVar3 = (dVar2 - dVar5) * 0.5;
  dVar5 = (double)(long)dVar3;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar2 = dVar5;
  _CGRectGetHeight(dVar5,lVar4,param_3,param_4);
  func_0x00010c19f0e0(dVar5,(long)((dVar3 - dVar2) * 0.5),param_3,param_4,
                      *(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 10b29bf0c; end: 10b29bf93; -[SCBarButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b29bf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_5;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bfe6ac0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(param_5);
  }
  else {
    param_1 = param_3;
    param_2 = param_4;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11278e0cc));
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b29bf94; end: 10b29c063; -[SCBarButton setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29bf94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278e0d0);
  *(undefined8 *)(param_1 + _DAT_11278e0d0) = param_3;
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b29c064; end: 10b29c1a3; -[SCBarButton setHighlighted:] */

void FUN_10b29c064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar3 = param_1;
  func_0x00010c074da0();
  puStack_38 = PTR_PTR_112706188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setHighlighted__112647c38,param_3);
  if ((int)param_3 == (int)uVar3) {
    return;
  }
  _objc_retain(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b29c1a4;
  puStack_50 = &UNK_1108466e0;
  _objc_retain(param_1);
  ppuVar1 = &puStack_68;
  uStack_48 = param_1;
  _objc_retainBlock();
  uVar4 = param_1;
  func_0x00010c074da0();
  if ((int)uVar4 == 0) {
    if ((int)uVar3 == 0) {
      func_0x00010c219960(param_1);
      goto LAB_10b29c178;
    }
    pcVar2 = (code *)ppuVar1[2];
    uVar3 = 0x3ff0000000000000;
    uVar4 = 0;
  }
  else {
    (*(code *)ppuVar1[2])(0x3ff8a3d70a3d70a4,0,ppuVar1);
    pcVar2 = (code *)ppuVar1[2];
    uVar3 = 0x3ff6666666666666;
    uVar4 = 0x3fc3333333333333;
  }
  (*pcVar2)(uVar3,uVar4,ppuVar1);
LAB_10b29c178:
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_1);
  return;
}



/* Entry: 10b29c1a4; end: 10b29c24f;  */

void FUN_10b29c1a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b29c250;
  puStack_48 = &UNK_110848c48;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  uStack_38 = param_1;
  func_0x00010bf03460(0x3fc3333333333333,param_2,0x3ff0000000000000,0x3fb999999999999a,puVar1,
                      param_4,6,&puStack_60,0);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10b29c250; end: 10b29c29f;  */

void FUN_10b29c250(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10b29c2a0; end: 10b29c33f; -[SCBarButton setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e0d4);
  *(undefined8 *)(param_1 + _DAT_11278e0d4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b29c340; end: 10b29c3b7; -[SCBarButton setHighlightedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e0d8);
  *(undefined8 *)(param_1 + _DAT_11278e0d8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a88e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b29c3b8; end: 10b29c41b; -[SCBarButton setEnabled:] */

void FUN_10b29c3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38);
  uVar1 = param_1;
  func_0x00010c071800();
  uVar2 = 0x3ff0000000000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0x3fc999999999999a;
  }
  func_0x00010c1677c0(uVar2,param_1);
  return;
}


