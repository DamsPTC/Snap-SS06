/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f52f98; end: 103f52ff3;  */

void FUN_103f52f98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113034378 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103f31834(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  _swift_getWitnessTable(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000113034378 = puVar2;
  return;
}



/* Entry: 103f52ff4; end: 103f53007;  */

undefined8 * FUN_103f52ff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103f53008; end: 103f5304b;  */

void FUN_103f53008(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130343a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103f31918(0xff);
  puVar2 = &UNK_10dcadcdc;
  _swift_getWitnessTable(&UNK_10dcadcdc,uVar1);
  puRam00000001130343a0 = puVar2;
  return;
}



/* Entry: 103f5304c; end: 103f53163;  */

bool FUN_103f5304c(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_1[2] < param_2[2];
  if (param_1[1] != param_2[1]) {
    bVar1 = param_1[1] < param_2[1];
  }
  bVar2 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Entry: 103f53164; end: 103f531c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130343a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f531c8; end: 103f531e7; -[_TtC7SCEmoji24SCOperatingSystemVersion version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f531c8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_1130343a8);
  uVar2 = puVar1[2];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 103f531e8; end: 103f53267; -[_TtC7SCEmoji24SCOperatingSystemVersion init] */

void FUN_103f531e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCEmoji.SCOperatingSystemVersion",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f53214);
  (*pcVar1)();
}



/* Entry: 103f53268; end: 103f53887;  */

undefined1  [16] FUN_103f53268(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1d0de0);
  uVar3 = 0x696a6f6d454353;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x696a6f6d454353,0xe700000000000000);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
    _objc_release(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5332c);
  (*pcVar1)();
}



/* Entry: 103f53888; end: 103f538d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53888(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130343d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f538d4; end: 103f53933; -[BitmojiStyleProvidingServices init] */

void FUN_103f538d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiStyleProvidingServices.BitmojiStyleProvidingServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f53900);
  (*pcVar1)();
}



/* Entry: 103f53934; end: 103f53943; -[BitmojiStyleProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130343d8));
  return;
}



/* Entry: 103f53944; end: 103f539b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f53944(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_113034408) = lVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103f539b4; end: 103f53a13; -[_TtC32LensConversationMetadataServices32LensConversationMetadataServices init] */

void FUN_103f539b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensConversationMetadataServices.LensConversationMetadataServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f539e0);
  (*pcVar1)();
}



/* Entry: 103f53a14; end: 103f53a23; -[_TtC32LensConversationMetadataServices32LensConversationMetadataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034408));
  return;
}



/* Entry: 103f53a24; end: 103f53acf;  */

void FUN_103f53a24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f53ad0; end: 103f53ad3;  */

void FUN_103f53ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcade00;
  _swift_getWitnessTable(&UNK_10dcade00,&UNK_110724380);
  puRam0000000113034438 = puVar1;
  return;
}



/* Entry: 103f53ad4; end: 103f53b13;  */

void FUN_103f53ad4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcade00;
  _swift_getWitnessTable(&UNK_10dcade00,&UNK_110724380);
  puRam0000000113034438 = puVar1;
  return;
}



/* Entry: 103f53b14; end: 103f53c9b;  */

void FUN_103f53b14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103f53c9c; end: 103f53cab; -[_TtC31LensPlusExclusiveLensesServices33SCLensPlusExclusiveLensesServices exclusiveLensesFetcherObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034448));
  return;
}



/* Entry: 103f53cac; end: 103f53db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f53cac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034440) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113034448) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103f53db4; end: 103f53e13; -[_TtC31LensPlusExclusiveLensesServices33SCLensPlusExclusiveLensesServices init] */

void FUN_103f53db4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPlusExclusiveLensesServices.SCLensPlusExclusiveLensesServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f53de0);
  (*pcVar1)();
}



/* Entry: 103f53e14; end: 103f53e4b; -[_TtC31LensPlusExclusiveLensesServices33SCLensPlusExclusiveLensesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53e14(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113034440));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034448));
  return;
}



/* Entry: 103f53e4c; end: 103f53e57; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53e4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113034478);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113034478))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f53e58; end: 103f53eef; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile mediaURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53e58(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113812780,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103f53ef0; end: 103f53efb; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f53ef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113812788);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113812788))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f53efc; end: 103f53f43;  */

void FUN_103f53efc(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f53f44; end: 103f540e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f53f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034478);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar2 = _DAT_113812780;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_3,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812788);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_3,lVar3);
  return puVar4;
}



/* Entry: 103f540e4; end: 103f54207; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile initWithLensId:mediaURL:subtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f540e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = param_2;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_4);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113034478);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  (**(code **)(lVar7 + 0x10))(param_1 + _DAT_113812780,lVar6,lVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_113812788);
  *puVar1 = param_5;
  puVar1[1] = uVar5;
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar7 + 8))(lVar6,lVar3);
  return plVar4;
}



/* Entry: 103f54208; end: 103f54267; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile init] */

void FUN_103f54208(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNGLStudySettingServices.NGLGamesExplorerHeroTile",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f54234);
  (*pcVar1)();
}



/* Entry: 103f54268; end: 103f542cb; -[_TtC25SCNGLStudySettingServices24NGLGamesExplorerHeroTile .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54268(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034478 + 8));
  lVar1 = _DAT_113812780;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113812788 + 8))
  ;
  return;
}



/* Entry: 103f542cc; end: 103f542d3;  */

void FUN_103f542cc(void)

{
  if (lRam00000001130344a8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7d67d8);
  return;
}



/* Entry: 103f542d4; end: 103f5431f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f542d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130344b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f54320; end: 103f5437f; -[_TtC25SCNGLStudySettingServices25SCNGLStudySettingServices init] */

void FUN_103f54320(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNGLStudySettingServices.SCNGLStudySettingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f5434c);
  (*pcVar1)();
}



/* Entry: 103f54380; end: 103f5438f; -[_TtC25SCNGLStudySettingServices25SCNGLStudySettingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130344b8));
  return;
}



/* Entry: 103f54390; end: 103f54457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54390(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130344e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130344f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f54458; end: 103f544b7; -[LensTurnBasedRetryServices init] */

void FUN_103f54458(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensTurnBasedRetryServices.LensTurnBasedRetryServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f54484);
  (*pcVar1)();
}



/* Entry: 103f544b8; end: 103f544ef; -[LensTurnBasedRetryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f544b8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130344e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130344f0));
  return;
}



/* Entry: 103f544f0; end: 103f544ff; -[_TtC27SCLensRemoteApiDataServices27SCLensRemoteApiDataServices remoteApiDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f544f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034520));
  return;
}



/* Entry: 103f54500; end: 103f5454b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54500(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034520) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f5454c; end: 103f545a3; -[_TtC27SCLensRemoteApiDataServices27SCLensRemoteApiDataServices initWithRemoteApiDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5454c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113034520) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f545a4; end: 103f54603; -[_TtC27SCLensRemoteApiDataServices27SCLensRemoteApiDataServices init] */

void FUN_103f545a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensRemoteApiDataServices.SCLensRemoteApiDataServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f545d0);
  (*pcVar1)();
}



/* Entry: 103f54604; end: 103f54613; -[_TtC27SCLensRemoteApiDataServices27SCLensRemoteApiDataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034520));
  return;
}



/* Entry: 103f54614; end: 103f5490f;  */

long FUN_103f54614(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f54910; end: 103f5491b; -[SCLensRemoteApiOAuthProgress specId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54910(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034550))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034550);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5491c; end: 103f54927; -[SCLensRemoteApiOAuthProgress lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5491c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034558))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034558);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f54928; end: 103f54933; -[SCLensRemoteApiOAuthProgress authCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54928(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034560))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034560);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f54934; end: 103f5493f; -[SCLensRemoteApiOAuthProgress state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54934(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034568))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034568);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f54940; end: 103f5494b; -[SCLensRemoteApiOAuthProgress error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113034570))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113034570);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5494c; end: 103f549a3;  */

void FUN_103f5494c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f549a4; end: 103f54a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f549a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034550);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034558);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034560);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034568);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034570);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f54a78; end: 103f54c03; -[SCLensRemoteApiOAuthProgress initWithSpecId:lensId:authCode:state:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54a78(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_2;
    lStack_80 = param_3;
  }
  if (param_4 == 0) {
    param_4 = 0;
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = param_2;
  }
  lVar3 = param_6;
  _objc_retain();
  lVar4 = param_7;
  _objc_retain();
  if (lVar3 == 0) {
    param_6 = 0;
    lVar3 = 0;
    lVar5 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (lVar4 == 0) {
    param_7 = 0;
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_113034550);
  *plVar1 = lStack_80;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(param_1 + _DAT_113034558);
  *plVar1 = param_4;
  plVar1[1] = lVar6;
  plVar1 = (long *)(param_1 + _DAT_113034560);
  *plVar1 = param_5;
  plVar1[1] = lVar7;
  plVar1 = (long *)(param_1 + _DAT_113034568);
  *plVar1 = param_6;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113034570);
  *plVar1 = param_7;
  plVar1[1] = lVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f54c04; end: 103f54cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54c04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [16];
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
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034550);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034558);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034560);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034568);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113034570);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  func_0x000101223174(&uStack_40,auStack_90);
  func_0x000101223174(&uStack_50,auStack_90);
  func_0x000101223174(&uStack_60,auStack_90);
  func_0x000101223174(&uStack_70,auStack_90);
  func_0x000101223174(&uStack_80,auStack_90);
  FUN_103f54cfc(param_1);
  _objc_msgSendSuper2(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f54cfc; end: 103f54d2f;  */

undefined8 FUN_103f54cfc(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f54640)();
  return param_1;
}



/* Entry: 103f54d30; end: 103f54d33; -[SCLensRemoteApiOAuthProgress copyWithZone:] */

void FUN_103f54d30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f54d34; end: 103f54f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f54d34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113034550))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113034550);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f43455053;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f43455053,0xe700000000000000);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113034558))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113034558);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f534e454c,0xe700000000000000);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113034560))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113034560);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x444f435f48545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f435f48545541,0xe900000000000045);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113034568))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113034568);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113034570))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113034570);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x524f525245;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f525245,0xe500000000000000);
  func_0x000107c42744(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103f54f44; end: 103f54f93; -[SCLensRemoteApiOAuthProgress encodeWithCoder:] */

void FUN_103f54f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f54d34(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f54f94; end: 103f54fc3;  */

void FUN_103f54f94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f54fc4(param_1);
  return;
}



/* Entry: 103f54fc4; end: 103f5548f;  */

undefined8 FUN_103f54fc4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0x44495f43455053;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f43455053,0xe700000000000000);
  lVar3 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_c0 = 0;
    lVar3 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_a8;
    uStack_c0 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_c0 = 0;
      lVar3 = 0;
    }
  }
  uVar2 = 0x44495f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f534e454c,0xe700000000000000);
  lVar5 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_c8 = 0;
    lVar5 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uStack_c8 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0x444f435f48545541;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x444f435f48545541,0xe900000000000045);
  lVar6 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar6 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
      lVar6 = 0;
    }
  }
  uVar7 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  lVar8 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar8 = 0;
    uVar7 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_a8;
    uVar7 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
      lVar8 = 0;
    }
  }
  uVar9 = 0x524f525245;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524f525245,0xe500000000000000);
  lVar10 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar10 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
    lVar10 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_b0;
    lVar10 = lStack_a8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
      lVar10 = 0;
    }
  }
  if (lVar3 == 0) {
    uStack_c0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  if (lVar5 == 0) {
    uStack_c8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c8,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,lVar10);
    _swift_bridgeObjectRelease(lVar10);
  }
  func_0x000107c48908(unaff_x20);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 103f55490; end: 103f554b7; -[SCLensRemoteApiOAuthProgress initWithCoder:] */

void FUN_103f55490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f54fc4();
  return;
}



/* Entry: 103f554b8; end: 103f554eb; -[SCLensRemoteApiOAuthProgress description] */

void FUN_103f554b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f554ec; end: 103f55567; -[SCLensRemoteApiOAuthProgress init] */

void FUN_103f554ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCLensRemoteApiDataServices/SCLensRemoteApiOAuthProgressWrapper.swift",0x45,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f55534);
  (*pcVar1)();
}



/* Entry: 103f55568; end: 103f555e3; -[SCLensRemoteApiOAuthProgress .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55568(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034550 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034558 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034560 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113034568 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113034570 + 8))
  ;
  return;
}



/* Entry: 103f555e4; end: 103f55603;  */

void FUN_103f555e4(void)

{
  _objc_opt_self(&PTR_PTR_1129695c8);
  return;
}



/* Entry: 103f55604; end: 103f5560f; -[SCLensRemoteApiOAuthToken specId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55604(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130345a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130345a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f55610; end: 103f5561b; -[SCLensRemoteApiOAuthToken accessToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130345a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130345a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f5561c; end: 103f55627; -[SCLensRemoteApiOAuthToken tokenType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5561c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130345b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130345b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f55628; end: 103f55637; -[SCLensRemoteApiOAuthToken expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f55628(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130345b8);
}



/* Entry: 103f55638; end: 103f55643; -[SCLensRemoteApiOAuthToken refreshToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55638(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130345c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130345c0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f55644; end: 103f5564f; -[SCLensRemoteApiOAuthToken scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55644(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130345c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130345c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f55650; end: 103f556a7;  */

void FUN_103f55650(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f556a8; end: 103f55793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f556a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130345a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130345a8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130345b0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130345b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130345c0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130345c8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f55794; end: 103f55937; -[SCLensRemoteApiOAuthToken initWithSpecId:accessToken:tokenType:expirationTimestamp:refreshToken:scope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55794(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    lStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_98 = param_3;
    lStack_90 = param_4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_3;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = param_3;
  }
  lVar3 = param_7;
  _objc_retain();
  lVar4 = param_8;
  _objc_retain();
  if (lVar3 == 0) {
    param_7 = 0;
    lVar3 = 0;
    lVar5 = param_3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar5 = param_3;
    _objc_release(lVar3);
    lVar3 = param_3;
  }
  if (lVar4 == 0) {
    param_8 = 0;
    lVar5 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  plVar1 = (long *)(param_2 + _DAT_1130345a0);
  *plVar1 = lStack_90;
  plVar1[1] = lStack_98;
  plVar1 = (long *)(param_2 + _DAT_1130345a8);
  *plVar1 = param_5;
  plVar1[1] = lVar6;
  plVar1 = (long *)(param_2 + _DAT_1130345b0);
  *plVar1 = param_6;
  plVar1[1] = lVar7;
  *(undefined8 *)(param_2 + _DAT_1130345b8) = param_1;
  plVar1 = (long *)(param_2 + _DAT_1130345c0);
  *plVar1 = param_7;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_2 + _DAT_1130345c8);
  *plVar1 = param_8;
  plVar1[1] = lVar5;
  lStack_80 = param_2;
  lStack_78 = lVar2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f55938; end: 103f5596b; -[SCLensRemoteApiOAuthToken hash] */

undefined8 FUN_103f55938(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f5596c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f5596c; end: 103f55b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5596c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_1130345a0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130345a0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130345a8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130345a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130345b0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130345b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_1130345b8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_1130345b8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_1130345c0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130345c0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130345c8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130345c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f55b20; end: 103f55dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f55b20(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = ((long *)(unaff_x20 + _DAT_1130345a0))[1];
      lVar4 = ((long *)(lStack_78 + _DAT_1130345a0))[1];
      uVar6 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_1130345a0);
        if (lVar2 == *(long *)(lStack_78 + _DAT_1130345a0) && lVar3 == lVar4) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_1130345a8))[1];
      lVar4 = ((long *)(lStack_78 + _DAT_1130345a8))[1];
      uVar8 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_1130345a8);
        if (lVar2 == *(long *)(lStack_78 + _DAT_1130345a8) && lVar3 == lVar4) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_1130345b0))[1];
      lVar4 = ((long *)(lStack_78 + _DAT_1130345b0))[1];
      uVar9 = (uint)(lVar3 == 0 && lVar4 == 0);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        lVar2 = *(long *)(unaff_x20 + _DAT_1130345b0);
        if ((lVar2 == *(long *)(lStack_78 + _DAT_1130345b0)) && (lVar3 == lVar4)) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar2;
        }
      }
      dVar11 = *(double *)(unaff_x20 + _DAT_1130345b8);
      dVar12 = *(double *)(lStack_78 + _DAT_1130345b8);
      lVar3 = ((long *)(unaff_x20 + _DAT_1130345c0))[1];
      lVar4 = ((long *)(lStack_78 + _DAT_1130345c0))[1];
      uVar10 = (uint)(lVar3 == 0 && lVar4 == 0);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        lVar2 = *(long *)(unaff_x20 + _DAT_1130345c0);
        if ((lVar2 == *(long *)(lStack_78 + _DAT_1130345c0)) && (lVar3 == lVar4)) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar10 = (uint)lVar2;
        }
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_1130345c8))[1];
      lVar4 = ((long *)(lStack_78 + _DAT_1130345c8))[1];
      if (lVar3 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _objc_release(lStack_78);
        if (lVar4 == 0) {
LAB_103f55d90:
          uVar7 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar4);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 0;
        if (lVar4 != 0) {
          lVar2 = *(long *)(unaff_x20 + _DAT_1130345c8);
          if ((lVar2 == *(long *)(lStack_78 + _DAT_1130345c8)) && (lVar3 == lVar4)) {
            _objc_release(lStack_78);
            goto LAB_103f55d90;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar2;
        }
        _objc_release(lStack_78);
      }
      uVar5 = 0;
      if (((uVar6 & uVar8 & uVar9 & 1) != 0) && (dVar11 == dVar12)) {
        uVar5 = uVar10 & uVar7;
      }
      goto LAB_103f55bec;
    }
  }
  uVar5 = 0;
LAB_103f55bec:
  return uVar5 & 1;
}



/* Entry: 103f55dd0; end: 103f55e4f; -[SCLensRemoteApiOAuthToken isEqual:] */

uint FUN_103f55dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f55b20(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103f55e50; end: 103f55e53; -[SCLensRemoteApiOAuthToken copyWithZone:] */

void FUN_103f55e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f55e54; end: 103f55ecf; -[SCLensRemoteApiOAuthToken init] */

void FUN_103f55e54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCLensRemoteApiDataServices/OAuthToken.swift"
             ,0x2c,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f55e9c);
  (*pcVar1)();
}



/* Entry: 103f55ed0; end: 103f55f4b; -[SCLensRemoteApiOAuthToken .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f55ed0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130345a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130345a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130345b0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130345c0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130345c8 + 8))
  ;
  return;
}



/* Entry: 103f55f4c; end: 103f55fbb;  */

void FUN_103f55f4c(void)

{
  _objc_opt_self(&PTR_PTR_1129696b8);
  return;
}



/* Entry: 103f55fbc; end: 103f55feb;  */

bool FUN_103f55fbc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f55fec; end: 103f56043;  */

uint FUN_103f55fec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_103f56044(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f56044; end: 103f561cb;  */

byte FUN_103f56044(ulong *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  lVar4 = *param_2;
  if (uVar3 == 0) {
    if (lVar4 == 0) {
LAB_103f560d0:
      uVar3 = param_2[2];
      if (param_1[2] == 0) {
        if (uVar3 == 0) goto LAB_103f5610c;
      }
      else if ((uVar3 != 0) &&
              (((uVar1 = param_1[1], uVar1 == param_2[1] && (param_1[2] == uVar3)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar1 & 1) != 0)))) {
LAB_103f5610c:
        uVar3 = param_1[3];
        lVar4 = param_2[3];
        if (uVar3 == 0) {
          if (lVar4 == 0) {
LAB_103f5617c:
            if (((int)param_1[4] == (int)param_2[4]) && (param_1[5] == param_2[5])) {
              bVar2 = (byte)param_1[6] ^ *(byte *)(param_2 + 6) ^ 1;
              goto LAB_103f561b4;
            }
          }
        }
        else if (lVar4 != 0) {
          FUN_103f5644c(0,0x112d4d630,&PTR_PTR_1126ae6a8);
          _objc_retain(lVar4);
          _objc_retain();
          uVar1 = uVar3;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar3);
          _objc_release(lVar4);
          if ((uVar1 & 1) != 0) goto LAB_103f5617c;
        }
      }
    }
  }
  else if (lVar4 != 0) {
    FUN_103f5644c(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retain(lVar4);
    _objc_retain();
    uVar1 = uVar3;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar3);
    _objc_release(lVar4);
    if ((uVar1 & 1) != 0) goto LAB_103f560d0;
  }
  bVar2 = 0;
LAB_103f561b4:
  return bVar2 & 1;
}



/* Entry: 103f561cc; end: 103f56227;  */

long FUN_103f561cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f56228; end: 103f56317;  */

undefined8 * FUN_103f56228(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar2);
  return param_1;
}



/* Entry: 103f56318; end: 103f5637b;  */

undefined8 * FUN_103f56318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _objc_release(uVar1);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 103f5637c; end: 103f5644b;  */

int FUN_103f5637c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103f5644c; end: 103f564d7;  */

void FUN_103f5644c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103f564d8; end: 103f56537; -[_TtC29SCLensDataProviderCreationAPI26SCLensDataProviderServices init] */

void FUN_103f564d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensDataProviderCreationAPI.SCLensDataProviderServices",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f56504);
  (*pcVar1)();
}



/* Entry: 103f56538; end: 103f5655f; -[_TtC29SCLensDataProviderCreationAPI26SCLensDataProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034600));
  return;
}



/* Entry: 103f56560; end: 103f5659f;  */

void FUN_103f56560(void)

{
  undefined *puVar1;
  
  if (puRam0000000113034630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcae0e0;
  _swift_getWitnessTable(&UNK_10dcae0e0,&UNK_110724760);
  puRam0000000113034630 = puVar1;
  return;
}



/* Entry: 103f565a0; end: 103f5664b;  */

void FUN_103f565a0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f5664c; end: 103f5667f;  */

void FUN_103f5664c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103f56680; end: 103f566cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f56680(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113034638) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f566cc; end: 103f5672b; -[_TtC29SCLensDataProviderCreationAPI36SCLensUnlockableDataProviderServices init] */

void FUN_103f566cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensDataProviderCreationAPI.SCLensUnlockableDataProviderServices",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f566f8);
  (*pcVar1)();
}



/* Entry: 103f5672c; end: 103f5673b; -[_TtC29SCLensDataProviderCreationAPI36SCLensUnlockableDataProviderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5672c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113034638));
  return;
}



/* Entry: 103f5673c; end: 103f5674b; -[SCLensDataProviderConfiguration filteringPredicate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5673c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034668));
  return;
}



/* Entry: 103f5674c; end: 103f5675b; -[SCLensDataProviderConfiguration originalLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f5674c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113034678));
  return;
}



/* Entry: 103f5675c; end: 103f5676b; -[SCLensDataProviderConfiguration providerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f5675c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113034680);
}



/* Entry: 103f5676c; end: 103f5677b; -[SCLensDataProviderConfiguration explorerLensDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f5676c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113034690);
}


