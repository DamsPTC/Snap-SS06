/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065ef87c; end: 1065ef883; -[SCContextHeroContextCardDataModel posterAvatarMetadata] */

undefined8 FUN_1065ef87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1065ef884; end: 1065ef8e3; -[SCContextHeroContextCardDataModel .cxx_destruct] */

void FUN_1065ef884(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 1065ef8e4; end: 1065ef96f; -[SCContextDeepLinkLegacyParams initWithSnapId:storyType:mediaType:] */

undefined1 *
FUN_1065ef8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065ef970; end: 1065ef993; -[SCContextDeepLinkLegacyParams copyWithZone:] */

undefined8 FUN_1065ef970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065ef994; end: 1065efa07; -[SCContextDeepLinkLegacyParams hash] */

undefined8 * FUN_1065ef994(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1065efa9c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1065efa9c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1065efa9c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1065efa9c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1065efa08; end: 1065efab7; -[SCContextDeepLinkLegacyParams isEqual:] */

long FUN_1065efa08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065efa9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_1065efa9c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1065efa9c;
    }
  }
  lVar3 = 1;
LAB_1065efa9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065efab8; end: 1065efabf; -[SCContextDeepLinkLegacyParams snapId] */

undefined8 FUN_1065efab8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065efac0; end: 1065efac7; -[SCContextDeepLinkLegacyParams storyType] */

undefined8 FUN_1065efac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065efac8; end: 1065efacf; -[SCContextDeepLinkLegacyParams mediaType] */

undefined8 FUN_1065efac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065efad0; end: 1065efadb; -[SCContextDeepLinkLegacyParams .cxx_destruct] */

void FUN_1065efad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065efadc; end: 1065efdb3;  */

void FUN_1065efadc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  pcStack_90 = "";
  uStack_98 = 0x3010000000;
  uStack_80 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_88 = *(undefined8 *)PTR__CGSizeZero_110347620;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  func_0x00010bf529e0(param_1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _dispatch_group_create();
  for (uVar7 = 0; uVar3 = param_1, func_0x00010bf529e0(), uVar7 < uVar3; uVar7 = uVar7 + 1) {
    _dispatch_group_enter(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar4);
    uVar3 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1065efdb4;
    puStack_f8 = &UNK_11092ee78;
    _objc_retain(puVar1);
    puStack_f0 = puVar1;
    puStack_e0 = &uStack_a8;
    puStack_d8 = &uStack_c8;
    uStack_d0 = uVar7;
    _objc_retain(puVar2);
    puStack_e8 = puVar2;
    func_0x00010c297260(uVar3);
    _objc_release(puStack_e8);
    _objc_release(puStack_f0);
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar5 = param_2;
  func_0x00010c11de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1065efef0;
  puStack_138 = &UNK_110876040;
  _objc_retain(puVar4);
  puStack_130 = puVar4;
  _objc_retain(puVar1);
  puStack_120 = &uStack_a8;
  puStack_118 = &uStack_c8;
  puStack_128 = puVar1;
  func_0x000100bc0718(puVar2,uVar5,&puStack_150);
  _objc_release(uVar5);
  puVar6 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_128);
  _objc_release(puStack_130);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065efdb4; end: 1065efeef;  */

void FUN_1065efdb4(double param_1,double param_2,long param_3,long param_4,undefined8 param_5)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  if (param_4 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130f40(uVar5);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c130f40(uVar5);
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  func_0x00010c23d0a0(param_4);
  dVar7 = param_1;
  func_0x00010c14e120(param_4);
  dVar9 = *(double *)(lVar6 + 0x20);
  dVar10 = *(double *)(lVar6 + 0x28);
  dVar8 = param_2 * dVar7;
  dVar1 = param_1 * dVar7;
  if (param_1 * dVar7 * param_2 * dVar7 <= dVar9 * dVar10) {
    dVar8 = dVar10;
    dVar1 = dVar9;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  *(double *)(lVar6 + 0x20) = dVar1;
  *(double *)(lVar6 + 0x28) = dVar8;
  lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  bVar2 = *(byte *)(lVar6 + 0x18);
  if ((param_4 != 0) && ((bVar2 & 1) == 0)) {
    lVar6 = param_4;
    _objc_retainAutorelease();
    iVar3 = (int)lVar6;
    func_0x00010bdc1020();
    _CGImageGetAlphaInfo();
    bVar2 = iVar3 - 1U < 4;
    lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  }
  *(byte *)(lVar6 + 0x18) = bVar2 & 1;
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065efef0; end: 1065f013f;  */

void FUN_1065efef0(long param_1,undefined *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c0;
  double dStack_1b8;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 0x28);
  lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  dVar17 = *(double *)(lVar10 + 0x20);
  dVar18 = *(double *)(lVar10 + 0x28);
  _objc_retain(lVar9);
  bVar3 = false;
  if ((dVar17 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar3 = false, !NAN(dVar18) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar3 = dVar18 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar3) {
    lVar10 = 0;
  }
  else {
    dVar14 = dVar18;
    _UIGraphicsBeginImageContextWithOptions(dVar17,dVar18,0x3ff0000000000000,bVar2 ^ 1);
    _objc_retain(lVar9);
    param_4 = auStack_108;
    param_5 = 0x10;
    lVar4 = lVar9;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    if (lVar4 != 0) {
      dVar13 = 0.5;
      do {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar10) {
            _objc_enumerationMutation(lVar9);
          }
          param_2 = PTR__OBJC_CLASS___UIImage_1126aea68;
          uVar11 = *(ulong *)(lVar12 * 8);
          _objc_retain(uVar11);
          _objc_opt_class(param_2);
          uVar5 = uVar11;
          _objc_opt_isKindOfClass(uVar11,param_2);
          _objc_release(uVar11);
          if (((uVar5 & 1) != 0) && (uVar11 != 0)) {
            func_0x00010c23d0a0(uVar11);
            dVar15 = 0.0;
            dVar16 = dVar18;
            if ((dVar13 != 0.0) && (dVar15 = dVar17, dVar16 = 0.0, dVar14 != 0.0)) {
              dVar13 = dVar13 / dVar14;
              dVar15 = 0.0;
              dVar16 = dVar18;
              if (((dVar13 != 0.0) && (dVar15 = dVar17, dVar16 = 0.0, dVar13 != INFINITY)) &&
                 (dVar15 = dVar18 * dVar13, dVar16 = dVar18, dVar17 <= dVar18 * dVar13)) {
                dVar16 = dVar17 / dVar13;
                dVar15 = dVar17;
              }
            }
            dVar13 = dVar17 * 0.5;
            dVar14 = dVar18 * 0.5;
            func_0x00010b690910(dVar17 * 0.5,dVar18 * 0.5,dVar15,dVar16);
            func_0x00010bf89920(uVar11);
          }
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        param_4 = auStack_108;
        param_5 = 0x10;
        lVar4 = lVar9;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    lVar10 = lVar9;
    _objc_release();
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
  _objc_release(lVar9);
  lVar9 = lVar10;
  func_0x00010bf43d60(uVar1);
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  dStack_1c0 = dVar18;
  dStack_1b8 = dVar17;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(lVar9);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uStack_1f8 = 0;
  uStack_1e8 = 0x3032000000;
  pcStack_1e0 = FUN_1065f03e8;
  uStack_1d8 = 0x1065f03f8;
  uStack_1d0 = 0;
  uStack_228 = 0;
  uStack_218 = 0x3032000000;
  pcStack_210 = FUN_1065f03e8;
  uStack_208 = 0x1065f03f8;
  uStack_200 = 0;
  puVar7 = puVar6;
  puStack_220 = &uStack_228;
  puStack_1f0 = &uStack_1f8;
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1065f0400;
  puStack_240 = &UNK_1108bca60;
  puStack_230 = &uStack_228;
  _objc_retain(puVar7);
  puStack_238 = puVar7;
  func_0x00010c297260(param_2);
  _dispatch_group_enter(puVar7);
  puStack_288 = puVar8;
  uStack_280 = 0xc2000000;
  uStack_278 = 0x1065f045c;
  puStack_270 = &UNK_11092eea8;
  puStack_260 = &uStack_1f8;
  _objc_retain(puVar7);
  puStack_268 = puVar7;
  func_0x00010c297260(lVar10);
  lVar4 = lVar9;
  func_0x00010c11de00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_2d0 = puVar8;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_1065f04b8;
  puStack_2b8 = &UNK_1108ba108;
  puStack_298 = &uStack_1f8;
  puStack_290 = &uStack_228;
  _objc_retain(puVar6);
  puStack_2b0 = puVar6;
  _objc_retain(param_4);
  puStack_2a8 = param_4;
  _objc_retain(param_5);
  uStack_2a0 = param_5;
  func_0x000100bc0718(puVar7,lVar4,&puStack_2d0);
  _objc_release(lVar4);
  puVar8 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_2a0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2b0);
  _objc_release(puStack_268);
  _objc_release(puStack_238);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_228,8);
  _objc_release(uStack_200);
  __Block_object_dispose(&uStack_1f8,8);
  _objc_release(uStack_1d0);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar9);
  _objc_release(param_2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1065f0140; end: 1065f03e7;  */

void FUN_1065f0140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1065f03e8;
  uStack_88 = 0x1065f03f8;
  uStack_80 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1065f03e8;
  uStack_b8 = 0x1065f03f8;
  uStack_b0 = 0;
  puVar2 = puVar1;
  puStack_d0 = &uStack_d8;
  puStack_a0 = &uStack_a8;
  _dispatch_group_create();
  _dispatch_group_enter();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1065f0400;
  puStack_f0 = &UNK_1108bca60;
  puStack_e0 = &uStack_d8;
  _objc_retain(puVar2);
  puStack_e8 = puVar2;
  func_0x00010c297260(param_2);
  _dispatch_group_enter(puVar2);
  puStack_138 = puVar4;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1065f045c;
  puStack_120 = &UNK_11092eea8;
  puStack_110 = &uStack_a8;
  _objc_retain(puVar2);
  puStack_118 = puVar2;
  func_0x00010c297260(param_1);
  uVar3 = param_3;
  func_0x00010c11de00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar4;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1065f04b8;
  puStack_168 = &UNK_1108ba108;
  puStack_148 = &uStack_a8;
  puStack_140 = &uStack_d8;
  _objc_retain(puVar1);
  puStack_160 = puVar1;
  _objc_retain(param_4);
  uStack_158 = param_4;
  _objc_retain(param_5);
  uStack_150 = param_5;
  func_0x000100bc0718(puVar2,uVar3,&puStack_180);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(puStack_160);
  _objc_release(puStack_118);
  _objc_release(puStack_e8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065f03e8; end: 1065f03ff;  */

void FUN_1065f03e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065f0400; end: 1065f04b7;  */

void FUN_1065f0400(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065f04b8; end: 1065f0633;  */

void FUN_1065f04b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  if (lVar3 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(lVar3);
      _objc_retain(lVar5);
      _objc_retain(uVar4);
      func_0x00010bf58fc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d75e0();
      _objc_release(lVar5);
      uVar2 = uVar4;
      func_0x00010c29af00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar3);
      func_0x00010c221d20(uVar1);
      _objc_release(uVar2);
      func_0x00010c16bc20(uVar1);
      func_0x00010c1a8660(uVar1);
      func_0x00010c2056c0(uVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x00010bfae700(uVar1);
      _objc_release(uVar4);
      _objc_release(uVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,lVar3);
  return;
}



/* Entry: 1065f0634; end: 1065f068f;  */

void FUN_1065f0634(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065f0690; end: 1065f0773; -[SCRepostOperaServiceProvider provide] */

void FUN_1065f0690(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0db900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc050;
  _objc_alloc(PTR_PTR_1126cc050);
  func_0x00010c03ea40();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065f0774; end: 1065f07cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f0774(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cc048;
    _objc_alloc(PTR_PTR_1126cc048);
    func_0x00010c041f80();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065f07d0; end: 1065f080b; -[SCRepostOperaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f07d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274b9e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b9e0);
  return;
}



/* Entry: 1065f080c; end: 1065f08af; -[SCRepostOperaPlugin initWithRepostScopeLauncher:repostMentionScopeServices:] */

undefined1 *
FUN_1065f080c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f08b0; end: 1065f09c3; -[SCRepostOperaPlugin initWithRepostScopeExposer:repostMentionScopeServices:] */

undefined8 *
FUN_1065f08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2068;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_retain();
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065f09c4; end: 1065f09f3;  */

void FUN_1065f09c4(void)

{
  _objc_alloc(PTR_PTR_1126cc048);
  func_0x00010c041f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065f09f4; end: 1065f09f7; -[SCRepostOperaPlugin setPlaylistItemController:] */

void FUN_1065f09f4(void)

{
  return;
}



/* Entry: 1065f09f8; end: 1065f0a03; -[SCRepostOperaPlugin setOperaControlling:] */

void FUN_1065f09f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1065f0a04; end: 1065f0a97; -[SCRepostOperaPlugin registeredEventsForOperaSession] */

void FUN_1065f0a04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar22 = &puStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c1342a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar23);
  puVar2 = PTR_PTR_1126b2d30;
  _objc_retain(ppuVar22);
  func_0x00010c1342a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)ppuVar22;
  func_0x00010c0720c0();
  _objc_release(ppuVar22);
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    puVar2 = puVar1 + 0x18;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar24;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar23;
    func_0x000107dd9cf0(uVar23,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar24);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    if ((uVar7 & 1) == 0) {
      uVar8 = *(undefined8 *)(puVar1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bfdb740();
      _objc_release(uVar8);
      if ((int)uVar9 != 0) {
        uVar9 = *(undefined8 *)(puVar1 + 8);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e1c0();
        _objc_release(uVar9);
      }
      puVar2 = puVar1 + 0x18;
      _objc_loadWeakRetained();
      puVar4 = puVar2;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = puVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      puVar24 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar2);
      puVar2 = puVar4;
      if (((ulong)puVar24 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar4);
      puVar4 = puVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar6 = puVar24;
      func_0x00010010fab4(puVar24,PTR_DAT_1126a5530);
      puVar4 = puVar24;
      if ((int)puVar6 == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(puVar24);
      puVar6 = puVar2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf4e860();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c08fa60();
      puVar24 = PTR_PTR_1126b2378;
      if (puVar12 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar12 = puVar2;
        func_0x00010c25a6e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c25b160();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf4e860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar10 = puVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b23b0;
      _objc_opt_class(PTR_PTR_1126b23b0);
      puVar12 = puVar11;
      _objc_opt_isKindOfClass(puVar11,puVar10);
      puVar10 = puVar11;
      if (((ulong)puVar12 & 1) == 0) {
        puVar10 = (undefined *)0x0;
      }
      _objc_retain(puVar10);
      _objc_release(puVar11);
      puVar11 = puVar2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b7c0();
      _objc_release(puVar11);
      puVar11 = puVar2;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010befd0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar12 = PTR_PTR_1126c6930;
      _objc_alloc();
      puVar13 = puVar6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b2340;
      puVar15 = puVar5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c083240(puVar11);
      puVar11 = puVar10;
      func_0x00010c247b80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar10;
      func_0x00010c247de0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar24;
      func_0x00010c27f9c0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar10;
      func_0x00010c0ca720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar24;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar10;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf62d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0295a0();
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar10);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar11);
      _objc_release(puVar15);
      _objc_release(puVar13);
      puVar10 = puVar1 + 0x18;
      _objc_loadWeakRetained(puVar10);
      puVar11 = puVar10;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar11 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar9 = *(undefined8 *)(puVar1 + 0x10);
      puVar10 = puVar1 + 0x18;
      _objc_loadWeakRetained(puVar10);
      puVar15 = puVar10;
      func_0x00010c22b5a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf244e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar15);
      _objc_release(puVar10);
      uVar8 = *(undefined8 *)(puVar1 + 8);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b420();
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar14);
      _objc_release(puVar24);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar23);
  return;
}



/* Entry: 1065f0a98; end: 1065f1183; -[SCRepostOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_1065f0a98(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  
  _objc_retain(param_4);
  puVar25 = PTR_PTR_1126b2d30;
  _objc_retain(param_3);
  func_0x00010c1342a0(puVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar25);
  if ((int)uVar8 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x000107dd9cf0(param_4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfdb740();
      _objc_release(uVar7);
      if ((int)uVar8 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e1c0();
        _objc_release(uVar8);
      }
      uVar6 = param_1 + 0x18;
      _objc_loadWeakRetained();
      uVar9 = uVar6;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar6);
      uVar6 = uVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar25 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      uVar11 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar25);
      uVar6 = uVar9;
      if ((uVar11 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar9);
      uVar9 = uVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      uVar12 = uVar11;
      func_0x00010010fab4(uVar11,PTR_DAT_1126a5530);
      uVar9 = uVar11;
      if ((int)uVar12 == 0) {
        uVar9 = 0;
      }
      _objc_retain();
      _objc_release(uVar11);
      uVar11 = uVar6;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf4e860();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c08fa60();
      puVar25 = PTR_PTR_1126b2378;
      if (uVar14 == 0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        uVar14 = uVar6;
        func_0x00010c25a6e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x00010c25b160();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010bf4e860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
      }
      _objc_release(uVar13);
      _objc_release(uVar12);
      uVar12 = uVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      puVar17 = PTR_PTR_1126b23b0;
      _objc_opt_class(PTR_PTR_1126b23b0);
      uVar14 = uVar13;
      _objc_opt_isKindOfClass(uVar13,puVar17);
      uVar12 = uVar13;
      if ((uVar14 & 1) == 0) {
        uVar12 = 0;
      }
      _objc_retain(uVar12);
      _objc_release(uVar13);
      uVar13 = uVar6;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b7c0();
      _objc_release(uVar13);
      uVar13 = uVar6;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c25b160();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010befd0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      puVar18 = PTR_PTR_1126c6930;
      _objc_alloc();
      uVar13 = uVar11;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126b2340;
      uVar14 = uVar10;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c083240(puVar17);
      uVar15 = uVar12;
      func_0x00010c247b80(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar12;
      func_0x00010c247de0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar25;
      func_0x00010c27f9c0(puVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      func_0x00010c0d3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar12;
      func_0x00010c0ca720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      puVar22 = puVar25;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010bf62d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0295a0();
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(uVar21);
      _objc_release(puVar20);
      _objc_release(puVar17);
      _objc_release(uVar19);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar13);
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c27f040();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c27f020();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar17 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c22b5a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf244e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b420();
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(puVar17);
      _objc_release(lVar3);
      _objc_release(puVar18);
      _objc_release(uVar16);
      _objc_release(puVar25);
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065f1184; end: 1065f11fb; -[SCRepostOperaPlugin didDismissRepostMention] */

void FUN_1065f1184(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb740();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1065f11fc; end: 1065f1233; -[SCRepostOperaPlugin .cxx_destruct] */

void FUN_1065f11fc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f1234; end: 1065f12a7; -[SCRepostScopeLauncher initWithScopeExposer:] */

undefined1 * FUN_1065f1234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2070;
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



/* Entry: 1065f12a8; end: 1065f12b7; -[SCRepostScopeLauncher launch:] */

void FUN_1065f12a8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_exposeScope__1125c4f30);
    return;
  }
  return;
}



/* Entry: 1065f12b8; end: 1065f12ef; -[SCRepostScopeLauncher hasScope] */

bool FUN_1065f12b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1065f12f0; end: 1065f130f; -[SCRepostScopeLauncher removeScope] */

void FUN_1065f12f0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1065f1310; end: 1065f131b; -[SCRepostScopeLauncher .cxx_destruct] */

void FUN_1065f1310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f131c; end: 1065f138f; -[SCRepostFeatureLaunchServices initWithRepostScopeLauncher:] */

undefined1 * FUN_1065f131c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2078;
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



/* Entry: 1065f1390; end: 1065f1397; -[SCRepostFeatureLaunchServices repostScopeLauncher] */

undefined8 FUN_1065f1390(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1065f1398; end: 1065f13a3; -[SCRepostFeatureLaunchServices .cxx_destruct] */

void FUN_1065f1398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f13a4; end: 1065f14a3; -[SCCreatorsSubscriptionStoreEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f13a4(long param_1)

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
  puVar2 = PTR_PTR_1126cc060;
  _objc_alloc(PTR_PTR_1126cc060);
  func_0x00010c04f1e0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11274ba0c));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1065f14a4; end: 1065f1677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f14a4(long param_1,undefined8 param_2)

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
  undefined *puVar14;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126cc058;
    _objc_alloc();
    lVar13 = (long)_DAT_11274b9fc;
    lVar1 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf5b760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + lVar13;
    _objc_loadWeakRetained();
    lVar5 = lVar13;
    func_0x00010bf5b7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11274ba00;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0dc780();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_11274ba04;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + _DAT_11274ba08;
    _objc_loadWeakRetained(lVar11);
    lVar12 = lVar11;
    func_0x00010c08d4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a20(puVar14,param_2,lVar2,lVar4,lVar5,lVar8,lVar10,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar13);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1065f1678; end: 1065f16e3; -[SCCreatorsSubscriptionStoreEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f1678(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ba0c,0);
  _objc_destroyWeak(param_1 + _DAT_11274ba08);
  _objc_destroyWeak(param_1 + _DAT_11274ba00);
  _objc_destroyWeak(param_1 + _DAT_11274ba04);
  _objc_destroyWeak(param_1 + _DAT_11274b9fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ba10);
  return;
}



/* Entry: 1065f16e4; end: 1065f1757; -[SCCrashUtils initWithCrashLogger:] */

undefined1 * FUN_1065f16e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2080;
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



/* Entry: 1065f1758; end: 1065f175f; -[SCCrashUtils reportNonFatalWithSource:errorMessage:] */

void FUN_1065f1758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_reportWithSource_errorMessage_fa_11262aa38,param_3,param_4,0);
  return;
}



/* Entry: 1065f1760; end: 1065f1767; -[SCCrashUtils reportWithFatalCrashWithSource:errorMessage:] */

void FUN_1065f1760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_reportWithSource_errorMessage_fa_11262aa38,param_3,param_4,1);
  return;
}



/* Entry: 1065f1768; end: 1065f1853; -[SCCrashUtils reportWithSource:errorMessage:fatal:] */

void FUN_1065f1768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e56c38);
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 & 1) == 0) {
    puVar2 = PTR_PTR_1126b3e90;
    _objc_opt_new(PTR_PTR_1126b3e90);
    func_0x00010c17fee0();
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar4,param_2,puVar2,0,puVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065f1854; end: 1065f1857; -[SCCrashUtils fatalCrashNoReportWithErrorMessage:] */

void FUN_1065f1854(void)

{
  return;
}



/* Entry: 1065f1858; end: 1065f1863; -[SCCrashUtils .cxx_destruct] */

void FUN_1065f1858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f1864; end: 1065f278f; -[SCPublicProfileComposerFactoryImpl initWithValdiApplication:serviceConfig:storySnapViewStateProvider:friendStore:incomingFriendStore:subscriptionStore:blizzardLogger:networkingClient:grpcServiceFactory:alertPresenterFactory:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:actionSheetPresenterFactory:composerAvatarBuilderPresenterFactory:snapchatterFetcherHelper:communityPillTapScopeExposer:communitiesOnboardingScopeExposer:communitiesAttributionProviding:communityStoreProvider:bitmojiFlatlandConfigProvider:userSession:publisherConfigurationsProvider:watchedStateCache:lensModularCameraPresentation:deepLinkSendToScopeExposer:sendToScopeExposer:snapProShareMessageSender:simpleContentFetcher:offPlatformLinkGenerationService:circumstanceEngine:commerceProductCatalogScopeExposer:commerceShoppingScopeExposer:publicUserStoryFetcher:composerPlaceStoryPlayer:userLocationProvider:locationProvider:deepLinkHandler:safeBrowsingAPI:webBrowserScopeExposer:navigationDelegate:cofStore:storyPlayerCreator:composerPeopleBridgeFriendServices:pageLauncher:chatCameraScopeLauncher:chatCameraScopeServices:immediateUserFeatureLaunchServices:userFeatureLaunchServices:creatorSettingsMutator:discoverFeedDataSource:discoverFeedDataMutatorDeprecated:interactionHistoryManager:storiesMixerNetworkRequester:safetyReportScopeExposer:creatorsShareMessageDelegate:externalLinkSendingService:snapchattersPublicInfoFetcher:snapchattersDataMutator:remoteStoriesDataProvider:storiesPlaybackDataProvider:storiesGrapheneMetricsEmitter:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:sendToScopeServices:mapPresenter:subscriptionManager:seenAndAddEventLogger:storyStateLoader:networkConnectivityMonitor:creatorSubscriptionsInfoProvider:fanPassSubscriptionScopeFactoryServices:fanPassSubscriptionManagementScopeFactoryServices:friendingExperimentReader:mutualFriendsPageScopeExposer:deckHierarchyFactory:valdiRuntimeProvider:supStore:mutualFriendsDataProviderFuture:chatNavigationService:] */

undefined8 *
FUN_1065f1864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
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
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  puStack_70 = PTR_PTR_1126f2088;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
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
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_43;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_41;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x2b,param_42);
    _objc_retain(param_44);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_69;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = in_stack_00000240;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x51];
    puVar1[0x51] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
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



/* Entry: 1065f2790; end: 1065f2ed3; -[SCPublicProfileComposerFactoryImpl createViewModelWithPublicProfileId:userId:configuration:] */

void FUN_1065f2790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cc068;
  _objc_opt_new(PTR_PTR_1126cc068);
  lVar2 = param_5;
  func_0x00010c0b3ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f1e60();
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206fa0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0b3ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0b3ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f1180();
  FUN_1066080d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d80e0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0b3ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar8 = param_4;
  func_0x00010057694c(param_4,*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x138));
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195700(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0dac80(param_5);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd960(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0dacc0(param_5);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd980(puVar1);
  _objc_release(puVar4);
  lVar2 = param_5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f1e60();
  _objc_release(lVar2);
  if (lVar3 == 0x1b) {
    puVar4 = PTR_PTR_1126af390;
    func_0x00010bfbb8a0(PTR_PTR_1126af390);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a95a0(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
    func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010befe540();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1663a0(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194940(puVar1);
    _objc_release(puVar4);
  }
  puVar6 = PTR_PTR_1126cc070;
  _objc_alloc(PTR_PTR_1126cc070);
  func_0x00010bff9d00();
  puVar7 = PTR_PTR_1126ae820;
  _objc_alloc();
  func_0x00010c060400();
  uVar8 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1065f2ed4;
  puStack_88 = &UNK_110842e18;
  puStack_80 = puVar7;
  func_0x00010007380c();
  _objc_release(uVar8);
  puVar5 = puVar7;
  func_0x00010c272120(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c3e0(puVar6);
  _objc_release(puVar5);
  func_0x00010c21e620(puVar6);
  func_0x00010c1745a0(puVar6);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07b840(param_5);
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b3a80(puVar6);
  _objc_release(puVar5);
  uVar9 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf28de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175fa0(puVar6);
  _objc_release(uVar8);
  func_0x00010c1afc00(puVar6);
  _objc_initWeak(auStack_a8,param_1);
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1065f2f78;
  puStack_b8 = &UNK_110855460;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1c2b60(puVar6);
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1065f3084;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c1c02a0(puVar6);
  puStack_120 = puVar4;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1065f30b8;
  puStack_108 = &UNK_11084f310;
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010c20dc80(puVar6);
  func_0x00010c1117c0(param_5);
  func_0x00010c1e1f40(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c078840(param_5);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5960(puVar6);
  _objc_release(puVar4);
  uVar10 = *(undefined8 *)(param_1 + 0x228);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c29ef20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a3a0(puVar6);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_copyWeak(auStack_128,auStack_a8);
  func_0x00010c1b0e40(puVar6);
  puVar4 = PTR_PTR_1126cc078;
  _objc_alloc(PTR_PTR_1126cc078);
  uVar8 = 0xf0;
  func_0x00010bc9107c(0xf0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0xec;
  func_0x000100c6f294(0xec);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ac00(puVar4);
  func_0x00010c1c0620(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065f2ed4; end: 1065f3083;  */

void FUN_1065f2ed4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf6a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c257f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1065f3084; end: 1065f30b7;  */

void FUN_1065f3084(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c0aef40(*(undefined8 *)(param_1 + 0x210),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065f30b8; end: 1065f31a3;  */

void FUN_1065f30b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065f31a4; end: 1065f3dc3; -[SCPublicProfileComposerFactoryImpl createContextWithViewController:publicProfileId:isPublisherProfile:userId:unifiedPublicProfileScopeDelegate:mutualFriendsPageScopeServices:] */

void FUN_1065f31a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126cc080;
  _objc_alloc_init(PTR_PTR_1126cc080);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar1);
  _objc_release(uVar2);
  func_0x00010c1fd700(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dba0(puVar1);
  _objc_release(uVar2);
  func_0x00010c1a0100(puVar1);
  func_0x00010c1abec0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f5e0(puVar1);
  _objc_release(uVar2);
  func_0x00010c1c0520(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b0fe0;
  _objc_alloc(PTR_PTR_1126b0fe0);
  func_0x00010c0617a0();
  func_0x00010c1e1220(puVar1);
  _objc_release(puVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c10fb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d960(puVar1);
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065f3dc4;
  puStack_90 = &UNK_11084f310;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c19b3e0(puVar1);
  _objc_initWeak(auStack_b0,param_3);
  puVar5 = PTR_PTR_1126b0f80;
  _objc_alloc(PTR_PTR_1126b0f80);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010c0002e0(puVar5);
  func_0x00010c17f820(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b4aa8;
  _objc_alloc(PTR_PTR_1126b4aa8);
  func_0x00010bff7fe0();
  func_0x00010c170ec0(puVar1);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf1e0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175f40(puVar1);
  uVar4 = uVar7;
  func_0x00010bf98500(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196d80(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224a60(puVar1);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b0f98;
  _objc_alloc(PTR_PTR_1126b0f98);
  func_0x00010c061880();
  func_0x00010c1ba8e0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0fc0;
  _objc_alloc(PTR_PTR_1126b0fc0);
  func_0x00010c0588c0();
  func_0x00010c20daa0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc088;
  if (param_5 == 0) {
    _objc_alloc(PTR_PTR_1126cc088);
    puVar8 = PTR_PTR_1126b0500;
    func_0x00010c117100(PTR_PTR_1126b0500);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061760(puVar5);
    _objc_release(puVar8);
  }
  else {
    _objc_alloc();
    func_0x00010c061740();
  }
  func_0x00010c17f0c0(puVar1);
  _objc_release(puVar5);
  func_0x00010c1e5a00(puVar1);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x128));
  func_0x00010c1cb5a0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ebe0(puVar1);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b0e68;
  _objc_alloc(PTR_PTR_1126b0e68);
  lVar9 = param_1 + 0x158;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c02e980(puVar5);
  _objc_release(lVar9);
  func_0x00010c21d360(puVar1);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x208);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f540(puVar1);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf56860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1e1580(uVar2);
  func_0x00010c18e6c0(uVar2);
  func_0x00010c18eac0(uVar2);
  func_0x00010c1dda40(puVar1);
  _objc_release(uVar2);
  lVar10 = *(long *)(param_1 + 0x160);
  func_0x00010c261ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1538;
  _objc_alloc(PTR_PTR_1126b1538);
  func_0x00010c033420();
  lVar9 = lVar10;
  (**(code **)(lVar10 + 0x10))(lVar10,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar10);
  lVar10 = lVar9;
  func_0x00010c269d40(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f980(puVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  puVar5 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  lVar11 = *(long *)(param_1 + 0x160);
  func_0x00010bfb7ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  (**(code **)(lVar11 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f980(puVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc090;
  _objc_alloc(PTR_PTR_1126cc090);
  func_0x00010c061720();
  func_0x00010c17ade0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc098;
  _objc_alloc(PTR_PTR_1126cc098);
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010bfb8800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010bfb79e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0159a0(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c1e4420(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc0a0;
  _objc_alloc(PTR_PTR_1126cc0a0);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  lVar9 = param_1 + 0x158;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  func_0x00010c15d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ece0(puVar5,*(undefined8 *)(param_1 + 0x1e0),uVar4,param_3,lVar9,lVar10,uVar2,
                      *(undefined8 *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                      *(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),
                      *(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1b8),
                      *(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1c0),
                      *(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8),
                      *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),
                      *(undefined8 *)(param_1 + 0x1f0),*(undefined8 *)(param_1 + 0x1f8),
                      *(undefined8 *)(param_1 + 0x278));
  _objc_release(uVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  func_0x00010c1e5820(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cc0a8;
  _objc_alloc(PTR_PTR_1126cc0a8);
  func_0x00010c0617c0();
  func_0x00010c1de060(puVar1);
  _objc_release(puVar5);
  func_0x00010c1c24a0(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x240);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfc7c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bf926c0();
  if ((int)uVar4 != 0) {
    puVar5 = PTR_PTR_1126cc0b0;
    _objc_alloc(PTR_PTR_1126cc0b0);
    func_0x00010c039220();
    func_0x00010c1ca840(puVar1);
    func_0x00010c1ca860(puVar1);
    _objc_release(puVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x240);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1698;
  func_0x00010c11a7a0(PTR_PTR_1126b1698);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar7);
  if ((int)uVar4 != 0) {
    puVar5 = PTR_PTR_1126cc0b8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x180);
    func_0x00010bfb8800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039520();
    _objc_release(uVar4);
    func_0x00010c1d3da0(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065f3dc4; end: 1065f3eab;  */

void FUN_1065f3dc4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1f4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065f3eac; end: 1065f3eb7;  */

void FUN_1065f3eac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentSeeAllPageForProfileUserI_112621258,
             param_2);
  return;
}



/* Entry: 1065f3eb8; end: 1065f3ebf; -[SCPublicProfileComposerFactoryImpl getPublicProfileSubscriptionManager] */

void FUN_1065f3eb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x208),PTR_s_target_112678178);
  return;
}



/* Entry: 1065f3ec0; end: 1065f3f63; -[SCPublicProfileComposerFactoryImpl _getFriendingSubtextWithPublicProfileId:] */

void FUN_1065f3ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065f3f64;
  puStack_40 = &UNK_110895bd8;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bfaa440(uVar2,param_2,param_3,PTR___dispatch_main_q_11034be20,&puStack_58);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065f3f64; end: 1065f4097;  */

void FUN_1065f3f64(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000100bf119c();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_2;
    if (uVar3 == 0) {
      uVar2 = param_2;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c261d20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (uVar4 == 0) goto LAB_1065f4080;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c262240(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c261d20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfebe20(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010befb8c0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
LAB_1065f4080:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065f4098; end: 1065f41f7; -[SCPublicProfileComposerFactoryImpl _onCommunityPillTap:withUserId:viewController:] */

void FUN_1065f4098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bee6d60();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    _objc_release(param_5);
    puVar3 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar4 = 0x81;
    func_0x000100c6f294(0x81);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar3,param_2,puVar2,param_1,uVar4,uVar5,0,0,0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126b1008;
    _objc_alloc(PTR_PTR_1126b1008);
    func_0x00010c0190e0();
    _objc_release(param_5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x98),param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065f41f8; end: 1065f423b; -[SCPublicProfileComposerFactoryImpl _userInCommunity] */

bool FUN_1065f41f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42d40();
  _objc_release(lVar1);
  return 0 < lVar2;
}



/* Entry: 1065f423c; end: 1065f4327; -[SCPublicProfileComposerFactoryImpl _makeShellSnapchatterForUserId:suggestionToken:] */

void FUN_1065f423c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb3f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04f5a0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065f4328; end: 1065f432f; -[SCPublicProfileComposerFactoryImpl _storySummaryInfoObservableForUserWithId:] */

void FUN_1065f4328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x218),PTR_s_storySummaryInfoObservableForUse_112674770);
  return;
}



/* Entry: 1065f4330; end: 1065f44d3; -[SCPublicProfileComposerFactoryImpl _isFanPassSubscribedToCreator:creatorSubscriptionsInfoProvider:] */

void FUN_1065f4330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf5ba80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1065f4400;
  puStack_40 = &UNK_11092efc8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0b8600(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065f44d4; end: 1065f451b; -[SCPublicProfileComposerFactoryImpl didCompleteCommunityPillTapScope] */

void FUN_1065f44d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065f451c; end: 1065f4563; -[SCPublicProfileComposerFactoryImpl verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_1065f451c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065f4564; end: 1065f4943; -[SCPublicProfileComposerFactoryImpl .cxx_destruct] */

void FUN_1065f4564(long param_1)

{
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_destroyWeak(param_1 + 0x158);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f4944; end: 1065f53cf; -[SCPublicProfileServicesProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f4944(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_11274bb5c;
  _objc_loadWeakRetained();
  lVar35 = lVar1;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_11274bb60;
  lVar33 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar33);
  lVar2 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar35;
  func_0x000107d704c8(lVar35,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar33);
  _objc_release(lVar35);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar33 = (long)_DAT_11274bb64;
  lVar1 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar35 = lVar1;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar35;
  (**(code **)(lVar35 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar35);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b1530;
  _objc_alloc();
  func_0x00010c0460e0();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar1 = lVar33;
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar35);
  _objc_release(lVar1);
  _objc_release(lVar33);
  lVar1 = param_1 + _DAT_11274bb68;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11274bb6c;
  _objc_loadWeakRetained();
  lVar33 = lVar1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  puVar10 = PTR_PTR_1126ae720;
  puVar31 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065f53d0;
  puStack_90 = &UNK_1108f0d10;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae720;
  puStack_d0 = puVar31;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1065f5468;
  puStack_b8 = &UNK_11092eff8;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274bb74;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar13 = PTR_PTR_1126cc0c8;
  _objc_alloc();
  lVar35 = (long)_DAT_11274bb78;
  lVar1 = param_1 + lVar35;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar35;
  _objc_loadWeakRetained(lVar33);
  lVar14 = lVar33;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049320();
  _objc_release(lVar14);
  _objc_release(lVar33);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar15 = PTR_PTR_1126ae720;
  puVar31 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1065f54b8;
  puStack_e0 = &UNK_11092f028;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ae720;
  puStack_120 = puVar31;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1065f5590;
  puStack_108 = &UNK_11092f058;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b6520;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11274bb80;
  _objc_loadWeakRetained();
  lVar33 = lVar1;
  func_0x00010c11ab80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0177c0();
  _objc_release(lVar33);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11274bb84;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf44e60();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar33;
  func_0x00010c0b7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar19 = PTR_PTR_1126ae720;
  puStack_148 = puVar31;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1065f5668;
  puStack_130 = &UNK_11092f088;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126ae720;
  puStack_170 = puVar31;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1065f5700;
  puStack_158 = &UNK_11086fd08;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274bb90;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar33;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar14;
  func_0x00010bfea2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar33);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11274bb94;
  _objc_loadWeakRetained();
  lVar33 = lVar1;
  func_0x00010c0b9940();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  _objc_release(lVar1);
  lVar23 = lVar22;
  func_0x00010c0cfac0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11274bb98;
  _objc_loadWeakRetained();
  lVar24 = lVar1;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c11e260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar30 = PTR_PTR_1126cc0e8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11274bb9c;
  _objc_loadWeakRetained();
  lVar26 = lVar1;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar27 = lVar35;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11274bb70;
  _objc_loadWeakRetained();
  lVar28 = lVar33;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11274bba0;
  _objc_loadWeakRetained();
  lVar29 = lVar2;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d020();
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar2);
  _objc_release(lVar28);
  _objc_release(lVar33);
  _objc_release(lVar27);
  _objc_release(lVar35);
  _objc_release(lVar26);
  _objc_release(lVar1);
  puVar31 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_178,auStack_80);
  _objc_retain(puVar17);
  _objc_retain(lVar18);
  func_0x00010bf11fe0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126cc0f8;
  _objc_alloc(PTR_PTR_1126cc0f8);
  func_0x00010c03bca0();
  _objc_release(puVar31);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar30);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(puVar20);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar19);
  _objc_destroyWeak(auStack_128);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar15);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 1065f53d0; end: 1065f5467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f53d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0f90;
    _objc_alloc(PTR_PTR_1126b0f90);
    lVar1 = param_1 + _DAT_11274bb70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d080(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065f5468; end: 1065f54b7;  */

void FUN_1065f5468(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c260820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065f54b8; end: 1065f5667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f54b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cc0d0;
    _objc_alloc(PTR_PTR_1126cc0d0);
    lVar1 = param_1 + _DAT_11274bb70;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274bb60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffaae0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065f5668; end: 1065f576f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f5668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cc0e0;
    _objc_alloc(PTR_PTR_1126cc0e0);
    lVar1 = param_1 + _DAT_11274bb88;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026e20(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065f5770; end: 1065f636f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f5770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  undefined *puVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  
  lVar13 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  if (lVar13 == 0) {
    puVar119 = (undefined *)0x0;
  }
  else {
    puVar119 = PTR_PTR_1126cc0f0;
    _objc_alloc();
    lVar14 = lVar13 + _DAT_11274bba4;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bf075a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    lVar113 = (long)_DAT_11274bba8;
    lVar16 = lVar13 + lVar113;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0d8300();
    _objc_retainAutoreleasedReturnValue();
    lVar113 = lVar13 + lVar113;
    _objc_loadWeakRetained();
    lVar18 = lVar113;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar114 = (long)_DAT_11274bbac;
    lVar19 = lVar13 + lVar114;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    uVar102 = *(undefined8 *)(lVar13 + _DAT_11274bbb0);
    lVar21 = lVar13 + _DAT_11274bbb4;
    _objc_loadWeakRetained();
    lVar114 = lVar13 + lVar114;
    _objc_loadWeakRetained();
    lVar22 = lVar114;
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar13 + _DAT_11274bbb8;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf448c0();
    _objc_retainAutoreleasedReturnValue();
    uVar103 = *(undefined8 *)(param_1 + 0x50);
    uVar104 = *(undefined8 *)(lVar13 + _DAT_11274bbbc);
    uVar105 = *(undefined8 *)(lVar13 + _DAT_11274bbc0);
    lVar25 = lVar13 + _DAT_11274bbc4;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010bf42d20();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar13 + _DAT_11274bbc8;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010bf43140();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = lVar13 + _DAT_11274bbcc;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar13 + _DAT_11274bb7c;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    lVar33 = lVar13 + _DAT_11274bbd0;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c095660();
    _objc_retainAutoreleasedReturnValue();
    uVar106 = *(undefined8 *)(lVar13 + _DAT_11274bbd4);
    lVar35 = lVar13 + _DAT_11274bbd8;
    _objc_loadWeakRetained();
    lVar36 = lVar35;
    func_0x00010c15d500();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar13 + _DAT_11274bbdc;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c22ac20();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = lVar13 + _DAT_11274bbe0;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010c23c760();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = lVar13 + _DAT_11274bbe4;
    _objc_loadWeakRetained();
    lVar42 = lVar41;
    func_0x00010c0e1840();
    _objc_retainAutoreleasedReturnValue();
    lVar43 = lVar13 + _DAT_11274bb60;
    _objc_loadWeakRetained();
    lVar44 = lVar43;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar107 = *(undefined8 *)(lVar13 + _DAT_11274bbe8);
    uVar108 = *(undefined8 *)(lVar13 + _DAT_11274bbec);
    uVar122 = *(undefined8 *)(param_1 + 0x70);
    uVar120 = *(undefined8 *)(param_1 + 0x68);
    uVar109 = *(undefined8 *)(param_1 + 0x78);
    lVar45 = lVar13 + _DAT_11274bb88;
    _objc_loadWeakRetained();
    lVar46 = lVar45;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar47 = lVar13 + _DAT_11274bbf0;
    _objc_loadWeakRetained();
    lVar48 = lVar47;
    func_0x00010bf67f80();
    _objc_retainAutoreleasedReturnValue();
    lVar49 = lVar13 + _DAT_11274bbf4;
    _objc_loadWeakRetained();
    lVar50 = lVar49;
    func_0x00010c1490a0();
    _objc_retainAutoreleasedReturnValue();
    uVar110 = *(undefined8 *)(lVar13 + _DAT_11274bbf8);
    lVar51 = lVar13 + _DAT_11274bbfc;
    _objc_loadWeakRetained();
    lVar52 = lVar51;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar53 = lVar52;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    lVar54 = lVar13 + _DAT_11274bb64;
    _objc_loadWeakRetained();
    lVar55 = lVar13 + _DAT_11274bc00;
    _objc_loadWeakRetained();
    lVar56 = lVar55;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    lVar115 = (long)_DAT_11274bc04;
    lVar57 = lVar13 + lVar115;
    _objc_loadWeakRetained();
    lVar58 = lVar57;
    func_0x00010bf36100();
    _objc_retainAutoreleasedReturnValue();
    lVar115 = lVar13 + lVar115;
    _objc_loadWeakRetained();
    lVar59 = lVar115;
    func_0x00010bf36080();
    _objc_retainAutoreleasedReturnValue();
    lVar60 = lVar13 + _DAT_11274bc08;
    _objc_loadWeakRetained();
    lVar61 = lVar13 + _DAT_11274bc0c;
    _objc_loadWeakRetained();
    lVar62 = lVar13 + _DAT_11274bc10;
    _objc_loadWeakRetained();
    lVar63 = lVar62;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    lVar116 = (long)_DAT_11274bc14;
    lVar64 = lVar13 + lVar116;
    _objc_loadWeakRetained();
    lVar65 = lVar64;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar116 = lVar13 + lVar116;
    _objc_loadWeakRetained();
    lVar66 = lVar116;
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    lVar67 = lVar13 + _DAT_11274bc18;
    _objc_loadWeakRetained();
    lVar68 = lVar67;
    func_0x00010c08d4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar69 = lVar13 + _DAT_11274bb5c;
    _objc_loadWeakRetained();
    lVar70 = lVar69;
    func_0x00010c0cf020();
    _objc_retainAutoreleasedReturnValue();
    uVar111 = *(undefined8 *)(lVar13 + _DAT_11274bc1c);
    lVar71 = lVar13 + _DAT_11274bc20;
    _objc_loadWeakRetained();
    lVar72 = lVar71;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar73 = lVar13 + _DAT_11274bc24;
    _objc_loadWeakRetained();
    lVar74 = lVar73;
    func_0x00010bf9e260();
    _objc_retainAutoreleasedReturnValue();
    lVar117 = (long)_DAT_11274bb78;
    lVar75 = lVar13 + lVar117;
    _objc_loadWeakRetained();
    lVar76 = lVar75;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar117 = lVar13 + lVar117;
    _objc_loadWeakRetained();
    lVar77 = lVar117;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar118 = (long)_DAT_11274bba0;
    lVar78 = lVar13 + lVar118;
    _objc_loadWeakRetained();
    lVar79 = lVar78;
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    lVar118 = lVar13 + lVar118;
    _objc_loadWeakRetained();
    lVar80 = lVar118;
    func_0x00010bfb8c60();
    _objc_retainAutoreleasedReturnValue();
    lVar81 = lVar13 + _DAT_11274bc28;
    _objc_loadWeakRetained();
    lVar82 = lVar81;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    uVar112 = *(undefined8 *)(lVar13 + _DAT_11274bc2c);
    lVar83 = lVar13 + _DAT_11274bc30;
    _objc_loadWeakRetained();
    lVar84 = lVar13 + _DAT_11274bc34;
    _objc_loadWeakRetained();
    uVar123 = *(undefined8 *)(param_1 + 0x98);
    uVar121 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0xa0);
    uVar12 = *(undefined8 *)(param_1 + 0xa8);
    lVar85 = lVar13 + _DAT_11274bc38;
    _objc_loadWeakRetained();
    lVar86 = lVar85;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    lVar87 = lVar13 + _DAT_11274bc3c;
    _objc_loadWeakRetained();
    lVar88 = lVar13 + _DAT_11274bc40;
    _objc_loadWeakRetained();
    lVar89 = lVar13 + _DAT_11274bc44;
    _objc_loadWeakRetained();
    lVar90 = lVar89;
    func_0x00010bfb9460();
    _objc_retainAutoreleasedReturnValue();
    lVar91 = lVar13 + _DAT_11274bc4c;
    _objc_loadWeakRetained();
    lVar92 = lVar91;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar93 = lVar92;
    func_0x00010bf66920();
    _objc_retainAutoreleasedReturnValue();
    lVar94 = lVar13 + _DAT_11274bc50;
    _objc_loadWeakRetained();
    lVar95 = lVar94;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar96 = lVar13 + _DAT_11274bc54;
    _objc_loadWeakRetained();
    lVar97 = lVar96;
    func_0x00010c262a80();
    _objc_retainAutoreleasedReturnValue();
    lVar98 = lVar13 + _DAT_11274bc58;
    _objc_loadWeakRetained();
    lVar99 = lVar98;
    func_0x00010c0d4300();
    _objc_retainAutoreleasedReturnValue();
    lVar100 = lVar13 + _DAT_11274bc5c;
    _objc_loadWeakRetained();
    lVar101 = lVar100;
    func_0x00010bf37020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fb00(puVar119,param_2,lVar15,uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,lVar17,lVar18,
                        lVar20,uVar102,lVar21,lVar22,lVar24,uVar103,uVar104,uVar105,lVar26,lVar28,
                        lVar30,lVar32,uVar4,uVar10,lVar34,uVar106,lVar36,lVar38,lVar40,lVar42,lVar44
                        ,uVar107,uVar108,uVar120,uVar122,uVar109,lVar46,lVar48,lVar50,uVar110,lVar53
                        ,uVar5,uVar11,lVar54,lVar56,lVar58,lVar59,lVar60,lVar61,lVar63,lVar65,lVar66
                        ,lVar68,lVar70,uVar111,lVar72,lVar74,lVar76,lVar77,lVar79,lVar80,lVar82,
                        uVar112,lVar83,lVar84,uVar121,uVar123,uVar6,uVar12);
    _objc_release(lVar101);
    _objc_release(lVar100);
    _objc_release(lVar99);
    _objc_release(lVar98);
    _objc_release(lVar97);
    _objc_release(lVar96);
    _objc_release(lVar95);
    _objc_release(lVar94);
    _objc_release(lVar93);
    _objc_release(lVar92);
    _objc_release(lVar91);
    _objc_release(lVar90);
    _objc_release(lVar89);
    _objc_release(lVar88);
    _objc_release(lVar87);
    _objc_release(lVar86);
    _objc_release(lVar85);
    _objc_release(lVar84);
    _objc_release(lVar83);
    _objc_release(lVar82);
    _objc_release(lVar81);
    _objc_release(lVar80);
    _objc_release(lVar118);
    _objc_release(lVar79);
    _objc_release(lVar78);
    _objc_release(lVar77);
    _objc_release(lVar117);
    _objc_release(lVar76);
    _objc_release(lVar75);
    _objc_release(lVar74);
    _objc_release(lVar73);
    _objc_release(lVar72);
    _objc_release(lVar71);
    _objc_release(lVar70);
    _objc_release(lVar69);
    _objc_release(lVar68);
    _objc_release(lVar67);
    _objc_release(lVar66);
    _objc_release(lVar116);
    _objc_release(lVar65);
    _objc_release(lVar64);
    _objc_release(lVar63);
    _objc_release(lVar62);
    _objc_release(lVar61);
    _objc_release(lVar60);
    _objc_release(lVar59);
    _objc_release(lVar115);
    _objc_release(lVar58);
    _objc_release(lVar57);
    _objc_release(lVar56);
    _objc_release(lVar55);
    _objc_release(lVar54);
    _objc_release(lVar53);
    _objc_release(lVar52);
    _objc_release(lVar51);
    _objc_release(lVar50);
    _objc_release(lVar49);
    _objc_release(lVar48);
    _objc_release(lVar47);
    _objc_release(lVar46);
    _objc_release(lVar45);
    _objc_release(lVar44);
    _objc_release(lVar43);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar114);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar113);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
  }
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar119);
  return;
}



/* Entry: 1065f6370; end: 1065f64e7;  */

void FUN_1065f6370(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
  _objc_retain(*(undefined8 *)(param_2 + 0xa8));
  _objc_retain(*(undefined8 *)(param_2 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0xb8,param_2 + 0xb8);
  return;
}



/* Entry: 1065f64e8; end: 1065f67d3; -[SCPublicProfileServicesProvider subscriptionManagerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f64e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  puVar1 = PTR_PTR_1126cc100;
  _objc_alloc();
  lVar25 = (long)_DAT_11274bc10;
  lVar2 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar6 = lVar25;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274bb78;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274bc14;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274bc60;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0dc780();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274bc64;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274bc68;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11274bc6c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11274bc70;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11274bc74;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274bc78;
  _objc_loadWeakRetained();
  lVar24 = param_1;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006a40(puVar1,param_2,lVar3,lVar5,lVar6,lVar8,lVar10,lVar12,lVar14,lVar17,lVar19,
                      lVar21,lVar23,lVar24);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
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
  _objc_release(lVar25);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065f67d4; end: 1065f67f3; -[SCPublicProfileServicesProvider storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f67d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274bb9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065f67f4; end: 1065f6807; -[SCPublicProfileServicesProvider setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f67f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274bb9c,param_3);
  return;
}



/* Entry: 1065f6808; end: 1065f6827; -[SCPublicProfileServicesProvider connectivityMonitorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f6808(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274bc38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065f6828; end: 1065f683b; -[SCPublicProfileServicesProvider setConnectivityMonitorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f6828(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274bc38,param_3);
  return;
}



/* Entry: 1065f683c; end: 1065f6bef; -[SCPublicProfileServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065f683c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274bc48,0);
  _objc_storeStrong(param_1 + _DAT_11274bc2c,0);
  _objc_storeStrong(param_1 + _DAT_11274bc1c,0);
  _objc_storeStrong(param_1 + _DAT_11274bbf8,0);
  _objc_storeStrong(param_1 + _DAT_11274bbec,0);
  _objc_storeStrong(param_1 + _DAT_11274bbe8,0);
  _objc_storeStrong(param_1 + _DAT_11274bbd4,0);
  _objc_storeStrong(param_1 + _DAT_11274bbc0,0);
  _objc_storeStrong(param_1 + _DAT_11274bbbc,0);
  _objc_destroyWeak(param_1 + _DAT_11274bbb4);
  _objc_storeStrong(param_1 + _DAT_11274bbb0,0);
  _objc_destroyWeak(param_1 + _DAT_11274bc58);
  _objc_destroyWeak(param_1 + _DAT_11274bc54);
  _objc_destroyWeak(param_1 + _DAT_11274bc50);
  _objc_destroyWeak(param_1 + _DAT_11274bc4c);
  _objc_destroyWeak(param_1 + _DAT_11274bb98);
  _objc_destroyWeak(param_1 + _DAT_11274bc44);
  _objc_destroyWeak(param_1 + _DAT_11274bc3c);
  _objc_destroyWeak(param_1 + _DAT_11274bb8c);
  _objc_destroyWeak(param_1 + _DAT_11274bc78);
  _objc_destroyWeak(param_1 + _DAT_11274bc74);
  _objc_destroyWeak(param_1 + _DAT_11274bc38);
  _objc_destroyWeak(param_1 + _DAT_11274bb9c);
  _objc_destroyWeak(param_1 + _DAT_11274bb94);
  _objc_destroyWeak(param_1 + _DAT_11274bc28);
  _objc_destroyWeak(param_1 + _DAT_11274bba0);
  _objc_destroyWeak(param_1 + _DAT_11274bc24);
  _objc_destroyWeak(param_1 + _DAT_11274bc34);
  _objc_destroyWeak(param_1 + _DAT_11274bc40);
  _objc_destroyWeak(param_1 + _DAT_11274bc30);
  _objc_destroyWeak(param_1 + _DAT_11274bc00);
  _objc_destroyWeak(param_1 + _DAT_11274bc20);
  _objc_destroyWeak(param_1 + _DAT_11274bc18);
  _objc_destroyWeak(param_1 + _DAT_11274bc08);
  _objc_destroyWeak(param_1 + _DAT_11274bc0c);
  _objc_destroyWeak(param_1 + _DAT_11274bc04);
  _objc_destroyWeak(param_1 + _DAT_11274bbfc);
  _objc_destroyWeak(param_1 + _DAT_11274bc5c);
  _objc_destroyWeak(param_1 + _DAT_11274bbf0);
  _objc_destroyWeak(param_1 + _DAT_11274bbf4);
  _objc_destroyWeak(param_1 + _DAT_11274bb88);
  _objc_destroyWeak(param_1 + _DAT_11274bb84);
  _objc_destroyWeak(param_1 + _DAT_11274bb80);
  _objc_destroyWeak(param_1 + _DAT_11274bbe4);
  _objc_destroyWeak(param_1 + _DAT_11274bbe0);
  _objc_destroyWeak(param_1 + _DAT_11274bbdc);
  _objc_destroyWeak(param_1 + _DAT_11274bbd8);
  _objc_destroyWeak(param_1 + _DAT_11274bbd0);
  _objc_destroyWeak(param_1 + _DAT_11274bb7c);
  _objc_destroyWeak(param_1 + _DAT_11274bbcc);
  _objc_destroyWeak(param_1 + _DAT_11274bbc8);
  _objc_destroyWeak(param_1 + _DAT_11274bbc4);
  _objc_destroyWeak(param_1 + _DAT_11274bb90);
  _objc_destroyWeak(param_1 + _DAT_11274bbb8);
  _objc_destroyWeak(param_1 + _DAT_11274bb68);
  _objc_destroyWeak(param_1 + _DAT_11274bb74);
  _objc_destroyWeak(param_1 + _DAT_11274bb6c);
  _objc_destroyWeak(param_1 + _DAT_11274bb70);
  _objc_destroyWeak(param_1 + _DAT_11274bb5c);
  _objc_destroyWeak(param_1 + _DAT_11274bc70);
  _objc_destroyWeak(param_1 + _DAT_11274bb78);
  _objc_destroyWeak(param_1 + _DAT_11274bc68);
  _objc_destroyWeak(param_1 + _DAT_11274bc6c);
  _objc_destroyWeak(param_1 + _DAT_11274bc60);
  _objc_destroyWeak(param_1 + _DAT_11274bc14);
  _objc_destroyWeak(param_1 + _DAT_11274bb64);
  _objc_destroyWeak(param_1 + _DAT_11274bba8);
  _objc_destroyWeak(param_1 + _DAT_11274bbac);
  _objc_destroyWeak(param_1 + _DAT_11274bba4);
  _objc_destroyWeak(param_1 + _DAT_11274bc10);
  _objc_destroyWeak(param_1 + _DAT_11274bc64);
  _objc_destroyWeak(param_1 + _DAT_11274bb60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274bc7c);
  return;
}



/* Entry: 1065f6bf0; end: 1065f6c93; -[SCPublisherDependencyProvider initWithCachedViewStateProvider:circumstanceEngine:] */

undefined1 *
FUN_1065f6bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f6c94; end: 1065f6d73; -[SCPublisherDependencyProvider cameosPublisherConfigForBusinessProfileId:] */

void FUN_1065f6c94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108c2c288(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc108;
  _objc_alloc(PTR_PTR_1126cc108);
  func_0x00010c01f320();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108c2c26c(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d45c0(puVar2,param_2,uVar3);
  uVar4 = uVar3;
  func_0x000108c2c1f4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4580(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = 10;
  func_0x00010baed514(10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4680(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065f6d74; end: 1065f6d7b; -[SCPublisherDependencyProvider episodesTileWatcherForBusinessProfileId:] */

undefined8 FUN_1065f6d74(void)

{
  return 0;
}



/* Entry: 1065f6d7c; end: 1065f6d83; -[SCPublisherDependencyProvider bloopsOnboardingPresenterFor:userSession:] */

undefined8 FUN_1065f6d7c(void)

{
  return 0;
}



/* Entry: 1065f6d84; end: 1065f6db3; -[SCPublisherDependencyProvider .cxx_destruct] */

void FUN_1065f6d84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f6db4; end: 1065f6f1b; -[SCSelectionItem toChatIdentifier] */

void FUN_1065f6db4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f52c78);
  puVar4 = PTR_PTR_1126b01c0;
  if ((int)uVar1 == 0) {
    uVar1 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f52c98);
    puVar4 = PTR_PTR_1126b01c0;
    if ((int)uVar1 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_1065f6efc;
    }
    func_0x00010c122a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf680(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c122a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
LAB_1065f6efc:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065f6f1c; end: 1065f709b; -[SCUnifiedPublicProfileSendToWorkflowDelegate initWithBusinessProfile:uiContainer:sendToScopeLauncher:externalLinkSendingService:creatorsShareMessageDelegate:callback:shareSheetConfiguration:] */

undefined1 *
FUN_1065f6f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f2098;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f709c; end: 1065f709f; -[SCUnifiedPublicProfileSendToWorkflowDelegate didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_1065f709c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__end_11255ff40);
  return;
}



/* Entry: 1065f70a0; end: 1065f716b; -[SCUnifiedPublicProfileSendToWorkflowDelegate didSendWithSelectionState:] */

void FUN_1065f70a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0000(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c159d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be9f140(param_1);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be09690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__end_11255ff40);
  return;
}



/* Entry: 1065f716c; end: 1065f736f; -[SCUnifiedPublicProfileSendToWorkflowDelegate _sendResultShareToSelectedItems:additionalText:] */

void FUN_1065f716c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(lVar8 * 8);
      func_0x00010c271b40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010befa120(puVar2);
      }
      _objc_release(lVar3);
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar7 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126cc110;
  _objc_alloc(PTR_PTR_1126cc110);
  func_0x00010c03d5a0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ad60();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0x30);
  if (lVar7 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,param_2);
    _objc_release(param_2);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30);
    *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1065f7370; end: 1065f73e7;  */

void FUN_1065f7370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  if (lVar2 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    _objc_release(param_2);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1065f73e8; end: 1065f7543; -[SCUnifiedPublicProfileSendToWorkflowDelegate _sendExternallyToSelectedContacts:configuration:] */

void FUN_1065f73e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c07b760();
      _objc_release(uVar2);
      _objc_release(lVar1);
      if ((int)uVar4 != 0) {
        lVar1 = param_4;
        func_0x00010c26b9e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_4;
          func_0x00010c26b9e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_4;
          func_0x00010c22c620(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c15c5a0(uVar4,param_2,param_3,lVar3,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_release(lVar1);
          _objc_release(uVar4);
        }
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065f7544; end: 1065f75f7; -[SCUnifiedPublicProfileSendToWorkflowDelegate _end] */

void FUN_1065f7544(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf94c20(*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1065f75f8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1065f75f8; end: 1065f7623;  */

void FUN_1065f75f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065f7624; end: 1065f762f; -[SCUnifiedPublicProfileSendToWorkflowDelegate _detachUI] */

void FUN_1065f7624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1065f7630; end: 1065f769b; -[SCUnifiedPublicProfileSendToWorkflowDelegate .cxx_destruct] */

void FUN_1065f7630(long param_1)

{
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



/* Entry: 1065f769c; end: 1065f7b1f; -[SCUnifiedPublicProfileActionHandler initWithUserSession:viewController:navigationDelegate:performer:sendToScopeLauncher:sendToScopeServices:offPlatformLinkGenerationService:creatorSettingsMutator:discoverFeedDataSource:discoverFeedDataMutatorDeprecated:interactionHistoryManager:storiesMixerNetworkRequester:safetyReportScopeExposer:externalLinkSendingService:creatorsShareMessageDelegate:snapchattersPublicInfoFetcher:snapchattersDataMutator:remoteStoriesDataProvider:storiesPlaybackDataProvider:storiesGrapheneMetricsEmitter:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:] */

undefined8 *
FUN_1065f769c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_70 = PTR_PTR_1126f20a0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
  }
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



/* Entry: 1065f7b20; end: 1065f7ce3; -[SCUnifiedPublicProfileActionHandler sendProfileWithEncodedBusinessProfile:entryInfo:callback:] */

void FUN_1065f7b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_58 = 0;
  puVar2 = PTR_PTR_1126b1a58;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_58;
  _objc_retain(uStack_58);
  if (puVar2 == (undefined *)0x0) {
    if (param_5 != 0) {
      uVar4 = uVar1;
      func_0x00010c09e4e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,uVar4);
      _objc_release(uVar4);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07b760();
    _objc_release(uVar3);
    _objc_initWeak(auStack_60,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_70,auStack_60);
    _objc_retain(puVar2);
    _objc_retain(param_5);
    uStack_68 = (undefined1)uVar4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f7ce4; end: 1065f7fff;  */

void FUN_1065f7ce4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0;
    func_0x00010c044540(puVar4,param_2,puVar5,9,0x14,0xffffffffffffffff,0x88,0,0,0,0,0,0);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar5 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1065f8000;
    puStack_78 = &UNK_110863958;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    lStack_70 = lVar1;
    _objc_retain(uVar11);
    uStack_68 = uVar11;
    func_0x00010bf11fe0(puVar5,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe44e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c15d5c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0(puVar7,param_2,uVar11,0,puVar8,0,0);
    _objc_release(puVar8);
    _objc_release(uVar11);
    puVar8 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    puVar9 = PTR_PTR_1126cc118;
    _objc_alloc();
    func_0x00010bff9ce0();
    uVar11 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined **)(lVar1 + 0x28) = puVar9;
    _objc_release(uVar11);
    puVar9 = PTR_PTR_1126b0810;
    _objc_alloc(PTR_PTR_1126b0810);
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      func_0x00010c046120(puVar9,param_2,0,0);
    }
    else {
      puVar10 = puVar8;
      func_0x00010c26b9e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c046120(puVar9,param_2,puVar10 != (undefined *)0x0,0);
      _objc_release(puVar10);
    }
    uVar11 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010bf23ee0(uVar11,param_2,puVar6,PTR____NSArray0__struct_11034ab48,0,0,puVar9,0,puVar8,
                        puVar4,uVar12 & 0xffffffffffff0000,*(undefined8 *)(lVar1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 0x68),param_2,uVar11,lVar1);
    _objc_release(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(uStack_68);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1065f8000; end: 1065f811f;  */

void FUN_1065f8000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe4500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfbf880(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar3;
  func_0x00010beec820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar4,param_2,uVar1,uVar3,uVar2,2,0,0);
  func_0x00010bfe9ca0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065f8120; end: 1065f826b; -[SCUnifiedPublicProfileActionHandler provideShareableProfileWithEncodedBusinessProfile:sendToUrl:] */

void FUN_1065f8120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_48 = 0;
  puVar2 = PTR_PTR_1126b1a58;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  if (puVar2 != (undefined *)0x0) {
    _objc_initWeak(auStack_50,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(puVar2);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_4);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


