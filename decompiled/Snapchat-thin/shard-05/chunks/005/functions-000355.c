/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ea82b0; end: 103ea82df;  */

void FUN_103ea82b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_103ea4c70(param_2,param_3,**(undefined8 **)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103ea82e0; end: 103ea8397; -[SCLensSingleCameraModeSortingStrategy lensModeEffectsWithApplying:for:effectLayerType:] */

void FUN_103ea82e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103ea84ec(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ea8398; end: 103ea842b; -[SCLensSingleCameraModeSortingStrategy lensModeEffectsWithRemoving:effectLayerType:] */

void FUN_103ea8398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103ea8968(param_3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ea842c; end: 103ea847f; -[SCLensSingleCameraModeSortingStrategy init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea842c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302a868) = 0;
  *(undefined8 *)(param_1 + _DAT_11302a870) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ea8480; end: 103ea84b3;  */

void FUN_103ea8480(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ea84b4; end: 103ea84eb; -[SCLensSingleCameraModeSortingStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea84b4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a868));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a870));
  return;
}



/* Entry: 103ea84ec; end: 103ea8967;  */

/* WARNING: Removing unreachable block (ram,0x000103ea8960) */
/* WARNING: Removing unreachable block (ram,0x000103ea8964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ea84ec(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar10 = param_2;
  func_0x000107c4adac();
  lVar11 = _DAT_11302a870;
  if ((long)puVar10 < 1) {
    FUN_103e9c388();
    _swift_allocObject();
    *(undefined8 *)(puVar10 + 0x18) = 3;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar11 = *(long *)(unaff_x20 + _DAT_11302a868);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((lVar11 != 0) && (lVar14 = *(long *)(unaff_x20 + _DAT_11302a870), lVar14 != 0)) {
      puVar1 = puVar10;
      FUN_103e9c300();
      _swift_allocObject();
      *(undefined8 *)(puVar1 + 0x18) = 3;
      *(undefined8 *)(puVar1 + 0x10) = 1;
      lVar2 = 0;
      FUN_103e9d894();
      lVar9 = lVar2;
      _objc_allocWithZone();
      *(long *)(lVar9 + _DAT_11302a6e8) = lVar11;
      *(long *)(lVar9 + _DAT_11302a6f0) = lVar14;
      puVar6 = PTR_s_init_1125d9248;
      lStack_80 = lVar9;
      lStack_78 = lVar2;
      _objc_retain(lVar11);
      _objc_retain(lVar14);
      plVar3 = &lStack_80;
      _objc_msgSendSuper2(plVar3,puVar6);
      *(long **)(puVar1 + 0x20) = plVar3;
    }
    lVar14 = 0;
    FUN_103e9da44();
    lVar11 = lVar14;
    _objc_allocWithZone();
    *(undefined **)(lVar11 + _DAT_11302a720) = puVar1;
    *(undefined **)(lVar11 + _DAT_11302a728) = puVar13;
    *(undefined ***)(lVar11 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
    plVar3 = &lStack_70;
    lStack_70 = lVar11;
    lStack_68 = lVar14;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    *(long **)(puVar10 + 0x20) = plVar3;
  }
  else {
    pcVar7 = *(char **)(unaff_x20 + _DAT_11302a870);
    pcVar8 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      FUN_103ea8cd0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar7 = "";
      __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("",0,2);
      pcVar8 = (char *)0x0;
    }
    FUN_103ea8cd0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retain(pcVar8);
    puVar10 = param_2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_2,pcVar7);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((((ulong)puVar10 & 1) == 0) &&
        (lVar14 = *(long *)(unaff_x20 + _DAT_11302a868), lVar14 != 0)) &&
       (lVar9 = *(long *)(unaff_x20 + lVar11), lVar9 != 0)) {
      FUN_103e9c300();
      _swift_allocObject();
      *(undefined8 *)(puVar10 + 0x18) = 3;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      lVar4 = 0;
      FUN_103e9d894();
      lVar2 = lVar4;
      _objc_allocWithZone();
      *(long *)(lVar2 + _DAT_11302a6e8) = lVar14;
      *(long *)(lVar2 + _DAT_11302a6f0) = lVar9;
      puVar13 = PTR_s_init_1125d9248;
      lStack_b0 = lVar2;
      lStack_a8 = lVar4;
      _objc_retain(lVar14);
      _objc_retain(lVar9);
      plVar3 = &lStack_b0;
      _objc_msgSendSuper2(plVar3,puVar13);
      *(long **)(puVar10 + 0x20) = plVar3;
      puVar13 = puVar10;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302a868);
    *(undefined8 *)(unaff_x20 + _DAT_11302a868) = param_1;
    _objc_release(uVar5);
    puVar10 = *(undefined **)(unaff_x20 + lVar11);
    *(undefined **)(unaff_x20 + lVar11) = param_2;
    uVar5 = param_1;
    _objc_retain(param_1);
    _objc_release();
    FUN_103e9c388();
    _swift_allocObject();
    *(undefined8 *)(puVar10 + 0x18) = 3;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    puVar6 = puVar10;
    FUN_103e9c300();
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 3;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    lVar14 = 0;
    FUN_103e9d894();
    lVar11 = lVar14;
    _objc_allocWithZone();
    *(undefined8 *)(lVar11 + _DAT_11302a6e8) = param_1;
    *(undefined **)(lVar11 + _DAT_11302a6f0) = param_2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_90 = lVar11;
    lStack_88 = lVar14;
    _objc_retain(param_2);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    plVar3 = &lStack_90;
    _objc_msgSendSuper2(plVar3,puVar1);
    *(long **)(puVar6 + 0x20) = plVar3;
    ppuVar12 = &PTR____CFConstantStringClassReference_110f77198;
    lVar14 = 0;
    FUN_103e9da44();
    lVar11 = lVar14;
    _objc_allocWithZone();
    *(undefined **)(lVar11 + _DAT_11302a720) = puVar6;
    *(undefined **)(lVar11 + _DAT_11302a728) = puVar13;
    *(undefined ***)(lVar11 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
    puVar13 = PTR_s_init_1125d9248;
    lStack_a0 = lVar11;
    lStack_98 = lVar14;
    _objc_retain(&PTR____CFConstantStringClassReference_110f77198);
    plVar3 = &lStack_a0;
    _objc_msgSendSuper2(plVar3,puVar13);
    _objc_release(ppuVar12);
    _objc_release(pcVar7);
    *(long **)(puVar10 + 0x20) = plVar3;
  }
  return puVar10;
}



/* Entry: 103ea8968; end: 103ea8caf;  */

/* WARNING: Removing unreachable block (ram,0x000103ea8ca8) */
/* WARNING: Removing unreachable block (ram,0x000103ea8cac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_103ea8968(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long unaff_x20;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_90;
  long lStack_88;
  long alStack_80 [2];
  long lStack_70;
  long lStack_68;
  long alStack_60 [2];
  
  lVar11 = _DAT_11302a870;
  pcVar9 = *(char **)(unaff_x20 + _DAT_11302a870);
  pcVar7 = pcVar9;
  if (pcVar9 == (char *)0x0) {
    FUN_103ea8cd0(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar7 = "";
    __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC("",0,2);
    pcVar9 = (char *)0x0;
  }
  FUN_103ea8cd0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  _objc_retain(pcVar9);
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,pcVar7);
  _objc_release();
  lVar8 = _DAT_11302a868;
  if ((param_1 & 1) == 0) {
    FUN_103e9c388();
    _swift_allocObject();
    pcVar7[0x18] = '\x03';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    lVar8 = *(long *)(unaff_x20 + _DAT_11302a868);
    pcVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((lVar8 != 0) && (lVar11 = *(long *)(unaff_x20 + lVar11), lVar11 != 0)) {
      pcVar9 = pcVar7;
      FUN_103e9c300();
      _swift_allocObject();
      pcVar9[0x18] = '\x03';
      pcVar9[0x19] = '\0';
      pcVar9[0x1a] = '\0';
      pcVar9[0x1b] = '\0';
      pcVar9[0x1c] = '\0';
      pcVar9[0x1d] = '\0';
      pcVar9[0x1e] = '\0';
      pcVar9[0x1f] = '\0';
      pcVar9[0x10] = '\x01';
      pcVar9[0x11] = '\0';
      pcVar9[0x12] = '\0';
      pcVar9[0x13] = '\0';
      pcVar9[0x14] = '\0';
      pcVar9[0x15] = '\0';
      pcVar9[0x16] = '\0';
      pcVar9[0x17] = '\0';
      lVar5 = 0;
      FUN_103e9d894();
      lVar10 = lVar5;
      _objc_allocWithZone();
      *(long *)(lVar10 + _DAT_11302a6e8) = lVar8;
      *(long *)(lVar10 + _DAT_11302a6f0) = lVar11;
      puVar3 = PTR_s_init_1125d9248;
      lStack_70 = lVar10;
      lStack_68 = lVar5;
      _objc_retain(lVar8);
      _objc_retain(lVar11);
      plVar6 = &lStack_70;
      _objc_msgSendSuper2(plVar6,puVar3);
      *(long **)(pcVar9 + 0x20) = plVar6;
    }
    plVar6 = alStack_60;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar2 = *(undefined **)(unaff_x20 + _DAT_11302a868);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((puVar2 != (undefined *)0x0) && (lVar10 = *(long *)(unaff_x20 + lVar11), lVar10 != 0)) {
      puVar3 = puVar2;
      FUN_103e9c300();
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x18) = 3;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      lVar4 = 0;
      FUN_103e9d894();
      lVar5 = lVar4;
      _objc_allocWithZone();
      *(undefined **)(lVar5 + _DAT_11302a6e8) = puVar2;
      *(long *)(lVar5 + _DAT_11302a6f0) = lVar10;
      puVar1 = PTR_s_init_1125d9248;
      lStack_90 = lVar5;
      lStack_88 = lVar4;
      _objc_retain(puVar2);
      _objc_retain(lVar10);
      plVar6 = &lStack_90;
      _objc_msgSendSuper2(plVar6,puVar1);
      *(long **)(puVar3 + 0x20) = plVar6;
      puVar2 = *(undefined **)(unaff_x20 + lVar8);
    }
    *(undefined8 *)(unaff_x20 + lVar8) = 0;
    _objc_release(puVar2);
    pcVar7 = *(char **)(unaff_x20 + lVar11);
    *(undefined8 *)(unaff_x20 + lVar11) = 0;
    _objc_release();
    FUN_103e9c388();
    _swift_allocObject();
    pcVar7[0x18] = '\x03';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    plVar6 = alStack_80;
    pcVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar8 = 0;
  FUN_103e9da44();
  lVar11 = lVar8;
  _objc_allocWithZone();
  *(char **)(lVar11 + _DAT_11302a720) = pcVar9;
  *(undefined **)(lVar11 + _DAT_11302a728) = puVar3;
  *(undefined ***)(lVar11 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
  *plVar6 = lVar11;
  plVar6[1] = lVar8;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  *(long **)(pcVar7 + 0x20) = plVar6;
  return pcVar7;
}



/* Entry: 103ea8cb0; end: 103ea8ccf;  */

void FUN_103ea8cb0(void)

{
  _objc_opt_self(&PTR_PTR_11295e6d8);
  return;
}



/* Entry: 103ea8cd0; end: 103ea8d0f;  */

void FUN_103ea8cd0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ea8d10; end: 103ea8dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ea8d10(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302a8a0) = param_1;
  func_0x000103ea90c0(param_2,unaff_x20 + _DAT_113812210,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812218);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_2);
  return puVar2;
}



/* Entry: 103ea8dc0; end: 103ea8f27; -[SCLensAssetUploadingResult initWithSucceed:boltURL:uploadMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103ea8dc0(long param_1,undefined8 param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  ulong uVar5;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_60 - extraout_x8;
  if (param_4 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar2,param_4);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  uVar5 = (ulong)(param_4 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,uVar5,1);
  if (param_5 == 0) {
    uVar5 = 0xf000000000000000;
  }
  else {
    lVar3 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined1 *)(param_1 + _DAT_11302a8a0) = param_3;
  func_0x000103ea90c0(lVar2,param_1 + _DAT_113812210,0x112d36580,&UNK_10d9016d0);
  plVar4 = (long *)(param_1 + _DAT_113812218);
  *plVar4 = param_5;
  plVar4[1] = uVar5;
  plVar4 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar2);
  return plVar4;
}



/* Entry: 103ea8f28; end: 103ea8f33; -[SCLensAssetUploadingResult initWithSucceed:] */

void FUN_103ea8f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithSucceed_boltURL_uploadMe_1125f16f0,param_3,0,0);
  return;
}



/* Entry: 103ea8f34; end: 103ea8f93; -[SCLensAssetUploadingResult init] */

void FUN_103ea8f34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensAssetsDataProvider.LensAssetUploadingResult",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8f60);
  (*pcVar1)();
}



/* Entry: 103ea8f94; end: 103ea8fcf; -[SCLensAssetUploadingResult .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea8f94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x0001000293e4(param_1 + _DAT_113812210);
  uVar2 = *(ulong *)(param_1 + _DAT_113812218);
  uVar1 = ((ulong *)(param_1 + _DAT_113812218))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103ea8fd0; end: 103ea9007;  */

bool FUN_103ea8fd0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ea9008; end: 103ea903f;  */

void FUN_103ea9008(undefined8 param_1)

{
  if (lRam000000011302a8d0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d1b58);
  return;
}



/* Entry: 103ea9040; end: 103ea9107;  */

void FUN_103ea9040(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dca5c90;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dca5ca8;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 103ea9108; end: 103ea9157;  */

void FUN_103ea9108(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam000000011302a8e0 != 0) {
    return;
  }
  puVar1 = &UNK_11071bb60;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam000000011302a8e0 = param_1;
  return;
}



/* Entry: 103ea9158; end: 103ea9167; -[SCLensInMemoryAssetsProvider errorsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a8e8));
  return;
}



/* Entry: 103ea9168; end: 103ea91d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9168(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  lVar1 = _DAT_11302a8f0;
  _swift_beginAccess(param_1 + _DAT_11302a8f0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = puVar2;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 103ea91d4; end: 103ea929f; -[SCLensInMemoryAssetsProvider clearCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea91d4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain();
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar2);
  uStack_50 = param_1;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar2,0x103ea9df0,auStack_60,PTR___sytN_11034f1b0 + 8);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 103ea92a0; end: 103ea92d3;  */

void FUN_103ea92a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ea92d4; end: 103ea931b; -[SCLensInMemoryAssetsProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea92d4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a8f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a8f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a8e8));
  return;
}



/* Entry: 103ea931c; end: 103ea93e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103ea931c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&uStack_40,0x103ea99a4,auStack_60,uVar2);
  auVar1._8_8_ = lStack_38;
  auVar1._0_8_ = uStack_40;
  if (lStack_38 == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302a8e8);
    FUN_103ea99bc(param_1,0xd00000000000003a,0x800000010f1cb7c0,0);
    func_0x000107c4d664(uVar2);
    _objc_release(param_1);
  }
  return auVar1;
}



/* Entry: 103ea93e4; end: 103ea94d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea93e4(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [24];
  
  uVar4 = param_3;
  func_0x000107c3e234();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_3);
  lVar2 = _DAT_11302a8f0;
  _swift_beginAccess(param_2 + _DAT_11302a8f0,auStack_58,0x20,0);
  uVar6 = *(ulong *)(param_2 + lVar2);
  if (*(long *)(uVar6 + 0x10) == 0) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    uVar5 = uVar4;
    func_0x000100029284();
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(uVar6 + 0x38) + uVar3 * 0x10);
      uVar8 = *puVar1;
      uVar7 = puVar1[1];
      _swift_bridgeObjectRetain(uVar7);
    }
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar6;
  }
  _swift_bridgeObjectRelease(uVar4);
  *param_1 = uVar8;
  param_1[1] = uVar7;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 103ea94d8; end: 103ea955f; -[SCLensInMemoryAssetsProvider remoteAssetPathForAsset:] */

void FUN_103ea94d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103ea931c(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ea9560; end: 103ea9643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  uVar4 = param_2;
  func_0x000107c3e234(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  lVar1 = _DAT_11302a8f0;
  _swift_beginAccess(param_1 + _DAT_11302a8f0,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_4);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  func_0x00010018433c(param_3,param_4,uVar2,uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + lVar1) = uVar5;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 103ea9644; end: 103ea9873; -[SCLensInMemoryAssetsProvider setRemoteAssetPath:forAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_retain();
  _objc_retain();
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar2);
  uStack_70 = param_1;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_58 = param_2;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar2,0x103ea9ddc,auStack_80,PTR___sytN_11034f1b0 + 8);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 103ea9874; end: 103ea991f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar2 = param_2;
  func_0x000107c3e234(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  _swift_beginAccess(param_1 + _DAT_11302a8f0,auStack_58,0x21,0);
  uVar3 = uVar2;
  func_0x0001014c4e50(uVar1,uVar2);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 103ea9920; end: 103ea998b; -[SCLensInMemoryAssetsProvider invalidateAsset:error:] */

void FUN_103ea9920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x000103ea9750(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103ea998c; end: 103ea99bb;  */

void FUN_103ea998c(void)

{
  long unaff_x20;
  
  FUN_103ea9168(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103ea99bc; end: 103ea9d87;  */

undefined * FUN_103ea99bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_1a8 [176];
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x51);
  uVar7 = 0x800000010f1cb840;
  __sSS6appendyySSF(0xd000000000000046,0x800000010f1cb840);
  uVar3 = param_1;
  func_0x000107c3e234(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar3);
  __sSS6appendyySSF(uVar2,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x203a6570797420,0xe700000000000000);
  func_0x000107c3e240();
  uVar3 = 0;
  uStack_78 = param_1;
  FUN_103ea9108(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&uStack_78,&uStack_70,uVar3,PTR___ss26DefaultStringInterpolationVN_11034ec00,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_68;
  uVar3 = uStack_70;
  if (param_4 == 0) {
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_f8;
    _swift_initStackObject();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar8;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    uVar3 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x50) = uVar3;
    *(undefined1 **)(lVar4 + 0x58) = puVar8;
    *(undefined **)(lVar4 + 0x78) = puVar1;
    *(undefined8 *)(lVar4 + 0x60) = param_2;
    *(undefined8 *)(lVar4 + 0x68) = param_3;
    _swift_bridgeObjectRetain(param_3);
    lVar5 = lVar4;
    func_0x000100214a84(lVar4);
    _swift_setDeallocating(lVar4);
    uVar3 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),2,uVar3);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1cb890);
    lVar4 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar5);
    func_0x000107c466bc(puVar6);
  }
  else {
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_1a8;
    _swift_initStackObject();
    *(undefined8 *)(lVar4 + 0x18) = 6;
    *(undefined8 *)(lVar4 + 0x10) = 3;
    uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar4 + 0x28) = puVar8;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    *(undefined8 *)(lVar4 + 0x38) = uVar2;
    uVar3 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x50) = uVar3;
    *(undefined1 **)(lVar4 + 0x58) = puVar8;
    *(undefined **)(lVar4 + 0x78) = puVar1;
    *(undefined8 *)(lVar4 + 0x60) = param_2;
    *(undefined8 *)(lVar4 + 0x68) = param_3;
    uVar3 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(lVar4 + 0x80) = uVar3;
    *(undefined1 **)(lVar4 + 0x88) = puVar8;
    uVar3 = 0;
    func_0x000100470974(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    *(undefined8 *)(lVar4 + 0xa8) = uVar3;
    *(long *)(lVar4 + 0x90) = param_4;
    _objc_retain(param_4);
    _objc_retain();
    _swift_bridgeObjectRetain(param_3);
    lVar5 = lVar4;
    func_0x000100214a84(lVar4);
    _swift_setDeallocating(lVar4);
    uVar3 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    _swift_arrayDestroy((undefined8 *)(lVar4 + 0x20),3,uVar3);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000029;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1cb890);
    lVar4 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar5);
    func_0x000107c466bc(puVar6);
    _objc_release(param_4);
  }
  _objc_release(uVar3);
  _objc_release(lVar4);
  return puVar6;
}



/* Entry: 103ea9d88; end: 103ea9e03;  */

void FUN_103ea9d88(void)

{
  long unaff_x20;
  
  FUN_103ea9560(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103ea9e04; end: 103ea9e4b; -[SCLensRemoteAssetsProvider delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a928;
  _swift_beginAccess(param_1 + _DAT_11302a928,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ea9e4c; end: 103ea9ee3; -[SCLensRemoteAssetsProvider setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea9e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a928;
  _swift_beginAccess(param_1 + _DAT_11302a928,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ea9ee4; end: 103eaa0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103ea9ee4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302a928,0);
  lVar1 = _DAT_11302a930;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302a938) = param_1;
  _swift_unknownObjectRetain(param_1);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + _DAT_11302a940) = puVar3;
  puVar3 = PTR_PTR_1126ae810;
  _objc_allocWithZone();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_11302a948) = puVar3;
  puVar4 = &stack0xffffffffffffffb0;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  puVar3 = &UNK_11071bbb0;
  _swift_allocObject(&UNK_11071bbb0,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,puVar4);
  puVar5 = &UNK_11071bbd8;
  _swift_allocObject(&UNK_11071bbd8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_60 = FUN_103eab0e8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101218f4c;
  puStack_68 = &UNK_11071bbf0;
  puStack_58 = puVar5;
  __Block_copy(&puStack_80);
  puVar3 = puStack_58;
  _swift_unknownObjectRetain(param_1);
  _objc_retain();
  _swift_release(puVar3);
  uVar2 = param_2;
  func_0x000107c5c320(param_2);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar6);
  func_0x000107c3e924(uVar2);
  _objc_release(puVar4);
  _swift_unknownObjectRelease(param_1);
  _objc_release(param_2);
  _objc_release(uVar2);
  return puVar4;
}



/* Entry: 103eaa0bc; end: 103eaa2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaa0bc(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar10 = *(undefined8 *)(param_2 + _DAT_11302a930);
    lStack_a0 = param_2;
    _swift_retain(uVar10);
    uVar6 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    func_0x000100087bd4(&lStack_80,FUN_103eab19c,auStack_b0,uVar6);
    _swift_release(uVar10);
    lVar11 = 0;
    uVar8 = 1L << ((ulong)*(byte *)(lStack_80 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lStack_80 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lStack_80 + 0x40);
    while( true ) {
      while (uVar9 != 0) {
        uVar7 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        uVar7 = lVar11 << 10 | LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(lStack_80 + 0x30) + uVar7);
        uVar6 = *puVar1;
        uVar2 = puVar1[1];
        puVar1 = (undefined8 *)(*(long *)(lStack_80 + 0x38) + uVar7);
        uVar10 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar3);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        uVar7 = param_1;
        func_0x000107c40404();
        _objc_release(uVar10);
        if ((uVar7 & 1) != 0) {
          uVar10 = uVar6;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
          func_0x000107c3f488(param_3);
          _objc_release(uVar10);
          lStack_a0 = param_2;
          uStack_98 = uVar6;
          uStack_90 = uVar2;
          func_0x000100087bd4(FUN_103eab1fc,auStack_b0,PTR___sytN_11034f1b0 + 8);
        }
        _swift_bridgeObjectRelease(uVar2);
      }
      bVar5 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103eaa2d0);
        (*pcVar4)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar11) break;
      uVar9 = ((ulong *)(lStack_80 + 0x40))[lVar11];
    }
    _swift_release(lStack_80);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103eaa2d0; end: 103eaa363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaa2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + _DAT_11302a940,auStack_58,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  uVar1 = param_3;
  func_0x0001014c4e50(param_2,param_3);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 103eaa364; end: 103eaa3af; -[SCLensRemoteAssetsProvider initWithAssetsFetcher:removedEffectsObservable:] */

void FUN_103eaa364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  FUN_103ea9ee4(param_3,param_4);
  return;
}



/* Entry: 103eaa3b0; end: 103eaa40f; -[SCLensRemoteAssetsProvider init] */

void FUN_103eaa3b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensAssetsDataProvider.LensRemoteAssetsProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eaa3dc);
  (*pcVar1)();
}



/* Entry: 103eaa410; end: 103eaa477; -[SCLensRemoteAssetsProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaa410(long param_1)

{
  FUN_103eab10c(param_1 + _DAT_11302a928);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a940));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302a930));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a948));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302a938));
  return;
}



/* Entry: 103eaa478; end: 103eaa5ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaa478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_11071bc28;
  _swift_allocObject(&UNK_11071bc28,0x18,7);
  lVar2 = _DAT_11302a928;
  _swift_beginAccess(unaff_x20 + _DAT_11302a928,auStack_68,0,0);
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong(lVar2);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,lVar2);
  _swift_unknownObjectRelease(lVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_11302a938);
  uVar3 = param_3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  puVar4 = &UNK_11071bc50;
  _swift_allocObject(&UNK_11071bc50,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  *(undefined **)(puVar4 + 0x30) = puVar1;
  pcStack_78 = FUN_103eab130;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_103eaa9bc;
  puStack_80 = &UNK_11071bc68;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  __Block_copy(ppuVar5);
  puVar4 = puStack_70;
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(puVar1);
  _swift_release(puVar4);
  func_0x000107c42fbc(uVar6);
  __Block_release(ppuVar5);
  _swift_release(puVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 103eaa5f0; end: 103eaa80b;  */

void FUN_103eaa5f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  if (param_2 != 0) {
    lVar1 = param_2;
    _objc_retain(param_2);
    func_0x000107c3e234();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar1);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    func_0x000107c5d5d0(param_6);
    _objc_release(param_2);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  lVar1 = param_3;
  func_0x000107c3f9b4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
    func_0x000100028eb0();
  }
  func_0x000107c4adac(param_1);
  lVar1 = param_3;
  func_0x000107c3e234();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  uVar2 = param_4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  puVar3 = &UNK_11071bcf0;
  _swift_allocObject(&UNK_11071bcf0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(long *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_1;
  pcStack_70 = FUN_103eab18c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff4e10;
  puStack_78 = &UNK_11071bd08;
  puStack_68 = puVar3;
  __Block_copy(&puStack_90);
  puVar3 = puStack_68;
  _swift_retain(param_7);
  _objc_retain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _objc_retain(param_1);
  _swift_release(puVar3);
  func_0x000107c5d5d0(param_6);
  __Block_release(ppuVar4);
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 103eaa80c; end: 103eaa9bb;  */

void FUN_103eaa80c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    lVar5 = param_2 + 0x10;
    param_6 = param_3;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c41d18();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
        return;
      }
      goto LAB_103eaa9b8;
    }
  }
  else {
    lVar5 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    _swift_errorRetain(param_1);
    if (lVar5 != 0) {
      lVar6 = param_1;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      param_3 = lVar6;
      func_0x000107c41bbc(lVar5);
      _swift_unknownObjectRelease(lVar5);
      _objc_release(lVar6);
    }
    lVar6 = param_6;
    func_0x000107c4adac();
    if (lVar6 < 1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
        return;
      }
      goto LAB_103eaa9b8;
    }
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    func_0x000107c415e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107c4ff4c();
    _objc_release(puVar3);
    lVar5 = 0;
    if ((int)puVar4 == 0) {
      lVar6 = lVar5;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(lVar6);
      _swift_willThrow();
      _swift_errorRelease(param_1);
    }
    else {
      _objc_retain();
      lVar5 = param_1;
    }
    _swift_errorRelease();
  }
  lVar6 = lVar5;
  param_3 = param_6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
LAB_103eaa9b8:
  ___stack_chk_fail();
  pcVar1 = *(code **)(lVar6 + 0x20);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  lVar7 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 103eaa9bc; end: 103eaaa33;  */

void FUN_103eaa9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  uVar3 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103eaaa34; end: 103eaaac7; -[SCLensRemoteAssetsProvider requestRemoteAssetForUpdater:forAsset:forEffectId:] */

void FUN_103eaaa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_103eaa478(param_3,param_4,param_5,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103eaaac8; end: 103eaacaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaaac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  func_0x000100087bd4(FUN_103eab140,&puStack_a0,PTR___sytN_11034f1b0 + 8);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302a938);
  uVar1 = param_3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
  func_0x000107c5d718(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  puVar2 = &UNK_11071bca0;
  _swift_allocObject(&UNK_11071bca0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  ppuVar3 = &puStack_a0;
  __Block_copy(ppuVar3);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _swift_release(puVar2);
  uVar1 = uVar4;
  func_0x000107c5c320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar3);
  _objc_release(uVar4);
  func_0x000107c3e924(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 103eaacb0; end: 103eaad7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaacb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_11302a940;
  _swift_beginAccess(param_1 + _DAT_11302a940,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  func_0x00010018433c(param_4,param_5,param_2,param_3,uVar2);
  _swift_bridgeObjectRelease(param_3);
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 103eaad7c; end: 103eaaf9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eaad7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar2 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  cVar1 = *(char *)(param_1 + _DAT_11302a8a0);
  func_0x000107c3e234();
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    if (param_3 == 0) {
      param_3 = 0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar4);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    func_0x000100029394(param_1 + _DAT_113812210,puVar7);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar8 = *(long *)(lVar2 + -8);
    puVar3 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar2);
    puVar5 = (undefined1 *)0x0;
    if ((int)puVar3 != 1) {
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      (**(code **)(lVar8 + 8))(puVar7,lVar2);
      puVar5 = puVar3;
    }
    if ((ulong)((undefined8 *)(param_1 + _DAT_113812218))[1] >> 0x3c < 0xf) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_113812218);
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar6);
    }
    else {
      uVar6 = 0;
    }
    func_0x000107c5d5cc(param_2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(uVar6);
    return;
  }
  if (param_3 == 0) {
    param_3 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar4);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  func_0x000107c5d5c8(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103eaaf9c; end: 103eaafe7;  */

void FUN_103eaaf9c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103eaafe8; end: 103eab0e7; -[SCLensRemoteAssetsProvider requestRemoteAssetUploadForUpdater:forAsset:forEffectId:withAssetPath:withAssetBatchId:shouldDeleteAfterUploading:] */

void FUN_103eaafe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_103eaaac8(param_3,param_4,param_5,param_2,param_6,uVar1,param_7,uVar2,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103eab0e8; end: 103eab10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab0e8(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar7 != 0) {
    uVar12 = *(undefined8 *)(lVar7 + _DAT_11302a930);
    lStack_a0 = lVar7;
    _swift_retain(uVar12);
    uVar8 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    func_0x000100087bd4(&lStack_80,FUN_103eab19c,auStack_b0,uVar8);
    _swift_release(uVar12);
    lVar13 = 0;
    uVar10 = 1L << ((ulong)*(byte *)(lStack_80 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lStack_80 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lStack_80 + 0x40);
    while( true ) {
      while (uVar11 != 0) {
        uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 - 1 & uVar11;
        uVar9 = lVar13 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(lStack_80 + 0x30) + uVar9);
        uVar8 = *puVar1;
        uVar2 = puVar1[1];
        puVar1 = (undefined8 *)(*(long *)(lStack_80 + 0x38) + uVar9);
        uVar12 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(uVar3);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        uVar9 = param_1;
        func_0x000107c40404();
        _objc_release(uVar12);
        if ((uVar9 & 1) != 0) {
          uVar12 = uVar8;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar2);
          func_0x000107c3f488(uVar4);
          _objc_release(uVar12);
          lStack_a0 = lVar7;
          uStack_98 = uVar8;
          uStack_90 = uVar2;
          func_0x000100087bd4(FUN_103eab1fc,auStack_b0,PTR___sytN_11034f1b0 + 8);
        }
        _swift_bridgeObjectRelease(uVar2);
      }
      bVar6 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103eaa2d0);
        (*pcVar5)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar13) break;
      uVar11 = ((ulong *)(lStack_80 + 0x40))[lVar13];
    }
    _swift_release(lStack_80);
    _objc_release(lVar7);
  }
  return;
}



/* Entry: 103eab10c; end: 103eab12f;  */

undefined8 FUN_103eab10c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103eab130; end: 103eab13f;  */

void FUN_103eab130(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar8 = &puStack_90;
  if (param_2 != 0) {
    lVar5 = param_2;
    _objc_retain(param_2);
    func_0x000107c3e234();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar5);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
    func_0x000107c5d5d0(uVar2);
    _objc_release(param_2);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  lVar5 = lVar3;
  func_0x000107c3f9b4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    _objc_release();
    func_0x000100028eb0();
  }
  func_0x000107c4adac(param_1);
  lVar5 = lVar3;
  func_0x000107c3e234();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  uVar6 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar1);
  puVar7 = &UNK_11071bcf0;
  _swift_allocObject(&UNK_11071bcf0,0x38,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar9;
  *(long *)(puVar7 + 0x18) = lVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar1;
  *(undefined8 *)(puVar7 + 0x30) = param_1;
  pcStack_70 = FUN_103eab18c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ff4e10;
  puStack_78 = &UNK_11071bd08;
  puStack_68 = puVar7;
  __Block_copy(&puStack_90);
  puVar7 = puStack_68;
  _swift_retain(uVar9);
  _objc_retain(lVar3);
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(param_1);
  _swift_release(puVar7);
  func_0x000107c5d5d0(uVar2);
  __Block_release(ppuVar8);
  _objc_release(lVar5);
  _objc_release(uVar6);
  return;
}



/* Entry: 103eab140; end: 103eab15f;  */

void FUN_103eab140(void)

{
  long unaff_x20;
  
  FUN_103eaacb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 103eab160; end: 103eab16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab160(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  cVar2 = *(char *)(param_1 + _DAT_11302a8a0);
  func_0x000107c3e234();
  _objc_retainAutoreleasedReturnValue();
  if (cVar2 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar7);
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
    func_0x000100029394(param_1 + _DAT_113812210,puVar10);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar11 = *(long *)(lVar4 + -8);
    puVar5 = puVar10;
    (**(code **)(lVar11 + 0x30))(puVar10,1,lVar4);
    puVar8 = (undefined1 *)0x0;
    if ((int)puVar5 != 1) {
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      (**(code **)(lVar11 + 8))(puVar10,lVar4);
      puVar8 = puVar5;
    }
    if ((ulong)((undefined8 *)(param_1 + _DAT_113812218))[1] >> 0x3c < 0xf) {
      uVar9 = *(undefined8 *)(param_1 + _DAT_113812218);
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar9);
    }
    else {
      uVar9 = 0;
    }
    func_0x000107c5d5cc(uVar1);
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(uVar9);
    return;
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar7);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
  func_0x000107c5d5c8(uVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 103eab16c; end: 103eab18b;  */

void FUN_103eab16c(void)

{
  _objc_opt_self(&PTR_PTR_11295e938);
  return;
}



/* Entry: 103eab18c; end: 103eab19b;  */

void FUN_103eab18c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    lVar5 = lVar8 + 0x10;
    lVar9 = lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c41d18();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
        return;
      }
      goto LAB_103eaa9b8;
    }
  }
  else {
    lVar5 = lVar8 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    _swift_errorRetain(param_1);
    if (lVar5 != 0) {
      lVar6 = param_1;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      lVar7 = lVar6;
      func_0x000107c41bbc(lVar5);
      _swift_unknownObjectRelease(lVar5);
      _objc_release(lVar6);
    }
    lVar6 = lVar9;
    func_0x000107c4adac();
    if (lVar6 < 1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
        return;
      }
      goto LAB_103eaa9b8;
    }
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    _objc_opt_self();
    func_0x000107c415e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107c4ff4c();
    _objc_release(puVar3);
    lVar5 = 0;
    if ((int)puVar4 == 0) {
      lVar7 = lVar5;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(lVar7);
      _swift_willThrow();
      _swift_errorRelease(param_1);
    }
    else {
      _objc_retain();
      lVar5 = param_1;
    }
    _swift_errorRelease();
  }
  lVar6 = lVar5;
  lVar7 = lVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
LAB_103eaa9b8:
  ___stack_chk_fail();
  pcVar1 = *(code **)(lVar6 + 0x20);
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(lVar8);
  lVar9 = lVar7;
  _objc_retain(lVar7);
  (*pcVar1)(lVar8,lVar7);
  _swift_release(uVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 103eab19c; end: 103eab1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab19c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a940;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + _DAT_11302a940,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar2 + lVar1);
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 103eab1fc; end: 103eab217;  */

void FUN_103eab1fc(void)

{
  long unaff_x20;
  
  FUN_103eaa2d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103eab218; end: 103eab233;  */

void FUN_103eab218(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103eab234; end: 103eab28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab234(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a978) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302a980) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eab28c; end: 103eab2ef; -[LensLocationPermissionPresentationDelegate initWithMainQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302a978) = 0;
  *(undefined8 *)(param_1 + _DAT_11302a980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103eab2f0; end: 103eab39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab2f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar2 = PTR_PTR_1126b1c10;
    _objc_allocWithZone();
    func_0x000107c495dc(uVar3);
    lVar1 = _DAT_11302a978;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11302a978);
    *(undefined **)(param_1 + _DAT_11302a978) = puVar2;
    _objc_release(uVar3);
    if (*(long *)(param_1 + lVar1) != 0) {
      func_0x000107c3e2c0();
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103eab39c; end: 103eab3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab39c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
    puVar3 = PTR_PTR_1126b1c10;
    _objc_allocWithZone();
    func_0x000107c495dc(uVar4);
    lVar1 = _DAT_11302a978;
    uVar4 = *(undefined8 *)(lVar2 + _DAT_11302a978);
    *(undefined **)(lVar2 + _DAT_11302a978) = puVar3;
    _objc_release(uVar4);
    if (*(long *)(lVar2 + lVar1) != 0) {
      func_0x000107c3e2c0();
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 103eab3a4; end: 103eab553; -[LensLocationPermissionPresentationDelegate permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11302a980);
  _swift_getObjectType(uVar3);
  puVar1 = &UNK_11071be18;
  _swift_allocObject(&UNK_11071be18,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11071be90;
  _swift_allocObject(&UNK_11071be90,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_1);
  _swift_retain(puVar1);
  func_0x00010090569c(0x103eab878,puVar2,uVar3);
  _swift_release(puVar1);
  _objc_release(param_1);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103eab554; end: 103eab55f;  */

void FUN_103eab554(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_11071beb8;
  _swift_allocObject(&UNK_11071beb8,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  pcStack_50 = FUN_103eab84c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11071bed0;
  puStack_48 = puVar5;
  __Block_copy(&puStack_70);
  puVar5 = puStack_48;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_release(puVar5);
  func_0x000107c420a8(uVar1);
  __Block_release(ppuVar6);
  return;
}



/* Entry: 103eab560; end: 103eab5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab560(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  (*param_1)();
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11302a978);
    *(undefined8 *)(param_3 + _DAT_11302a978) = 0;
    _objc_release();
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 103eab5c8; end: 103eab6f3; -[LensLocationPermissionPresentationDelegate permissionsManagerWantsToDismissPermissionsPrompt:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab5c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __Block_copy();
  puVar1 = &UNK_11071be40;
  _swift_allocObject(&UNK_11071be40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11302a980);
  _swift_getObjectType(uVar4);
  puVar2 = &UNK_11071be18;
  _swift_allocObject(&UNK_11071be18,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_1);
  puVar3 = &UNK_11071be68;
  _swift_allocObject(&UNK_11071be68,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(code **)(puVar3 + 0x18) = FUN_103eab7e0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain(param_1);
  _swift_retain(puVar1);
  _swift_retain(puVar2);
  func_0x00010090569c(0x103eab874,puVar3,uVar4);
  _swift_release(puVar2);
  _objc_release(param_1);
  _swift_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103eab6f4; end: 103eab6fb; -[LensLocationPermissionPresentationDelegate permissionsManagerModalPresentationContainer] */

void FUN_103eab6f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103eab6fc; end: 103eab727; -[LensLocationPermissionPresentationDelegate permissionsPromptSource] */

void FUN_103eab6fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1cb8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103eab728; end: 103eab787; -[LensLocationPermissionPresentationDelegate init] */

void FUN_103eab728(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLocationDataProvider.LensLocationPermissionPresentationDelegate",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eab754);
  (*pcVar1)();
}



/* Entry: 103eab788; end: 103eab7bf; -[LensLocationPermissionPresentationDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab788(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a980));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a978));
  return;
}



/* Entry: 103eab7c0; end: 103eab7df;  */

void FUN_103eab7c0(void)

{
  _objc_opt_self(&PTR_PTR_11295ea18);
  return;
}



/* Entry: 103eab7e0; end: 103eab7eb;  */

void FUN_103eab7e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103eab7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103eab7ec; end: 103eab84b;  */

void FUN_103eab7ec(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103eab84c; end: 103eab87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eab84c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11302a978);
    *(undefined8 *)(lVar1 + _DAT_11302a978) = 0;
    _objc_release();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 103eab87c; end: 103eabd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103eab87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a9b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9b8) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302a9c0,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302a9c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302a9f8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302aa00) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302aa08) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain();
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_10);
  puVar1 = auStack_70;
  _objc_msgSendSuper2(puVar1,puVar2);
  puVar2 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,puVar1);
  pcStack_80 = FUN_103eabdf4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010c2158;
  puStack_88 = &UNK_11071bf20;
  ppuVar3 = &puStack_a0;
  puStack_78 = puVar2;
  __Block_copy(ppuVar3);
  puVar2 = puStack_78;
  _objc_retain(puVar1);
  _swift_release(puVar2);
  func_0x000107c4db94(param_7);
  __Block_release(ppuVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 103eabd8c; end: 103eabdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eabd8c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    _swift_unknownObjectWeakAssign(param_2 + _DAT_11302a9c0,param_1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103eabdf4; end: 103eabe17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eabdf4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_unknownObjectWeakAssign(lVar1 + _DAT_11302a9c0,param_1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 103eabe18; end: 103eabf0b; -[SCLensProcessingLocationDataProvider initWithLocationProvider:locationPermissionsManager:weatherProvider:weatherLocalizationProvider:checkinOptionFetcher:performerProvider:lensApplicatorLazy:venueTracker:permissionPresenter:venueLevel:] */

void FUN_103eabe18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_9);
  _swift_unknownObjectRetain(param_10);
  _swift_unknownObjectRetain(param_11);
  _objc_retain();
  func_0x000103eabb04(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
  return;
}



/* Entry: 103eabf0c; end: 103eabf6b; -[SCLensProcessingLocationDataProvider init] */

void FUN_103eabf0c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLocationDataProvider.LensProcessingLocationDataProvider",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eabf38);
  (*pcVar1)();
}



/* Entry: 103eabf6c; end: 103eac067; -[SCLensProcessingLocationDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eabf6c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a9c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a9d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a9d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a9f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a9e0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a9e8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a9b0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a9b8));
  func_0x000103eac044(param_1 + _DAT_11302a9c0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a9f8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302aa00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302aa08));
  return;
}



/* Entry: 103eac068; end: 103eac0df; -[SCLensProcessingLocationDataProvider location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eac068(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302a9c8);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4b88c();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103eac0e0; end: 103eac113; -[SCLensProcessingLocationDataProvider locationUpdateObservable] */

void FUN_103eac0e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103eac114();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103eac114; end: 103eac1eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103eac114(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_11302a9c8);
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4b930();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
    pcStack_40 = FUN_103eac1ec;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_103eac234;
    puStack_48 = &UNK_11071bf70;
    __Block_copy(&puStack_60);
    lVar1 = lVar2;
    func_0x000107c4c280(lVar2,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar3);
    _objc_release(lVar2);
  }
  return lVar1;
}



/* Entry: 103eac1ec; end: 103eac233;  */

void FUN_103eac1ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_103eb14d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 1;
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 103eac234; end: 103eac2b7;  */

void FUN_103eac234(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)(auStack_50);
  _swift_release(uVar2);
  _objc_release(param_2);
  FUN_103eb1494(auStack_50,uStack_38);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000103eb14b8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103eac2b8; end: 103eacadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eac2b8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &UNK_11071bfa8;
  _swift_allocObject(&UNK_11071bfa8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  uVar14 = *(ulong *)(unaff_x20 + _DAT_11302a9d0);
  _swift_retain_n(puVar2,3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar4 = uVar14;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    _objc_release(param_1);
    _objc_release(param_1);
    _swift_release_n(puVar2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  puVar5 = &UNK_11071bfd0;
  _swift_allocObject(&UNK_11071bfd0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,uVar4);
  puVar6 = &UNK_11071bff8;
  _swift_allocObject(&UNK_11071bff8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(code **)(puVar6 + 0x18) = FUN_103eaded0;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  lVar1 = lRam000000011302aa10;
  _swift_retain_n(puVar3,3);
  _swift_retain_n(puVar5,2);
  if (lVar1 != -1) {
    _swift_once(0x11302aa10,FUN_103eadda0);
  }
  uVar12 = uRam000000011302aa20;
  ppuVar13 = ppuRam000000011302aa18;
  ppuVar9 = ppuRam000000011302aa18;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuRam000000011302aa18,uRam000000011302aa20)
  ;
  uVar7 = uVar4;
  func_0x000107c44898();
  _objc_release(ppuVar9);
  uVar8 = uVar14;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar7 & 1) == 0) {
    if (uVar8 != 0) {
      bRam000000011302aa28 = 1;
      ppuVar13 = &PTR____CFConstantStringClassReference_110f59558;
      puVar10 = &UNK_11071c020;
      _swift_allocObject(&UNK_11071c020,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x103eaded8;
      *(undefined **)(puVar10 + 0x18) = puVar6;
      _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
      pcStack_70 = FUN_103eadee4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013b7310;
      puStack_78 = &UNK_11071c038;
      ppuVar9 = &puStack_90;
      puStack_68 = puVar10;
      __Block_copy(ppuVar9);
      puVar10 = puStack_68;
      _swift_retain(puVar6);
      _swift_release(puVar10);
      func_0x000107c5032c(uVar8);
      __Block_release(ppuVar9);
      _swift_unknownObjectRelease(uVar4);
      _objc_release(param_1);
      _objc_release(param_1);
      _swift_release_n(puVar2,3);
      _swift_release_n(puVar5,2);
      _swift_release(puVar6);
      _swift_release_n(puVar3,3);
LAB_103eac6a8:
      _swift_unknownObjectRelease(uVar8);
      goto LAB_103eaca50;
    }
    _swift_beginAccess(puVar5 + 0x10,&puStack_90,0,0);
    puVar10 = puVar5 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar10 == (undefined *)0x0) {
      _swift_unknownObjectRelease(uVar4);
      _objc_release(param_1);
      _objc_release(param_1);
      _swift_release_n(puVar2,3);
      _swift_release_n(puVar5,2);
      _swift_release(puVar6);
      uVar12 = 3;
      goto LAB_103eac9a4;
    }
LAB_103eac714:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar13,uVar12);
    func_0x000107c54900(puVar10);
    _swift_unknownObjectRelease(uVar4);
    _objc_release(param_1);
    _objc_release(param_1);
    _swift_release_n(puVar2,3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_release_n(puVar3,3);
  }
  else {
    if (uVar8 == 0) {
      _swift_beginAccess(puVar5 + 0x10,&puStack_90,0,0);
      puVar10 = puVar5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar10 == (undefined *)0x0) {
        _swift_release(puVar6);
        _swift_release(puVar3);
LAB_103eac7cc:
        _swift_unknownObjectRelease(uVar4);
        _objc_release(param_1);
        _objc_release(param_1);
        _swift_release_n(puVar2,3);
        _swift_release_n(puVar3,2);
        uVar12 = 2;
        puVar3 = puVar5;
LAB_103eac9a4:
        _swift_release_n(puVar3,uVar12);
        return;
      }
      goto LAB_103eac714;
    }
    ppuVar9 = &PTR____CFConstantStringClassReference_110f59558;
    _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
    uVar7 = uVar8;
    func_0x000107c49a70();
    _objc_release(ppuVar9);
    if ((uVar7 & 1) != 0) {
      puVar10 = &UNK_11071c0c0;
      _swift_allocObject(&UNK_11071c0c0,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x103eaded8;
      *(undefined **)(puVar10 + 0x18) = puVar6;
      pcStack_70 = (code *)0x103eadf04;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1010ca3e8;
      puStack_78 = &UNK_11071c0d8;
      ppuVar13 = &puStack_90;
      puStack_68 = puVar10;
      __Block_copy(ppuVar13);
      puVar10 = puStack_68;
      _swift_retain(puVar6);
      _swift_release(puVar10);
      func_0x000107c43188(uVar8);
      __Block_release(ppuVar13);
      _swift_unknownObjectRelease(uVar4);
      _objc_release(param_1);
      _objc_release(param_1);
      _swift_release_n(puVar2,3);
      _swift_release_n(puVar5,2);
      _swift_release(puVar6);
      _swift_release_n(puVar3,3);
      _swift_unknownObjectRelease(uVar8);
      return;
    }
    if ((bRam000000011302aa28 & 1) == 0) {
      ppuVar11 = ppuVar13;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar13,uVar12);
      func_0x000107c54900(uVar8);
      _objc_release(ppuVar11);
      func_0x000107c5c734();
      _objc_retainAutoreleasedReturnValue();
      if (uVar14 != 0) {
        bRam000000011302aa28 = 1;
        puVar10 = &UNK_11071c070;
        _swift_allocObject(&UNK_11071c070,0x20,7);
        *(undefined8 *)(puVar10 + 0x10) = 0x103eaded8;
        *(undefined **)(puVar10 + 0x18) = puVar6;
        _objc_retain(ppuVar9);
        pcStack_70 = (code *)0x103eb1590;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1013b7310;
        puStack_78 = &UNK_11071c088;
        ppuVar13 = &puStack_90;
        puStack_68 = puVar10;
        __Block_copy(ppuVar13);
        puVar10 = puStack_68;
        _swift_retain(puVar6);
        _swift_release(puVar10);
        func_0x000107c5032c(uVar14);
        __Block_release(ppuVar13);
        _swift_unknownObjectRelease(uVar4);
        _objc_release(param_1);
        _objc_release(param_1);
        _swift_release_n(puVar2,3);
        _swift_release_n(puVar5,2);
        _swift_release(puVar6);
        _swift_release_n(puVar3,3);
        _swift_unknownObjectRelease(uVar8);
        ppuVar13 = ppuVar9;
        uVar8 = uVar14;
        goto LAB_103eac6a8;
      }
      _swift_beginAccess(puVar5 + 0x10,&puStack_90,0,0);
      puVar10 = puVar5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar10 == (undefined *)0x0) {
        _swift_unknownObjectRelease(uVar4);
        _objc_release(param_1);
        _objc_release(param_1);
        _swift_release_n(puVar2,3);
        _swift_release_n(puVar5,2);
        _swift_release(puVar6);
        _swift_release_n(puVar3,3);
        _swift_unknownObjectRelease(uVar8);
        return;
      }
    }
    else {
      _swift_beginAccess(puVar5 + 0x10,&puStack_90,0,0);
      puVar10 = puVar5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar10 == (undefined *)0x0) {
        _swift_release(puVar6);
        _swift_release(puVar3);
        _swift_unknownObjectRelease(uVar8);
        goto LAB_103eac7cc;
      }
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar13,uVar12);
    func_0x000107c54900(puVar10);
    _swift_unknownObjectRelease(uVar4);
    _objc_release(param_1);
    _objc_release(param_1);
    _swift_release_n(puVar2,3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_release_n(puVar3,3);
    _swift_unknownObjectRelease(uVar8);
  }
  _swift_unknownObjectRelease(puVar10);
LAB_103eaca50:
  _objc_release(ppuVar13);
  return;
}



/* Entry: 103eacae0; end: 103eacd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eacae0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  if ((param_2 & 1) == 0) {
    return;
  }
  uVar3 = 0x11302aaa0;
  func_0x0001000285a8(0x11302aaa0,&UNK_10dca5e40);
  uVar1 = 0x11302aaa8;
  auStack_68[0] = uVar3;
  func_0x0001000285a8(0x11302aaa8,&UNK_10dca5e48);
  puVar2 = auStack_68;
  __sSS10describingSSx_tclufC(puVar2,uVar1);
  uVar3 = 0;
  func_0x0001048b0ec8(0);
  _objc_allocWithZone();
  func_0x0001048b0b48(puVar2,uVar1,0x17,uVar3);
  func_0x000107c41820(param_4);
  uVar3 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
  puVar4 = PTR_PTR_1126c1818;
  _objc_allocWithZone(PTR_PTR_1126c1818);
  func_0x000107c45818(param_1,uVar3);
  _objc_release(puVar2);
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  lVar5 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + _DAT_11302a9b8);
    if (lVar7 == 0) {
      _objc_release();
    }
    else {
      _swift_unknownObjectRetain(lVar7);
      _objc_release(lVar5);
      func_0x000107c5d320(lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
  }
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  lVar5 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    _objc_release(puVar4);
    return;
  }
  _swift_beginAccess(param_3 + 0x10,auStack_98,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    lVar6 = *(long *)(param_3 + _DAT_11302a9c8);
    _objc_retain();
    _objc_release(param_3);
    lVar7 = lVar6;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      func_0x000107c50314();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar7);
      _objc_release(puVar4);
      goto LAB_103eaccd4;
    }
  }
  _objc_release(puVar4);
  lVar6 = 0;
LAB_103eaccd4:
  uVar3 = *(undefined8 *)(lVar5 + _DAT_11302a9b8);
  *(long *)(lVar5 + _DAT_11302a9b8) = lVar6;
  _objc_release(lVar5);
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Entry: 103eacd18; end: 103eacd67; -[SCLensProcessingLocationDataProvider startLocationUpdatesWithModel:] */

void FUN_103eacd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103eac2b8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103eacd68; end: 103eacd73; -[SCLensProcessingLocationDataProvider stopLocationUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eacd68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_11302a9b8;
  lVar2 = *(long *)(param_1 + _DAT_11302a9b8);
  if (lVar2 == 0) {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  else {
    _objc_retain(param_1);
    func_0x000107c5d320(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 103eacd74; end: 103eacdeb; -[SCLensProcessingLocationDataProvider heading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eacd74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302a9c8);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c44d88();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103eacdec; end: 103ead497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eacdec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar12 = *(undefined **)(unaff_x20 + _DAT_11302a9d0);
  _swift_retain_n(puVar2,3);
  puVar3 = puVar12;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar10 = 4;
    goto LAB_103ead02c;
  }
  puVar4 = &UNK_11071bfd0;
  _swift_allocObject(&UNK_11071bfd0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,puVar3);
  puVar5 = &UNK_11071c110;
  _swift_allocObject(&UNK_11071c110,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = FUN_103eadf2c;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  lVar1 = lRam000000011302aa10;
  _swift_retain_n(puVar2,3);
  _swift_retain_n(puVar4,2);
  if (lVar1 != -1) {
    _swift_once(0x11302aa10,FUN_103eadda0);
  }
  uVar10 = uRam000000011302aa20;
  ppuVar11 = ppuRam000000011302aa18;
  ppuVar8 = ppuRam000000011302aa18;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuRam000000011302aa18,uRam000000011302aa20)
  ;
  puVar6 = puVar3;
  func_0x000107c44898();
  _objc_release(ppuVar8);
  puVar7 = puVar12;
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  if (((ulong)puVar6 & 1) == 0) {
    if (puVar7 == (undefined *)0x0) {
      _swift_beginAccess(puVar4 + 0x10,&puStack_90,0,0);
      puVar7 = puVar4 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar7 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar3);
        _swift_release_n(puVar4,2);
        _swift_release(puVar5);
        uVar10 = 6;
        goto LAB_103ead02c;
      }
      goto LAB_103ead18c;
    }
    bRam000000011302aa28 = 1;
    ppuVar11 = &PTR____CFConstantStringClassReference_110f59558;
    puVar12 = &UNK_11071c138;
    _swift_allocObject(&UNK_11071c138,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = 0x103eb15a8;
    *(undefined **)(puVar12 + 0x18) = puVar5;
    _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
    uStack_70 = 0x103eb1594;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1013b7310;
    puStack_78 = &UNK_11071c150;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar12;
    __Block_copy(ppuVar8);
    puVar12 = puStack_68;
    _swift_retain(puVar5);
    _swift_release(puVar12);
    func_0x000107c5032c(puVar7);
    __Block_release(ppuVar8);
    _swift_unknownObjectRelease(puVar3);
    _swift_release_n(puVar4,2);
    _swift_release(puVar5);
    _swift_release_n(puVar2,6);
  }
  else {
    if (puVar7 != (undefined *)0x0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110f59558;
      _objc_retain(&PTR____CFConstantStringClassReference_110f59558);
      puVar6 = puVar7;
      func_0x000107c49a70();
      _objc_release(ppuVar8);
      if (((ulong)puVar6 & 1) != 0) {
        puVar12 = &UNK_11071c1d8;
        _swift_allocObject(&UNK_11071c1d8,0x20,7);
        *(undefined8 *)(puVar12 + 0x10) = 0x103eb15a8;
        *(undefined **)(puVar12 + 0x18) = puVar5;
        uStack_70 = 0x103eb15b4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1010ca3e8;
        puStack_78 = &UNK_11071c1f0;
        ppuVar11 = &puStack_90;
        puStack_68 = puVar12;
        __Block_copy(ppuVar11);
        puVar12 = puStack_68;
        _swift_retain(puVar5);
        _swift_release(puVar12);
        func_0x000107c43188(puVar7);
        __Block_release(ppuVar11);
        _swift_unknownObjectRelease(puVar3);
        _swift_release_n(puVar4,2);
        _swift_release(puVar5);
        _swift_release_n(puVar2,6);
        _swift_unknownObjectRelease(puVar7);
        return;
      }
      if ((bRam000000011302aa28 & 1) == 0) {
        ppuVar9 = ppuVar11;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar11,uVar10);
        func_0x000107c54900(puVar7);
        _objc_release(ppuVar9);
        func_0x000107c5c734();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 != (undefined *)0x0) {
          bRam000000011302aa28 = 1;
          puVar6 = &UNK_11071c188;
          _swift_allocObject(&UNK_11071c188,0x20,7);
          *(undefined8 *)(puVar6 + 0x10) = 0x103eb15a8;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          _objc_retain(ppuVar8);
          uStack_70 = 0x103eb1598;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_1013b7310;
          puStack_78 = &UNK_11071c1a0;
          ppuVar11 = &puStack_90;
          puStack_68 = puVar6;
          __Block_copy(ppuVar11);
          puVar6 = puStack_68;
          _swift_retain(puVar5);
          _swift_release(puVar6);
          func_0x000107c5032c(puVar12);
          __Block_release(ppuVar11);
          _swift_unknownObjectRelease(puVar3);
          _swift_release_n(puVar4,2);
          _swift_release(puVar5);
          _swift_release_n(puVar2,6);
          _swift_unknownObjectRelease(puVar7);
          puVar7 = puVar12;
          ppuVar11 = ppuVar8;
          goto LAB_103ead1dc;
        }
        _swift_beginAccess(puVar4 + 0x10,&puStack_90,0,0);
        puVar12 = puVar4 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (puVar12 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar3);
          _swift_release_n(puVar4,2);
          _swift_release(puVar5);
          _swift_release_n(puVar2,6);
          _swift_unknownObjectRelease(puVar7);
          return;
        }
      }
      else {
        _swift_beginAccess(puVar4 + 0x10,&puStack_90,0,0);
        puVar12 = puVar4 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (puVar12 == (undefined *)0x0) {
          _swift_release(puVar5);
          _swift_release(puVar2);
          _swift_unknownObjectRelease(puVar7);
          goto LAB_103ead24c;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar11,uVar10);
      func_0x000107c54900(puVar12);
      _swift_unknownObjectRelease(puVar3);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
      _swift_release_n(puVar2,6);
      _swift_unknownObjectRelease(puVar7);
      _swift_unknownObjectRelease(puVar12);
      goto LAB_103ead1e4;
    }
    _swift_beginAccess(puVar4 + 0x10,&puStack_90,0,0);
    puVar7 = puVar4 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar7 == (undefined *)0x0) {
      _swift_release(puVar5);
      _swift_release(puVar2);
LAB_103ead24c:
      _swift_unknownObjectRelease(puVar3);
      _swift_release_n(puVar2,5);
      uVar10 = 2;
      puVar2 = puVar4;
LAB_103ead02c:
      _swift_release_n(puVar2,uVar10);
      return;
    }
LAB_103ead18c:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar11,uVar10);
    func_0x000107c54900(puVar7);
    _swift_unknownObjectRelease(puVar3);
    _swift_release_n(puVar4,2);
    _swift_release(puVar5);
    _swift_release_n(puVar2,6);
  }
LAB_103ead1dc:
  _swift_unknownObjectRelease(puVar7);
LAB_103ead1e4:
  _objc_release(ppuVar11);
  return;
}



/* Entry: 103ead498; end: 103ead6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ead498(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  
  if ((param_1 & 1) == 0) {
    return;
  }
  uVar2 = 0x11302aaa0;
  func_0x0001000285a8(0x11302aaa0,&UNK_10dca5e40);
  uVar7 = 0x11302aaa8;
  auStack_68[0] = uVar2;
  func_0x0001000285a8(0x11302aaa8,&UNK_10dca5e48);
  puVar1 = auStack_68;
  __sSS10describingSSx_tclufC(puVar1,uVar7);
  uVar2 = 0;
  func_0x0001048b0ec8(0);
  _objc_allocWithZone();
  func_0x0001048b0b48(puVar1,uVar7,0x17,uVar2);
  uVar2 = *(undefined8 *)PTR__kCLLocationAccuracyThreeKilometers_110349b90;
  uVar7 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
  puVar3 = PTR_PTR_1126c1818;
  _objc_allocWithZone(PTR_PTR_1126c1818);
  func_0x000107c45818(uVar2,uVar7);
  _objc_release(puVar1);
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  lVar4 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + _DAT_11302a9b0);
    if (lVar6 == 0) {
      _objc_release();
    }
    else {
      _swift_unknownObjectRetain(lVar6);
      _objc_release(lVar4);
      func_0x000107c5d320(lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
  }
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  lVar4 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    _objc_release(puVar3);
    return;
  }
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + _DAT_11302a9c8);
    _objc_retain();
    _objc_release(param_2);
    lVar6 = lVar5;
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x000107c50314();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar6);
      _objc_release(puVar3);
      goto LAB_103ead688;
    }
  }
  _objc_release(puVar3);
  lVar5 = 0;
LAB_103ead688:
  uVar2 = *(undefined8 *)(lVar4 + _DAT_11302a9b0);
  *(long *)(lVar4 + _DAT_11302a9b0) = lVar5;
  _objc_release(lVar4);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 103ead6cc; end: 103ead6f3; -[SCLensProcessingLocationDataProvider startCompassUpdates] */

void FUN_103ead6cc(undefined8 param_1)

{
  _objc_retain();
  FUN_103eacdec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ead6f4; end: 103ead6ff; -[SCLensProcessingLocationDataProvider stopCompassUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ead6f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_11302a9b0;
  lVar2 = *(long *)(param_1 + _DAT_11302a9b0);
  if (lVar2 == 0) {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  else {
    _objc_retain(param_1);
    func_0x000107c5d320(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 103ead700; end: 103ead80f;  */

void FUN_103ead700(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_3;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    _objc_retain(param_1);
    uVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    func_0x000107c5d320(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 103ead810; end: 103eadd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ead810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  uStack_110 = param_1;
  uStack_108 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_e0 = *(long *)(lVar4 + -8);
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar4 = 0;
  puStack_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  lStack_f0 = *(long *)(lVar4 + -8);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lStack_100 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
               (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _dispatch_group_create();
  puVar5 = &UNK_11071c3b8;
  _swift_allocObject(&UNK_11071c3b8,0x20,7);
  puVar14 = (undefined8 *)(puVar5 + 0x10);
  *puVar14 = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  puVar6 = &UNK_11071c3e0;
  _swift_allocObject(&UNK_11071c3e0,0x18,7);
  *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = &UNK_11071c408;
  _swift_allocObject(&UNK_11071c408,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  _dispatch_group_enter(lVar4);
  _swift_retain(puVar7);
  _objc_retain();
  FUN_103eb0eb8();
  puStack_120 = puVar7;
  _swift_release(puVar7);
  _objc_release(lVar4);
  _dispatch_group_enter(lVar4);
  puVar7 = &UNK_11071c430;
  _swift_allocObject(&UNK_11071c430,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  *(long *)(puVar7 + 0x20) = lVar4;
  lVar15 = *(long *)(unaff_x20 + _DAT_11302a9e0);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(puVar6,2);
  _objc_retain();
  func_0x000107c5c734();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar4;
  if (lVar15 == 0) {
    _swift_beginAccess(puVar14,auStack_80,1,0);
    uVar11 = *(undefined8 *)(puVar5 + 0x18);
    *puVar14 = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    _swift_bridgeObjectRelease(uVar11);
    _swift_beginAccess(puVar6 + 0x10,auStack_98,1,0);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar11 = *(undefined8 *)(puVar6 + 0x10);
    *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRelease(uVar11);
    _dispatch_group_leave(lVar4);
    _swift_release(puVar7);
    _swift_release(puVar6);
    _swift_release(puVar5);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11302a9e8);
    func_0x000107c51f40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    _swift_getObjectType();
    func_0x000100bcb214();
    _swift_unknownObjectRelease(uVar8);
    puVar9 = &UNK_11071c4a8;
    _swift_allocObject(&UNK_11071c4a8,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_103eb11e8;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    uStack_a8 = 0x103eb1204;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_10103696c;
    puStack_b0 = &UNK_11071c4c0;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar9;
    __Block_copy(ppuVar10);
    puVar9 = puStack_a0;
    _objc_retain(uVar11);
    _swift_retain(puVar7);
    _swift_release(puVar9);
    func_0x000107c43028(lVar15);
    _swift_release(puVar7);
    _swift_release(puVar5);
    _swift_release(puVar6);
    __Block_release(ppuVar10);
    _swift_unknownObjectRelease(lVar15);
    _objc_release(uVar11);
    _objc_release(uVar11);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11302a9e8);
  func_0x000107c4c18c();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  _swift_getObjectType();
  func_0x000100bcb214();
  uStack_128 = uVar11;
  _swift_unknownObjectRelease(uVar8);
  puVar7 = &UNK_11071bf08;
  _swift_allocObject(&UNK_11071bf08,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  puVar12 = &UNK_11071c458;
  _swift_allocObject(&UNK_11071c458,0x40,7);
  uVar8 = uStack_108;
  puVar1 = puStack_120;
  *(undefined **)(puVar12 + 0x10) = puVar7;
  *(undefined **)(puVar12 + 0x18) = puStack_120;
  *(undefined8 *)(puVar12 + 0x20) = uStack_110;
  *(undefined8 *)(puVar12 + 0x28) = uStack_108;
  *(undefined **)(puVar12 + 0x30) = puVar5;
  *(undefined **)(puVar12 + 0x38) = puVar6;
  uStack_a8 = 0x103eb11f4;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_11071c470;
  ppuVar10 = &puStack_c8;
  puStack_a0 = puVar12;
  __Block_copy(ppuVar10);
  _swift_retain(puVar1);
  _swift_retain(puVar5);
  _swift_retain(puVar6);
  _swift_retain(puVar7);
  _swift_retain(uVar8);
  lVar15 = lStack_100;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_100);
  puStack_d0 = puVar9;
  func_0x0001001c7eec();
  uVar11 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar13 = uVar11;
  func_0x0001001c7f30();
  lVar3 = lStack_d8;
  puVar2 = puStack_f8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puStack_f8,&puStack_d0,uVar11,uVar13,lStack_d8,uVar8);
  lVar4 = lStack_118;
  uVar11 = uStack_128;
  __sSo17OS_dispatch_groupC8DispatchE6notify3qos5flags5queue7executeyAC0D3QoSV_AC0D13WorkItemFlagsVSo0a1_b1_H0CyyXBtF
            (lVar15,puVar2,uStack_128,ppuVar10);
  __Block_release(ppuVar10);
  _objc_release(lVar4);
  _objc_release(uVar11);
  (**(code **)(lStack_e0 + 8))(puVar2,lVar3);
  (**(code **)(lStack_f0 + 8))(lVar15,lStack_e8);
  puVar9 = puStack_a0;
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(puVar1);
  _swift_release(puVar7);
  _swift_release(puVar9);
  return;
}


