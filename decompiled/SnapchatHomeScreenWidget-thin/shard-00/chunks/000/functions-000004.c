/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100024b6c; end: 100024cc3;  */

void FUN_100024b6c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100024cc4; end: 100024e1f;  */

void FUN_100024cc4(code *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined *puVar9;
  
  lVar2 = 0;
  FUN_100024110();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s21SnapchatWidgetsShared12AppGroupDataO13doesFileExist8filename11isDirectorySbSS_SbtFZ
            (0x6e49646567676f6c,0xe800000000000000,1);
  __s10Foundation4DateVACycfC(puVar8);
  uVar1 = (uint)uVar3 & 1;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO21buildSnapcodeDeepLink10isLoggedIn10Foundation3URLVSgSb_tFZ
            (puVar8 + *(int *)(lVar2 + 0x14),uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = 0x65646f6370616e73;
    uVar7 = 0xe800000000000000;
    __s21SnapchatWidgetsShared12AppGroupDataO04fileF08filenameSo6NSDataCSgSS_tFZ
              (0x65646f6370616e73,0xe800000000000000);
    if (lVar4 != 0) {
      lVar5 = lVar4;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      puVar9 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_allocWithZone();
      lVar6 = lVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar7);
      func_0x000100086ca0();
      _objc_release(lVar6);
      func_0x000100018c5c(lVar5,uVar7);
      _objc_release(lVar4);
      goto LAB_100024de0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_100024de0:
  *(undefined **)(puVar8 + *(int *)(lVar2 + 0x18)) = puVar9;
  puVar8[*(int *)(lVar2 + 0x1c)] = (char)uVar1;
  (*param_1)(puVar8);
  func_0x000100024bf4(puVar8);
  return;
}



/* Entry: 100024e20; end: 100024e23;  */

void FUN_100024e20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100024e24; end: 1000250e7;  */

long * FUN_100024e24(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = 0;
  FUN_100024110();
  uVar1 = *(uint *)(*(long *)(lVar2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    lVar6 = (long)*(int *)(lVar2 + 0x14);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar4 + -8);
    lVar3 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
    }
    else {
      lVar3 = 0x1000c4330;
      func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x1c));
    _objc_retain();
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1000250e8; end: 10002523f;  */

long FUN_1000250e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  lVar2 = 0;
  FUN_100024110();
  lVar6 = (long)*(int *)(lVar2 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar1 = param_1 + lVar6;
  (*pcVar8)(lVar1,1,lVar3);
  lVar4 = param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar1 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1 + lVar6,param_2 + lVar6,lVar3);
      goto LAB_1000251e4;
    }
    (**(code **)(lVar7 + 8))(param_1 + lVar6,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + lVar6,param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar3);
    goto LAB_1000251e4;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy(param_1 + lVar6,param_2 + lVar6,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
LAB_1000251e4:
  lVar1 = (long)*(int *)(lVar2 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  _objc_retain();
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar2 + 0x1c));
  return param_1;
}



/* Entry: 100025240; end: 10002533b;  */

long FUN_100025240(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  lVar2 = 0;
  FUN_100024110();
  lVar4 = (long)*(int *)(lVar2 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  lVar1 = param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar1,1,lVar3);
  if ((int)lVar1 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1 + lVar4,param_2 + lVar4,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1 + lVar4,0,1,lVar3);
  }
  else {
    lVar1 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy(param_1 + lVar4,param_2 + lVar4,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  }
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(lVar2 + 0x18));
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar2 + 0x1c));
  return param_1;
}



/* Entry: 10002533c; end: 10002548b;  */

long FUN_10002533c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  lVar2 = 0;
  FUN_100024110();
  lVar6 = (long)*(int *)(lVar2 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar1 = param_1 + lVar6;
  (*pcVar8)(lVar1,1,lVar3);
  lVar4 = param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  if ((int)lVar1 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x28))(param_1 + lVar6,param_2 + lVar6,lVar3);
      goto LAB_100025438;
    }
    (**(code **)(lVar7 + 8))(param_1 + lVar6,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1 + lVar6,param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))(param_1 + lVar6,0,1,lVar3);
    goto LAB_100025438;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy(param_1 + lVar6,param_2 + lVar6,*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
LAB_100025438:
  lVar1 = (long)*(int *)(lVar2 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(lVar2 + 0x1c));
  return param_1;
}



/* Entry: 10002548c; end: 100025497;  */

void FUN_10002548c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 100025498; end: 1000254d3;  */

void FUN_100025498(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100024110();
                    /* WARNING: Could not recover jumptable at 0x0001000254d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Entry: 1000254d4; end: 1000254df;  */

void FUN_1000254d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 1000254e0; end: 10002551f;  */

void FUN_1000254e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100024110();
                    /* WARNING: Could not recover jumptable at 0x00010002551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 100025520; end: 100025557;  */

void FUN_100025520(undefined8 param_1)

{
  if (lRam00000001000c4ea0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008f7c8);
  return;
}



/* Entry: 100025558; end: 1000255bf;  */

void FUN_100025558(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_100024110();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 1000255c0; end: 1000255cf;  */

void FUN_1000255c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f7f0,1);
  return;
}



/* Entry: 1000255d0; end: 10002606b;  */

void FUN_1000255d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  byte bVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  undefined8 ****ppppuVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  undefined8 **ppuStack_d0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 ***pppuStack_90;
  undefined2 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  long lStack_68;
  
  lVar2 = 0x1000c4ed8;
  puStack_98 = param_1;
  func_0x0001000100d0(0x1000c4ed8,&UNK_100089eb8);
  lStack_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pppuVar9 = (undefined8 ***)((long)&ppuStack_d0 - extraout_x8);
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_b8 + 0x40));
  ppppuVar18 = (undefined8 ****)((long)pppuVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0x1000c4ee0;
  func_0x0001000100d0(0x1000c4ee0,&UNK_100089ec0);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  ppppuVar13 = (undefined8 ****)((long)ppppuVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pppuStack_c0 = ppppuVar13;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = (long)ppppuVar13 - extraout_x12;
  lVar2 = 0x1000c4330;
  lStack_a0 = lVar12;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar19 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar15 = lVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar15 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar16 = lVar14 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar20 = lVar16 - extraout_x12_04;
  lVar2 = 0;
  FUN_100024110();
  if (*(char *)(param_2 + *(int *)(lVar2 + 0x1c)) == '\x01') {
    lVar12 = *(long *)(param_2 + *(int *)(lVar2 + 0x18));
    if (lVar12 == 0) {
      uVar6 = 0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010009d5f0);
      puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
      _objc_opt_self();
      func_0x000100086b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      FUN_1000260d0(param_2 + *(int *)(lVar2 + 0x14),lVar16);
      lVar12 = 0;
      __s10Foundation3URLVMa();
      lVar14 = *(long *)(lVar12 + -8);
      pcVar17 = *(code **)(lVar14 + 0x30);
      lVar2 = lVar16;
      (*pcVar17)(lVar16,1,lVar12);
      if ((int)lVar2 == 1) {
        lVar15 = lVar12;
        (**(code **)(lVar14 + 0x38))(lVar20,1,1);
        lVar2 = lVar16;
        (*pcVar17)(lVar16,1);
        bVar11 = (byte)lVar12;
        if ((int)lVar2 != 1) {
          FUN_100014e24(lVar16);
        }
        lVar12 = lVar15;
        if (puVar3 != (undefined *)0x0) goto LAB_100025bcc;
LAB_100025f34:
        uVar6 = 0x800000010009d5c0;
        ppppuVar18 = (undefined8 ****)0xd00000000000002c;
        __s7SwiftUI18LocalizedStringKeyV13stringLiteralACSS_tcfC();
        *(undefined2 *)(lVar20 + -8) = 0x100;
        *(undefined8 *)(lVar20 + -0x10) = 0;
        bStack_70 = bVar11 & 1;
        __s7SwiftUI4TextV_9tableName6bundle7commentAcA18LocalizedStringKeyV_SSSgSo8NSBundleCSgs06StaticI0VSgtcfC
                  ();
        ppppuVar13 = &pppuStack_80;
        pppuStack_80 = ppppuVar18;
        uStack_78 = uVar6;
        lStack_68 = lVar12;
        __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
                  (ppppuVar13,PTR___s7SwiftUI4TextVN_1000b06e0,
                   PTR___s7SwiftUI4TextVAA4ViewAAWP_1000b06d0);
      }
      else {
        (**(code **)(lVar14 + 0x20))(lVar20,lVar16,lVar12);
        bVar11 = 1;
        (**(code **)(lVar14 + 0x38))(lVar20,0);
        if (puVar3 == (undefined *)0x0) goto LAB_100025f34;
LAB_100025bcc:
        _objc_retain(puVar3);
        _objc_retain();
        puVar4 = puVar3;
        __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
        lVar12 = lStack_b0;
        lVar2 = lStack_b8;
        (**(code **)(lStack_b8 + 0x68))
                  (ppppuVar18,
                   *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
                   lStack_b0);
        ppppuVar13 = ppppuVar18;
        __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
                  (0,0,0,0,ppppuVar18,puVar4);
        _swift_release(puVar4);
        (**(code **)(lVar2 + 8))(ppppuVar18,lVar12);
        ppppuVar18 = ppppuVar13;
        __s7SwiftUI5ImageV21SnapchatWidgetsSharedE011toFullColorC4ViewAA03AnyJ0VyF();
        _swift_release(ppppuVar13);
        lVar12 = lStack_a0;
        pppuStack_80 = ppppuVar18;
        __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
                  (lStack_a0,lVar20,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
                   PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
        _swift_release(ppppuVar18);
        puVar4 = PTR__OBJC_CLASS___UIColor_1000c20f8;
        _objc_opt_self();
        func_0x0001000875e0();
        _objc_retainAutoreleasedReturnValue();
        __s7SwiftUI5ColorVyACSo7UIColorCcfC();
        puVar5 = puVar4;
        __s7SwiftUI4EdgeO3SetV3allAEvgZ();
        lVar2 = lStack_a8;
        ppppuVar13 = (undefined8 ****)pppuStack_c0;
        puVar1 = (undefined8 *)(lVar12 + *(int *)(lStack_a8 + 0x24));
        *puVar1 = puVar4;
        *(char *)(puVar1 + 1) = (char)puVar5;
        lVar14 = lVar12;
        func_0x000100026120(lVar12,pppuStack_c0);
        func_0x000100026170();
        __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppuVar13,lVar2,lVar14);
        _objc_release(puVar3);
        _objc_release(puVar3);
        func_0x00010002622c(lVar12);
      }
      FUN_100014e24(lVar20);
      uStack_88 = CONCAT11(uStack_88._1_1_,1);
      pppuStack_90 = ppppuVar13;
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&pppuStack_80,&pppuStack_90,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
                 PTR___s7SwiftUI7AnyViewVN_1000b08c8,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8,
                 PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    }
    else {
      FUN_1000260d0(param_2 + *(int *)(lVar2 + 0x14),lVar15);
      lVar16 = 0;
      __s10Foundation3URLVMa();
      lVar19 = *(long *)(lVar16 + -8);
      pcVar17 = *(code **)(lVar19 + 0x30);
      lVar2 = lVar15;
      (*pcVar17)(lVar15,1,lVar16);
      if ((int)lVar2 == 1) {
        (**(code **)(lVar19 + 0x38))(lVar14,1,1,lVar16);
        lVar2 = lVar15;
        (*pcVar17)(lVar15,1,lVar16);
        _objc_retain(lVar12);
        _objc_retain();
        if ((int)lVar2 != 1) {
          FUN_100014e24(lVar15);
        }
      }
      else {
        (**(code **)(lVar19 + 0x20))(lVar14,lVar15,lVar16);
        (**(code **)(lVar19 + 0x38))(lVar14,0,1,lVar16);
        _objc_retain(lVar12);
        _objc_retain();
      }
      _objc_retain();
      _objc_retain();
      lVar16 = lVar12;
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      lVar15 = lStack_b0;
      lVar2 = lStack_b8;
      (**(code **)(lStack_b8 + 0x68))
                (ppppuVar18,
                 *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
                 lStack_b0);
      ppppuVar13 = ppppuVar18;
      __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
                (0,0,0,0,ppppuVar18,lVar16);
      _swift_release(lVar16);
      (**(code **)(lVar2 + 8))(ppppuVar18,lVar15);
      ppppuVar18 = ppppuVar13;
      __s7SwiftUI5ImageV21SnapchatWidgetsSharedE011toFullColorC4ViewAA03AnyJ0VyF();
      _swift_release(ppppuVar13);
      lVar15 = lStack_a0;
      puVar4 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
      puVar3 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
      pppuStack_80 = ppppuVar18;
      __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
                (lStack_a0,lVar14,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
                 PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
      _swift_release(ppppuVar18);
      puVar5 = PTR__OBJC_CLASS___UIColor_1000c20f8;
      _objc_opt_self();
      puVar7 = puVar5;
      func_0x0001000875e0();
      _objc_retainAutoreleasedReturnValue();
      __s7SwiftUI5ColorVyACSo7UIColorCcfC();
      puVar8 = puVar7;
      __s7SwiftUI4EdgeO3SetV3allAEvgZ();
      puVar1 = (undefined8 *)(lVar15 + *(int *)(lStack_a8 + 0x24));
      *puVar1 = puVar7;
      *(char *)(puVar1 + 1) = (char)puVar8;
      lVar2 = 0x1000c4f00;
      func_0x0001000100d0(0x1000c4f00,&UNK_100089ed8);
      puVar1 = (undefined8 *)((long)pppuVar9 + (long)*(int *)(lVar2 + 0x24));
      *puVar1 = 0x4018000000000000;
      *(undefined2 *)(puVar1 + 1) = 0x100;
      func_0x000100026120(lVar15,pppuVar9);
      func_0x0001000875e0();
      _objc_retainAutoreleasedReturnValue();
      __s7SwiftUI5ColorVyACSo7UIColorCcfC();
      puVar7 = puVar5;
      __s7SwiftUI4EdgeO3SetV3allAEvgZ();
      lVar2 = lStack_c8;
      puVar1 = (undefined8 *)((long)pppuVar9 + (long)*(int *)(lStack_c8 + 0x24));
      *puVar1 = puVar5;
      *(char *)(puVar1 + 1) = (char)puVar7;
      func_0x000100026274();
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pppuVar9,lVar2,puVar7);
      _objc_release(lVar12);
      _objc_release(lVar12);
      func_0x00010002622c(lVar15);
      FUN_100014e24(lVar14);
      uStack_88 = (ushort)uStack_88._1_1_ << 8;
      pppuStack_90 = pppuVar9;
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&pppuStack_80,&pppuStack_90,puVar4,puVar4,puVar3,puVar3);
      _objc_release(lVar12);
    }
    pppuStack_90 = pppuStack_80;
    uStack_88 = (ushort)(byte)uStack_78;
    goto LAB_100025ff0;
  }
  uVar6 = 0x754f646567676f6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x754f646567676f6c,0xe900000000000074);
  puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  FUN_1000260d0(param_2 + *(int *)(lVar2 + 0x14),lVar12);
  lVar14 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar14 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  lVar2 = lVar12;
  (*pcVar17)(lVar12,1,lVar14);
  if ((int)lVar2 == 1) {
    lVar16 = lVar14;
    (**(code **)(lVar15 + 0x38))(lVar19,1,1);
    lVar2 = lVar12;
    (*pcVar17)(lVar12,1);
    bVar11 = (byte)lVar14;
    if ((int)lVar2 != 1) {
      FUN_100014e24(lVar12);
    }
    lVar14 = lVar16;
    if (puVar3 != (undefined *)0x0) goto LAB_10002591c;
LAB_100025a80:
    uVar6 = 0x800000010009d5c0;
    ppppuVar18 = (undefined8 ****)0xd00000000000002c;
    __s7SwiftUI18LocalizedStringKeyV13stringLiteralACSS_tcfC();
    *(undefined2 *)(lVar20 + -8) = 0x100;
    *(undefined8 *)(lVar20 + -0x10) = 0;
    bStack_70 = bVar11 & 1;
    __s7SwiftUI4TextV_9tableName6bundle7commentAcA18LocalizedStringKeyV_SSSgSo8NSBundleCSgs06StaticI0VSgtcfC
              ();
    ppppuVar13 = &pppuStack_80;
    pppuStack_80 = ppppuVar18;
    uStack_78 = uVar6;
    lStack_68 = lVar14;
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (ppppuVar13,PTR___s7SwiftUI4TextVN_1000b06e0,
               PTR___s7SwiftUI4TextVAA4ViewAAWP_1000b06d0);
  }
  else {
    (**(code **)(lVar15 + 0x20))(lVar19,lVar12,lVar14);
    bVar11 = 1;
    (**(code **)(lVar15 + 0x38))(lVar19,0);
    if (puVar3 == (undefined *)0x0) goto LAB_100025a80;
LAB_10002591c:
    _objc_retain(puVar3);
    _objc_retain();
    puVar4 = puVar3;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    lVar12 = lStack_b0;
    lVar2 = lStack_b8;
    (**(code **)(lStack_b8 + 0x68))
              (ppppuVar18,
               *(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
               lStack_b0);
    ppppuVar13 = ppppuVar18;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,ppppuVar18,puVar4);
    _swift_release(puVar4);
    (**(code **)(lVar2 + 8))(ppppuVar18,lVar12);
    ppppuVar18 = ppppuVar13;
    __s7SwiftUI5ImageV21SnapchatWidgetsSharedE011toFullColorC4ViewAA03AnyJ0VyF();
    _swift_release(ppppuVar13);
    lVar12 = lStack_a0;
    pppuStack_80 = ppppuVar18;
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
              (lStack_a0,lVar19,PTR___s7SwiftUI7AnyViewVN_1000b08c8,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
    _swift_release(ppppuVar18);
    puVar4 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    puVar5 = puVar4;
    __s7SwiftUI4EdgeO3SetV3allAEvgZ();
    lVar2 = lStack_a8;
    ppppuVar13 = (undefined8 ****)pppuStack_c0;
    puVar1 = (undefined8 *)(lVar12 + *(int *)(lStack_a8 + 0x24));
    *puVar1 = puVar4;
    *(char *)(puVar1 + 1) = (char)puVar5;
    lVar14 = lVar12;
    func_0x000100026120(lVar12,pppuStack_c0);
    func_0x000100026170();
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppppuVar13,lVar2,lVar14);
    _objc_release(puVar3);
    _objc_release(puVar3);
    func_0x00010002622c(lVar12);
  }
  FUN_100014e24(lVar19);
  uStack_88 = 0x100;
  pppuStack_90 = ppppuVar13;
LAB_100025ff0:
  uVar6 = 0x1000c4c68;
  func_0x0001000100d0(0x1000c4c68,&UNK_100089b48);
  uVar10 = uVar6;
  FUN_10002256c();
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&pppuStack_80,&pppuStack_90,uVar6,PTR___s7SwiftUI7AnyViewVN_1000b08c8,uVar10,
             PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8);
  *puStack_98 = pppuStack_80;
  *(byte *)(puStack_98 + 1) = (byte)uStack_78;
  *(undefined1 *)((long)puStack_98 + 9) = uStack_78._1_1_;
  return;
}



/* Entry: 10002606c; end: 100026077;  */

void FUN_10002606c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100026078; end: 1000260cf;  */

void FUN_100026078(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_1000255d0(&uStack_40);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uStack_40;
  *(undefined2 *)(param_1 + 3) = uStack_38;
  return;
}



/* Entry: 1000260d0; end: 1000263a3;  */

undefined8 FUN_1000260d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000263a4; end: 1000263a7;  */

void FUN_1000263a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4f28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4f30;
  func_0x000100010120(0x1000c4f30,&UNK_100089ee8);
  uVar2 = 0x1000c4f38;
  func_0x000100026440(0x1000c4f38,0x1000c4f40,&UNK_100089ef0,
                      PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
  uVar3 = uVar2;
  FUN_10001cc54();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c4f28 = puVar4;
  return;
}



/* Entry: 1000263a8; end: 100026483;  */

void FUN_1000263a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c4f28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4f30;
  func_0x000100010120(0x1000c4f30,&UNK_100089ee8);
  uVar2 = 0x1000c4f38;
  func_0x000100026440(0x1000c4f38,0x1000c4f40,&UNK_100089ef0,
                      PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0);
  uVar3 = uVar2;
  FUN_10001cc54();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c4f28 = puVar4;
  return;
}



/* Entry: 100026484; end: 1000265bb;  */

void FUN_100026484(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  long lStack_58;
  
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  lVar1 = 0x1000c4f50;
  func_0x0001000100d0(0x1000c4f50,&UNK_100089f58);
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar6 = lVar3 + 0xfU & 0xfffffffffffffff0;
  lVar4 = (long)&uStack_b0 - uVar6;
  FUN_1000268e4();
  __s7SwiftUI21_ControlWidgetAdaptorVyACyxGxcfC(lVar4);
  uStack_b0 = 0xd000000000000015;
  uStack_a8 = 0x800000010009d5a0;
  puStack_90 = &uStack_b0;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar3 = lVar4 - uVar6;
  (**(code **)(lVar5 + 0x10))(lVar3,lVar4,lVar1);
  lStack_58 = lVar3;
  FUN_1000266bc(param_1,auStack_a0);
  pcVar2 = *(code **)(lVar5 + 8);
  (*pcVar2)(lVar4,lVar1);
  (*pcVar2)(lVar3,lVar1);
  _swift_bridgeObjectRelease(uStack_a8);
  return;
}



/* Entry: 1000265bc; end: 1000266bb;  */

void FUN_1000265bc(undefined8 param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  uStack_78 = 0xd000000000000015;
  uStack_70 = 0x800000010009d5a0;
  puStack_58 = &uStack_78;
  FUN_100026788(param_1,auStack_68);
  _swift_bridgeObjectRelease(uStack_70);
  return;
}



/* Entry: 1000266bc; end: 100026787;  */

void FUN_1000266bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar3 = 0x1000c4f60;
  func_0x0001000100d0(0x1000c4f60,&UNK_100089f60);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  uVar1 = (*(undefined8 **)(param_2 + 0x10))[1];
  *puVar6 = **(undefined8 **)(param_2 + 0x10);
  *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8) = uVar1;
  iVar2 = *(int *)(lVar4 + 0xb0);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  lVar4 = 0x1000c4f50;
  func_0x0001000100d0(0x1000c4f50,&UNK_100089f58);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))((long)puVar6 + (long)iVar2,uVar5,lVar4);
  _swift_bridgeObjectRetain(uVar1);
  __s7SwiftUI11TupleWidgetVyACyxGxcfC(param_1,puVar6,lVar3);
  return;
}



/* Entry: 100026788; end: 1000267df;  */

void FUN_100026788(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = **(undefined8 **)(param_2 + 0x10);
  uStack_28 = (*(undefined8 **)(param_2 + 0x10))[1];
  _swift_bridgeObjectRetain();
  uVar1 = 0x1000c4f68;
  func_0x0001000100d0(0x1000c4f68,&UNK_100089f68);
  __s7SwiftUI11TupleWidgetVyACyxGxcfC(param_1,&uStack_30,uVar1);
  return;
}



/* Entry: 1000267e0; end: 1000267e3;  */

void FUN_1000267e0(void)

{
  return;
}



/* Entry: 1000267e4; end: 100026883;  */

void FUN_1000267e4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  iVar1 = 2;
  FUN_1000806c0(2,0x12,0,0);
  if (iVar1 != 0) {
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    lVar2 = 0x1000c4f50;
    func_0x0001000100d0(0x1000c4f50,&UNK_100089f58);
    lVar7 = *(long *)(lVar2 + -8);
    lVar5 = *(long *)(lVar7 + 0x40);
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    uVar8 = lVar5 + 0xfU & 0xfffffffffffffff0;
    lVar6 = (long)&uStack_b0 - uVar8;
    FUN_1000268e4();
    __s7SwiftUI21_ControlWidgetAdaptorVyACyxGxcfC(lVar6);
    uStack_b0 = 0xd000000000000015;
    uStack_a8 = 0x800000010009d5a0;
    puStack_90 = &uStack_b0;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    lVar5 = lVar6 - uVar8;
    (**(code **)(lVar7 + 0x10))(lVar5,lVar6,lVar2);
    puStack_58 = (undefined8 *)lVar5;
    FUN_1000266bc(param_1,auStack_a0);
    pcVar4 = *(code **)(lVar7 + 8);
    (*pcVar4)(lVar6,lVar2);
    (*pcVar4)(lVar5,lVar2);
    _swift_bridgeObjectRelease(uStack_a8);
    return;
  }
  iVar1 = 2;
  FUN_1000806c0(2,0x10,2,0);
  if (iVar1 != 0) {
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
    uStack_78 = 0xd000000000000015;
    uStack_70 = 0x800000010009d5a0;
    puStack_58 = &uStack_78;
    FUN_100026788(param_1,auStack_68);
    _swift_bridgeObjectRelease(uStack_70);
    return;
  }
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  __s21SnapchatWidgetsShared24GlobalWidgetDependenciesO010initializeF0yyFZ();
  _swift_bridgeObjectRetain(0x800000010009d5a0);
  uVar3 = 0x1000c4f70;
  func_0x0001000100d0(0x1000c4f70,&UNK_100089f70);
  __s7SwiftUI11TupleWidgetVyACyxGxcfC(param_1,&stack0xffffffffffffffd0,uVar3);
  _swift_bridgeObjectRelease(0x800000010009d5a0);
  return;
}



/* Entry: 100026884; end: 1000268c3;  */

void FUN_100026884(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100089f18;
  _swift_getWitnessTable(&UNK_100089f18,&UNK_1000b2bc8);
  puRam00000001000c4f48 = puVar1;
  return;
}



/* Entry: 1000268c4; end: 1000268e3;  */

undefined1  [16] FUN_1000268c4(void)

{
  return ZEXT816(0x1000b2bc8);
}



/* Entry: 1000268e4; end: 100026a37;  */

void FUN_1000268e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c4f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100089f98;
  _swift_getWitnessTable(&UNK_100089f98,&UNK_1000b2ca8);
  puRam00000001000c4f58 = puVar1;
  return;
}



/* Entry: 100026a38; end: 100026a7b;  */

void FUN_100026a38(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    puVar1 = PTR___s7SwiftUI11TupleWidgetVyxGAA0D0AAMc_1000b02b8;
    _swift_getWitnessTable(PTR___s7SwiftUI11TupleWidgetVyxGAA0D0AAMc_1000b02b8,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100026a7c; end: 100026aeb;  */

void FUN_100026a7c(undefined8 param_1)

{
  func_0x0001000100d0(0x1000c4fc8,&UNK_10008a000);
  FUN_100026cfc();
  func_0x000100026d4c();
  __s9WidgetKit07ControlA6ButtonV6action5labelACyxAA0caD18DefaultActionLabelVq0_Gq0__xyctcAGRs_10AppIntents0J6IntentR0_rlufC
            (param_1);
  return;
}



/* Entry: 100026aec; end: 100026afb;  */

void FUN_100026aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f884,1);
  return;
}



/* Entry: 100026afc; end: 100026bd3;  */

void FUN_100026afc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = 0x7461686370616e53;
  uVar3 = 0xe800000000000000;
  __s7SwiftUI18LocalizedStringKeyV13stringLiteralACSS_tcfC();
  uVar4 = (ulong)(param_4 & 1);
  __s7SwiftUI4TextV_9tableName6bundle7commentAcA18LocalizedStringKeyV_SSSgSo8NSBundleCSgs06StaticI0VSgtcfC
            ();
  uVar2 = 0x69662e74736f6867;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0x69662e74736f6867,0xea00000000006c6c,0);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(char *)(param_1 + 2) = (char)uVar4;
  param_1[3] = param_5;
  param_1[4] = uVar2;
  FUN_100026d8c(uVar1,uVar3,uVar4);
  _swift_bridgeObjectRetain(param_5);
  func_0x000100022a4c(uVar1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(param_5);
  return;
}



/* Entry: 100026bd4; end: 100026bd7;  */

void FUN_100026bd4(void)

{
  return;
}



/* Entry: 100026bd8; end: 100026c73;  */

void FUN_100026bd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __s23HomeScreenWidgetDefines0C11IdentifiersO17cameraControlKindSSvau();
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  uVar3 = 0x1000c4fa8;
  func_0x0001000100d0(0x1000c4fa8,&UNK_100089f90);
  uVar4 = 0x1000c4fb0;
  FUN_100026cb8(0x1000c4fb0,0x1000c4fa8,&UNK_100089f90,
                PTR___s9WidgetKit07ControlA6ButtonVyxq_q0_G7SwiftUI0cA8TemplateAAMc_1000b0a10);
  __s9WidgetKit26StaticControlConfigurationV4kind7contentACyxGSS_xyctcfC
            (param_1,uVar1,uVar2,FUN_100026a7c,0,uVar3,uVar4);
  return;
}



/* Entry: 100026c74; end: 100026c83;  */

undefined1  [16] FUN_100026c74(void)

{
  return ZEXT816(0x1000b2ca8);
}



/* Entry: 100026c84; end: 100026cb7;  */

void FUN_100026c84(void)

{
  FUN_100026cb8(0x1000c4fb8,0x1000c4fc0,&UNK_100089ff8,
                PTR___s9WidgetKit26StaticControlConfigurationVyxG7SwiftUI0daE0AAMc_1000b0b60);
  return;
}



/* Entry: 100026cb8; end: 100026cfb;  */

void FUN_100026cb8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100026cfc; end: 100026d8b;  */

void FUN_100026cfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c4fd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4fc8;
  func_0x000100010120(0x1000c4fc8,&UNK_10008a000);
  puVar2 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940;
  _swift_getWitnessTable(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940,uVar1);
  puRam00000001000c4fd0 = puVar2;
  return;
}



/* Entry: 100026d8c; end: 100026db3;  */

void FUN_100026d8c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_1000b16a8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_2);
  return;
}



/* Entry: 100026db4; end: 100026def;  */

void FUN_100026db4(void)

{
  _objc_opt_self(&PTR_PTR_1000c5020);
  return;
}



/* Entry: 100026df0; end: 100026ef7;  */

undefined * FUN_100026df0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100026ef8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x1000c5078;
    func_0x0001000100d0(0x1000c5078,&UNK_10008a060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1000b2e40);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x10 <= puVar3 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 100026ef8; end: 100026fe3;  */

undefined1  [16] FUN_100026ef8(undefined *param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  if (param_3 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x000100086620();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      _SCUUID();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(param_2);
        puVar4 = puVar1;
      }
      puVar1 = puVar4;
      _SCAvatarColorForUser(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    puVar1 = param_1;
    _SCAvatarColorForUser();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar3 = 1;
  }
  uVar2 = 1;
  _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  auVar5._8_8_ = 1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 100026fe4; end: 100027523;  */

/* WARNING: Removing unreachable block (ram,0x000100027104) */

undefined *
FUN_100026fe4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined **param_5)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 uVar16;
  int *piVar17;
  undefined *puVar18;
  undefined *puStack_70;
  ulong uStack_68;
  
  ppuVar6 = &PTR____CFConstantStringClassReference_1000b7500;
  uVar9 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuVar7 = ppuVar6;
  FUN_100035abc();
  puVar11 = *ppuVar7;
  puVar18 = ppuVar7[1];
  _swift_bridgeObjectRetain(puVar18);
  __s21SnapchatWidgetsShared12AppGroupDataO04fileF06userId13directoryName8filenameSo6NSDataCSgSS_S2StFZ
            (param_4,param_5,ppuVar6,uVar9,puVar11,puVar18);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease();
  if (param_4 != (undefined *)0x0) {
    uStack_68 = 0xf000000000000000;
    puStack_70 = (undefined *)0x0;
    param_5 = &puStack_70;
    __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
              (param_4,param_5);
    _objc_release();
    uVar5 = uStack_68;
    puVar11 = puStack_70;
    puVar18 = param_4;
    if (uStack_68 >> 0x3c < 0xf) {
      uVar8 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      uVar9 = 0x1000c5080;
      func_0x0001000100d0(0x1000c5080,&UNK_10008a068);
      uVar10 = uVar9;
      FUN_100027524();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (&puStack_70,uVar9,puVar11,uVar5,uVar9,uVar10);
      _swift_release(uVar8);
      puVar3 = puStack_70;
      puVar18 = *(undefined **)(puStack_70 + 0x10);
      if (puVar18 == (undefined *)0x0) {
        FUN_1000275d4(puVar11,uVar5);
        _swift_bridgeObjectRelease(puVar3);
        return PTR___swiftEmptyArrayStorage_1000b14d0;
      }
      puStack_70 = PTR___swiftEmptyArrayStorage_1000b14d0;
      puVar12 = puVar18;
      func_0x000100026dd4(0,puVar18,0);
      piVar17 = (int *)(puVar3 + 0x30);
      do {
        puVar4 = puStack_70;
        uVar9 = *(undefined8 *)(piVar17 + -4);
        puVar15 = *(undefined **)(piVar17 + -2);
        if (((ulong)puVar15 >> 0x3d & 1) == 0) {
          iVar2 = *piVar17;
          puVar14 = PTR__OBJC_CLASS___UIImage_1000c20c0;
          _objc_allocWithZone();
          func_0x00010001c120(uVar9,puVar15);
          uVar10 = uVar9;
          puVar12 = puVar15;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar9,puVar15);
          func_0x000100086ca0();
          _objc_release(uVar10);
          if (puVar14 == (undefined *)0x0) {
            if (((uint)param_3 & 0xff) == 1) {
              puVar14 = PTR__OBJC_CLASS___UIColor_1000c20f8;
              _objc_opt_self();
              func_0x000100086620();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar14;
              if (puVar14 == (undefined *)0x0) {
                _SCUUID();
                _objc_retainAutoreleasedReturnValue();
                if (puVar14 == (undefined *)0x0) {
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
                  _swift_bridgeObjectRelease(puVar12);
                }
                puVar13 = puVar14;
                _SCAvatarColorForUser(puVar14);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar14);
              }
              puVar14 = (undefined *)0x1;
              _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar13,0);
            }
            else {
              puVar12 = param_1;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
              puVar13 = puVar12;
              _SCAvatarColorForUser();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              puVar14 = (undefined *)0x1;
              _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar13,1);
            }
            _objc_retainAutoreleasedReturnValue();
            func_0x0001000275e8(uVar9,puVar15,(long)iVar2);
            goto LAB_10002749c;
          }
          func_0x0001000275e8(uVar9,puVar15,(long)iVar2);
          uVar16 = 0;
          puVar12 = puVar15;
        }
        else {
          if (((uint)param_3 & 0xff) == 1) {
            puVar13 = PTR__OBJC_CLASS___UIColor_1000c20f8;
            _objc_opt_self();
            func_0x000100086620();
            _objc_retainAutoreleasedReturnValue();
            if (puVar13 == (undefined *)0x0) {
              _SCUUID();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar13;
              if (puVar13 == (undefined *)0x0) {
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
                _swift_bridgeObjectRelease(puVar12);
                puVar15 = puVar13;
              }
              puVar13 = puVar15;
              _SCAvatarColorForUser();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
            }
            puVar14 = (undefined *)0x1;
            puVar15 = puVar13;
            _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar13,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar12 = param_1;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
            puVar13 = puVar12;
            _SCAvatarColorForUser();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar14 = (undefined *)0x1;
            puVar15 = puVar13;
            _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar13,1);
            _objc_retainAutoreleasedReturnValue();
          }
LAB_10002749c:
          uVar16 = 1;
          _objc_release(puVar13);
          puVar12 = puVar15;
        }
        uVar1 = *(ulong *)(puVar4 + 0x10);
        puVar15 = (undefined *)(uVar1 + 1);
        puStack_70 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
          puVar12 = puVar15;
          func_0x000100026dd4(1 < *(ulong *)(puVar4 + 0x18),puVar15,1);
        }
        puVar4 = puStack_70;
        piVar17 = piVar17 + 6;
        *(undefined **)(puStack_70 + 0x10) = puVar15;
        *(undefined **)(puStack_70 + uVar1 * 0x10 + 0x20) = puVar14;
        puStack_70[uVar1 * 0x10 + 0x28] = uVar16;
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined *)0x0) {
          FUN_1000275d4(puVar11,uVar5);
          _swift_bridgeObjectRelease(puVar3);
          return puVar4;
        }
      } while( true );
    }
  }
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  if (puVar18 == (undefined *)0x0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_5);
  }
  puVar11 = puVar18;
  _SCAvatarColorForUser(puVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar18 = puVar11;
  func_0x000100086600(puVar11);
  _objc_release(puVar11);
  puVar11 = (undefined *)0x1000c5078;
  func_0x0001000100d0(0x1000c5078,&UNK_10008a060);
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  FUN_100026ef8(param_1,param_2,param_3,puVar18);
  *(undefined **)(puVar11 + 0x20) = param_1;
  puVar11[0x28] = (char)param_2;
  return puVar11;
}



/* Entry: 100027524; end: 100027593;  */

void FUN_100027524(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam00000001000c5088 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5080;
  func_0x000100010120(0x1000c5080,&UNK_10008a068);
  uVar2 = uVar1;
  FUN_100027594();
  puVar3 = PTR___sSayxGSesSeRzlMc_1000b11d8;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_1000b11d8,uVar1,&uStack_28);
  puRam00000001000c5088 = puVar3;
  return;
}



/* Entry: 100027594; end: 1000275d3;  */

void FUN_100027594(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008b338;
  _swift_getWitnessTable(&UNK_10008b338,&UNK_1000b3ef8);
  puRam00000001000c5090 = puVar1;
  return;
}



/* Entry: 1000275d4; end: 10002761b;  */

void FUN_1000275d4(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10002761c; end: 10002765f;  */

void FUN_10002761c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100027660; end: 100027a97;  */

undefined8 * FUN_100027660(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001000276a4(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100027a98; end: 100027fdf;  */

void FUN_100027a98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  char cStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar4 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  uVar5 = 0x1000c50d0;
  func_0x0001000100d0(0x1000c50d0,&UNK_10008a158);
  __s9WidgetKit19ActivityViewContextV10attributesxvg(&uStack_70);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_a8,uVar5);
  uVar2 = uStack_90;
  uVar1 = CONCAT71(uStack_97,cStack_98);
  cVar3 = (char)uStack_88;
  uVar10 = uStack_88 & 0xff;
  func_0x000100027838(uVar1,uStack_90,uVar10);
  uVar6 = uVar1;
  FUN_100026fe4(uVar1,uStack_90,uVar10,uStack_70,puStack_68);
  _swift_bridgeObjectRelease(uStack_a0);
  _swift_bridgeObjectRelease();
  uStack_a0 = uStack_90;
  cStack_98 = (char)uStack_88;
  uStack_90 = uStack_80;
  uStack_88 = uStack_78;
  func_0x000100035ac8();
  uVar5 = *puStack_68;
  uVar7 = puStack_68[1];
  _swift_bridgeObjectRetain(uVar7);
  if (cVar3 == '\x01') {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO014buildGroupChatD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ();
    uVar8 = 1;
  }
  else {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              (puVar9,uVar1,uVar2,uVar5,uVar7,0,0,2);
    uVar8 = uVar10;
  }
  func_0x000100027878(uVar1,uVar2,uVar8);
  _swift_bridgeObjectRelease(uVar7);
  func_0x000100028020();
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(param_1,puVar9,&UNK_1000b3820,uVar7);
  FUN_100014e24(puVar9);
  func_0x000100027878(uVar1,uVar2,uVar10);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uStack_78);
  return;
}



/* Entry: 100027fe0; end: 10002805f;  */

void FUN_100027fe0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c50b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008aca0;
  _swift_getWitnessTable(&UNK_10008aca0,&UNK_1000b3a20);
  puRam00000001000c50b0 = puVar1;
  return;
}



/* Entry: 100028060; end: 10002806f;  */

void FUN_100028060(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008f994,1);
  return;
}



/* Entry: 100028070; end: 10002838f;  */

void FUN_100028070(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar1 = 0x1000c50f8;
  uStack_a8 = param_1;
  func_0x0001000100d0(0x1000c50f8,&UNK_10008a168);
  lStack_a0 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionVMa();
  lVar1 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar10 = lVar1 + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar9 - uVar10;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV7leadingACvgZ(lVar12);
  uVar2 = 0x1000c5100;
  puStack_80 = (undefined1 *)param_2;
  func_0x0001000100d0(0x1000c5100,&UNK_10008a170);
  uVar3 = 0x1000c5108;
  func_0x000100010120(0x1000c5108,&UNK_10008a178);
  uVar4 = 0x1000c5110;
  func_0x000100029104(0x1000c5110,0x1000c5108,&UNK_10008a178,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  puVar5 = &uStack_70;
  uStack_70 = uVar3;
  puStack_68 = (undefined8 *)uVar4;
  _swift_getOpaqueTypeConformance
            (puVar5,
             PTR___s7SwiftUI4ViewP9WidgetKitE13dynamicIsland17verticalPlacementQrAD07Dynamicg22ExpandedRegionVerticalI0V_tFQOMQ_1000b09c0
             ,1);
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (puVar9,0x3ff0000000000000,lVar12,FUN_100028ef8,auStack_90,uVar2,puVar5);
  lVar1 = 0x1000c5118;
  func_0x0001000100d0(0x1000c5118,&UNK_10008a180);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar13 = lVar12 - uVar10;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV8trailingACvgZ(lVar13);
  uVar3 = 0x1000c5120;
  puStack_80 = (undefined1 *)param_2;
  func_0x0001000100d0(0x1000c5120,&UNK_10008a188);
  uVar4 = uVar3;
  FUN_100028f08();
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar12,0,lVar13,0x100028f00,auStack_90,uVar3,uVar4);
  lVar6 = 0x1000c5140;
  func_0x0001000100d0(0x1000c5140,&UNK_10008a198);
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_01;
  uVar3 = 0x1000c5148;
  puStack_80 = puVar9;
  func_0x0001000100d0(0x1000c5148,&UNK_10008a1a0);
  puVar7 = &uStack_70;
  uStack_70 = uVar2;
  puStack_68 = puVar5;
  _swift_getOpaqueTypeConformance
            (puVar7,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (lVar13,0x100028fa0,auStack_90,uVar3,puVar7);
  uVar2 = 0x1000c50d8;
  puStack_80 = (undefined1 *)lVar13;
  lStack_78 = lVar12;
  func_0x0001000100d0(0x1000c50d8,&UNK_10008a160);
  uVar3 = 0x1000c50e0;
  func_0x000100029104(0x1000c50e0,0x1000c50d8,&UNK_10008a160,
                      PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (uStack_a8,FUN_100028fdc,auStack_90,uVar2,uVar3);
  (**(code **)(lVar11 + 8))(lVar13,lVar6);
  (**(code **)(lVar8 + 8))(lVar12,lVar1);
  (**(code **)(lStack_a0 + 8))(puVar9,lStack_98);
  return;
}



/* Entry: 100028390; end: 1000284cf;  */

void FUN_100028390(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x1000c5108;
  func_0x0001000100d0(0x1000c5108,&UNK_10008a178);
  lVar5 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  plVar4 = (long *)(&stack0xffffffffffffffb0 + lVar2);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar4 = lVar5;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2) = 0;
  (&stack0xffffffffffffffc0)[lVar2] = 1;
  lVar2 = 0x1000c5170;
  func_0x0001000100d0(0x1000c5170,&UNK_10008a1c8);
  FUN_1000284d0((undefined1 *)((long)plVar4 + (long)*(int *)(lVar2 + 0x2c)),param_2);
  lVar2 = 0;
  __s9WidgetKit44DynamicIslandExpandedRegionVerticalPlacementVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)plVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s9WidgetKit44DynamicIslandExpandedRegionVerticalPlacementV14belowIfTooWideACvgZ(lVar5);
  uVar3 = 0x1000c5110;
  func_0x000100029104(0x1000c5110,0x1000c5108,&UNK_10008a178,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  __s7SwiftUI4ViewP9WidgetKitE13dynamicIsland17verticalPlacementQrAD07Dynamicg22ExpandedRegionVerticalI0V_tF
            (param_1,lVar5,lVar1,uVar3);
  (**(code **)(lVar6 + 8))(lVar5,lVar2);
  func_0x000100029064(plVar4);
  return;
}



/* Entry: 1000284d0; end: 10002873b;  */

void FUN_1000284d0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x12;
  code *pcVar15;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar4 = 0x1000c5178;
  puStack_a8 = param_1;
  func_0x0001000100d0(0x1000c5178,&UNK_10008a1d0);
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar14 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - extraout_x12;
  uStack_b8 = *(undefined8 *)(param_2 + 0x28);
  puStack_98 = *(undefined **)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  ppuStack_90 = (undefined **)uVar8;
  FUN_100010174();
  _swift_bridgeObjectRetain(uVar8);
  ppuVar5 = &puStack_98;
  puVar10 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  puVar6 = PTR__OBJC_CLASS___UIFont_1000c20f0;
  _objc_opt_self();
  func_0x0001000867e0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    puVar7 = puVar6;
    ppuVar11 = ppuVar5;
    puVar12 = puVar10;
    lVar13 = lVar4;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(puVar6);
    func_0x000100022a4c(ppuVar5,puVar10,lVar4);
    _swift_bridgeObjectRelease(param_5);
    puVar6 = &UNK_10008a1d8;
    _swift_getKeyPath();
    uStack_88 = SUB81(puVar12,0);
    uStack_70 = 2;
    uStack_68 = 0;
    uVar8 = 0x1000c4d18;
    puStack_98 = puVar7;
    ppuStack_90 = ppuVar11;
    lStack_80 = lVar13;
    puStack_78 = puVar6;
    func_0x0001000100d0(0x1000c4d18,&UNK_100089cb0);
    uVar9 = uVar8;
    func_0x000100022dc0();
    __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lVar14,1,uVar8,uVar9);
    func_0x000100022a4c(puVar7,ppuVar11,puVar12);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(lVar13);
    lVar3 = lStack_a0;
    lVar1 = lStack_b0;
    lVar13 = lStack_c0;
    pcVar15 = *(code **)(lStack_b0 + 0x10);
    (*pcVar15)(lStack_a0,lVar14,lStack_c0);
    puVar2 = puStack_a8;
    uVar8 = uStack_b8;
    *puStack_a8 = uStack_b8;
    puStack_a8[1] = 0x4049000000000000;
    lVar4 = 0x1000c5180;
    func_0x0001000100d0(0x1000c5180,&UNK_10008a218);
    (*pcVar15)((long)puVar2 + (long)*(int *)(lVar4 + 0x30),lVar3,lVar13);
    pcVar15 = *(code **)(lVar1 + 8);
    _swift_bridgeObjectRetain_n(uVar8,2);
    (*pcVar15)(lVar14,lVar13);
    (*pcVar15)(lVar3,lVar13);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10002873c);
  (*pcVar15)();
}



/* Entry: 10002873c; end: 10002881b;  */

void FUN_10002873c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = 0x4028000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x1000c5160;
  func_0x0001000100d0();
  FUN_10002881c((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_90,0,1,0,1,0,1,0,1,0,1);
  lVar1 = 0x1000c5120;
  func_0x0001000100d0(0x1000c5120,&UNK_10008a188);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 10002881c; end: 100028ab3;  */

void FUN_10002881c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long alStack_70 [2];
  
  puVar8 = (undefined8 *)0x0;
  alStack_70[1] = param_1;
  FUN_100031260();
  puVar9 = puVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(puVar8[-1] + 0x40));
  lVar11 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar13 = (undefined8 *)((long)puVar12 - extraout_x12_01);
  uVar1 = *param_2;
  uVar3 = param_2[1];
  cVar4 = *(char *)(param_2 + 2);
  iVar5 = *(int *)((long)puVar9 + 0x24);
  func_0x000100035ac8();
  uVar2 = *puVar9;
  puVar9 = (undefined8 *)puVar9[1];
  _swift_bridgeObjectRetain(puVar9);
  if (cVar4 == '\x01') {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO014buildGroupChatD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ();
    _swift_bridgeObjectRelease();
    *puVar13 = 0x77;
    puVar13[1] = 0x4038000000000000;
    puVar13[2] = 0x52;
    puVar13[3] = 0x4046800000000000;
    puVar13[4] = 99;
    iVar5 = *(int *)((long)puVar8 + 0x24);
    func_0x000100035ac8();
    uVar2 = *puVar9;
    uVar14 = puVar9[1];
    _swift_bridgeObjectRetain(uVar14);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO021buildGroupReplyCameraD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ((long)puVar12 + (long)iVar5,uVar1,uVar3,uVar2,uVar14,0,0,2);
  }
  else {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ((long)puVar13 + (long)iVar5,uVar1,uVar3,uVar2,puVar9,0,0,2);
    _swift_bridgeObjectRelease();
    *puVar13 = 0x77;
    puVar13[1] = 0x4038000000000000;
    puVar13[2] = 0x52;
    puVar13[3] = 0x4046800000000000;
    puVar13[4] = 99;
    iVar5 = *(int *)((long)puVar8 + 0x24);
    func_0x000100035ac8();
    uVar2 = *puVar9;
    uVar14 = puVar9[1];
    _swift_bridgeObjectRetain(uVar14);
    __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng11ReplyCameraD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ((long)puVar12 + (long)iVar5,uVar1,uVar3,uVar2,uVar14,0,0,2);
  }
  _swift_bridgeObjectRelease(uVar14);
  *puVar12 = 0x65;
  puVar12[1] = 0x4038000000000000;
  puVar12[2] = 0x51;
  puVar12[3] = 0x4046800000000000;
  puVar12[4] = 0x62;
  FUN_100028fe4(puVar13,lVar11);
  lVar6 = alStack_70[0];
  FUN_100028fe4(puVar12,alStack_70[0]);
  lVar7 = alStack_70[1];
  FUN_100028fe4(lVar11,alStack_70[1]);
  lVar10 = 0x1000c5168;
  func_0x0001000100d0(0x1000c5168,&UNK_10008a1c0);
  FUN_100028fe4(lVar6,lVar7 + *(int *)(lVar10 + 0x30));
  func_0x000100029028(puVar12);
  func_0x000100029028(puVar13);
  func_0x000100029028(lVar6);
  func_0x000100029028(lVar11);
  return;
}



/* Entry: 100028ab4; end: 100028b1f;  */

void FUN_100028ab4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_100031260();
  iVar1 = *(int *)(lVar2 + 0x24);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar2);
  *param_1 = 0x127;
  param_1[1] = 0x4030000000000000;
  param_1[2] = 0x52;
  param_1[3] = 0x4038000000000000;
  param_1[4] = 0x33;
  return;
}



/* Entry: 100028b20; end: 100028b23;  */

void FUN_100028b20(void)

{
  return;
}



/* Entry: 100028b24; end: 100028bcb;  */

void FUN_100028b24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x1000c50a8;
  func_0x0001000100d0(0x1000c50a8,&UNK_10008a0e0);
  uVar2 = uVar1;
  FUN_100027fe0();
  uVar3 = uVar2;
  func_0x000100028020();
  puStack_40 = &UNK_1000b3820;
  ppuVar4 = &puStack_40;
  uStack_38 = uVar3;
  _swift_getOpaqueTypeConformance
            (ppuVar4,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,
             1);
  __s9WidgetKit21ActivityConfigurationV3for7content13dynamicIslandACyxGxm_qd__AA0C11ViewContextVyxGcAA07DynamicH0VAJctc7SwiftUI0I0Rd__lufC
            (param_1,&UNK_1000b3a20,FUN_100027a98,0,0x100027c5c,0,&UNK_1000b3a20,uVar1,uVar2,ppuVar4
            );
  return;
}



/* Entry: 100028bcc; end: 100028bdf;  */

undefined1  [16] FUN_100028bcc(void)

{
  return ZEXT816(0x1000b2ee8);
}



/* Entry: 100028be0; end: 100028c2f;  */

void FUN_100028be0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c50c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c50c8;
  func_0x000100010120(0x1000c50c8,&UNK_10008a148);
  puVar2 = PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28;
  _swift_getWitnessTable
            (PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28,uVar1);
  puRam00000001000c50c0 = puVar2;
  return;
}



/* Entry: 100028c30; end: 100028e1f;  */

void FUN_100028c30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x1000c5150;
  lStack_68 = param_1;
  func_0x0001000100d0(0x1000c5150,&UNK_10008a1a8);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar5 - extraout_x12;
  lVar3 = 0x1000c5148;
  func_0x0001000100d0(0x1000c5148,&UNK_10008a1a0);
  lVar6 = *(long *)(lVar3 + -8);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar9 - extraout_x12_00;
  func_0x0001000100d0(0x1000c5140,&UNK_10008a198);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentxvg(lVar10);
  func_0x0001000100d0(0x1000c5118,&UNK_10008a180);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(lVar8);
  pcVar4 = *(code **)(lVar6 + 0x10);
  (*pcVar4)(lVar9,lVar10,lVar3);
  pcVar7 = *(code **)(lVar11 + 0x10);
  (*pcVar7)(lVar5,lVar8,lVar2);
  lVar1 = lStack_68;
  (*pcVar4)(lStack_68,lVar9,lVar3);
  lVar6 = 0x1000c5158;
  func_0x0001000100d0(0x1000c5158,&UNK_10008a1b0);
  (*pcVar7)(lVar1 + *(int *)(lVar6 + 0x30),lVar5,lVar2);
  pcVar4 = *(code **)(lVar11 + 8);
  (*pcVar4)(lVar8,lVar2);
  pcVar7 = *(code **)(lStack_70 + 8);
  (*pcVar7)(lVar10,lVar3);
  (*pcVar4)(lVar5,lVar2);
  (*pcVar7)(lVar9,lVar3);
  return;
}



/* Entry: 100028e20; end: 100028e3b;  */

void FUN_100028e20(void)

{
  long unaff_x20;
  
  func_0x000100027878(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100028e3c; end: 100028ef7;  */

void FUN_100028e3c(void)

{
  long unaff_x20;
  
  func_0x000100027878(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100028ef8; end: 100028f07;  */

void FUN_100028ef8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0x1000c5108;
  func_0x0001000100d0(0x1000c5108,&UNK_10008a178);
  lVar5 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  plVar4 = (long *)(&stack0xffffffffffffffb0 + lVar2);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar4 = lVar5;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2) = 0;
  (&stack0xffffffffffffffc0)[lVar2] = 1;
  lVar2 = 0x1000c5170;
  func_0x0001000100d0(0x1000c5170,&UNK_10008a1c8);
  FUN_1000284d0((undefined1 *)((long)plVar4 + (long)*(int *)(lVar2 + 0x2c)),uVar3);
  lVar2 = 0;
  __s9WidgetKit44DynamicIslandExpandedRegionVerticalPlacementVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)plVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s9WidgetKit44DynamicIslandExpandedRegionVerticalPlacementV14belowIfTooWideACvgZ(lVar5);
  uVar3 = 0x1000c5110;
  func_0x000100029104(0x1000c5110,0x1000c5108,&UNK_10008a178,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  __s7SwiftUI4ViewP9WidgetKitE13dynamicIsland17verticalPlacementQrAD07Dynamicg22ExpandedRegionVerticalI0V_tF
            (param_1,lVar5,lVar1,uVar3);
  (**(code **)(lVar6 + 8))(lVar5,lVar2);
  func_0x000100029064(plVar4);
  return;
}



/* Entry: 100028f08; end: 100028fdb;  */

void FUN_100028f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c5128 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5120;
  func_0x000100010120(0x1000c5120,&UNK_10008a188);
  uVar2 = 0x1000c5130;
  func_0x000100029104(0x1000c5130,0x1000c5138,&UNK_10008a190,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_1000b0460;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5128 = puVar3;
  return;
}



/* Entry: 100028fdc; end: 100028fe3;  */

void FUN_100028fdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x1000c5150;
  lStack_68 = param_1;
  func_0x0001000100d0(0x1000c5150,&UNK_10008a1a8);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar5 - extraout_x12;
  lVar3 = 0x1000c5148;
  func_0x0001000100d0(0x1000c5148,&UNK_10008a1a0);
  lVar6 = *(long *)(lVar3 + -8);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar9 - extraout_x12_00;
  func_0x0001000100d0(0x1000c5140,&UNK_10008a198);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentxvg(lVar10);
  func_0x0001000100d0(0x1000c5118,&UNK_10008a180);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(lVar8);
  pcVar4 = *(code **)(lVar6 + 0x10);
  (*pcVar4)(lVar9,lVar10,lVar3);
  pcVar7 = *(code **)(lVar11 + 0x10);
  (*pcVar7)(lVar5,lVar8,lVar2);
  lVar1 = lStack_68;
  (*pcVar4)(lStack_68,lVar9,lVar3);
  lVar6 = 0x1000c5158;
  func_0x0001000100d0(0x1000c5158,&UNK_10008a1b0);
  (*pcVar7)(lVar1 + *(int *)(lVar6 + 0x30),lVar5,lVar2);
  pcVar4 = *(code **)(lVar11 + 8);
  (*pcVar4)(lVar8,lVar2);
  pcVar7 = *(code **)(lStack_70 + 8);
  (*pcVar7)(lVar10,lVar3);
  (*pcVar4)(lVar5,lVar2);
  (*pcVar7)(lVar9,lVar3);
  return;
}



/* Entry: 100028fe4; end: 100029147;  */

undefined8 FUN_100028fe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100031260();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100029148; end: 100029153;  */

void FUN_100029148(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[1] = 0x4038000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)();
  return;
}



/* Entry: 100029154; end: 10002917f;  */

undefined8 * FUN_100029154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 100029180; end: 100029187;  */

void FUN_100029180(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*param_1);
  return;
}



/* Entry: 100029188; end: 1000291d3;  */

undefined8 * FUN_100029188(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1000291d4; end: 10002920f;  */

undefined8 * FUN_1000291d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 100029210; end: 100029237;  */

int FUN_100029210(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100029238; end: 100029a53;  */

void FUN_100029238(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined5 uVar7;
  undefined5 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined8 uStack_14e;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined5 uStack_d5;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined5 uStack_cd;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined5 uStack_95;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined5 uStack_8d;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  
  uVar7 = uStack_8d;
  uVar4 = uStack_8e;
  uVar3 = uStack_8f;
  uVar2 = uStack_90;
  lVar11 = *(long *)(param_3 + 0x10);
  uStack_90 = (undefined1)param_2;
  uVar1 = uStack_90;
  uStack_8f = (undefined1)((ulong)param_2 >> 8);
  uVar5 = uStack_8f;
  uStack_8e = (undefined1)((ulong)param_2 >> 0x10);
  uVar6 = uStack_8e;
  uStack_8d = (undefined5)((ulong)param_2 >> 0x18);
  uVar8 = uStack_8d;
  if (lVar11 < 2) {
    if (lVar11 == 0) {
      uStack_90 = uVar2;
      uStack_8f = uVar3;
      uStack_8e = uVar4;
      uStack_8d = uVar7;
      FUN_10002c9ec();
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_100,&uStack_c0,PTR___s7SwiftUI9EmptyViewVN_1000b0928,&UNK_1000b31a0,
                 PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,param_3);
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uStack_b0 = uStack_f0;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,(undefined1)uStack_e8);
      uStack_87 = 0;
      uVar15 = 0x1000c51a0;
      func_0x0001000100d0(0x1000c51a0,&UNK_10008a2e0);
      uVar17 = 0x1000c51b8;
      func_0x0001000100d0(0x1000c51b8,&UNK_10008a2e8);
      uVar10 = uVar17;
      func_0x00010002c974();
      uVar19 = 0x1000c51b0;
      FUN_10002ca2c(0x1000c51b0,0x1000c51b8,&UNK_10008a2e8,0x10002ca9c);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_140,&uStack_c0,uVar15,uVar17,uVar10,uVar19);
      uStack_f8 = uStack_138;
      uStack_100 = uStack_140;
      uStack_e8 = uStack_128;
      uStack_f0 = uStack_130;
      uStack_d8 = (undefined1)uStack_118;
      uStack_d7 = (undefined1)((ushort)uStack_118 >> 8);
      uStack_e0 = uStack_120;
      uStack_ce = (undefined1)uStack_10e;
      uStack_cd = (undefined5)((ulong)uStack_10e >> 8);
      uStack_c8 = (undefined1)((ulong)uStack_10e >> 0x30);
      uStack_c7 = (undefined1)((ulong)uStack_10e >> 0x38);
      uStack_d6 = (undefined1)uStack_116;
      uStack_d5 = (undefined5)((uint6)uStack_116 >> 8);
      uStack_d0 = (undefined1)uStack_110;
      uStack_cf = (undefined1)((ushort)uStack_110 >> 8);
      uStack_c6 = 0;
    }
    else {
      if (lVar11 == 1) {
        uVar12 = *(undefined8 *)(param_3 + 0x20);
        uVar13 = (ulong)*(byte *)(param_3 + 0x28);
        uStack_a8._0_1_ = 1;
        uStack_c0 = uVar12;
        uStack_b8 = uVar13;
        uStack_b0 = param_2;
        func_0x0001000276a4(uVar12,uVar13);
        uVar15 = uVar12;
        func_0x0001000276a4(uVar12,uVar13);
        FUN_10002c9ec();
        __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                  (&uStack_100,&uStack_c0,PTR___s7SwiftUI9EmptyViewVN_1000b0928,&UNK_1000b31a0,
                   PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,uVar15);
        uStack_b8 = uStack_f8;
        uStack_c0 = uStack_100;
        uStack_b0 = uStack_f0;
        uStack_a8 = CONCAT71(uStack_a8._1_7_,(undefined1)uStack_e8);
        uStack_87 = 0;
        uVar15 = 0x1000c51a0;
        func_0x0001000100d0(0x1000c51a0,&UNK_10008a2e0);
        uVar17 = 0x1000c51b8;
        func_0x0001000100d0(0x1000c51b8,&UNK_10008a2e8);
        uVar10 = uVar17;
        func_0x00010002c974();
        uVar19 = 0x1000c51b0;
        FUN_10002ca2c(0x1000c51b0,0x1000c51b8,&UNK_10008a2e8,0x10002ca9c);
        __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                  (&uStack_180,&uStack_c0,uVar15,uVar17,uVar10,uVar19);
        uStack_138 = uStack_178;
        uStack_140 = uStack_180;
        uStack_128 = uStack_168;
        uStack_130 = uStack_170;
        uStack_120 = uStack_160;
        uStack_10e = uStack_14e;
        uStack_b8 = uStack_178;
        uStack_c0 = uStack_180;
        uStack_a8 = uStack_168;
        uStack_b0 = uStack_170;
        uStack_98 = (undefined1)uStack_158;
        uStack_97 = (undefined1)((ushort)uStack_158 >> 8);
        uStack_a0 = uStack_160;
        uStack_8e = (undefined1)uStack_14e;
        uStack_8d = (undefined5)((ulong)uStack_14e >> 8);
        uStack_88 = (undefined1)((ulong)uStack_14e >> 0x30);
        uStack_87 = (undefined1)((ulong)uStack_14e >> 0x38);
        uStack_96 = (undefined1)uStack_156;
        uStack_95 = (undefined5)((uint6)uStack_156 >> 8);
        uStack_90 = (undefined1)uStack_150;
        uStack_8f = (undefined1)((ushort)uStack_150 >> 8);
        uStack_86 = 0;
        FUN_10002dd98(&uStack_140,&uStack_100,0x1000c51d0,&UNK_10008a2f0);
        uVar15 = 0x1000c5188;
        func_0x0001000100d0(0x1000c5188,&UNK_10008a2d8);
        uVar17 = uVar15;
        func_0x00010002c8dc();
        uVar19 = uVar17;
        func_0x00010002cadc();
        __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                  (&uStack_100,&uStack_c0,uVar15,&UNK_1000b3090,uVar17,uVar19);
        func_0x0001000276b8(uVar12,uVar13);
        goto LAB_1000299f0;
      }
LAB_100029640:
      lVar11 = param_3;
      uStack_90 = uVar2;
      uStack_8f = uVar3;
      uStack_8e = uVar4;
      uStack_8d = uVar7;
      _swift_bridgeObjectRetain();
      FUN_10002c808();
      _swift_bridgeObjectRelease(param_3);
      uVar13 = *(ulong *)(lVar11 + 0x10);
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100029a4c);
        (*pcVar9)();
      }
      if (uVar13 == 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100029a50);
        (*pcVar9)();
      }
      if (uVar13 < 3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100029a54);
        (*pcVar9)();
      }
      uVar15 = *(undefined8 *)(lVar11 + 0x20);
      uVar2 = *(undefined1 *)(lVar11 + 0x28);
      uVar17 = *(undefined8 *)(lVar11 + 0x30);
      uVar19 = *(undefined8 *)(lVar11 + 0x40);
      uVar3 = *(undefined1 *)(lVar11 + 0x38);
      uVar4 = *(undefined1 *)(lVar11 + 0x48);
      func_0x0001000276a4(uVar15,uVar2);
      func_0x0001000276a4(uVar17,uVar3);
      func_0x0001000276a4(uVar19,uVar4);
      _swift_release(lVar11);
      uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar2);
      uStack_e8 = CONCAT71(uStack_e8._1_7_,uVar3);
      uStack_c6 = 1;
      uStack_100 = uVar15;
      uStack_f0 = uVar17;
      uStack_e0 = uVar19;
      uStack_d8 = uVar4;
      uStack_d0 = uVar1;
      uStack_cf = uVar5;
      uStack_ce = uVar6;
      uStack_cd = uVar8;
    }
    uVar15 = 0x1000c5188;
    func_0x0001000100d0(0x1000c5188,&UNK_10008a2d8);
    uVar17 = uVar15;
    func_0x00010002c8dc();
    uVar19 = uVar17;
    func_0x00010002cadc();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_c0,&uStack_100,uVar15,&UNK_1000b3090,uVar17,uVar19);
  }
  else {
    if (lVar11 == 2) {
      uVar16 = *(undefined8 *)(param_3 + 0x20);
      uVar14 = *(undefined8 *)(param_3 + 0x30);
      uVar2 = *(undefined1 *)(param_3 + 0x28);
      uVar1 = *(undefined1 *)(param_3 + 0x38);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar2);
      uStack_a8 = CONCAT71(uStack_a8._1_7_,uVar1);
      uStack_88 = 0;
      uStack_c0 = uVar16;
      uStack_b0 = uVar14;
      uStack_a0 = param_2;
      func_0x0001000276a4(uVar16,uVar2);
      func_0x0001000276a4(uVar14,uVar1);
      func_0x0001000276a4(uVar16,uVar2);
      uVar15 = uVar14;
      func_0x0001000276a4(uVar14,uVar1);
      func_0x00010002ca9c();
      uVar10 = uVar15;
      func_0x00010002cadc();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_100,&uStack_c0,&UNK_1000b3118,&UNK_1000b3090,uVar15,uVar10);
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uStack_a8 = uStack_e8;
      uStack_b0 = uStack_f0;
      uStack_a0 = uStack_e0;
      uStack_87 = 1;
      uVar15 = 0x1000c51a0;
      func_0x0001000100d0(0x1000c51a0,&UNK_10008a2e0);
      uVar17 = 0x1000c51b8;
      func_0x0001000100d0(0x1000c51b8,&UNK_10008a2e8);
      uVar12 = uVar17;
      func_0x00010002c974();
      uVar19 = 0x1000c51b0;
      FUN_10002ca2c(0x1000c51b0,0x1000c51b8,&UNK_10008a2e8,0x10002ca9c);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_180,&uStack_c0,uVar15,uVar17,uVar12,uVar19);
      uStack_138 = uStack_178;
      uStack_140 = uStack_180;
      uStack_128 = uStack_168;
      uStack_130 = uStack_170;
      uStack_120 = uStack_160;
      uStack_10e = uStack_14e;
      uStack_b8 = uStack_178;
      uStack_c0 = uStack_180;
      uStack_a8 = uStack_168;
      uStack_b0 = uStack_170;
      uStack_98 = (undefined1)uStack_158;
      uStack_97 = (undefined1)((ushort)uStack_158 >> 8);
      uStack_a0 = uStack_160;
      uStack_8e = (undefined1)uStack_14e;
      uStack_8d = (undefined5)((ulong)uStack_14e >> 8);
      uStack_88 = (undefined1)((ulong)uStack_14e >> 0x30);
      uStack_87 = (undefined1)((ulong)uStack_14e >> 0x38);
      uStack_96 = (undefined1)uStack_156;
      uStack_95 = (undefined5)((uint6)uStack_156 >> 8);
      uStack_90 = (undefined1)uStack_150;
      uStack_8f = (undefined1)((ushort)uStack_150 >> 8);
      uStack_86 = 0;
      FUN_10002dd98(&uStack_140,&uStack_100,0x1000c51d0,&UNK_10008a2f0);
      uVar15 = 0x1000c5188;
      func_0x0001000100d0(0x1000c5188,&UNK_10008a2d8);
      uVar17 = uVar15;
      func_0x00010002c8dc();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_100,&uStack_c0,uVar15,&UNK_1000b3090,uVar17,uVar10);
      func_0x0001000276b8(uVar16,uVar2);
      func_0x0001000276b8(uVar14,uVar1);
    }
    else {
      if (lVar11 != 3) goto LAB_100029640;
      uVar18 = *(undefined8 *)(param_3 + 0x20);
      uVar16 = *(undefined8 *)(param_3 + 0x30);
      uVar14 = *(undefined8 *)(param_3 + 0x40);
      uVar2 = *(undefined1 *)(param_3 + 0x28);
      uVar1 = *(undefined1 *)(param_3 + 0x38);
      uVar3 = *(undefined1 *)(param_3 + 0x48);
      uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar2);
      uStack_a8 = CONCAT71(uStack_a8._1_7_,uVar1);
      uStack_88 = 1;
      uStack_c0 = uVar18;
      uStack_b0 = uVar16;
      uStack_a0 = uVar14;
      uStack_98 = uVar3;
      func_0x0001000276a4(uVar18,uVar2);
      func_0x0001000276a4(uVar16,uVar1);
      func_0x0001000276a4(uVar14,uVar3);
      func_0x0001000276a4(uVar18,uVar2);
      func_0x0001000276a4(uVar16,uVar1);
      uVar15 = uVar14;
      func_0x0001000276a4(uVar14,uVar3);
      func_0x00010002ca9c();
      uVar10 = uVar15;
      func_0x00010002cadc();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_100,&uStack_c0,&UNK_1000b3118,&UNK_1000b3090,uVar15,uVar10);
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uStack_a8 = uStack_e8;
      uStack_b0 = uStack_f0;
      uStack_a0 = uStack_e0;
      uStack_87 = 1;
      uVar15 = 0x1000c51a0;
      func_0x0001000100d0(0x1000c51a0,&UNK_10008a2e0);
      uVar17 = 0x1000c51b8;
      func_0x0001000100d0(0x1000c51b8,&UNK_10008a2e8);
      uVar12 = uVar17;
      func_0x00010002c974();
      uVar19 = 0x1000c51b0;
      FUN_10002ca2c(0x1000c51b0,0x1000c51b8,&UNK_10008a2e8,0x10002ca9c);
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_180,&uStack_c0,uVar15,uVar17,uVar12,uVar19);
      uStack_138 = uStack_178;
      uStack_140 = uStack_180;
      uStack_128 = uStack_168;
      uStack_130 = uStack_170;
      uStack_120 = uStack_160;
      uStack_10e = uStack_14e;
      uStack_b8 = uStack_178;
      uStack_c0 = uStack_180;
      uStack_a8 = uStack_168;
      uStack_b0 = uStack_170;
      uStack_98 = (undefined1)uStack_158;
      uStack_97 = (undefined1)((ushort)uStack_158 >> 8);
      uStack_a0 = uStack_160;
      uStack_8e = (undefined1)uStack_14e;
      uStack_8d = (undefined5)((ulong)uStack_14e >> 8);
      uStack_88 = (undefined1)((ulong)uStack_14e >> 0x30);
      uStack_87 = (undefined1)((ulong)uStack_14e >> 0x38);
      uStack_96 = (undefined1)uStack_156;
      uStack_95 = (undefined5)((uint6)uStack_156 >> 8);
      uStack_90 = (undefined1)uStack_150;
      uStack_8f = (undefined1)((ushort)uStack_150 >> 8);
      uStack_86 = 0;
      FUN_10002dd98(&uStack_140,&uStack_100,0x1000c51d0,&UNK_10008a2f0);
      uVar15 = 0x1000c5188;
      func_0x0001000100d0(0x1000c5188,&UNK_10008a2d8);
      uVar17 = uVar15;
      func_0x00010002c8dc();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (&uStack_100,&uStack_c0,uVar15,&UNK_1000b3090,uVar17,uVar10);
      func_0x0001000276b8(uVar18,uVar2);
      func_0x0001000276b8(uVar16,uVar1);
      func_0x0001000276b8(uVar14,uVar3);
    }
LAB_1000299f0:
    func_0x00010002dde0(&uStack_140,0x1000c5188,&UNK_10008a2d8);
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_a8 = uStack_e8;
    uStack_b0 = uStack_f0;
    uStack_98 = uStack_d8;
    uStack_97 = uStack_d7;
    uStack_96 = uStack_d6;
    uStack_a0 = uStack_e0;
    uStack_8d = uStack_cd;
    uStack_88 = uStack_c8;
    uStack_87 = uStack_c7;
    uStack_86 = uStack_c6;
    uStack_95 = uStack_d5;
    uStack_90 = uStack_d0;
    uStack_8f = uStack_cf;
    uStack_8e = uStack_ce;
  }
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = CONCAT53(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,uStack_98)));
  param_1[4] = uStack_a0;
  *(ulong *)((long)param_1 + 0x33) =
       CONCAT17(uStack_86,CONCAT16(uStack_87,CONCAT15(uStack_88,uStack_8d)));
  *(ulong *)((long)param_1 + 0x2b) =
       CONCAT17(uStack_8e,CONCAT16(uStack_8f,CONCAT15(uStack_90,uStack_95)));
  return;
}



/* Entry: 100029a54; end: 100029a6b;  */

void FUN_100029a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100029a6c; end: 100029d8b;  */

void FUN_100029a6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_400 [8];
  undefined1 auStack_3f8 [88];
  undefined1 *puStack_3a0;
  undefined8 uStack_398;
  undefined2 uStack_390;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined2 uStack_380;
  undefined6 uStack_37e;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined2 uStack_370;
  undefined6 uStack_36e;
  undefined2 uStack_368;
  undefined6 uStack_366;
  undefined2 uStack_360;
  undefined6 uStack_35e;
  undefined1 *puStack_358;
  undefined8 uStack_350;
  undefined2 uStack_348;
  undefined8 uStack_346;
  undefined8 uStack_33e;
  undefined8 uStack_336;
  undefined8 uStack_32e;
  undefined8 uStack_326;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined1 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 uStack_2c0;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined1 uStack_260;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined2 uStack_1ff;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 uStack_1a0;
  undefined2 uStack_19f;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b0 [64];
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = auStack_400 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000276a4(param_3,param_4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC(param_3);
  (**(code **)(lVar6 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar6 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_b0,param_2,0,param_2,0,puVar3,lVar1);
  uStack_188 = (undefined2)auStack_b0._8_8_;
  uStack_186 = SUB86(auStack_b0._8_8_,2);
  uStack_190 = (undefined2)auStack_b0._0_8_;
  uStack_18e = SUB86(auStack_b0._0_8_,2);
  uStack_178 = (undefined2)auStack_b0._24_8_;
  uStack_176 = SUB86(auStack_b0._24_8_,2);
  uStack_180 = (undefined2)auStack_b0._16_8_;
  uStack_17e = SUB86(auStack_b0._16_8_,2);
  uStack_168 = (undefined2)auStack_b0._40_8_;
  uStack_166 = SUB86(auStack_b0._40_8_,2);
  uStack_170 = (undefined2)auStack_b0._32_8_;
  uStack_16e = SUB86(auStack_b0._32_8_,2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar5 = puVar4;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_398 = 0;
  uStack_390 = 1;
  uStack_386 = uStack_18e;
  uStack_380 = uStack_188;
  uStack_388 = uStack_190;
  uStack_376 = uStack_17e;
  uStack_370 = uStack_178;
  uStack_37e = uStack_186;
  uStack_378 = uStack_180;
  uStack_366 = uStack_16e;
  uStack_36e = uStack_176;
  uStack_368 = uStack_170;
  uStack_120 = CONCAT62(uStack_166,uStack_168);
  uStack_360 = uStack_168;
  uStack_35e = uStack_166;
  uStack_148 = CONCAT62(uStack_18e,uStack_190);
  uStack_150 = CONCAT62(uStack_196,1);
  uStack_138 = CONCAT62(uStack_17e,uStack_180);
  uStack_140 = CONCAT62(uStack_186,uStack_188);
  uStack_128 = CONCAT62(uStack_16e,uStack_170);
  uStack_130 = CONCAT62(uStack_176,uStack_178);
  uStack_158 = 0;
  uStack_350 = 0;
  uStack_348 = 1;
  uStack_33e = CONCAT26(uStack_188,uStack_18e);
  uStack_346 = CONCAT26(uStack_190,uStack_196);
  uStack_32e = CONCAT26(uStack_178,uStack_17e);
  uStack_336 = CONCAT26(uStack_180,uStack_186);
  uStack_326 = CONCAT26(uStack_170,uStack_176);
  uStack_316 = uStack_166;
  uStack_31e = uStack_16e;
  uStack_318 = uStack_168;
  puStack_3a0 = puVar2;
  puStack_358 = puVar2;
  puStack_160 = puVar2;
  FUN_10002dd98(&puStack_3a0,&puStack_1f0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_358,0x1000c4778,&UNK_10008a450);
  uStack_2e8 = uStack_138;
  uStack_2f0 = uStack_140;
  uStack_2d8 = uStack_128;
  uStack_2e0 = uStack_130;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_308 = uStack_158;
  puStack_310 = puStack_160;
  uStack_2f8 = uStack_148;
  uStack_300 = uStack_150;
  uStack_2d0 = uStack_120;
  uStack_2c0 = SUB81(puVar5,0);
  uStack_108 = uStack_158;
  puStack_110 = puStack_160;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_d0 = uStack_120;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  uStack_2a8 = uStack_158;
  puStack_2b0 = puStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_270 = uStack_120;
  puStack_2c8 = puVar4;
  puStack_268 = puVar4;
  uStack_260 = uStack_2c0;
  puStack_c8 = puVar4;
  uStack_c0 = uStack_2c0;
  FUN_10002dd98(&puStack_310,&puStack_1f0,0x1000c51e8,&UNK_10008a458);
  func_0x00010002dde0(&puStack_2b0,0x1000c51e8,&UNK_10008a458);
  uStack_228 = uStack_e8;
  uStack_230 = uStack_f0;
  uStack_218 = uStack_d8;
  uStack_220 = uStack_e0;
  uStack_208 = SUB87(puStack_c8,0);
  uStack_201 = (undefined1)((ulong)puStack_c8 >> 0x38);
  uStack_210 = uStack_d0;
  uStack_200 = uStack_c0;
  uStack_248 = uStack_108;
  puStack_250 = puStack_110;
  uStack_238 = uStack_f8;
  uStack_240 = uStack_100;
  uStack_1ff = 0x100;
  uStack_1e8 = uStack_108;
  puStack_1f0 = puStack_110;
  uStack_1d8 = uStack_f8;
  uStack_1e0 = uStack_100;
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  puStack_1a8 = puStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_f0;
  uStack_1a0 = uStack_c0;
  uStack_19f = 0x100;
  FUN_10002dd98(&puStack_250,auStack_3f8,0x1000c51f0,&UNK_10008a460);
  func_0x00010002dde0(&puStack_1f0,0x1000c51f0,&UNK_10008a460);
  param_1[5] = uStack_228;
  param_1[4] = uStack_230;
  param_1[7] = uStack_218;
  param_1[6] = uStack_220;
  param_1[9] = CONCAT17(uStack_201,uStack_208);
  param_1[8] = uStack_210;
  *(uint *)((long)param_1 + 0x4f) = CONCAT22(uStack_1ff,CONCAT11(uStack_200,uStack_201));
  param_1[1] = uStack_248;
  *param_1 = puStack_250;
  param_1[3] = uStack_238;
  param_1[2] = uStack_240;
  return;
}



/* Entry: 100029d8c; end: 100029d9b;  */

void FUN_100029d8c(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_400 [8];
  undefined1 auStack_3f8 [88];
  undefined1 *puStack_3a0;
  undefined8 uStack_398;
  undefined2 uStack_390;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined2 uStack_380;
  undefined6 uStack_37e;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined2 uStack_370;
  undefined6 uStack_36e;
  undefined2 uStack_368;
  undefined6 uStack_366;
  undefined2 uStack_360;
  undefined6 uStack_35e;
  undefined1 *puStack_358;
  undefined8 uStack_350;
  undefined2 uStack_348;
  undefined8 uStack_346;
  undefined8 uStack_33e;
  undefined8 uStack_336;
  undefined8 uStack_32e;
  undefined8 uStack_326;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined1 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 uStack_2c0;
  undefined1 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined1 uStack_260;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined1 uStack_200;
  undefined2 uStack_1ff;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 uStack_1a0;
  undefined2 uStack_19f;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b0 [64];
  
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[2];
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_400 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000276a4(uVar7,uVar1);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC(uVar7);
  (**(code **)(lVar8 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar2);
  puVar3 = puVar4;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar4,uVar7);
  _swift_release(uVar7);
  (**(code **)(lVar8 + 8))(puVar4,lVar2);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_b0,uVar9,0,uVar9,0,puVar4,lVar2);
  uStack_188 = (undefined2)auStack_b0._8_8_;
  uStack_186 = SUB86(auStack_b0._8_8_,2);
  uStack_190 = (undefined2)auStack_b0._0_8_;
  uStack_18e = SUB86(auStack_b0._0_8_,2);
  uStack_178 = (undefined2)auStack_b0._24_8_;
  uStack_176 = SUB86(auStack_b0._24_8_,2);
  uStack_180 = (undefined2)auStack_b0._16_8_;
  uStack_17e = SUB86(auStack_b0._16_8_,2);
  uStack_168 = (undefined2)auStack_b0._40_8_;
  uStack_166 = SUB86(auStack_b0._40_8_,2);
  uStack_170 = (undefined2)auStack_b0._32_8_;
  uStack_16e = SUB86(auStack_b0._32_8_,2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar6 = puVar5;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_398 = 0;
  uStack_390 = 1;
  uStack_386 = uStack_18e;
  uStack_380 = uStack_188;
  uStack_388 = uStack_190;
  uStack_376 = uStack_17e;
  uStack_370 = uStack_178;
  uStack_37e = uStack_186;
  uStack_378 = uStack_180;
  uStack_366 = uStack_16e;
  uStack_36e = uStack_176;
  uStack_368 = uStack_170;
  uStack_120 = CONCAT62(uStack_166,uStack_168);
  uStack_360 = uStack_168;
  uStack_35e = uStack_166;
  uStack_148 = CONCAT62(uStack_18e,uStack_190);
  uStack_150 = CONCAT62(uStack_196,1);
  uStack_138 = CONCAT62(uStack_17e,uStack_180);
  uStack_140 = CONCAT62(uStack_186,uStack_188);
  uStack_128 = CONCAT62(uStack_16e,uStack_170);
  uStack_130 = CONCAT62(uStack_176,uStack_178);
  uStack_158 = 0;
  uStack_350 = 0;
  uStack_348 = 1;
  uStack_33e = CONCAT26(uStack_188,uStack_18e);
  uStack_346 = CONCAT26(uStack_190,uStack_196);
  uStack_32e = CONCAT26(uStack_178,uStack_17e);
  uStack_336 = CONCAT26(uStack_180,uStack_186);
  uStack_326 = CONCAT26(uStack_170,uStack_176);
  uStack_316 = uStack_166;
  uStack_31e = uStack_16e;
  uStack_318 = uStack_168;
  puStack_3a0 = puVar3;
  puStack_358 = puVar3;
  puStack_160 = puVar3;
  FUN_10002dd98(&puStack_3a0,&puStack_1f0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_358,0x1000c4778,&UNK_10008a450);
  uStack_2e8 = uStack_138;
  uStack_2f0 = uStack_140;
  uStack_2d8 = uStack_128;
  uStack_2e0 = uStack_130;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_308 = uStack_158;
  puStack_310 = puStack_160;
  uStack_2f8 = uStack_148;
  uStack_300 = uStack_150;
  uStack_2d0 = uStack_120;
  uStack_2c0 = SUB81(puVar6,0);
  uStack_108 = uStack_158;
  puStack_110 = puStack_160;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_d0 = uStack_120;
  uStack_288 = uStack_138;
  uStack_290 = uStack_140;
  uStack_278 = uStack_128;
  uStack_280 = uStack_130;
  uStack_2a8 = uStack_158;
  puStack_2b0 = puStack_160;
  uStack_298 = uStack_148;
  uStack_2a0 = uStack_150;
  uStack_270 = uStack_120;
  puStack_2c8 = puVar5;
  puStack_268 = puVar5;
  uStack_260 = uStack_2c0;
  puStack_c8 = puVar5;
  uStack_c0 = uStack_2c0;
  FUN_10002dd98(&puStack_310,&puStack_1f0,0x1000c51e8,&UNK_10008a458);
  func_0x00010002dde0(&puStack_2b0,0x1000c51e8,&UNK_10008a458);
  uStack_228 = uStack_e8;
  uStack_230 = uStack_f0;
  uStack_218 = uStack_d8;
  uStack_220 = uStack_e0;
  uStack_208 = SUB87(puStack_c8,0);
  uStack_201 = (undefined1)((ulong)puStack_c8 >> 0x38);
  uStack_210 = uStack_d0;
  uStack_200 = uStack_c0;
  uStack_248 = uStack_108;
  puStack_250 = puStack_110;
  uStack_238 = uStack_f8;
  uStack_240 = uStack_100;
  uStack_1ff = 0x100;
  uStack_1e8 = uStack_108;
  puStack_1f0 = puStack_110;
  uStack_1d8 = uStack_f8;
  uStack_1e0 = uStack_100;
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  puStack_1a8 = puStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_1c8 = uStack_e8;
  uStack_1d0 = uStack_f0;
  uStack_1a0 = uStack_c0;
  uStack_19f = 0x100;
  FUN_10002dd98(&puStack_250,auStack_3f8,0x1000c51f0,&UNK_10008a460);
  func_0x00010002dde0(&puStack_1f0,0x1000c51f0,&UNK_10008a460);
  param_1[5] = uStack_228;
  param_1[4] = uStack_230;
  param_1[7] = uStack_218;
  param_1[6] = uStack_220;
  param_1[9] = CONCAT17(uStack_201,uStack_208);
  param_1[8] = uStack_210;
  *(uint *)((long)param_1 + 0x4f) = CONCAT22(uStack_1ff,CONCAT11(uStack_200,uStack_201));
  param_1[1] = uStack_248;
  *param_1 = puStack_250;
  param_1[3] = uStack_238;
  param_1[2] = uStack_240;
  return;
}



/* Entry: 100029d9c; end: 10002a09b;  */

void FUN_100029d9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_480 [112];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined *puStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  code *pcStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined2 uStack_f7;
  undefined5 uStack_f5;
  undefined1 uStack_f0;
  undefined2 uStack_ef;
  undefined6 uStack_ed;
  undefined2 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined2 uStack_77;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_300 = *unaff_x20;
  uStack_2f8 = *(undefined1 *)(unaff_x20 + 1);
  uStack_310 = unaff_x20[2];
  uStack_308 = *(undefined1 *)(unaff_x20 + 3);
  puVar1 = &UNK_1000b31c8;
  _swift_allocObject(&UNK_1000b31c8,0x38,7);
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x20[4];
  puVar2 = &UNK_1000b31f0;
  _swift_allocObject(&UNK_1000b31f0,0x38,7);
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar9;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  FUN_10002d280(&uStack_300,&uStack_e0);
  FUN_10002d280(&uStack_310,&uStack_e0);
  FUN_10002d280(&uStack_300,&uStack_e0);
  puVar3 = &uStack_310;
  puVar6 = &uStack_e0;
  FUN_10002d280(puVar3,puVar6);
  uVar7 = unaff_x20[4];
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_410,uVar7,0,uVar7,0,puVar3,puVar6);
  puVar4 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar5 = puVar4;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_2e0 = 0x10002d23c;
  pcStack_2d0 = FUN_10002d278;
  uStack_2b8 = uStack_408;
  uStack_2c0 = uStack_410;
  uStack_2a8 = uStack_3f8;
  uStack_2b0 = uStack_400;
  uStack_298 = uStack_3e8;
  uStack_2a0 = uStack_3f0;
  uStack_398 = uStack_3f8;
  uStack_3a0 = uStack_400;
  uStack_388 = uStack_3e8;
  uStack_390 = uStack_3f0;
  pcStack_3c0 = FUN_10002d278;
  uStack_3a8 = uStack_408;
  uStack_3b0 = uStack_410;
  uStack_3d0 = 0x10002d23c;
  uStack_280 = 0x10002d23c;
  pcStack_270 = FUN_10002d278;
  uStack_248 = uStack_3f8;
  uStack_250 = uStack_400;
  uStack_238 = uStack_3e8;
  uStack_240 = uStack_3f0;
  uStack_258 = uStack_408;
  uStack_260 = uStack_410;
  uStack_3e0 = param_2;
  uStack_3d8 = param_3;
  puStack_3c8 = puVar1;
  puStack_3b8 = puVar2;
  uStack_2f0 = param_2;
  uStack_2e8 = param_3;
  puStack_2d8 = puVar1;
  puStack_2c8 = puVar2;
  uStack_290 = param_2;
  uStack_288 = param_3;
  puStack_278 = puVar1;
  puStack_268 = puVar2;
  FUN_10002dd98(&uStack_2f0,&uStack_e0,0x1000c51f8,&UNK_10008a468);
  func_0x00010002dde0(&uStack_290,0x1000c51f8,&UNK_10008a468);
  uStack_1e8 = uStack_398;
  uStack_1f0 = uStack_3a0;
  uStack_1d8 = (undefined1)uStack_388;
  uStack_1d7 = (undefined7)((ulong)uStack_388 >> 8);
  uStack_1e0 = uStack_390;
  uStack_228 = uStack_3d8;
  uStack_230 = uStack_3e0;
  puStack_218 = puStack_3c8;
  uStack_220 = uStack_3d0;
  uStack_338 = uStack_398;
  uStack_340 = uStack_3a0;
  uStack_330 = uStack_390;
  uStack_378 = uStack_3d8;
  uStack_380 = uStack_3e0;
  puStack_368 = puStack_3c8;
  uStack_370 = uStack_3d0;
  puStack_208 = puStack_3b8;
  pcStack_210 = pcStack_3c0;
  uStack_1f8 = uStack_3a8;
  uStack_200 = uStack_3b0;
  uStack_1d0 = SUB81(puVar4,0);
  uStack_1cf = (undefined7)((ulong)puVar4 >> 8);
  uStack_1c8 = SUB81(puVar5,0);
  puStack_358 = puStack_3b8;
  pcStack_360 = pcStack_3c0;
  uStack_348 = uStack_3a8;
  uStack_350 = uStack_3b0;
  uStack_31f = CONCAT17(uStack_1c8,uStack_1cf);
  uStack_327 = uStack_1d7;
  uStack_320 = uStack_1d0;
  uStack_178 = uStack_398;
  uStack_180 = uStack_3a0;
  uStack_168 = uStack_388;
  uStack_170 = uStack_390;
  puStack_198 = puStack_3b8;
  pcStack_1a0 = pcStack_3c0;
  uStack_188 = uStack_3a8;
  uStack_190 = uStack_3b0;
  uStack_1b8 = uStack_3d8;
  uStack_1c0 = uStack_3e0;
  puStack_1a8 = puStack_3c8;
  uStack_1b0 = uStack_3d0;
  uStack_328 = uStack_1d8;
  puStack_160 = puVar4;
  uStack_158 = uStack_1c8;
  FUN_10002dd98(&uStack_230,&uStack_e0,0x1000c5200,&UNK_10008a470);
  func_0x00010002dde0(&uStack_1c0,0x1000c5200,&UNK_10008a470);
  uStack_108 = uStack_338;
  uStack_110 = uStack_340;
  uStack_f8 = uStack_328;
  uStack_100 = uStack_330;
  uStack_ef = (undefined2)uStack_31f;
  uStack_ed = (undefined6)((ulong)uStack_31f >> 0x10);
  uStack_f7 = (undefined2)uStack_327;
  uStack_f5 = (undefined5)((uint7)uStack_327 >> 0x10);
  uStack_f0 = uStack_320;
  uStack_148 = uStack_378;
  uStack_150 = uStack_380;
  puStack_138 = puStack_368;
  uStack_140 = uStack_370;
  puStack_128 = puStack_358;
  pcStack_130 = pcStack_360;
  uStack_118 = uStack_348;
  uStack_120 = uStack_350;
  uStack_e7 = 0x100;
  uStack_d8 = uStack_378;
  uStack_e0 = uStack_380;
  puStack_c8 = puStack_368;
  uStack_d0 = uStack_370;
  uStack_7f = uStack_31f;
  uStack_80 = uStack_320;
  puStack_b8 = puStack_358;
  pcStack_c0 = pcStack_360;
  uStack_a8 = uStack_348;
  uStack_b0 = uStack_350;
  uStack_98 = uStack_338;
  uStack_a0 = uStack_340;
  uStack_88 = uStack_328;
  uStack_87 = uStack_327;
  uStack_90 = uStack_330;
  uStack_77 = 0x100;
  FUN_10002dd98(&uStack_150,auStack_480,0x1000c5208,&UNK_10008a478);
  func_0x00010002dde0(&uStack_e0,0x1000c5208,&UNK_10008a478);
  param_1[9] = uStack_108;
  param_1[8] = uStack_110;
  param_1[0xb] = CONCAT53(uStack_f5,CONCAT21(uStack_f7,uStack_f8));
  param_1[10] = uStack_100;
  *(ulong *)((long)param_1 + 99) = CONCAT26(uStack_e7,uStack_ed);
  *(ulong *)((long)param_1 + 0x5b) = CONCAT26(uStack_ef,CONCAT15(uStack_f0,uStack_f5));
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = puStack_138;
  param_1[2] = uStack_140;
  param_1[5] = puStack_128;
  param_1[4] = pcStack_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  return;
}



/* Entry: 10002a09c; end: 10002a2b3;  */

void FUN_10002a09c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  cVar3 = *(char *)(param_4 + 0x18);
  uStack_68 = uVar4;
  if (cVar3 == '\x01') {
    func_0x0001000276a4(uVar4,1);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    uStack_60 = param_2;
    cStack_58 = cVar3;
    func_0x00010002d33c();
    uVar2 = uVar1;
    func_0x00010002d37c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3468,&UNK_1000b33e8,uVar1,uVar2);
    cVar3 = '\x01';
  }
  else {
    func_0x0001000276a4(uVar4,cVar3);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    cStack_58 = '\0';
    uStack_60 = param_2;
    func_0x00010002d33c();
    uVar2 = uVar1;
    func_0x00010002d37c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3468,&UNK_1000b33e8,uVar1,uVar2);
  }
  func_0x0001000276b8(uVar4,cVar3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  *(undefined1 *)(param_1 + 2) = uStack_40;
  return;
}



/* Entry: 10002a2b4; end: 10002a5b7;  */

void FUN_10002a2b4(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar6 = param_2 * 0.88;
  dVar5 = dVar6 * 0.5 + param_2 * -0.23;
  param_2 = param_2 - dVar6 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar6,0,dVar6,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar5;
  dStack_2d0 = param_2;
  dStack_1b8 = dVar5;
  dStack_1b0 = param_2;
  dStack_158 = dVar5;
  dStack_150 = param_2;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002a5b8; end: 10002a5c3;  */

void FUN_10002a5b8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar8 = dVar6 * 0.88;
  dVar7 = dVar8 * 0.5 + dVar6 * -0.23;
  dVar6 = dVar6 - dVar8 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar8,0,dVar8,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar7;
  dStack_2d0 = dVar6;
  dStack_1b8 = dVar7;
  dStack_1b0 = dVar6;
  dStack_158 = dVar7;
  dStack_150 = dVar6;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002a5c4; end: 10002a83b;  */

void FUN_10002a5c4(undefined8 *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar5 = param_2 * 0.5;
  dVar6 = dVar5 + param_2 * 0.15;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,param_2,0,param_2,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar6;
  dStack_f0 = dVar5;
  dStack_98 = dVar6;
  dStack_90 = dVar5;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002a83c; end: 10002a847;  */

void FUN_10002a83c(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = dVar6 * 0.5;
  dVar8 = dVar7 + dVar6 * 0.15;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,dVar6,0,dVar6,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar8;
  dStack_f0 = dVar7;
  dStack_98 = dVar8;
  dStack_90 = dVar7;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002a848; end: 10002ab73;  */

void FUN_10002a848(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar6 = param_2 * 0.22;
  dVar5 = param_2 * 0.27 + dVar7 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,param_2 * 0.55,0,dVar7,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar6;
  dStack_2d0 = dVar5;
  dStack_1b8 = dVar6;
  dStack_1b0 = dVar5;
  dStack_158 = dVar6;
  dStack_150 = dVar5;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002ab74; end: 10002ab7f;  */

void FUN_10002ab74(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar9 = dVar6 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar8 = dVar6 * 0.22;
  dVar7 = dVar6 * 0.27 + dVar9 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar6 * 0.55,0,dVar9,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar8;
  dStack_2d0 = dVar7;
  dStack_1b8 = dVar8;
  dStack_1b0 = dVar7;
  dStack_158 = dVar8;
  dStack_150 = dVar7;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002ab80; end: 10002ae33;  */

void FUN_10002ab80(undefined8 *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.73 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar6 = param_2 * 0.5 + param_2 * 0.15;
  dVar5 = param_2 * 0.13 + dVar7 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,param_2 * 0.73,0,dVar7,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar6;
  dStack_f0 = dVar5;
  dStack_98 = dVar6;
  dStack_90 = dVar5;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002ae34; end: 10002ae3f;  */

void FUN_10002ae34(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar9 = dVar6 * 0.73 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar8 = dVar6 * 0.5 + dVar6 * 0.15;
  dVar7 = dVar6 * 0.13 + dVar9 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,dVar6 * 0.73,0,dVar9,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar8;
  dStack_f0 = dVar7;
  dStack_98 = dVar8;
  dStack_90 = dVar7;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002ae40; end: 10002ae77;  */

void FUN_10002ae40(void)

{
  FUN_100029d9c();
  return;
}



/* Entry: 10002ae78; end: 10002b137;  */

void FUN_10002ae78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined8 uStack_35f;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined2 uStack_107;
  undefined5 uStack_105;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined6 uStack_fd;
  undefined2 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined2 uStack_77;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar1 = unaff_x20;
  uVar4 = param_3;
  FUN_10002b138(&uStack_f0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_450,uVar5,0,uVar5,0,lVar1,uVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar3 = puVar2;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_340 = uStack_f0;
  uStack_338 = uStack_e8;
  uStack_330 = uStack_e0;
  uStack_328 = uStack_d8;
  uStack_320 = uStack_d0;
  uStack_318 = uStack_c8;
  uStack_2f8 = uStack_438;
  uStack_300 = uStack_440;
  uStack_2e8 = uStack_428;
  uStack_2f0 = uStack_430;
  uStack_118 = uStack_438;
  uStack_120 = uStack_440;
  uStack_108 = (undefined1)uStack_428;
  uStack_107 = (undefined2)((ulong)uStack_428 >> 8);
  uStack_105 = (undefined5)((ulong)uStack_428 >> 0x18);
  uStack_110 = uStack_430;
  uStack_308 = uStack_448;
  uStack_310 = uStack_450;
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  uStack_138 = uStack_c8;
  uStack_140 = uStack_d0;
  uStack_128 = uStack_448;
  uStack_130 = uStack_450;
  uStack_2d0 = uStack_f0;
  uStack_2c8 = uStack_e8;
  uStack_2c0 = uStack_e0;
  uStack_2b8 = uStack_d8;
  uStack_2b0 = uStack_d0;
  uStack_2a8 = uStack_c8;
  uStack_298 = uStack_448;
  uStack_2a0 = uStack_450;
  uStack_288 = uStack_438;
  uStack_290 = uStack_440;
  uStack_278 = uStack_428;
  uStack_280 = uStack_430;
  uStack_350 = param_2;
  uStack_348 = param_3;
  uStack_2e0 = param_2;
  uStack_2d8 = param_3;
  uStack_170 = param_2;
  uStack_168 = param_3;
  FUN_10002dd98(&uStack_350,&uStack_f0,0x1000c5230,&UNK_10008a480);
  func_0x00010002dde0(&uStack_2e0,0x1000c5230,&UNK_10008a480);
  uStack_188 = CONCAT53(uStack_105,CONCAT21(uStack_107,uStack_108));
  uStack_218 = uStack_118;
  uStack_220 = uStack_120;
  uStack_208 = uStack_108;
  uStack_207 = (undefined7)(CONCAT53(uStack_105,CONCAT21(uStack_107,uStack_108)) >> 8);
  uStack_210 = uStack_110;
  uStack_238 = uStack_138;
  uStack_240 = uStack_140;
  uStack_228 = uStack_128;
  uStack_230 = uStack_130;
  uStack_268 = uStack_168;
  uStack_270 = uStack_170;
  uStack_258 = uStack_158;
  uStack_260 = uStack_160;
  uStack_248 = uStack_148;
  uStack_250 = uStack_150;
  uStack_200 = SUB81(puVar2,0);
  uStack_1ff = (undefined7)((ulong)puVar2 >> 8);
  uStack_1f8 = SUB81(puVar3,0);
  uStack_388 = uStack_128;
  uStack_390 = uStack_130;
  uStack_378 = uStack_118;
  uStack_380 = uStack_120;
  uStack_368 = uStack_108;
  uStack_370 = uStack_110;
  uStack_35f = CONCAT17(uStack_1f8,uStack_1ff);
  uStack_367 = uStack_207;
  uStack_360 = uStack_200;
  uStack_3c8 = uStack_168;
  uStack_3d0 = uStack_170;
  uStack_3b8 = uStack_158;
  uStack_3c0 = uStack_160;
  uStack_3a8 = uStack_148;
  uStack_3b0 = uStack_150;
  uStack_398 = uStack_138;
  uStack_3a0 = uStack_140;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_198 = uStack_118;
  uStack_1a0 = uStack_120;
  uStack_190 = uStack_110;
  uStack_1b8 = uStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_1c8 = uStack_148;
  uStack_1d0 = uStack_150;
  puStack_180 = puVar2;
  uStack_178 = uStack_1f8;
  FUN_10002dd98(&uStack_270,&uStack_f0,0x1000c5238,&UNK_10008a488);
  func_0x00010002dde0(&uStack_1f0,0x1000c5238,&UNK_10008a488);
  uStack_128 = uStack_388;
  uStack_130 = uStack_390;
  uStack_118 = uStack_378;
  uStack_120 = uStack_380;
  uStack_108 = uStack_368;
  uStack_110 = uStack_370;
  uStack_ff = (undefined2)uStack_35f;
  uStack_fd = (undefined6)((ulong)uStack_35f >> 0x10);
  uStack_107 = (undefined2)uStack_367;
  uStack_105 = (undefined5)((uint7)uStack_367 >> 0x10);
  uStack_100 = uStack_360;
  uStack_168 = uStack_3c8;
  uStack_170 = uStack_3d0;
  uStack_158 = uStack_3b8;
  uStack_160 = uStack_3c0;
  uStack_148 = uStack_3a8;
  uStack_150 = uStack_3b0;
  uStack_138 = uStack_398;
  uStack_140 = uStack_3a0;
  uStack_a8 = uStack_388;
  uStack_b0 = uStack_390;
  uStack_98 = uStack_378;
  uStack_a0 = uStack_380;
  uStack_88 = uStack_368;
  uStack_90 = uStack_370;
  uStack_7f = uStack_35f;
  uStack_87 = uStack_367;
  uStack_80 = uStack_360;
  uStack_e8 = uStack_3c8;
  uStack_f0 = uStack_3d0;
  uStack_d8 = uStack_3b8;
  uStack_e0 = uStack_3c0;
  uStack_f7 = 0x100;
  uStack_c8 = uStack_3a8;
  uStack_d0 = uStack_3b0;
  uStack_b8 = uStack_398;
  uStack_c0 = uStack_3a0;
  uStack_77 = 0x100;
  FUN_10002dd98(&uStack_170,&uStack_450,0x1000c5240,&UNK_10008a490);
  func_0x00010002dde0(&uStack_f0,0x1000c5240,&UNK_10008a490);
  param_1[9] = uStack_128;
  param_1[8] = uStack_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[0xd] = CONCAT53(uStack_105,CONCAT21(uStack_107,uStack_108));
  param_1[0xc] = uStack_110;
  *(ulong *)((long)param_1 + 0x73) = CONCAT26(uStack_f7,uStack_fd);
  *(ulong *)((long)param_1 + 0x6b) = CONCAT26(uStack_ff,CONCAT15(uStack_100,uStack_105));
  param_1[1] = uStack_168;
  *param_1 = uStack_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[5] = uStack_148;
  param_1[4] = uStack_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  return;
}



/* Entry: 10002b138; end: 10002b5d7;  */

void FUN_10002b138(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_40 = *param_2;
  uStack_38 = *(undefined1 *)(param_2 + 1);
  uStack_50 = param_2[2];
  uStack_48 = *(undefined1 *)(param_2 + 3);
  uStack_60 = param_2[4];
  uStack_58 = *(undefined1 *)(param_2 + 5);
  puVar1 = &UNK_1000b3218;
  _swift_allocObject(&UNK_1000b3218,0x48,7);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  uVar4 = param_2[4];
  *(undefined8 *)(puVar1 + 0x38) = param_2[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = param_2[6];
  puVar2 = &UNK_1000b3240;
  _swift_allocObject(&UNK_1000b3240,0x48,7);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar4 = param_2[4];
  *(undefined8 *)(puVar2 + 0x38) = param_2[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x40) = param_2[6];
  puVar3 = &UNK_1000b3268;
  _swift_allocObject(&UNK_1000b3268,0x48,7);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar4 = param_2[4];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  *(undefined8 *)(puVar3 + 0x40) = param_2[6];
  *param_1 = FUN_10002d3bc;
  param_1[1] = puVar1;
  param_1[2] = 0x10002d3c4;
  param_1[3] = puVar2;
  param_1[4] = FUN_10002d410;
  param_1[5] = puVar3;
  FUN_10002d280(&uStack_40,auStack_70);
  FUN_10002d280(&uStack_50,auStack_70);
  FUN_10002d280(&uStack_60,auStack_70);
  FUN_10002d280(&uStack_40,auStack_70);
  FUN_10002d280(&uStack_50,auStack_70);
  FUN_10002d280(&uStack_60,auStack_70);
  FUN_10002d280(&uStack_40,auStack_70);
  FUN_10002d280(&uStack_50,auStack_70);
  FUN_10002d280(&uStack_60,auStack_70);
  return;
}



/* Entry: 10002b5d8; end: 10002b8eb;  */

void FUN_10002b5d8(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.825;
  dVar6 = dVar7 * 0.5 + param_2 * -0.25;
  dVar5 = (param_2 - dVar7 * 0.5) + param_2 * -0.05;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar7,0,dVar7,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar6;
  dStack_2d0 = dVar5;
  dStack_1b8 = dVar6;
  dStack_1b0 = dVar5;
  dStack_158 = dVar6;
  dStack_150 = dVar5;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002b8ec; end: 10002b8f7;  */

void FUN_10002b8ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar8 = dVar6 * 0.825;
  dVar7 = dVar8 * 0.5 + dVar6 * -0.25;
  dVar6 = (dVar6 - dVar8 * 0.5) + dVar6 * -0.05;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar8,0,dVar8,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar7;
  dStack_2d0 = dVar6;
  dStack_1b8 = dVar7;
  dStack_1b0 = dVar6;
  dStack_158 = dVar7;
  dStack_150 = dVar6;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002b8f8; end: 10002bc17;  */

void FUN_10002b8f8(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.825;
  dVar6 = param_2 * 0.5 + param_2 * 0.35;
  dVar5 = (param_2 - dVar7 * 0.5) + param_2 * -0.05;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar7,0,dVar7,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar6;
  dStack_2d0 = dVar5;
  dStack_1b8 = dVar6;
  dStack_1b0 = dVar5;
  dStack_158 = dVar6;
  dStack_150 = dVar5;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002bc18; end: 10002bc23;  */

void FUN_10002bc18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar8 = dVar6 * 0.825;
  dVar7 = dVar6 * 0.5 + dVar6 * 0.35;
  dVar6 = (dVar6 - dVar8 * 0.5) + dVar6 * -0.05;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar8,0,dVar8,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar7;
  dStack_2d0 = dVar6;
  dStack_1b8 = dVar7;
  dStack_1b0 = dVar6;
  dStack_158 = dVar7;
  dStack_150 = dVar6;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fe0000000000000;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fe0000000000000;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002bc24; end: 10002be9b;  */

void FUN_10002bc24(undefined8 *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar6 = param_2 * 0.9;
  dVar5 = param_2 - dVar6 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,dVar6,0,dVar6,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = param_2 * 0.5;
  dStack_f0 = dVar5;
  dStack_98 = param_2 * 0.5;
  dStack_90 = dVar5;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002be9c; end: 10002bea7;  */

void FUN_10002be9c(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar8 = dVar6 * 0.9;
  dVar7 = dVar6 - dVar8 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,dVar8,0,dVar8,0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar6 * 0.5;
  dStack_f0 = dVar7;
  dStack_98 = dVar6 * 0.5;
  dStack_90 = dVar7;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002bea8; end: 10002c1d3;  */

void FUN_10002bea8(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar6 = param_2 * 0.18;
  dVar5 = param_2 * 0.27 + dVar7 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,param_2 * 0.55,0,dVar7,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar6;
  dStack_2d0 = dVar5;
  dStack_1b8 = dVar6;
  dStack_1b0 = dVar5;
  dStack_158 = dVar6;
  dStack_150 = dVar5;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002c1d4; end: 10002c1df;  */

void FUN_10002c1d4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar9 = dVar6 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar8 = dVar6 * 0.18;
  dVar7 = dVar6 * 0.27 + dVar9 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar6 * 0.55,0,dVar9,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar8;
  dStack_2d0 = dVar7;
  dStack_1b8 = dVar8;
  dStack_1b0 = dVar7;
  dStack_158 = dVar8;
  dStack_150 = dVar7;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}


