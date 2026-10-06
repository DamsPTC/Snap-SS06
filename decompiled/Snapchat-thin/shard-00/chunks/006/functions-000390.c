/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10081f588; end: 10081f64b;  */

void FUN_10081f588(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104ce4f0;
  func_0x000107c613fc(&UNK_1104ce4f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_1021274d8;
  FUN_10058fa64(&UNK_1021274d8,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10081f64c; end: 10081f66f;  */

void FUN_10081f64c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f670; end: 10081f6a7;  */

void FUN_10081f670(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10081f6a8; end: 10081f6af;  */

void FUN_10081f6a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f6b0; end: 10081f6db;  */

void FUN_10081f6b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f6dc; end: 10081f6df;  */

void FUN_10081f6dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f6e0; end: 10081f70b;  */

void FUN_10081f6e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10081f70c; end: 10081f71b; -[SCMultiScopeExposerProxy exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081f70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cdc),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 10081f71c; end: 10081f763;  */

void FUN_10081f71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10081f764(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10081f764; end: 10081f817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081f764(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_38;
  
  func_0x000107c614a4(param_1,*(undefined8 *)
                               ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50),0,0,0)
  ;
  uVar1 = 0x113092408;
  FUN_1000285a8(0x113092408,&UNK_10dd38190);
  FUN_100087bd4(&lStack_38,FUN_10081f8f4,auStack_60,uVar1);
  if (lStack_38 != 0) {
    func_0x000107c42c1c(lStack_38);
    func_0x000107c61170(lStack_38);
  }
  return;
}



/* Entry: 10081f818; end: 10081f8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081f818(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = *param_2;
  uVar3 = *(ulong *)PTR__swift_isaMask_11034f488;
  uStack_50 = param_3;
  func_0x000107c61428((long)param_2 + _DAT_1130924a8,auStack_68,0x21,0);
  uVar5 = *(undefined8 *)((uVar3 & uVar4) + 0x50);
  func_0x000107c61174(param_3);
  puVar1 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar5);
  uVar2 = 0;
  func_0x000107c5fe38(0,uVar5,puVar1);
  func_0x000107c5fe20(&uStack_48,&uStack_50,uVar2);
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(uStack_48);
  *param_1 = *(undefined8 *)((long)param_2 + _DAT_1130924a0);
  func_0x000107c61174();
  return;
}



/* Entry: 10081f8f4; end: 10081f90b;  */

void FUN_10081f8f4(void)

{
  long unaff_x20;
  
  FUN_10081f818(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10081f90c; end: 10081f913; -[SIGHeaderButtonItem setStyle:] */

void FUN_10081f90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10081f914; end: 10081f91b; -[SIGHeaderButtonItem setTheme:] */

void FUN_10081f914(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10081f91c; end: 10081f923; -[SCCameraVerticalToolbarConfigurationImpl iconCanHaveBackground] */

undefined8 FUN_10081f91c(void)

{
  return 0;
}



/* Entry: 10081f924; end: 10081f957; -[SCMainCameraHeaderLayoutController _shouldMoveSearchToTrailingHeader] */

void FUN_10081f924(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3cd60();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be3ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCameraToolbarMiddlePositionEn_11256d438)
    ;
    return;
  }
  return;
}



/* Entry: 10081f958; end: 10081f997; -[SCMainCameraHeaderLayoutController _useLeadingTitleHeaderLayout] */

undefined8 FUN_10081f958(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c3de48(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_10081f998();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10081f998; end: 10081f9c3;  */

bool FUN_10081f998(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4980c(param_1,param_2,&PTR____CFConstantStringClassReference_110eee8b8,0,0);
  return (int)param_1 == 2;
}



/* Entry: 10081f9c4; end: 10081f9df; +[SCStoriesSearchHeaderConfigKeys discoverSearchButtonOnlyEnabled] */

void FUN_10081f9c4(void)

{
  if (lRam0000000113584ae8 != -1) {
    func_0x000107c61568(0x113584ae8,FUN_10081f9e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cd00);
  return;
}



/* Entry: 10081f9e0; end: 10081fa2f;  */

void FUN_10081f9e0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000023;
  func_0x000100442ccc(0xd000000000000023,0x800000010f19b0e0,0);
  uRam000000011380cd00 = uVar1;
  return;
}



/* Entry: 10081fa30; end: 10081fad7; -[SCHeaderButtonProvider cameraSearchButtonItem] */

void FUN_10081fa30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0xe0);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    func_0x000107c610fc();
    puVar1 = PTR_PTR_1126ce8e8;
    func_0x000107c610f4(PTR_PTR_1126ce8e8);
    func_0x000107c45ac8();
    func_0x000107c61174(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar4;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x000107c3eccc(uVar2,param_2,puVar1);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c61174(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10081fad8; end: 10081fb7b; -[_TtC25SCSearchHeaderButtonScope25SCSearchHeaderButtonScope initWithButtonItem:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081fad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f313b8;
  func_0x000107c61614(param_1 + _DAT_112f313b8,0);
  *(undefined8 *)(param_1 + _DAT_112f313b0) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10081fb7c; end: 10081fd0f; -[_TtC25SCSearchHeaderButtonScope33SCSearchHeaderButtonScopeServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10081fb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10008a7c8(&uStack_38,&uStack_40);
  FUN_100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10081fd10; end: 10081fd17;  */

void FUN_10081fd10(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10081fd84();
  func_0x000107c610f8();
  FUN_10081fda4(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 10081fd18; end: 10081fd83;  */

void FUN_10081fd18(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10081fd84();
  func_0x000107c610f8();
  FUN_10081fda4(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 10081fd84; end: 10081fda3;  */

void FUN_10081fd84(void)

{
  func_0x000107c61168(&PTR_PTR_112849e40);
  return;
}



/* Entry: 10081fda4; end: 10082001f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10081fda4(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [24];
  long alStack_80 [3];
  long lStack_68;
  
  func_0x000107c614f0();
  *(long *)(unaff_x20 + _DAT_112ea21f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea2200) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c61154(puVar1,puVar4);
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_100820020();
  lVar3 = _DAT_112f313b8;
  func_0x000107c61428(param_1 + _DAT_112f313b8,auStack_98,0,0);
  lVar3 = param_1 + lVar3;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61174(puVar2);
    plVar7 = (long *)0x0;
  }
  else {
    lVar5 = lVar3;
    func_0x000107c614f0();
    alStack_80[0] = lVar3;
    lStack_68 = lVar5;
    func_0x000107c61174(puVar2);
    plVar7 = alStack_80;
    func_0x000107c605b0(plVar7,lVar5);
    FUN_100183ab8(alStack_80);
  }
  puVar4 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(plVar7);
  lVar5 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a6ff0);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170();
  func_0x0001008201d8();
  func_0x000107c61180();
  func_0x000107c520fc(puVar4);
  func_0x000107c61170();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112f313b0);
  FUN_1008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x20) = puVar4;
  uVar6 = 0;
  func_0x00010082024c(0);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar4);
  lVar3 = lVar5;
  func_0x000107c5fc48(lVar5,uVar6);
  func_0x000107c61574(lVar5);
  func_0x000107c5707c(uVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar3);
  return puVar1;
}



/* Entry: 100820020; end: 1008201cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100820020(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea2200) + _DAT_113081210);
  func_0x000107c5dd3c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c44fac();
    func_0x000107c615e8(lVar2);
    if (lVar1 == 2) {
      func_0x000107c61168(PTR_PTR_1126b0c40);
      func_0x000107c45110(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      return;
    }
    if (lVar1 == 1) {
      func_0x000107c61168(PTR_PTR_1126b0c40);
      func_0x000107c45110(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      return;
    }
    if (lVar1 != 0) {
      uVar3 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010f0a7050);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c450cc();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (puVar4 == (undefined *)0x0) {
        return;
      }
      func_0x000107c45154(puVar4);
      goto LAB_1008201a8;
    }
  }
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0a7050);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  func_0x000107c45154(puVar4);
LAB_1008201a8:
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1008201d0; end: 1008201ef; -[SCCameraVerticalToolbarConfigurationImpl iconStyle] */

undefined8 FUN_1008201d0(void)

{
  return 2;
}



/* Entry: 1008201f0; end: 1008202bb;  */

void FUN_1008201f0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x00010082024c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto FUN_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d582d0;
  plVar5 = (long *)&UNK_10d91e9d0;
FUN_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1008202bc; end: 1008202c3; -[SIGHeaderButtonItem setApplyDefaultShadow:] */

void FUN_1008202bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1008202c4; end: 100820363; -[SIGHeaderButtonGroup initWithButtonItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1008202c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270b520;
  uStack_30 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794a4c);
    *(undefined **)((long)puVar1 + (long)_DAT_112794a4c) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3c52c(puVar1);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100820364; end: 1008204bb; -[SIGHeaderButtonGroup _setButtonItems:] */

/* WARNING: Possible PIC construction at 0x0001008203dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100820440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100820468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010082048c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100820408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008203f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010082040c) */
/* WARNING: Removing unreachable block (ram,0x000100820490) */
/* WARNING: Removing unreachable block (ram,0x00010082046c) */
/* WARNING: Removing unreachable block (ram,0x000100820444) */
/* WARNING: Removing unreachable block (ram,0x0001008203e0) */
/* WARNING: Removing unreachable block (ram,0x000100820414) */
/* WARNING: Removing unreachable block (ram,0x0001008203ec) */
/* WARNING: Removing unreachable block (ram,0x0001008203f8) */
/* WARNING: Removing unreachable block (ram,0x0001008204a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100820364(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = *(long *)(param_1 + _DAT_112794a58);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(param_3);
  if (lVar3 != param_3) {
    lVar1 = lVar3;
    func_0x000107c40808();
    lVar2 = param_3;
    func_0x000107c40808();
    if (lVar1 == lVar2) {
      func_0x000107c49cf0(lVar3,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008204bc; end: 100820687; -[SIGHeaderButtonGroup _setTooltipPresenter:forButtonsItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008204bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + _DAT_112794a58);
  func_0x000107c61174(lVar6);
  lVar1 = lVar6;
  func_0x000107c4080c(lVar6,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          func_0x000107c61128(lVar6);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar10 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x000107c4e020();
        func_0x000107c61180();
        lVar3 = lVar2;
        func_0x000107c4080c();
        if (lVar3 != 0) {
          lVar7 = *plStack_1e0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != lVar7) {
                func_0x000107c61128(lVar2);
              }
              uVar8 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);
              lVar4 = param_1 + _DAT_112794a54;
              func_0x000107c61148(lVar4);
              func_0x000107c59ebc(uVar8,param_2,lVar4);
              func_0x000107c61170(lVar4);
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = lVar2;
            func_0x000107c4080c(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        func_0x000107c61170(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar1);
      lVar1 = lVar6;
      func_0x000107c4080c(lVar6,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  func_0x000107c60e78();
  return *(long *)(lVar6 + 0x38);
}



/* Entry: 100820688; end: 10082068f; -[SIGHeaderButtonItem options] */

undefined8 FUN_100820688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100820690; end: 1008206fb; -[SIGHeaderButtonOption setTooltipPresenter:] */

void FUN_100820690(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c611a0(param_1 + 0x70,param_3);
  func_0x000107c437dc(param_1);
  return;
}



/* Entry: 1008206fc; end: 100820877; -[SIGHeaderButtonGroup _buildButtonsForItems:] */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ******* FUN_1008206fc(undefined8 param_1,undefined8 param_2,undefined8 *******param_3)

{
  long lVar1;
  undefined8 *******pppppppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  int iVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******unaff_x22;
  undefined8 *******unaff_x23;
  undefined8 *******unaff_x24;
  undefined **unaff_x25;
  undefined8 *******pppppppuVar22;
  undefined8 *******unaff_x26;
  ulong uVar23;
  undefined8 *******unaff_x27;
  undefined8 *******unaff_x28;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined8 *******pppppppuStack_2e0;
  undefined *puStack_2d8;
  long lStack_250;
  undefined8 *******pppppppuStack_240;
  undefined8 *******pppppppuStack_238;
  undefined8 *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined8 *******pppppppuStack_220;
  undefined8 *******pppppppuStack_218;
  undefined8 *******pppppppuStack_210;
  undefined8 *******pppppppuStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 *******pppppppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 *******pppppppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 *******pppppppuStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  pppppppuVar22 = &ppppppuStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  pppppppuVar2 = (undefined8 *******)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c40808(param_3);
  func_0x000107c3e170();
  func_0x000107c61180();
  uStack_128 = 0;
  ppppppuStack_130 = (undefined8 ******)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  pppppppuVar24 = param_3;
  func_0x000107c4080c();
  if (pppppppuVar24 != (undefined8 *******)0x0) {
    unaff_x24 = (undefined8 *******)*puStack_120;
    unaff_x25 = &PTR_PTR_1126c5000;
    do {
      unaff_x26 = (undefined8 *******)0x0;
      do {
        if ((undefined8 *******)*puStack_120 != unaff_x24) {
          func_0x000107c61128(param_3);
        }
        unaff_x23 = (undefined8 *******)PTR_PTR_1126c5140;
        func_0x000107c610f4();
        func_0x000107c46fb8();
        func_0x000107c5a050();
        func_0x000107c3d89c(param_1);
        func_0x000107c3d798(pppppppuVar2);
        func_0x000107c61170(unaff_x23);
        unaff_x26 = (undefined8 *******)((long)unaff_x26 + 1);
      } while (pppppppuVar24 != unaff_x26);
      pppppppuVar24 = param_3;
      pppppppuVar22 = &ppppppuStack_130;
      func_0x000107c4080c();
      unaff_x22 = (undefined8 *******)0x0;
    } while (pppppppuVar24 != (undefined8 *******)0x0);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppppuVar2);
    return pppppppuVar2;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_100820878;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar18 = pppppppuVar22;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c61174(pppppppuVar22);
  puStack_1b8 = PTR_PTR_11270b510;
  pppppppuVar24 = &pppppppuStack_1c0;
  uVar25 = 0;
  pppppppuStack_1c0 = param_3;
  func_0x000107c61154(0,0,0x4044000000000000,0x4044000000000000,pppppppuVar24,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppppuVar24 != (undefined8 *******)0x0) {
    pppppppuVar2 = (undefined8 *******)PTR_PTR_1126e1790;
    func_0x000107c610f4();
    func_0x000107c46fb8();
    uVar3 = *(undefined8 *)((long)pppppppuVar24 + (long)_DAT_112794a08);
    *(undefined8 ********)((long)pppppppuVar24 + (long)_DAT_112794a08) = pppppppuVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(pppppppuVar2);
    func_0x000107c5a050(pppppppuVar2);
    func_0x000107c3d89c(pppppppuVar24);
    unaff_x24 = pppppppuVar2;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppppppuVar18 = pppppppuVar24;
    pppppppuStack_1d0 = unaff_x24;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppppppuStack_1d8 = pppppppuVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x25 = (undefined **)pppppppuVar2;
    pppppppuStack_1b0 = unaff_x24;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x26 = pppppppuVar24;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x27 = (undefined8 *******)unaff_x25;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x28 = pppppppuVar2;
    pppppppuStack_1a8 = unaff_x27;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x22 = pppppppuVar24;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x23 = unaff_x28;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pppppppuStack_1a0 = unaff_x23;
    func_0x000107c3e17c();
    func_0x000107c61180();
    pppppppuStack_1c8 = pppppppuVar22;
    lVar20 = (long)_DAT_112794a0c;
    uVar3 = *(undefined8 *)((long)pppppppuVar24 + lVar20);
    *(undefined **)((long)pppppppuVar24 + lVar20) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(unaff_x23);
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x28);
    func_0x000107c61170(unaff_x27);
    func_0x000107c61170(unaff_x26);
    func_0x000107c61170(unaff_x25);
    func_0x000107c61170(unaff_x24);
    func_0x000107c61170(pppppppuStack_1d8);
    func_0x000107c61170(pppppppuStack_1d0);
    pppppppuVar22 = pppppppuStack_1c8;
    pppppppuVar18 = *(undefined8 ********)((long)pppppppuVar24 + lVar20);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c61170(pppppppuVar2);
  }
  pppppppuVar5 = pppppppuVar22;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pppppppuVar24;
  }
  func_0x000107c60e78();
  pcStack_1e8 = FUN_100820af8;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_240 = unaff_x28;
  pppppppuStack_238 = unaff_x27;
  pppppppuStack_230 = unaff_x26;
  pppppppuStack_228 = (undefined8 *******)unaff_x25;
  pppppppuStack_220 = unaff_x24;
  pppppppuStack_218 = unaff_x23;
  pppppppuStack_210 = unaff_x22;
  pppppppuStack_208 = pppppppuVar2;
  pppppppuStack_200 = pppppppuVar24;
  pppppppuStack_1f8 = pppppppuVar22;
  ppuStack_1f0 = &puStack_140;
  func_0x000107c61174(pppppppuVar18);
  FUN_100821148(pppppppuVar18,0);
  puStack_2d8 = PTR_PTR_11270b528;
  pppppppuVar2 = &pppppppuStack_2e0;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  pppppppuStack_2e0 = pppppppuVar5;
  func_0x000107c61154(0,0,0x4044000000000000,uVar25);
  iVar17 = (int)puVar4;
  if (pppppppuVar2 != (undefined8 *******)0x0) {
    lVar20 = (long)_DAT_112794a90;
    func_0x000107c61174(pppppppuVar18);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + lVar20);
    *(undefined8 ********)((long)pppppppuVar2 + lVar20) = pppppppuVar18;
    func_0x000107c61170(uVar25);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    pppppppuVar22 = pppppppuVar18;
    func_0x000107c4e020(pppppppuVar18);
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c3e170();
    func_0x000107c61180();
    func_0x000107c61170(pppppppuVar22);
    pppppppuVar9 = pppppppuVar18;
    func_0x000107c4e020();
    func_0x000107c61180();
    pppppppuVar5 = pppppppuVar9;
    func_0x000107c4080c();
    lVar20 = lRam0000000000000000;
    iVar17 = (int)puVar4;
    pppppppuVar22 = (undefined8 *******)0x0;
    pppppppuVar24 = (undefined8 *******)0x0;
    while (pppppppuVar5 != (undefined8 *******)0x0) {
      pppppppuVar21 = (undefined8 *******)0x0;
      pppppppuVar19 = pppppppuVar24;
      do {
        if (lRam0000000000000000 != lVar20) {
          func_0x000107c61128(pppppppuVar9);
        }
        uVar23 = *(ulong *)((long)pppppppuVar21 * 8);
        iVar17 = (int)uVar23;
        pppppppuVar24 = (undefined8 *******)PTR_PTR_1126e1798;
        func_0x000107c610f4();
        pppppppuVar10 = pppppppuVar18;
        func_0x000107c4e020();
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        func_0x000107c43638();
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar18;
        func_0x000107c4e020();
        func_0x000107c61180();
        pppppppuVar13 = pppppppuVar12;
        func_0x000107c4aa28();
        func_0x000107c61180();
        func_0x000107c5c224(pppppppuVar18);
        func_0x000107c5c8b8(pppppppuVar18);
        pppppppuVar14 = pppppppuVar18;
        func_0x000107c41098(pppppppuVar18);
        func_0x000107c61180();
        pppppppuVar15 = pppppppuVar18;
        func_0x000107c4116c();
        func_0x000107c61180();
        pppppppuVar16 = pppppppuVar18;
        func_0x000107c41170();
        func_0x000107c61180();
        func_0x000107c3e014();
        func_0x000107c47c8c();
        func_0x000107c61170(pppppppuVar16);
        func_0x000107c61170(pppppppuVar15);
        func_0x000107c61170(pppppppuVar14);
        func_0x000107c61170(pppppppuVar13);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        func_0x000107c5a050(pppppppuVar24);
        func_0x000107c49f2c();
        if (iVar17 != 0) {
          func_0x000107c526c0(0,pppppppuVar24);
        }
        func_0x000107c3d89c(pppppppuVar2);
        func_0x000107c3d798(puVar8);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c4acb0(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar2;
        func_0x000107c4acb0(pppppppuVar2);
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar10;
        func_0x000107c40280(pppppppuVar10);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5ce8c(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar2;
        func_0x000107c5ce8c(pppppppuVar2);
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar10;
        func_0x000107c40280(pppppppuVar10);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5cbe4(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        if (pppppppuVar22 == (undefined8 *******)0x0) {
          pppppppuVar12 = pppppppuVar2;
          func_0x000107c5cbe4(pppppppuVar2);
          func_0x000107c61180();
          func_0x000107c40280(pppppppuVar10);
          func_0x000107c61180();
        }
        else {
          pppppppuVar12 = pppppppuVar22;
          func_0x000107c3ec1c(pppppppuVar22);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,pppppppuVar10);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar6);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5cbe4(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        if (pppppppuVar19 == (undefined8 *******)0x0) {
          pppppppuVar12 = pppppppuVar2;
          func_0x000107c5cbe4(pppppppuVar2);
          func_0x000107c61180();
          func_0x000107c40280(pppppppuVar10);
          func_0x000107c61180();
        }
        else {
          pppppppuVar12 = pppppppuVar19;
          func_0x000107c3ec1c(pppppppuVar19);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,pppppppuVar10);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar7);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar10);
        func_0x000107c61174(pppppppuVar24);
        func_0x000107c61170(pppppppuVar19);
        func_0x000107c49f2c();
        if ((uVar23 & 1) == 0) {
          func_0x000107c61174(pppppppuVar24);
          func_0x000107c61170(pppppppuVar22);
          pppppppuVar22 = pppppppuVar24;
        }
        func_0x000107c61170(pppppppuVar24);
        pppppppuVar21 = (undefined8 *******)((long)pppppppuVar21 + 1);
        pppppppuVar19 = pppppppuVar24;
      } while (pppppppuVar5 != pppppppuVar21);
      pppppppuVar5 = pppppppuVar9;
      func_0x000107c4080c();
      iVar17 = (int)puVar4;
    }
    func_0x000107c61170(pppppppuVar9);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a94);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a94) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar25);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a98);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a98) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar25);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a9c);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a9c) = puVar8;
    func_0x000107c61174(puVar8);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(pppppppuVar22);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(pppppppuVar24);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return pppppppuVar2;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  pppppppuVar2 = pppppppuVar18;
  if (iVar17 == 0) {
    func_0x000107c4e020();
    func_0x000107c61180();
    pppppppuVar22 = pppppppuVar2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (pppppppuVar22 != (undefined8 *******)0x0) {
      pppppppuVar24 = (undefined8 *******)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(pppppppuVar2);
        }
        func_0x000107c49f2c();
        pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + 1);
      } while (pppppppuVar22 != pppppppuVar24);
      pppppppuVar22 = pppppppuVar2;
      func_0x000107c4080c();
    }
  }
  else {
    func_0x000107c4e020();
    func_0x000107c61180();
    func_0x000107c40808();
  }
  func_0x000107c61170(pppppppuVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return pppppppuVar18;
  }
  func_0x000107c60e78();
  return (undefined8 *******)(ulong)*(byte *)((long)pppppppuVar18 + 0x2b);
}



/* Entry: 100820878; end: 100820af7; -[SIGHeaderButton initWithItem:] */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
FUN_100820878(undefined8 ******param_1,undefined8 param_2,undefined8 *******param_3)

{
  long lVar1;
  undefined8 *******pppppppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  int iVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  undefined *unaff_x21;
  undefined8 *******unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 *******pppppppuVar22;
  undefined8 *******unaff_x26;
  ulong uVar23;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_120;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 *******pppppppuStack_a8;
  undefined *puStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar18 = param_3;
  func_0x000107c61174(param_3);
  puStack_88 = PTR_PTR_11270b510;
  pppppppuVar2 = &ppppppuStack_90;
  uVar25 = 0;
  ppppppuStack_90 = param_1;
  func_0x000107c61154(0,0,0x4044000000000000,0x4044000000000000,pppppppuVar2,
                      PTR_s_initWithFrame__1125e2948);
  if (pppppppuVar2 != (undefined8 *******)0x0) {
    unaff_x21 = PTR_PTR_1126e1790;
    func_0x000107c610f4();
    func_0x000107c46fb8();
    uVar3 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a08);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a08) = unaff_x21;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(unaff_x21);
    func_0x000107c5a050(unaff_x21);
    func_0x000107c3d89c(pppppppuVar2);
    unaff_x24 = unaff_x21;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppppppuVar18 = pppppppuVar2;
    puStack_a0 = unaff_x24;
    func_0x000107c4ace0();
    func_0x000107c61180();
    pppppppuStack_a8 = pppppppuVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x25 = unaff_x21;
    puStack_80 = unaff_x24;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x26 = pppppppuVar2;
    func_0x000107c50890();
    func_0x000107c61180();
    unaff_x27 = unaff_x25;
    func_0x000107c40280();
    func_0x000107c61180();
    unaff_x28 = unaff_x21;
    puStack_78 = unaff_x27;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x22 = pppppppuVar2;
    func_0x000107c3f764();
    func_0x000107c61180();
    unaff_x23 = unaff_x28;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x23;
    func_0x000107c3e17c();
    func_0x000107c61180();
    pppppppuStack_98 = param_3;
    lVar20 = (long)_DAT_112794a0c;
    uVar3 = *(undefined8 *)((long)pppppppuVar2 + lVar20);
    *(undefined **)((long)pppppppuVar2 + lVar20) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(unaff_x23);
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(unaff_x28);
    func_0x000107c61170(unaff_x27);
    func_0x000107c61170(unaff_x26);
    func_0x000107c61170(unaff_x25);
    func_0x000107c61170(unaff_x24);
    func_0x000107c61170(pppppppuStack_a8);
    func_0x000107c61170(puStack_a0);
    param_3 = pppppppuStack_98;
    pppppppuVar18 = *(undefined8 ********)((long)pppppppuVar2 + lVar20);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c61170(unaff_x21);
  }
  pppppppuVar22 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppppppuVar2;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_100820af8;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = unaff_x28;
  puStack_108 = unaff_x27;
  pppppppuStack_100 = unaff_x26;
  puStack_f8 = unaff_x25;
  puStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  pppppppuStack_e0 = unaff_x22;
  puStack_d8 = unaff_x21;
  pppppppuStack_d0 = pppppppuVar2;
  pppppppuStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(pppppppuVar18);
  FUN_100821148(pppppppuVar18,0);
  puStack_1a8 = PTR_PTR_11270b528;
  pppppppuVar2 = &pppppppuStack_1b0;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  pppppppuStack_1b0 = pppppppuVar22;
  func_0x000107c61154(0,0,0x4044000000000000,uVar25);
  iVar17 = (int)puVar4;
  if (pppppppuVar2 != (undefined8 *******)0x0) {
    lVar20 = (long)_DAT_112794a90;
    func_0x000107c61174(pppppppuVar18);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + lVar20);
    *(undefined8 ********)((long)pppppppuVar2 + lVar20) = pppppppuVar18;
    func_0x000107c61170(uVar25);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    pppppppuVar22 = pppppppuVar18;
    func_0x000107c4e020(pppppppuVar18);
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c3e170();
    func_0x000107c61180();
    func_0x000107c61170(pppppppuVar22);
    pppppppuVar8 = pppppppuVar18;
    func_0x000107c4e020();
    func_0x000107c61180();
    pppppppuVar9 = pppppppuVar8;
    func_0x000107c4080c();
    lVar20 = lRam0000000000000000;
    iVar17 = (int)puVar4;
    pppppppuVar22 = (undefined8 *******)0x0;
    pppppppuVar24 = (undefined8 *******)0x0;
    while (pppppppuVar9 != (undefined8 *******)0x0) {
      pppppppuVar21 = (undefined8 *******)0x0;
      pppppppuVar19 = pppppppuVar24;
      do {
        if (lRam0000000000000000 != lVar20) {
          func_0x000107c61128(pppppppuVar8);
        }
        uVar23 = *(ulong *)((long)pppppppuVar21 * 8);
        iVar17 = (int)uVar23;
        pppppppuVar24 = (undefined8 *******)PTR_PTR_1126e1798;
        func_0x000107c610f4();
        pppppppuVar10 = pppppppuVar18;
        func_0x000107c4e020();
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        func_0x000107c43638();
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar18;
        func_0x000107c4e020();
        func_0x000107c61180();
        pppppppuVar13 = pppppppuVar12;
        func_0x000107c4aa28();
        func_0x000107c61180();
        func_0x000107c5c224(pppppppuVar18);
        func_0x000107c5c8b8(pppppppuVar18);
        pppppppuVar14 = pppppppuVar18;
        func_0x000107c41098(pppppppuVar18);
        func_0x000107c61180();
        pppppppuVar15 = pppppppuVar18;
        func_0x000107c4116c();
        func_0x000107c61180();
        pppppppuVar16 = pppppppuVar18;
        func_0x000107c41170();
        func_0x000107c61180();
        func_0x000107c3e014();
        func_0x000107c47c8c();
        func_0x000107c61170(pppppppuVar16);
        func_0x000107c61170(pppppppuVar15);
        func_0x000107c61170(pppppppuVar14);
        func_0x000107c61170(pppppppuVar13);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        func_0x000107c5a050(pppppppuVar24);
        func_0x000107c49f2c();
        if (iVar17 != 0) {
          func_0x000107c526c0(0,pppppppuVar24);
        }
        func_0x000107c3d89c(pppppppuVar2);
        func_0x000107c3d798(puVar7);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c4acb0(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar2;
        func_0x000107c4acb0(pppppppuVar2);
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar10;
        func_0x000107c40280(pppppppuVar10);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5ce8c(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar2;
        func_0x000107c5ce8c(pppppppuVar2);
        func_0x000107c61180();
        pppppppuVar12 = pppppppuVar10;
        func_0x000107c40280(pppppppuVar10);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5cbe4(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        if (pppppppuVar22 == (undefined8 *******)0x0) {
          pppppppuVar12 = pppppppuVar2;
          func_0x000107c5cbe4(pppppppuVar2);
          func_0x000107c61180();
          func_0x000107c40280(pppppppuVar10);
          func_0x000107c61180();
        }
        else {
          pppppppuVar12 = pppppppuVar22;
          func_0x000107c3ec1c(pppppppuVar22);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,pppppppuVar10);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar5);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar10);
        pppppppuVar10 = pppppppuVar24;
        func_0x000107c5cbe4(pppppppuVar24);
        func_0x000107c61180();
        pppppppuVar11 = pppppppuVar10;
        if (pppppppuVar19 == (undefined8 *******)0x0) {
          pppppppuVar12 = pppppppuVar2;
          func_0x000107c5cbe4(pppppppuVar2);
          func_0x000107c61180();
          func_0x000107c40280(pppppppuVar10);
          func_0x000107c61180();
        }
        else {
          pppppppuVar12 = pppppppuVar19;
          func_0x000107c3ec1c(pppppppuVar19);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,pppppppuVar10);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar6);
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170(pppppppuVar12);
        func_0x000107c61170(pppppppuVar10);
        func_0x000107c61174(pppppppuVar24);
        func_0x000107c61170(pppppppuVar19);
        func_0x000107c49f2c();
        if ((uVar23 & 1) == 0) {
          func_0x000107c61174(pppppppuVar24);
          func_0x000107c61170(pppppppuVar22);
          pppppppuVar22 = pppppppuVar24;
        }
        func_0x000107c61170(pppppppuVar24);
        pppppppuVar21 = (undefined8 *******)((long)pppppppuVar21 + 1);
        pppppppuVar19 = pppppppuVar24;
      } while (pppppppuVar9 != pppppppuVar21);
      pppppppuVar9 = pppppppuVar8;
      func_0x000107c4080c();
      iVar17 = (int)puVar4;
    }
    func_0x000107c61170(pppppppuVar8);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a94);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a94) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar25);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a98);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a98) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar25);
    uVar25 = *(undefined8 *)((long)pppppppuVar2 + (long)_DAT_112794a9c);
    *(undefined **)((long)pppppppuVar2 + (long)_DAT_112794a9c) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(pppppppuVar22);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(pppppppuVar24);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return pppppppuVar2;
  }
  func_0x000107c60e78();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  pppppppuVar2 = pppppppuVar18;
  if (iVar17 == 0) {
    func_0x000107c4e020();
    func_0x000107c61180();
    pppppppuVar22 = pppppppuVar2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (pppppppuVar22 != (undefined8 *******)0x0) {
      pppppppuVar24 = (undefined8 *******)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(pppppppuVar2);
        }
        func_0x000107c49f2c();
        pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + 1);
      } while (pppppppuVar22 != pppppppuVar24);
      pppppppuVar22 = pppppppuVar2;
      func_0x000107c4080c();
    }
  }
  else {
    func_0x000107c4e020();
    func_0x000107c61180();
    func_0x000107c40808();
  }
  func_0x000107c61170(pppppppuVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return pppppppuVar18;
  }
  func_0x000107c60e78();
  return (undefined8 *******)(ulong)*(byte *)((long)pppppppuVar18 + 0x2b);
}



/* Entry: 100820af8; end: 100821147; -[SIGHeaderButtonItemView initWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100820af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  FUN_100821148(param_4,0);
  puStack_f8 = PTR_PTR_11270b528;
  puVar2 = &uStack_100;
  puVar17 = PTR_s_initWithFrame__1125e2948;
  uStack_100 = param_2;
  func_0x000107c61154(0,0,0x4044000000000000,param_1);
  iVar16 = (int)puVar17;
  if (puVar2 != (undefined8 *)0x0) {
    lVar19 = (long)_DAT_112794a90;
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar19);
    *(undefined8 **)((long)puVar2 + lVar19) = param_4;
    func_0x000107c61170(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar21 = param_4;
    func_0x000107c4e020(param_4);
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c3e170();
    func_0x000107c61180();
    func_0x000107c61170(puVar21);
    puVar7 = param_4;
    func_0x000107c4e020();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c4080c();
    lVar19 = lRam0000000000000000;
    iVar16 = (int)puVar17;
    puVar21 = (undefined8 *)0x0;
    puVar23 = (undefined8 *)0x0;
    while (puVar8 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      puVar18 = puVar23;
      do {
        if (lRam0000000000000000 != lVar19) {
          func_0x000107c61128(puVar7);
        }
        uVar22 = *(ulong *)((long)puVar20 * 8);
        iVar16 = (int)uVar22;
        puVar23 = (undefined8 *)PTR_PTR_1126e1798;
        func_0x000107c610f4();
        puVar9 = param_4;
        func_0x000107c4e020();
        func_0x000107c61180();
        puVar10 = puVar9;
        func_0x000107c43638();
        func_0x000107c61180();
        puVar11 = param_4;
        func_0x000107c4e020();
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c4aa28();
        func_0x000107c61180();
        func_0x000107c5c224(param_4);
        func_0x000107c5c8b8(param_4);
        puVar13 = param_4;
        func_0x000107c41098(param_4);
        func_0x000107c61180();
        puVar14 = param_4;
        func_0x000107c4116c();
        func_0x000107c61180();
        puVar15 = param_4;
        func_0x000107c41170();
        func_0x000107c61180();
        func_0x000107c3e014();
        func_0x000107c47c8c();
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar9);
        func_0x000107c5a050(puVar23);
        func_0x000107c49f2c();
        if (iVar16 != 0) {
          func_0x000107c526c0(0,puVar23);
        }
        func_0x000107c3d89c(puVar2);
        func_0x000107c3d798(puVar6);
        puVar9 = puVar23;
        func_0x000107c4acb0(puVar23);
        func_0x000107c61180();
        puVar10 = puVar2;
        func_0x000107c4acb0(puVar2);
        func_0x000107c61180();
        puVar11 = puVar9;
        func_0x000107c40280(puVar9);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar9);
        puVar9 = puVar23;
        func_0x000107c5ce8c(puVar23);
        func_0x000107c61180();
        puVar10 = puVar2;
        func_0x000107c5ce8c(puVar2);
        func_0x000107c61180();
        puVar11 = puVar9;
        func_0x000107c40280(puVar9);
        func_0x000107c61180();
        func_0x000107c521e8();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar9);
        puVar9 = puVar23;
        func_0x000107c5cbe4(puVar23);
        func_0x000107c61180();
        puVar10 = puVar9;
        if (puVar21 == (undefined8 *)0x0) {
          puVar11 = puVar2;
          func_0x000107c5cbe4(puVar2);
          func_0x000107c61180();
          func_0x000107c40280(puVar9);
          func_0x000107c61180();
        }
        else {
          puVar11 = puVar21;
          func_0x000107c3ec1c(puVar21);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,puVar9);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar4);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar9);
        puVar9 = puVar23;
        func_0x000107c5cbe4(puVar23);
        func_0x000107c61180();
        puVar10 = puVar9;
        if (puVar18 == (undefined8 *)0x0) {
          puVar11 = puVar2;
          func_0x000107c5cbe4(puVar2);
          func_0x000107c61180();
          func_0x000107c40280(puVar9);
          func_0x000107c61180();
        }
        else {
          puVar11 = puVar18;
          func_0x000107c3ec1c(puVar18);
          func_0x000107c61180();
          func_0x000107c40284(0x3ff0000000000000,puVar9);
          func_0x000107c61180();
        }
        func_0x000107c3d798(puVar5);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar9);
        func_0x000107c61174(puVar23);
        func_0x000107c61170(puVar18);
        func_0x000107c49f2c();
        if ((uVar22 & 1) == 0) {
          func_0x000107c61174(puVar23);
          func_0x000107c61170(puVar21);
          puVar21 = puVar23;
        }
        func_0x000107c61170(puVar23);
        puVar20 = (undefined8 *)((long)puVar20 + 1);
        puVar18 = puVar23;
      } while (puVar8 != puVar20);
      puVar8 = puVar7;
      func_0x000107c4080c();
      iVar16 = (int)puVar17;
    }
    func_0x000107c61170(puVar7);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794a94);
    *(undefined **)((long)puVar2 + (long)_DAT_112794a94) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794a98);
    *(undefined **)((long)puVar2 + (long)_DAT_112794a98) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112794a9c);
    *(undefined **)((long)puVar2 + (long)_DAT_112794a9c) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar23);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar2 = param_4;
  if (iVar16 == 0) {
    func_0x000107c4e020();
    func_0x000107c61180();
    puVar21 = puVar2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (puVar21 != (undefined8 *)0x0) {
      puVar23 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(puVar2);
        }
        func_0x000107c49f2c();
        puVar23 = (undefined8 *)((long)puVar23 + 1);
      } while (puVar21 != puVar23);
      puVar21 = puVar2;
      func_0x000107c4080c();
    }
  }
  else {
    func_0x000107c4e020();
    func_0x000107c61180();
    func_0x000107c40808();
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return param_4;
  }
  func_0x000107c60e78();
  return (undefined8 *)(ulong)*(byte *)((long)param_4 + 0x2b);
}



/* Entry: 100821148; end: 1008212c7;  */

ulong FUN_100821148(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  uVar2 = param_1;
  if (param_2 == 0) {
    func_0x000107c4e020();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(uVar2);
        }
        func_0x000107c49f2c();
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar3 = uVar2;
      func_0x000107c4080c();
    }
  }
  else {
    func_0x000107c4e020();
    func_0x000107c61180();
    func_0x000107c40808();
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(param_1 + 0x2b);
}



/* Entry: 1008212c8; end: 1008212cf; -[SIGHeaderButtonOption isInitiallyHidden] */

undefined1 FUN_1008212c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2b);
}



/* Entry: 1008212d0; end: 10082135f; -[SCProfileHeaderButtonEntryPoint _updateProfileButtonWithIcon:] */

void FUN_1008212d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_100c66fe8;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    func_0x000107c61174(param_3);
    lStack_28 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_50);
    func_0x000107c61170(lStack_28);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100821360; end: 100821367; -[SIGHeaderButtonItem style] */

undefined8 FUN_100821360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100821368; end: 10082136f; -[SIGHeaderButtonItem theme] */

undefined8 FUN_100821368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100821370; end: 100821377; -[SIGHeaderButtonItem customBackgroundColor] */

undefined8 FUN_100821370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100821378; end: 10082137f; -[SIGHeaderButtonItem customTintColor] */

undefined8 FUN_100821378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100821380; end: 100821387; -[SIGHeaderButtonItem customTintColorWhenBadged] */

undefined8 FUN_100821380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100821388; end: 10082138f; -[SIGHeaderButtonItem applyDefaultShadow] */

undefined1 FUN_100821388(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100821390; end: 100822a9b; -[SIGHeaderButtonOptionView initWithOption:firstOption:lastOption:style:theme:customBackgroundColor:customTintColor:customTintColorWhenBadged:applyDefaultShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100821390(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined8 *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined8 *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined8 *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined8 *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined8 *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined8 *puVar69;
  undefined *puVar70;
  undefined *puVar71;
  undefined8 *puVar72;
  undefined *puVar73;
  undefined *puVar74;
  undefined8 *puVar75;
  undefined *puVar76;
  undefined *puVar77;
  undefined8 *puVar78;
  undefined *puVar79;
  undefined *puVar80;
  undefined *puVar81;
  undefined *puVar82;
  undefined *puVar83;
  undefined *puVar84;
  undefined *puVar85;
  undefined *puVar86;
  undefined *puVar87;
  undefined *puVar88;
  undefined *puVar89;
  undefined *puVar90;
  undefined *puVar91;
  undefined *puVar92;
  undefined *puVar93;
  undefined *puVar94;
  undefined *puVar95;
  undefined8 *puVar96;
  undefined8 *puVar97;
  undefined8 *puVar98;
  long lVar99;
  long lVar100;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar8 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_188 = PTR_PTR_11270b538;
  puVar1 = &uStack_190;
  puVar98 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_190 = param_1;
  func_0x000107c61154(0,0,0x4044000000000000,0x4044000000000000);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794b08) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794b0c) = param_6;
    *(char *)((long)puVar1 + (long)_DAT_112794b10) = (char)param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794b14) = param_5;
    lVar100 = (long)_DAT_112794b18;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar100);
    *(undefined8 *)((long)puVar1 + lVar100) = param_9;
    func_0x000107c61170(uVar2);
    lVar100 = (long)_DAT_112794b1c;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar100);
    *(undefined8 *)((long)puVar1 + lVar100) = param_10;
    func_0x000107c61170(uVar2);
    ((undefined8 *)((long)puVar1 + (long)_DAT_112794b20))[1] = 0x4044000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794b20) = 0x4044000000000000;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    lVar100 = (long)_DAT_112794b24;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar100);
    *(undefined **)((long)puVar1 + lVar100) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b28);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    lVar99 = (long)_DAT_112794b2c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar99);
    *(undefined **)((long)puVar1 + lVar99) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b30);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469a4();
    func_0x000107c534b0();
    func_0x000107c5a050(puVar4);
    puVar3 = PTR_PTR_1126aea58;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b34);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b34) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c5a050(puVar3);
    puVar5 = PTR_PTR_1126aea58;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b38);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b38) = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(puVar5);
    func_0x000107c5a050(puVar5);
    func_0x000107c550d8(puVar5);
    func_0x000107c526c0(0,puVar5);
    puVar6 = PTR_PTR_1126e17a8;
    func_0x000107c610f4();
    func_0x000107c453f8();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b3c);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b3c) = puVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(puVar6);
    func_0x000107c5a050(puVar6);
    puVar7 = PTR_PTR_1126e17a8;
    func_0x000107c610f4();
    func_0x000107c453f8();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b40);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b40) = puVar7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(puVar7);
    func_0x000107c5a050(puVar7);
    func_0x000107c550d8(puVar7);
    func_0x000107c526c0(0,puVar7);
    puVar8 = param_3;
    func_0x000107c5c82c();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c4adac();
    uVar2 = 0x4044000000000000;
    if (puVar9 != (undefined *)0x0) {
      uVar2 = 0x4038000000000000;
    }
    func_0x000107c61170(puVar8);
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f4();
    func_0x000107c469a4(0,0,uVar2,0x4044000000000000);
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b44);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b44) = puVar9;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar9);
    func_0x000107c5a050(puVar9);
    func_0x000107c53840(puVar9);
    puVar11 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f4();
    func_0x000107c469a4(0,0,uVar2,0x4044000000000000);
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b48);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b48) = puVar11;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar11);
    func_0x000107c5a050(puVar11);
    func_0x000107c53840(puVar11);
    func_0x000107c550d8(puVar11);
    func_0x000107c526c0(0,puVar11);
    puVar12 = PTR_PTR_1126aeff0;
    func_0x000107c610f4();
    func_0x000107c45eac();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b4c);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b4c) = puVar12;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar12);
    func_0x000107c5a050(puVar12);
    func_0x000107c550d8(puVar12);
    func_0x000107c526c0(0,puVar12);
    puVar13 = PTR_PTR_1126aeff0;
    func_0x000107c610f4();
    func_0x000107c45eac();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b50);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b50) = puVar13;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar13);
    func_0x000107c5a050(puVar13);
    func_0x000107c550d8(puVar13);
    func_0x000107c526c0(0,puVar13);
    puVar14 = PTR_PTR_1126c51b8;
    func_0x000107c610f4();
    puVar15 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c5c224();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar16 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c3fdb8();
    func_0x000107c5af88(puVar8);
    func_0x000107c61180();
    puVar17 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c5d888();
    func_0x000107c48b24(0x3ff0000000000000);
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b54);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b54) = puVar14;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar14);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c5a050(puVar14);
    func_0x000107c550d8(puVar14);
    func_0x000107c526c0(0,puVar14);
    puVar8 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    puVar15 = puVar8;
    func_0x000107c3cf00();
    func_0x000107c61180();
    func_0x000107c520f4(puVar14);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar8);
    puVar8 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    puVar15 = puVar8;
    func_0x000107c3cf04();
    func_0x000107c61180();
    func_0x000107c520fc(puVar14);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar15 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c5c838();
    func_0x000107c5af88(puVar8);
    func_0x000107c61180();
    func_0x000107c59c78(puVar14);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar15);
    puVar15 = PTR_PTR_1126c51b8;
    func_0x000107c610f4();
    puVar16 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c5c224();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar17 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c3fdb8();
    func_0x000107c5af88(puVar8);
    func_0x000107c61180();
    puVar18 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    func_0x000107c5d888();
    func_0x000107c48b24(0x3ff0000000000000);
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b58);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b58) = puVar15;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar15);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c5a050(puVar15);
    func_0x000107c550d8(puVar15);
    func_0x000107c526c0(0,puVar15);
    puVar8 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    puVar16 = puVar8;
    func_0x000107c3cf00();
    func_0x000107c61180();
    func_0x000107c520f4(puVar15);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar8);
    puVar8 = param_3;
    func_0x000107c3e614(param_3);
    func_0x000107c61180();
    puVar16 = puVar8;
    func_0x000107c3cf04();
    func_0x000107c61180();
    func_0x000107c520fc(puVar15);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar8);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar16 = param_3;
    func_0x000107c3e614();
    func_0x000107c61180();
    func_0x000107c5c838();
    func_0x000107c5af88(puVar8);
    func_0x000107c61180();
    func_0x000107c59c78(puVar15);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar16);
    puVar19 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f4();
    func_0x000107c469a4(0,0,0x4030000000000000,0x4030000000000000);
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b5c) = puVar19;
    func_0x000107c61170(uVar10);
    func_0x000107c61174(puVar19);
    func_0x000107c5a050(puVar19);
    func_0x000107c550d8(puVar19);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar4);
    func_0x000107c3d89c(puVar4);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3d89c(puVar1);
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar20 = puVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar21 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar22 = puVar20;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar23 = puVar4;
    puStack_160 = puVar22;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar24 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar25 = puVar23;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar26 = puVar4;
    puStack_158 = puVar25;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar27 = puVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar28 = puVar26;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar29 = puVar4;
    puStack_150 = puVar28;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar97 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar30 = puVar29;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar31 = puVar7;
    puStack_148 = puVar30;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar96 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar32 = puVar31;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar33 = puVar7;
    puStack_140 = puVar32;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar34 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar35 = puVar33;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar36 = puVar7;
    puStack_138 = puVar35;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar37 = puVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar38 = puVar36;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar39 = puVar7;
    puStack_130 = puVar38;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar40 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar41 = puVar39;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar42 = puVar6;
    puStack_128 = puVar41;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar43 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar44 = puVar42;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar45 = puVar6;
    puStack_120 = puVar44;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar46 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar47 = puVar45;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar48 = puVar6;
    puStack_118 = puVar47;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar49 = puVar1;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar50 = puVar48;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar51 = puVar6;
    puStack_110 = puVar50;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar52 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar53 = puVar51;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar54 = puVar9;
    puStack_108 = puVar53;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar55 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar56 = puVar54;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar57 = puVar9;
    puStack_100 = puVar56;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar58 = puVar57;
    func_0x000107c40290(0x4044000000000000);
    func_0x000107c61180();
    puVar59 = puVar9;
    puStack_f8 = puVar58;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar60 = puVar59;
    func_0x000107c40290(uVar2);
    func_0x000107c61180();
    puVar61 = puVar11;
    puStack_f0 = puVar60;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar62 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar63 = puVar61;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar64 = puVar11;
    puStack_e8 = puVar63;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar65 = puVar64;
    func_0x000107c40290(0x4044000000000000);
    func_0x000107c61180();
    puVar66 = puVar11;
    puStack_e0 = puVar65;
    func_0x000107c5e308();
    func_0x000107c61180();
    puVar67 = puVar66;
    func_0x000107c40290(uVar2);
    func_0x000107c61180();
    puVar68 = puVar12;
    puStack_d8 = puVar67;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar69 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar70 = puVar68;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar71 = puVar12;
    puStack_d0 = puVar70;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar72 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar73 = puVar71;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar74 = puVar13;
    puStack_c8 = puVar73;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar75 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar76 = puVar74;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar77 = puVar13;
    puStack_c0 = puVar76;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar78 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar79 = puVar77;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar80 = puVar14;
    puStack_b8 = puVar79;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar81 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar82 = puVar80;
    func_0x000107c40284(0xc008000000000000);
    func_0x000107c61180();
    puVar83 = puVar14;
    puStack_b0 = puVar82;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar84 = puVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar85 = puVar83;
    func_0x000107c40284(0x4008000000000000);
    func_0x000107c61180();
    puVar86 = puVar15;
    puStack_a8 = puVar85;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar87 = puVar11;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar88 = puVar86;
    func_0x000107c40284(0xc008000000000000);
    func_0x000107c61180();
    puVar89 = puVar15;
    puStack_a0 = puVar88;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar90 = puVar11;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar91 = puVar89;
    func_0x000107c40284(0x4008000000000000);
    func_0x000107c61180();
    puVar92 = puVar19;
    puStack_98 = puVar91;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar93 = puVar9;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar94 = puVar92;
    func_0x000107c40284(0x4008000000000000);
    func_0x000107c61180();
    puVar18 = puVar19;
    puStack_90 = puVar94;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar17 = puVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar16 = puVar18;
    func_0x000107c40284(0x4008000000000000);
    func_0x000107c61180();
    puVar95 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar16;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(puVar95);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar94);
    func_0x000107c61170(puVar93);
    func_0x000107c61170(puVar92);
    func_0x000107c61170(puVar91);
    func_0x000107c61170(puVar90);
    func_0x000107c61170(puVar89);
    func_0x000107c61170(puVar88);
    func_0x000107c61170(puVar87);
    func_0x000107c61170(puVar86);
    func_0x000107c61170(puVar85);
    func_0x000107c61170(puVar84);
    func_0x000107c61170(puVar83);
    func_0x000107c61170(puVar82);
    func_0x000107c61170(puVar81);
    func_0x000107c61170(puVar80);
    func_0x000107c61170(puVar79);
    func_0x000107c61170(puVar78);
    func_0x000107c61170(puVar77);
    func_0x000107c61170(puVar76);
    func_0x000107c61170(puVar75);
    func_0x000107c61170(puVar74);
    func_0x000107c61170(puVar73);
    func_0x000107c61170(puVar72);
    func_0x000107c61170(puVar71);
    func_0x000107c61170(puVar70);
    func_0x000107c61170(puVar69);
    func_0x000107c61170(puVar68);
    func_0x000107c61170(puVar67);
    func_0x000107c61170(puVar66);
    func_0x000107c61170(puVar65);
    func_0x000107c61170(puVar64);
    func_0x000107c61170(puVar63);
    func_0x000107c61170(puVar62);
    func_0x000107c61170(puVar61);
    func_0x000107c61170(puVar60);
    func_0x000107c61170(puVar59);
    func_0x000107c61170(puVar58);
    func_0x000107c61170(puVar57);
    func_0x000107c61170(puVar56);
    func_0x000107c61170(puVar55);
    func_0x000107c61170(puVar54);
    func_0x000107c61170(puVar53);
    func_0x000107c61170(puVar52);
    func_0x000107c61170(puVar51);
    func_0x000107c61170(puVar50);
    func_0x000107c61170(puVar49);
    func_0x000107c61170(puVar48);
    func_0x000107c61170(puVar47);
    func_0x000107c61170(puVar46);
    func_0x000107c61170(puVar45);
    func_0x000107c61170(puVar44);
    func_0x000107c61170(puVar43);
    func_0x000107c61170(puVar42);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(puVar40);
    func_0x000107c61170(puVar39);
    func_0x000107c61170(puVar38);
    func_0x000107c61170(puVar37);
    func_0x000107c61170(puVar36);
    func_0x000107c61170(puVar35);
    func_0x000107c61170(puVar34);
    func_0x000107c61170(puVar33);
    func_0x000107c61170(puVar32);
    func_0x000107c61170(puVar96);
    func_0x000107c61170(puVar31);
    func_0x000107c61170(puVar30);
    func_0x000107c61170(puVar97);
    func_0x000107c61170(puVar29);
    func_0x000107c61170(puVar28);
    func_0x000107c61170(puVar27);
    func_0x000107c61170(puVar26);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar23);
    func_0x000107c61170(puVar22);
    func_0x000107c61170(puVar21);
    func_0x000107c61170(puVar20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar99);
    puVar8 = puVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar96 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar94 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar18 = puVar3;
    puStack_170 = puVar94;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar97 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar17 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_168 = puVar17;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c528e4(uVar2);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar97);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar94);
    func_0x000107c61170(puVar96);
    func_0x000107c61170(puVar8);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar100);
    puVar94 = puVar5;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar96 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar18 = puVar94;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar17 = puVar5;
    puStack_180 = puVar18;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar97 = puVar1;
    func_0x000107c3f75c();
    func_0x000107c61180();
    puVar8 = puVar17;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_178 = puVar8;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c528e4(uVar2);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar97);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar96);
    func_0x000107c61170(puVar94);
    func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c55528(puVar1);
    func_0x000107c52100(puVar1);
    func_0x000107c5705c(puVar1);
    puVar16 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f4();
    puVar8 = PTR_s__tapped_1125485b0;
    func_0x000107c48c2c();
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    puVar3 = puVar16;
    func_0x000107c3d6fc(puVar1);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar98);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar8);
  puVar1 = (undefined8 *)0x0;
  if ((puVar98 != (undefined8 *)0x0) && (puVar8 != (undefined *)0x0)) {
    puVar4 = puVar8;
    func_0x000107c4a674();
    if ((int)puVar4 == 0) {
      puVar97 = (undefined8 *)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      func_0x000107c45424();
      func_0x000107c57e2c();
      puVar96 = puVar97;
      func_0x000107c41478(puVar97);
      func_0x000107c61180();
      puVar1 = puVar96;
      func_0x000107c41214();
      func_0x000107c61180();
      func_0x000107c61170(puVar96);
      func_0x000107c61170(puVar97);
    }
    else {
      func_0x000107c61174(puVar98);
      puVar1 = puVar98;
    }
  }
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 100822a9c; end: 100822b8f;  */

void FUN_100822a9c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar4 = (undefined *)0x0;
  if ((param_2 != (undefined *)0x0) && (param_4 != 0)) {
    lVar1 = param_4;
    func_0x000107c4a674();
    if ((int)lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      func_0x000107c45424();
      func_0x000107c57e2c();
      puVar3 = puVar2;
      func_0x000107c41478(puVar2);
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c41214();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
    else {
      func_0x000107c61174(param_2);
      puVar4 = param_2;
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100822b90; end: 100822b97; -[SCCacheKeyKindEntry isUnwrappedData] */

undefined1 FUN_100822b90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100822b98; end: 100822cf7; -[PINDiskCache asynchronouslySetFileModificationDate:forURL:] */

void FUN_100822b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_48,param_1);
  func_0x000107c4dfa0(param_1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c3d7d4(param_1);
  func_0x000107c611b0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100822cf8; end: 100822d2f;  */

void FUN_100822cf8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 100822d30; end: 100822fbb;  */

void FUN_100822d30(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  lVar1 = param_2 + 0x40;
  func_0x000107c61148();
  if (lVar1 != 0) {
    if ((param_7 != 0) && (param_5 != 0)) {
      puVar2 = PTR_PTR_1126e13f0;
      func_0x000107c61158(PTR_PTR_1126e13f0);
      uVar6 = param_5;
      func_0x000107c6115c(param_5,puVar2);
      if ((uVar6 & 1) != 0) {
        uVar4 = *(ulong *)(lVar1 + 0x30);
        uVar6 = param_5;
        func_0x000107c4a91c(param_5);
        func_0x000107c61180();
        func_0x000107c49d0c();
        func_0x000107c61170(uVar6);
        if ((uVar4 & 1) != 0) {
          func_0x000107c61174(param_7);
          lVar3 = *(long *)(param_2 + 0x38);
          lVar5 = param_7;
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 0x10))(lVar3,param_7);
            func_0x000107c61180();
            func_0x000107c61170(param_7);
            lVar5 = lVar3;
          }
          uVar6 = param_5;
          func_0x000107c42bcc(param_5);
          func_0x000107c61180();
          func_0x000107c5c9f0();
          func_0x000107c61170(uVar6);
          uVar6 = *(ulong *)(param_2 + 0x28);
          if ((uVar6 != 0) || (0.0 <= param_1)) {
            if ((uVar6 == 0) || (*(double *)(param_2 + 0x48) <= param_1)) {
              uVar6 = param_5;
              func_0x000107c42bcc(param_5);
              func_0x000107c61180();
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            uVar7 = *(undefined8 *)(param_2 + 0x30);
            func_0x000107c61174(uVar7);
            uVar8 = *(undefined8 *)(param_2 + 0x20);
            func_0x000107c61174(uVar8);
            func_0x000107c3ce54(lVar1);
            if (bVar9) {
              func_0x000107c3cbd8(lVar1);
            }
            else {
              func_0x000107c61170(uVar6);
            }
            func_0x000107c45308(*(undefined8 *)(lVar1 + 8));
            func_0x000107c3b618(lVar1);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar7);
          }
          else {
            func_0x000107c3b618(lVar1);
          }
          func_0x000107c61170(lVar5);
          goto LAB_100822e74;
        }
      }
    }
    func_0x000107c3b618(lVar1);
  }
LAB_100822e74:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 100822fbc; end: 100822fc3; -[SCCacheKeyKindEntry kind] */

undefined8 FUN_100822fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100822fc4; end: 10082323b;  */

void FUN_100822fc4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  func_0x000107c61174(param_2);
  if (param_2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bdbc0;
    func_0x000107c4d9f0();
    func_0x000107c61180();
    func_0x000107c61174();
    puVar8 = PTR_PTR_1126dc8f0;
    func_0x000107c61158(PTR_PTR_1126dc8f0);
    puVar6 = puVar2;
    func_0x000107c6115c(puVar2,puVar8);
    puVar1 = puVar2;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    func_0x000107c61174(puVar1);
    func_0x000107c61170(puVar2);
    if (puVar1 == (undefined *)0x0) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x000107c3ecd8();
      func_0x000107c61180();
      puVar8 = (undefined *)0x0;
      lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      puVar6 = *(undefined **)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
    }
    else {
      puVar6 = puVar2;
      func_0x000107c3ef08();
      func_0x000107c61180();
      puVar3 = puVar6;
      func_0x000107c6115c();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar3 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        func_0x000107c61158();
        func_0x000107c51804(puVar8);
        func_0x000107c61180();
        func_0x000107c3ecd8();
        func_0x000107c61180();
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        uVar4 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x28) = uVar7;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(puVar8);
        puVar8 = (undefined *)0x0;
      }
      else {
        func_0x000107c61174(puVar2);
        puVar8 = puVar2;
      }
    }
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10082323c; end: 10082359b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082323c(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_1126e2d48;
  func_0x000107c610fc();
  func_0x000107c61104();
  uVar15 = *(undefined8 *)((long)param_1 + (long)_DAT_112796268);
  puStack_68 = puVar3;
  func_0x000107c60780(uVar15);
  func_0x000107c60768(uVar15,&puStack_68,8);
  puVar4 = param_1;
  FUN_10006dcfc();
  *(undefined8 **)(puVar3 + 8) = puVar4;
  puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_11279625c);
  uVar13 = *puVar7;
  if ((uVar13 & 3) != 0) {
    uVar13 = (uVar13 & 0xfffffffffffffffc) + 4;
    *puVar7 = uVar13;
  }
  uVar8 = uVar13 + 4;
  if (*(ulong *)((long)param_1 + (long)_DAT_112796260) < uVar8) {
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
    func_0x000107c4f87c();
    puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_11279625c);
    uVar13 = *puVar7;
    uVar8 = uVar13 + 4;
  }
  lVar11 = *(long *)((long)param_1 + (long)_DAT_112796258);
  uVar1 = *(uint *)(lVar11 + uVar13);
  *puVar7 = uVar8;
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      if ((uVar8 & 7) != 0) {
        uVar8 = (uVar8 & 0xfffffffffffffff8) + 8;
        *puVar7 = uVar8;
      }
      uVar13 = uVar8 + 8;
      if (*(ulong *)((long)param_1 + (long)_DAT_112796260) < uVar13) {
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
        func_0x000107c4f87c();
        puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_11279625c);
        uVar8 = *puVar7;
        uVar13 = uVar8 + 8;
        lVar11 = *(long *)((long)param_1 + (long)_DAT_112796258);
      }
      uVar15 = *(undefined8 *)(lVar11 + uVar8);
      *puVar7 = uVar13;
      *(undefined8 *)(puVar3 + 0x20) = uVar15;
      uVar13 = (ulong)uVar1 & 0x7fffffff;
      func_0x000107c60744();
      func_0x000107c60738();
      iVar16 = (int)uVar13;
      if (iVar16 != 0) {
        uVar8 = (ulong)_DAT_11279625c;
        puVar5 = puVar4;
        iVar9 = _DAT_112796260;
        do {
          puVar7 = *(ulong **)((long)param_1 + (long)(int)uVar8);
          uVar12 = *puVar7;
          uVar14 = uVar12 + 8;
          if (*(ulong *)((long)param_1 + (long)iVar9) < uVar14) {
            func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
            uVar8 = (ulong)(int)_DAT_11279625c;
            puVar7 = *(ulong **)((long)param_1 + uVar8);
            uVar12 = *puVar7;
            uVar14 = uVar12 + 8;
            iVar9 = _DAT_112796260;
          }
          uVar15 = *(undefined8 *)(*(long *)((long)param_1 + (long)_DAT_112796258) + uVar12);
          *puVar7 = uVar14;
          *puVar5 = uVar15;
          uVar13 = uVar13 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar13 != 0);
      }
      *(undefined8 **)(puVar3 + 0x28) = puVar4;
      puVar3[0x18] = 1;
      *(int *)(puVar3 + 0x1c) = iVar16;
    }
    else {
      func_0x000107c60744();
      func_0x000107c60738();
      if (puVar4 == (undefined8 *)0x0) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      }
      uVar13 = 0;
      do {
        puVar5 = param_1;
        FUN_10006dcfc();
        puVar4[uVar13] = puVar5;
        uVar13 = uVar13 + 1;
      } while (uVar1 != uVar13);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      *(undefined **)(puVar3 + 0x10) = puVar6;
      func_0x000107c60744();
      func_0x000107c60740();
    }
  }
  puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_11279625c);
  uVar8 = *puVar7;
  uVar13 = uVar8 + 1;
  if (*(ulong *)((long)param_1 + (long)_DAT_112796260) < uVar13) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    puVar7 = *(ulong **)((long)param_1 + (long)(int)_DAT_11279625c);
    uVar8 = *puVar7;
    uVar13 = uVar8 + 1;
  }
  bVar2 = *(byte *)(*(long *)((long)param_1 + (long)_DAT_112796258) + uVar8);
  *puVar7 = uVar13;
  if ((bVar2 < 0x35) &&
     (pcVar10 = *(code **)(*(long *)((long)param_1 + (long)_DAT_112796254) + (ulong)bVar2 * 8),
     pcVar10 != (code *)0x0)) {
    (*pcVar10)(param_1);
  }
  else {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  return;
}



/* Entry: 10082359c; end: 100823637;  */

/* WARNING: Removing unreachable block (ram,0x000100823780) */
/* WARNING: Removing unreachable block (ram,0x00010082378c) */
/* WARNING: Removing unreachable block (ram,0x0001008237d4) */
/* WARNING: Removing unreachable block (ram,0x0001008237fc) */
/* WARNING: Removing unreachable block (ram,0x000100823800) */
/* WARNING: Removing unreachable block (ram,0x000100823824) */
/* WARNING: Removing unreachable block (ram,0x000100823a4c) */
/* WARNING: Removing unreachable block (ram,0x000100823a5c) */
/* WARNING: Removing unreachable block (ram,0x000100823ac8) */
/* WARNING: Removing unreachable block (ram,0x000100823b0c) */
/* WARNING: Removing unreachable block (ram,0x000100823b48) */
/* WARNING: Removing unreachable block (ram,0x000100823b58) */
/* WARNING: Removing unreachable block (ram,0x000100823b60) */
/* WARNING: Removing unreachable block (ram,0x000100823b84) */
/* WARNING: Removing unreachable block (ram,0x000100823bb0) */
/* WARNING: Removing unreachable block (ram,0x000100823bc8) */
/* WARNING: Removing unreachable block (ram,0x000100823b14) */
/* WARNING: Removing unreachable block (ram,0x000100823bdc) */
/* WARNING: Removing unreachable block (ram,0x000100823c00) */
/* WARNING: Removing unreachable block (ram,0x000100823af0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082359c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long alStack_178 [33];
  long lStack_70;
  
  puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar8 = *puVar7;
  uVar12 = uVar8 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar12) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar8 = *puVar7;
    uVar12 = uVar8 + 1;
  }
  uVar6 = (ulong)*(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar8);
  *puVar7 = uVar12;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(ulong *)(param_1 + _DAT_112796268);
  uVar12 = uVar8;
  func_0x000107c60780();
  if (uVar6 < uVar12 >> 3) {
    func_0x000107c60778();
    puVar11 = *(undefined **)(uVar8 + uVar6 * 8);
    lVar3 = *(long *)(puVar11 + 8);
    func_0x000107c60af0();
    if (lVar3 == 0) goto LAB_10082377c;
LAB_1008236b0:
    if (puVar11[0x18] != '\x01') {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112796264);
      alStack_178[0] = lVar3;
      func_0x000107c60780(uVar10);
      func_0x000107c60768(uVar10,alStack_178,8);
      lVar4 = *(long *)(puVar11 + 0x10);
      lVar5 = lVar4;
      func_0x000107c4080c();
      lVar2 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar13 = 0;
        do {
          while( true ) {
            if (lRam0000000000000000 != lVar2) {
              func_0x000107c61128(lVar4);
            }
            puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
            uVar8 = *puVar7;
            uVar12 = uVar8 + 1;
            if (*(ulong *)(param_1 + _DAT_112796260) < uVar12) {
              func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
              puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
              uVar8 = *puVar7;
              uVar12 = uVar8 + 1;
            }
            bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar8);
            *puVar7 = uVar12;
            if ((0x34 < bVar1) ||
               (pcVar9 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
               pcVar9 == (code *)0x0)) break;
            (*pcVar9)(param_1);
            func_0x000107c5a4a0(lVar3);
            lVar13 = lVar13 + 1;
            if (lVar5 == lVar13) goto LAB_1008238c0;
          }
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
          func_0x000107c5a4a0(lVar3);
          lVar13 = lVar13 + 1;
        } while (lVar5 != lVar13);
LAB_1008238c0:
        lVar5 = lVar4;
        func_0x000107c4080c();
      }
      goto LAB_100823c08;
    }
    lVar5 = lVar3;
    func_0x000107c42e04();
    if (lVar5 != 0 && *(long *)(puVar11 + 0x20) == lVar5) {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112796264);
      alStack_178[0] = lVar3;
      func_0x000107c60780(uVar10);
      func_0x000107c60768(uVar10,alStack_178,8);
      func_0x000107c41488(lVar3);
      goto LAB_100823c08;
    }
    if (lVar5 != 0 && *(long *)(puVar11 + 0x20) != lVar5) {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112796264);
      alStack_178[0] = lVar3;
      func_0x000107c60780(uVar10);
      func_0x000107c60768(uVar10,alStack_178,8);
      if (*(int *)(puVar11 + 0x1c) != 0) {
        uVar12 = 0;
        do {
          func_0x000107c31234(param_1,lVar3,*(undefined8 *)(*(long *)(puVar11 + 0x28) + uVar12 * 8))
          ;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(puVar11 + 0x1c));
      }
      goto LAB_100823c08;
    }
    if (lVar5 == 0) {
      uVar10 = *(undefined8 *)(param_1 + _DAT_112796264);
      alStack_178[0] = 0;
      func_0x000107c60780(uVar10);
      func_0x000107c60768(uVar10,alStack_178,8);
      if (*(int *)(puVar11 + 0x1c) != 0) {
        uVar12 = 0;
        do {
          func_0x000107c31234(param_1,0,*(undefined8 *)(*(long *)(puVar11 + 0x28) + uVar12 * 8));
          lVar3 = 0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(puVar11 + 0x1c));
        goto LAB_100823c08;
      }
    }
  }
  else {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    lVar3 = *(long *)(puVar11 + 8);
    func_0x000107c60af0();
    if (lVar3 != 0) goto LAB_1008236b0;
LAB_10082377c:
    uVar10 = *(undefined8 *)(param_1 + _DAT_112796264);
    alStack_178[0] = 0;
    func_0x000107c60780(uVar10);
    func_0x000107c60768(uVar10,alStack_178,8);
  }
  lVar3 = 0;
LAB_100823c08:
  func_0x000107c41ae4(lVar3);
  lVar5 = lVar3;
  func_0x000107c3e568();
  if (lVar5 != lVar3) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    lVar5 = lVar5 + 0x30;
    func_0x000107c61148();
    if (lVar5 != 0) {
      func_0x000107c4b940(lVar5);
      func_0x000107c3bdd8(lVar5);
      func_0x000107c5d278(lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 100823638; end: 100823ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100823638(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *apuStack_178 [33];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(ulong *)(param_1 + _DAT_112796268);
  uVar12 = uVar11;
  func_0x000107c60780();
  if (param_2 < uVar12 >> 3) {
    func_0x000107c60778();
    puVar10 = *(undefined **)(uVar11 + param_2 * 8);
    puVar3 = *(undefined **)(puVar10 + 8);
    func_0x000107c60af0();
    if (puVar3 == (undefined *)0x0) goto LAB_10082377c;
LAB_1008236b0:
    if (puVar10[0x18] != '\x01') {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
      apuStack_178[0] = puVar3;
      func_0x000107c60780(uVar9);
      func_0x000107c60768(uVar9,apuStack_178,8);
      lVar5 = *(long *)(puVar10 + 0x10);
      lVar6 = lVar5;
      func_0x000107c4080c();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar13 = 0;
        do {
          while( true ) {
            if (lRam0000000000000000 != lVar2) {
              func_0x000107c61128(lVar5);
            }
            puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
            uVar11 = *puVar7;
            uVar12 = uVar11 + 1;
            if (*(ulong *)(param_1 + _DAT_112796260) < uVar12) {
              func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
              puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
              uVar11 = *puVar7;
              uVar12 = uVar11 + 1;
            }
            bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar11);
            *puVar7 = uVar12;
            if ((0x34 < bVar1) ||
               (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
               pcVar8 == (code *)0x0)) break;
            (*pcVar8)(param_1);
            func_0x000107c5a4a0(puVar3);
            lVar13 = lVar13 + 1;
            if (lVar6 == lVar13) goto LAB_1008238c0;
          }
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
          func_0x000107c5a4a0(puVar3);
          lVar13 = lVar13 + 1;
        } while (lVar6 != lVar13);
LAB_1008238c0:
        lVar6 = lVar5;
        func_0x000107c4080c();
      }
      goto LAB_100823c08;
    }
    puVar4 = puVar3;
    func_0x000107c42e04();
    if (puVar4 != (undefined *)0x0 && *(undefined **)(puVar10 + 0x20) == puVar4) {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
      apuStack_178[0] = puVar3;
      func_0x000107c60780(uVar9);
      func_0x000107c60768(uVar9,apuStack_178,8);
      func_0x000107c41488(puVar3);
      goto LAB_100823c08;
    }
    if (puVar4 != (undefined *)0x0 && *(undefined **)(puVar10 + 0x20) != puVar4) {
      func_0x000107c61160();
      func_0x000107c61104();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
      apuStack_178[0] = puVar3;
      func_0x000107c60780(uVar9);
      func_0x000107c60768(uVar9,apuStack_178,8);
      if (*(int *)(puVar10 + 0x1c) != 0) {
        uVar12 = 0;
        do {
          func_0x000107c31234(param_1,puVar3,*(undefined8 *)(*(long *)(puVar10 + 0x28) + uVar12 * 8)
                             );
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(puVar10 + 0x1c));
      }
      goto LAB_100823c08;
    }
    if (puVar4 == (undefined *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
      apuStack_178[0] = (undefined *)0x0;
      func_0x000107c60780(uVar9);
      func_0x000107c60768(uVar9,apuStack_178,8);
      if (*(int *)(puVar10 + 0x1c) != 0) {
        uVar12 = 0;
        do {
          func_0x000107c31234(param_1,0,*(undefined8 *)(*(long *)(puVar10 + 0x28) + uVar12 * 8));
          puVar3 = (undefined *)0x0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(puVar10 + 0x1c));
        goto LAB_100823c08;
      }
    }
  }
  else {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    puVar3 = *(undefined **)(puVar10 + 8);
    func_0x000107c60af0();
    if (puVar3 != (undefined *)0x0) goto LAB_1008236b0;
LAB_10082377c:
    if (param_3 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      if (puVar10[0x18] == '\x01') {
        func_0x000107c41988();
        uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
        apuStack_178[0] = puVar3;
        func_0x000107c60780(uVar9);
        func_0x000107c60768(uVar9,apuStack_178,8);
        puVar4 = PTR_PTR_1126e2d50;
        func_0x000107c610f4(PTR_PTR_1126e2d50);
        func_0x000107c45e40();
        func_0x000107c61104();
        if (*(int *)(puVar10 + 0x1c) != 0) {
          uVar12 = 0;
          do {
            func_0x000107c31234(param_1,puVar4,
                                *(undefined8 *)(*(long *)(puVar10 + 0x28) + uVar12 * 8));
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(puVar10 + 0x1c));
        }
        func_0x000107c3e1c4(puVar4);
        func_0x000107c3d66c(puVar3);
      }
      else {
        func_0x000107c419a4();
        uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
        apuStack_178[0] = puVar3;
        func_0x000107c60780(uVar9);
        func_0x000107c60768(uVar9,apuStack_178,8);
        lVar5 = *(long *)(puVar10 + 0x10);
        lVar6 = lVar5;
        func_0x000107c4080c();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            while( true ) {
              if (lRam0000000000000000 != lVar2) {
                func_0x000107c61128(lVar5);
              }
              puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
              uVar11 = *puVar7;
              uVar12 = uVar11 + 1;
              if (*(ulong *)(param_1 + _DAT_112796260) < uVar12) {
                func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
                puVar7 = *(ulong **)(param_1 + _DAT_11279625c);
                uVar11 = *puVar7;
                uVar12 = uVar11 + 1;
              }
              bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar11);
              *puVar7 = uVar12;
              if ((0x34 < bVar1) ||
                 (pcVar8 = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
                 pcVar8 == (code *)0x0)) break;
              (*pcVar8)(param_1);
              func_0x000107c5a4a0(puVar3);
              lVar13 = lVar13 + 1;
              if (lVar6 == lVar13) goto LAB_100823af0;
            }
            func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
            func_0x000107c5a4a0(puVar3);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
LAB_100823af0:
          lVar6 = lVar5;
          func_0x000107c4080c();
        }
      }
      goto LAB_100823c08;
    }
    uVar9 = *(undefined8 *)(param_1 + _DAT_112796264);
    apuStack_178[0] = (undefined *)0x0;
    func_0x000107c60780(uVar9);
    func_0x000107c60768(uVar9,apuStack_178,8);
  }
  puVar3 = (undefined *)0x0;
LAB_100823c08:
  func_0x000107c41ae4(puVar3);
  puVar10 = puVar3;
  func_0x000107c3e568();
  if (puVar10 != puVar3) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    puVar10 = puVar10 + 0x30;
    func_0x000107c61148();
    if (puVar10 != (undefined *)0x0) {
      func_0x000107c4b940(puVar10);
      func_0x000107c3bdd8(puVar10);
      func_0x000107c5d278(puVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return;
  }
  return;
}



/* Entry: 100823cec; end: 100823d4b;  */

void FUN_100823cec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c4b940(lVar1);
    func_0x000107c3bdd8(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    func_0x000107c5d278(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100823d4c; end: 100823d5f; +[SCCacheDataHandlerCacheEntry fasterCodingVersion] */

undefined8 FUN_100823d4c(void)

{
  return 0x56c429da1a43f521;
}



/* Entry: 100823d60; end: 100823dd3; -[SCCacheDataHandlerCacheEntry decodeWithFasterDecoder:] */

/* WARNING: Possible PIC construction at 0x000100823d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100823db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100823da0) */
/* WARNING: Removing unreachable block (ram,0x000100823dbc) */

void FUN_100823d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c41474();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100823dd4; end: 100823eb3; -[FCNSDecoder decodeObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100823dd4(long param_1,undefined8 param_2)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar2 = *puVar3;
  uVar4 = uVar2 + 1;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 1;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + _DAT_112796258) + uVar2);
  *puVar3 = uVar4;
  if ((bVar1 < 0x35) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + _DAT_112796254) + (ulong)bVar1 * 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100823e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return param_1;
  }
  func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  return 0;
}



/* Entry: 100823eb4; end: 1008240af; -[PINDiskCache _locked_setFileModificationDate:forURL:] */

undefined *
FUN_100823eb4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *unaff_x22;
  undefined *puVar4;
  undefined8 unaff_x24;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar4 = (undefined *)0x0;
  if ((param_3 != (undefined *)0x0) && (param_4 != (undefined *)0x0)) {
    unaff_x22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0();
    func_0x000107c61180();
    uStack_68 = *(undefined8 *)PTR__NSFileModificationDate_110345418;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = param_3;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_68,1);
    func_0x000107c61180();
    puVar2 = param_4;
    func_0x000107c4e430(param_4);
    func_0x000107c61180();
    puVar4 = unaff_x22;
    puVar3 = puVar1;
    func_0x000107c529d0();
    unaff_x24 = 0;
    func_0x000107c61174(0);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(unaff_x22);
    if (((ulong)puVar4 & 1) != 0) {
      unaff_x22 = param_1;
      puVar3 = param_4;
      func_0x000107c4a8d0();
      func_0x000107c61180();
      if (unaff_x22 != (undefined *)0x0) {
        puVar3 = param_3;
        func_0x000107c56bcc(*(undefined8 *)(param_1 + 0xa8),param_2,param_3,unaff_x22);
      }
      func_0x000107c61170(unaff_x22);
    }
    func_0x000107c61170(0);
  }
  func_0x000107c61170(param_4);
  puVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar4;
  }
  func_0x000107c60e78();
  func_0x000107c61170(unaff_x22);
  func_0x000107c61170(unaff_x24);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  func_0x000107c453e4();
  if (puVar1 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61158(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c4147c(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_11102fab8);
    puVar4 = puVar3;
    func_0x000107c4adac();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c4cd5c(puVar1,param_2,puVar3,0);
    }
  }
  return puVar1;
}



/* Entry: 1008240b0; end: 100824117; -[GPBMessage initWithCoder:] */

long FUN_1008240b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c453e4();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c61158(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c4147c(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_11102fab8);
    lVar2 = param_3;
    func_0x000107c4adac();
    if (lVar2 != 0) {
      func_0x000107c4cd5c(param_1,param_2,param_3,0);
    }
  }
  return param_1;
}



/* Entry: 100824118; end: 1008241bb; -[GPBMessage mergeFromData:extensionRegistry:] */

/* WARNING: Removing unreachable block (ram,0x000100824188) */

void FUN_100824118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e3238;
  func_0x000107c610f4(PTR_PTR_1126e3238);
  func_0x000107c4635c();
  func_0x000107c4cd58(param_1,param_2,puVar1,param_4);
  func_0x000107c3f98c(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1008241bc; end: 100824227; +[IMPBusinessProfileAndUserData descriptor] */

void FUN_1008241bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51b00,
                        &PTR____CFConstantStringClassReference_110f4d4b8,&PTR_s_impala_113357488,
                        &PTR_DAT_11335c060,9,0x48,0x1c);
    puRam00000001137f2638 = puVar1;
  }
  return;
}



/* Entry: 100824228; end: 10082456b; -[SIGHeaderButtonBackgroundView initAsFirstOption:lastOption:style:theme:customBackgroundColor:applyDefaultShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100824228(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *in_x6;
  undefined1 in_w7;
  long lVar18;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(in_x6);
  puStack_90 = PTR_PTR_11270b540;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  func_0x000107c61154(0,0,0x4044000000000000,0x4044000000000000,puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar18 = (long)_DAT_112794b7c;
    func_0x000107c61174(in_x6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 **)((long)puVar1 + lVar18) = in_x6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794b80) = in_w7;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469a4();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794b84);
    *(undefined **)((long)puVar1 + (long)_DAT_112794b84) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c5a050(puVar3);
    puVar4 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c539d4(0x4034000000000000);
    func_0x000107c61170(puVar4);
    func_0x000107c59cb0(puVar1);
    func_0x000107c59a2c(puVar1);
    func_0x000107c3d89c(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar6 = puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar8 = puVar3;
    puStack_88 = puVar7;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar9 = puVar1;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar10 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar11 = puVar3;
    puStack_80 = puVar10;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar12 = puVar1;
    func_0x000107c5ce8c(puVar1);
    func_0x000107c61180();
    puVar13 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar14 = puVar3;
    puStack_78 = puVar13;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar15 = puVar1;
    func_0x000107c44d9c(puVar1);
    func_0x000107c61180();
    puVar16 = puVar14;
    func_0x000107c40280();
    func_0x000107c61180();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar16;
    func_0x000107c3e17c();
    func_0x000107c61180();
    param_3 = puVar17;
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  if (*(undefined **)((long)in_x6 + (long)_DAT_112794b04) != param_3) {
    *(undefined **)((long)in_x6 + (long)_DAT_112794b04) = param_3;
  }
  return in_x6;
}



/* Entry: 10082456c; end: 100824587; -[SIGHeaderButtonBackgroundView setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10082456c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794b04) != param_3) {
    *(long *)(param_1 + _DAT_112794b04) = param_3;
  }
  return;
}



/* Entry: 100824588; end: 1008246fb; -[SIGHeaderButtonBackgroundView setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100824588(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  *(long *)(param_1 + _DAT_112794b88) = param_3;
  func_0x000107c3c2c0();
  iVar1 = _DAT_112794b84;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c526c0(0,*(undefined8 *)(param_1 + _DAT_112794b84));
    }
    else {
      if (param_3 != 1) {
        return;
      }
      func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112794b84));
    }
  }
  else if (param_3 == 2) {
    func_0x000107c526c0(0x3fc47ae147ae147b,*(undefined8 *)(param_1 + _DAT_112794b84));
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        lVar3 = (long)_DAT_112794b84;
        func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
        func_0x000107c52b50(*(undefined8 *)(param_1 + lVar3));
        if (*(char *)(param_1 + _DAT_112794b80) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc6870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addDefaultShadow_11254f3b8);
          return;
        }
      }
      return;
    }
    func_0x000107c526c0(0x3faeb851eb851eb8,*(undefined8 *)(param_1 + _DAT_112794b84));
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c52b50(*(undefined8 *)(param_1 + iVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1008246fc; end: 10082473b; -[SIGHeaderButtonBackgroundView _removeDefaultShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008246fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794b84);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c5903c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10082473c; end: 1008247bb; +[IMPBusinessProfile descriptor] */

undefined * FUN_10082473c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c51970,
                        &PTR____CFConstantStringClassReference_110f4d418,&PTR_s_impala_113357488,
                        &PTR_s_id_p_113356b50,0x48,0x1c8,0x1c);
    func_0x000107c5a894();
    puRam00000001137f2610 = puVar1;
  }
  return puRam00000001137f2610;
}



/* Entry: 1008247bc; end: 1008247c3; -[SIGHeaderButtonOption text] */

undefined8 FUN_1008247bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1008247c4; end: 1008247cb; -[SIGLoadingIndicatorView initWithColor:size:] */

void FUN_1008247c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfffb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithColor_size_arcStyle__1125dd8a8,param_3,param_4,0);
  return;
}



/* Entry: 1008247cc; end: 10082485b; -[SIGLoadingIndicatorView initWithColor:size:arcStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1008247cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c453e4();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112794f08;
    *(undefined8 *)(param_1 + lVar2) = param_4;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794f0c);
    *(undefined8 *)(param_1 + _DAT_112794f0c) = 0;
    func_0x000107c61170(uVar1);
    func_0x000107c550d8(param_1,param_2,1);
    func_0x000107c59e10(param_1,param_2,param_3);
    func_0x000107c3b158(param_1,param_2,*(undefined8 *)(param_1 + lVar2),param_3,param_5);
  }
  return param_1;
}



/* Entry: 10082485c; end: 1008249d3; -[SIGLoadingIndicatorView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10082485c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270b5e8;
  uStack_40 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794f18);
    *(undefined **)((long)puVar1 + (long)_DAT_112794f18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794f14);
    *(undefined **)((long)puVar1 + (long)_DAT_112794f14) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794f10);
    *(undefined **)((long)puVar1 + (long)_DAT_112794f10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794f1c) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008249d4; end: 100824a17; -[SIGLoadingIndicatorView setTintColor:] */

void FUN_1008249d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c59e14(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100824a18; end: 100824b63; -[SIGLoadingIndicatorView setTintWithUIColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100824a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puStack_e0 = PTR_PTR_11270b5e8;
  lStack_e8 = param_1;
  func_0x000107c61154(&lStack_e8,PTR_s_setTintColor__112663280,param_3);
  lVar5 = *(long *)(param_1 + _DAT_112794f18);
  func_0x000107c61174(lVar5);
  lVar4 = 0x10;
  lVar2 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      uVar6 = *(undefined8 *)(lVar4 * 8);
      func_0x000107c61178(param_3);
      func_0x000107c3ab24();
      func_0x000107c59a18(uVar6);
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar4 = 0x10;
    lVar2 = lVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c3ad6c(param_3);
  func_0x000107c3b580(param_3);
  func_0x000107c3c2d4(param_3);
  func_0x000107c3c2d4(param_3);
  func_0x000107c61174(puVar3);
  func_0x000107c3d74c(param_3);
  if (lVar4 == 0) {
    func_0x000107c61174(puVar3);
    func_0x000107c3d74c(param_3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100824b64; end: 100824cbf; -[SIGLoadingIndicatorView _configureWithSize:color:arcStyle:] */

void FUN_100824b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,param_6);
  func_0x000107c61180();
  func_0x000107c3ad6c(param_3,param_4,param_5);
  uVar3 = param_1;
  func_0x000107c3b580(param_3,param_4,param_5);
  func_0x000107c3c2d4(param_3,param_4,&PTR____CFConstantStringClassReference_110f62598);
  func_0x000107c3c2d4(param_3,param_4,&PTR____CFConstantStringClassReference_110f625b8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x100825000;
  puStack_78 = &UNK_110d62c40;
  func_0x000107c61174(puVar2);
  puStack_70 = puVar2;
  uStack_68 = param_1;
  func_0x000107c3d74c(param_3,param_4,&PTR____CFConstantStringClassReference_110f62598,&puStack_90);
  if (param_7 == 0) {
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1008388e0;
    puStack_b8 = &UNK_110d62c70;
    func_0x000107c61174(puVar2);
    puStack_b0 = puVar2;
    uStack_a8 = uVar3;
    uStack_a0 = param_2;
    uStack_98 = param_1;
    func_0x000107c3d74c(param_3,param_4,&PTR____CFConstantStringClassReference_110f625b8,&puStack_d0
                       );
    func_0x000107c61170(puStack_b0);
  }
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100824cc0; end: 100824cdf; -[SIGLoadingIndicatorView _animationEndLineWidthForSize:] */

undefined8 FUN_100824cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x3ff8000000000000;
  if (param_3 != 1) {
    uVar1 = 0x4000000000000000;
  }
  uVar2 = 0x3ff0000000000000;
  if (param_3 != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 100824ce0; end: 100824d03; -[SIGLoadingIndicatorView _edgeOffsetsForInnerArcForSize:] */

void FUN_100824ce0(void)

{
  return;
}



/* Entry: 100824d04; end: 100824d9f; -[SIGLoadingIndicatorView _removeLoadingArcWithIdentifier:] */

/* WARNING: Possible PIC construction at 0x000100824d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100824d68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100824d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794f10;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x000107c61174(param_3);
  func_0x000107c4d9c0(uVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4ff30();
  func_0x000107c4ff88(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100824da0; end: 100824f2b; -[SIGLoadingIndicatorView addLoadingArcWithIdentifier:configuration:] */

/* WARNING: Possible PIC construction at 0x000100824e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100824e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100824e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100824eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100824eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100824f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100824ef0) */
/* WARNING: Removing unreachable block (ram,0x000100824ebc) */
/* WARNING: Removing unreachable block (ram,0x000100824e8c) */
/* WARNING: Removing unreachable block (ram,0x000100824e58) */
/* WARNING: Removing unreachable block (ram,0x000100824e0c) */
/* WARNING: Removing unreachable block (ram,0x000100824f0c) */

void FUN_100824da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126e1820;
  func_0x000107c61174(param_3);
  func_0x000107c610fc(puVar1);
  puVar3 = puVar1;
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126dbae0;
    func_0x000107c610f4(PTR_PTR_1126dbae0);
    func_0x000107c3fdb8(puVar1);
    func_0x000107c61180();
    func_0x000107c41e58(puVar1);
    func_0x000107c45ea8(puVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100824f2c; end: 100824f7b; -[SIGLoadingArcConfiguration init] */

undefined1 * FUN_100824f2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b5e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c4014c(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100824f7c; end: 10082504f; -[SIGLoadingArcConfiguration configureDefaults] */

void FUN_100824f7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c4b61c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)PTR__UIOffsetZero_110345d40;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(PTR__UIOffsetZero_110345d40 + 8);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff8000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0x3fe3333333333333;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 100825050; end: 100825057; -[SIGLoadingArcConfiguration setDirection:] */

void FUN_100825050(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100825058; end: 100825087; -[SIGLoadingArcConfiguration setColor:] */

void FUN_100825058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100825088; end: 10082508f; -[SIGLoadingArcConfiguration setAnimationEndLineWidth:] */

void FUN_100825088(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 100825090; end: 100825097; -[SIGLoadingArcConfiguration color] */

undefined8 FUN_100825090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100825098; end: 10082509f; -[SIGLoadingArcConfiguration direction] */

undefined8 FUN_100825098(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008250a0; end: 100825183; -[SIGLoadingIndicatorLayer initWithColor:direction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1008250a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270b5d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c549b4(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c55f88(puVar1);
    func_0x000107c61178(param_3);
    func_0x000107c3ab24();
    func_0x000107c59a18(puVar1);
    func_0x000107c55f94(0,puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794ed4) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100825184; end: 100829053;  */

/* WARNING: Possible PIC construction at 0x00010b424868: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b42486c) */
/* WARNING: Removing unreachable block (ram,0x00010b42487c) */
/* WARNING: Removing unreachable block (ram,0x00010b424870) */

undefined8 * FUN_100825184(uint *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long extraout_x8;
  undefined4 *unaff_x19;
  ulong uVar4;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [288];
  long lStack_58;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((*(byte *)((long)param_2 + 0x11) & 0x28) == 0) {
    uVar4 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
    if (uVar4 == uVar2) {
      func_0x000100825248();
      if (uVar2 != 0) {
        func_0x000100825698(*param_2,*(undefined8 *)(param_3 + 8));
        *(ulong *)(param_3 + 8) = *(long *)(param_3 + 8) + uVar4;
      }
      func_0x000100827740(*param_2);
      return (undefined8 *)0x0;
    }
    uVar2 = 2;
  }
  else {
    uVar2 = (uint)((*(byte *)((long)param_2 + 0x11) & 8) == 0);
  }
  *param_1 = uVar2;
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 3) = 0;
  func_0x000100825248();
  func_0x00010b424ac0(param_1);
  lStack_58 = extraout_x8;
code_r0x00010b4247c4:
  uVar3 = *unaff_x19;
code_r0x00010b4247c8:
  puVar1 = param_2;
  switch(uVar3) {
  case 0:
    func_0x00010b4232a0(param_2,param_3,1);
    if ((int)puVar1 == 0) {
      if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) goto code_r0x00010b42481c;
      goto code_r0x00010b42485c;
    }
    goto code_r0x00010b4248f0;
  case 1:
code_r0x00010b42485c:
    goto code_r0x00010b424928;
  case 2:
    uVar2 = *(uint *)((long)param_2 + 0x14);
    uVar4 = *(long *)(param_3 + 0x10) - *(long *)(param_3 + 8);
    if (uVar2 <= uVar4) {
      uVar4 = (ulong)uVar2;
    }
    if (uVar4 != 0) {
      func_0x000107c37d18(*param_2);
      *(ulong *)(param_3 + 8) = *(long *)(param_3 + 8) + uVar4;
      uVar2 = *(int *)((long)param_2 + 0x14) - (int)uVar4;
      *(uint *)((long)param_2 + 0x14) = uVar2;
    }
    if (uVar2 == 0) goto code_r0x00010b4248c4;
    uVar3 = 2;
    break;
  case 3:
code_r0x00010b4248c4:
    func_0x00010b42334c(param_2,param_3);
    if ((int)puVar1 != 0) {
      func_0x000107c37d1c(*param_2);
      puVar1 = (undefined8 *)0x0;
      goto code_r0x00010b4248f0;
    }
    uVar3 = 3;
    break;
  case 4:
    func_0x00010b424960(param_2,unaff_x19 + 1,param_3);
    if ((int)puVar1 != 0) goto code_r0x00010b4248f0;
    func_0x00010b424aa4();
code_r0x00010b42481c:
    uVar3 = 2;
    *unaff_x19 = 2;
    goto code_r0x00010b4247c8;
  default:
    goto code_r0x00010b424828;
  }
  *unaff_x19 = uVar3;
  puVar1 = (undefined8 *)0x1;
code_r0x00010b4248f0:
  param_2 = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
code_r0x00010b424928:
  param_2 = (undefined8 *)((long)param_2 + 0x1c);
  func_0x00010b4249a8();
  if ((int)param_2 == 2) {
    func_0x00010b424a90();
  }
  return param_2;
code_r0x00010b424828:
  func_0x000107c2cb30(auStack_188,&UNK_10f75ff3e,0xae,2);
  func_0x000107c2d0d0(auStack_178,&UNK_10f75ffee);
  func_0x00010b424640();
  func_0x000107c2cb34(auStack_188);
  goto code_r0x00010b4247c4;
}



/* Entry: 100829054; end: 100829107;  */

bool FUN_100829054(byte *param_1,ulong param_2,byte *param_3,ulong param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < param_4) {
    bVar3 = false;
  }
  else {
    if (param_5 != 1) {
      if (param_5 == 0) {
        func_0x000107c610b0(param_1,param_3,param_4);
        return (int)param_1 == 0;
      }
      return false;
    }
    if (param_4 == 0) {
      return true;
    }
    do {
      param_4 = param_4 - 1;
      bVar1 = *param_3;
      bVar2 = *param_1;
      uVar4 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar4 = (uint)bVar1;
      }
      uVar5 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar5 = (uint)bVar2;
      }
      bVar3 = uVar4 == uVar5;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (bVar3 && param_4 != 0);
  }
  return bVar3;
}



/* Entry: 100829108; end: 10082958f;  */

void FUN_100829108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)();
  return;
}



/* Entry: 100829590; end: 1008297c7;  */

undefined1 FUN_100829590(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  
  pbVar12 = *(byte **)(param_1 + 0x10);
  pbVar2 = *(byte **)(param_1 + 0x18);
  pbVar11 = pbVar12;
  pbVar13 = pbVar12;
  if ((pbVar12 != pbVar2) && (*(int *)(param_1 + 0x58) == 1)) {
    do {
      pbVar11 = pbVar12;
      if (0x20 < *pbVar13 || (1L << ((ulong)*pbVar13 & 0x3f) & 0x100003600U) == 0) break;
      pbVar13 = pbVar13 + 1;
      *(byte **)(param_1 + 0x10) = pbVar13;
      pbVar12 = pbVar12 + 1;
      pbVar11 = pbVar2;
    } while (pbVar13 != pbVar2);
  }
  uVar15 = 0;
  bVar3 = false;
  bVar8 = false;
  bVar5 = *(byte *)(param_1 + 0x54);
  do {
    pbVar12 = pbVar11;
    if ((bVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x54) = 0;
      *(byte **)(param_1 + 8) = pbVar11;
      pbVar4 = pbVar11;
      pbVar9 = pbVar11;
      pbVar12 = pbVar13;
      while (pbVar2 != pbVar9) {
        while( true ) {
          bVar5 = *pbVar9;
          uVar1 = (uint)bVar5;
          uVar14 = (ulong)uVar1;
          pbVar13 = pbVar11;
          pbVar4 = pbVar2;
          if (bVar8) break;
          lVar7 = (long)*(char *)(param_1 + 0x37);
          lVar10 = param_1 + 0x20;
          if (lVar7 < 0) {
            lVar7 = *(long *)(param_1 + 0x28);
            lVar10 = *(long *)(param_1 + 0x20);
          }
          lVar6 = lVar10;
          func_0x000107c610ac(lVar10,(long)(char)bVar5,lVar7);
          if ((lVar6 != 0 && lVar6 - lVar10 != -1) ||
             ((*(int *)(param_1 + 0x58) == 1 &&
              (uVar1 < 0x21 && (1L << (uVar14 & 0x3f) & 0x100003600U) != 0)))) {
            bVar8 = false;
            if (pbVar11 != pbVar12) {
              return 1;
            }
            goto LAB_100829768;
          }
          lVar7 = (long)*(char *)(param_1 + 0x4f);
          lVar10 = param_1 + 0x38;
          if (lVar7 < 0) {
            lVar7 = *(long *)(param_1 + 0x40);
            lVar10 = *(long *)(param_1 + 0x38);
          }
          lVar6 = lVar10;
          func_0x000107c610ac(lVar10,(long)(char)bVar5,lVar7);
          bVar8 = lVar6 != 0 && lVar6 - lVar10 != -1;
          pbVar9 = pbVar12 + 1;
          *(byte **)(param_1 + 0x10) = pbVar9;
          pbVar12 = pbVar9;
          uVar15 = uVar14;
          if (pbVar9 == pbVar2) goto joined_r0x000100829764;
        }
        bVar8 = bVar3 || (uVar1 != (uint)uVar15 || uVar1 == 0x5c);
        pbVar9 = pbVar12 + 1;
        *(byte **)(param_1 + 0x10) = pbVar9;
        pbVar12 = pbVar9;
        bVar3 = !bVar3 && uVar1 == 0x5c;
      }
joined_r0x000100829764:
      pbVar12 = pbVar4;
      if (pbVar2 != pbVar13) {
        return 1;
      }
LAB_100829768:
      if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
        return 1;
      }
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(byte **)(param_1 + 8) = pbVar12;
    if (pbVar2 == pbVar12) {
      return 0;
    }
    pbVar11 = pbVar12 + 1;
    *(byte **)(param_1 + 0x10) = pbVar11;
    bVar5 = 1;
    pbVar13 = pbVar11;
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      return 1;
    }
  } while( true );
}



/* Entry: 1008297c8; end: 1008298df;  */

void FUN_1008297c8(void)

{
  return;
}



/* Entry: 1008298e0; end: 10082994f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1008298e0(long *param_1,ulong param_2)

{
  undefined8 *extraout_x8;
  int aiStack_78 [2];
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 2) < param_2) {
    if (param_2 >> 0x3e != 0) {
      func_0x00010507a6b8();
      func_0x000100660560();
      func_0x00010527edc0();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_1008298e0(extraout_x8,0x1f5);
      aiStack_78[1] = 0;
      FUN_10066048c(extraout_x8,aiStack_78 + 1);
      for (aiStack_78[0] = 100; aiStack_78[0] < 600; aiStack_78[0] = aiStack_78[0] + 1) {
        FUN_100660118(extraout_x8,aiStack_78);
      }
      return;
    }
    func_0x000100161bec(auStack_48,param_2,param_1[1] - *param_1 >> 2);
    FUN_100660554();
    func_0x000100660560();
  }
  return;
}



/* Entry: 100829950; end: 10082a8bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100829950(undefined8 *param_1)

{
  int aiStack_28 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1008298e0(param_1,0x1f5);
  aiStack_28[1] = 0;
  FUN_10066048c(param_1,aiStack_28 + 1);
  for (aiStack_28[0] = 100; aiStack_28[0] < 600; aiStack_28[0] = aiStack_28[0] + 1) {
    FUN_100660118(param_1,aiStack_28);
  }
  return;
}



/* Entry: 10082a8bc; end: 10082a923;  */

long FUN_10082a8bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x0001006b11f0(*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    *(undefined8 *)(extraout_x8 + 0x28) = param_2[5];
    *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
    *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    lVar1 = extraout_x8 + 0x30;
  }
  else {
    lVar1 = param_1;
    FUN_10082a924();
  }
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 + -0x30;
}



/* Entry: 10082a924; end: 10082a9db;  */

long FUN_10082a924(undefined8 param_1)

{
  long extraout_x8;
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000100603768();
  FUN_100164d38();
  func_0x000100164e8c(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x30,unaff_x19 + 2);
  func_0x0001006b11f0(lStack_48,*unaff_x20);
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  uVar3 = unaff_x20[4];
  uVar2 = unaff_x20[3];
  *(undefined8 *)(extraout_x8 + 0x28) = unaff_x20[5];
  *(undefined8 *)(extraout_x8 + 0x20) = uVar3;
  *(undefined8 *)(extraout_x8 + 0x18) = uVar2;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  lStack_48 = lStack_48 + 0x30;
  FUN_100164f34();
  lVar1 = unaff_x19[1];
  FUN_100164fd0(auStack_58);
  return lVar1;
}


