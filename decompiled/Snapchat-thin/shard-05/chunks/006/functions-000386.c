/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f2b60c; end: 103f2b623;  */

void FUN_103f2b60c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103f2b624; end: 103f2b6bf;  */

void FUN_103f2b624(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dcac270;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcac288;
    puStack_28 = &UNK_10dcac288;
    _swift_initStructMetadata(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 103f2b6c0; end: 103f2b6d7;  */

bool FUN_103f2b6c0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f2b6d8; end: 103f2b717;  */

void FUN_103f2b6d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302efd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac2a0;
  _swift_getWitnessTable(&UNK_10dcac2a0,&UNK_1107234b0);
  puRam000000011302efd8 = puVar1;
  return;
}



/* Entry: 103f2b718; end: 103f2b7c3;  */

void FUN_103f2b718(void)

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



/* Entry: 103f2b7c4; end: 103f2b7fb;  */

void FUN_103f2b7c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f2b7fc; end: 103f2b80b; -[_TtC17SCWeatherServices17SCWeatherServices weatherLocalizationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2b7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302efe8));
  return;
}



/* Entry: 103f2b80c; end: 103f2b86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2b80c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302efe0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302efe8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2b870; end: 103f2b8cf; -[_TtC17SCWeatherServices17SCWeatherServices init] */

void FUN_103f2b870(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCWeatherServices.SCWeatherServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2b89c);
  (*pcVar1)();
}



/* Entry: 103f2b8d0; end: 103f2b907; -[_TtC17SCWeatherServices17SCWeatherServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2b8d0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302efe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302efe8));
  return;
}



/* Entry: 103f2b908; end: 103f2b917; -[SCWeatherInfo temperatureF] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f2b908(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302f018);
}



/* Entry: 103f2b918; end: 103f2b927; -[SCWeatherInfo condition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2b918(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302f020);
}



/* Entry: 103f2b928; end: 103f2b937; -[SCWeatherInfo uvIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2b928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302f028);
}



/* Entry: 103f2b938; end: 103f2b993; -[SCWeatherInfo locationName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2b938(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302f030))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302f030);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f2b994; end: 103f2ba5b; -[SCWeatherInfo date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2b994(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113812748,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f2ba5c; end: 103f2ba67; -[SCWeatherInfo hourlyForecasts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2ba5c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113812750);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f2d318(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f2ba68; end: 103f2ba73; -[SCWeatherInfo dailyForecasts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2ba68(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113812758);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f2d318(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f2ba74; end: 103f2bacb;  */

void FUN_103f2ba74(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f2d318(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103f2bacc; end: 103f2bbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f2bacc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  puVar2 = auStack_80;
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302f018) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302f020) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302f028) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f030);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x0001009f0578(param_6,unaff_x20 + _DAT_113812748);
  *(undefined8 *)(unaff_x20 + _DAT_113812750) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113812758) = param_8;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_6);
  return puVar2;
}



/* Entry: 103f2bbc4; end: 103f2bdab; -[SCWeatherInfo initWithTemperatureF:condition:uvIndex:locationName:date:hourlyForecasts:dailyForecasts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f2bbc4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long extraout_x8;
  undefined *puVar6;
  long lStack_80;
  long lStack_78;
  
  lVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  puVar6 = &UNK_10d9014c0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_80 - extraout_x8;
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_7 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_7);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_7 == 0,1);
  if (param_8 != 0) {
    uVar4 = 0;
    FUN_103f2d318(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar4);
  }
  lVar3 = param_9;
  _objc_retain();
  if (lVar3 == 0) {
    param_9 = 0;
  }
  else {
    uVar4 = 0;
    FUN_103f2d318(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar4);
    _objc_release(lVar3);
  }
  *(undefined4 *)(param_2 + _DAT_11302f018) = param_1;
  *(undefined8 *)(param_2 + _DAT_11302f020) = param_4;
  *(undefined8 *)(param_2 + _DAT_11302f028) = param_5;
  plVar5 = (long *)(param_2 + _DAT_11302f030);
  *plVar5 = param_6;
  plVar5[1] = (long)puVar6;
  func_0x0001009f0578(lVar2,param_2 + _DAT_113812748);
  *(long *)(param_2 + _DAT_113812750) = param_8;
  *(long *)(param_2 + _DAT_113812758) = param_9;
  plVar5 = &lStack_80;
  lStack_80 = param_2;
  lStack_78 = lVar1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(lVar2);
  return plVar5;
}



/* Entry: 103f2bdac; end: 103f2bddb;  */

void FUN_103f2bdac(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103f2bddc(param_1);
  return;
}



/* Entry: 103f2bddc; end: 103f2c1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f2bddc(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_103f2a970();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined4 *)((long)&uStack_c0 + lVar3);
  *(undefined4 *)(unaff_x20 + _DAT_11302f018) = *param_1;
  uVar12 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + _DAT_11302f020) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(unaff_x20 + _DAT_11302f028) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)(param_1 + 6);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302f030);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  *puVar2 = uVar16;
  lVar5 = 0;
  FUN_103f2af68();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar5 + 0x20),unaff_x20 + _DAT_113812748);
  lVar10 = *(long *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  if (lVar10 == 0) {
    _swift_bridgeObjectRetain(uVar12);
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x10);
    if (lVar15 == 0) {
      _swift_bridgeObjectRetain(uVar12);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uStack_c0 = lVar5;
      _swift_bridgeObjectRetain(uVar12);
      FUN_103f2c940(0,lVar15,0);
      lVar10 = lVar10 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
      lVar11 = *(long *)(lVar9 + 0x48);
      do {
        puVar13 = puStack_78;
        FUN_103f2c95c(lVar10,puVar14);
        lVar6 = 0;
        FUN_103f2d318();
        lVar5 = lVar6;
        _objc_allocWithZone();
        *(undefined4 *)(lVar5 + _DAT_11302f080) = *puVar14;
        *(undefined4 *)(lVar5 + _DAT_11302f088) = *(undefined4 *)((long)&uStack_c0 + lVar3 + 4);
        *(undefined8 *)(lVar5 + _DAT_11302f090) = *(undefined8 *)((long)&uStack_b8 + lVar3);
        func_0x0001009f0578((long)puVar14 + (long)*(int *)(lVar4 + 0x1c),lVar5 + _DAT_113812760);
        plVar7 = &lStack_98;
        lStack_98 = lVar5;
        lStack_90 = lVar6;
        _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
        func_0x000103f2c9a0(puVar14,FUN_103f2a970);
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puStack_78 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          FUN_103f2c940(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar7;
        lVar10 = lVar10 + lVar11;
        lVar15 = lVar15 + -1;
        puVar13 = puStack_78;
        lVar5 = uStack_c0;
      } while (lVar15 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113812750) = puVar13;
  lVar10 = *(long *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  if (lVar10 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar5 = *(long *)(lVar10 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar5 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103f2c940(0,lVar5,0);
      lVar10 = lVar10 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
      lVar9 = *(long *)(lVar9 + 0x48);
      do {
        puVar13 = puStack_78;
        FUN_103f2c95c(lVar10,puVar14);
        lVar11 = 0;
        FUN_103f2d318();
        lVar15 = lVar11;
        _objc_allocWithZone();
        *(undefined4 *)(lVar15 + _DAT_11302f080) = *puVar14;
        *(undefined4 *)(lVar15 + _DAT_11302f088) = *(undefined4 *)((long)&uStack_c0 + lVar3 + 4);
        *(undefined8 *)(lVar15 + _DAT_11302f090) = *(undefined8 *)((long)&uStack_b8 + lVar3);
        func_0x0001009f0578((long)puVar14 + (long)*(int *)(lVar4 + 0x1c),lVar15 + _DAT_113812760);
        plVar7 = &lStack_88;
        lStack_88 = lVar15;
        lStack_80 = lVar11;
        _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
        func_0x000103f2c9a0(puVar14,FUN_103f2a970);
        uVar1 = *(ulong *)(puVar13 + 0x10);
        puStack_78 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
          FUN_103f2c940(1 < *(ulong *)(puVar13 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(long **)(puStack_78 + uVar1 * 8 + 0x20) = plVar7;
        lVar10 = lVar10 + lVar9;
        lVar5 = lVar5 + -1;
        puVar13 = puStack_78;
      } while (lVar5 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113812758) = puVar13;
  puVar8 = auStack_70;
  _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
  func_0x000103f2c9a0(param_1,FUN_103f2af68);
  return puVar8;
}



/* Entry: 103f2c1e8; end: 103f2c1eb; -[SCWeatherInfo copyWithZone:] */

void FUN_103f2c1e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f2c1ec; end: 103f2c277; -[SCWeatherInfo description] */

void FUN_103f2c1ec(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103f2af68();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103f2c278(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103f2c9a0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_103f2af68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2c278; end: 103f2c867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2c278(undefined4 *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  undefined8 uVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined4 auStack_90 [2];
  undefined4 *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  FUN_103f2a970();
  lVar9 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined4 *)((long)auStack_90 + lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined4 *)((long)puVar12 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined4 *)((long)puVar15 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined4 *)((long)puVar13 - extraout_x12_01);
  *param_1 = *(undefined4 *)(param_2 + _DAT_11302f018);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302f028);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + _DAT_11302f020);
  *(undefined8 *)(param_1 + 4) = uVar7;
  puVar1 = (undefined8 *)(param_2 + _DAT_11302f030);
  uVar7 = puVar1[1];
  uVar18 = *puVar1;
  *(undefined8 *)(param_1 + 8) = puVar1[1];
  *(undefined8 *)(param_1 + 6) = uVar18;
  lVar6 = _DAT_113812748;
  lVar4 = 0;
  FUN_103f2af68();
  lStack_78 = lVar4;
  func_0x0001009f0578(param_2 + lVar6,(long)param_1 + (long)*(int *)(lVar4 + 0x20));
  uVar10 = *(ulong *)(param_2 + _DAT_113812750);
  lStack_80 = param_2;
  if (uVar10 == 0) {
    _swift_bridgeObjectRetain(uVar7);
    puVar8 = (undefined *)0x0;
  }
  else {
    if (uVar10 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar10;
      if (-1 < (long)uVar10) {
        uVar14 = uVar10 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar14 == 0) {
      _swift_bridgeObjectRetain(uVar7);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      param_2 = lStack_80;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(uVar7);
      FUN_103f2c9dc(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2c864);
        (*pcVar2)();
      }
      puVar8 = puStack_68;
      puStack_88 = param_1;
      if ((uVar10 & 0xc000000000000001) == 0) {
        plVar11 = (long *)(uVar10 + 0x20);
        do {
          lVar6 = *plVar11;
          *puVar15 = *(undefined4 *)(lVar6 + _DAT_11302f080);
          puVar15[1] = *(undefined4 *)(lVar6 + _DAT_11302f088);
          *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar6 + _DAT_11302f090);
          func_0x0001009f0578(lVar6 + _DAT_113812760,
                              (long)puVar15 + (long)*(int *)(lStack_70 + 0x1c));
          uVar10 = *(ulong *)(puVar8 + 0x10);
          puStack_68 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
            FUN_103f2c9dc(1 < *(ulong *)(puVar8 + 0x18),uVar10 + 1,1);
          }
          puVar8 = puStack_68;
          *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
          FUN_103f2ccf4(puVar15,puStack_68 +
                                *(long *)(lVar9 + 0x48) * uVar10 +
                                ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
          uVar14 = uVar14 - 1;
          param_1 = puStack_88;
          plVar11 = plVar11 + 1;
          param_2 = lStack_80;
        } while (uVar14 != 0);
      }
      else {
        uVar16 = 0;
        do {
          uVar5 = uVar16;
          FUN_103eaffec(uVar16,uVar10);
          *puVar17 = *(undefined4 *)(uVar5 + _DAT_11302f080);
          puVar17[1] = *(undefined4 *)(uVar5 + _DAT_11302f088);
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(uVar5 + _DAT_11302f090);
          func_0x0001009f0578(uVar5 + _DAT_113812760,
                              (long)puVar17 + (long)*(int *)(lStack_70 + 0x1c));
          _swift_unknownObjectRelease(uVar5);
          uVar5 = *(ulong *)(puVar8 + 0x10);
          puStack_68 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            FUN_103f2c9dc(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
          }
          puVar8 = puStack_68;
          uVar16 = uVar16 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
          FUN_103f2ccf4(puVar17,puStack_68 +
                                *(long *)(lVar9 + 0x48) * uVar5 +
                                ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
          param_1 = puStack_88;
          param_2 = lStack_80;
        } while (uVar14 != uVar16);
      }
    }
  }
  lVar6 = lStack_78;
  *(undefined **)((long)param_1 + (long)*(int *)(lStack_78 + 0x24)) = puVar8;
  uVar10 = *(ulong *)(param_2 + _DAT_113812758);
  if (uVar10 == 0) {
    _objc_release(param_2);
    puVar8 = (undefined *)0x0;
  }
  else {
    if (uVar10 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar10;
      if (-1 < (long)uVar10) {
        uVar14 = uVar10 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar14 == 0) {
      _objc_release(lStack_80);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_103f2c9dc(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2c868);
        (*pcVar2)();
      }
      puVar8 = puStack_68;
      puStack_88 = param_1;
      if ((uVar10 & 0xc000000000000001) == 0) {
        plVar11 = (long *)(uVar10 + 0x20);
        do {
          lVar6 = *plVar11;
          *puVar12 = *(undefined4 *)(lVar6 + _DAT_11302f080);
          *(undefined4 *)((long)auStack_90 + lVar3 + 4) = *(undefined4 *)(lVar6 + _DAT_11302f088);
          *(undefined8 *)((long)&puStack_88 + lVar3) = *(undefined8 *)(lVar6 + _DAT_11302f090);
          func_0x0001009f0578(lVar6 + _DAT_113812760,
                              (long)puVar12 + (long)*(int *)(lStack_70 + 0x1c));
          uVar10 = *(ulong *)(puVar8 + 0x10);
          puStack_68 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
            FUN_103f2c9dc(1 < *(ulong *)(puVar8 + 0x18),uVar10 + 1,1);
          }
          puVar8 = puStack_68;
          *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
          FUN_103f2ccf4(puVar12,puStack_68 +
                                *(long *)(lVar9 + 0x48) * uVar10 +
                                ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
          uVar14 = uVar14 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar16 = 0;
        do {
          uVar5 = uVar16;
          FUN_103eaffec(uVar16,uVar10);
          *puVar13 = *(undefined4 *)(uVar5 + _DAT_11302f080);
          puVar13[1] = *(undefined4 *)(uVar5 + _DAT_11302f088);
          *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(uVar5 + _DAT_11302f090);
          func_0x0001009f0578(uVar5 + _DAT_113812760,
                              (long)puVar13 + (long)*(int *)(lStack_70 + 0x1c));
          _swift_unknownObjectRelease(uVar5);
          uVar5 = *(ulong *)(puVar8 + 0x10);
          puStack_68 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            FUN_103f2c9dc(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
          }
          puVar8 = puStack_68;
          uVar16 = uVar16 + 1;
          *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
          FUN_103f2ccf4(puVar13,puStack_68 +
                                *(long *)(lVar9 + 0x48) * uVar5 +
                                ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
        } while (uVar14 != uVar16);
      }
      _objc_release(lStack_80);
      lVar6 = lStack_78;
      param_1 = puStack_88;
    }
  }
  *(undefined **)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) = puVar8;
  return;
}



/* Entry: 103f2c868; end: 103f2c8e3; -[SCWeatherInfo init] */

void FUN_103f2c868(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCWeatherServices/SCWeatherInfoWrapper.swift"
             ,0x2c,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2c8b0);
  (*pcVar1)();
}



/* Entry: 103f2c8e4; end: 103f2c93f; -[SCWeatherInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2c8e4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f030 + 8));
  func_0x0001000d1dcc(param_1 + _DAT_113812748);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113812750));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113812758));
  return;
}



/* Entry: 103f2c940; end: 103f2c95b;  */

void FUN_103f2c940(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f2c9f8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f2c95c; end: 103f2c9db;  */

undefined8 FUN_103f2c95c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103f2a970();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103f2c9dc; end: 103f2c9f7;  */

void FUN_103f2c9dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f2cb1c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f2c9f8; end: 103f2cb1b;  */

undefined * FUN_103f2c9f8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2cb1c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103f2cc98();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103f2d318(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103f2cb1c; end: 103f2cc97;  */

undefined * FUN_103f2cb1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2cc98);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x11302f070;
    func_0x0001000285a8(0x11302f070,&UNK_10dcac3b8);
    lVar5 = 0;
    FUN_103f2a970();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2cc90);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2cc94);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_103f2a970();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 103f2cc98; end: 103f2ccf3;  */

void FUN_103f2cc98(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103f2d318();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x11302f078;
  plVar5 = (long *)&UNK_10dcac3c0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103f2ccf4; end: 103f2cd37;  */

undefined8 FUN_103f2ccf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103f2a970();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103f2cd38; end: 103f2cd3f;  */

void FUN_103f2cd38(void)

{
  if (lRam000000011302f060 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7d5b50);
  return;
}



/* Entry: 103f2cd40; end: 103f2cd77;  */

void FUN_103f2cd40(undefined8 param_1)

{
  if (lRam000000011302f060 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d5b50);
  return;
}



/* Entry: 103f2cd78; end: 103f2ce17;  */

void FUN_103f2cd78(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_40 = &UNK_10dcac388;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dcac3a0;
    puStack_28 = &UNK_10dcac3a0;
    _swift_updateClassMetadata2(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f2ce18; end: 103f2cec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f2ce18(undefined4 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302f080) = *param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11302f088) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11302f090) = *(undefined8 *)(param_1 + 2);
  lVar1 = 0;
  FUN_103f2a970();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar1 + 0x1c),unaff_x20 + _DAT_113812760);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_103f2d198(param_1);
  return puVar2;
}



/* Entry: 103f2cec4; end: 103f2ced3; -[SCWeatherForecast temperatureFMax] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f2cec4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302f080);
}



/* Entry: 103f2ced4; end: 103f2cee3; -[SCWeatherForecast temperatureFMin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f2ced4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302f088);
}



/* Entry: 103f2cee4; end: 103f2cef3; -[SCWeatherForecast weatherCondition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2cee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302f090);
}



/* Entry: 103f2cef4; end: 103f2cfbb; -[SCWeatherForecast date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2cef4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_113812760,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f2cfbc; end: 103f2d063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f2cfbc(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302f080) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11302f088) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302f090) = param_3;
  func_0x0001009f0578(param_4,unaff_x20 + _DAT_113812760);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_4);
  return puVar1;
}



/* Entry: 103f2d064; end: 103f2d197; -[SCWeatherForecast initWithTemperatureFMax:temperatureFMin:weatherCondition:date:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f2d064(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_3;
  _swift_getObjectType();
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&lStack_60 - extraout_x8;
  if (param_6 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar2,param_6);
    lVar3 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_6 == 0,1);
  *(undefined4 *)(param_3 + _DAT_11302f080) = param_1;
  *(undefined4 *)(param_3 + _DAT_11302f088) = param_2;
  *(undefined8 *)(param_3 + _DAT_11302f090) = param_5;
  func_0x0001009f0578(lVar2,param_3 + _DAT_113812760);
  plVar4 = &lStack_60;
  lStack_60 = param_3;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(lVar2);
  return plVar4;
}



/* Entry: 103f2d198; end: 103f2d1d3;  */

undefined8 FUN_103f2d198(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103f2a970();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f2d1d4; end: 103f2d1d7; -[SCWeatherForecast copyWithZone:] */

void FUN_103f2d1d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f2d1d8; end: 103f2d283; -[SCWeatherForecast description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d1d8(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  lVar2 = 0;
  FUN_103f2a970();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined4 *)(&stack0xffffffffffffffe0 + lVar1);
  uVar4 = *(undefined4 *)(param_1 + _DAT_11302f088);
  *puVar3 = *(undefined4 *)(param_1 + _DAT_11302f080);
  *(undefined4 *)(&stack0xffffffffffffffe4 + lVar1) = uVar4;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar1) = *(undefined8 *)(param_1 + _DAT_11302f090);
  func_0x0001009f0578(param_1 + _DAT_113812760,
                      (undefined1 *)((long)puVar3 + (long)*(int *)(lVar2 + 0x1c)));
  FUN_103f2d198(puVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2d284; end: 103f2d2ff; -[SCWeatherForecast init] */

void FUN_103f2d284(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWeatherServices/SCWeatherForecastWrapper.swift",0x30,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2d2cc);
  (*pcVar1)();
}



/* Entry: 103f2d300; end: 103f2d317; -[SCWeatherForecast .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f2d300(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_113812760;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103f2d318; end: 103f2d34f;  */

void FUN_103f2d318(undefined8 param_1)

{
  if (lRam000000011302f0c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d5ba0);
  return;
}



/* Entry: 103f2d350; end: 103f2d41f;  */

void FUN_103f2d350(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f2d420; end: 103f2d48f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f2d420(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x000103f2d3dc(param_1,unaff_x20 + _DAT_11302f0d0);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103f2d490; end: 103f2d4ef; -[_TtC29SCGenerativeAIOnboardingScope39SCGenAIOnboardingFeaturePluginContainer init] */

void FUN_103f2d490(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenerativeAIOnboardingScope.SCGenAIOnboardingFeaturePluginContainer",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2d4bc);
  (*pcVar1)();
}



/* Entry: 103f2d4f0; end: 103f2d4ff; -[_TtC29SCGenerativeAIOnboardingScope39SCGenAIOnboardingFeaturePluginContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d4f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_11302f0d0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302f0d0));
  return;
}



/* Entry: 103f2d500; end: 103f2d54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d500(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302f0d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2d54c; end: 103f2d5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d54c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302f0d8) = param_1;
  func_0x000103f2d588();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2d5a8; end: 103f2d603; -[SCGenAIOnboardingFeaturePluginScope init] */

void FUN_103f2d5a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenerativeAIOnboardingScope.SCGenAIOnboardingFeaturePluginScope",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2d5d4);
  (*pcVar1)();
}



/* Entry: 103f2d604; end: 103f2d613; -[SCGenAIOnboardingFeaturePluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302f0d8));
  return;
}



/* Entry: 103f2d614; end: 103f2d633;  */

void FUN_103f2d614(void)

{
  _objc_opt_self(&PTR_PTR_112967b88);
  return;
}



/* Entry: 103f2d634; end: 103f2d653; -[SCGenAIOnboardingPresenterHandler genAIOnboardingDidCancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d634(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302f130);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110723670;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f2d654; end: 103f2d70f; -[SCGenAIOnboardingPresenterHandler setGenAIOnboardingDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d654(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110723658;
    _swift_allocObject(&UNK_110723658,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x103f2dc58;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f130);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f2d710; end: 103f2d71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d710(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f130);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 103f2d71c; end: 103f2d75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f2d71c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302f130;
  _swift_beginAccess(unaff_x20 + _DAT_11302f130,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f2dc4c;
  return auVar2;
}



/* Entry: 103f2d75c; end: 103f2d77b; -[SCGenAIOnboardingPresenterHandler genAIOnboardingDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d75c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302f138);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110723620;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f2d77c; end: 103f2d837; -[SCGenAIOnboardingPresenterHandler setGenAIOnboardingDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d77c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110723608;
    _swift_allocObject(&UNK_110723608,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x103f2dc54;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f138);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f2d838; end: 103f2d843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d838(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f138);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 103f2d844; end: 103f2d883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f2d844(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302f138;
  _swift_beginAccess(unaff_x20 + _DAT_11302f138,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103f2d884;
  return auVar2;
}



/* Entry: 103f2d884; end: 103f2d887;  */

void FUN_103f2d884(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f2d888; end: 103f2d89b; -[SCGenAIOnboardingPresenterHandler genAISettingsDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d888(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302f140);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1107235d0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f2d89c; end: 103f2d943;  */

void FUN_103f2d89c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    ppuVar3 = &puStack_78;
    uStack_60 = param_4;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f2d944; end: 103f2d94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f2d944(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11302f140);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103f2d950; end: 103f2d9a3;  */

undefined1  [16] FUN_103f2d950(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  func_0x000100b64c10(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103f2d9a4; end: 103f2da5f; -[SCGenAIOnboardingPresenterHandler setGenAISettingsDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2d9a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1107235b8;
    _swift_allocObject(&UNK_1107235b8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_103f2dc14;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f140);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f2da60; end: 103f2da6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2da60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f140);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 103f2da6c; end: 103f2dac3;  */

void FUN_103f2da6c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x00010058d43c(uVar2,uVar3);
  return;
}



/* Entry: 103f2dac4; end: 103f2db03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f2dac4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302f140;
  _swift_beginAccess(unaff_x20 + _DAT_11302f140,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f2dc50;
  return auVar2;
}



/* Entry: 103f2db04; end: 103f2db23;  */

void FUN_103f2db04(void)

{
  _objc_opt_self(&PTR_PTR_112967d08);
  return;
}



/* Entry: 103f2db24; end: 103f2db8f; -[SCGenAIOnboardingPresenterHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2db24(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f130);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f138);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f140);
  lVar2 = param_1;
  FUN_103f2db04();
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2db90; end: 103f2dbbf;  */

void FUN_103f2db90(void)

{
  FUN_103f2db04();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f2dbc0; end: 103f2dc13; -[SCGenAIOnboardingPresenterHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103f2dbe0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103f2dbe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dbc0(long param_1)

{
  if (*(long *)(param_1 + _DAT_11302f130) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_11302f130))[1]);
    return;
  }
  return;
}



/* Entry: 103f2dc14; end: 103f2dc5b;  */

void FUN_103f2dc14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103f2dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103f2dc5c; end: 103f2dca3; -[SCGenerativeAIOnboardingScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dc5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f170;
  _swift_beginAccess(param_1 + _DAT_11302f170,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2dca4; end: 103f2dcfb; -[SCGenerativeAIOnboardingScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f170;
  _swift_beginAccess(param_1 + _DAT_11302f170,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f2dcfc; end: 103f2dd1b; -[SCGenerativeAIOnboardingScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dcfc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f178));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2dd1c; end: 103f2dd3b; -[SCGenerativeAIOnboardingScope oneShotUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dd1c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f180));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2dd3c; end: 103f2dd4b; -[SCGenerativeAIOnboardingScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2dd3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302f188);
}



/* Entry: 103f2dd4c; end: 103f2dd5b; -[SCGenerativeAIOnboardingScope routeToDreamsOnCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f2dd4c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302f190);
}



/* Entry: 103f2dd5c; end: 103f2de63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f2dd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11302f170;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302f170,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302f178) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302f180) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11302f188) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11302f190) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 103f2de64; end: 103f2deb3;  */

undefined8 FUN_103f2de64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103f2dff0();
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 103f2deb4; end: 103f2df47; -[SCGenerativeAIOnboardingScope initWithUiContainer:oneShotUIContainer:delegate:source:routeToDreamsOnCompletion:] */

undefined8
FUN_103f2deb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar1 = param_3;
  FUN_103f2dff0(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  return uVar1;
}



/* Entry: 103f2df48; end: 103f2dfa7; -[SCGenerativeAIOnboardingScope init] */

void FUN_103f2df48(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCGenerativeAIOnboardingScope.SCGenerativeAIOnboardingScope",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2df74);
  (*pcVar1)();
}



/* Entry: 103f2dfa8; end: 103f2dfef; -[SCGenerativeAIOnboardingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dfa8(long param_1)

{
  func_0x000102d53a08(param_1 + _DAT_11302f170);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11302f180));
  return;
}



/* Entry: 103f2dff0; end: 103f2e0d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2dff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_11302f170;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302f170,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302f178) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302f180) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_11302f188) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11302f190) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff88,puVar1);
  return;
}



/* Entry: 103f2e0d4; end: 103f2e0f3;  */

void FUN_103f2e0d4(void)

{
  _objc_opt_self(&PTR_PTR_112967e18);
  return;
}



/* Entry: 103f2e0f4; end: 103f2e113; -[SCGenAISelfieCustomSharingPolicySettingsScope UIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2e0f4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2e114; end: 103f2e15b; -[SCGenAISelfieCustomSharingPolicySettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2e114(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f1c8;
  _swift_beginAccess(param_1 + _DAT_11302f1c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2e15c; end: 103f2e28b; -[SCGenAISelfieCustomSharingPolicySettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2e15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f1c8;
  _swift_beginAccess(param_1 + _DAT_11302f1c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f2e28c; end: 103f2e303; -[SCGenAISelfieCustomSharingPolicySettingsScope initWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2e28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302f1c8,0);
  *(undefined8 *)(param_1 + _DAT_11302f1c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f2e304; end: 103f2e363; -[SCGenAISelfieCustomSharingPolicySettingsScope init] */

void FUN_103f2e304(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SelfieOnboardingServices.SCGenAISelfieCustomSharingPolicySettingsScope",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2e330);
  (*pcVar1)();
}



/* Entry: 103f2e364; end: 103f2e3bf; -[SCGenAISelfieCustomSharingPolicySettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f2e364(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f1c0));
  param_1 = param_1 + _DAT_11302f1c8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}


