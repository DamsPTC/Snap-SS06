/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a3ca0c; end: 102a3cb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3ca0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x0001000285a8(0x112ee3e30,&UNK_10db0f1a0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ee3de8);
  func_0x000100775284(uVar1,0,1);
  uVar2 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar3 = FUN_102a3cb70;
  func_0x000100775358(FUN_102a3cb70,0,uVar2);
  func_0x000107c61574(uVar1);
  uVar2 = 0x112ee3e38;
  func_0x0001000285a8(0x112ee3e38,&UNK_10db0eeb8);
  uVar1 = 0x102a3cc68;
  func_0x0001000d5158(0x102a3cc68,0,uVar2);
  func_0x000107c61574();
  func_0x000102a3cf30();
  func_0x000104884898();
  puVar4 = &UNK_11058ad50;
  func_0x000107c613fc(&UNK_11058ad50,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar5 = FUN_102a3cfe0;
  puVar6 = puVar4;
  (**(code **)(*(long *)pcVar3 + 0x60))(FUN_102a3cfe0);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  pcVar3 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112ee3df8),pcVar3,puVar6);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar5);
  return;
}



/* Entry: 102a3cb70; end: 102a3ccdb;  */

void FUN_102a3cb70(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  if ((char)param_1[1] == '\x01') {
    iVar1 = 2;
    lStack_38 = *param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_38,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar3 = lStack_38;
      func_0x000107c3d14c(lStack_38);
      func_0x000107c61180();
      func_0x0001000b637c();
      func_0x000107c615e8(lStack_38);
      func_0x000107c61170(lVar3);
      return;
    }
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x000104886440();
  return;
}



/* Entry: 102a3ccdc; end: 102a3cd37;  */

void FUN_102a3ccdc(undefined2 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102a3cd38(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102a3cd38; end: 102a3ce2f;  */

/* WARNING: Possible PIC construction at 0x000102a3ce10: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3cd38(uint param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  if ((param_1 & 0xff) == 2 || (param_1 & 0x100) != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ee3e00);
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c3f250();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3ce2c);
      (*pcVar1)();
    }
    func_0x000107c4dcdc();
  }
  else {
    func_0x0001000d224c(&uStack_38);
    func_0x000107c5ad54(uStack_38);
    func_0x000107c615e8(uStack_38);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ee3e00);
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c3f250();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3ce30);
      (*pcVar1)();
    }
    func_0x000107c4dcdc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102a3ce30; end: 102a3ce57; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature activate] */

void FUN_102a3ce30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102a3ca0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a3ce58; end: 102a3ced3; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3ce58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_38;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    puStack_38 = PTR_DAT_11269cb50;
    lVar2 = param_3;
    func_0x000107c61494(param_3,1,&puStack_38);
    if (lVar2 != 0) {
      func_0x000107c61174(param_3);
    }
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ee3e00);
  *(long *)(param_1 + _DAT_112ee3e00) = lVar2;
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102a3ced4; end: 102a3ced7; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature resetMetrics] */

void FUN_102a3ced4(void)

{
  return;
}



/* Entry: 102a3ced8; end: 102a3cf9f; -[_TtC32ExclusiveLensCaptureStyleFeature35ExclusiveLensCameraRingStyleFeature usageMetrics] */

void FUN_102a3ced8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102a3cfa0; end: 102a3cfdf;  */

void FUN_102a3cfa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee3e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0eed4;
  func_0x000107c61520(&UNK_10db0eed4,&UNK_11058add0);
  puRam0000000112ee3e48 = puVar1;
  return;
}



/* Entry: 102a3cfe0; end: 102a3d143;  */

void FUN_102a3cfe0(undefined2 *param_1)

{
  undefined2 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102a3cd38(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102a3d144; end: 102a3d1a3; -[_TtC32ExclusiveLensCaptureStyleFeature41ExclusiveLensCameraRingStyleFeaturePlugin init] */

void FUN_102a3d144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExclusiveLensCaptureStyleFeature.ExclusiveLensCameraRingStyleFeaturePlugin",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3d170);
  (*pcVar1)();
}



/* Entry: 102a3d1a4; end: 102a3d1eb; -[_TtC32ExclusiveLensCaptureStyleFeature41ExclusiveLensCameraRingStyleFeaturePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3d1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3d1d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d1a4(long param_1)

{
  FUN_102a3d2c4(param_1 + _DAT_112ee3e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee3e58));
  return;
}



/* Entry: 102a3d1ec; end: 102a3d2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d1ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0;
  FUN_102a3c9ec();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ee3e00) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ee3de8) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112ee3df0) = param_2;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + _DAT_112ee3df8) = param_2;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a3d2ac; end: 102a3d2c3;  */

undefined8 FUN_102a3d2ac(void)

{
  return 1;
}



/* Entry: 102a3d2c4; end: 102a3d2e7;  */

undefined8 FUN_102a3d2c4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a3d2e8; end: 102a3d30b;  */

void FUN_102a3d2e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3d30c; end: 102a3d317; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator cameraLensesInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d30c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee3ea0;
  func_0x000107c61428(param_1 + _DAT_112ee3ea0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a3d318; end: 102a3d323; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator setCameraLensesInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee3ea0;
  func_0x000107c61428(param_1 + _DAT_112ee3ea0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102a3d324; end: 102a3d32f; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator setPreviewLensesInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee3ea8;
  func_0x000107c61428(param_1 + _DAT_112ee3ea8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102a3d330; end: 102a3d38f;  */

void FUN_102a3d330(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102a3d390; end: 102a3d39b;  */

void FUN_102a3d390(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c614f0();
  func_0x000107c614f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000102a3d3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102a3d490(param_1,param_2);
  return;
}



/* Entry: 102a3d39c; end: 102a3d3f7;  */

void FUN_102a3d39c(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  func_0x000107c614f0();
  func_0x000107c614f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000102a3d3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



/* Entry: 102a3d3f8; end: 102a3d457; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator init] */

void FUN_102a3d3f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCameraIntegrationImpl.LensesCameraLensesFeaturesCoordinator",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3d424);
  (*pcVar1)();
}



/* Entry: 102a3d458; end: 102a3d48f; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3d474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3d478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee3ea0));
  return;
}



/* Entry: 102a3d490; end: 102a3d4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d490(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c610f8();
  lVar1 = param_3;
  func_0x000107c614f0();
  *(undefined8 *)(param_3 + _DAT_112ee3ea0) = param_1;
  *(undefined8 *)(param_3 + _DAT_112ee3ea8) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a3d4fc; end: 102a3d52b;  */

void FUN_102a3d4fc(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x0001008d5844(param_1);
  return;
}



/* Entry: 102a3d52c; end: 102a3d55f; -[_TtC27LensesCameraIntegrationImpl38LensesCameraLensesFeaturesInfoProvider activeLens] */

void FUN_102a3d52c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3d560();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a3d560; end: 102a3d5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d560(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ee3ed8);
  if (uVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c3d138();
      func_0x000107c61180();
      if (uVar2 == 0) {
        func_0x000107c615e8(uVar1);
      }
      else {
        uVar3 = uVar2;
        func_0x000107c49a2c();
        func_0x000107c615e8(uVar1);
        if ((uVar3 & 1) != 0) {
          func_0x000107c61170(uVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 102a3d5e4; end: 102a3d643; -[_TtC27LensesCameraIntegrationImpl38LensesCameraLensesFeaturesInfoProvider init] */

void FUN_102a3d5e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCameraIntegrationImpl.LensesCameraLensesFeaturesInfoProvider",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3d610);
  (*pcVar1)();
}



/* Entry: 102a3d644; end: 102a3d653; -[_TtC27LensesCameraIntegrationImpl38LensesCameraLensesFeaturesInfoProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3d644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3ed8));
  return;
}



/* Entry: 102a3d654; end: 102a3d7d7;  */

long FUN_102a3d654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11058b110;
  func_0x000107c613fc(&UNK_11058b110,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  puStack_70 = &UNK_1008d54d0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1008d5494;
  puStack_78 = &UNK_11058b128;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 102a3d7d8; end: 102a3d7df;  */

void FUN_102a3d7d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a3d7e0; end: 102a3d803;  */

void FUN_102a3d7e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a3d804; end: 102a3d84f;  */

void FUN_102a3d804(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001005c73ec(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x00010074d1f0();
  *param_1 = uVar1;
  return;
}



/* Entry: 102a3d850; end: 102a3da63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a3d850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  
  ppuVar3 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  func_0x000107c610f8();
  lVar1 = _DAT_112ee3fe8;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ee3ff0;
  puStack_a0 = (undefined *)0x0;
  func_0x0001000285a8(0x112d55258,&UNK_10d91c3a0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3ff8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee4000) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee4008) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ee4010) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ee4018) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_5);
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,puVar2);
  uVar6 = *(undefined8 *)(puVar4 + _DAT_112ee4008);
  puVar2 = &UNK_11058b218;
  func_0x000107c613fc(&UNK_11058b218,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar4);
  pcStack_80 = FUN_102a3da64;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b5ebe4;
  puStack_88 = &UNK_11058b230;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_5);
  return puVar4;
}



/* Entry: 102a3da64; end: 102a3da73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3da64(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c3d14c();
        func_0x000107c61180();
        puVar3 = &UNK_11058b218;
        func_0x000107c613fc(&UNK_11058b218,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar1);
        puStack_68 = &UNK_100b704b4;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100b610dc;
        puStack_70 = &UNK_11058b258;
        ppuVar4 = &puStack_88;
        puStack_60 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_60);
        lVar5 = lVar2;
        func_0x000107c5c320(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar5);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(param_1);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102a3da74; end: 102a3dad3; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider init] */

void FUN_102a3da74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesCameraIntegrationImpl.LensesPreviewLensesFeaturesInfoProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3daa0);
  (*pcVar1)();
}



/* Entry: 102a3dad4; end: 102a3db5b; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3daf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3db30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3daf4) */
/* WARNING: Removing unreachable block (ram,0x000102a3db34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3dad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee3ff8));
  return;
}



/* Entry: 102a3db5c; end: 102a3dbf7; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lens] */

void FUN_102a3db5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102a3db90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a3dbf8; end: 102a3dc03; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensApplicableContext] */

void FUN_102a3dbf8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3dc04();
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



/* Entry: 102a3dc04; end: 102a3dca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a3dc04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    param_2 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c40f70(lStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lVar2 = lVar1;
    func_0x000107c3df50(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
    lStack_38 = lVar1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lStack_38;
  return auVar3;
}



/* Entry: 102a3dca8; end: 102a3dcb7; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensUsesCameraRoll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3dca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ee4010),PTR_s_isPickerOpen_1125fc210);
  return;
}



/* Entry: 102a3dcb8; end: 102a3dcc3; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensCarouselSessionId] */

void FUN_102a3dcb8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3dcc4();
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



/* Entry: 102a3dcc4; end: 102a3dd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a3dcc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a3dd40;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a3dd40:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a3dd54; end: 102a3dd5f; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensSwipeId] */

void FUN_102a3dd54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3dd60();
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



/* Entry: 102a3dd60; end: 102a3ddef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a3dd60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4b474();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a3dddc;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a3dddc:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a3ddf0; end: 102a3ddfb; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider currentLensOptionId] */

void FUN_102a3ddf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3ddfc();
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



/* Entry: 102a3ddfc; end: 102a3de8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a3ddfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c40f78();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a3de78;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a3de78:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a3de8c; end: 102a3de97; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider arBarTabSessionId] */

void FUN_102a3de8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3de98();
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



/* Entry: 102a3de98; end: 102a3df27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a3de98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c3e0bc();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(lVar1);
      goto LAB_102a3df14;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_102a3df14:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102a3df28; end: 102a3df33; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider arBarTabCategoryId] */

void FUN_102a3df28(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*(code *)0x102a3dfa0)();
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



/* Entry: 102a3df34; end: 102a3e02f;  */

void FUN_102a3df34(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
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



/* Entry: 102a3e030; end: 102a3e0af; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider frontCameraSnapFacesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e030(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c43b40();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3e090);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Entry: 102a3e0b0; end: 102a3e12f; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider backCameraSnapFacesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e0b0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c3e584();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3e110);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Entry: 102a3e130; end: 102a3e1a3; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider currentLensIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e130(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c40f74(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102a3e1a4; end: 102a3e223; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e1a4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x000107c61170(param_1);
    lVar2 = 0;
  }
  else {
    lVar2 = lStack_38;
    func_0x000107c4b000();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(param_1);
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3e204);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Entry: 102a3e224; end: 102a3e297; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider currentLensOptionSourceTypeRawValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e224(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c40f7c(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102a3e298; end: 102a3e30b; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensSourceRawValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a3e298(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    func_0x000107c4b414(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102a3e30c; end: 102a3e33f; -[_TtC27LensesCameraIntegrationImpl39LensesPreviewLensesFeaturesInfoProvider lensSuggestedSpotlight] */

uint FUN_102a3e30c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a3e340();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102a3e340; end: 102a3e47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102a3e340(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong auStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee3ff0);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(auStack_68);
  func_0x000107c61574(uVar4);
  uVar2 = auStack_68[0];
  if (auStack_68[0] != 0) {
    uVar1 = auStack_68[0];
    func_0x000107c49a2c();
    func_0x000107c61170(uVar2);
    if ((uVar1 & 1) == 0) {
      func_0x0001000d224c(auStack_68);
      if (auStack_68[0] != 0) {
        uVar2 = auStack_68[0];
        func_0x000107c3e0b8();
        func_0x000107c61180();
        func_0x000107c615e8(auStack_68[0]);
        if (uVar2 != 0) {
          uVar1 = uVar2;
          func_0x000107c5faec(uVar2);
          func_0x000107c61170(uVar2);
          func_0x0001000d224c(auStack_68);
          func_0x0001000a8868(auStack_68,uStack_50);
          uVar4 = uStack_50;
          (**(code **)(lStack_48 + 0x130))(uStack_50,lStack_48);
          func_0x0001000834e4(auStack_68);
          func_0x000100077018(uVar1,param_2,uVar4);
          uVar3 = (uint)uVar1;
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(param_2);
          goto LAB_102a3e464;
        }
      }
    }
  }
  uVar3 = 0;
LAB_102a3e464:
  return uVar3 & 1;
}



/* Entry: 102a3e480; end: 102a3e493;  */

void FUN_102a3e480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3e494; end: 102a3e5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3e494(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4ac68();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar6 = *(undefined8 *)(lStack_50 + _DAT_113036468);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_50);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_113036498);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_58);
  lVar2 = 0;
  FUN_102a3e8cc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ee4058) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112ee4060) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112ee4068) = uVar5;
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102a3e5a4; end: 102a3e5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3e5a4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = uStack_48;
  func_0x000107c4ac68();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  uVar6 = *(undefined8 *)(lStack_50 + _DAT_113036468);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(lStack_50);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_113036498);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(lStack_58);
  lVar2 = 0;
  FUN_102a3e8cc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ee4058) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112ee4060) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112ee4068) = uVar5;
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102a3e5ac; end: 102a3e7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3e5ac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x20;
  ulong uStack_58;
  
  if (param_2 == 0) {
    return;
  }
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    return;
  }
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ee4058);
  uVar4 = param_2;
  func_0x000107c4500c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c3d138();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  if (uVar2 == 0) {
    return;
  }
  uVar1 = uVar2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if (uVar3 == param_1 && param_2 == uVar4) {
    func_0x000107c6142c(uVar4);
  }
  else {
    func_0x000107c605b8(uVar3,uVar4,param_1,param_2,0);
    func_0x000107c6142c(uVar4);
    if ((uVar3 & 1) == 0) goto LAB_102a3e784;
  }
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  uVar1 = uStack_58;
  func_0x000107c49e5c();
  func_0x000107c615e8(uVar4);
  if ((uVar1 & 1) == 0) {
    func_0x0001000d224c(&uStack_58);
    uVar4 = uStack_58;
    uVar1 = uStack_58;
    func_0x000107c4f160();
    func_0x000107c615e8(uVar4);
    if ((int)uVar1 != 0) {
      func_0x000107c61174(uVar2);
      func_0x0001000d224c(&uStack_58);
      uVar4 = uStack_58;
      uVar1 = uVar2;
      func_0x000107c44098(uStack_58);
      uVar6 = (uint)uVar1;
      func_0x000107c61180();
      func_0x000107c615e8(uStack_58);
      uVar1 = uVar2;
      func_0x000103f70510(uVar2,uVar4);
      uVar5 = 0;
      func_0x000102a3e8ec(0);
      FUN_102a3e930(uVar1,uVar4,uVar6 & 0x101,uVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(uVar4);
      return;
    }
  }
LAB_102a3e784:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102a3e7ac; end: 102a3e823; -[_TtC26LensPlusSnapDocIntegration29LensPlusSnapDocRecordProvider mediaLensInfoForCapturedLensId:] */

void FUN_102a3e7ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_102a3e5ac(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102a3e824; end: 102a3e883; -[_TtC26LensPlusSnapDocIntegration29LensPlusSnapDocRecordProvider init] */

void FUN_102a3e824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlusSnapDocIntegration.LensPlusSnapDocRecordProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3e850);
  (*pcVar1)();
}



/* Entry: 102a3e884; end: 102a3e8cb; -[_TtC26LensPlusSnapDocIntegration29LensPlusSnapDocRecordProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a3e8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3e8b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3e884(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ee4058));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee4060));
  return;
}



/* Entry: 102a3e8cc; end: 102a3e92f;  */

void FUN_102a3e8cc(void)

{
  func_0x000107c61168(&PTR_PTR_112882550);
  return;
}



/* Entry: 102a3e930; end: 102a3ec8b;  */

undefined8 FUN_102a3e930(byte *param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte **ppbVar7;
  long lVar8;
  undefined8 unaff_x20;
  long lVar9;
  byte *pbStack_50;
  ulong uStack_48;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  pbVar4 = (byte *)((ulong)param_1 & 0xffffffffffff);
  pbVar5 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar6 = pbVar4;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar6 = pbVar5;
  }
  if (pbVar6 == (byte *)0x0) {
    func_0x000107c61174(unaff_x20);
  }
  else if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        param_1 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = pbVar4;
      }
      if (*param_1 == 0x2b) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3ec88);
          (*pcVar3)();
        }
        param_2 = param_2 + -1;
        if (param_2 != (byte *)0x0) {
          lVar9 = 0;
          do {
            param_1 = param_1 + 1;
            if (((9 < *param_1 - 0x30) ||
                (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar9 = lVar8 + uVar1, SCARRY8(lVar8,uVar1))
               ) break;
            param_2 = param_2 + -1;
          } while (param_2 != (byte *)0x0);
        }
      }
      else if (*param_1 == 0x2d) {
        if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3ec80);
          (*pcVar3)();
        }
        param_2 = param_2 + -1;
        if (param_2 != (byte *)0x0) {
          lVar9 = 0;
          while( true ) {
            param_1 = param_1 + 1;
            if ((9 < *param_1 - 0x30) ||
               (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) break;
            uVar1 = (ulong)(byte)(*param_1 - 0x30);
            lVar9 = lVar8 - uVar1;
            if ((SBORROW8(lVar8,uVar1)) || (param_2 = param_2 + -1, param_2 == (byte *)0x0)) break;
          }
        }
      }
      else if (param_2 != (byte *)0x0) {
        lVar9 = 0;
        pbVar6 = param_1;
        while (pbVar6 != (byte *)0x0) {
          if (((9 < *param_1 - 0x30) ||
              (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*param_1 - 0x30), lVar9 = lVar8 + uVar1, SCARRY8(lVar8,uVar1)))
          break;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          pbVar6 = param_2;
        }
      }
    }
    else {
      pbStack_50 = param_1;
      uStack_48 = (ulong)param_2 & 0xffffffffffffff;
      uVar2 = (uint)param_1 & 0xff;
      if (uVar2 == 0x2b) {
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3ec8c);
          (*pcVar3)();
        }
        pbVar5 = pbVar5 + -1;
        if (pbVar5 != (byte *)0x0) {
          lVar9 = 0;
          pbVar6 = (byte *)((ulong)&pbStack_50 | 1);
          do {
            if (((9 < *pbVar6 - 0x30) ||
                (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
               (uVar1 = (ulong)(byte)(*pbVar6 - 0x30), lVar9 = lVar8 + uVar1, SCARRY8(lVar8,uVar1)))
            break;
            pbVar5 = pbVar5 + -1;
            pbVar6 = pbVar6 + 1;
          } while (pbVar5 != (byte *)0x0);
        }
      }
      else if (uVar2 == 0x2d) {
        if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3ec84);
          (*pcVar3)();
        }
        pbVar5 = pbVar5 + -1;
        if (pbVar5 != (byte *)0x0) {
          lVar9 = 0;
          pbVar6 = (byte *)((ulong)&pbStack_50 | 1);
          while( true ) {
            if ((9 < *pbVar6 - 0x30) ||
               (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) break;
            uVar1 = (ulong)(byte)(*pbVar6 - 0x30);
            lVar9 = lVar8 - uVar1;
            if ((SBORROW8(lVar8,uVar1)) ||
               (pbVar5 = pbVar5 + -1, pbVar6 = pbVar6 + 1, pbVar5 == (byte *)0x0)) break;
          }
        }
      }
      else if (pbVar5 != (byte *)0x0) {
        lVar9 = 0;
        ppbVar7 = &pbStack_50;
        while( true ) {
          if ((9 < *(byte *)ppbVar7 - 0x30) ||
             (lVar8 = lVar9 * 10, SUB168(SEXT816(lVar9) * SEXT816(10),8) != lVar8 >> 0x3f)) break;
          uVar1 = (ulong)(byte)(*(byte *)ppbVar7 - 0x30);
          lVar9 = lVar8 + uVar1;
          if ((SCARRY8(lVar8,uVar1)) ||
             (pbVar5 = pbVar5 + -1, ppbVar7 = (byte **)((long)ppbVar7 + 1), pbVar5 == (byte *)0x0))
          break;
        }
      }
    }
    func_0x000107c61174(unaff_x20);
  }
  else {
    func_0x000107c61174(unaff_x20);
    func_0x000107c61434(param_2);
    func_0x000100fb6b80(param_1,param_2,10);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c55d70(unaff_x20);
  func_0x000107c557a4(unaff_x20);
  func_0x000107c55660(unaff_x20);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 102a3ec8c; end: 102a3ec9b;  */

undefined1  [16] FUN_102a3ec8c(void)

{
  return ZEXT816(0x11058b4a8);
}



/* Entry: 102a3ec9c; end: 102a3ed93;  */

void FUN_102a3ec9c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  if ((char)param_1[1] == '\x01') {
    iVar1 = 2;
    lStack_38 = *param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_38,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar3 = lStack_38;
      func_0x000107c3d14c(lStack_38);
      func_0x000107c61180();
      func_0x0001000b637c();
      func_0x000107c615e8(lStack_38);
      func_0x000107c61170(lVar3);
      return;
    }
  }
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x000104886440();
  return;
}



/* Entry: 102a3ed94; end: 102a3ee7b;  */

void FUN_102a3ed94(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_80 [48];
  
  puVar6 = auStack_80;
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61534();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    lVar3 = lVar1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    *(long *)(puVar2 + 0x20) = lVar4;
    *(undefined1 **)(puVar2 + 0x28) = puVar6;
    puVar5 = puVar2;
    func_0x000100111634();
    func_0x000107c61588(puVar2);
    func_0x000100bcb1dc(puVar2 + 0x20);
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 102a3ee7c; end: 102a3efe3;  */

void FUN_102a3ee7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar8 = 0;
    ppuVar7 = (undefined **)0x0;
  }
  else {
    func_0x00010330abb4(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x00010330a2fc();
    func_0x000107c61580(uVar2,3);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    lVar6 = lVar4;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000103417d80(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar9);
    func_0x0001034162e4(uVar8,uVar5,&PTR_DAT_11063c418,FUN_102a3efe4,uVar2,FUN_102a3f0bc,uVar2,
                        0x102a3f10c,uVar2,FUN_102a3f158,uVar1,FUN_102a3f1c4,uVar3,lVar6,uVar9,
                        FUN_102a3f210,0);
    func_0x000107c615e8(lVar4);
    ppuVar7 = &PTR_DAT_1106527e0;
  }
  *param_1 = uVar8;
  param_1[1] = ppuVar7;
  return;
}



/* Entry: 102a3efe4; end: 102a3f0bb;  */

undefined8 FUN_102a3efe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x000107c4a4c0(param_1);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar1 = uStack_48;
  func_0x000107c49fa4();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_48);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_50);
    uVar1 = uStack_50;
    func_0x000107c49fa0(uStack_50);
    func_0x000107c615e8(uStack_50);
  }
  return uVar1;
}



/* Entry: 102a3f0bc; end: 102a3f157;  */

uint FUN_102a3f0bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c49fa0(uStack_28,param_2,param_1,0);
  func_0x000107c615e8(uStack_28);
  return (uint)uVar1 ^ 1;
}



/* Entry: 102a3f158; end: 102a3f1c3;  */

undefined8 FUN_102a3f158(undefined8 param_1)

{
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0xd0))(uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return param_1;
}



/* Entry: 102a3f1c4; end: 102a3f20f;  */

undefined8 FUN_102a3f1c4(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4b314(uStack_28);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_28);
  return uVar1;
}



/* Entry: 102a3f210; end: 102a3f213;  */

void FUN_102a3f210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CACurrentMediaTime_110346c38)();
  return;
}



/* Entry: 102a3f214; end: 102a3f30b;  */

void FUN_102a3f214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102a3f30c; end: 102a3f31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a3f30c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112ee4190,&UNK_10db0f210);
  uVar1 = *(undefined8 *)(lVar4 + _DAT_113046cb0);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112ee4198,&UNK_10db0f218);
  uVar2 = *(undefined8 *)(lVar4 + _DAT_113046cb8);
  func_0x0001000bda74(uVar2);
  uVar3 = 0;
  func_0x000100682aa8(0);
  func_0x000107c613fc();
  FUN_102a3f694(uVar1,1,uVar2,uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a3f31c; end: 102a3f33f;  */

undefined8 FUN_102a3f31c(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 102a3f340; end: 102a3f377;  */

void FUN_102a3f340(long param_1)

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



/* Entry: 102a3f378; end: 102a3f393;  */

/* WARNING: Possible PIC construction at 0x000102a3f384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3f388) */

void FUN_102a3f378(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a3f394; end: 102a3f403;  */

void FUN_102a3f394(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a3f404; end: 102a3f593;  */

void FUN_102a3f404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102a3f594; end: 102a3f5d3;  */

void FUN_102a3f594(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee41a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db0f27c;
  func_0x000107c61520(&UNK_10db0f27c,&UNK_11058b6e8);
  puRam0000000112ee41a0 = puVar1;
  return;
}



/* Entry: 102a3f5d4; end: 102a3f5e7;  */

bool FUN_102a3f5d4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a3f5e8; end: 102a3f693;  */

void FUN_102a3f5e8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a3f694; end: 102a3f717;  */

void FUN_102a3f694(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  *(undefined1 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102a3f718; end: 102a3f783;  */

void FUN_102a3f718(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102a3f784; end: 102a3f9e3;  */

void FUN_102a3f784(long param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar13 = (undefined *)0x112d55580;
    func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
    bVar2 = *(byte *)(lVar14 + 0x50);
    func_0x000107c613fc();
    *(undefined8 *)(puVar13 + 0x18) = 2;
    *(undefined8 *)(puVar13 + 0x10) = 1;
    pcVar10 = *(code **)(lVar14 + 0x10);
    puVar5 = puVar13 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
    puVar9 = param_2;
  }
  else {
    puVar8 = auStack_78;
    func_0x000107c61428(param_1 + 0x30,puVar8,0x20,0);
    lVar12 = *(long *)(param_1 + 0x30);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(lVar12 + 0x10) != 0) {
      func_0x000107c61434(lVar12);
      lVar4 = param_3;
      func_0x000102a40ed4();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)puVar8 & 1) != 0) {
        puVar13 = *(undefined **)(*(long *)(lVar12 + 0x38) + lVar4 * 8);
        func_0x000107c61434(puVar13);
      }
      func_0x000107c6142c(lVar12);
    }
    func_0x000107c614a8(auStack_78);
    (**(code **)(lVar14 + 0x10))(puVar9,param_2,lVar3);
    puVar5 = puVar13;
    func_0x000107c61558();
    puVar7 = puVar13;
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x000101023b20(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar13 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x000101023b20(puVar13,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
    puVar5 = puVar13 + *(long *)(lVar14 + 0x48) * uVar1 +
                       ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    pcVar10 = *(code **)(lVar14 + 0x20);
  }
  (*pcVar10)(puVar5,puVar9,lVar3);
  func_0x000107c61428(param_1 + 0x30,auStack_78,0x21,0);
  func_0x000107c61434(puVar13);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61558(uVar6);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0x8000000000000000;
  FUN_102a40f2c(puVar13,param_3,uVar6,0x112ee42a0,&UNK_10db0f338);
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  func_0x000107c614a8(auStack_78);
  func_0x000107c6142c(puVar13);
  return;
}



/* Entry: 102a3f9e4; end: 102a3fabf; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl addExternalContentPath:source:] */

void FUN_102a3f9e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  if (*(char *)(param_1 + 0x20) != '\0') {
    lStack_70 = param_1;
    puStack_68 = puVar2;
    uStack_60 = param_4;
    func_0x000107c6157c(param_1);
    func_0x000100087bd4(0x102a41c20,auStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_1);
  }
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102a3fac0; end: 102a3fca3;  */

void FUN_102a3fac0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_68 [24];
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar9 = (undefined *)0x112d4c088;
    func_0x0001000285a8(0x112d4c088,&UNK_10d913a10);
    func_0x000107c613fc();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(undefined8 *)(puVar9 + 0x20) = param_2;
    *(undefined8 *)(puVar9 + 0x28) = param_3;
  }
  else {
    puVar6 = auStack_68;
    func_0x000107c61428(param_1 + 0x28,puVar6,0x20,0);
    lVar8 = *(long *)(param_1 + 0x28);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(long *)(lVar8 + 0x10) != 0) {
      func_0x000107c61434(lVar8);
      lVar2 = param_4;
      func_0x000102a40ed4();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (((ulong)puVar6 & 1) != 0) {
        puVar9 = *(undefined **)(*(long *)(lVar8 + 0x38) + lVar2 * 8);
        func_0x000107c61434(puVar9);
      }
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c614a8(auStack_68);
    puVar3 = puVar9;
    func_0x000107c61558();
    puVar5 = puVar9;
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      func_0x000100f23260(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar9 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      func_0x000100f23260(puVar9,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = param_2;
    *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = param_3;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_68,0x21,0);
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61434(puVar9);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61558(uVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0x8000000000000000;
  FUN_102a40f2c(puVar9,param_4,uVar4,0x112ee42b0,&UNK_10db0f348);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 102a3fca4; end: 102a3fd87; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl addExternalContentData:source:] */

/* WARNING: Possible PIC construction at 0x000102a3fd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a3fd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a3fd38) */
/* WARNING: Removing unreachable block (ram,0x000102a3fd64) */

void FUN_102a3fca4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c5ee30();
  func_0x000107c61170(uVar1);
  if (*(char *)(param_1 + 0x20) != '\0') {
    uStack_70 = param_1;
    uStack_68 = param_3;
    uStack_60 = param_2;
    uStack_58 = param_4;
    func_0x000100087bd4(0x102a41c04,auStack_80,PTR___sytN_11034f1b0 + 8);
    uVar2 = (uint)(param_2 >> 0x3e);
    if (uVar2 != 1) {
      if (uVar2 != 2) {
        return;
      }
      func_0x000107c61574(param_3);
    }
    param_1 = param_2 & 0x3fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102a3fd88; end: 102a3fe6f;  */

void FUN_102a3fd88(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x28,puVar2,0x21,0);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61434(uVar4);
  func_0x000102a40ed4();
  func_0x000107c6142c(uVar4);
  uVar4 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
    func_0x000107c61558();
    lVar3 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0x8000000000000000;
    if (iVar1 == 0) {
      FUN_102a410e4(0x112ee42b0,&UNK_10db0f348);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
    func_0x000102a414ac(param_3,lVar3);
    *(long *)(param_2 + 0x28) = lVar3;
  }
  *param_1 = uVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102a3fe70; end: 102a3fe8b; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl cleanupExternalContentForSource:] */

void FUN_102a3fe70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar1 = 0x112ee42a8;
  if (*(char *)(param_1 + 0x20) != '\0') {
    lStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000107c6157c();
    func_0x0001000285a8(0x112ee42a8,&UNK_10db0f340);
    func_0x000100087bd4(&uStack_48,0x102a41bec,auStack_70,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uStack_48);
  }
  return;
}



/* Entry: 102a3fe8c; end: 102a3ff73;  */

void FUN_102a3fe8c(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x30,puVar2,0x21,0);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434(uVar4);
  func_0x000102a40ed4();
  func_0x000107c6142c(uVar4);
  uVar4 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
    func_0x000107c61558();
    lVar3 = *(long *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0x8000000000000000;
    if (iVar1 == 0) {
      FUN_102a410e4(0x112ee42a0,&UNK_10db0f338);
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_3 * 8);
    func_0x000102a414ac(param_3,lVar3);
    *(long *)(param_2 + 0x30) = lVar3;
  }
  *param_1 = uVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102a3ff74; end: 102a3ff8f; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl cleanupExternalPathsForSource:] */

void FUN_102a3ff74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar1 = 0x112ee4298;
  if (*(char *)(param_1 + 0x20) != '\0') {
    lStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000107c6157c();
    func_0x0001000285a8(0x112ee4298,&UNK_10db0f330);
    func_0x000100087bd4(&uStack_48,FUN_102a41bd4,auStack_70,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uStack_48);
  }
  return;
}



/* Entry: 102a3ff90; end: 102a4001b;  */

void FUN_102a3ff90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    lStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000107c6157c();
    func_0x0001000285a8(param_4,param_5);
    func_0x000100087bd4(&uStack_48,param_6,auStack_70,param_4);
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uStack_48);
  }
  return;
}



/* Entry: 102a4001c; end: 102a40087; -[_TtC22LensTinselTrackingImpl16SCLensTinselImpl jpgCompressionLevel] */

undefined8 FUN_102a4001c(undefined8 param_1,undefined8 param_2)

{
  long lStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x000107c4a84c(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61574(param_2);
  return param_1;
}


