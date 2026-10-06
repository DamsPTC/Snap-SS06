/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0007abcc; end: 0007ac47;  */

void __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF
               (long param_1,undefined8 param_2)

{
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  return;
}



/* Entry: 0007ac48; end: 0007ad77;  */

void __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12toAccentableyAA03AnyC0VSbF
               (uint param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lStack_60;
  long *plStack_58;
  
  iVar2 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  puVar1 = PTR___s7SwiftUI4ViewP9WidgetKitE16widgetAccentableyQrSbFQOMQ_00999900;
  if (iVar2 == 0) {
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
    lVar5 = (long)&lStack_60 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x12 + 0x10))(lVar5);
  }
  else {
    lVar3 = 0;
    lStack_60 = param_2;
    plStack_58 = param_3;
    _swift_getOpaqueTypeMetadata
              (0,&lStack_60,PTR___s7SwiftUI4ViewP9WidgetKitE16widgetAccentableyQrSbFQOMQ_00999900,0)
    ;
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar5 = (long)&lStack_60 - extraout_x8;
    __s7SwiftUI4ViewP9WidgetKitE16widgetAccentableyQrSbF(lVar5,param_1 & 1,param_2,param_3);
    plVar4 = &lStack_60;
    lStack_60 = param_2;
    plStack_58 = param_3;
    _swift_getOpaqueTypeConformance(plVar4,puVar1,1);
    param_2 = lVar3;
    param_3 = plVar4;
  }
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar5,param_2,param_3);
  return;
}



/* Entry: 0007ad78; end: 0007b0c7;  */

void FUN_0007ad78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x11,0,0);
  if (iVar1 == 0) {
    lVar4 = 0xae8f08;
    func_0x000115a8(0xae8f08,&UNK_007d2020);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = auStack_b0 + -extraout_x8_01;
    lVar9 = 0xae8f10;
    func_0x000115a8(0xae8f10,&UNK_007d2028);
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar7,param_2,lVar9);
    _swift_storeEnumTagMultiPayload(puVar7,lVar4,1);
    uVar5 = 0xae8f18;
    func_0x0007c0f8(0xae8f18,0xae8f10,&UNK_007d2028);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,puVar7,PTR___s7SwiftUI7AnyViewVN_00999740,lVar9,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uVar5);
  }
  else {
    lVar4 = 0xae8f20;
    func_0x000115a8(0xae8f20,&UNK_007d2030);
    lStack_98 = *(long *)(lVar4 + -8);
    lVar9 = *(long *)(lStack_98 + 0x40);
    lStack_90 = lVar4;
    uStack_88 = param_1;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    uStack_a0 = lVar9 + 0xfU & 0xfffffffffffffff0;
    puVar10 = auStack_b0 + -uStack_a0;
    __s7SwiftUI5ColorV5clearACvgZ();
    lVar2 = 0;
    lStack_80 = lVar4;
    __s7SwiftUI28ContainerBackgroundPlacementVMa();
    lVar8 = *(long *)(lVar2 + -8);
    puStack_a8 = puVar10;
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
    lVar11 = (long)puVar10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    __s7SwiftUI28ContainerBackgroundPlacementV9WidgetKitE6widgetACvgZ(lVar11);
    lVar9 = 0xae8f10;
    func_0x000115a8(0xae8f10,&UNK_007d2028);
    uVar5 = 0xae8f18;
    func_0x0007c0f8(0xae8f18,0xae8f10,&UNK_007d2028);
    uVar3 = uVar5;
    FUN_0007b0c8();
    __s7SwiftUI4ViewPAAE19containerBackground_3forQrqd___AA09ContainerE9PlacementVtAA10ShapeStyleRd__lF
              (puVar10,&lStack_80,lVar11,lVar9,PTR___s7SwiftUI5ColorVN_00999630,uVar5,uVar3);
    (**(code **)(lVar8 + 8))(lVar11,lVar2);
    _swift_release(lVar4);
    puVar7 = puStack_a8;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar8 = lStack_90;
    lVar2 = lStack_98;
    lVar11 = (long)puVar7 - uStack_a0;
    (**(code **)(lStack_98 + 0x10))(lVar11,puVar10,lStack_90);
    puStack_78 = PTR___s7SwiftUI5ColorVN_00999630;
    plVar6 = &lStack_80;
    lStack_80 = lVar9;
    uStack_70 = uVar5;
    uStack_68 = uVar3;
    _swift_getOpaqueTypeConformance
              (plVar6,
               PTR___s7SwiftUI4ViewPAAE19containerBackground_3forQrqd___AA09ContainerE9PlacementVtAA10ShapeStyleRd__lFQOMQ_009995f8
               ,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar11,lVar8,plVar6);
    lVar4 = 0xae8f08;
    func_0x000115a8(0xae8f08,&UNK_007d2020);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar6 = (long *)(puVar7 + -extraout_x8_00);
    *plVar6 = lVar11;
    _swift_storeEnumTagMultiPayload(plVar6);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,plVar6,PTR___s7SwiftUI7AnyViewVN_00999740,lVar9,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uVar5);
    (**(code **)(lVar2 + 8))(puVar10,lVar8);
  }
  return;
}



/* Entry: 0007b0c8; end: 0007b107;  */

void FUN_0007b0c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI5ColorVAA10ShapeStyleAAMc_00999620;
  _swift_getWitnessTable
            (PTR___s7SwiftUI5ColorVAA10ShapeStyleAAMc_00999620,PTR___s7SwiftUI5ColorVN_00999630);
  puRam0000000000ae8f28 = puVar1;
  return;
}



/* Entry: 0007b108; end: 0007b117;  */

void FUN_0007b108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_009991a0
  )();
  return;
}



/* Entry: 0007b118; end: 0007b253;  */

void FUN_0007b118(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar1 = 0;
  __s9WidgetKit0A13RenderingModeVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar8 = lVar4 + 0xfU & 0xfffffffffffffff0;
  puVar5 = &stack0xffffffffffffffa0 + -uVar8;
  FUN_0007b65c(puVar5);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar5 - uVar8;
  __s9WidgetKit0A13RenderingModeV8accentedACvgZ(lVar4);
  FUN_0007bfd0();
  puVar3 = puVar5;
  __sSQ2eeoiySbx_xtFZTj(puVar5,lVar4,lVar1,lVar2);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(lVar4,lVar1);
  (*pcVar7)(puVar5,lVar1);
  uVar9 = 0;
  if (((ulong)puVar3 & 1) == 0) {
    uVar9 = 0x3ff0000000000000;
  }
  lVar2 = 0xae8ff8;
  func_0x000115a8(0xae8ff8,&UNK_007d2168);
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24)) = uVar9;
  lVar2 = 0xae9000;
  func_0x000115a8(0xae9000,&UNK_007d2170);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  return;
}



/* Entry: 0007b254; end: 0007b623;  */

void __s7SwiftUI4ViewP21SnapchatWidgetsSharedE12hideIfTintedQryF
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long alStack_d0 [4];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_90 = param_3;
  __s7SwiftUI19_ConditionalContentVMa(0,PTR___s7SwiftUI7AnyViewVN_00999740,param_2);
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)alStack_d0 - extraout_x8;
  iVar1 = 2;
  lStack_98 = lVar7;
  FUN_0040c9a8(2,0x10,0,0);
  lStack_a0 = lVar7;
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_2 + -8);
    lVar3 = *(long *)(lVar4 + 0x40);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    uVar12 = lVar3 + 0xfU & 0xfffffffffffffff0;
    lVar7 = lVar7 - uVar12;
    pcVar9 = *(code **)(lVar4 + 0x10);
    (*pcVar9)(lVar7);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar10 = lVar7 - uVar12;
    (*pcVar9)(lVar10,lVar7,param_2);
    lVar3 = lStack_98;
    func_0x0004c13c(lStack_98,lVar10,PTR___s7SwiftUI7AnyViewVN_00999740,param_2,
                    PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uStack_90);
    pcVar9 = *(code **)(lVar4 + 8);
    (*pcVar9)(lVar10,param_2);
    (*pcVar9)(lVar7,param_2);
  }
  else {
    lVar3 = 0xff;
    FUN_0007b624();
    lVar4 = 0;
    __s7SwiftUI15ModifiedContentVMa(0,param_2,lVar3);
    lVar10 = *(long *)(lVar4 + -8);
    lVar13 = *(long *)(lVar10 + 0x40);
    lStack_b0 = lVar2;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    alStack_d0[2] = lVar13 + 0xfU & 0xfffffffffffffff0;
    lVar7 = lVar7 - alStack_d0[2];
    alStack_d0[1] = lVar7;
    uStack_a8 = param_1;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar2 = lVar7 - extraout_x12;
    alStack_d0[0] = lVar2;
    alStack_d0[3] = lVar14;
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    puVar8 = (undefined8 *)(lVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    puVar5 = &UNK_007d2038;
    _swift_getKeyPath();
    *puVar8 = puVar5;
    uVar6 = 0xae8f30;
    func_0x000115a8(0xae8f30,&UNK_007d2068);
    _swift_storeEnumTagMultiPayload(puVar8,uVar6,0);
    uVar6 = uStack_90;
    __s7SwiftUI4ViewPAAE8modifieryAA15ModifiedContentVyxqd__Gqd__lF
              (lVar2,puVar8,param_2,lVar3,uStack_90);
    FUN_0007b8f8();
    FUN_0007b934();
    uStack_80 = uVar6;
    puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    puStack_78 = puVar8;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,lVar4
               ,&uStack_80);
    pcVar9 = *(code **)(lVar10 + 0x10);
    (*pcVar9)(lVar7,lVar2,lVar4);
    pcVar11 = *(code **)(lVar10 + 8);
    (*pcVar11)(lVar2,lVar4);
    lVar2 = lStack_b0;
    lVar14 = alStack_d0[1];
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar14 = lVar14 - alStack_d0[2];
    (*pcVar9)(lVar14,lVar7,lVar4);
    lVar10 = lVar14;
    FUN_0004bffc(lVar14,lVar4,puVar5);
    lVar3 = lStack_98;
    lStack_88 = lVar10;
    FUN_0004c078(lStack_98,&lStack_88,PTR___s7SwiftUI7AnyViewVN_00999740,param_2,
                 PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uVar6);
    _swift_release(lVar10);
    (*pcVar11)(lVar14,lVar4);
    param_1 = uStack_a8;
    (*pcVar11)(lVar7,lVar4);
    lVar14 = alStack_d0[3];
  }
  puStack_70 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730;
  uStack_68 = uStack_90;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460,lVar2,
             &puStack_70);
  (**(code **)(lVar14 + 0x10))(param_1,lVar3,lVar2);
  (**(code **)(lVar14 + 8))(lVar3,lVar2);
  return;
}



/* Entry: 0007b624; end: 0007b65b;  */

void FUN_0007b624(undefined8 param_1)

{
  if (lRam0000000000ae8fb0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_008404f4);
  return;
}



/* Entry: 0007b65c; end: 0007b857;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0007b65c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  dword *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s7SwiftUI17EnvironmentValuesVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  FUN_0007c014();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A13RenderingModeVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar9 = puVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    puVar4 = puVar9;
    _os_log_type_enabled();
    if ((int)puVar4 != 0) {
      pdVar5 = &MACH_HEADER.filetype;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *pdVar5 = 0x8200102;
      uVar7 = 0xd000000000000013;
      auStack_70[1] = uVar6;
      FUN_00047c44(0xd000000000000013,0x80000000008b76e0,auStack_70 + 1);
      *(undefined8 *)(pdVar5 + 1) = uVar7;
      __os_log_impl(0,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,pdVar5,0xc);
      FUN_00036564(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(pdVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 0007b858; end: 0007b877;  */

void FUN_0007b858(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE19widgetRenderingModeAD0ehI0Vvg();
  return;
}



/* Entry: 0007b878; end: 0007b8f3;  */

void FUN_0007b878(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s9WidgetKit0A13RenderingModeVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE19widgetRenderingModeAD0ehI0Vvs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 0007b8f4; end: 0007b8f7;  */

void FUN_0007b8f4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s9WidgetKit0A13RenderingModeVMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE19widgetRenderingModeAD0ehI0Vvs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 0007b8f8; end: 0007b933;  */

undefined8 FUN_0007b8f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_0007b624();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 0007b934; end: 0007b977;  */

void FUN_0007b934(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae8f38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_0007b624(0xff);
  puVar2 = &UNK_007d2114;
  _swift_getWitnessTable(&UNK_007d2114,uVar1);
  puRam0000000000ae8f38 = puVar2;
  return;
}



/* Entry: 0007b978; end: 0007b99b;  */

void FUN_0007b978(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_008404cc,1);
  return;
}



/* Entry: 0007b99c; end: 0007ba2b;  */

void FUN_0007b99c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae8f40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8f48;
  FUN_00016c74(0xae8f48,&UNK_007d20e0);
  uVar2 = 0xae8f18;
  func_0x0007c0f8(0xae8f18,0xae8f10,&UNK_007d2028);
  puStack_30 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730;
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460;
  uStack_28 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460,uVar1,
             &puStack_30);
  puRam0000000000ae8f40 = puVar3;
  return;
}



/* Entry: 0007ba2c; end: 0007bafb;  */

long * FUN_0007ba2c(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  uVar1 = *(uint *)(*(long *)(lVar5 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar5);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar4 = 0;
      __s9WidgetKit0A13RenderingModeVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar5,!bVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 0007bafc; end: 0007bb67;  */

void FUN_0007bafc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A13RenderingModeVMa();
                    /* WARNING: Could not recover jumptable at 0x0007bb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 0007bb68; end: 0007bcaf;  */

undefined8 * FUN_0007bb68(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar4 = 0;
    __s9WidgetKit0A13RenderingModeVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar2,!bVar1);
  return param_1;
}



/* Entry: 0007bcb0; end: 0007bcf7;  */

undefined8 FUN_0007bcb0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 0007bcf8; end: 0007be57;  */

undefined8 FUN_0007bcf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  uVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar1);
  if ((int)uVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A13RenderingModeVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,lVar1,1);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)(param_1,param_2,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  return param_1;
}



/* Entry: 0007be58; end: 0007be63;  */

void FUN_0007be58(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 0007be64; end: 0007beab;  */

void FUN_0007be64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8f50;
  func_0x000115a8(0xae8f50,&UNK_007d20e8);
                    /* WARNING: Could not recover jumptable at 0x0007bea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 0007beac; end: 0007beb7;  */

void FUN_0007beac(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 0007beb8; end: 0007bfbf;  */

void FUN_0007beb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8f50;
  func_0x000115a8(0xae8f50,&UNK_007d20e8);
                    /* WARNING: Could not recover jumptable at 0x0007bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 0007bfc0; end: 0007bfcf;  */

void FUN_0007bfc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0084051c,1);
  return;
}



/* Entry: 0007bfd0; end: 0007c013;  */

void FUN_0007bfd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae8ff0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s9WidgetKit0A13RenderingModeVMa(0xff);
  puVar2 = PTR___s9WidgetKit0A13RenderingModeVSQAAMc_00999930;
  _swift_getWitnessTable(PTR___s9WidgetKit0A13RenderingModeVSQAAMc_00999930,uVar1);
  puRam0000000000ae8ff0 = puVar2;
  return;
}



/* Entry: 0007c014; end: 0007c063;  */

undefined8 FUN_0007c014(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae8f30;
  func_0x000115a8(0xae8f30,&UNK_007d2068);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0007c064; end: 0007c067;  */

void FUN_0007c064(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae9008 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8ff8;
  FUN_00016c74(0xae8ff8,&UNK_007d2168);
  uVar2 = 0xae9010;
  func_0x0007c0f8(0xae9010,0xae9000,&UNK_007d2170);
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_00999268;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae9008 = puVar3;
  return;
}



/* Entry: 0007c068; end: 0007c13b;  */

void FUN_0007c068(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae9008 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8ff8;
  FUN_00016c74(0xae8ff8,&UNK_007d2168);
  uVar2 = 0xae9010;
  func_0x0007c0f8(0xae9010,0xae9000,&UNK_007d2170);
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_00999268;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae9008 = puVar3;
  return;
}



/* Entry: 0007c13c; end: 0007c167;  */

void FUN_0007c13c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE14_viewListCount6inputs4bodySiSgAA01_cfG6InputsV_AgIXEtFZ_009991b0
  )();
  return;
}



/* Entry: 0007c168; end: 0007c357;  */

void FUN_0007c168(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xeb0000000072616c;
  uVar2 = 0x75676e6174636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x656e696c6e69;
  }
  uVar1 = 0x72616c7563726963;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0007c358; end: 0007c3bb;  */

void FUN_0007c358(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xeb0000000072616c;
  uVar2 = 0x75676e6174636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe600000000000000;
    uVar2 = 0x656e696c6e69;
  }
  uVar1 = 0x72616c7563726963;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 0007c3bc; end: 0007c41f;  */

ulong FUN_0007c3bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 0007c420; end: 0007c423;  */

void FUN_0007c420(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2180;
  _swift_getWitnessTable(&UNK_007d2180,&UNK_009a2aa8);
  puRam0000000000ae9018 = puVar1;
  return;
}



/* Entry: 0007c424; end: 0007c463;  */

void FUN_0007c424(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2180;
  _swift_getWitnessTable(&UNK_007d2180,&UNK_009a2aa8);
  puRam0000000000ae9018 = puVar1;
  return;
}



/* Entry: 0007c464; end: 0007c603;  */

int FUN_0007c464(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0007c4e0;
        goto LAB_0007c4c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0007c4c4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_0007c4e0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0007c604; end: 0007c62f; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kCameraDeepLinkReferrer] */

void FUN_0007c604(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x80000000008b7710);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007c630; end: 0007c65b; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kPMFDeepLinkReferrer] */

void FUN_0007c630(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x80000000008b7730);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007c65c; end: 0007c687; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kBirthdayDeepLinkReferrer] */

void FUN_0007c65c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x80000000008b7750);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007c688; end: 0007c6bb; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kMemoriesDeepLinkReferrer] */

void FUN_0007c688(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736569726f6d656d,0xef7465676469772d);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007c6bc; end: 0007c707; +[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers kMapFriendLocationDeepLinkReferrer] */

void FUN_0007c6bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x80000000008b7770);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007c708; end: 0007c743; -[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers init] */

void FUN_0007c708(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0007c6e8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007c744; end: 0007c773;  */

void FUN_0007c744(void)

{
  func_0x0007c6e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0007c774; end: 0007c783;  */

undefined1  [16] FUN_0007c774(void)

{
  return ZEXT816(0x9a2b60);
}



/* Entry: 0007c784; end: 0007c787; -[_TtC23HomeScreenWidgetDefines25SCWidgetDeepLinkReferrers .cxx_destruct] */

void FUN_0007c784(void)

{
  return;
}



/* Entry: 0007c788; end: 0007cb37;  */

undefined * __s23HomeScreenWidgetDefines0C11IdentifiersO010cameraLockB4KindSSvau(void)

{
  return &UNK_009a2b70;
}



/* Entry: 0007cb38; end: 0007cb43; -[SCMessagesExtensionUserInfo countryCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cb38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae90b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae90b8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0007cb44; end: 0007cb53; -[SCMessagesExtensionUserInfo age] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007cb44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae90c0);
}



/* Entry: 0007cb54; end: 0007cb5f; -[SCMessagesExtensionUserInfo avatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cb54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae90c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae90c8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0007cb60; end: 0007cba7;  */

void FUN_0007cb60(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0007cba8; end: 0007cc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae90b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae90c0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae90c8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007cc34; end: 0007ccd3; -[SCMessagesExtensionUserInfo initWithCountryCode:age:avatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cc34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae90b8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae90c0) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae90c8);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007ccd4; end: 0007cd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ccd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae90b8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae90c0) = param_1[2];
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae90c8);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007cd44; end: 0007cd47; -[SCMessagesExtensionUserInfo copyWithZone:] */

void FUN_0007cd44(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0007cd48; end: 0007ce53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cd48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae90b8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_00ae90b8))[1]);
  uVar1 = 0x5f5952544e554f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5952544e554f43,0xec00000045444f43);
  func_0x00782780(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x454741;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454741,0xe300000000000000);
  func_0x00782760(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae90c8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_00ae90c8))[1]);
  uVar1 = 0x495f524154415641;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f524154415641,0xe900000000000044);
  func_0x00782780(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0007ce54; end: 0007cea3; -[SCMessagesExtensionUserInfo encodeWithCoder:] */

void FUN_0007ce54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0007cd48(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0007cea4; end: 0007ced3;  */

void FUN_0007cea4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0007ced4(param_1);
  return;
}



/* Entry: 0007ced4; end: 0007d143;  */

undefined8 FUN_0007ced4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
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
  uVar2 = 0x5f5952544e554f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5952544e554f43,0xec00000045444f43);
  lVar3 = param_1;
  func_0x00781b00();
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
  puVar1 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    uVar7 = uStack_98;
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_0007d0f4;
    }
    uVar5 = 0x454741;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454741,0xe300000000000000);
    func_0x00781ae0(param_1);
    _objc_release(uVar5);
    uVar5 = 0x495f524154415641;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f524154415641,0xe900000000000044);
    lVar3 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
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
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_0099b040,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar7);
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00785120();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_0007d0f4;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar7);
  }
  FUN_00027748(&uStack_70);
LAB_0007d0f4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 0007d144; end: 0007d16b; -[SCMessagesExtensionUserInfo initWithCoder:] */

void FUN_0007d144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0007ced4();
  return;
}



/* Entry: 0007d16c; end: 0007d187; -[SCMessagesExtensionUserInfo description] */

void FUN_0007d16c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007d188; end: 0007d203; -[SCMessagesExtensionUserInfo init] */

void FUN_0007d188(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "MessagesExtensionBridge/MessagesExtensionUserInfoWrapper.swift",0x3e,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7d1d0);
  (*pcVar1)();
}



/* Entry: 0007d204; end: 0007d243; -[SCMessagesExtensionUserInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d204(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae90b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae90c8 + 8));
  return;
}



/* Entry: 0007d244; end: 0007d263;  */

void FUN_0007d244(void)

{
  _objc_opt_self(&PTR_PTR_00ac97b8);
  return;
}



/* Entry: 0007d264; end: 0007d273; -[SCMessagesExtensionConfigs messagesGrapheneSamplingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007d264(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_00ae90f8);
}



/* Entry: 0007d274; end: 0007d2bf; -[SCMessagesExtensionConfigs messagesGrapheneConfigToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d274(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae9100);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae9100))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0007d2c0; end: 0007d2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d2c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_00ae90f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9100);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007d2c4; end: 0007d3b3; -[SCMessagesExtensionConfigs initWithMessagesGrapheneSamplingRate:messagesGrapheneConfigToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d2c4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined4 *)(param_2 + _DAT_00ae90f8) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_00ae9100);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007d3b4; end: 0007d3b7; -[SCMessagesExtensionConfigs copyWithZone:] */

void FUN_0007d3b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0007d3b8; end: 0007d47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(unaff_x20 + _DAT_00ae90f8);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b78d0);
  func_0x00782720(uVar3,param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae9100);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_00ae9100))[1]);
  uVar2 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b78f0);
  func_0x00782780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0007d480; end: 0007d4cf; -[SCMessagesExtensionConfigs encodeWithCoder:] */

void FUN_0007d480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0007d3b8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0007d4d0; end: 0007d4ff;  */

void FUN_0007d4d0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0007d500(param_1);
  return;
}



/* Entry: 0007d500; end: 0007d68b;  */

undefined8 FUN_0007d500(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b78d0);
  func_0x00781aa0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b78f0);
  lVar2 = param_2;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_2);
    FUN_00027748(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      func_0x00785bc0(param_1);
      _objc_release(uVar1);
      _objc_release(param_2);
      return unaff_x20;
    }
    _objc_release(param_2);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 0007d68c; end: 0007d6b3; -[SCMessagesExtensionConfigs initWithCoder:] */

void FUN_0007d68c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0007d500();
  return;
}



/* Entry: 0007d6b4; end: 0007d6cf; -[SCMessagesExtensionConfigs description] */

void FUN_0007d6b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007d6d0; end: 0007d74b; -[SCMessagesExtensionConfigs init] */

void FUN_0007d6d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "MessagesExtensionBridge/MessagesExtensionConfigsWrapper.swift",0x3d,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7d718);
  (*pcVar1)();
}



/* Entry: 0007d74c; end: 0007d75f; -[SCMessagesExtensionConfigs .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae9100 + 8));
  return;
}



/* Entry: 0007d760; end: 0007d77f;  */

void FUN_0007d760(void)

{
  _objc_opt_self(&PTR_PTR_00ac9898);
  return;
}



/* Entry: 0007d780; end: 0007d797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007d780(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_00ae90f8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae9100);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007d798; end: 0007d86f;  */

void FUN_0007d798(void)

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



/* Entry: 0007d870; end: 0007d88f;  */

void FUN_0007d870(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 0007d890; end: 0007d8cf;  */

void FUN_0007d890(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2370;
  _swift_getWitnessTable(&UNK_007d2370,&UNK_009a2e08);
  puRam0000000000ae9130 = puVar1;
  return;
}



/* Entry: 0007d8d0; end: 0007d8f3;  */

undefined1  [16] FUN_0007d8d0(void)

{
  return ZEXT816(0x9a2e08);
}



/* Entry: 0007d8f4; end: 0007d9cb;  */

void FUN_0007d8f4(void)

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



/* Entry: 0007d9cc; end: 0007d9d7;  */

void FUN_0007d9cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 0007d9d8; end: 0007d9ef; +[SCSnapTokenGetModeUtil stringWithGetMode:] */

void FUN_0007d9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0007da6c(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007d9f0; end: 0007da2b; -[SCSnapTokenGetModeUtil init] */

void FUN_0007d9f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_0007db68();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0007da2c; end: 0007da5b;  */

void FUN_0007da2c(void)

{
  FUN_0007db68();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0007da5c; end: 0007da6b;  */

undefined1  [16] FUN_0007da5c(ulong param_1)

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



/* Entry: 0007da6c; end: 0007db67;  */

void FUN_0007da6c(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      FUN_0007dbdc();
      pcVar2 = "cache_hit_sync_read_from_memory";
      uVar3 = 0x1f;
    }
    else {
      if (param_1 != 1) {
LAB_0007db44:
        lStack_28 = param_1;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_009a2e80,&lStack_28,&UNK_009a2e80,PTR___sSuN_0099b360);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x7db68);
        (*pcVar1)();
      }
      FUN_0007dbdc(0);
      pcVar2 = "cache_hit_read_from_memory";
      uVar3 = 0x1a;
    }
  }
  else if (param_1 == 2) {
    FUN_0007dbdc(0);
    pcVar2 = "cache_hit_load_from_disk";
    uVar3 = 0x18;
  }
  else if (param_1 == 3) {
    FUN_0007dbdc(0);
    pcVar2 = "cache_miss_fetch_from_network";
    uVar3 = 0x1d;
  }
  else {
    if (param_1 != 4) goto LAB_0007db44;
    FUN_0007dbdc(0);
    pcVar2 = "unknown";
    uVar3 = 7;
  }
  __sSo8NSStringC10FoundationE13stringLiteralABs12StaticStringV_tcfC(pcVar2,uVar3,2);
  return;
}



/* Entry: 0007db68; end: 0007db87;  */

void FUN_0007db68(void)

{
  _objc_opt_self(&PTR_PTR_00ac9970);
  return;
}



/* Entry: 0007db88; end: 0007db8b;  */

void FUN_0007db88(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2450;
  _swift_getWitnessTable(&UNK_007d2450,&UNK_009a2e80);
  puRam0000000000ae9138 = puVar1;
  return;
}



/* Entry: 0007db8c; end: 0007dbcb;  */

void FUN_0007db8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d2450;
  _swift_getWitnessTable(&UNK_007d2450,&UNK_009a2e80);
  puRam0000000000ae9138 = puVar1;
  return;
}



/* Entry: 0007dbcc; end: 0007dbdb;  */

undefined1  [16] FUN_0007dbcc(void)

{
  return ZEXT816(0x9a2e80);
}



/* Entry: 0007dbdc; end: 0007dc1f;  */

void FUN_0007dbdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae9168 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae9168 = puVar1;
  return;
}



/* Entry: 0007dc20; end: 0007dc33;  */

bool FUN_0007dc20(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0007dc34; end: 0007dd0b;  */

void FUN_0007dc34(void)

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



/* Entry: 0007dd0c; end: 0007dd17;  */

void FUN_0007dd0c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 0007dd18; end: 0007dd43; +[SCSnapTokenAccessTokenErrorConstants domain] */

void FUN_0007dd18(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x80000000008b79e0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007dd44; end: 0007dd7f; -[SCSnapTokenAccessTokenErrorConstants init] */

void FUN_0007dd44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_0007ddc0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  return;
}


