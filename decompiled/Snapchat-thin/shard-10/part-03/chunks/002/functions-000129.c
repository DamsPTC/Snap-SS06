/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f872a4; end: 107f87327; -[SCMediaFilterView videoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f872a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127724bc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d1378;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar4),0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f87328; end: 107f8736b; -[SCMediaFilterView image] */

void FUN_107f87328(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f8736c; end: 107f87373; -[SCMediaFilterView requiresGPU] */

undefined8 FUN_107f8736c(void)

{
  return 0;
}



/* Entry: 107f87374; end: 107f8744f; -[SCMediaFilterView setImage:] */

void FUN_107f87374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = auStack_40;
  _objc_copyWeak(puVar1,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107f87450; end: 107f87533;  */

void FUN_107f87450(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c114ba0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107f87534; end: 107f87543; -[SCMediaFilterView processImage:completion:] */

void FUN_107f87534(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000107f87540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  return;
}



/* Entry: 107f87544; end: 107f87583; -[SCMediaFilterView setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f87544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127724b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f87584; end: 107f875c3; -[SCMediaFilterView setVideoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f87584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127724bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f875c4; end: 107f87603; -[SCMediaFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107f875c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127724bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127724b8,0);
  return;
}



/* Entry: 107f87604; end: 107f8769b; -[SCPreviewFilterItem geofilterId] */

void FUN_107f87604(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c11f420();
  _objc_release(lVar2);
  if (lVar1 == 0x7fffffffffffffff) {
    lVar2 = 0;
  }
  else {
    func_0x00010bfae180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107f8769c; end: 107f8785b; -[SCPreviewFilterItem initWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:isAutoStackingFilter:isSkyFilter:isPlaceholder:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:] */

undefined8 *
FUN_107f8769c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,long param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126fbe78;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
    puVar1[6] = param_6;
    if (param_7 == 0) {
      puVar2 = PTR_PTR_1126d8920;
      func_0x00010c280940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[9];
      puVar1[9] = puVar2;
    }
    else {
      _objc_retain(param_7);
      uVar3 = puVar1[9];
      puVar1[9] = param_7;
    }
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x13) = param_8;
    *(undefined1 *)((long)puVar1 + 0x14) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x15) = param_9._1_1_;
    puVar2 = PTR_PTR_1126d8928;
    func_0x00010bebf240();
    puVar1[7] = puVar2;
    _objc_retain(param_11);
    uVar3 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x16) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0x12) = param_12._1_1_;
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107f8785c; end: 107f8794b; +[SCPreviewFilterItem itemWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:isAutoStackingFilter:isSkyFilter:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:] */

void FUN_107f8785c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_PTR_1126d8928;
  _objc_retain(in_stack_00000008);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0131e0();
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f8794c; end: 107f8798b; +[SCPreviewFilterItem itemWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:] */

void FUN_107f8794c(void)

{
  func_0x00010c084ea0(PTR_PTR_1126d8928);
  return;
}



/* Entry: 107f8798c; end: 107f87abb; +[SCPreviewFilterItem itemForAutoStacking:] */

void FUN_107f8798c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 < 0x2f872b54) {
    if (param_3 == -0x582982fb) {
      ppuVar2 = &PTR_PTR_110ade510;
      goto LAB_107f87a30;
    }
    if (param_3 == 0) goto LAB_107f87aa4;
  }
  else {
    if (param_3 == 0x2f872b54) {
      ppuVar2 = &PTR_PTR_110ade558;
    }
    else if (param_3 == 0x43b981ab) {
      ppuVar2 = &PTR_PTR_110ade508;
    }
    else {
      if (param_3 != 0x6dc1de7e) goto LAB_107f87a9c;
      ppuVar2 = &PTR_PTR_110ade500;
    }
LAB_107f87a30:
    ppuVar2 = (undefined **)*ppuVar2;
    _objc_retain(ppuVar2);
    puVar3 = PTR_PTR_1126d8928;
    puVar1 = PTR_PTR_1126d8920;
    func_0x00010c280940(PTR_PTR_1126d8920);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084ea0(puVar3,param_2,ppuVar2,0,0,6,puVar1,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
LAB_107f87a9c:
  _objc_release(ppuVar2);
LAB_107f87aa4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f87abc; end: 107f87acf; -[SCPreviewFilterItem isUnfilteredFilter] */

void FUN_107f87abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f27658);
  return;
}



/* Entry: 107f87ad0; end: 107f87b23; -[SCPreviewFilterItem isPromptFilter] */

/* WARNING: Possible PIC construction at 0x000107f87af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107f87af4) */
/* WARNING: Removing unreachable block (ram,0x000107f87b08) */
/* WARNING: Removing unreachable block (ram,0x000107f87af8) */

void FUN_107f87ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f27458);
  return;
}



/* Entry: 107f87b24; end: 107f87b5b; -[SCPreviewFilterItem isStackableFilter] */

uint FUN_107f87b24(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c081ec0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c07b580(param_1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107f87b5c; end: 107f87c67; -[SCPreviewFilterItem isColorFilter] */

undefined ** FUN_107f87b5c(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  if (lRam0000000113728988 != -1) {
    func_0x00010002a2fc(0x113728988,&PTR___NSConcreteGlobalBlock_110a15aa0);
  }
  uVar1 = uRam0000000113728980;
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x30) == 7) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e77078;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bfcef60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77078);
      _objc_release(uVar3);
    }
    else {
      ppuVar2 = (undefined **)0x0;
    }
  }
  else {
    ppuVar2 = (undefined **)0x1;
  }
  return ppuVar2;
}



/* Entry: 107f87c68; end: 107f87da7; -[SCPreviewFilterItem isEqual:] */

bool FUN_107f87c68(ulong param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107f87d3c:
    bVar2 = true;
  }
  else {
    puVar3 = PTR_PTR_1126d8928;
    _objc_opt_class(PTR_PTR_1126d8928);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20);
      uVar4 = param_3;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == uVar4) {
        _objc_release(uVar4);
      }
      else {
        iVar5 = (int)*(undefined8 *)(param_1 + 0x20);
        uVar6 = param_3;
        func_0x00010bfae180(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar6);
        _objc_release(uVar4);
        if (iVar5 == 0) goto LAB_107f87d84;
      }
      uVar6 = *(ulong *)(param_1 + 0x30);
      uVar4 = param_3;
      func_0x00010bfae5a0();
      if (uVar6 == uVar4) {
        if (((*(byte *)(param_1 + 0x10) & 1) != 0) || ((*(byte *)(param_3 + 0x10) & 1) != 0))
        goto LAB_107f87d3c;
        bVar1 = *(byte *)(param_1 + 0x13);
        uVar4 = param_3;
        func_0x00010c06cd40();
        if (((uint)bVar1 == (uint)uVar4) &&
           (bVar1 = *(byte *)(param_1 + 0x14), uVar4 = param_3, func_0x00010c07e4c0(),
           (uint)bVar1 == (uint)uVar4)) {
          bVar1 = *(byte *)(param_1 + 0x15);
          uVar4 = param_3;
          func_0x00010c07a1a0(param_3);
          bVar2 = (uint)bVar1 == (uint)uVar4;
          goto LAB_107f87d88;
        }
      }
    }
LAB_107f87d84:
    bVar2 = false;
  }
LAB_107f87d88:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107f87da8; end: 107f87e13; -[SCPreviewFilterItem hash] */

void FUN_107f87da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_38,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d8928;
  puVar2 = PTR_PTR_1126d8920;
  _objc_retain(param_3);
  func_0x00010c280940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar3[0x10] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f87e14; end: 107f87ebb; +[SCPreviewFilterItem matchingFilterItemForName:filterType:] */

void FUN_107f87e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8928;
  puVar1 = PTR_PTR_1126d8920;
  _objc_retain(param_3);
  func_0x00010c280940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084ec0(puVar2,param_2,param_3,0,0,param_4,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar2[0x10] = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f87ebc; end: 107f87f4b; +[SCPreviewFilterItem unfilteredItem] */

void FUN_107f87ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d8928;
  puVar1 = PTR_PTR_1126d8920;
  func_0x00010c280940(PTR_PTR_1126d8920);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084ec0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f27658,0,0,8,puVar1,0
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f87f4c; end: 107f87ff7; +[SCPreviewFilterItem placeholderItemWithFilterName:filterType:] */

void FUN_107f87f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d8928;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126d8920;
  func_0x00010c280940(PTR_PTR_1126d8920);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0131e0(puVar1,param_2,param_3,0,0,param_4,puVar2,0,0x100);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f87ff8; end: 107f8802b; -[SCPreviewFilterItem zPosition] */

undefined8 FUN_107f87ff8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 0x30);
  if (6 < uVar1 && uVar1 != 8) {
    if (uVar1 != 7) {
      return param_1;
    }
    if ((*(byte *)(param_2 + 0x16) & 1) != 0) {
      return 0xd;
    }
  }
  return *(undefined8 *)(param_2 + 0x38);
}



/* Entry: 107f8802c; end: 107f881ef; +[SCPreviewFilterItem _stackTypeFromFilterType:carouselGroup:isAutoStackingFilter:isSkyFilter:isPlaceholder:] */

undefined8
FUN_107f8802c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5,
             ulong param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  _objc_retain(param_4);
  if ((param_7 & 1) != 0) {
    uVar3 = 0xc;
    goto LAB_107f880c4;
  }
  if (param_3 < 5) {
    if (1 < param_3) {
      uVar3 = 8;
      uVar4 = 7;
      if (param_3 != 3) {
        uVar4 = 9;
      }
      bVar1 = param_3 == 2;
LAB_107f880c0:
      if (!bVar1) {
        uVar3 = uVar4;
      }
      goto LAB_107f880c4;
    }
    if (param_3 != 0) {
      uVar3 = 6;
      if (param_3 != 1) {
        uVar3 = 9;
      }
      goto LAB_107f880c4;
    }
  }
  else {
    if (param_3 < 7) {
      uVar3 = 10;
      uVar4 = 3;
      if (param_3 != 6) {
        uVar4 = 9;
      }
      bVar1 = param_3 == 5;
      goto LAB_107f880c0;
    }
    if (param_3 == 7) {
      uVar2 = 0;
      uVar3 = param_4;
      func_0x00010bfcef60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77098,param_2,uVar3);
      _objc_release(uVar3);
      if ((uVar2 & 1) == 0) {
        iVar5 = 0x10ef2978;
        uVar3 = param_4;
        func_0x00010bfcef60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ef2978,param_2,uVar3);
        _objc_release(uVar3);
        uVar3 = 0xb;
        if (iVar5 == 0) {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 0;
      }
      goto LAB_107f880c4;
    }
    uVar3 = 9;
    if (param_3 != 8) goto LAB_107f880c4;
  }
  uVar3 = 2;
  if (param_5 != 0) {
    uVar3 = 3;
  }
  if (((param_5 & 1) == 0) && ((param_6 & 1) == 0)) {
    uVar2 = 0;
    uVar3 = param_4;
    func_0x00010bfcef60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77038,param_2,uVar3);
    _objc_release(uVar3);
    if ((uVar2 & 1) == 0) {
      uVar3 = 4;
      if (param_3 != 0) {
        uVar3 = 0xc;
      }
    }
    else {
      uVar3 = 5;
    }
  }
LAB_107f880c4:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 107f881f0; end: 107f88263; -[SCPreviewFilterItem filterId] */

void FUN_107f881f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x30) == 0 || *(long *)(param_1 + 0x30) == 7) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126b38b8;
      func_0x00010bfc16a0(PTR_PTR_1126b38b8,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 8);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107f88264; end: 107f8826b; -[SCPreviewFilterItem displayName] */

undefined8 FUN_107f88264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f8826c; end: 107f88273; -[SCPreviewFilterItem filterName] */

undefined8 FUN_107f8826c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f88274; end: 107f882a3; -[SCPreviewFilterItem setFilterName:] */

void FUN_107f88274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f882a4; end: 107f882ab; -[SCPreviewFilterItem creationTime] */

undefined8 FUN_107f882a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f882ac; end: 107f882b3; -[SCPreviewFilterItem filterType] */

undefined8 FUN_107f882ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107f882b4; end: 107f882bb; -[SCPreviewFilterItem setFilterType:] */

void FUN_107f882b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107f882bc; end: 107f882c3; -[SCPreviewFilterItem stackType] */

undefined8 FUN_107f882bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107f882c4; end: 107f882cb; -[SCPreviewFilterItem filterScore] */

undefined8 FUN_107f882c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107f882cc; end: 107f882fb; -[SCPreviewFilterItem setFilterScore:] */

void FUN_107f882cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f882fc; end: 107f88303; -[SCPreviewFilterItem carouselGroup] */

undefined8 FUN_107f882fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107f88304; end: 107f88333; -[SCPreviewFilterItem setCarouselGroup:] */

void FUN_107f88304(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f88334; end: 107f8833b; -[SCPreviewFilterItem requestId] */

undefined8 FUN_107f88334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107f8833c; end: 107f8836b; -[SCPreviewFilterItem setRequestId:] */

void FUN_107f8833c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f8836c; end: 107f88373; -[SCPreviewFilterItem isFromPostCaptureLensExplorer] */

undefined1 FUN_107f8836c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107f88374; end: 107f8837b; -[SCPreviewFilterItem isSnapchatPlusExclusive] */

undefined1 FUN_107f88374(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107f8837c; end: 107f88383; -[SCPreviewFilterItem isAutoStackingFilter] */

undefined1 FUN_107f8837c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107f88384; end: 107f8838b; -[SCPreviewFilterItem isSkyFilter] */

undefined1 FUN_107f88384(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107f8838c; end: 107f88393; -[SCPreviewFilterItem isPlaceholder] */

undefined1 FUN_107f8838c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 107f88394; end: 107f8839b; -[SCPreviewFilterItem UCOFilterUIMaxZIndexEnabled] */

undefined1 FUN_107f88394(long param_1)

{
  return *(undefined1 *)(param_1 + 0x16);
}



/* Entry: 107f8839c; end: 107f883a3; -[SCPreviewFilterItem setUCOFilterUIMaxZIndexEnabled:] */

void FUN_107f8839c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x16) = param_3;
  return;
}



/* Entry: 107f883a4; end: 107f8840f; -[SCPreviewFilterItem .cxx_destruct] */

void FUN_107f883a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f88410; end: 107f8865f; -[SCSmartCarouselFilterArranger initWithFilterNamesProvider:fromGallery:carouselGroupConfigParser:shouldRemoveUcoStackingLimitation:UCOFilterUIMaxZIndexEnabled:sharedLensServices:previewABProvider:] */

undefined1 *
FUN_107f88410(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fbe80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8930;
    _objc_alloc();
    func_0x00010bffcca0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0d3c80();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d8938;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    if (((param_4 ^ 1) & 1) == 0) {
      uVar2 = param_9;
      func_0x00010bfaec60();
      bVar5 = (byte)uVar2 ^ 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)((long)puVar1 + 0x38) = bVar5;
    *(undefined1 *)((long)puVar1 + 0x60) = param_6;
    puVar3 = PTR_PTR_1126d8940;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8948;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x61) = param_7;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f88660; end: 107f886a7; -[SCSmartCarouselFilterArranger lensModeProvider] */

void FUN_107f88660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0955a0(uVar1);
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



/* Entry: 107f886a8; end: 107f88837; -[SCSmartCarouselFilterArranger setFilterInfoList:] */

void FUN_107f886a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf46140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c1e0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar1 = uVar6;
        func_0x00010bfe5d80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2,param_2,uVar6,uVar1);
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_3;
      puVar5 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar4;
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfadea0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae620(param_3,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107f88838; end: 107f8888b; -[SCSmartCarouselFilterArranger filterValueForItem:] */

void FUN_107f88838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae620(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f8888c; end: 107f8897b; -[SCSmartCarouselFilterArranger filterValueForId:] */

void FUN_107f8888c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x68);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar4 = uVar3;
      func_0x00010bfae600();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ae6a8;
      _objc_opt_class(PTR_PTR_1126ae6a8);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar6);
      uVar1 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      if (uVar1 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126d8950;
        func_0x00010c098100(PTR_PTR_1126d8950);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar1);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107f8897c; end: 107f889eb; -[SCSmartCarouselFilterArranger setFilterVisualNamesProvider:] */

void FUN_107f8897c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x98) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = param_3;
    _objc_release(uVar1);
    param_1 = param_1 + 0x80;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfad8e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f889ec; end: 107f88a4b; -[SCSmartCarouselFilterArranger stackFilterItem:] */

void FUN_107f889ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24d1c0(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010be8a9a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c24d2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfadb00(uVar2,param_2,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f88a4c; end: 107f88aab; -[SCSmartCarouselFilterArranger unstackFilter:] */

void FUN_107f88a4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2829a0(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010be8a9a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c24d2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfadb00(uVar2,param_2,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f88aac; end: 107f88bc7; -[SCSmartCarouselFilterArranger stackedFilterWithRemoveableEffectFilter] */

undefined1 * FUN_107f88aac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar14;
  long unaff_x25;
  long lVar15;
  undefined1 *unaff_x26;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [128];
  long lStack_298;
  undefined1 *puStack_290;
  long lStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar1 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf52a60();
  if (uVar8 != 0) {
    unaff_x22 = (undefined1 *)*puStack_100;
    do {
      unaff_x23 = 0;
      do {
        if ((undefined1 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(uVar1);
        }
        puVar13 = *(undefined1 **)(lStack_108 + unaff_x23 * 8);
        puVar12 = puVar13;
        func_0x00010c06cd40();
        if ((((ulong)puVar12 & 1) != 0) ||
           (puVar12 = puVar13, func_0x00010c07e4c0(), ((ulong)puVar12 & 1) != 0)) {
          _objc_retain(puVar13);
          goto LAB_107f88b88;
        }
        unaff_x23 = unaff_x23 + 1;
      } while (uVar8 != unaff_x23);
      uVar8 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar8 != 0);
  }
  puVar13 = (undefined1 *)0x0;
LAB_107f88b88:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_240;
  pcStack_118 = FUN_107f88bc8;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar2 = *(undefined1 **)(uVar1 + 0xa0);
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_230;
    puVar13 = puVar12;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != unaff_x25) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined1 **)(lStack_238 + (long)unaff_x26 * 8);
        func_0x00010bfae180();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = uVar1;
        puVar5 = (undefined8 *)unaff_x22;
        func_0x00010bf45e80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bfd8f00();
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        if ((unaff_x24 & 1) != 0) {
          puVar12 = (undefined1 *)0x1;
          goto LAB_107f88cd8;
        }
        unaff_x26 = unaff_x26 + 1;
      } while (puVar13 != unaff_x26);
      puVar13 = puVar2;
      puVar5 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
  puVar12 = (undefined1 *)0x0;
LAB_107f88cd8:
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_107f88d20;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_290 = unaff_x26;
  lStack_288 = unaff_x25;
  uStack_280 = unaff_x24;
  uStack_278 = unaff_x23;
  puStack_270 = unaff_x22;
  puStack_268 = puVar13;
  puStack_260 = puVar12;
  puStack_258 = puVar2;
  ppuStack_250 = &puStack_120;
  _objc_retain(puVar5);
  if (puVar5 == (undefined8 *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    plStack_350 = (long *)0x0;
    lVar4 = *(long *)(puVar3 + 0xa0);
    func_0x00010c24d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010bf52a60();
    puVar12 = (undefined1 *)0x0;
    if (lVar10 != 0) {
      lVar14 = *plStack_350;
      do {
        lVar15 = 0;
        do {
          if (*plStack_350 != lVar14) {
            _objc_enumerationMutation(lVar4);
          }
          uVar1 = *(ulong *)(lStack_358 + lVar15 * 8);
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((uVar8 & 1) != 0) {
            puVar12 = (undefined1 *)0x1;
            goto LAB_107f88e1c;
          }
          lVar15 = lVar15 + 1;
        } while (lVar10 != lVar15);
        lVar10 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_360,auStack_318,0x10);
      } while (lVar10 != 0);
      puVar12 = (undefined1 *)0x0;
    }
LAB_107f88e1c:
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar12 = (undefined1 *)((long)puVar5 + 0x80);
  _objc_loadWeakRetained(puVar12);
  func_0x00010bfad920();
  _objc_release(puVar12);
  puVar12 = (undefined1 *)puVar5;
  func_0x00010c24d320();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)((long)puVar5 + 0x30);
  func_0x00010c084fc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar11;
  func_0x00010c0d3c80();
  _objc_release(uVar11);
  _objc_release(uVar6);
  uVar8 = *(ulong *)((long)puVar5 + 0xa0);
  func_0x00010bfdc9a0();
  if ((((uVar8 & 1) == 0) && (puVar12 != (undefined1 *)0x0)) &&
     (puVar13 = puVar12, func_0x00010c07e4c0(), (int)puVar13 != 0)) {
    puVar13 = puVar12;
    func_0x00010bfae180(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar13;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar9 = PTR_PTR_1126d8928;
    func_0x00010c084ea0(PTR_PTR_1126d8928,param_2,puVar2,0,0,6,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(uVar7,param_2,puVar9,0);
    _objc_release(puVar9);
    _objc_release(puVar2);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)((long)puVar5 + 0x10);
  *(undefined **)((long)puVar5 + 0x10) = puVar9;
  _objc_release(uVar11);
  lVar10 = *(long *)((long)puVar5 + 0x10);
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    uVar11 = *(undefined8 *)((long)puVar5 + 0x10);
    puVar9 = PTR_PTR_1126d8928;
    func_0x00010c27fae0(PTR_PTR_1126d8928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11,param_2,puVar9);
    _objc_release(puVar9);
  }
  puVar13 = (undefined1 *)((long)puVar5 + 0x80);
  _objc_loadWeakRetained(puVar13);
  func_0x00010bfad900();
  _objc_release(puVar13);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return puVar12;
}



/* Entry: 107f88bc8; end: 107f88d1f; -[SCSmartCarouselFilterArranger hasManuallyStackedFilterWithMediaCommands] */

undefined1 * FUN_107f88bc8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long unaff_x21;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar13;
  long unaff_x25;
  long lVar14;
  long unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x21 = lVar10;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x22 = *(undefined1 **)(lStack_128 + unaff_x26 * 8);
        func_0x00010bfae180();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_1;
        puVar3 = (undefined8 *)unaff_x22;
        func_0x00010bf45e80();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bfd8f00();
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        if ((unaff_x24 & 1) != 0) {
          puVar12 = (undefined1 *)0x1;
          goto LAB_107f88cd8;
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x21 != unaff_x26);
      unaff_x21 = lVar1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar12 = (undefined1 *)0x0;
LAB_107f88cd8:
  lVar10 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107f88d20;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  puStack_150 = puVar12;
  lStack_148 = lVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    lVar1 = *(long *)(lVar10 + 0xa0);
    func_0x00010c24d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bf52a60();
    puVar12 = (undefined1 *)0x0;
    if (lVar10 != 0) {
      lVar13 = *plStack_240;
      do {
        lVar14 = 0;
        do {
          if (*plStack_240 != lVar13) {
            _objc_enumerationMutation(lVar1);
          }
          uVar2 = *(ulong *)(lStack_248 + lVar14 * 8);
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((uVar6 & 1) != 0) {
            puVar12 = (undefined1 *)0x1;
            goto LAB_107f88e1c;
          }
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_250,auStack_208,0x10);
      } while (lVar10 != 0);
      puVar12 = (undefined1 *)0x0;
    }
LAB_107f88e1c:
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar12 = (undefined1 *)((long)puVar3 + 0x80);
  _objc_loadWeakRetained(puVar12);
  func_0x00010bfad920();
  _objc_release(puVar12);
  puVar12 = (undefined1 *)puVar3;
  func_0x00010c24d320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)((long)puVar3 + 0x30);
  func_0x00010c084fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c0d3c80();
  _objc_release(uVar11);
  _objc_release(uVar4);
  uVar6 = *(ulong *)((long)puVar3 + 0xa0);
  func_0x00010bfdc9a0();
  if ((((uVar6 & 1) == 0) && (puVar12 != (undefined1 *)0x0)) &&
     (puVar7 = puVar12, func_0x00010c07e4c0(), (int)puVar7 != 0)) {
    puVar7 = puVar12;
    func_0x00010bfae180(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar9 = PTR_PTR_1126d8928;
    func_0x00010c084ea0(PTR_PTR_1126d8928,param_2,puVar8,0,0,6,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(uVar5,param_2,puVar9,0);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)((long)puVar3 + 0x10);
  *(undefined **)((long)puVar3 + 0x10) = puVar9;
  _objc_release(uVar11);
  lVar10 = *(long *)((long)puVar3 + 0x10);
  func_0x00010bf529e0();
  if (lVar10 == 0) {
    uVar11 = *(undefined8 *)((long)puVar3 + 0x10);
    puVar9 = PTR_PTR_1126d8928;
    func_0x00010c27fae0(PTR_PTR_1126d8928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11,param_2,puVar9);
    _objc_release(puVar9);
  }
  puVar7 = (undefined1 *)((long)puVar3 + 0x80);
  _objc_loadWeakRetained(puVar7);
  func_0x00010bfad900();
  _objc_release(puVar7);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return puVar12;
}



/* Entry: 107f88d20; end: 107f88e6f; -[SCSmartCarouselFilterArranger isPreviewFilterStackedWithName:] */

long FUN_107f88d20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010c24d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf52a60();
    lVar9 = 0;
    if (lVar7 != 0) {
      lVar9 = *plStack_110;
      do {
        lVar10 = 0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          uVar2 = *(ulong *)(lStack_118 + lVar10 * 8);
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((uVar5 & 1) != 0) {
            lVar9 = 1;
            goto LAB_107f88e1c;
          }
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar7 != 0);
      lVar9 = 0;
    }
LAB_107f88e1c:
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar9;
  }
  ___stack_chk_fail();
  lVar9 = param_3 + 0x80;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bfad920();
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010c24d320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c084fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0d3c80();
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_3 + 0xa0);
  func_0x00010bfdc9a0();
  if ((((uVar5 & 1) == 0) && (lVar9 != 0)) &&
     (lVar7 = lVar9, func_0x00010c07e4c0(), (int)lVar7 != 0)) {
    lVar7 = lVar9;
    func_0x00010bfae180(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126d8928;
    func_0x00010c084ea0(PTR_PTR_1126d8928,param_2,lVar1,0,0,6,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(uVar4,param_2,puVar6,0);
    _objc_release(puVar6);
    _objc_release(lVar1);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar6;
  _objc_release(uVar8);
  lVar7 = *(long *)(param_3 + 0x10);
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    puVar6 = PTR_PTR_1126d8928;
    func_0x00010c27fae0(PTR_PTR_1126d8928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8,param_2,puVar6);
    _objc_release(puVar6);
  }
  param_3 = param_3 + 0x80;
  _objc_loadWeakRetained(param_3);
  func_0x00010bfad900();
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return lVar9;
}



/* Entry: 107f88e70; end: 107f8907f; -[SCSmartCarouselFilterArranger _reloadFromSwipeOrder] */

void FUN_107f88e70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfad920();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c24d320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c084fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0d3c80();
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0xa0);
  func_0x00010bfdc9a0();
  if ((((uVar4 & 1) == 0) && (lVar1 != 0)) &&
     (lVar7 = lVar1, func_0x00010c07e4c0(), (int)lVar7 != 0)) {
    lVar7 = lVar1;
    func_0x00010bfae180(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar6 = PTR_PTR_1126d8928;
    func_0x00010c084ea0(PTR_PTR_1126d8928,param_2,lVar5,0,0,6,0,0,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(uVar3,param_2,puVar6,0);
    _objc_release(puVar6);
    _objc_release(lVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar6;
  _objc_release(uVar8);
  lVar7 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = PTR_PTR_1126d8928;
    func_0x00010c27fae0(PTR_PTR_1126d8928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8,param_2,puVar6);
    _objc_release(puVar6);
  }
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfad900();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f89080; end: 107f892bf;  */

uint FUN_107f89080(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c24d220();
  if (puVar2 != (undefined1 *)0xb) {
    puVar2 = param_2;
    func_0x00010c081ec0();
    if ((((ulong)puVar2 & 1) != 0) ||
       (puVar2 = param_2, func_0x00010c24d220(), puVar2 == (undefined1 *)0xc)) {
      puVar7 = (undefined8 *)param_3;
      uVar8 = 1;
      goto LAB_107f890f8;
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    param_3 = param_2;
    func_0x00010beb3040();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (*(char *)(lVar4 + 0x60) == '\x01') {
        puVar2 = param_2;
        func_0x00010bfae5a0();
        lVar4 = *(long *)(param_1 + 0x20);
        if (puVar2 == (undefined1 *)0x7) {
          puVar7 = (undefined8 *)param_2;
          func_0x00010be41520();
          uVar8 = (uint)lVar4 ^ 1;
          goto LAB_107f890f8;
        }
      }
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar5 = *(long *)(lVar4 + 0xa0);
      func_0x00010c24d2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar10 = *plStack_120;
        do {
          lVar11 = 0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(lVar5);
            }
            puVar9 = *(undefined1 **)(lStack_128 + lVar11 * 8);
            puVar2 = puVar9;
            func_0x00010c24d220();
            puVar6 = param_2;
            func_0x00010c24d220();
            if (puVar2 == puVar6) {
LAB_107f892ac:
              uVar8 = 0;
              goto LAB_107f892b0;
            }
            puVar2 = puVar9;
            func_0x00010c07e4c0();
            if ((int)puVar2 != 0) {
              iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
              puVar7 = (undefined8 *)param_2;
              func_0x00010bdda000();
              if (iVar1 == 0) goto LAB_107f892ac;
            }
            puVar2 = param_2;
            func_0x00010c07e4c0();
            if ((int)puVar2 != 0) {
              iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
              puVar7 = (undefined8 *)puVar9;
              func_0x00010bdda000();
              if (iVar1 == 0) goto LAB_107f892ac;
            }
            puVar2 = param_2;
            func_0x00010bfae5a0();
            if (((puVar2 == (undefined1 *)0x2) &&
                (puVar2 = puVar9, func_0x00010bfae5a0(), puVar2 == (undefined1 *)0x3)) ||
               ((puVar2 = param_2, func_0x00010bfae5a0(), puVar2 == (undefined1 *)0x3 &&
                (func_0x00010bfae5a0(), puVar9 == (undefined1 *)0x2)))) goto LAB_107f892ac;
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar5;
          puVar7 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      uVar8 = 1;
LAB_107f892b0:
      _objc_release(lVar5);
      goto LAB_107f890f8;
    }
  }
  puVar7 = (undefined8 *)param_3;
  uVar8 = 0;
LAB_107f890f8:
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  func_0x00010c24d220(puVar7);
  return (uint)((undefined1 *)((long)puVar7 + -4) < (undefined1 *)0x8);
}



/* Entry: 107f892c0; end: 107f892e3; -[SCSmartCarouselFilterArranger _canStackItemWithSkyFilter:] */

bool FUN_107f892c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c24d220(param_3);
  return param_3 - 4U < 8;
}



/* Entry: 107f892e4; end: 107f89443; -[SCSmartCarouselFilterArranger _shouldDisableItem:] */

uint FUN_107f892e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfae5a0();
  if (lVar1 == 7) {
    uVar3 = 0;
    lVar1 = param_3;
    func_0x00010bf32760(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77098,param_2,lVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      lVar4 = param_3;
      func_0x00010bf32760(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfcef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e77078,param_2,lVar5);
      if ((uVar3 & 1) == 0) {
        uVar8 = 0x10ef2978;
        lVar6 = param_3;
        func_0x00010bf32760(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfcef60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110ef2978,param_2,lVar7);
        uVar8 = uVar8 ^ 1;
        _objc_release(lVar7);
        _objc_release(lVar6);
      }
      else {
        uVar8 = 0;
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      uVar8 = 0;
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    uVar8 = 0;
  }
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 107f89444; end: 107f894a3; -[SCSmartCarouselFilterArranger recoverToInitialState] */

void FUN_107f89444(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 0xa0));
  func_0x00010be8a9a0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c24d2e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfadb00(uVar2,param_2,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f894a4; end: 107f894ab; -[SCSmartCarouselFilterArranger filterItemAtIndex:] */

void FUN_107f894a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 107f894ac; end: 107f894b3; -[SCSmartCarouselFilterArranger totalFilterCount] */

void FUN_107f894ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107f894b4; end: 107f894bb; -[SCSmartCarouselFilterArranger currentIndexOfFilterItem:] */

void FUN_107f894b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfecdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_indexOfObject__1125d8d40);
  return;
}



/* Entry: 107f894bc; end: 107f8956f; -[SCSmartCarouselFilterArranger currentIndexOfFilterName:] */

ulong FUN_107f894bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(ulong *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_107f89550;
      uVar5 = uVar5 + 1;
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
    } while (uVar5 < uVar4);
  }
  uVar5 = 0x7fffffffffffffff;
LAB_107f89550:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107f89570; end: 107f895b7; -[SCSmartCarouselFilterArranger filterItemForName:] */

void FUN_107f89570(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf5f000();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010bfae000(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f895b8; end: 107f895bf; -[SCSmartCarouselFilterArranger currentFilterCount] */

void FUN_107f895b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107f895c0; end: 107f89a33; -[SCSmartCarouselFilterArranger commandConfigurationsForCurrentFiltersWithMediaCommands] */

void FUN_107f895c0(undefined **param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puStack_150;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = param_1;
  func_0x00010c24d320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar19;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar19);
  if (ppuVar2 == (undefined **)0x0) {
    puStack_150 = (undefined *)0x0;
  }
  else {
    ppuVar19 = param_1;
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar19;
    func_0x00010bfd8f00();
    if ((int)ppuVar3 == 0) {
      puStack_150 = (undefined *)0x0;
    }
    else {
      puStack_150 = PTR_PTR_1126c40c0;
      _objc_alloc();
      ppuVar3 = param_1;
      func_0x00010c24d320(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c06ec00();
      param_2 = ppuVar2;
      func_0x00010b7448e4(puStack_150,ppuVar2,ppuVar4);
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar19);
  }
  puVar16 = param_1[2];
  _objc_retain(puVar16);
  puVar5 = puVar16;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar5 != (undefined *)0x0) {
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar16);
        }
        ppuVar18 = *(undefined ***)((long)puVar12 * 8);
        ppuVar19 = ppuVar18;
        func_0x00010bfae180(ppuVar18);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = param_1;
        func_0x00010bf11de0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar19);
        func_0x00010c06ec00();
        ppuVar19 = ppuVar18;
        func_0x00010bfae180();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar19;
        func_0x00010c0720c0();
        if ((((ulong)ppuVar4 & 1) == 0) &&
           (ppuVar4 = ppuVar18, func_0x00010bfae5a0(), ppuVar4 != (undefined **)0x6)) {
          ppuVar4 = ppuVar18;
          func_0x00010bfae180(ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = param_1;
          func_0x00010bf45e80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010c081f00();
          _objc_release(ppuVar7);
          _objc_release(ppuVar4);
          _objc_release(ppuVar19);
          if ((int)ppuVar8 != 0) goto LAB_107f897ac;
          ppuVar19 = ppuVar18;
          func_0x00010bfae180(ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_1;
          func_0x00010bf45e80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar4;
          func_0x00010bfd8f00();
          _objc_release(ppuVar4);
          _objc_release(ppuVar19);
          if ((int)ppuVar7 == 0) {
            if (ppuVar3 != (undefined **)0x0) {
              ppuVar19 = ppuVar3;
              func_0x00010bfae180(ppuVar3);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = param_1;
              func_0x00010bf45e80();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar4;
              func_0x00010bfd8f00();
              _objc_release(ppuVar4);
              _objc_release(ppuVar19);
              if ((int)ppuVar18 != 0) {
                ppuVar19 = ppuVar3;
                func_0x00010bfae180();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_107f897c4;
              }
            }
            if (puStack_150 == (undefined *)0x0) {
              _objc_retain(&PTR____CFConstantStringClassReference_110f27658);
              ppuVar19 = &PTR____CFConstantStringClassReference_110f27658;
            }
            else {
              ppuVar19 = *(undefined ***)(puStack_150 + 0x10);
              _objc_retain(ppuVar19);
            }
          }
          else {
            func_0x00010bfae180();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar18;
            func_0x00010914e1a4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar18);
          }
        }
        else {
          _objc_release(ppuVar19);
LAB_107f897ac:
          func_0x00010bfae180();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar18;
        }
LAB_107f897c4:
        puVar6 = PTR_PTR_1126c40c0;
        _objc_alloc();
        param_2 = ppuVar19;
        func_0x00010b7448e4();
        func_0x00010befa120(puVar13);
        _objc_release(puVar6);
        _objc_release(ppuVar19);
        _objc_release(ppuVar3);
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar16;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar16);
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puStack_150;
  func_0x00010c24d460(puStack_150);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c24d380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar13 = puStack_150;
  func_0x00010c24d460(puStack_150);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c24d280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar5);
  _objc_release(puVar16);
  _objc_release(puVar13);
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar14 = *(long *)(puStack_150 + 0x18);
  _objc_retain(lVar14);
  lVar10 = lVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar14);
      }
      param_2 = *(undefined ***)(lVar17 * 8);
      puVar13 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      func_0x00010befa120(puVar16);
      _objc_release(puVar13);
      lVar17 = lVar17 + 1;
    } while (lVar10 != lVar17);
    lVar10 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar13 = puVar5;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar13;
  func_0x00010c0d3c80();
  func_0x00010befa160(puVar16);
  _objc_release(puVar12);
  _objc_release(puVar13);
  puVar13 = puVar16;
  func_0x00010bf51e00();
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar19 = param_2;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar19;
  func_0x00010c0720c0();
  if ((((ulong)ppuVar2 & 1) == 0) &&
     (ppuVar2 = param_2, func_0x00010bfae5a0(), ppuVar2 != (undefined **)0x6)) {
    uVar15 = *(undefined8 *)(puVar5 + 0x20);
    ppuVar2 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010c081f00();
    _objc_release(uVar15);
    _objc_release(ppuVar2);
    _objc_release(ppuVar19);
    if ((int)uVar9 != 0) goto LAB_107f89cfc;
    uVar15 = *(undefined8 *)(puVar5 + 0x20);
    ppuVar19 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010bfd8f00();
    _objc_release(uVar15);
    _objc_release(ppuVar19);
    if ((int)uVar9 == 0) goto LAB_107f89e1c;
    ppuVar2 = param_2;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar2;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuVar19 == (undefined **)0x0) goto LAB_107f89e1c;
LAB_107f89d14:
    puVar13 = PTR_PTR_1126c40c0;
    _objc_alloc(PTR_PTR_1126c40c0);
    ppuVar2 = param_2;
    func_0x00010c06ec00(param_2);
    func_0x00010b7448e4(puVar13,ppuVar19,ppuVar2);
    _objc_release(ppuVar19);
  }
  else {
    _objc_release(ppuVar19);
LAB_107f89cfc:
    ppuVar19 = param_2;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar19 != (undefined **)0x0) goto LAB_107f89d14;
LAB_107f89e1c:
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107f89a34; end: 107f89c97; -[SCSmartCarouselFilterArranger commandConfigurationsForStackedFiltersWithMediaCommands] */

void FUN_107f89a34(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c24d460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24d380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c24d460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24d280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c720(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar11 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar11);
  lVar2 = lVar11;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar11);
      }
      param_2 = *(ulong *)(lVar13 * 8);
      puVar10 = PTR_PTR_1126c40c0;
      _objc_alloc();
      func_0x00010b7448e4();
      func_0x00010befa120(puVar4);
      _objc_release(puVar10);
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    lVar2 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  puVar10 = puVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010c0d3c80();
  func_0x00010befa160(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0720c0();
  if (((uVar7 & 1) == 0) && (uVar7 = param_2, func_0x00010bfae5a0(), uVar7 != 6)) {
    uVar12 = *(undefined8 *)(puVar1 + 0x20);
    uVar7 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010c081f00();
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((int)uVar8 != 0) goto LAB_107f89cfc;
    uVar12 = *(undefined8 *)(puVar1 + 0x20);
    uVar6 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bfd8f00();
    _objc_release(uVar12);
    _objc_release(uVar6);
    if ((int)uVar8 == 0) goto LAB_107f89e1c;
    uVar7 = param_2;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010914e1a4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar6 == 0) goto LAB_107f89e1c;
LAB_107f89d14:
    puVar10 = PTR_PTR_1126c40c0;
    _objc_alloc(PTR_PTR_1126c40c0);
    uVar7 = param_2;
    func_0x00010c06ec00(param_2);
    func_0x00010b7448e4(puVar10,uVar6,uVar7);
    _objc_release(uVar6);
  }
  else {
    _objc_release(uVar6);
LAB_107f89cfc:
    uVar6 = param_2;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 != 0) goto LAB_107f89d14;
LAB_107f89e1c:
    puVar10 = (undefined *)0x0;
  }
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107f89c98; end: 107f89e3f;  */

void FUN_107f89c98(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfae180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((uVar2 & 1) == 0) && (uVar2 = param_2, func_0x00010bfae5a0(), uVar2 != 6)) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c081f00();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_107f89cfc;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bfae180(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfd8f00();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar2 = param_2;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010914e1a4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126c40c0;
      goto joined_r0x000107f89e18;
    }
  }
  else {
    _objc_release(uVar1);
LAB_107f89cfc:
    uVar1 = param_2;
    func_0x00010bfae180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c40c0;
joined_r0x000107f89e18:
    PTR_PTR_1126c40c0 = puVar4;
    if (uVar1 != 0) {
      _objc_alloc(puVar4);
      uVar2 = param_2;
      func_0x00010c06ec00(param_2);
      func_0x00010b7448e4(puVar4,uVar1,uVar2);
      _objc_release(uVar1);
      goto LAB_107f89e20;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_107f89e20:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f89e40; end: 107f89e47; -[SCSmartCarouselFilterArranger visualFilterNames] */

void FUN_107f89e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_visualFilterNames_112685b38);
  return;
}



/* Entry: 107f89e48; end: 107f89e4f; -[SCSmartCarouselFilterArranger configForFilterName:] */

void FUN_107f89e48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 107f89e50; end: 107f89ee3; -[SCSmartCarouselFilterArranger autoStackedItemForFilterName:] */

void FUN_107f89e50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bf45e80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d8928;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf11e00(lVar1);
    func_0x00010c084380(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f89ee4; end: 107f89f0f; -[SCSmartCarouselFilterArranger removeFilterWithName:] */

void FUN_107f89ee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf32880(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeFilerAtIndex__1125809f8,uVar1);
  return;
}



/* Entry: 107f89f10; end: 107f89f5f; -[SCSmartCarouselFilterArranger removeFilterName:filterType:] */

void FUN_107f89f10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8928;
  func_0x00010c0c1be0(PTR_PTR_1126d8928);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf32860(uVar2,param_2,puVar1);
  func_0x00010be8c160(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f89f60; end: 107f89fc7; -[SCSmartCarouselFilterArranger _removeFilerAtIndex:] */

void FUN_107f89f60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x7fffffffffffffff) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfad980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c680(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  func_0x00010be8bca0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f89fc8; end: 107f8a01f; -[SCSmartCarouselFilterArranger clearAllFilters] */

void FUN_107f89fc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf3a840(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126d8928;
  func_0x00010c27fae0(PTR_PTR_1126d8928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f8a020; end: 107f8a19f; -[SCSmartCarouselFilterArranger addOrUpdateFilterName:config:type:] */

void FUN_107f8a020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam0000000113728990 != -1) {
    func_0x00010002a2fc(0x113728990,&PTR___NSConcreteGlobalBlock_110a15bc0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071d00();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf32880();
    _objc_release(uVar1);
    if (lVar3 != 0x7fffffffffffffff) goto LAB_107f8a168;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  uVar2 = param_4;
  func_0x00010bfd8f00();
  if ((param_5 != 6) && ((int)uVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010914e1a4(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar1);
    _objc_release(uVar2);
  }
  lVar3 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bfad8c0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bdedbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc7a80(param_1);
  _objc_release(lVar3);
LAB_107f8a168:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8a1a0; end: 107f8a41f; -[SCSmartCarouselFilterArranger _createFilterWithName:config:type:] */

void FUN_107f8a1a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 uStack_74;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c07a1a0();
  if ((int)lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f27798);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf32760();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010bf46140(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_4;
      func_0x00010c07c420(param_4);
      lVar2 = lVar3;
      func_0x00010bf68f60(lVar3,param_2,param_3,param_5,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    func_0x00010bf11de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_5 == 6) {
      uStack_74 = 0;
    }
    else {
      lVar4 = param_4;
      func_0x00010bfd8f00();
      uStack_74 = (undefined1)lVar4;
    }
    lVar4 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f27778);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f27838);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f23b18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126d8928;
    lVar3 = lVar4;
    func_0x00010bf85d80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084ea0(puVar7,param_2,param_3,lVar3,lVar5,param_5,lVar2,param_1 != 0,uStack_74);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar7 = PTR_PTR_1126d8928;
    func_0x00010c0fd9e0(PTR_PTR_1126d8928,param_2,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107f8a420; end: 107f8a59b; -[SCSmartCarouselFilterArranger _addOrUpdateFilter:config:] */

void FUN_107f8a420(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bdd98a0();
  if ((int)lVar2 == 0) goto LAB_107f8a578;
  uVar1 = param_4;
  func_0x00010c07c420();
  if ((int)uVar1 == 0) {
    ppuVar5 = param_3;
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f274f8;
    _objc_retain(&PTR____CFConstantStringClassReference_110f274f8);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf32880();
  if (lVar2 == 0x7fffffffffffffff) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010bfad980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c680(*(undefined8 *)(param_1 + 0x30));
  }
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010bef84a0();
  if (-1 < lVar3) {
    lVar4 = param_1;
    func_0x00010bdf6bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      if (lVar4 != 0) {
LAB_107f8a550:
        (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
      }
    }
    else if (lVar4 == 0) {
      func_0x00010be8bca0(param_1);
    }
    else {
      if (lVar2 != lVar3) {
        func_0x00010be8bcc0();
        goto LAB_107f8a550;
      }
      func_0x00010be8ea80();
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
  _objc_release(ppuVar5);
LAB_107f8a578:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8a59c; end: 107f8a85b; -[SCSmartCarouselFilterArranger _currentItemsInsertionBlockForFilter:] */

void FUN_107f8a59c(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined *apuStack_170 [6];
  undefined1 auStack_140 [8];
  undefined8 auStack_138 [6];
  undefined *apuStack_108 [6];
  undefined1 auStack_d8 [8];
  undefined8 auStack_d0 [6];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  ppuVar12 = apuStack_170;
  _objc_retain(param_3);
  _objc_initWeak(auStack_70,param_1);
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107f8a85c;
    puStack_88 = &UNK_110864d98;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    ppuVar9 = &puStack_a0;
    puStack_80 = param_3;
    _objc_retainBlock(ppuVar9);
    _objc_release(puStack_80);
    _objc_destroyWeak(auStack_78);
    goto LAB_107f8a80c;
  }
  uVar4 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c24d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (((*(char *)(param_1 + 0x60) == '\x01') &&
      (puVar6 = param_3, func_0x00010bfae5a0(), puVar6 == (undefined *)0x7)) &&
     (uVar4 = param_1, func_0x00010beb3040(), (uVar4 & 1) == 0)) {
    puVar10 = auStack_d8;
    puVar6 = (undefined *)0x107f8a980;
    ppuVar12 = apuStack_108;
    pcVar8 = FUN_107f8a8d0;
    puVar11 = auStack_d0;
LAB_107f8a76c:
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
    puVar11[1] = 0xc2000000;
    puVar11[2] = pcVar8;
    puVar11[3] = &UNK_110a15b60;
    _objc_retain(uVar5);
    puVar11[4] = uVar5;
    puVar11[5] = param_1;
    puVar7 = puVar11;
    _objc_retainBlock();
    *ppuVar12 = puVar1;
    ppuVar12[1] = (undefined *)0xc2000000;
    ppuVar12[2] = puVar6;
    ppuVar12[3] = &UNK_110893d30;
    _objc_copyWeak(puVar10,auStack_70);
    _objc_retain(param_3);
    ppuVar12[4] = param_3;
    ppuVar12[5] = (undefined *)puVar7;
    _objc_retain(puVar7);
    ppuVar9 = ppuVar12;
    _objc_retainBlock(ppuVar12);
    _objc_release(ppuVar12[5]);
    _objc_release(ppuVar12[4]);
    _objc_release(puVar7);
    _objc_destroyWeak(puVar10);
    _objc_release(puVar11[4]);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfae5a0(param_3);
    func_0x00010c0df780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf4b900();
    _objc_release(puVar6);
    if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010beb3040(), (uVar4 & 1) == 0)) {
      puVar10 = auStack_140;
      puVar6 = (undefined *)0x107f8aa5c;
      pcVar8 = (code *)0x107f8a9c4;
      puVar11 = auStack_138;
      goto LAB_107f8a76c;
    }
    ppuVar9 = (undefined **)0x0;
  }
  _objc_release(uVar5);
LAB_107f8a80c:
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return;
}



/* Entry: 107f8a85c; end: 107f8a89f;  */

void FUN_107f8a85c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107f8a8a0; end: 107f8a8cf;  */

void FUN_107f8a8a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfae5a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 107f8a8d0; end: 107f8aa9f;  */

undefined8 FUN_107f8a8d0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfae5a0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 7) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfae5a0(param_2);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010beb3040(uVar3);
    }
    else {
      uVar3 = 1;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107f8aaa0; end: 107f8aadb; -[SCSmartCarouselFilterArranger loadComplete] */

void FUN_107f8aaa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f8aadc; end: 107f8ab67; -[SCSmartCarouselFilterArranger performOrderBatchUpdate:] */

void FUN_107f8aadc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c0d9840(uVar2,param_2,PTR____kCFBooleanTrue_11034ab68);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,PTR____kCFBooleanFalse_11034ab60);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f8ab68; end: 107f8ac7f; -[SCSmartCarouselFilterArranger _insertCurrentFilter:usingAllFiltersInsertionIndex:withSkipBlock:] */

void FUN_107f8ab68(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
      if (uVar1 <= uVar4) break;
      uVar2 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_5;
      (**(code **)(param_5 + 0x10))(param_5,uVar2);
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar2;
        func_0x00010c071ae0();
        if ((uVar1 & 1) == 0) {
          _objc_release(uVar3);
          _objc_release(uVar2);
          break;
        }
        uVar4 = uVar4 + 1;
      }
      lVar5 = lVar5 + 1;
      _objc_release(uVar3);
      _objc_release(uVar2);
    } while (param_4 != lVar5);
  }
  func_0x00010be3c340(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f8ac80; end: 107f8ada7; -[SCSmartCarouselFilterArranger _isItemStacked:] */

uint FUN_107f8ac80(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined1 *)0x0) {
    uVar10 = 0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar1 = *(long *)(param_1 + 0xa0);
    func_0x00010c24d2e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_c8;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    uVar10 = 0;
    if (lVar2 != 0) {
      lVar11 = *plStack_100;
      do {
        lVar12 = 0;
        do {
          if (*plStack_100 != lVar11) {
            _objc_enumerationMutation(lVar1);
          }
          if (param_3 == *(undefined1 **)(lStack_108 + lVar12 * 8)) {
            uVar10 = 1;
            goto LAB_107f8ad58;
          }
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        param_4 = auStack_c8;
        lVar2 = lVar1;
        puVar9 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
      uVar10 = 0;
    }
LAB_107f8ad58:
    _objc_release(lVar1);
    puVar8 = (undefined1 *)puVar9;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(param_4);
  if ((param_3[0x78] != '\x01') ||
     (puVar3 = puVar8, func_0x00010bfae5a0(), puVar3 != (undefined1 *)0x7)) {
    uVar4 = *(ulong *)(param_3 + 0x30);
    func_0x00010bfd7180(uVar4,param_2,puVar8);
    if ((uVar4 & 1) == 0) {
      puVar3 = puVar8;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfda7c0();
      _objc_release(puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        if (((param_3[0x38] & 1) == 0) &&
           (puVar3 = puVar8, func_0x00010bfae5a0(), puVar3 == (undefined1 *)0x0)) {
          puVar3 = param_4;
          func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f27798);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          FUN_107f8c814();
          if (puVar5 + -2 < (undefined1 *)0x5) {
            uVar6 = *(undefined8 *)(param_3 + 0x30);
            func_0x00010c084fc0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_180 = 0xc2000000;
            uStack_178 = 0x107f8af40;
            puStack_170 = &UNK_110a15b90;
            _objc_retain(puVar8);
            uVar7 = uVar6;
            puStack_168 = puVar8;
            puStack_160 = param_3;
            puStack_158 = puVar5;
            func_0x00010bf04920(uVar6,param_2,&puStack_188);
            uVar10 = (uint)uVar7 ^ 1;
            _objc_release(puStack_168);
            _objc_release(uVar6);
          }
          else {
            uVar10 = 1;
          }
          _objc_release(puVar3);
        }
        else {
          uVar10 = 1;
        }
        goto LAB_107f8ae40;
      }
    }
  }
  uVar10 = 0;
LAB_107f8ae40:
  _objc_release(param_4);
  _objc_release(puVar8);
  return uVar10;
}



/* Entry: 107f8ada8; end: 107f8b053; -[SCSmartCarouselFilterArranger _canAddFilter:config:] */

uint FUN_107f8ada8(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(char *)(param_1 + 0x78) != '\x01') || (uVar1 = param_3, func_0x00010bfae5a0(), uVar1 != 7))
  {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010bfd7180(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010bfae180();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfda7c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        if (((*(byte *)(param_1 + 0x38) & 1) == 0) &&
           (uVar1 = param_3, func_0x00010bfae5a0(), uVar1 == 0)) {
          lVar3 = param_4;
          func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f27798);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          FUN_107f8c814();
          if (lVar4 - 2U < 5) {
            uVar5 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c084fc0(uVar5);
            _objc_retainAutoreleasedReturnValue();
            puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_70 = 0xc2000000;
            uStack_68 = 0x107f8af40;
            puStack_60 = &UNK_110a15b90;
            _objc_retain(param_3);
            uVar6 = uVar5;
            uStack_58 = param_3;
            lStack_50 = param_1;
            lStack_48 = lVar4;
            func_0x00010bf04920(uVar5,param_2,&puStack_78);
            uVar7 = (uint)uVar6 ^ 1;
            _objc_release(uStack_58);
            _objc_release(uVar5);
          }
          else {
            uVar7 = 1;
          }
          _objc_release(lVar3);
        }
        else {
          uVar7 = 1;
        }
        goto LAB_107f8ae40;
      }
    }
  }
  uVar7 = 0;
LAB_107f8ae40:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 107f8b054; end: 107f8b1b3; -[SCSmartCarouselFilterArranger _insertCurrentItem:atIndex:] */

void FUN_107f8b054(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (uVar1 < param_4) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x00010c066b00(*(undefined8 *)(param_1 + 0x10));
  lVar2 = param_1 + 0x88;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bf603a0(&uStack_70,lVar2);
  }
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad840();
  _objc_release(lVar2);
  func_0x00010bfadaa0(*(undefined8 *)(param_1 + 0x40));
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = param_3;
  func_0x00010bfae5a0(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_3;
  func_0x00010bfae180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  FUN_107fb4b24(uVar6,uVar3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f8b1b4; end: 107f8b32b; -[SCSmartCarouselFilterArranger _replaceCurrentFilter:with:] */

void FUN_107f8b1b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfecde0();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x10));
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf603a0(&uStack_70,lVar1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad880();
    _objc_release(lVar1);
    func_0x00010bfadae0(*(undefined8 *)(param_1 + 0x40));
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = param_4;
    func_0x00010bfae5a0(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = param_4;
    func_0x00010bfae180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_107fb4b24(uVar5,uVar2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107f8b32c; end: 107f8b333; -[SCSmartCarouselFilterArranger _removeCurrentFilter:] */

void FUN_107f8b32c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__removeCurrentFilter_reloadOrder_1125808d0,param_3,1);
  return;
}



/* Entry: 107f8b334; end: 107f8b433; -[SCSmartCarouselFilterArranger _removeCurrentFilter:reloadOrder:] */

void FUN_107f8b334(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf603a0(&uStack_70,lVar2);
    }
    _objc_release(lVar2);
    if (param_4 != 0) {
      func_0x00010be8a9a0(param_1);
    }
    lVar2 = param_1 + 0x80;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfad860();
    _objc_release(lVar2);
    func_0x00010bfadac0(*(undefined8 *)(param_1 + 0x40),param_2,param_1,param_3,lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107f8b434; end: 107f8b457; -[SCSmartCarouselFilterArranger containsFilterName:] */

bool FUN_107f8b434(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf32880(lVar1);
  return lVar1 != 0x7fffffffffffffff;
}



/* Entry: 107f8b458; end: 107f8b573; -[SCSmartCarouselFilterArranger containsAnyFilterName:] */

undefined8 FUN_107f8b458(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar5 = 0;
LAB_107f8b52c:
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return uVar5;
      }
      ___stack_chk_fail();
      uVar5 = *(undefined8 *)(param_3 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf32890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_carouselIndexForFilterName__1125aa3c8);
      return uVar5;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = param_1;
      func_0x00010bf4b780();
      if ((uVar3 & 1) != 0) {
        uVar5 = 1;
        goto LAB_107f8b52c;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107f8b574; end: 107f8b57b; -[SCSmartCarouselFilterArranger logIndexFromFilterName:] */

void FUN_107f8b574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_carouselIndexForFilterName__1125aa3c8);
  return;
}



/* Entry: 107f8b57c; end: 107f8b583; -[SCSmartCarouselFilterArranger logFilterItemAtIndex:] */

void FUN_107f8b57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_filterAtCarouselIndex__1125c9008);
  return;
}



/* Entry: 107f8b584; end: 107f8b5a3; -[SCSmartCarouselFilterArranger canStackMoreFilters] */

bool FUN_107f8b584(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf529e0(uVar1);
  return 1 < uVar1;
}


