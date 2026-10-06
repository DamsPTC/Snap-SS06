/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102732254; end: 102732273;  */

void FUN_102732254(void)

{
  func_0x000107c61168(&PTR_PTR_11285de78);
  return;
}



/* Entry: 102732274; end: 1027322b3;  */

void FUN_102732274(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027322b4; end: 1027322fb; -[SCMapPlaceSuggestAttributeTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027322b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebb198;
  func_0x000107c61428(param_1 + _DAT_112ebb198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027322fc; end: 102732353; -[SCMapPlaceSuggestAttributeTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027322fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebb198;
  func_0x000107c61428(param_1 + _DAT_112ebb198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102732354; end: 102732373; -[SCMapPlaceSuggestAttributeTrayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732354(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ebb1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102732374; end: 1027323c3; -[SCMapPlaceSuggestAttributeTrayScope mapAttributeInfoList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732374(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb1a8);
  func_0x000101167c48(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027323c4; end: 10273240f; -[SCMapPlaceSuggestAttributeTrayScope placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027323c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebb1b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ebb1b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102732410; end: 10273241f; -[SCMapPlaceSuggestAttributeTrayScope mapSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102732410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ebb1b8);
}



/* Entry: 102732420; end: 10273242f; -[SCMapPlaceSuggestAttributeTrayScope placeSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102732420(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ebb1c0);
}



/* Entry: 102732430; end: 10273252f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102732430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ebb198;
  func_0x000107c61614(unaff_x20 + _DAT_112ebb198,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1a8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebb1b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1c0) = param_7;
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 102732530; end: 10273255f;  */

undefined8 FUN_102732530(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1027326a8();
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 102732560; end: 102732617; -[SCMapPlaceSuggestAttributeTrayScope initWithDelegate:uiContainer:mapAttributeInfoList:placeId:mapSessionId:placeSessionId:] */

undefined8
FUN_102732560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000101167c48(0);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c5faec(param_6);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  uVar2 = param_3;
  FUN_1027326a8(param_3,param_4,param_5,param_6,uVar1,param_7,param_8);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 102732618; end: 10273264b;  */

void FUN_102732618(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10273264c; end: 1027326a7; -[SCMapPlaceSuggestAttributeTrayScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102732688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273268c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273264c(long param_1)

{
  FUN_102732798(param_1 + _DAT_112ebb198);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebb1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebb1a8));
  return;
}



/* Entry: 1027326a8; end: 102732797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027326a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ebb198;
  func_0x000107c61614(unaff_x20 + _DAT_112ebb198,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1a8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebb1b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1c0) = param_7;
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102732798; end: 1027327bb;  */

undefined8 FUN_102732798(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1027327bc; end: 1027327db;  */

void FUN_1027327bc(void)

{
  func_0x000107c61168(&PTR_PTR_11285dfc8);
  return;
}



/* Entry: 1027327dc; end: 1027327fb; -[MapPlaceProfileFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027327dc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ebb1f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027327fc; end: 102732847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027327fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102732848; end: 1027328a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732848(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ebb1f0) = param_1;
  func_0x000102732884();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027328a4; end: 1027328ff; -[MapPlaceProfileFactoryServices init] */

void FUN_1027328a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceProfileSaberFactoryServices.MapPlaceProfileFactoryServices",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027328d0);
  (*pcVar1)();
}



/* Entry: 102732900; end: 102732923; -[MapPlaceProfileFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebb1f0));
  return;
}



/* Entry: 102732924; end: 1027329fb;  */

void FUN_102732924(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027329fc; end: 102732a07;  */

void FUN_1027329fc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102732a08; end: 102732a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732a08(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebb220;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb220,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 102732a4c; end: 102732b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732a4c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebb220;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb220,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102732b98; end: 102732bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102732b98(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebb228;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb228,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 102732bd8; end: 102732c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732bd8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebb228;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb228,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 102732c24; end: 102732c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102732c24(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ebb228;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb228,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102732c64;
  return auVar2;
}



/* Entry: 102732c64; end: 102732c67;  */

void FUN_102732c64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102732c68; end: 102732dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102732c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ebb220;
  func_0x000107c61614(unaff_x20 + _DAT_112ebb220,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb228) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb230) = param_3;
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 102732dd0; end: 102732e7f; -[_TtC29MapPlaceProfilePresenterScope29MapPlaceProfilePresenterScope initWithDelegate:source:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112ebb220;
  func_0x000107c61614(param_1 + _DAT_112ebb220,0);
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_112ebb228) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ebb230) = param_5;
  FUN_102732ef8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 102732e80; end: 102732eaf;  */

void FUN_102732e80(void)

{
  FUN_102732ef8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102732eb0; end: 102732ee7; -[_TtC29MapPlaceProfilePresenterScope29MapPlaceProfilePresenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102732eb0(long param_1)

{
  FUN_102732f6c(param_1 + _DAT_112ebb220);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebb230));
  return;
}



/* Entry: 102732ee8; end: 102732ef7;  */

undefined1  [16] FUN_102732ee8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102732ef8; end: 102732f17;  */

void FUN_102732ef8(void)

{
  func_0x000107c61168(&PTR_PTR_11285e170);
  return;
}



/* Entry: 102732f18; end: 102732f1b;  */

void FUN_102732f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad3b40;
  func_0x000107c61520(&UNK_10dad3b40,&UNK_110541aa0);
  puRam0000000112ebb238 = puVar1;
  return;
}



/* Entry: 102732f1c; end: 102732f5b;  */

void FUN_102732f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad3b40;
  func_0x000107c61520(&UNK_10dad3b40,&UNK_110541aa0);
  puRam0000000112ebb238 = puVar1;
  return;
}



/* Entry: 102732f5c; end: 102732f6b;  */

undefined1  [16] FUN_102732f5c(void)

{
  return ZEXT816(0x110541aa0);
}



/* Entry: 102732f6c; end: 102732f8f;  */

undefined8 FUN_102732f6c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102732f90; end: 102733037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102732f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112ebb268;
  func_0x000107c61614(unaff_x20 + _DAT_112ebb268,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb270) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(auStack_50,puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 102733038; end: 102733067; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl getState] */

int FUN_102733038(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x000107c61168();
  func_0x000107c3e48c();
  iVar2 = 3;
  if (puVar1 < (undefined *)0x5) {
    iVar2 = (int)puVar1 + 1;
  }
  return iVar2;
}



/* Entry: 102733068; end: 102733177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102733068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar3 = &puStack_50;
  func_0x000100083b20(&puStack_50);
  puVar1 = puStack_50;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_50);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x000107c61168();
    func_0x000107c3e48c();
    if (puVar1 == (undefined *)0x0) {
      pcStack_30 = FUN_102733178;
      uStack_28 = 0;
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0x42000000;
      puStack_40 = &UNK_100ab47f8;
      puStack_38 = &UNK_110541bb8;
      func_0x000107c60bc4(&puStack_50);
      func_0x000107c50334(puVar2,param_2,ppuVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c60bd0(ppuVar3);
    }
    else {
      if ((puVar1 != (undefined *)0x4) && (puVar1 != (undefined *)0x3)) {
        func_0x000107c4de54(puVar2);
      }
      func_0x000107c615e8(puVar2);
    }
  }
  return;
}



/* Entry: 102733178; end: 102733197;  */

void FUN_102733178(void)

{
  return;
}



/* Entry: 102733198; end: 1027331bf; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl requestPermission] */

void FUN_102733198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102733068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027331c0; end: 102733403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1027331c0(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code **ppcVar5;
  code *pcVar6;
  code *pcStack_48;
  
  func_0x000100083b20(&pcStack_48);
  pcVar1 = pcStack_48;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  func_0x000107c61170(pcStack_48);
  pcVar2 = pcVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar1);
  if (pcVar2 == (code *)0x0) {
    func_0x000107c61168();
    func_0x000107c3e48c();
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    pcVar1 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    ppcVar5 = &pcStack_48;
    pcStack_48 = pcVar1;
    func_0x000100854cb0(ppcVar5);
    func_0x000107c61170(pcVar1);
    func_0x0001004575f0();
    func_0x000107c61574(ppcVar5);
    pcVar6 = pcVar1;
    func_0x000107c5cb24(pcVar1);
    func_0x000107c61180();
  }
  else {
    func_0x0001000285a8(0x112ebb278,&UNK_10dad3c38);
    pcVar1 = pcVar2;
    func_0x000107c4e6ec(pcVar2);
    func_0x000107c61180();
    pcVar6 = pcVar1;
    func_0x0001000b637c();
    func_0x000107c61170(pcVar1);
    puVar3 = &UNK_110541bf0;
    func_0x000107c613fc(&UNK_110541bf0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar4 = 0;
    func_0x0001002ed07c(0);
    pcVar1 = FUN_102733490;
    func_0x0001000bfde0(FUN_102733490,puVar3,uVar4);
    func_0x000107c61574(pcVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61168();
    func_0x000107c3e48c();
    pcVar6 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    ppcVar5 = &pcStack_48;
    pcStack_48 = pcVar6;
    func_0x0001006c71a4(ppcVar5);
    func_0x000107c61170(pcVar6);
    func_0x000107c61574(pcVar1);
    func_0x0001004575f0();
    func_0x000107c61574(ppcVar5);
    pcVar6 = pcVar1;
    func_0x000107c5cb24(pcVar1);
    func_0x000107c61180();
    func_0x000107c615e8(pcVar2);
  }
  func_0x000107c61170(pcVar1);
  return pcVar6;
}



/* Entry: 102733404; end: 10273348f;  */

void FUN_102733404(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x000107c61170();
    func_0x000107c61168();
    func_0x000107c3e48c();
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar1;
  return;
}



/* Entry: 102733490; end: 102733497;  */

void FUN_102733490(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c61168();
    func_0x000107c3e48c();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *param_1 = puVar2;
  return;
}



/* Entry: 102733498; end: 1027334cb; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl observePermissionChanges] */

void FUN_102733498(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027331c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027334cc; end: 102733567; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl openSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027334cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c4de54(lVar2);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102733568; end: 1027335d3;  */

void FUN_102733568(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027335d4,uVar1,uVar2);
  return;
}



/* Entry: 1027335d4; end: 102733677;  */

void FUN_1027335d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c3e48c();
  if (puVar2 == (undefined *)0x4) {
    lVar3 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5aa1c(puVar1);
      func_0x000107c61180();
      func_0x000107c4ef68();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102733674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102733678; end: 1027336b3;  */

void FUN_102733678(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027336b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027336b4; end: 10273379f; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl openPhotoPicker] */

/* WARNING: Possible PIC construction at 0x000102733784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102733788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027336b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110541c18;
  func_0x000107c613fc(&UNK_110541c18,0x18,7);
  lVar2 = param_1 + _DAT_112ebb268;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_110541c40;
  func_0x000107c613fc(&UNK_110541c40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dad3ca8;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad3cb0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1027337a0; end: 1027337ff; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl init] */

void FUN_1027337a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoCameraRollPermissionHandlerImplementation.MemTwoCameraRollPermissionHandlerImpl"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027337cc);
  (*pcVar1)();
}



/* Entry: 102733800; end: 102733837; -[_TtC47MemTwoCameraRollPermissionHandlerImplementation37MemTwoCameraRollPermissionHandlerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102733800(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebb270));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ebb268);
  return;
}



/* Entry: 102733838; end: 1027338db;  */

void FUN_102733838(void)

{
  func_0x000107c61168(&PTR_PTR_11285e270);
  return;
}



/* Entry: 1027338dc; end: 10273394b;  */

void FUN_1027338dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10273394c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10273394c; end: 10273396f;  */

void FUN_10273394c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027338d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102733970; end: 102733a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102733970(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *unaff_x20;
  lVar3 = 0;
  FUN_102733838();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ebb268;
  func_0x000107c61614(lVar4 + _DAT_112ebb268,0);
  *(undefined8 *)(lVar4 + _DAT_112ebb270) = uVar5;
  func_0x000107c61604(lVar4 + lVar2,param_1);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 102733a08; end: 102733a27;  */

undefined1  [16] FUN_102733a08(void)

{
  return ZEXT816(0x110541c78);
}



/* Entry: 102733a28; end: 102733bb3;  */

/* WARNING: Possible PIC construction at 0x000102733b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102733b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102733b80) */
/* WARNING: Removing unreachable block (ram,0x000102733b70) */
/* WARNING: Removing unreachable block (ram,0x000102733b60) */
/* WARNING: Removing unreachable block (ram,0x000102733b50) */
/* WARNING: Removing unreachable block (ram,0x000102733b40) */
/* WARNING: Removing unreachable block (ram,0x000102733b30) */
/* WARNING: Removing unreachable block (ram,0x000102733b20) */
/* WARNING: Removing unreachable block (ram,0x000102733b90) */

void FUN_102733a28(undefined8 *param_1)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar16 = &UNK_110541de8;
  func_0x000107c613fc(&UNK_110541de8,0x90,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar1;
  *(undefined8 *)(puVar16 + 0x18) = uVar8;
  *(undefined8 *)(puVar16 + 0x20) = uVar17;
  *(undefined8 *)(puVar16 + 0x28) = uVar9;
  *(undefined8 *)(puVar16 + 0x30) = uVar2;
  *(undefined8 *)(puVar16 + 0x38) = uVar10;
  *(undefined8 *)(puVar16 + 0x40) = uVar3;
  *(undefined8 *)(puVar16 + 0x48) = uVar11;
  *(undefined8 *)(puVar16 + 0x50) = uVar4;
  *(undefined8 *)(puVar16 + 0x58) = uVar12;
  *(undefined8 *)(puVar16 + 0x60) = uVar5;
  *(undefined8 *)(puVar16 + 0x68) = uVar13;
  *(undefined8 *)(puVar16 + 0x70) = uVar6;
  *(undefined8 *)(puVar16 + 0x78) = uVar14;
  *(undefined8 *)(puVar16 + 0x80) = uVar7;
  *(undefined8 *)(puVar16 + 0x88) = uVar15;
  uVar17 = 0x112ebb2b8;
  func_0x0001000285a8(0x112ebb2b8,&UNK_10dad3da0);
  func_0x000107c613fc();
  pcVar18 = FUN_102733c60;
  func_0x0001000841fc(FUN_102733c60,puVar16,uVar17);
  func_0x000100084214(&UNK_10dad3d60,0x3f,2);
  *param_1 = pcVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102733bb4; end: 102733bc3;  */

undefined1  [16] FUN_102733bb4(void)

{
  return ZEXT816(0x110541dc8);
}



/* Entry: 102733bc4; end: 102733c5f;  */

void FUN_102733bc4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102733c60; end: 102733d5b;  */

void FUN_102733c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_70 [2];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ebb2c0,&UNK_10dad3da8);
  puVar6 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec(puVar6);
  FUN_10273a4a8(uVar7,uVar3,uVar1,uVar4,uVar2,uVar5,uVar9,puVar6,uVar15,uVar17,uVar11,uVar13,uVar16,
                uVar18,uVar12,uVar14,uVar8);
  func_0x0001002acff8("MemTwoChatMediaDrawerViewControllerEntryPointProvider",0x35,2);
  func_0x000107c61574(puVar6);
  *param_1 = uVar7;
  return;
}



/* Entry: 102733d5c; end: 102733d6f;  */

void FUN_102733d5c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110541ee8;
  if (lRam0000000112ebb2c8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ebb2c8 = param_1;
  }
  return;
}



/* Entry: 102733d70; end: 102733f0b;  */

void FUN_102733d70(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102733e5c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102733f0c(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102733e58);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102733e5c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102733e54);
  (*pcVar1)();
}



/* Entry: 102733f0c; end: 102734073;  */

ulong FUN_102733f0c(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102734074);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102734068);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1027347ac(0,0x112ebb2d0,&PTR_PTR_1126c3358);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10273406c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102734070);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102739660(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102734074; end: 1027347ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102734074(undefined8 param_1,long param_2,byte param_3,long param_4,undefined8 param_5,
             long param_6,long param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x112d373d8;
  uStack_80 = param_5;
  uStack_78 = param_1;
  lStack_70 = param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&uStack_80 + -extraout_x8;
  func_0x0001008e4748();
  func_0x000107c61180();
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e7c4(lVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e53c(lVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  lVar4 = lVar2;
  func_0x000107c5e6c0(lVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c5e584(lVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e888(lVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  if ((*(byte *)(param_8 + _DAT_112f473d8) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_8 + _DAT_112f473d0);
    func_0x000107c5fadc(uVar7,((undefined8 *)(param_8 + _DAT_112f473d0))[1]);
    lVar4 = lVar2;
    func_0x000107c5e4e8(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
  }
  lVar4 = lStack_70;
  if (param_3 == 1) goto LAB_1027342b4;
  uVar7 = uStack_80;
  lVar8 = param_6;
  if (param_6 == 0) {
    if ((param_3 & 0xfb) != 0) {
      func_0x000107c61434(lStack_70);
      uVar7 = uStack_78;
      lVar8 = lVar4;
      goto LAB_102734234;
    }
  }
  else {
LAB_102734234:
    func_0x000107c61434(param_6);
    func_0x000107c5fadc(uVar7,lVar8);
    func_0x000107c6142c(lVar8);
    lVar4 = lVar2;
    func_0x000107c5e7c8(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    if ((param_3 & 0xfb) != 0) goto LAB_1027342b4;
  }
  if (param_7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027345d4);
    (*pcVar1)();
  }
  func_0x000107c5e6bc(lVar2);
  func_0x000107c61180();
  func_0x000107c61170();
LAB_1027342b4:
  lVar4 = param_4;
  func_0x000107c44920();
  if ((int)lVar4 != 0) {
    lVar4 = param_4;
    func_0x000107c4adb4();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027345dc);
      (*pcVar1)();
    }
    lVar8 = lVar4;
    func_0x000107c44fd8();
    func_0x000107c61170(lVar4);
    if (lVar8 != 0) {
      func_0x000107c4adb4();
      func_0x000107c61180();
      if (param_4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027345e0);
        (*pcVar1)();
      }
      lVar4 = param_4;
      func_0x000107c44fd8();
      func_0x000107c61170(param_4);
      puVar3 = PTR___ss5Int64VN_11034ee50;
      puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      lStack_68 = lVar4;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      puVar5 = puVar3;
      func_0x000107c5fadc();
      lVar4 = lVar2;
      func_0x000107c5e650(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c5e674(lVar2);
      func_0x000107c61180();
      func_0x000107c61170();
      puVar5 = PTR_PTR_1126c4328;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5fadc(puVar3,puVar6);
      func_0x000107c6142c(puVar6);
      puVar6 = puVar5;
      func_0x000107c5e650(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar6);
      puVar3 = puVar5;
      func_0x000107c5e674();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x00010273c938();
      func_0x000107c613fc();
      *(undefined8 *)(puVar3 + 0x18) = 3;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      puVar6 = puVar5;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(puVar3 + 0x20) = puVar6;
      uVar7 = 0;
      FUN_1027347ac(0,0x112ebb2d8,&PTR_PTR_1126d9648);
      puVar6 = puVar3;
      func_0x000107c5fc48(puVar3,uVar7);
      func_0x000107c61574(puVar3);
      lVar4 = lVar2;
      func_0x000107c5e644(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar4);
    }
  }
  lVar4 = lVar2;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar8 = 0;
    func_0x000107c5eea4();
    lVar11 = *(long *)(lVar8 + -8);
    (**(code **)(lVar11 + 0x38))(lVar10,1,1,lVar8);
    if (param_3 != 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uStack_78;
      func_0x000107c5fadc(uStack_78,lStack_70);
    }
    lVar9 = lVar10;
    (**(code **)(lVar11 + 0x30))(lVar10,1,lVar8);
    if ((int)lVar9 == 1) {
      lVar9 = 0;
    }
    else {
      func_0x000107c5ee70();
      (**(code **)(lVar11 + 8))(lVar10,lVar8);
    }
    puVar3 = PTR_PTR_1126c3358;
    func_0x000107c610f8(PTR_PTR_1126c3358);
    *(ulong *)((long)auStack_90 + -extraout_x8) = (ulong)(param_3 == 1);
    func_0x000107c488a4();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar9);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027345d8);
  (*pcVar1)();
}



/* Entry: 1027347ac; end: 10273482f;  */

void FUN_1027347ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102734830; end: 1027348bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102734830(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lStack_48;
  
  lVar1 = _DAT_112ebb340;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebb340);
  lVar4 = lVar2;
  if (lVar2 == 1) {
    func_0x000100083b20(&lStack_48);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lStack_48;
    func_0x000107c61174(lStack_48);
    FUN_102739db0(uVar3);
    lVar4 = lStack_48;
  }
  FUN_102739e00(lVar2);
  return lVar4;
}



/* Entry: 1027348bc; end: 1027348df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027348bc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ebb358;
  uVar5 = 0x112ebb498;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ebb358);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112ebb498,&UNK_10db94350);
    func_0x000107c610f8();
    uVar3 = uStack_48;
    func_0x00010017da58(uStack_48,uVar5);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1027348e0; end: 1027349b3;  */

undefined * FUN_1027348e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_48;
  
  lVar4 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar4);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(param_3,param_4);
    func_0x000107c610f8();
    uVar3 = uStack_48;
    func_0x00010017da58(uStack_48,param_3);
    puVar2 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined **)(unaff_x20 + lVar4) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1027349b4; end: 1027349cb;  */

void FUN_1027349b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027349cc,0,0);
  return;
}



/* Entry: 1027349cc; end: 102734a57;  */

void FUN_1027349cc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734a58,uVar2,uVar3);
  return;
}



/* Entry: 102734a58; end: 102734abf;  */

/* WARNING: Removing unreachable block (ram,0x000102734a90) */

void FUN_102734a58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_102734ac0(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102734abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102734ac0; end: 102734bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102734ac0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1 + _DAT_112ebb2e8;
  func_0x000107c61618();
  lVar2 = _DAT_112ebb550;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ebb550,auStack_48,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5cf44(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  puVar3 = &DAT_112ebb358;
  FUN_1027348e0(&DAT_112ebb358,&DAT_112ebb318,0x112ebb498,&UNK_10db94350);
  puVar4 = puVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61170(puVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112ebb358);
    func_0x000107c61174(uVar5);
    uVar6 = uVar5;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 102734be0; end: 102734c0b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler expandDrawer] */

void FUN_102734be0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110541fd0;
  func_0x000107c613fc(&UNK_110541fd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad3f40,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102734c0c; end: 102734c97;  */

void FUN_102734c0c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734c98,uVar2,uVar3);
  return;
}



/* Entry: 102734c98; end: 102734cff;  */

/* WARNING: Removing unreachable block (ram,0x000102734cd0) */

void FUN_102734c98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_102734d00(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102734cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102734d00; end: 102734e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102734d00(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  long lStack_38;
  
  uVar1 = param_1 + _DAT_112ebb2e8;
  func_0x000107c61618();
  lVar4 = _DAT_112ebb550;
  if (uVar1 != 0) {
    func_0x000107c61428(uVar1 + _DAT_112ebb550,auStack_58,0,0);
    uVar2 = uVar1 + lVar4;
    func_0x000107c61618();
    func_0x000107c61170();
    if (uVar2 != 0) {
      func_0x000107c5cf44(uVar2);
      func_0x000107c61170();
      uVar1 = uVar2;
    }
  }
  FUN_102736508();
  if ((uVar1 & 1) != 0) {
    func_0x000100083b20(&lStack_38);
    lVar3 = *(long *)(lStack_38 + _DAT_1130735b8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c44774();
      if ((int)lVar3 != 0) {
        FUN_102737fb8();
      }
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 102734e28; end: 102734e3b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation34MemTwoChatMediaDrawerActionHandler collapseDrawer] */

void FUN_102734e28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110541fa8;
  func_0x000107c613fc(&UNK_110541fa8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad3f38,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102734e3c; end: 102734edf;  */

void FUN_102734e3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar1 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,param_4,param_3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102734ee0; end: 102734ef7;  */

void FUN_102734ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734ef8,0,0);
  return;
}



/* Entry: 102734ef8; end: 102734f8b;  */

void FUN_102734ef8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102739dc0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734f8c,uVar2,uVar3);
  return;
}



/* Entry: 102734f8c; end: 10273500f;  */

/* WARNING: Removing unreachable block (ram,0x000102734fc4) */

void FUN_102734f8c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  FUN_102735558(unaff_x22 + 0x38,uVar1);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102735010,0,0);
  return;
}



/* Entry: 102735010; end: 1027350a7;  */

void FUN_102735010(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c61174();
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x90) = lVar2;
    func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027350a8,uVar3,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027350a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027350a8; end: 1027350fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027350a8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000100083b20(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027350fc,0,0);
  return;
}



/* Entry: 1027350fc; end: 10273517b;  */

void FUN_1027350fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = unaff_x22 + 0x10;
  func_0x0001000a8868(lVar1,*(undefined8 *)(unaff_x22 + 0x28));
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  func_0x000107c5fca8(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273517c,uVar3,uVar2);
  return;
}



/* Entry: 10273517c; end: 1027351b7;  */

void FUN_10273517c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027351b8,0,0);
  return;
}



/* Entry: 1027351b8; end: 10273521f;  */

void FUN_1027351b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102735220,uVar2,uVar1);
  return;
}



/* Entry: 102735220; end: 1027352d7;  */

void FUN_102735220(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  piVar4 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027352d8;
                    /* WARNING: Could not recover jumptable at 0x0001027352d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x58),uVar2,0xd00000000000002a,0x800000010f0b9090,
             *(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 1027352d8; end: 10273533f;  */

void FUN_1027352d8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 200) = param_1;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102735340;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x88));
    pcVar1 = FUN_102735504;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102735340; end: 1027353a7;  */

void FUN_102735340(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027353a8,uVar2,uVar1);
  return;
}



/* Entry: 1027353a8; end: 102735447;  */

void FUN_1027353a8(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_102735750(uVar6,uVar5,uVar4,uVar2);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 200));
    func_0x000107c6142c(uVar4);
    pcVar3 = FUN_102735448;
  }
  else {
    pcVar3 = FUN_102735490;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102735448; end: 10273548f;  */

void FUN_102735448(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100d032a8(uVar1,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010273548c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102735490; end: 102735503;  */

void FUN_102735490(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100d032a8(uVar3,*(undefined8 *)(unaff_x22 + 0x80),uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102735500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102735504; end: 102735557;  */

void FUN_102735504(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000100d032a8(uVar1,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102735554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102735558; end: 1027356b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102735558(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(param_2 + _DAT_112ebb348);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar7 = plVar1[2];
    lVar6 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *param_1 = lVar3;
    param_1[2] = lVar7;
    param_1[1] = lVar6;
    return;
  }
  lVar3 = param_2;
  FUN_102734830();
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_2 = param_2 + _DAT_112ebb2e8;
  func_0x000107c61618();
  lVar6 = _DAT_112ebb550;
  if (param_2 != 0) {
    puVar5 = auStack_68;
    func_0x000107c61428(param_2 + _DAT_112ebb550,puVar5,0,0);
    uVar4 = param_2 + lVar6;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      func_0x000107c5c82c();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar4 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      FUN_1027356b8();
      if (puVar5 != (undefined1 *)0x0) {
        uVar2 = uVar4 & 0xffffffffffff;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(puVar5);
          uVar4 = 0;
          puVar5 = (undefined1 *)0x0;
        }
      }
      goto LAB_102735684;
    }
  }
  FUN_1027356b8();
  uVar4 = 0;
  puVar5 = (undefined1 *)0x0;
LAB_102735684:
  *param_1 = lVar3;
  param_1[1] = uVar4;
  param_1[2] = (long)puVar5;
  return;
}



/* Entry: 1027356b8; end: 10273574f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027356b8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000102737c10();
  lVar1 = unaff_x20 + _DAT_112ebb2e8;
  func_0x000107c61618();
  lVar2 = _DAT_112ebb550;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112ebb550,auStack_38,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c3fb20(lVar2);
      func_0x000107c5cf44(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}


