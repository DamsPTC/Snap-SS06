/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042d7644; end: 1042d777b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306bfb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfd8) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d777c; end: 1042d7817; -[SCSponsoredLensEngagedClick initWithCoordinateX:coordinateY:screenRatioX:screenRatioY:tapTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d777c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  _swift_getObjectType();
  *(undefined8 *)(param_5 + _DAT_11306bfb8) = param_1;
  *(undefined8 *)(param_5 + _DAT_11306bfc0) = param_2;
  *(undefined8 *)(param_5 + _DAT_11306bfc8) = param_3;
  *(undefined8 *)(param_5 + _DAT_11306bfd0) = param_4;
  *(undefined8 *)(param_5 + _DAT_11306bfd8) = param_7;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d7818; end: 1042d789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7818(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306bfb8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfc0) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306bfc8) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306bfd0) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306bfd8) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d78a0; end: 1042d78bf; -[SCSponsoredLensEngagedClick hash] */

void FUN_1042d78a0(void)

{
  FUN_1042d78c0();
  return;
}



/* Entry: 1042d78c0; end: 1042d7993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d78c0(void)

{
  long unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306bfb8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306bfb8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306bfc0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306bfc0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306bfc8) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306bfc8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11306bfd0) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_11306bfd0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11306bfd8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d7994; end: 1042d7aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042d7994(undefined8 param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      dVar4 = *(double *)(unaff_x20 + _DAT_11306bfb8);
      dVar5 = *(double *)(lStack_88 + _DAT_11306bfb8);
      dVar6 = *(double *)(unaff_x20 + _DAT_11306bfc0);
      dVar7 = *(double *)(lStack_88 + _DAT_11306bfc0);
      dVar8 = *(double *)(unaff_x20 + _DAT_11306bfc8);
      dVar9 = *(double *)(lStack_88 + _DAT_11306bfc8);
      dVar10 = *(double *)(unaff_x20 + _DAT_11306bfd0);
      dVar11 = *(double *)(lStack_88 + _DAT_11306bfd0);
      lVar2 = *(long *)(unaff_x20 + _DAT_11306bfd8);
      lVar3 = *(long *)(lStack_88 + _DAT_11306bfd8);
      _objc_release();
      return lVar2 == lVar3 &&
             (dVar10 == dVar11 && (dVar8 == dVar9 && (dVar6 == dVar7 && dVar4 == dVar5)));
    }
  }
  return false;
}



/* Entry: 1042d7aac; end: 1042d7b2b; -[SCSponsoredLensEngagedClick isEqual:] */

uint FUN_1042d7aac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042d7994(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d7b2c; end: 1042d7b2f; -[SCSponsoredLensEngagedClick copyWithZone:] */

void FUN_1042d7b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d7b30; end: 1042d7cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7b30(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bfb8);
  uVar1 = 0x414e4944524f4f43;
  uVar3 = uVar1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e4944524f4f43,0xec000000585f4554);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bfc0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e4944524f4f43,0xec000000595f4554);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306bfc8);
  uVar1 = 0x525f4e4545524353;
  uVar3 = uVar1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f4e4545524353,0xee00585f4f495441);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11306bfd0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f4e4545524353,0xee00595f4f495441);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  uVar3 = 0x454d49545f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d49545f504154,0xed0000504d415453);
  func_0x00010bf92fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1042d7cbc; end: 1042d7d0b; -[SCSponsoredLensEngagedClick encodeWithCoder:] */

void FUN_1042d7cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042d7b30(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d7d0c; end: 1042d7d4b;  */

undefined8 FUN_1042d7d0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042d7e24(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042d7d4c; end: 1042d7d87; -[SCSponsoredLensEngagedClick initWithCoder:] */

undefined8 FUN_1042d7d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042d7e24();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1042d7d88; end: 1042d7da3; -[SCSponsoredLensEngagedClick description] */

void FUN_1042d7d88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d7da4; end: 1042d7e1f; -[SCSponsoredLensEngagedClick init] */

void FUN_1042d7da4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensEngagementServices/SponsoredLensEngagedClickWrapper.swift",0x46,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d7dec);
  (*pcVar1)();
}



/* Entry: 1042d7e20; end: 1042d7e23; -[SCSponsoredLensEngagedClick .cxx_destruct] */

void FUN_1042d7e20(void)

{
  return;
}



/* Entry: 1042d7e24; end: 1042d7f97;  */

void FUN_1042d7e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x414e4944524f4f43;
  uVar1 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e4944524f4f43,0xec000000585f4554);
  func_0x00010bf66da0(param_2);
  uVar4 = param_1;
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e4944524f4f43,0xec000000595f4554);
  func_0x00010bf66da0(param_2);
  uVar5 = uVar4;
  _objc_release(uVar2);
  uVar3 = 0x525f4e4545524353;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f4e4545524353,0xee00585f4f495441);
  func_0x00010bf66da0(param_2);
  uVar2 = uVar5;
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x525f4e4545524353,0xee00595f4f495441);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar3);
  uVar1 = 0x454d49545f504154;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d49545f504154,0xed0000504d415453);
  func_0x00010bf66f00(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c005b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,uVar4,uVar5,uVar2);
  return;
}



/* Entry: 1042d7f98; end: 1042d7fb7;  */

void FUN_1042d7f98(void)

{
  _objc_opt_self(&PTR_PTR_1129963b0);
  return;
}



/* Entry: 1042d7fb8; end: 1042d7fc7; -[SCSponsoredLensShoppingLensTracking placementType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d7fb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c008);
}



/* Entry: 1042d7fc8; end: 1042d7fdf; -[SCSponsoredLensShoppingLensTracking totalCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1042d7fc8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11306c010);
}



/* Entry: 1042d7fe0; end: 1042d810b; -[SCSponsoredLensShoppingLensTracking initWithPlacementType:totalCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d7fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306c008) = param_3;
  *(undefined4 *)(param_1 + _DAT_11306c010) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d810c; end: 1042d8167; -[SCSponsoredLensShoppingLensTracking hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d810c(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(param_1 + _DAT_11306c008));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(param_1 + _DAT_11306c010));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d8168; end: 1042d821b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1042d8168(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar6 = &lStack_58;
    _swift_dynamicCast(plVar6,auStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11306c008);
      iVar2 = *(int *)(lStack_58 + _DAT_11306c008);
      iVar3 = *(int *)(unaff_x20 + _DAT_11306c010);
      iVar4 = *(int *)(lStack_58 + _DAT_11306c010);
      _objc_release();
      return iVar1 == iVar2 && iVar3 == iVar4;
    }
  }
  return false;
}



/* Entry: 1042d821c; end: 1042d829b; -[SCSponsoredLensShoppingLensTracking isEqual:] */

uint FUN_1042d821c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042d8168(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042d829c; end: 1042d829f; -[SCSponsoredLensShoppingLensTracking copyWithZone:] */

void FUN_1042d829c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d82a0; end: 1042d837b; -[SCSponsoredLensShoppingLensTracking encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d82a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4e454d4543414c50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e454d4543414c50,0xee00455059545f54);
  func_0x00010bf92fc0(param_3);
  _objc_release(uVar1);
  uVar1 = 0x4f435f4c41544f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4c41544f54,0xeb00000000544e55);
  func_0x00010bf92f80(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d837c; end: 1042d83ab;  */

void FUN_1042d837c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042d83ac(param_1);
  return;
}



/* Entry: 1042d83ac; end: 1042d84b7;  */

undefined8 FUN_1042d83ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_x20;
  
  uVar1 = 0x4e454d4543414c50;
  uVar3 = 0x59545f54;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e454d4543414c50);
  uVar2 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  FUN_1042d69b8(uVar2);
  if ((uVar3 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    uVar2 = 0x4f435f4c41544f54;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f4c41544f54,0xeb00000000544e55);
    func_0x00010bf66ee0(param_1);
    _objc_release(uVar2);
    func_0x00010c036960();
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 1042d84b8; end: 1042d84df; -[SCSponsoredLensShoppingLensTracking initWithCoder:] */

void FUN_1042d84b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042d83ac();
  return;
}



/* Entry: 1042d84e0; end: 1042d84fb; -[SCSponsoredLensShoppingLensTracking description] */

void FUN_1042d84e0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d84fc; end: 1042d8577; -[SCSponsoredLensShoppingLensTracking init] */

void FUN_1042d84fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensEngagementServices/SponsoredLensShoppingLensTrackingWrapper.swift",0x4e,2
             ,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8544);
  (*pcVar1)();
}



/* Entry: 1042d8578; end: 1042d857b; -[SCSponsoredLensShoppingLensTracking .cxx_destruct] */

void FUN_1042d8578(void)

{
  return;
}



/* Entry: 1042d857c; end: 1042d859b;  */

void FUN_1042d857c(void)

{
  _objc_opt_self(&PTR_PTR_1129964a0);
  return;
}



/* Entry: 1042d859c; end: 1042d85e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d859c(undefined8 param_1,undefined4 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c008) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11306c010) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d85e8; end: 1042d862b;  */

uint FUN_1042d85e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1042d862c(uVar1,param_1[1],*(undefined1 *)(param_1 + 2),param_1[3],param_1[4],*param_2,
                param_2[1],*(undefined1 *)(param_2 + 2),param_2[3],param_2[4]);
  return (uint)uVar1 & 1;
}



/* Entry: 1042d862c; end: 1042d86eb;  */

long FUN_1042d862c(ulong param_1,long param_2,char param_3,long param_4,long param_5,ulong param_6,
                  long param_7,char param_8,long param_9,long param_10)

{
  if ((param_1 == param_6) && (param_2 == param_7)) {
    if (param_3 != param_8) {
      return 0;
    }
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,param_6,param_7,0);
    if ((param_1 & 1) == 0) {
      return 0;
    }
    if (param_3 != param_8) {
      return 0;
    }
  }
  if (param_4 == param_9 && param_5 == param_10) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_4,param_5,param_9,param_10,0);
  return param_4;
}



/* Entry: 1042d86ec; end: 1042d86f3;  */

void FUN_1042d86ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1042d86f4; end: 1042d87a7;  */

undefined1 * FUN_1042d86f4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042d87a8; end: 1042d884f;  */

int FUN_1042d87a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042d8850; end: 1042d88ef;  */

long FUN_1042d8850(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042d88f0; end: 1042d896b;  */

undefined8 * FUN_1042d88f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1042d896c; end: 1042d89bf;  */

undefined8 * FUN_1042d896c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 1042d89c0; end: 1042d8a6b;  */

int FUN_1042d89c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042d8a6c; end: 1042d8a97;  */

void FUN_1042d8a6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  FUN_1042d8a98();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d8a98; end: 1042d8ab7;  */

void FUN_1042d8a98(void)

{
  _objc_opt_self(&PTR_PTR_112996578);
  return;
}



/* Entry: 1042d8ab8; end: 1042d8abb; -[SCLensPlayableTrackInfo copyWithZone:] */

void FUN_1042d8ab8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042d8abc; end: 1042d8caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d8abc(undefined1 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000030;
  undefined1 auStack_70 [8];
  
  _swift_bridgeObjectRelease(in_stack_00000020);
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c048);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306c040) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c050);
  *puVar1 = param_6;
  *(undefined1 *)(puVar1 + 1) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c058);
  *puVar1 = param_8;
  *(undefined1 *)(puVar1 + 1) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c060);
  *puVar1 = param_11;
  *(undefined1 *)(puVar1 + 1) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11306c068) = in_stack_00000030._1_1_;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d8cb0; end: 1042d8efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1042d8cb0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR_PTR_1126e1520;
  _objc_allocWithZone(PTR_PTR_1126e1520);
  func_0x00010bfee200();
  puVar3 = PTR_PTR_1126c0308;
  _objc_allocWithZone(PTR_PTR_1126c0308);
  func_0x00010bfee200();
  func_0x00010c220160();
  func_0x00010c181b00(puVar2,param_2,puVar3);
  if ((char)((long *)(unaff_x20 + _DAT_11306c048))[1] != '\x01') {
    lVar6 = *(long *)(unaff_x20 + _DAT_11306c048);
    puVar4 = PTR_PTR_1126c0350;
    _objc_allocWithZone(PTR_PTR_1126c0350);
    func_0x00010bfee200();
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8ef0);
      (*pcVar1)();
    }
    func_0x00010c220160();
    func_0x00010c21a6a0(puVar2,param_2,puVar4);
    puVar5 = PTR_PTR_1126c0308;
    _objc_allocWithZone(PTR_PTR_1126c0308);
    func_0x00010bfee200();
    func_0x00010c220160();
    func_0x00010c21a680(puVar2,param_2,puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if ((char)((long *)(unaff_x20 + _DAT_11306c050))[1] != '\x01') {
    lVar6 = *(long *)(unaff_x20 + _DAT_11306c050);
    puVar4 = PTR_PTR_1126c0350;
    _objc_allocWithZone(PTR_PTR_1126c0350);
    func_0x00010bfee200();
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8ef4);
      (*pcVar1)();
    }
    func_0x00010c220160();
    func_0x00010c1dd340(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  if ((char)((long *)(unaff_x20 + _DAT_11306c058))[1] != '\x01') {
    lVar6 = *(long *)(unaff_x20 + _DAT_11306c058);
    puVar4 = PTR_PTR_1126c0350;
    _objc_allocWithZone(PTR_PTR_1126c0350);
    func_0x00010bfee200();
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8ef8);
      (*pcVar1)();
    }
    func_0x00010c220160();
    func_0x00010c1dd320(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11306c060))[1] != '\x01') {
    uVar7 = *(ulong *)(unaff_x20 + _DAT_11306c060);
    puVar4 = PTR_PTR_1126bfab0;
    _objc_allocWithZone(PTR_PTR_1126bfab0);
    func_0x00010bfee200();
    if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8efc);
      (*pcVar1)();
    }
    func_0x00010c220160();
    func_0x00010c1dd360(puVar2,param_2,puVar4);
    _objc_release(puVar4);
  }
  if (*(char *)(unaff_x20 + _DAT_11306c068) != '\x02') {
    puVar4 = PTR_PTR_1126c0308;
    _objc_allocWithZone(PTR_PTR_1126c0308);
    func_0x00010bfee200();
    func_0x00010c220160();
    _objc_retain(puVar4);
    func_0x00010c1ed920(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  return puVar2;
}



/* Entry: 1042d8efc; end: 1042d8f2f; -[SCLensPlayableTrackInfo toProto] */

void FUN_1042d8efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042d8cb0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042d8f30; end: 1042d8f8b; -[SCLensPlayableTrackInfo init] */

void FUN_1042d8f30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensTrackerServices.SCLensPlayableTrackInfo",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d8f5c);
  (*pcVar1)();
}



/* Entry: 1042d8f8c; end: 1042d8f9f;  */

bool FUN_1042d8f8c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042d8fa0; end: 1042d904b;  */

void FUN_1042d8fa0(void)

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



/* Entry: 1042d904c; end: 1042d904f;  */

void FUN_1042d904c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce67b0;
  _swift_getWitnessTable(&UNK_10dce67b0,&UNK_110755730);
  puRam000000011306c098 = puVar1;
  return;
}



/* Entry: 1042d9050; end: 1042d908f;  */

void FUN_1042d9050(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce67b0;
  _swift_getWitnessTable(&UNK_10dce67b0,&UNK_110755730);
  puRam000000011306c098 = puVar1;
  return;
}



/* Entry: 1042d9090; end: 1042d9243;  */

long FUN_1042d9090(char *param_1,char *param_2)

{
  long lVar1;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != *(long *)(param_2 + 8) || *(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 1042d9244; end: 1042d92f7;  */

undefined1 * FUN_1042d9244(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042d92f8; end: 1042d933f;  */

void FUN_1042d92f8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1042d9340; end: 1042d938b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d9340(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c0a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d938c; end: 1042d93eb; -[SponsoredLensTrackerRepositoryServices init] */

void FUN_1042d938c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensTrackerServices.SponsoredLensTrackerRepositoryServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d93b8);
  (*pcVar1)();
}



/* Entry: 1042d93ec; end: 1042d93fb; -[SponsoredLensTrackerRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d93ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306c0a0));
  return;
}



/* Entry: 1042d93fc; end: 1042d9447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d93fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c0d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d9448; end: 1042d94a7; -[_TtC28SponsoredLensTrackerServices28SponsoredLensTrackerServices init] */

void FUN_1042d9448(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredLensTrackerServices.SponsoredLensTrackerServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d9474);
  (*pcVar1)();
}



/* Entry: 1042d94a8; end: 1042d9547;  */

void FUN_1042d94a8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042d9548; end: 1042d956b;  */

void FUN_1042d9548(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1042d956c; end: 1042d959b; -[SCSponsoredLensEventType description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d956c(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_11306c100) != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d959c);
  (*pcVar1)();
}



/* Entry: 1042d959c; end: 1042d95e3; -[SCSponsoredLensEventType init] */

void FUN_1042d959c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensTrackerServices/LensEventTypeWrapper.swift",0x37,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d95e4);
  (*pcVar1)();
}



/* Entry: 1042d95e4; end: 1042d9617; -[SCSponsoredLensEventType hash] */

undefined8 FUN_1042d95e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042d9618();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042d9618; end: 1042d980f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d9618(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(0);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306c100);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    func_0x00010bfde980(*(undefined8 *)(lVar3 + _DAT_11306c180));
    __ss6HasherV8_combineyySuF();
    uVar1 = *(undefined8 *)(lVar3 + _DAT_11306c188);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar1,((undefined8 *)(lVar3 + _DAT_11306c188))[1]);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d9810; end: 1042d981b; -[SCSponsoredLensEventType isEqual:] */

uint FUN_1042d9810(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*(code *)0x1042d9700)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1042d981c; end: 1042d9877; +[SCSponsoredLensEventType playableEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d981c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11306c100) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042d9878; end: 1042d989b; -[SCSponsoredLensEventType matchPlayableEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d9878(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_11306c100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001042d9890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042d9898);
  (*pcVar1)();
}



/* Entry: 1042d989c; end: 1042d98ab; -[SCSponsoredLensEventType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d989c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c100));
  return;
}



/* Entry: 1042d98ac; end: 1042d98f7; -[SCSponsoredLensEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d98ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c118))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042d98f8; end: 1042d9907; -[SCSponsoredLensEvent event] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d98f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c108));
  return;
}



/* Entry: 1042d9908; end: 1042d9917; -[SCSponsoredLensEvent eventTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042d9908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306c110);
}



/* Entry: 1042d9918; end: 1042d999b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d9918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c118);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306c108) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306c110) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042d999c; end: 1042d9af3; -[SCSponsoredLensEvent initWithLensId:event:eventTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d999c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c118);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306c108) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306c110) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 1042d9af4; end: 1042d9b27; -[SCSponsoredLensEvent hash] */

undefined8 FUN_1042d9af4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042d9b28();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042d9b28; end: 1042d9bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042d9b28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c118))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1042d9618();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306c110));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042d9bc4; end: 1042d9cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042d9bc4(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_68;
  undefined8 auStack_60 [3];
  ulong uStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (uStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(ulong *)(unaff_x20 + _DAT_11306c118);
      if (uVar2 == *(ulong *)(lStack_68 + _DAT_11306c118) &&
          ((ulong *)(unaff_x20 + _DAT_11306c118))[1] == ((ulong *)(lStack_68 + _DAT_11306c118))[1])
      {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = uVar2;
      }
      uVar6 = *(undefined8 *)(lStack_68 + _DAT_11306c108);
      FUN_1042da388();
      auStack_60[0] = uVar6;
      uStack_48 = uVar2;
      _objc_retain(uVar6);
      puVar3 = auStack_60;
      func_0x0001042d9700(puVar3);
      func_0x00010006e7f4(auStack_60);
      lVar4 = *(long *)(unaff_x20 + _DAT_11306c110);
      lVar7 = *(long *)(lStack_68 + _DAT_11306c110);
      _objc_release(lStack_68);
      if ((uVar5 & 1) != 0) {
        return (uint)puVar3 & (uint)(lVar4 == lVar7);
      }
    }
  }
  return 0;
}



/* Entry: 1042d9cf0; end: 1042d9cfb; -[SCSponsoredLensEvent isEqual:] */

uint FUN_1042d9cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042d9bc4(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1042d9cfc; end: 1042d9e83;  */

uint FUN_1042d9cfc(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1042d9e84; end: 1042d9ed3; -[SCSponsoredLensEvent encodeWithCoder:] */

void FUN_1042d9e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001042d9d88(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042d9ed4; end: 1042d9f03;  */

void FUN_1042d9ed4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042d9f04(param_1);
  return;
}



/* Entry: 1042d9f04; end: 1042da15f;  */

undefined8 FUN_1042d9f04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x44495f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f534e454c,0xe700000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1042da110;
    }
    lVar5 = 0x544e455645;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544e455645,0xe500000000000000);
    lVar3 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
      lVar5 = lVar3;
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      FUN_1042da388();
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,lVar5,6);
      if ((uVar6 & 1) != 0) {
        uVar7 = 0x49545f544e455645;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49545f544e455645,0xed0000534d5f454d)
        ;
        func_0x00010bf66f40(param_1);
        _objc_release(uVar7);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c024420();
        _objc_release(uVar2);
        _objc_release(param_1);
        _objc_release(uStack_a0);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_1042da110;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_1042da110:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042da160; end: 1042da187; -[SCSponsoredLensEvent initWithCoder:] */

void FUN_1042da160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042d9f04();
  return;
}



/* Entry: 1042da188; end: 1042da1e3; -[SCSponsoredLensEvent description] */

void FUN_1042da188(void)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1042da3a8(&uStack_78);
  uStack_28 = uStack_70;
  uStack_30 = uStack_78;
  func_0x000100bcb1dc(&uStack_30);
  func_0x0001042da448(auStack_68,auStack_48);
  func_0x0001042da484(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042da1e4; end: 1042da25f; -[SCSponsoredLensEvent init] */

void FUN_1042da1e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensTrackerServices/LensEventTypeWrapper.swift",0x37,2,0xab,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042da22c);
  (*pcVar1)();
}



/* Entry: 1042da260; end: 1042da29b; -[SCSponsoredLensEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042da260(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306c118 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306c108));
  return;
}



/* Entry: 1042da29c; end: 1042da387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042da29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  pplVar8 = &plStack_60;
  lVar3 = 0;
  func_0x0001042db6f4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_3);
  func_0x0001042db614();
  *(undefined8 *)(lVar4 + _DAT_11306c180) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306c188);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  plVar5 = &lStack_50;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  plVar6 = plVar5;
  FUN_1042da388();
  plVar7 = plVar6;
  _objc_allocWithZone();
  puVar2 = PTR_s_init_1125d9248;
  *(long **)((long)plVar7 + _DAT_11306c100) = plVar5;
  plStack_60 = plVar7;
  plStack_58 = plVar6;
  _objc_retain(plVar5);
  _objc_msgSendSuper2(&plStack_60,puVar2);
  _objc_release(plVar5);
  _swift_bridgeObjectRelease(param_3);
  return (undefined1 *)pplVar8;
}



/* Entry: 1042da388; end: 1042da3a7;  */

void FUN_1042da388(void)

{
  _objc_opt_self(&PTR_PTR_1129967f0);
  return;
}



/* Entry: 1042da3a8; end: 1042da4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042da3a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(*(long *)(param_2 + _DAT_11306c108) + _DAT_11306c100);
  if (lVar6 != 0) {
    uVar2 = ((undefined8 *)(param_2 + _DAT_11306c118))[1];
    uVar4 = *(undefined1 *)(*(long *)(lVar6 + _DAT_11306c180) + _DAT_11306c190);
    uVar1 = *(undefined8 *)(lVar6 + _DAT_11306c188);
    uVar3 = ((undefined8 *)(lVar6 + _DAT_11306c188))[1];
    uVar7 = *(undefined8 *)(param_2 + _DAT_11306c110);
    *param_1 = *(undefined8 *)(param_2 + _DAT_11306c118);
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = uVar4;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    param_1[5] = uVar7;
    _swift_bridgeObjectRetain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1042da448);
  (*pcVar5)();
}



/* Entry: 1042da4b8; end: 1042da4d7;  */

void FUN_1042da4b8(void)

{
  _objc_opt_self(&PTR_PTR_1129968b8);
  return;
}



/* Entry: 1042da4d8; end: 1042da5c7;  */

uint FUN_1042da4d8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1042da5c8; end: 1042da607;  */

void FUN_1042da5c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6960;
  _swift_getWitnessTable(&UNK_10dce6960,&UNK_110755878);
  puRam000000011306c178 = puVar1;
  return;
}



/* Entry: 1042da608; end: 1042da60b; -[SCSponsoredLensEvent copyWithZone:] */

void FUN_1042da608(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042da60c; end: 1042da613; -[SCSponsoredLensEventType copyWithZone:] */

void FUN_1042da60c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042da614; end: 1042da693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042da614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  func_0x0001042db614();
  *(undefined8 *)(unaff_x20 + _DAT_11306c180) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c188);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042da694; end: 1042da773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042da694(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11306c180);
      func_0x00010c071ae0(uVar4);
      lVar2 = *(long *)(unaff_x20 + _DAT_11306c188);
      if (lVar2 == *(long *)(lStack_58 + _DAT_11306c188) &&
          ((long *)(unaff_x20 + _DAT_11306c188))[1] == ((long *)(lStack_58 + _DAT_11306c188))[1]) {
        uVar1 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar1 = (uint)lVar2;
      }
      _objc_release(lStack_58);
      return (uint)uVar4 & uVar1;
    }
  }
  return 0;
}



/* Entry: 1042da774; end: 1042da847;  */

void FUN_1042da774(void)

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



/* Entry: 1042da848; end: 1042da867;  */

void FUN_1042da848(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}


