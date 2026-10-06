/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101eaf994; end: 101eaf9d3;  */

void FUN_101eaf994(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000101eae560();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_2);
  return;
}



/* Entry: 101eaf9d4; end: 101eafb47; -[_TtC29SCSnapMediaPlayerServicesImpl32NativeMediaPlayerServicesFactory createWithRuntime:snapDocEditor:loggingMetadata:updateFPS:mediaPlayerReadyCallback:placeholderContentProvider:orientRenderSizeToSnapGrid:isPreloading:] */

void FUN_101eaf9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined1 param_9
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  puVar1 = &UNK_110494978;
  func_0x000107c613fc(&UNK_110494978,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  if (param_8 == 0) {
    puVar4 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar4 = &UNK_1104949a0;
    func_0x000107c613fc(&UNK_1104949a0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_8;
    pcVar3 = FUN_101eafd54;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  uVar2 = param_3;
  FUN_101eaea1c(param_3,param_4,param_5,param_6,FUN_101eafd48,puVar1,pcVar3,puVar4,param_9);
  func_0x000100cd559c(pcVar3,puVar4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101eafb48; end: 101eafb63;  */

void FUN_101eafb48(void)

{
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101eafb64; end: 101eafb6b;  */

undefined8 FUN_101eafb64(void)

{
  return 1;
}



/* Entry: 101eafb6c; end: 101eafbaf;  */

void FUN_101eafb6c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eafbb0; end: 101eafbd3;  */

void FUN_101eafbb0(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  uVar5 = *(undefined8 *)(lVar8 + 0x20);
  lVar10 = *(long *)(lVar8 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar10 != 0) {
    uVar6 = *(undefined8 *)(lVar8 + 0x68);
    func_0x000107c4c9c0();
    func_0x000107c61180();
    lVar7 = 0;
    func_0x000101ea5910();
    lVar8 = lVar7;
    func_0x000107c613fc();
    puVar9 = PTR__OBJC_CLASS___NSCache_1126b3388;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 *)(lVar8 + 0x58) = 1;
    *(undefined8 *)(lVar8 + 0x50) = 1;
    *(undefined8 *)(lVar8 + 0x48) = 1;
    *(undefined8 *)(lVar8 + 0x10) = uVar3;
    *(undefined8 *)(lVar8 + 0x18) = uVar4;
    *(undefined8 *)(lVar8 + 0x20) = uVar5;
    *(undefined8 *)(lVar8 + 0x28) = uVar1;
    *(undefined **)(lVar8 + 0x30) = puVar9;
    *(long *)(lVar8 + 0x38) = lVar10;
    *(undefined8 *)(lVar8 + 0x40) = uVar6;
    param_1[3] = lVar7;
    param_1[4] = (long)&PTR_DAT_110493c68;
    *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101eaf994);
  (*pcVar2)();
}



/* Entry: 101eafbd4; end: 101eafbf3;  */

void FUN_101eafbd4(void)

{
  FUN_101ea6f40();
  return;
}



/* Entry: 101eafbf4; end: 101eafc0f;  */

void FUN_101eafbf4(long param_1,long param_2)

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



/* Entry: 101eafc10; end: 101eafd47;  */

undefined * FUN_101eafc10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar6 = &puStack_70;
  uVar2 = 0;
  FUN_101ea1398(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = FUN_101eafb48;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f11710;
  puStack_58 = &UNK_110494918;
  func_0x000107c60bc4(&puStack_70);
  uVar4 = 0;
  func_0x000100f115fc(0);
  func_0x000107c614e8();
  func_0x000107c4c214(param_1,param_2,ppuVar3,0,uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar5 = PTR_PTR_1126a9728;
  func_0x000107c610f8(PTR_PTR_1126a9728);
  func_0x000107c47690();
  pcStack_50 = FUN_101eafb64;
  uStack_48 = 0;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1001de374;
  puStack_58 = &UNK_110494940;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c55608(puVar5,param_2,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_1);
  return puVar5;
}



/* Entry: 101eafd48; end: 101eafd53;  */

void FUN_101eafd48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101eafd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101eafd54; end: 101eafd73;  */

void FUN_101eafd54(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101eafd74; end: 101eafd87;  */

void FUN_101eafd74(long param_1,long param_2)

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



/* Entry: 101eafd88; end: 101eafdab; -[_TtC29SCSnapMediaPlayerServicesImpl24VolumeOverrideController overrideNativeVolume] */

void FUN_101eafd88(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = "overrideNativeVolume()";
  puVar2 = &UNK_110494a68;
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0("overrideNativeVolume()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110494a68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x101eaffb4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110494a80;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101eafdac; end: 101eafdcf; -[_TtC29SCSnapMediaPlayerServicesImpl24VolumeOverrideController overrideMuteSwitch] */

void FUN_101eafdac(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = "overrideMuteSwitch()";
  puVar2 = &UNK_110494a18;
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0("overrideMuteSwitch()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110494a18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_50 = 0x101eaff98;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110494a30;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101eafdd0; end: 101eafdf3; -[_TtC29SCSnapMediaPlayerServicesImpl24VolumeOverrideController resetOverride] */

void FUN_101eafdd0(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  pcVar1 = "resetOverride()";
  puVar2 = &UNK_1104949c8;
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0("resetOverride()");
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1104949c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_50 = FUN_101eaff60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104949e0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101eafdf4; end: 101eafed3;  */

void FUN_101eafdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c61174();
  func_0x0001000c10c0(param_3);
  func_0x000107c61180();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_6;
  uStack_50 = param_5;
  lStack_48 = param_4;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 101eafed4; end: 101eaff2f; -[_TtC29SCSnapMediaPlayerServicesImpl24VolumeOverrideController init] */

void FUN_101eafed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapMediaPlayerServicesImpl.VolumeOverrideController",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eaff00);
  (*pcVar1)();
}



/* Entry: 101eaff30; end: 101eaff3f; -[_TtC29SCSnapMediaPlayerServicesImpl24VolumeOverrideController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eaff30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e37498));
  return;
}



/* Entry: 101eaff40; end: 101eaff5f;  */

void FUN_101eaff40(void)

{
  func_0x000107c61168(&PTR_PTR_112807b78);
  return;
}



/* Entry: 101eaff60; end: 101eaffff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eaff60(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e37498);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_restoreNativeVolumeForObject__11262cb70);
    return;
  }
  return;
}



/* Entry: 101eb0000; end: 101eb001f;  */

void FUN_101eb0000(void)

{
  func_0x000107c61168(&PTR_PTR_112e37508);
  return;
}



/* Entry: 101eb0020; end: 101eb002b;  */

undefined8 FUN_101eb0020(void)

{
  return 0;
}



/* Entry: 101eb002c; end: 101eb005b;  */

void FUN_101eb002c(code *param_1)

{
  (*param_1)(0,0,0);
  return;
}



/* Entry: 101eb005c; end: 101eb0093;  */

undefined * FUN_101eb005c(void)

{
  return &UNK_110494bc0;
}



/* Entry: 101eb0094; end: 101eb018b;  */

undefined1  [16] FUN_101eb0094(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == '\x01') {
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0x7274206f69647541;
    uStack_38 = 0xec000000206b6361;
    func_0x000107c5fb78(param_1,param_2);
    param_2 = 0x800000010f017d40;
    param_1 = 0xd000000000000010;
  }
  else {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd000000000000017;
    uStack_38 = 0x800000010f017d60;
  }
  func_0x000107c5fb78(param_1,param_2);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 101eb018c; end: 101eb01c7;  */

void FUN_101eb018c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101eb01c8; end: 101eb0263;  */

undefined8 * FUN_101eb01c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101eb01a8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101eb0264; end: 101eb02a7;  */

undefined8 * FUN_101eb0264(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101eb01c0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101eb02a8; end: 101eb035f;  */

int FUN_101eb02a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101eb0360; end: 101eb03ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb0360(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e37560) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101eb03ac; end: 101eb0407; -[_TtC18SCNGSMESnapBuilder24NGSMESnapBuilderServices init] */

void FUN_101eb03ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNGSMESnapBuilder.NGSMESnapBuilderServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb03d8);
  (*pcVar1)();
}



/* Entry: 101eb0408; end: 101eb0417; -[_TtC18SCNGSMESnapBuilder24NGSMESnapBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb0408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e37560));
  return;
}



/* Entry: 101eb0418; end: 101eb0c37;  */

void FUN_101eb0418(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x0001002b08c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a9730;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc33f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2cd50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 101eb0c38; end: 101eb0ca3;  */

void FUN_101eb0c38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101eb0ca4; end: 101eb0cd7;  */

undefined1  [16] FUN_101eb0ca4(void)

{
  return ZEXT816(0x110494da0);
}



/* Entry: 101eb0cd8; end: 101eb0cff;  */

void FUN_101eb0cd8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb0d00; end: 101eb0d4b;  */

undefined8 FUN_101eb0d00(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101eb0d4c; end: 101eb0d5f;  */

bool FUN_101eb0d4c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101eb0d60; end: 101eb0e2f;  */

void FUN_101eb0d60(void)

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



/* Entry: 101eb0e30; end: 101eb0e47;  */

undefined1  [16] FUN_101eb0e30(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101eb0e48; end: 101eb0e97;  */

void FUN_101eb0e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001006e24f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101eb0e98; end: 101eb103b;  */

void FUN_101eb0e98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [23];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x112e37690;
  func_0x0001000285a8(0x112e37690,&UNK_10da21590);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x0001006e24f0();
  func_0x000107c606ec(auStack_a0 + -extraout_x8,&UNK_110494f88,&UNK_110494f88,param_1,uVar1,uVar2);
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_81 = 0;
  puVar4 = &uStack_60;
  func_0x0001006e36f4(puVar4,auStack_98);
  func_0x000101480d6c();
  func_0x000107c60554(&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
  func_0x00010006c090(uStack_80,uStack_78);
  if (unaff_x21 == 0) {
    uStack_68 = unaff_x20[3];
    uStack_70 = unaff_x20[2];
    uStack_78 = unaff_x20[3];
    uStack_80 = unaff_x20[2];
    uStack_81 = 1;
    func_0x0001006e36f4(&uStack_70,auStack_98);
    func_0x000107c60554(&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x00010006c090(uStack_80,uStack_78);
    uStack_80 = CONCAT71(uStack_80._1_7_,2);
    func_0x000107c6054c(unaff_x20[4],&uStack_80,lVar3);
  }
  (**(code **)(lVar5 + 8))(auStack_a0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 101eb103c; end: 101eb104f;  */

void FUN_101eb103c(void)

{
  FUN_101eb0e98();
  return;
}



/* Entry: 101eb1050; end: 101eb119f;  */

undefined4 FUN_101eb1050(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x4b65746176697270 && param_2 == -0x15ffffffffff869b) ||
     (func_0x000107c605b8(0x4b65746176697270,0xea00000000007965,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x654b63696c627570) && (param_2 == -0x16ffffffffffff87)) ||
       (func_0x000107c605b8(0x654b63696c627570,0xe900000000000079,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x6e6f6973726576) && (param_2 == -0x1900000000000000)) {
        func_0x000107c6142c(0xe700000000000000);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x6e6f6973726576,0xe700000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 101eb11a0; end: 101eb1267;  */

undefined8 * FUN_101eb11a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 101eb1268; end: 101eb12b7;  */

undefined8 * FUN_101eb1268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 101eb12b8; end: 101eb13b7;  */

void FUN_101eb12b8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Entry: 101eb13b8; end: 101eb13f7;  */

void FUN_101eb13b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e376a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da216c8;
  func_0x000107c61520(&UNK_10da216c8,&UNK_110494f88);
  puRam0000000112e376a0 = puVar1;
  return;
}



/* Entry: 101eb13f8; end: 101eb1507;  */

/* WARNING: Removing unreachable block (ram,0x000101eb146c) */

undefined8 FUN_101eb13f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_60 = param_1[4];
  uVar4 = uVar1;
  FUN_101eb1518();
  puVar5 = &UNK_110494ee8;
  puVar2 = &uStack_80;
  func_0x000107c5eb4c(puVar2,&UNK_110494ee8,uVar4);
  puVar3 = puVar2;
  func_0x000107c5ee20();
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f017db0);
  func_0x000107c56bcc(param_2);
  func_0x00010006c090(puVar2,puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar1);
  return 1;
}



/* Entry: 101eb1508; end: 101eb1517;  */

undefined1  [16] FUN_101eb1508(void)

{
  return ZEXT816(0x110495058);
}



/* Entry: 101eb1518; end: 101eb1557;  */

void FUN_101eb1518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e376c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da215c0;
  func_0x000107c61520(&UNK_10da215c0,&UNK_110494ee8);
  puRam0000000112e376c8 = puVar1;
  return;
}



/* Entry: 101eb1558; end: 101eb164f; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper putUserIdentityWithPrivateKey:publicKey:version:in:] */

uint FUN_101eb1558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  func_0x000107c5ee30();
  uVar3 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5ee30();
  func_0x000107c61170(param_4);
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = uVar1;
  uStack_60 = uVar3;
  uStack_58 = param_5;
  func_0x00010006c00c(param_3,param_2);
  func_0x00010006c00c(uVar1,uVar3);
  puVar2 = &uStack_78;
  FUN_101eb13f8(puVar2,param_6);
  FUN_101eb1718(&uStack_78);
  func_0x00010006c090(uVar1,uVar3);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c615e8(param_6);
  return (uint)puVar2 & 1;
}



/* Entry: 101eb1650; end: 101eb16ab; +[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper cleanupUserIdentityIn:] */

void FUN_101eb1650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f017db0);
  func_0x000107c4ff88(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 101eb16ac; end: 101eb16e7; -[_TtC29FideliusExtensionIdentityUtil38FideliusExtensionIdentityHelperWrapper init] */

void FUN_101eb16ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101eb174c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101eb16e8; end: 101eb1717;  */

void FUN_101eb16e8(void)

{
  FUN_101eb174c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101eb1718; end: 101eb174b;  */

undefined8 FUN_101eb1718(undefined8 param_1)

{
  (*(code *)&DAT_1006e57e8)();
  return param_1;
}



/* Entry: 101eb174c; end: 101eb176b;  */

void FUN_101eb174c(void)

{
  func_0x000107c61168(&PTR_PTR_112807d10);
  return;
}



/* Entry: 101eb176c; end: 101eb17f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb176c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e37700);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e37708);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e37710) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101eb17f8; end: 101eb18cb; -[SCFideliusExtensionIdentity initWithPrivateKey:publicKey:version:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eb17f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30();
  uVar3 = param_2;
  func_0x000107c61170(uVar2);
  uVar2 = param_4;
  func_0x000107c5ee30();
  func_0x000107c61170();
  puVar1 = (undefined8 *)(param_1 + _DAT_112e37700);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e37708);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_1 + _DAT_112e37710) = param_5;
  func_0x0001006e36d4();
  lStack_60 = param_1;
  uStack_58 = param_4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101eb18cc; end: 101eb1927; -[SCFideliusExtensionIdentity init] */

void FUN_101eb18cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FideliusExtensionIdentityUtil.FideliusExtensionIdentityObjc",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb18f8);
  (*pcVar1)();
}



/* Entry: 101eb1928; end: 101eb1ad3;  */

long FUN_101eb1928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  func_0x0001004eb8bc();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004eb954();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001004ebad0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 101eb1ad4; end: 101eb1b47;  */

void FUN_101eb1ad4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101eb1b48; end: 101eb1b8b;  */

undefined1  [16] FUN_101eb1b48(void)

{
  return ZEXT816(0x110495160);
}



/* Entry: 101eb1b8c; end: 101eb1bdf;  */

void FUN_101eb1b8c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb1be0; end: 101eb1d1b;  */

long FUN_101eb1be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  func_0x0001000285a8(0x112e37858,&UNK_10da219b8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010025a71c();
  puVar2 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010095bea0(0);
  func_0x000107c613fc();
  func_0x000107c61174(puVar2);
  func_0x00010095bec0(param_1,param_2,param_3,param_4,param_5,puVar2);
  func_0x000107c61574(param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101eb1d1c; end: 101eb1d67;  */

void FUN_101eb1d1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb1d68; end: 101eb1daf;  */

undefined8 FUN_101eb1d68(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101ebe9d8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 101eb1db0; end: 101eb1deb;  */

undefined1  [16] FUN_101eb1db0(void)

{
  return ZEXT816(0x110495228);
}



/* Entry: 101eb1dec; end: 101eb1e57;  */

long FUN_101eb1dec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001004e9a00();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x0001004e9a6c();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 101eb1e58; end: 101eb1e83;  */

void FUN_101eb1e58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb1e84; end: 101eb1ec7;  */

undefined1  [16] FUN_101eb1e84(void)

{
  return ZEXT816(0x1104952a8);
}



/* Entry: 101eb1ec8; end: 101eb1f1b;  */

void FUN_101eb1ec8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb1f1c; end: 101eb2033;  */

long FUN_101eb1f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  func_0x000100962700(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000100962720(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101eb2034; end: 101eb20a7;  */

void FUN_101eb2034(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101eb20a8; end: 101eb20ef;  */

undefined8 FUN_101eb20a8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101ebbba8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 101eb20f0; end: 101eb212b;  */

undefined1  [16] FUN_101eb20f0(void)

{
  return ZEXT816(0x110495370);
}



/* Entry: 101eb212c; end: 101eb21ef;  */

long FUN_101eb212c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001009635c8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x0001009635e8(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101eb21f0; end: 101eb2233;  */

void FUN_101eb21f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb2234; end: 101eb227b;  */

undefined8 FUN_101eb2234(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_101ebc584();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 101eb227c; end: 101eb22b7;  */

undefined1  [16] FUN_101eb227c(void)

{
  return ZEXT816(0x110495418);
}



/* Entry: 101eb22b8; end: 101eb234b;  */

void FUN_101eb22b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100292d00();
  func_0x000107c613fc();
  FUN_101eb23ac(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101eb234c; end: 101eb2357;  */

void FUN_101eb234c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100292d00();
  func_0x000107c613fc();
  FUN_101eb23ac(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101eb2358; end: 101eb23ab;  */

undefined8 FUN_101eb2358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101eb23ac(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101eb23ac; end: 101eb2487;  */

void FUN_101eb23ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101ec6ce0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101ec6908();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ec6984();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101eb2488; end: 101eb24c3;  */

void FUN_101eb2488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb24c4; end: 101eb2517;  */

void FUN_101eb24c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101eb2518; end: 101eb2563;  */

void FUN_101eb2518(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101eb2564; end: 101eb25b7;  */

void FUN_101eb2564(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb25b8; end: 101eb2c73;  */

void FUN_101eb25b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a9738;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef32c60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbb450);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f007250);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f017e10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f017e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_12);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f017e50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
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
    func_0x000107c61170(param_12);
    *(undefined **)(unaff_x20 + 0x78) = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eb2c74);
  (*pcVar1)();
}



/* Entry: 101eb2c74; end: 101eb2d17;  */

void FUN_101eb2c74(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101eb2d18; end: 101eb2d67;  */

undefined8 FUN_101eb2d18(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101eb2d68; end: 101eb2dab;  */

undefined1  [16] FUN_101eb2d68(void)

{
  return ZEXT816(0x110495588);
}



/* Entry: 101eb2dac; end: 101eb2dd3;  */

void FUN_101eb2dac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101eb2dd4; end: 101eb2ddb;  */

undefined8 FUN_101eb2dd4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101eb2ddc; end: 101eb2e8b;  */

void FUN_101eb2ddc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002a19c0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101eb2f8c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101eb2e8c; end: 101eb2e97;  */

void FUN_101eb2e8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002a19c0();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101eb2f8c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101eb2e98; end: 101eb2f07;  */

undefined8 FUN_101eb2e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101eb2f8c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101eb2f08; end: 101eb2f3b;  */

void FUN_101eb2f08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eb2f3c; end: 101eb2f8b;  */

undefined8 FUN_101eb2f3c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101eb2f8c; end: 101eb3133;  */

void FUN_101eb2f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9740;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


