/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023ab2fc; end: 1023ab31f;  */

void FUN_1023ab2fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1023b3d70(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  FUN_1023b2b24(uVar1,uVar2);
  return;
}



/* Entry: 1023ab320; end: 1023ab397;  */

void FUN_1023ab320(void)

{
  long unaff_x20;
  
  func_0x0001023aaea8(*(undefined8 *)(unaff_x20 + 0x10),FUN_1023b415c,0x1023b3ff0);
  return;
}



/* Entry: 1023ab398; end: 1023ab3bf;  */

void FUN_1023ab398(long param_1,long param_2)

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



/* Entry: 1023ab3c0; end: 1023ab50b;  */

long FUN_1023ab3c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c5c4a4();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_1104fc388;
  func_0x000107c613fc(&UNK_1104fc388,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  pcStack_60 = FUN_1023ab71c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x1023ab58c;
  puStack_68 = &UNK_1104fc3a0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x000103bd77b8(0);
  func_0x000107c610f8();
  func_0x000103bd76fc(puVar2,uVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1023ab50c; end: 1023ab553;  */

undefined8 FUN_1023ab50c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1023ab604(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1023ab554; end: 1023ab5c3;  */

void FUN_1023ab554(undefined8 param_1)

{
  FUN_1023b6e80(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x0001023b6c60();
  return;
}



/* Entry: 1023ab5c4; end: 1023ab5d3;  */

void FUN_1023ab5c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023ab5d4; end: 1023ab5f7;  */

void FUN_1023ab5d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ab5f8; end: 1023ab603;  */

void FUN_1023ab5f8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1023ab604; end: 1023ab71b;  */

void FUN_1023ab604(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5c4a4();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104fc3d8;
  func_0x000107c613fc(&UNK_1104fc3d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x1023ab7c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1023ab58c;
  puStack_58 = &UNK_1104fc3f0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x000103bd77b8(0);
  func_0x000107c610f8();
  func_0x000103bd76fc(puVar1,uVar4);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1023ab71c; end: 1023ab73f;  */

void FUN_1023ab71c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1023b6e80(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x0001023b6c60();
  return;
}



/* Entry: 1023ab740; end: 1023ab7bb;  */

void FUN_1023ab740(undefined8 param_1)

{
  if (lRam0000000112e918c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d2a90);
  return;
}



/* Entry: 1023ab7bc; end: 1023ab7c7;  */

void FUN_1023ab7bc(long param_1,long param_2)

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



/* Entry: 1023ab7c8; end: 1023ab7e7; -[_TtC25PreviewFiltersIntegration39PreviewBatchCatpureFilterContextAdapter currentSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab7c8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e91970));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023ab7e8; end: 1023ab81b; -[_TtC25PreviewFiltersIntegration39PreviewBatchCatpureFilterContextAdapter setCurrentSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e91970);
  *(undefined8 *)(param_1 + _DAT_112e91970) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1023ab81c; end: 1023ab82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab81c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + _DAT_112e91970));
  return;
}



/* Entry: 1023ab82c; end: 1023ab85f;  */

void FUN_1023ab82c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023ab860; end: 1023ab86f; -[_TtC25PreviewFiltersIntegration39PreviewBatchCatpureFilterContextAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e91970));
  return;
}



/* Entry: 1023ab870; end: 1023ab88f;  */

void FUN_1023ab870(void)

{
  func_0x000107c61168(&PTR_PTR_112839320);
  return;
}



/* Entry: 1023ab890; end: 1023ab8eb; -[_TtC25PreviewFiltersIntegration36PreviewFilterDataProviderAdapterBase init] */

void FUN_1023ab890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFiltersIntegration.PreviewFilterDataProviderAdapterBase",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023ab8bc);
  (*pcVar1)();
}



/* Entry: 1023ab8ec; end: 1023ab8fb; -[_TtC25PreviewFiltersIntegration36PreviewFilterDataProviderAdapterBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e919a0));
  return;
}



/* Entry: 1023ab8fc; end: 1023ab91b;  */

void FUN_1023ab8fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128393f0);
  return;
}



/* Entry: 1023ab91c; end: 1023ab9ef; -[_TtC25PreviewFiltersIntegration29PreviewGeoFilterPickerAdapter injectGeoFilter:image:appearanceSetting:] */

/* WARNING: Possible PIC construction at 0x0001023ab9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023ab9c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ab9b4) */
/* WARNING: Removing unreachable block (ram,0x0001023ab9c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c49734();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1023ab9f0; end: 1023aba7f; -[_TtC25PreviewFiltersIntegration29PreviewGeoFilterPickerAdapter removeGeoFilter:] */

/* WARNING: Possible PIC construction at 0x0001023aba58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023aba5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ab9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4ff20();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1023aba80; end: 1023abad3;  */

void FUN_1023aba80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023abad4; end: 1023abbcb; -[_TtC25PreviewFiltersIntegration31PreviewGeoFilterProviderAdapter geoFilters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023abad4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = *(undefined **)(param_1 + _DAT_112e919a0);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61174();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
      func_0x000107c43e6c();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar1 != (undefined *)0x0) {
        uVar2 = 0;
        FUN_1023ac008(0,0x112e91a38,&PTR_PTR_1126d2778);
        func_0x000107c5fc54(puVar1,uVar2);
        func_0x000107c61170(param_1);
        puVar4 = puVar1;
      }
    }
  }
  func_0x000107c61170();
  uVar2 = 0;
  FUN_1023ac008(0,0x112e91a38,&PTR_PTR_1126d2778);
  puVar3 = puVar4;
  func_0x000107c5fc48(puVar4,uVar2);
  func_0x000107c6142c(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1023abbcc; end: 1023abcc3; -[_TtC25PreviewFiltersIntegration31PreviewGeoFilterProviderAdapter geoFilterImages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023abbcc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = *(undefined **)(param_1 + _DAT_112e919a0);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61174();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
      func_0x000107c43e60();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar1 != (undefined *)0x0) {
        uVar2 = 0;
        FUN_1023ac008(0,0x112e91a30,&PTR_PTR_1126aa6c0);
        func_0x000107c5fc54(puVar1,uVar2);
        func_0x000107c61170(param_1);
        puVar4 = puVar1;
      }
    }
  }
  func_0x000107c61170();
  uVar2 = 0;
  FUN_1023ac008(0,0x112e91a30,&PTR_PTR_1126aa6c0);
  puVar3 = puVar4;
  func_0x000107c5fc48(puVar4,uVar2);
  func_0x000107c6142c(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1023abcc4; end: 1023abde3; -[_TtC25PreviewFiltersIntegration31PreviewGeoFilterProviderAdapter geoFilterAppearanceSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023abcc4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + _DAT_112e919a0);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    puVar1 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar2 = puVar4;
      func_0x000107c43e58();
      func_0x000107c61180();
      func_0x000107c615e8(puVar4);
      if (puVar2 != (undefined *)0x0) {
        uVar3 = 0;
        FUN_1023ac008(0,0x112e91a20,&PTR_PTR_1126dd748);
        puVar4 = puVar2;
        func_0x000107c5f9e8(puVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(puVar1);
        param_1 = puVar2;
        goto LAB_1023abd88;
      }
    }
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1023abf08(PTR___swiftEmptyArrayStorage_11034f1c8);
LAB_1023abd88:
  func_0x000107c61170(param_1);
  uVar3 = 0;
  FUN_1023ac008(0,0x112e91a20,&PTR_PTR_1126dd748);
  puVar1 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1023abde4; end: 1023abeb3; -[_TtC25PreviewFiltersIntegration31PreviewGeoFilterProviderAdapter savedGeoFilterIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023abde4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + _DAT_112e919a0);
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61174();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
      func_0x000107c51c68();
      func_0x000107c61180();
      func_0x000107c615e8(puVar2);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar1 != (undefined *)0x0) {
        func_0x000107c5fc54(puVar1,PTR___sSSN_11034da80);
        func_0x000107c61170(param_1);
        puVar3 = puVar1;
      }
    }
  }
  func_0x000107c61170();
  puVar2 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1023abeb4; end: 1023abf07;  */

void FUN_1023abeb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023abf08; end: 1023ac007;  */

undefined * FUN_1023abf08(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e91a28,&UNK_10da9e030);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ac004);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023ac008);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1023ac008; end: 1023ac047;  */

void FUN_1023ac008(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1023ac048; end: 1023ac0c3; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac048(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac0c4; end: 1023ac13f; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter weather] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac0c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5e16c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac140; end: 1023ac1bb; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac140(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5ca64();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac1bc; end: 1023ac22f; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter batteryStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023ac1bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c3e724();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 1023ac230; end: 1023ac2ab; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter altitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac230(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c3dc50();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac2ac; end: 1023ac387; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter venues] */

void FUN_1023ac2ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x0001023ac30c();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001010c7468(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1023ac388; end: 1023ac403; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter venueInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac388(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5dcc8();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac404; end: 1023ac467; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter updateInfoStickerData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac404(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5d4cc();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1023ac468; end: 1023ac4cb; -[_TtC25PreviewFiltersIntegration35PreviewInfoStickerDataSourceAdapter startUpdatingVenueStickerData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac468(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5bc18();
      func_0x000107c615e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1023ac4cc; end: 1023ac51f;  */

void FUN_1023ac4cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023ac520; end: 1023ac65b; -[_TtC25PreviewFiltersIntegration35PreviewVenueFilterControllerAdapter venueFilterSelector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ac520(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e919a0);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c5dcbc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023ac65c; end: 1023ac683; -[_TtC25PreviewFiltersIntegration35PreviewVenueFilterControllerAdapter reloadVenueFilter] */

void FUN_1023ac65c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001023ac59c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023ac684; end: 1023aca43; -[_TtC25PreviewFiltersIntegration35PreviewVenueFilterControllerAdapter selectedVenueId] */

void FUN_1023ac684(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023ac6ec();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023aca44; end: 1023aca83; -[_TtC25PreviewFiltersIntegration35PreviewVenueFilterControllerAdapter selectedVenuePlaceTag] */

void FUN_1023aca44(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1023aca84();
  if (lVar1 == 0) {
    FUN_1023acdec();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1023aca84; end: 1023acdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023aca84(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  func_0x0001023ac764();
  if (param_1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5dcc4();
    func_0x000107c61180();
    uVar2 = uVar1;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar1);
    uVar1 = param_1;
    func_0x000107c51cbc();
    func_0x000107c61180();
    uVar3 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    lVar11 = *(long *)(uVar2 + 0x10);
    if (lVar11 != 0) {
      lVar7 = 0;
      plVar12 = (long *)(uVar2 + 0x28);
      do {
        uVar1 = plVar12[-1];
        if ((uVar1 == uVar3 && (undefined *)*plVar12 == puVar8) ||
           (func_0x000107c605b8(uVar1,(undefined *)*plVar12,uVar3,puVar8,0), (uVar1 & 1) != 0))
        goto LAB_1023acb44;
        plVar12 = plVar12 + 2;
        lVar7 = lVar7 + 1;
      } while (lVar11 != lVar7);
    }
    lVar7 = 0;
LAB_1023acb44:
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(puVar8);
    lVar11 = unaff_x20 + _DAT_112e91a78;
    func_0x000107c61618();
    if (lVar11 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar11;
      func_0x000107c3f5b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar11);
    }
    uVar1 = param_1;
    func_0x000107c5dcc4(param_1);
    func_0x000107c61180();
    puVar8 = PTR___sSSN_11034da80;
    uVar2 = uVar1;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar1);
    puVar4 = PTR_PTR_1126c4db8;
    func_0x000107c610f8(PTR_PTR_1126c4db8);
    uVar1 = uVar2;
    func_0x000107c5fc48(uVar2,puVar8);
    func_0x000107c6142c(uVar2);
    func_0x000107c45d18(puVar4);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar1);
    uVar1 = param_1;
    func_0x000107c5dcc4();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar1);
    uVar10 = *(undefined8 *)(uVar2 + 0x10);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fe40(uVar10);
    func_0x000107c5fe40(lVar7);
    uVar1 = param_1;
    func_0x000107c51cbc(param_1);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    puVar5 = PTR_PTR_1126c4dc0;
    func_0x000107c610f8(PTR_PTR_1126c4dc0);
    func_0x000107c61174(puVar4);
    puVar6 = puVar8;
    func_0x000107c5fadc(uVar2,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c47f10(puVar5);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar2);
    uVar1 = param_1;
    func_0x000107c51cbc();
    func_0x000107c61180();
    puVar8 = puVar6;
    if (uVar1 == 0) {
      func_0x000107c5faec();
      puVar8 = puVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
    }
    uVar2 = param_1;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (uVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar8);
    }
    puVar8 = PTR_PTR_1126c0e50;
    func_0x000107c610f8(PTR_PTR_1126c0e50);
    func_0x000107c61174(puVar5);
    func_0x000107c47ee4(puVar8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  return puVar8;
}



/* Entry: 1023acdec; end: 1023acee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023acdec(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e91a70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c498d0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023acee8);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c40f2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126c3c80;
      func_0x000107c61168(PTR_PTR_1126c3c80);
      lVar2 = lVar5;
      func_0x000107c6148c(lVar5,puVar6);
      if (lVar2 == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        func_0x000107c51c94();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
      }
    }
  }
  return;
}



/* Entry: 1023acee8; end: 1023acf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023acee8(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112e91a68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112e91a70));
  lVar1 = unaff_x20 + _DAT_112e91a78;
  func_0x000107c61610();
  return lVar1;
}



/* Entry: 1023acf58; end: 1023acf9f; -[_TtC25PreviewFiltersIntegration35PreviewVenueFilterControllerAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023acf58(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e91a68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e91a70));
  param_1 = param_1 + _DAT_112e91a78;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1023acfa0; end: 1023acfbf;  */

void FUN_1023acfa0(void)

{
  func_0x000107c61168(&PTR_PTR_112839710);
  return;
}



/* Entry: 1023acfc0; end: 1023acfe3;  */

undefined8 FUN_1023acfc0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1023acfe4; end: 1023ad027;  */

void FUN_1023acfe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5b208 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6350;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5b208 = puVar1;
  return;
}



/* Entry: 1023ad028; end: 1023ad1db;  */

ulong FUN_1023ad028(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ad10c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ad110);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6350;
    func_0x000107c61168(PTR_PTR_1126a6350);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a6350;
    func_0x000107c61168(PTR_PTR_1126a6350);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1023acfe4(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023ad1dc);
  (*pcVar2)();
}



/* Entry: 1023ad1dc; end: 1023ad2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ad1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined *puStack_58;
  
  lVar2 = _DAT_112e91a78;
  func_0x000107c61614(unaff_x20 + _DAT_112e91a78,0);
  *(long *)(unaff_x20 + _DAT_112e91a68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e91a70) = param_2;
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    puStack_58 = PTR_DAT_1126a07b0;
    lVar2 = param_1;
    func_0x000107c61494(param_1,1,&puStack_58);
    if (lVar2 != 0) {
      func_0x000107c615f0(param_1);
    }
  }
  *(long *)(unaff_x20 + _DAT_112e919a0) = lVar2;
  FUN_1023ab8fc();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar1);
  return;
}



/* Entry: 1023ad2c4; end: 1023ad9c7;  */

long FUN_1023ad2c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c614f0();
    func_0x0001023add94(lVar1,unaff_x20,lVar2);
    lVar2 = param_1;
    func_0x000107c4ad1c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_1);
    }
    else {
      puVar3 = PTR_PTR_1126afee0;
      func_0x000107c61168(PTR_PTR_1126afee0);
      lVar4 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar4 == 0) {
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_1);
      }
      else {
        puVar3 = &UNK_1104fc490;
        func_0x000107c613fc(&UNK_1104fc490,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,unaff_x20);
        pcStack_70 = FUN_1023adffc;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_1023ada3c;
        puStack_78 = &UNK_1104fc4a8;
        ppuVar5 = &puStack_90;
        puStack_68 = puVar3;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_68);
        func_0x000107c3d7cc(lVar4);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c60bd0(ppuVar5);
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  return unaff_x20;
}



/* Entry: 1023ad9c8; end: 1023ada3b;  */

void FUN_1023ad9c8(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c61174(param_1);
      FUN_1023adb1c();
      func_0x000107c61574(param_2);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1023ada3c; end: 1023ada8b;  */

void FUN_1023ada3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1023ada8c; end: 1023adb0f;  */

void FUN_1023ada8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1023adb10; end: 1023adb1b;  */

void FUN_1023adb10(void)

{
  return;
}



/* Entry: 1023adb1c; end: 1023adffb;  */

void FUN_1023adb1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_48;
  
  puStack_48 = PTR_DAT_1126a07b0;
  lVar1 = param_1;
  func_0x000107c61494(param_1,1,&puStack_48);
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4ad34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar2 = *(long *)(param_2 + 0x48);
      func_0x000107c4c3ac();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        func_0x000107c4cfbc(uVar4);
        func_0x000107c61180();
        func_0x000107c56720(lVar1);
        func_0x000107c61170(uVar4);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        func_0x000107c5b118(uVar4);
        func_0x000107c61180();
        func_0x000107c59314(lVar1);
        func_0x000107c61170(uVar4);
        lVar5 = *(long *)(param_2 + 0x20);
        func_0x000107c4bff8();
        func_0x000107c61180();
        lVar2 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar2 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar2;
          func_0x000107c4e340(lVar2);
          func_0x000107c61180();
          func_0x000107c615e8(lVar2);
        }
        func_0x000107c535ec(lVar1);
        func_0x000107c61170(lVar5);
        uVar4 = *(undefined8 *)(param_2 + 0x28);
        func_0x000107c43a44(uVar4);
        func_0x000107c61180();
        func_0x000107c54c54(lVar1);
        func_0x000107c61170(uVar4);
        func_0x000107c577b8(lVar1);
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        func_0x000107c3ee24(uVar4);
        func_0x000107c61180();
        func_0x000107c52e70(lVar1);
        func_0x000107c61170(uVar4);
        uVar4 = *(undefined8 *)(param_2 + 0x40);
        func_0x000107c5c21c(uVar4);
        func_0x000107c61180();
        func_0x000107c5a138(lVar1);
        func_0x000107c61170(uVar4);
        func_0x000107c56268(lVar1);
        uVar4 = *(undefined8 *)(param_2 + 0x50);
        func_0x000107c4e7e4(uVar4);
        func_0x000107c61180();
        func_0x000107c5740c(lVar1);
        func_0x000107c61170(uVar4);
        lVar2 = *(long *)(param_2 + 0x58);
        func_0x000107c3fa04(lVar2);
        func_0x000107c61180();
        func_0x000107c5373c(lVar1);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        lVar1 = lVar2;
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1023adffc; end: 1023ae01f;  */

void FUN_1023adffc(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1023adb1c();
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1023ae020; end: 1023ae03f;  */

void FUN_1023ae020(void)

{
  func_0x000107c61168(&PTR_PTR_112e91ae8);
  return;
}



/* Entry: 1023ae040; end: 1023ae04b;  */

void FUN_1023ae040(long param_1,long param_2)

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



/* Entry: 1023ae04c; end: 1023ae07b;  */

void FUN_1023ae04c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1023ae07c; end: 1023ae087;  */

void FUN_1023ae07c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1023ae088; end: 1023ae24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023ae088(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x0001023abee8();
  func_0x000107c610f8();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    puStack_98 = PTR_DAT_1126a07b0;
    lVar7 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_98);
    if (lVar7 != 0) {
      func_0x000107c615f0(lVar1);
    }
  }
  *(long *)(lVar2 + _DAT_112e919a0) = lVar7;
  uVar3 = 0;
  FUN_1023ab8fc();
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  uStack_58 = uVar3;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  lVar2 = 0;
  func_0x0001023abab4();
  func_0x000107c610f8();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    puStack_90 = PTR_DAT_1126a07b0;
    lVar7 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_90);
    if (lVar7 != 0) {
      func_0x000107c615f0(lVar1);
    }
  }
  *(long *)(lVar2 + _DAT_112e919a0) = lVar7;
  plVar5 = &lStack_70;
  lStack_70 = lVar2;
  uStack_68 = uVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  lVar2 = 0;
  FUN_1023ab870();
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e91970) = 0;
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    puStack_88 = PTR_DAT_1126a07b0;
    lVar7 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_88);
    if (lVar7 != 0) {
      func_0x000107c615f0(lVar1);
    }
  }
  *(long *)(lVar2 + _DAT_112e919a0) = lVar7;
  plVar6 = &lStack_80;
  lStack_80 = lVar2;
  uStack_78 = uVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  uVar3 = 0;
  func_0x000103bbfeb4(0);
  func_0x000107c610f8();
  func_0x000103bbfd98(plVar4,plVar5,plVar6,uVar3);
  func_0x000107c615e8(lVar1);
  return plVar4;
}



/* Entry: 1023ae250; end: 1023ae257;  */

void FUN_1023ae250(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023ae258; end: 1023ae2f7;  */

void FUN_1023ae258(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ae2f8; end: 1023ae34b;  */

void FUN_1023ae2f8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1023ae088();
  *param_1 = param_2;
  return;
}



/* Entry: 1023ae34c; end: 1023ae357;  */

void FUN_1023ae34c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1023ae358; end: 1023ae413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023ae358(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x0001023ac500();
  func_0x000107c610f8();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    puStack_48 = PTR_DAT_1126a07b0;
    lVar5 = lVar1;
    func_0x000107c61494(lVar1,1,&puStack_48);
    if (lVar5 != 0) {
      func_0x000107c615f0(lVar1);
    }
  }
  *(long *)(lVar2 + _DAT_112e919a0) = lVar5;
  uVar3 = 0;
  FUN_1023ab8fc();
  plVar4 = &lStack_40;
  lStack_40 = lVar2;
  uStack_38 = uVar3;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(lVar1);
  return plVar4;
}



/* Entry: 1023ae414; end: 1023ae41b;  */

void FUN_1023ae414(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023ae41c; end: 1023ae4bb;  */

void FUN_1023ae41c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ae4bc; end: 1023ae4df;  */

void FUN_1023ae4bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1023ae358();
  *param_1 = param_2;
  return;
}



/* Entry: 1023ae4e0; end: 1023ae523;  */

void FUN_1023ae4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1023ae524; end: 1023ae533;  */

void FUN_1023ae524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1023ae534; end: 1023ae697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023ae534(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5c4a4();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5b1fc(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  lVar6 = 0;
  FUN_1023acfa0();
  func_0x000107c610f8();
  lVar8 = _DAT_112e91a78;
  func_0x000107c61614(lVar6 + _DAT_112e91a78,0);
  *(long *)(lVar6 + _DAT_112e91a68) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112e91a70) = uVar3;
  func_0x000107c61604(lVar6 + lVar8,uVar5);
  if (lVar2 == 0) {
    lVar8 = 0;
  }
  else {
    puStack_58 = PTR_DAT_1126a07b0;
    lVar8 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_58);
    if (lVar8 != 0) {
      func_0x000107c615f0(lVar2);
    }
  }
  *(long *)(lVar6 + _DAT_112e919a0) = lVar8;
  uVar4 = 0;
  FUN_1023ab8fc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar6;
  uStack_48 = uVar4;
  func_0x000107c615f0(lVar2);
  func_0x000107c61174(uVar3);
  plVar7 = &lStack_50;
  func_0x000107c61154(plVar7,puVar1);
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  return plVar7;
}



/* Entry: 1023ae698; end: 1023ae6bb;  */

/* WARNING: Possible PIC construction at 0x0001023ae6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023ae6a8) */

void FUN_1023ae698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023ae6bc; end: 1023ae70f;  */

void FUN_1023ae6bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023ae710; end: 1023ae7cf;  */

void FUN_1023ae710(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4ad1c();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5c4a4(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5b1fc(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  FUN_1023acfa0(0);
  func_0x000107c610f8();
  uVar3 = uVar1;
  FUN_1023ad1dc(uVar1,uVar2,uVar4);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 1023ae7d0; end: 1023ae84f;  */

void FUN_1023ae7d0(undefined8 param_1)

{
  if (lRam0000000112e91d58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d2d78);
  return;
}



/* Entry: 1023ae850; end: 1023aefe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023ae850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = param_1;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4bff8();
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c5c4a4();
  func_0x000107c61180();
  uVar5 = param_5;
  func_0x000107c3f658();
  func_0x000107c61180();
  uVar6 = param_10;
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar7 = param_11;
  func_0x000107c3ee24();
  func_0x000107c61180();
  lVar8 = param_12;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar9 = param_4;
    func_0x000107c5b118();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_13 + _DAT_113083868);
    func_0x000107c61174();
    uVar11 = param_14;
    func_0x000107c50858();
    func_0x000107c61180();
    uVar12 = param_15;
    func_0x000107c3e3ec();
    func_0x000107c61180();
    uVar13 = param_3;
    func_0x000107c4aae4();
    func_0x000107c61180();
    uVar14 = param_3;
    func_0x000107c43e68();
    func_0x000107c61180();
    uVar15 = param_9;
    func_0x000107c5cbd4();
    func_0x000107c61180();
    uVar16 = param_16;
    func_0x000107c5d144();
    func_0x000107c61180();
    uVar17 = param_17;
    func_0x000107c50120();
    func_0x000107c61180();
    puVar18 = PTR_PTR_1126aa6c8;
    func_0x000107c610f8();
    func_0x000107c4600c();
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(uVar13);
    func_0x000107c615e8(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    *(undefined **)(unaff_x20 + 0x10) = puVar18;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023aec1c);
  (*pcVar1)();
}



/* Entry: 1023aefe8; end: 1023aeff7;  */

void FUN_1023aefe8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023aeff8; end: 1023af093;  */

void FUN_1023aeff8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023af094; end: 1023af09f;  */

void FUN_1023af094(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1023af0a0; end: 1023af863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023af0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c613fc();
  uVar2 = param_1;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_1104fc588;
  func_0x000107c613fc(&UNK_1104fc588,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_6;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1023af940;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1023afb2c;
  puStack_88 = &UNK_1104fc5a0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_1104fc5d8;
  func_0x000107c613fc(&UNK_1104fc5d8,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  pcStack_80 = FUN_1023af960;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1023afb30;
  puStack_88 = &UNK_1104fc5f0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1104fc628;
  func_0x000107c613fc(&UNK_1104fc628,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  pcStack_80 = (code *)0x1023afb20;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1023afb34;
  puStack_88 = &UNK_1104fc640;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  uVar8 = 0;
  func_0x000103bef91c(0);
  func_0x000107c610f8();
  func_0x000103bef820(puVar6,puVar7,uVar8);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_1104fc678;
  func_0x000107c613fc(&UNK_1104fc678,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  pcStack_80 = FUN_1023af97c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101376dd0;
  puStack_88 = &UNK_1104fc690;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_78;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  lVar9 = 0;
  FUN_1023afbb0();
  lVar10 = lVar9;
  func_0x000107c610f8();
  *(undefined **)(lVar10 + _DAT_112e91f88) = puVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_b0 = lVar10;
  lStack_a8 = lVar9;
  func_0x000107c61174(puVar6);
  plVar11 = &lStack_b0;
  func_0x000107c61154(plVar11,puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  *(long **)(unaff_x20 + 0x18) = plVar11;
  return unaff_x20;
}



/* Entry: 1023af864; end: 1023af93f;  */

undefined *
FUN_1023af864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_2;
  func_0x000107c5c4a4(param_2);
  func_0x000107c61180();
  func_0x000107c5b118(param_2);
  func_0x000107c61180();
  func_0x000107c4b09c(param_4);
  func_0x000107c61180();
  func_0x000107c3ce84(param_5);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126aa6d8;
  func_0x000107c610f8(PTR_PTR_1126aa6d8);
  func_0x000107c46018();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar2;
}



/* Entry: 1023af940; end: 1023af95f;  */

undefined * FUN_1023af940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = uVar2;
  func_0x000107c5c4a4(uVar2);
  func_0x000107c61180();
  func_0x000107c5b118(uVar2);
  func_0x000107c61180();
  func_0x000107c4b09c(uVar3);
  func_0x000107c61180();
  func_0x000107c3ce84(uVar5);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aa6d8;
  func_0x000107c610f8(PTR_PTR_1126aa6d8);
  func_0x000107c46018();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  return puVar4;
}



/* Entry: 1023af960; end: 1023af97b;  */

void FUN_1023af960(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1023af97c; end: 1023af97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023af97c(void)

{
  func_0x000107c610f8(PTR_PTR_1126aa6d0);
                    /* WARNING: Could not recover jumptable at 0x00010c001e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1023af980; end: 1023af9b7;  */

void FUN_1023af980(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1023af9b8; end: 1023af9fb;  */

void FUN_1023af9b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023af9fc; end: 1023afa0b;  */

undefined * FUN_1023af9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = uVar2;
  func_0x000107c5c4a4(uVar2);
  func_0x000107c61180();
  func_0x000107c5b118(uVar2);
  func_0x000107c61180();
  func_0x000107c4b09c(uVar3);
  func_0x000107c61180();
  func_0x000107c3ce84(uVar5);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126aa6d8;
  func_0x000107c610f8(PTR_PTR_1126aa6d8);
  func_0x000107c46018();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  return puVar4;
}



/* Entry: 1023afa0c; end: 1023afa3f;  */

void FUN_1023afa0c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023afa40; end: 1023afa8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023afa40(void)

{
  func_0x000107c610f8(PTR_PTR_1126aa6d0);
                    /* WARNING: Could not recover jumptable at 0x00010c001e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1023afa90; end: 1023afabb;  */

void FUN_1023afa90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023afabc; end: 1023afac7;  */

void FUN_1023afabc(void)

{
  return;
}



/* Entry: 1023afac8; end: 1023afae7;  */

void FUN_1023afac8(void)

{
  func_0x000107c61168(&PTR_PTR_112e91f20);
  return;
}



/* Entry: 1023afae8; end: 1023afb3f;  */

void FUN_1023afae8(long param_1,long param_2)

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


