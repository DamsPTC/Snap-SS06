/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100057124; end: 100057437;  */

undefined8 FUN_100057124(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar2 = 0x1000c4330;
  puStack_98 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar12 - extraout_x12;
  puVar4 = &UNK_1000b51d0;
  _swift_allocObject(&UNK_1000b51d0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar13,param_1,param_2);
  lVar2 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar2 == 1) {
    FUN_100057d88(lVar13,0x1000c4330,&UNK_1000890b0);
  }
  else {
    lVar2 = lVar11;
    (**(code **)(lVar10 + 0x20))(lVar11,lVar13,lVar3);
    _dispatch_group_create();
    _dispatch_group_enter();
    (**(code **)(lVar10 + 0x10))(lVar12,lVar11,lVar3);
    __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
              (puStack_98,0x404e000000000000,lVar12,0);
    puVar5 = PTR__OBJC_CLASS___NSURLSession_1000c21a0;
    _objc_opt_self(PTR__OBJC_CLASS___NSURLSession_1000c21a0);
    func_0x0001000875c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
    puVar7 = &UNK_1000b51f8;
    _swift_allocObject(&UNK_1000b51f8,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar4;
    *(long *)(puVar7 + 0x18) = lVar2;
    pcStack_70 = FUN_100057df4;
    puStack_90 = PTR___NSConcreteStackBlock_1000b0c60;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100057954;
    puStack_78 = &UNK_1000b5210;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    __Block_copy(ppuVar8);
    puVar7 = puStack_68;
    lStack_a8 = lVar1;
    _swift_retain(puVar4);
    _objc_retain(lVar2);
    _swift_release(puVar7);
    puVar7 = puVar5;
    func_0x000100086720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar8);
    _objc_release(puVar5);
    _objc_release(puVar6);
    func_0x0001000871c0(puVar7);
    _objc_release(puVar7);
    __sSo17OS_dispatch_groupC8DispatchE4waityyF();
    _objc_release(lVar2);
    (**(code **)(lStack_a0 + 8))(puStack_98,lStack_a8);
    (**(code **)(lVar10 + 8))(lVar11,lVar3);
  }
  _swift_beginAccess(puVar4 + 0x10,&puStack_90,0,0);
  uVar9 = *(undefined8 *)(puVar4 + 0x10);
  _objc_retain(uVar9);
  _swift_release(puVar4);
  return uVar9;
}



/* Entry: 100057438; end: 100057887;  */

void FUN_100057438(undefined8 ***param_1,undefined8 ***param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  undefined1 auStack_110 [48];
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  pppuVar4 = param_2;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  puVar6 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == (undefined8 ***)0x0) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
      return;
    }
    pppuStack_80 = param_2;
    ppuStack_78 = (undefined8 **)param_3;
    FUN_100010174();
    uVar1 = SUB81(param_1,0);
    _swift_bridgeObjectRetain(param_3);
    ppppuVar9 = &pppuStack_80;
    puVar10 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC();
    puStack_70 = (undefined1 *)CONCAT71(puStack_70._1_7_,uVar1);
    pppuStack_80 = ppppuVar9;
    ppuStack_78 = (undefined8 **)puVar10;
    uStack_68 = param_4;
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC
              (&pppuStack_80,PTR___s7SwiftUI4TextVN_1000b06e0,
               PTR___s7SwiftUI4TextVAA4ViewAAWP_1000b06d0);
  }
  else {
    _objc_retain();
    pppuVar3 = param_1;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    ppuStack_b0 = pppuVar3;
    ppuStack_a8 = pppuVar4;
    _objc_retain(param_1);
    pppuVar4 = param_1;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    (**(code **)(lVar11 + 0x68))
              (puVar6,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8
               ,lVar2);
    puVar5 = puVar6;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,puVar6,pppuVar4);
    _swift_release(pppuVar4);
    (**(code **)(lVar11 + 8))(puVar6,lVar2);
    puVar6 = puVar5;
    __s7SwiftUI5ImageV21SnapchatWidgetsSharedE013toDesaturatedC4ViewAA03AnyI0VyF();
    _swift_release(puVar5);
    uStack_98 = 0;
    uStack_90 = 0x101;
    uStack_88 = 0xbff0000000000000;
    ppuStack_78 = ppuStack_a8;
    pppuStack_80 = (undefined8 ***)ppuStack_b0;
    uStack_68 = 0;
    uStack_c0 = CONCAT44(uStack_8c,0x101);
    uStack_58 = 0xbff0000000000000;
    ppuStack_d8 = ppuStack_a8;
    ppuStack_e0 = ppuStack_b0;
    uStack_c8 = 0;
    uStack_b8 = 0xbff0000000000000;
    uVar7 = 0x1000c6a88;
    puStack_d0 = puVar6;
    puStack_a0 = puVar6;
    puStack_70 = puVar6;
    uStack_60 = uStack_c0;
    func_0x000100057fa0(&pppuStack_80,auStack_110,0x1000c6a88,&UNK_10008c8e8);
    func_0x0001000100d0(0x1000c6a88,&UNK_10008c8e8);
    uVar8 = uVar7;
    FUN_100057d14();
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&ppuStack_e0,uVar7,uVar8);
    _objc_release(param_1);
    FUN_100057d88(&ppuStack_b0,0x1000c6a88,&UNK_10008c8e8);
  }
  return;
}



/* Entry: 100057888; end: 100057953;  */

void FUN_100057888(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(param_1,param_2);
    uVar2 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    func_0x000100086ca0();
    _objc_release(uVar2);
    FUN_1000275d4(param_1,param_2);
    if (puVar1 != (undefined *)0x0) {
      _swift_beginAccess(param_5 + 0x10,auStack_58,1,0);
      uVar2 = *(undefined8 *)(param_5 + 0x10);
      *(undefined **)(param_5 + 0x10) = puVar1;
      _objc_release(uVar2);
    }
  }
  _dispatch_group_leave(param_6);
  return;
}



/* Entry: 100057954; end: 100057a1b;  */

void FUN_100057954(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    _swift_retain(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    _swift_retain(uVar2);
    lVar3 = param_2;
    _objc_retain(param_2);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_2);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  _objc_retain(param_3);
  uVar5 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  FUN_1000275d4(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(uVar2);
  return;
}



/* Entry: 100057a1c; end: 100057c2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100057a1c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
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
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c69d8;
  func_0x0001000100d0(0x1000c69d8,&UNK_10008c870);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  func_0x000100057fa0();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI11ColorSchemeOMa();
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
      puVar5 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x686353726f6c6f43;
      auStack_70[1] = uVar6;
      FUN_10001e2f8(0x686353726f6c6f43,0xeb00000000656d65,auStack_70 + 1);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      __os_log_impl(0x100000000,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,puVar5,0xc);
      FUN_10001e3c0(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 100057c2c; end: 100057d13;  */

void FUN_100057c2c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0xd00000000000005d;
  FUN_100057124(0xd00000000000005d,0x800000010009e9b0);
  puVar2 = PTR__OBJC_CLASS___NSBundle_1000c2230;
  _objc_opt_self(PTR__OBJC_CLASS___NSBundle_1000c2230);
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x800000010009ea50;
  uVar3 = 0xd000000000000014;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000014,0x800000010009ea50,0,0,puVar2,0,0xe000000000000000,
             0x657420726f727245,0xea00000000007478);
  _objc_release(puVar2);
  uStack_38 = 0;
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  FUN_100057e18();
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&uStack_50,&UNK_1000b5b88,puVar2);
  return;
}



/* Entry: 100057d14; end: 100057d87;  */

void FUN_100057d14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c6a90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c6a88;
  func_0x000100010120(0x1000c6a88,&UNK_10008c8e8);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c6a90 = puVar2;
  return;
}



/* Entry: 100057d88; end: 100057dc7;  */

undefined8 FUN_100057d88(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100057dc8; end: 100057df3;  */

void FUN_100057dc8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100057df4; end: 100057e17;  */

void FUN_100057df4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_2 >> 0x3c < 0xf) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(param_1,param_2);
    uVar4 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    func_0x000100086ca0();
    _objc_release(uVar4);
    FUN_1000275d4(param_1,param_2);
    if (puVar3 != (undefined *)0x0) {
      _swift_beginAccess(lVar1 + 0x10,auStack_58,1,0);
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined **)(lVar1 + 0x10) = puVar3;
      _objc_release(uVar4);
    }
  }
  _dispatch_group_leave(uVar2);
  return;
}



/* Entry: 100057e18; end: 100057e97;  */

void FUN_100057e18(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c6a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008d4d8;
  _swift_getWitnessTable(&UNK_10008d4d8,&UNK_1000b5b88);
  puRam00000001000c6a98 = puVar1;
  return;
}



/* Entry: 100057e98; end: 100057f1f;  */

undefined8 FUN_100057e98(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100057f20; end: 100057f63;  */

void FUN_100057f20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c6aa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100065a0c(0xff);
  puVar2 = &UNK_10008d1d8;
  _swift_getWitnessTable(&UNK_10008d1d8,uVar1);
  puRam00000001000c6aa8 = puVar2;
  return;
}



/* Entry: 100057f64; end: 100057fe7;  */

undefined8 FUN_100057f64(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100057fe8; end: 100057ff3;  */

undefined * FUN_100057fe8(void)

{
  return PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
}



/* Entry: 100057ff4; end: 10005859f;  */

void FUN_100057ff4(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  long **pplVar12;
  long lVar13;
  long **pplVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  ulong uVar18;
  long extraout_x12;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long alStack_110 [4];
  long alStack_f0 [2];
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long **pplStack_80;
  long **pplStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  lVar5 = 0x1000c5fb8;
  uStack_a8 = param_1;
  func_0x0001000100d0(0x1000c5fb8,&UNK_10008c300);
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  plVar3 = (long *)0x1000c5fc0;
  lStack_c8 = (long)alStack_f0 - extraout_x8;
  func_0x0001000100d0(0x1000c5fc0,&UNK_10008c308);
  lStack_b8 = plVar3[-1];
  plStack_c0 = plVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = ((long)alStack_f0 - extraout_x8) - extraout_x8_00;
  plVar3 = (long *)0x1000c5fc8;
  lStack_d8 = lVar16;
  func_0x0001000100d0(0x1000c5fc8,&UNK_10008c310);
  lStack_d0 = plVar3[-1];
  plStack_e0 = plVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = lVar16 - extraout_x8_01;
  plVar3 = (long *)0x1000c5fd0;
  func_0x0001000100d0(0x1000c5fd0,&UNK_10008c318);
  alStack_f0[1] = plVar3[-1];
  plVar10 = plVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(alStack_f0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar16 - extraout_x8_02;
  __s23HomeScreenWidgetDefines0C11IdentifiersO18friendLocationKindSSvau();
  alStack_f0[0] = *plVar10;
  plVar10 = (long *)plVar10[1];
  uVar4 = 0;
  func_0x00010006aeb8(0);
  lVar5 = 0;
  func_0x000100052f64();
  _swift_allocObject();
  plVar6 = plVar10;
  _swift_bridgeObjectRetain();
  FUN_10004f218();
  ppuStack_68 = &PTR_DAT_1000b4ca0;
  plVar7 = (long *)0x0;
  plStack_88 = plVar6;
  puStack_70 = (undefined *)lVar5;
  func_0x000100059420();
  plVar6 = plVar7;
  _swift_allocObject();
  FUN_100058608(&plStack_88,lVar5);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  plVar19 = (long *)(lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar19);
  lVar17 = *plVar19;
  plVar6[5] = lVar5;
  plVar6[6] = (long)&PTR_DAT_1000b4ca0;
  plVar6[2] = lVar17;
  lVar5 = 0;
  func_0x00010006a90c();
  _swift_allocObject();
  plVar6[7] = lVar5;
  FUN_100012b94(&plStack_88);
  lVar5 = 0x1000c6ab0;
  plStack_88 = plVar6;
  func_0x0001000100d0(0x1000c6ab0,&UNK_10008c8f0);
  lVar13 = lVar5;
  FUN_100058630();
  lVar17 = 0x1000c6ac8;
  func_0x0001000586c0(0x1000c6ac8,0x100059420,&UNK_10008ca58);
  plVar19[-3] = lVar13;
  plVar19[-2] = lVar17;
  plVar19[-4] = (long)plVar7;
  __s9WidgetKit19IntentConfigurationV4kind6intent8provider7contentACyxq_GSS_xmqd__q_5EntryQyd__ctc0C0Qyd__RszAA0C16TimelineProviderRd__lufC
            (lVar21,alStack_f0[0],plVar10,uVar4,&plStack_88,FUN_1000585a0,0,uVar4,lVar5);
  puVar8 = PTR__OBJC_CLASS___NSBundle_1000c2230;
  _objc_opt_self();
  puVar9 = puVar8;
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  plVar19[-2] = 0xef6e6f697461636f;
  plVar10 = (long *)0x70616d;
  uVar4 = 0xe300000000000000;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0x70616d,0xe300000000000000,0,0,puVar9,0,0xe000000000000000,0x4c20646e65697246);
  _objc_release();
  plStack_88 = plVar10;
  pplStack_80 = (long **)uVar4;
  FUN_100045a40();
  puVar11 = puVar9;
  FUN_100010174();
  puVar1 = PTR___sSSN_1000b1180;
  __s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lF
            (lVar16,&plStack_88,plVar3,PTR___sSSN_1000b1180,puVar9,puVar11);
  _swift_bridgeObjectRelease(uVar4);
  (**(code **)(alStack_f0[1] + 8))(lVar21,plVar3);
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  plVar19[-2] = 0x800000010009ea90;
  uVar15 = 0x800000010009ea70;
  uVar4 = 0xd00000000000001b;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd00000000000001b,0x800000010009ea70,0,0,puVar8,0,0xe000000000000000,
             0xd00000000000002b);
  _objc_release(puVar8);
  pplStack_80 = (long **)puVar1;
  pplVar12 = &plStack_88;
  uStack_98 = uVar4;
  uStack_90 = uVar15;
  plStack_88 = plVar3;
  pplStack_78 = (long **)puVar9;
  puStack_70 = puVar11;
  _swift_getOpaqueTypeConformance
            (pplVar12,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  lVar17 = lStack_d8;
  plVar3 = plStack_e0;
  __s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lF
            (lStack_d8,&uStack_98,plStack_e0,puVar1,pplVar12,puVar11);
  _swift_bridgeObjectRelease(uVar15);
  (**(code **)(lStack_d0 + 8))(lVar16,plVar3);
  lVar5 = 0x1000c41c8;
  func_0x0001000100d0(0x1000c41c8,&UNK_100089230);
  lVar13 = 0;
  __s9WidgetKit0A6FamilyOMa();
  lVar16 = *(long *)(lVar13 + -8);
  uVar18 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar20 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar5,uVar20 + *(long *)(lVar16 + 0x48),uVar18 | 7);
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  (**(code **)(lVar16 + 0x68))
            (lVar5 + uVar20,
             *(undefined4 *)PTR___s9WidgetKit0A6FamilyO11systemSmallyA2CmFWC_1000b0a40,lVar13);
  lVar13 = lStack_c8;
  plStack_88 = plVar3;
  pplStack_80 = (long **)puVar1;
  pplVar14 = &plStack_88;
  pplStack_78 = pplVar12;
  puStack_70 = puVar11;
  _swift_getOpaqueTypeConformance
            (pplVar14,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  plVar3 = plStack_c0;
  __s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGF
            (lVar13,lVar5,plStack_c0,pplVar14);
  _swift_release(lVar5);
  (**(code **)(lStack_b8 + 8))(lVar17,plVar3);
  iVar2 = 2;
  FUN_1000806c0(2,0x11,0,0);
  if (iVar2 == 0) {
    (**(code **)(lStack_b0 + 0x20))(uStack_a8,lVar13,lStack_a0);
  }
  else {
    plStack_88 = plVar3;
    pplVar12 = &plStack_88;
    pplStack_80 = pplVar14;
    _swift_getOpaqueTypeConformance
              (pplVar12,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
               ,1);
    lVar5 = lStack_a0;
    __s7SwiftUI19WidgetConfigurationP0C3KitE23_contentMarginsDisabledQryF
              (uStack_a8,lStack_a0,pplVar12);
    (**(code **)(lStack_b0 + 8))(lVar13,lVar5);
  }
  return;
}



/* Entry: 1000585a0; end: 100058607;  */

void FUN_1000585a0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  FUN_1000569e4();
  FUN_100058840(param_2,(long)param_1 + (long)*(int *)(lVar1 + 0x14));
  puVar2 = &UNK_10008c958;
  _swift_getKeyPath();
  *param_1 = puVar2;
  uVar3 = 0x1000c69d8;
  func_0x0001000100d0(0x1000c69d8,&UNK_10008c870);
                    /* WARNING: Could not recover jumptable at 0x000100086288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagMultiPayload_1000b16d0)(param_1,uVar3,0);
  return;
}



/* Entry: 100058608; end: 10005862f;  */

long FUN_100058608(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    _swift_makeBoxUnique(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 100058630; end: 1000586ff;  */

void FUN_100058630(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c6ab8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c6ab0;
  func_0x000100010120(0x1000c6ab0,&UNK_10008c8f0);
  uVar2 = 0x1000c6ac0;
  func_0x0001000586c0(0x1000c6ac0,FUN_1000569e4,&UNK_10008c894);
  uVar3 = uVar2;
  FUN_10001cc54();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c6ab8 = puVar4;
  return;
}



/* Entry: 100058700; end: 100058727;  */

void FUN_100058700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000908f8,1);
  return;
}



/* Entry: 100058728; end: 10005883f;  */

void FUN_100058728(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar8 = &uStack_70;
  puVar9 = &uStack_70;
  puVar10 = &uStack_70;
  uVar2 = 0x1000c5fb8;
  func_0x000100010120(0x1000c5fb8,&UNK_10008c300);
  uVar3 = 0x1000c5fc0;
  func_0x000100010120(0x1000c5fc0,&UNK_10008c308);
  uVar4 = 0x1000c5fc8;
  func_0x000100010120(0x1000c5fc8,&UNK_10008c310);
  uVar5 = 0x1000c5fd0;
  func_0x000100010120(0x1000c5fd0,&UNK_10008c318);
  uVar6 = uVar5;
  FUN_100045a40();
  uVar7 = uVar6;
  FUN_100010174();
  puVar1 = PTR___sSSN_1000b1180;
  puStack_68 = PTR___sSSN_1000b1180;
  uStack_70 = uVar5;
  puStack_60 = (undefined1 *)uVar6;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
             ,1);
  puStack_68 = puVar1;
  uStack_70 = uVar4;
  puStack_60 = (undefined1 *)puVar8;
  uStack_58 = uVar7;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980,
             1);
  uStack_70 = uVar3;
  puStack_68 = (undefined *)puVar9;
  _swift_getOpaqueTypeConformance
            (&uStack_70,
             PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
             ,1);
  uStack_70 = uVar2;
  puStack_68 = (undefined *)puVar10;
  _swift_getOpaqueTypeConformance(&uStack_70,&DAT_10008f2a8,1);
  return;
}



/* Entry: 100058840; end: 1000588a3;  */

undefined8 FUN_100058840(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10005a998();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000588a4; end: 10005891f;  */

void FUN_1000588a4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 100058920; end: 100058923;  */

void FUN_100058920(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 100058924; end: 10005895b;  */

void FUN_100058924(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000100058958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 10005895c; end: 10005895f;  */

void FUN_10005895c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit13TimelineEntryPAAE9relevanceAA0cD9RelevanceVSgvg_1000b0a98)();
  return;
}



/* Entry: 100058960; end: 100058c1f;  */

void FUN_100058960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_b0;
  
  lVar2 = 0;
  FUN_10005a998();
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar15 = lVar7 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar16 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar16 - extraout_x12_00;
  __s10Foundation4DateVACycfC(lVar11);
  puVar3 = &UNK_1000b52f8;
  _swift_allocObject(&UNK_1000b52f8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  pcVar13 = *(code **)(lVar14 + 0x10);
  (*pcVar13)(lVar16,lVar11,lVar2);
  (*pcVar13)(lVar15,lVar16,lVar2);
  uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar12 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  puVar4 = &UNK_1000b5320;
  _swift_allocObject(&UNK_1000b5320,uVar12 + lVar9,uVar8 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = param_6;
  puVar5 = puVar4 + uVar12;
  (**(code **)(lVar14 + 0x20))(puVar5,lVar16,lVar2);
  func_0x000100059420();
  _swift_retain(param_6);
  _swift_retain(puVar3);
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg(puVar5,&PTR_DAT_1000b52c8)
  ;
  if (((ulong)puVar5 & 1) == 0) {
    __s10Foundation4DateVACycfC(lVar7);
    iVar1 = *(int *)(lStack_b0 + 0x14);
    uVar10 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
    _swift_storeEnumTagMultiPayload(lVar7 + iVar1,uVar10,2);
    FUN_100058c20(lVar7,puVar3,param_5,param_6,lVar15);
    _swift_release(puVar4);
    FUN_10005bac0(lVar7,FUN_10005a998);
  }
  else {
    puVar6 = (undefined8 *)(unaff_x20 + 0x10);
    func_0x000100013de4(puVar6,*(undefined8 *)(unaff_x20 + 0x28));
    __s9WidgetKit23TimelineProviderContextV11displaySizeSo6CGSizeVvg();
    uVar10 = *puVar6;
    _swift_retain(puVar4);
    FUN_100053614(param_1,param_2,param_3,uVar10,FUN_10005ae18,puVar4);
    _swift_release_n(puVar4,2);
  }
  pcVar13 = *(code **)(lVar14 + 8);
  (*pcVar13)(lVar11,lVar2);
  (*pcVar13)(lVar15,lVar2);
  _swift_release(puVar3);
  return;
}



/* Entry: 100058c20; end: 1000593f3;  */

void FUN_100058c20(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x1000c69e0;
  uStack_d0 = param_5;
  lStack_b8 = param_2;
  lStack_b0 = param_1;
  uStack_88 = param_4;
  pcStack_80 = param_3;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  lStack_e0 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_d8 = (long)&lStack_f0 - extraout_x8;
  FUN_10005e080();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = ((long)&lStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_f0 = lVar6;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x1000c6c50;
  lStack_a8 = lVar6;
  func_0x0001000100d0(0x1000c6c50,&UNK_10008cac0);
  lStack_98 = *(long *)(lVar1 + -8);
  lStack_90 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = lVar6 - extraout_x8_02;
  lVar2 = 0;
  lStack_a0 = lVar6;
  __s10Foundation8CalendarV9ComponentOMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar6 = lVar6 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation8CalendarVMa();
  lStack_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = lVar6 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar1 = lVar11 - extraout_x12;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar15 + 0x40));
  lVar8 = lVar1 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar8 - extraout_x12_01;
  __s10Foundation4DateVACycfC(lVar14);
  __s10Foundation8CalendarV7currentACvgZ(lVar10);
  (**(code **)(lVar12 + 0x68))
            (lVar6,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_1000b19d0,
             lVar2);
  __s10Foundation8CalendarV4date8byAdding5value2to18wrappingComponentsAA4DateVSgAC9ComponentO_SiAJSbtF
            (lVar1,lVar6,0xf,lVar14,0);
  (**(code **)(lVar12 + 8))(lVar6,lVar2);
  (**(code **)(lStack_c8 + 8))(lVar10,lStack_c0);
  FUN_10005b158(lVar1,lVar11);
  pcVar9 = *(code **)(lVar15 + 0x30);
  lVar1 = lVar11;
  (*pcVar9)(lVar11,1,lVar3);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar15 + 0x10))(lVar8,lVar14,lVar3);
    lVar1 = lVar11;
    (*pcVar9)(lVar11,1,lVar3);
    if ((int)lVar1 != 1) {
      func_0x00010005b1a8(lVar11,0x1000c4130,&UNK_10008c520);
    }
  }
  else {
    (**(code **)(lVar15 + 0x20))(lVar8,lVar11,lVar3);
  }
  lVar1 = lStack_b8;
  _swift_beginAccess(lStack_b8 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  lVar2 = 0x1000c6c58;
  func_0x0001000100d0(0x1000c6c58,&UNK_10008cad0);
  lVar12 = 0;
  FUN_10005a998();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  uVar13 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar2,uVar13 + *(long *)(*(long *)(lVar12 + -8) + 0x48),uVar7 | 7);
  lVar10 = lStack_b0;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x00010005bafc(lStack_b0,lVar2 + uVar13,FUN_10005a998);
  lVar11 = lStack_a8;
  lVar6 = lStack_d8;
  if (lVar1 == 0) {
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(lStack_a8,lVar8);
    uVar4 = 0x1000c6c40;
    FUN_10005ab14(0x1000c6c40,0xff,FUN_10005a998,&UNK_10008c9f4);
    lVar1 = lStack_a0;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_a0,lVar2,lVar11,lVar12,uVar4);
    (*pcStack_80)(lVar1);
    (**(code **)(lStack_98 + 8))(lVar1,lStack_90);
    pcVar9 = *(code **)(lVar15 + 8);
  }
  else {
    func_0x00010005b1e8(lVar10 + *(int *)(lVar12 + 0x14),lStack_d8,0x1000c69e0,&UNK_10008c9c0);
    lVar10 = lVar6;
    _swift_getEnumCaseMultiPayload(lVar6,lStack_e0);
    lVar11 = lVar2;
    if ((int)lVar10 == 0) {
      uVar4 = 0;
      FUN_10005ee88(0);
      lVar5 = lVar6;
      _swift_getEnumCaseMultiPayload(lVar6,uVar4);
      lVar10 = lStack_f0;
      if ((int)lVar5 == 0) {
        func_0x00010005bb40(lVar6,lStack_f0,FUN_10005e080);
        lVar11 = lVar10;
        FUN_10005b230(lVar10);
        _swift_release(lVar2);
        func_0x00010005bac0(lVar10,FUN_10005e080);
      }
      else {
        func_0x00010005bac0(lVar6,FUN_10005ee88);
      }
    }
    else {
      func_0x00010005b1a8(lVar6,0x1000c69e0,&UNK_10008c9c0);
    }
    _swift_bridgeObjectRetain(lVar11);
    lVar2 = lStack_a8;
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(lStack_a8,lVar8);
    uVar4 = 0x1000c6c40;
    FUN_10005ab14(0x1000c6c40,0xff,FUN_10005a998,&UNK_10008c9f4);
    lVar6 = lStack_a0;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_a0,lVar11,lVar2,lVar12,uVar4);
    lVar2 = lStack_e8;
    __s10Foundation4DateVACycfC(lStack_e8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uStack_d0);
    pcVar9 = *(code **)(lVar15 + 8);
    (*pcVar9)(lVar2,lVar3);
    (*pcStack_80)(lVar6);
    _swift_bridgeObjectRelease(lVar11);
    _swift_release(lVar1);
    (**(code **)(lStack_98 + 8))(lVar6,lStack_90);
  }
  (*pcVar9)(lVar8,lVar3);
  (*pcVar9)(lVar14,lVar3);
  return;
}



/* Entry: 1000593f4; end: 10005943f;  */

void FUN_1000593f4(void)

{
  long unaff_x20;
  
  FUN_100012b94(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 100059440; end: 100059893;  */

long * FUN_100059440(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) != 0) {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar16 = (ulong)uVar7 & 0xff;
    _swift_retain();
    return (long *)(lVar13 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
  }
  lVar9 = 0;
  __s10Foundation4DateVMa();
  pcVar19 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
  (*pcVar19)(param_1,param_2,lVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar13 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar10 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar13);
  if ((int)puVar10 == 1) {
    uVar15 = *puVar2;
    _swift_errorRetain(uVar15);
    *puVar1 = uVar15;
    uVar15 = 1;
    goto LAB_10005986c;
  }
  if ((int)puVar10 != 0) {
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
    return param_1;
  }
  lVar11 = 0;
  FUN_10005ee88();
  puVar10 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar11);
  if ((int)puVar10 == 1) {
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    uVar6 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar6;
    uVar22 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar22;
    uVar15 = puVar2[6];
    uVar17 = puVar2[7];
    puVar1[6] = uVar15;
    puVar1[7] = uVar17;
    uVar18 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar18;
    uVar20 = puVar2[10];
    puVar1[10] = uVar20;
    lVar9 = puVar2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar22);
    _objc_retain(uVar15);
    _objc_retain(uVar17);
    _swift_bridgeObjectRetain(uVar18);
    _objc_retain(uVar20);
    if (lVar9 == 1) {
      uVar15 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar15;
      puVar1[0xd] = puVar2[0xd];
    }
    else {
      puVar1[0xb] = puVar2[0xb];
      puVar1[0xc] = lVar9;
      puVar1[0xd] = puVar2[0xd];
      _swift_bridgeObjectRetain();
    }
    uVar15 = 1;
LAB_10005985c:
    _swift_storeEnumTagMultiPayload(puVar1,lVar11,uVar15);
  }
  else {
    if ((int)puVar10 == 0) {
      uVar15 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar15;
      uVar6 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      uVar22 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar22;
      uVar22 = puVar2[6];
      puVar1[6] = uVar22;
      lVar12 = 0;
      FUN_10005cf80();
      iVar8 = *(int *)(lVar12 + 0x20);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar6);
      _objc_retain(uVar22);
      (*pcVar19)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,lVar9);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28));
      plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
      if (*plVar4 == 0) {
        lVar21 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar21;
      }
      else {
        lVar21 = plVar4[1];
        *plVar3 = *plVar4;
        plVar3[1] = lVar21;
        _swift_retain();
        _swift_retain(lVar21);
      }
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c));
      plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
      if (*plVar4 == 0) {
        lVar12 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar12;
      }
      else {
        lVar12 = plVar4[1];
        *plVar3 = *plVar4;
        plVar3[1] = lVar12;
        _swift_retain();
        _swift_retain(lVar12);
      }
      lVar21 = 0;
      FUN_10005e080();
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x14));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x14));
      uVar15 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar15;
      uVar17 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x18));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x18)) = uVar17;
      uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x1c)) = uVar18;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x20));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x20));
      uVar6 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x24));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x24));
      uVar22 = 0;
      FUN_10005fcd4();
      _swift_bridgeObjectRetain(uVar15);
      _objc_retain(uVar17);
      _objc_retain(uVar18);
      _swift_bridgeObjectRetain(uVar6);
      puVar14 = puVar5;
      _swift_getEnumCaseMultiPayload(puVar5,uVar22);
      uVar15 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar15;
      _swift_bridgeObjectRetain();
      lVar12 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar19)((long)puVar10 + (long)*(int *)(lVar12 + 0x30),
                 (long)puVar5 + (long)*(int *)(lVar12 + 0x30),lVar9);
      _swift_storeEnumTagMultiPayload(puVar10,uVar22,(int)puVar14 == 1);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x28)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x28));
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x2c));
      uVar15 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar15;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar21 + 0x30));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar21 + 0x30));
      lVar9 = puVar2[1];
      _objc_retain();
      _swift_bridgeObjectRetain(uVar15);
      if (lVar9 == 1) {
        uVar15 = *puVar2;
        puVar10[1] = puVar2[1];
        *puVar10 = uVar15;
        puVar10[2] = puVar2[2];
      }
      else {
        *puVar10 = *puVar2;
        puVar10[1] = lVar9;
        puVar10[2] = puVar2[2];
        _swift_bridgeObjectRetain(lVar9);
      }
      uVar15 = 0;
      goto LAB_10005985c;
    }
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  uVar15 = 0;
LAB_10005986c:
  _swift_storeEnumTagMultiPayload(puVar1,lVar13,uVar15);
  return param_1;
}



/* Entry: 100059894; end: 100059ac3;  */

void FUN_100059894(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar4 + -8) + 8);
  (*pcVar9)(param_1,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x14));
  uVar6 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar5 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar6);
  if ((int)puVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)(*puVar1);
    return;
  }
  if ((int)puVar5 == 0) {
    uVar6 = 0;
    FUN_10005ee88(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar6);
    if ((int)puVar5 == 1) {
      _swift_bridgeObjectRelease(puVar1[1]);
      _swift_bridgeObjectRelease(puVar1[3]);
      _swift_bridgeObjectRelease(puVar1[5]);
      _objc_release(puVar1[6]);
      _objc_release(puVar1[7]);
      _swift_bridgeObjectRelease(puVar1[9]);
      _objc_release(puVar1[10]);
      lVar4 = puVar1[0xc];
    }
    else {
      if ((int)puVar5 != 0) {
        return;
      }
      _swift_bridgeObjectRelease(puVar1[1]);
      _swift_bridgeObjectRelease(puVar1[3]);
      _objc_release(puVar1[6]);
      lVar7 = 0;
      FUN_10005cf80();
      (*pcVar9)((long)puVar1 + (long)*(int *)(lVar7 + 0x20),lVar4);
      plVar2 = (long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
      if (*plVar2 != 0) {
        _swift_release();
        _swift_release(plVar2[1]);
      }
      plVar2 = (long *)((long)puVar1 + (long)*(int *)(lVar7 + 0x2c));
      if (*plVar2 != 0) {
        _swift_release();
        _swift_release(plVar2[1]);
      }
      lVar8 = 0;
      FUN_10005e080();
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14) + 8));
      _objc_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18)));
      _objc_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x1c)));
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20) + 8));
      iVar3 = *(int *)(lVar8 + 0x24);
      FUN_10005fcd4(0);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
      lVar7 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar9)((long)puVar1 + (long)*(int *)(lVar7 + 0x30) + (long)iVar3,lVar4);
      _objc_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x28)));
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x2c) + 8));
      lVar4 = *(long *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30) + 8);
    }
    if (lVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)();
      return;
    }
  }
  return;
}



/* Entry: 100059ac4; end: 10005a877;  */

long FUN_100059ac4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar8 = 0;
  __s10Foundation4DateVMa();
  pcVar17 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
  (*pcVar17)(param_1,param_2,lVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  lVar9 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  puVar10 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar9);
  if ((int)puVar10 == 1) {
    uVar14 = *puVar2;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 1;
    goto LAB_100059ec4;
  }
  if ((int)puVar10 != 0) {
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    return param_1;
  }
  lVar11 = 0;
  FUN_10005ee88();
  puVar10 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar11);
  if ((int)puVar10 == 1) {
    uVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar14;
    uVar6 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar6;
    uVar20 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar20;
    uVar14 = puVar2[6];
    uVar15 = puVar2[7];
    puVar1[6] = uVar14;
    puVar1[7] = uVar15;
    uVar16 = puVar2[9];
    puVar1[8] = puVar2[8];
    puVar1[9] = uVar16;
    uVar18 = puVar2[10];
    puVar1[10] = uVar18;
    lVar8 = puVar2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar20);
    _objc_retain(uVar14);
    _objc_retain(uVar15);
    _swift_bridgeObjectRetain(uVar16);
    _objc_retain(uVar18);
    if (lVar8 == 1) {
      uVar14 = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xb] = uVar14;
      puVar1[0xd] = puVar2[0xd];
    }
    else {
      puVar1[0xb] = puVar2[0xb];
      puVar1[0xc] = lVar8;
      puVar1[0xd] = puVar2[0xd];
      _swift_bridgeObjectRetain();
    }
    uVar14 = 1;
LAB_100059eb4:
    _swift_storeEnumTagMultiPayload(puVar1,lVar11,uVar14);
  }
  else {
    if ((int)puVar10 == 0) {
      uVar14 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      uVar6 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      uVar20 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar20;
      uVar20 = puVar2[6];
      puVar1[6] = uVar20;
      lVar12 = 0;
      FUN_10005cf80();
      iVar7 = *(int *)(lVar12 + 0x20);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar6);
      _objc_retain(uVar20);
      (*pcVar17)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,lVar8);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28));
      plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
      if (*plVar4 == 0) {
        lVar19 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar19;
      }
      else {
        lVar19 = plVar4[1];
        *plVar3 = *plVar4;
        plVar3[1] = lVar19;
        _swift_retain();
        _swift_retain(lVar19);
      }
      plVar3 = (long *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c));
      plVar4 = (long *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
      if (*plVar4 == 0) {
        lVar12 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar12;
      }
      else {
        lVar12 = plVar4[1];
        *plVar3 = *plVar4;
        plVar3[1] = lVar12;
        _swift_retain();
        _swift_retain(lVar12);
      }
      lVar19 = 0;
      FUN_10005e080();
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x14));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x14));
      uVar14 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar14;
      uVar15 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x18));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x18)) = uVar15;
      uVar16 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x1c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x1c)) = uVar16;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x20));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x20));
      uVar6 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar6;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x24));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x24));
      uVar20 = 0;
      FUN_10005fcd4();
      _swift_bridgeObjectRetain(uVar14);
      _objc_retain(uVar15);
      _objc_retain(uVar16);
      _swift_bridgeObjectRetain(uVar6);
      puVar13 = puVar5;
      _swift_getEnumCaseMultiPayload(puVar5,uVar20);
      uVar14 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar14;
      _swift_bridgeObjectRetain();
      lVar12 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar17)((long)puVar10 + (long)*(int *)(lVar12 + 0x30),
                 (long)puVar5 + (long)*(int *)(lVar12 + 0x30),lVar8);
      _swift_storeEnumTagMultiPayload(puVar10,uVar20,(int)puVar13 == 1);
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x28)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x28));
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x2c));
      puVar5 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x2c));
      uVar14 = puVar5[1];
      *puVar10 = *puVar5;
      puVar10[1] = uVar14;
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar19 + 0x30));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x30));
      lVar8 = puVar2[1];
      _objc_retain();
      _swift_bridgeObjectRetain(uVar14);
      if (lVar8 == 1) {
        uVar14 = *puVar2;
        puVar10[1] = puVar2[1];
        *puVar10 = uVar14;
        puVar10[2] = puVar2[2];
      }
      else {
        *puVar10 = *puVar2;
        puVar10[1] = lVar8;
        puVar10[2] = puVar2[2];
        _swift_bridgeObjectRetain(lVar8);
      }
      uVar14 = 0;
      goto LAB_100059eb4;
    }
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  }
  uVar14 = 0;
LAB_100059ec4:
  _swift_storeEnumTagMultiPayload(puVar1,lVar9,uVar14);
  return param_1;
}



/* Entry: 10005a878; end: 10005a883;  */

void FUN_10005a878(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10005a884; end: 10005a903;  */

void FUN_10005a884(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    lVar1 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010005a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return;
}



/* Entry: 10005a904; end: 10005a90f;  */

void FUN_10005a904(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10005a910; end: 10005a997;  */

void FUN_10005a910(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar1 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010005a994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10005a998; end: 10005a9cf;  */

void FUN_10005a998(undefined8 param_1)

{
  if (lRam00000001000c6c00 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10009098c);
  return;
}



/* Entry: 10005a9d0; end: 10005aae3;  */

void FUN_10005a9d0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x00010005aa54();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10005aae4; end: 10005ab13;  */

void FUN_10005aae4(void)

{
  FUN_10005ab14(0x1000c6c40,0xff,FUN_10005a998,&UNK_10008c9f4);
  return;
}



/* Entry: 10005ab14; end: 10005ab7b;  */

void FUN_10005ab14(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10005ab7c; end: 10005abff;  */

void FUN_10005ab7c(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  func_0x000100059420();
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg();
  __s10Foundation4DateVACycfC(param_1);
  lVar2 = 0;
  FUN_10005a998();
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar3 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  uVar4 = 2;
  if ((param_2 & 1) != 0) {
    uVar4 = 3;
  }
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar3,uVar4);
  return;
}



/* Entry: 10005ac00; end: 10005acb7;  */

void FUN_10005ac00(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar2 = 0;
  FUN_10005a998();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(puVar4);
  iVar1 = *(int *)(lVar2 + 0x14);
  uVar3 = 0x1000c69e0;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  _swift_storeEnumTagMultiPayload(puVar4 + iVar1,uVar3,3);
  (*param_3)(puVar4);
  FUN_10005bac0(puVar4,FUN_10005a998);
  return;
}



/* Entry: 10005acb8; end: 10005acd7;  */

void FUN_10005acb8(void)

{
  FUN_100058960();
  return;
}



/* Entry: 10005acd8; end: 10005ad43;  */

void FUN_10005acd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s9WidgetKit22IntentTimelineProviderPAAE9relevanceAA0A9RelevanceVy0C0QzGyYaFTu_1000b0b40
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  plVar2 = plVar1;
  func_0x000100059420();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10005ad44;
                    /* WARNING: Could not recover jumptable at 0x00010008570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s9WidgetKit22IntentTimelineProviderPAAE9relevanceAA0A9RelevanceVy0C0QzGyYaF_1000b0b38)
            (param_1,plVar2,param_3);
  return;
}



/* Entry: 10005ad44; end: 10005ada3;  */

void FUN_10005ad44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010005ad7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10005ada4; end: 10005ae17;  */

void FUN_10005ada4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005ae18; end: 10005ae5b;  */

void FUN_10005ae18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lStack_f0;
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
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  __s10Foundation4DateVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lStack_b8 = *(long *)(unaff_x20 + 0x10);
  pcStack_80 = *(code **)(unaff_x20 + 0x18);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_d0 = unaff_x20 + (uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff));
  lVar5 = 0x1000c69e0;
  lStack_b0 = param_1;
  func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
  lStack_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_d8 = (long)&lStack_f0 - extraout_x8;
  FUN_10005e080();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = ((long)&lStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_f0 = lVar6;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x1000c6c50;
  lStack_a8 = lVar6;
  func_0x0001000100d0(0x1000c6c50,&UNK_10008cac0);
  lStack_98 = *(long *)(lVar5 + -8);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = lVar6 - extraout_x8_02;
  lVar1 = 0;
  lStack_a0 = lVar6;
  __s10Foundation8CalendarV9ComponentOMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar6 = lVar6 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation8CalendarVMa();
  lStack_c8 = *(long *)(lVar5 + -8);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar10 = lVar6 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar5 = lVar11 - extraout_x12;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar15 + 0x40));
  lVar8 = lVar5 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar8 - extraout_x12_01;
  __s10Foundation4DateVACycfC(lVar14);
  __s10Foundation8CalendarV7currentACvgZ(lVar10);
  (**(code **)(lVar12 + 0x68))
            (lVar6,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_1000b19d0,
             lVar1);
  __s10Foundation8CalendarV4date8byAdding5value2to18wrappingComponentsAA4DateVSgAC9ComponentO_SiAJSbtF
            (lVar5,lVar6,0xf,lVar14,0);
  (**(code **)(lVar12 + 8))(lVar6,lVar1);
  (**(code **)(lStack_c8 + 8))(lVar10,lStack_c0);
  FUN_10005b158(lVar5,lVar11);
  pcVar9 = *(code **)(lVar15 + 0x30);
  lVar5 = lVar11;
  (*pcVar9)(lVar11,1,lVar2);
  if ((int)lVar5 == 1) {
    (**(code **)(lVar15 + 0x10))(lVar8,lVar14,lVar2);
    lVar5 = lVar11;
    (*pcVar9)(lVar11,1,lVar2);
    if ((int)lVar5 != 1) {
      func_0x00010005b1a8(lVar11,0x1000c4130,&UNK_10008c520);
    }
  }
  else {
    (**(code **)(lVar15 + 0x20))(lVar8,lVar11,lVar2);
  }
  lVar5 = lStack_b8;
  _swift_beginAccess(lStack_b8 + 0x10,auStack_78,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_weakLoadStrong();
  lVar1 = 0x1000c6c58;
  func_0x0001000100d0(0x1000c6c58,&UNK_10008cad0);
  lVar12 = 0;
  FUN_10005a998();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  uVar13 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  _swift_allocObject(lVar1,uVar13 + *(long *)(*(long *)(lVar12 + -8) + 0x48),uVar7 | 7);
  lVar10 = lStack_b0;
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  func_0x00010005bafc(lStack_b0,lVar1 + uVar13,FUN_10005a998);
  lVar11 = lStack_a8;
  lVar6 = lStack_d8;
  if (lVar5 == 0) {
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(lStack_a8,lVar8);
    uVar3 = 0x1000c6c40;
    FUN_10005ab14(0x1000c6c40,0xff,FUN_10005a998,&UNK_10008c9f4);
    lVar5 = lStack_a0;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_a0,lVar1,lVar11,lVar12,uVar3);
    (*pcStack_80)(lVar5);
    (**(code **)(lStack_98 + 8))(lVar5,lStack_90);
    pcVar9 = *(code **)(lVar15 + 8);
  }
  else {
    func_0x00010005b1e8(lVar10 + *(int *)(lVar12 + 0x14),lStack_d8,0x1000c69e0,&UNK_10008c9c0);
    lVar10 = lVar6;
    _swift_getEnumCaseMultiPayload(lVar6,lStack_e0);
    lVar11 = lVar1;
    if ((int)lVar10 == 0) {
      uVar3 = 0;
      FUN_10005ee88(0);
      lVar4 = lVar6;
      _swift_getEnumCaseMultiPayload(lVar6,uVar3);
      lVar10 = lStack_f0;
      if ((int)lVar4 == 0) {
        func_0x00010005bb40(lVar6,lStack_f0,FUN_10005e080);
        lVar11 = lVar10;
        FUN_10005b230(lVar10);
        _swift_release(lVar1);
        func_0x00010005bac0(lVar10,FUN_10005e080);
      }
      else {
        func_0x00010005bac0(lVar6,FUN_10005ee88);
      }
    }
    else {
      func_0x00010005b1a8(lVar6,0x1000c69e0,&UNK_10008c9c0);
    }
    _swift_bridgeObjectRetain(lVar11);
    lVar1 = lStack_a8;
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(lStack_a8,lVar8);
    uVar3 = 0x1000c6c40;
    FUN_10005ab14(0x1000c6c40,0xff,FUN_10005a998,&UNK_10008c9f4);
    lVar6 = lStack_a0;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_a0,lVar11,lVar1,lVar12,uVar3);
    lVar1 = lStack_e8;
    __s10Foundation4DateVACycfC(lStack_e8);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lStack_d0);
    pcVar9 = *(code **)(lVar15 + 8);
    (*pcVar9)(lVar1,lVar2);
    (*pcStack_80)(lVar6);
    _swift_bridgeObjectRelease(lVar11);
    _swift_release(lVar5);
    (**(code **)(lStack_98 + 8))(lVar6,lStack_90);
  }
  (*pcVar9)(lVar8,lVar2);
  (*pcVar9)(lVar14,lVar2);
  return;
}



/* Entry: 10005ae5c; end: 10005ae93;  */

void FUN_10005ae5c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10005ae94();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10005ae94; end: 10005b00f;  */

undefined * FUN_10005ae94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10005b010);
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
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x1000c6c58;
    func_0x0001000100d0(0x1000c6c58,&UNK_10008cad0);
    lVar5 = 0;
    FUN_10005a998();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10005b008);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10005b00c);
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
  FUN_10005a998();
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



/* Entry: 10005b010; end: 10005b117;  */

undefined * FUN_10005b010(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10005b118);
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
    puVar3 = (undefined *)0x1000c69b8;
    func_0x0001000100d0(0x1000c69b8,&UNK_10008c830);
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
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_1000b1180);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 10005b118; end: 10005b157;  */

void FUN_10005b118(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c6c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008cddc;
  _swift_getWitnessTable(&UNK_10008cddc,&UNK_1000b5668);
  puRam00000001000c6c48 = puVar1;
  return;
}



/* Entry: 10005b158; end: 10005b22f;  */

undefined8 FUN_10005b158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10005b230; end: 10005babf;  */

undefined * FUN_10005b230(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar19;
  code *pcVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  double dVar24;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  
  lVar10 = 0;
  __s10Foundation8CalendarVMa();
  lStack_1b8 = *(long *)(lVar10 + -8);
  lStack_1b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_1b8 + 0x40));
  lVar10 = (long)&lStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  lStack_1c0 = lVar10;
  FUN_10005fcd4();
  lStack_f8 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar10 - extraout_x12;
  lVar11 = 0;
  lStack_108 = lVar10;
  FUN_10005a998();
  lStack_118 = *(long *)(lVar11 + -8);
  lStack_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_118 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  lStack_98 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_98 + 0x40));
  lVar18 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = lVar18;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar18 = lVar18 - extraout_x12_00;
  lStack_a0 = lVar18;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lStack_e8 = lVar18 - extraout_x12_01;
  __s10Foundation4DateVACycfC();
  puStack_90 = PTR___swiftEmptyArrayStorage_1000b14d0;
  FUN_10005ae5c(0,0x1e,0);
  puVar13 = puStack_90;
  lVar18 = 0;
  FUN_10005cf80();
  lStack_130 = (long)*(int *)(lVar18 + 0x20);
  lVar18 = 0;
  FUN_10005e080();
  uVar19 = 0;
  uVar21 = 0;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar18 + 0x14));
  uStack_140 = *(undefined8 *)(param_1 + *(int *)(lVar18 + 0x18));
  uStack_148 = *(undefined8 *)(param_1 + *(int *)(lVar18 + 0x1c));
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar18 + 0x20));
  lStack_150 = param_1 + *(int *)(lVar18 + 0x24);
  uStack_158 = *(undefined8 *)(param_1 + *(int *)(lVar18 + 0x28));
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar18 + 0x2c));
  uStack_160 = *puVar1;
  uVar5 = puVar1[1];
  uStack_170 = *puVar2;
  uVar17 = puVar2[1];
  uStack_180 = *puVar3;
  uStack_188 = puVar3[1];
  uStack_198 = 1;
  uStack_1a0 = 0;
  lStack_1a8 = lVar10;
  uStack_178 = uVar17;
  uStack_168 = uVar5;
  lStack_138 = lVar18;
  lStack_120 = lVar11;
  lStack_f0 = param_1;
  do {
    lVar7 = lStack_f0;
    uStack_b8 = uVar19;
    __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar10,(double)uVar19);
    lVar8 = lStack_a0;
    dVar24 = (double)uVar21 * -60.0;
    __s10Foundation4DateV18addingTimeIntervalyACSdF(lStack_a0);
    lVar18 = lStack_128;
    __s10Foundation4DateVACycfC(lStack_128);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar8);
    pcVar20 = *(code **)(lStack_98 + 8);
    (*pcVar20)(lVar18,lVar11);
    uStack_c0 = uVar21;
    puStack_b0 = puVar13;
    pcStack_a8 = pcVar20;
    if (dVar24 < 60.0) {
      puVar12 = (undefined *)0x776f6e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x776f6e,0xe300000000000000);
      lVar18 = 0;
      __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF();
      puVar13 = puVar12;
      lVar11 = lVar18;
      _SCLocalizedString();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(lVar18);
      if (puVar13 == (undefined *)0x0) goto LAB_10005b7f0;
      puVar22 = puVar13;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
LAB_10005b740:
      _objc_release(puVar13);
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1000c21a8;
      if ((dVar24 < 60.0) || (3600.0 <= dVar24)) {
        if ((dVar24 < 3600.0) || (86400.0 <= dVar24)) {
          if (dVar24 < 86400.0) goto LAB_10005b7f0;
          _objc_allocWithZone();
          func_0x000100086bc0();
          lVar18 = lStack_1c0;
          puVar12 = puVar13;
          __s10Foundation8CalendarV7currentACvgZ(lStack_1c0);
          __s10Foundation8CalendarV19_bridgeToObjectiveCSo10NSCalendarCyF();
          lVar11 = lStack_1b0;
          (**(code **)(lStack_1b8 + 8))(lVar18);
          func_0x0001000872c0(puVar13);
          _objc_release(puVar12);
          func_0x0001000874a0(puVar13);
          func_0x000100087260(puVar13);
          puVar12 = puVar13;
          func_0x000100087780(dVar24);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_allocWithZone();
          func_0x000100086bc0();
          lVar18 = lStack_1c0;
          puVar12 = puVar13;
          __s10Foundation8CalendarV7currentACvgZ(lStack_1c0);
          __s10Foundation8CalendarV19_bridgeToObjectiveCSo10NSCalendarCyF();
          lVar11 = lStack_1b0;
          (**(code **)(lStack_1b8 + 8))(lVar18);
          func_0x0001000872c0(puVar13);
          _objc_release(puVar12);
          func_0x0001000874a0(puVar13);
          func_0x000100087260(puVar13);
          puVar12 = puVar13;
          func_0x000100087780(dVar24);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_allocWithZone();
        func_0x000100086bc0();
        lVar18 = lStack_1c0;
        puVar12 = puVar13;
        __s10Foundation8CalendarV7currentACvgZ(lStack_1c0);
        __s10Foundation8CalendarV19_bridgeToObjectiveCSo10NSCalendarCyF();
        lVar11 = lStack_1b0;
        (**(code **)(lStack_1b8 + 8))(lVar18);
        func_0x0001000872c0(puVar13);
        _objc_release(puVar12);
        func_0x0001000874a0(puVar13);
        func_0x000100087260(puVar13);
        puVar12 = puVar13;
        func_0x000100087780(dVar24);
        _objc_retainAutoreleasedReturnValue();
      }
      if (puVar12 != (undefined *)0x0) {
        puVar22 = puVar12;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(puVar12);
        goto LAB_10005b740;
      }
      _objc_release(puVar13);
LAB_10005b7f0:
      puVar22 = (undefined *)0x0;
      lVar11 = 0;
    }
    lVar10 = lVar10 + *(int *)(lStack_110 + 0x14);
    func_0x00010005bafc(lVar7,lVar10,FUN_10005cf80);
    lVar7 = lStack_108;
    func_0x00010005bafc(lStack_150,lStack_108,FUN_10005fcd4);
    lVar8 = lStack_100;
    lVar18 = lStack_138;
    puStack_c8 = (undefined *)0x0;
    if (lVar11 != 0) {
      puStack_c8 = puVar22;
    }
    lStack_d0 = -0x2000000000000000;
    if (lVar11 != 0) {
      lStack_d0 = lVar11;
    }
    plVar4 = (long *)(lVar10 + *(int *)(lStack_138 + 0x24));
    func_0x00010005bb40(lVar7,lStack_100,FUN_10005fcd4);
    lVar7 = lStack_f8;
    lVar14 = lVar8;
    _swift_getEnumCaseMultiPayload(lVar8,lStack_f8);
    uVar23 = *(undefined8 *)(lVar8 + 8);
    _swift_bridgeObjectRetain(uVar5);
    uVar16 = uStack_140;
    _objc_retain();
    uVar15 = uStack_148;
    uStack_d8 = uVar16;
    _objc_retain();
    uStack_e0 = uVar15;
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRelease(uVar23);
    lVar11 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    lVar9 = lStack_d0;
    iVar6 = *(int *)(lVar11 + 0x30);
    *plVar4 = (long)puStack_c8;
    plVar4[1] = lVar9;
    lVar11 = lStack_120;
    (**(code **)(lStack_98 + 0x20))((long)plVar4 + (long)iVar6,lStack_a0,lStack_120);
    _swift_storeEnumTagMultiPayload(plVar4,lVar7,(int)lVar14 == 1);
    (*pcStack_a8)(lVar8 + iVar6,lVar11);
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar18 + 0x14));
    *puVar1 = uStack_160;
    puVar1[1] = uVar5;
    uVar16 = uStack_e0;
    *(undefined8 *)(lVar10 + *(int *)(lVar18 + 0x18)) = uStack_d8;
    *(undefined8 *)(lVar10 + *(int *)(lVar18 + 0x1c)) = uVar16;
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar18 + 0x20));
    *puVar1 = uStack_170;
    puVar1[1] = uVar17;
    uVar23 = uStack_158;
    *(undefined8 *)(lVar10 + *(int *)(lVar18 + 0x28)) = uStack_158;
    uVar15 = uStack_188;
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar18 + 0x2c));
    *puVar1 = uStack_180;
    puVar1[1] = uVar15;
    uVar16 = uStack_1a0;
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar18 + 0x30));
    puVar1[1] = uStack_198;
    *puVar1 = uVar16;
    puVar1[2] = 0;
    uVar16 = 0;
    FUN_10005ee88(0);
    _swift_storeEnumTagMultiPayload(lVar10,uVar16,0);
    uVar16 = 0x1000c69e0;
    func_0x0001000100d0(0x1000c69e0,&UNK_10008c9c0);
    _swift_storeEnumTagMultiPayload(lVar10,uVar16,0);
    puVar13 = puStack_b0;
    puStack_90 = puStack_b0;
    uVar19 = *(ulong *)(puStack_b0 + 0x10);
    uVar21 = *(ulong *)(puStack_b0 + 0x18);
    _objc_retain(uVar23);
    _swift_bridgeObjectRetain(uVar15);
    if (uVar21 >> 1 <= uVar19) {
      FUN_10005ae5c(1 < uVar21,uVar19 + 1,1);
      puVar13 = puStack_90;
    }
    lVar10 = lStack_1a8;
    uVar21 = uStack_c0 + 1;
    *(ulong *)(puVar13 + 0x10) = uVar19 + 1;
    func_0x00010005bb40(lStack_1a8,
                        puVar13 + *(long *)(lStack_118 + 0x48) * uVar19 +
                                  ((ulong)*(byte *)(lStack_118 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lStack_118 + 0x50) ^ 0xffffffffffffffff)),
                        FUN_10005a998);
    uVar19 = uStack_b8 + 0x3c;
    if (uVar21 == 0x1e) {
      (*pcStack_a8)(lStack_e8,lVar11);
      return puVar13;
    }
  } while( true );
}



/* Entry: 10005bac0; end: 10005bb83;  */

undefined8 FUN_10005bac0(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10005bb84; end: 10005bbd7;  */

void FUN_10005bb84(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_1000b1518)();
  return;
}



/* Entry: 10005bbd8; end: 10005bd5b;  */

void FUN_10005bbd8(double param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  __s10Foundation4DateVACycfC(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV17timeIntervalSinceySdACF();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (60.0 <= param_1) {
    bVar1 = false;
    if ((60.0 <= param_1) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 < 3600.0;
    }
    if (bVar1) {
      uVar3 = 0x40;
    }
    else {
      bVar1 = false;
      if ((3600.0 <= param_1) && (bVar1 = false, !NAN(param_1))) {
        bVar1 = param_1 < 86400.0;
      }
      if (bVar1) {
        uVar3 = 0x20;
      }
      else {
        if (param_1 < 86400.0) {
          return;
        }
        uVar3 = 0x10;
      }
    }
    FUN_10005bd5c(param_1,uVar3);
  }
  else {
    lVar4 = 0x776f6e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x776f6e,0xe300000000000000);
    uVar3 = 0;
    __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
    lVar2 = lVar4;
    _SCLocalizedString(lVar4,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar3);
    if (lVar2 != 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar2);
      _objc_release(lVar2);
    }
  }
  return;
}



/* Entry: 10005bd5c; end: 10005be83;  */

undefined1  [16] FUN_10005bd5c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar1 = 0;
  __s10Foundation8CalendarVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = PTR__OBJC_CLASS___NSDateComponentsFormatter_1000c21a8;
  _objc_allocWithZone();
  func_0x000100086bc0();
  puVar3 = puVar2;
  __s10Foundation8CalendarV7currentACvgZ
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation8CalendarV19_bridgeToObjectiveCSo10NSCalendarCyF();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x0001000872c0(puVar2);
  _objc_release(puVar3);
  func_0x0001000874a0(puVar2);
  func_0x000100087260(puVar2);
  puVar3 = puVar2;
  func_0x000100087780(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
    puVar4 = (undefined *)0x0;
    lVar1 = 0;
  }
  else {
    puVar4 = puVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  auVar6._8_8_ = lVar1;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 10005be84; end: 10005c033;  */

ulong FUN_10005be84(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  func_0x000100086a20();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 != 0) {
    uVar3 = 0;
    func_0x00010005c438();
    uVar4 = unaff_x20;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(unaff_x20);
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10005bfec);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
          _objc_retain();
          uVar8 = uVar3;
        }
        else {
          uVar5 = uVar10;
          uVar8 = uVar4;
          FUN_100010684();
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10005bfe8);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000100087900();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        if (uVar6 != 0) {
          uVar7 = uVar6;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar6);
          if ((uVar7 == param_1) && (uVar8 == param_2)) {
            _swift_bridgeObjectRelease(uVar4);
            uVar4 = uVar8;
LAB_10005bfdc:
            _swift_bridgeObjectRelease(uVar4);
            return uVar5;
          }
          uVar3 = uVar8;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar7,uVar8,param_1,param_2,0);
          _swift_bridgeObjectRelease(uVar8);
          if ((uVar7 & 1) != 0) goto LAB_10005bfdc;
        }
        _objc_release(uVar5);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  return 0;
}



/* Entry: 10005c034; end: 10005c23b;  */

undefined1  [16] FUN_10005c034(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong unaff_x20;
  ulong uVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  undefined8 uStack_60;
  ulong uStack_58;
  
  uVar9 = unaff_x20;
  func_0x000100087060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  if (uVar9 != 0) {
    uVar1 = uVar9;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar9);
    uVar9 = uVar1;
    uVar10 = param_2;
    __sSS5countSivg(uVar1,param_2);
    if (0 < (long)uVar9) {
      puVar2 = &UNK_1000b5470;
      _swift_allocObject(&UNK_1000b5470,0x20,7);
      puVar11 = (ulong *)(puVar2 + 0x10);
      *puVar11 = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0xe000000000000000;
      uVar9 = uVar1;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar9 = param_2 >> 0x38 & 0xf;
      }
      uVar8 = (uint)(uVar1 >> 0x3b) & 1;
      if ((param_2 & 0x1000000000000000) == 0) {
        uVar8 = 1;
      }
      uVar10 = 7;
      if (uVar8 == 0) {
        uVar10 = 0xb;
      }
      puVar3 = &UNK_1000b5498;
      _swift_allocObject(&UNK_1000b5498,0x18,7);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      uStack_60 = 0xf;
      puVar4 = &UNK_1000b54c0;
      uStack_70 = param_2;
      uStack_58 = uVar10 | uVar9 << 0x10;
      _swift_allocObject(&UNK_1000b54c0,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      _swift_retain(puVar3);
      _swift_retain(puVar2);
      uVar5 = 0x1000c6ce0;
      func_0x0001000100d0(0x1000c6ce0,&UNK_10008cb10);
      uVar6 = uVar5;
      FUN_100010174();
      uVar7 = uVar6;
      func_0x00010005c3e8();
      __sSy10FoundationE19enumerateSubstrings2in7options_yqd___So26NSStringEnumerationOptionsVySSSg_SnySS5IndexVGAJSbztctSXRd__AI5BoundRtd__lF
                (&uStack_60,2,0x10005c3c4,puVar4,PTR___sSSN_1000b1180,uVar5,uVar6,uVar7);
      _swift_bridgeObjectRelease(param_2);
      _swift_release(puVar4);
      _swift_beginAccess(puVar11,auStack_78,0,0);
      uVar9 = *puVar11;
      uVar10 = *(ulong *)(puVar2 + 0x18);
      _swift_bridgeObjectRetain(uVar10);
      _swift_release(puVar2);
      _swift_release(puVar3);
      goto LAB_10005c218;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  func_0x000100087920();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 == 0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    uVar9 = unaff_x20;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(unaff_x20);
  }
LAB_10005c218:
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



/* Entry: 10005c23c; end: 10005c25f;  */

void FUN_10005c23c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005c260; end: 10005c26f;  */

void FUN_10005c260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005c270; end: 10005c397;  */

void FUN_10005c270(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *in_x6;
  long in_x7;
  long in_stack_00000000;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    if (((param_1 == 0x20) && (param_2 == -0x1f00000000000000)) ||
       (uVar2 = param_1,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (param_1,param_2,0x20,0xe100000000000000,0), (uVar2 & 1) != 0)) {
      _swift_beginAccess(in_x7 + 0x10,auStack_58,0,0);
      if (*(long *)(in_x7 + 0x10) < 3) {
        _swift_beginAccess(in_stack_00000000 + 0x10,auStack_70,0x21,0);
        __sSS6appendyySSF(param_1,param_2);
        _swift_endAccess(auStack_70);
      }
      else {
        *in_x6 = 1;
      }
    }
    else {
      _swift_beginAccess(in_stack_00000000 + 0x10,auStack_58,0x21,0);
      __sSS6appendyySSF(param_1,param_2);
      _swift_endAccess(auStack_58);
      _swift_beginAccess(in_x7 + 0x10,auStack_58,1,0);
      if (SCARRY8(*(long *)(in_x7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10005c398);
        (*pcVar1)();
      }
      *(long *)(in_x7 + 0x10) = *(long *)(in_x7 + 0x10) + 1;
    }
  }
  return;
}



/* Entry: 10005c398; end: 10005c47b;  */

void FUN_10005c398(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10005c47c; end: 10005c487;  */

undefined8 * FUN_10005c47c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10005c488; end: 10005c4bb;  */

undefined8 * FUN_10005c488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10005c4bc; end: 10005c50f;  */

undefined8 * FUN_10005c4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10005c510; end: 10005c54b;  */

undefined8 * FUN_10005c510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10005c54c; end: 10005c647;  */

int FUN_10005c54c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 10005c648; end: 10005c6a3;  */

void FUN_10005c648(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(param_1[1]);
  return;
}



/* Entry: 10005c6a4; end: 10005c6ff;  */

undefined8 * FUN_10005c6a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10005c700; end: 10005c73b;  */

undefined8 * FUN_10005c700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10005c73c; end: 10005c7cf;  */

int FUN_10005c73c(ulong *param_1,int param_2)

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



/* Entry: 10005c7d0; end: 10005c913;  */

long * FUN_10005c7d0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar6 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar6;
    lVar9 = param_2[6];
    param_1[6] = lVar9;
    iVar5 = *(int *)(param_3 + 0x20);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar3);
    _objc_retain(lVar9);
    (*pcVar10)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    iVar5 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    plVar1 = (long *)((long)param_1 + (long)iVar5);
    plVar2 = (long *)((long)param_2 + (long)iVar5);
    if (*plVar2 == 0) {
      lVar8 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar8;
    }
    else {
      lVar8 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar8;
      _swift_retain();
      _swift_retain(lVar8);
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    if (*param_2 == 0) {
      lVar8 = *param_2;
      plVar1[1] = param_2[1];
      *plVar1 = lVar8;
    }
    else {
      lVar8 = param_2[1];
      *plVar1 = *param_2;
      plVar1[1] = lVar8;
      _swift_retain();
      _swift_retain(lVar8);
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10005c914; end: 10005c9b7;  */

void FUN_10005c914(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  iVar2 = *(int *)(param_2 + 0x20);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar2,lVar3);
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x28));
  if (*plVar1 != 0) {
    _swift_release();
    _swift_release(plVar1[1]);
  }
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x2c));
  if (*plVar1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(plVar1[1]);
    return;
  }
  return;
}



/* Entry: 10005c9b8; end: 10005cacf;  */

undefined8 * FUN_10005c9b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  uVar7 = param_2[6];
  param_1[6] = uVar7;
  iVar5 = *(int *)(param_3 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar7);
  (*pcVar8)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  iVar5 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  plVar1 = (long *)((long)param_1 + (long)iVar5);
  plVar2 = (long *)((long)param_2 + (long)iVar5);
  if (*plVar2 == 0) {
    lVar6 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar6;
  }
  else {
    lVar6 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar6;
    _swift_retain();
    _swift_retain(lVar6);
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  if (*plVar2 == 0) {
    lVar6 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar6;
  }
  else {
    lVar6 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar6;
    _swift_retain();
    _swift_retain(lVar6);
  }
  return param_1;
}



/* Entry: 10005cad0; end: 10005cc8f;  */

undefined8 * FUN_10005cad0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar5 = param_1[6];
  param_1[6] = param_2[6];
  _objc_retain();
  _objc_release(uVar5);
  iVar3 = *(int *)(param_3 + 0x20);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  lVar6 = *plVar1;
  lVar4 = *plVar2;
  if (lVar6 == 0) {
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      lVar4 = plVar2[1];
      plVar1[1] = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      goto LAB_10005cc00;
    }
  }
  else {
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      _swift_retain();
      _swift_release(lVar6);
      lVar4 = plVar1[1];
      plVar1[1] = plVar2[1];
      _swift_retain();
      _swift_release(lVar4);
      goto LAB_10005cc00;
    }
    FUN_10005cc90(plVar1);
  }
  lVar4 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar4;
LAB_10005cc00:
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar6 = *plVar1;
  lVar4 = *plVar2;
  if (lVar6 == 0) {
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      lVar4 = plVar2[1];
      plVar1[1] = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      return param_1;
    }
  }
  else {
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      _swift_retain();
      _swift_release(lVar6);
      lVar4 = plVar1[1];
      plVar1[1] = plVar2[1];
      _swift_retain();
      _swift_release(lVar4);
      return param_1;
    }
    FUN_10005cc90(plVar1);
  }
  lVar4 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar4;
  return param_1;
}



/* Entry: 10005cc90; end: 10005ccbf;  */

undefined8 * FUN_10005cc90(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  return param_1;
}



/* Entry: 10005ccc0; end: 10005cd4b;  */

undefined8 * FUN_10005ccc0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[6] = param_2[6];
  iVar1 = *(int *)(param_3 + 0x20);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar5 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  return param_1;
}



/* Entry: 10005cd4c; end: 10005ce77;  */

undefined8 * FUN_10005cd4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  uVar5 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar5);
  iVar3 = *(int *)(param_3 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x28))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  plVar1 = (long *)((long)param_1 + (long)iVar3);
  plVar2 = (long *)((long)param_2 + (long)iVar3);
  if (*plVar1 != 0) {
    if (*plVar2 != 0) {
      *plVar1 = *plVar2;
      _swift_release();
      lVar6 = plVar1[1];
      plVar1[1] = plVar2[1];
      _swift_release(lVar6);
      goto LAB_10005ce18;
    }
    FUN_10005cc90(plVar1);
  }
  lVar6 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar6;
LAB_10005ce18:
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  if (*plVar1 != 0) {
    if (*plVar2 != 0) {
      *plVar1 = *plVar2;
      _swift_release();
      lVar6 = plVar1[1];
      plVar1[1] = plVar2[1];
      _swift_release(lVar6);
      return param_1;
    }
    FUN_10005cc90(plVar1);
  }
  lVar6 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar6;
  return param_1;
}



/* Entry: 10005ce78; end: 10005ce83;  */

void FUN_10005ce78(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10005ce84; end: 10005ceff;  */

ulong FUN_10005ce84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  __s10Foundation4DateVMa();
  uVar2 = param_1 + *(int *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010005cefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 10005cf00; end: 10005cf0b;  */

void FUN_10005cf00(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10005cf0c; end: 10005cf7f;  */

void FUN_10005cf0c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010005cf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x20),param_2,param_2,lVar1);
  return;
}



/* Entry: 10005cf80; end: 10005cfb7;  */

void FUN_10005cf80(undefined8 param_1)

{
  if (lRam00000001000c6d48 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090b04);
  return;
}



/* Entry: 10005cfb8; end: 10005d053;  */

void FUN_10005cfb8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10008cbf8;
  puStack_58 = &UNK_10008cc10;
  puStack_50 = &UNK_10008cc28;
  puStack_48 = &UNK_10008cc40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10008cc58;
    puStack_30 = &UNK_10008cc10;
    puStack_28 = &UNK_10008cc10;
    _swift_initStructMetadata(param_1,0x100,8,&puStack_60,param_1 + 0x10);
  }
  return;
}



/* Entry: 10005d054; end: 10005d063;  */

undefined8 * FUN_10005d054(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10005d064; end: 10005d2f7;  */

long * FUN_10005d064(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar14 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar14;
    lVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar5;
    lVar9 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar9;
    lVar17 = param_2[6];
    param_1[6] = lVar17;
    lVar9 = 0;
    FUN_10005cf80();
    iVar8 = *(int *)(lVar9 + 0x20);
    lVar10 = 0;
    __s10Foundation4DateVMa();
    pcVar18 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar5);
    _objc_retain(lVar17);
    (*pcVar18)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,lVar10);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x24));
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x28));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x28));
    if (*plVar2 == 0) {
      lVar14 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar14;
    }
    else {
      lVar14 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar14;
      _swift_retain();
      _swift_retain(lVar14);
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    if (*plVar2 == 0) {
      lVar14 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar14;
    }
    else {
      lVar14 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar14;
      _swift_retain();
      _swift_retain(lVar14);
    }
    iVar8 = *(int *)(param_3 + 0x18);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    uVar15 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar15;
    iVar8 = *(int *)(param_3 + 0x20);
    uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar16;
    puVar3 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar4 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar6 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar6;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar11 = 0;
    FUN_10005fcd4(0);
    _swift_bridgeObjectRetain(uVar19);
    _objc_retain(uVar15);
    _objc_retain(uVar16);
    _swift_bridgeObjectRetain(uVar6);
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,uVar11);
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    _swift_bridgeObjectRetain();
    lVar14 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    (*pcVar18)((long)puVar3 + (long)*(int *)(lVar14 + 0x30),
               (long)puVar4 + (long)*(int *)(lVar14 + 0x30),lVar10);
    _swift_storeEnumTagMultiPayload(puVar3,uVar11,(int)puVar12 == 1);
    iVar8 = *(int *)(param_3 + 0x2c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    puVar3 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar4 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar19 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar19;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar14 = puVar4[1];
    _objc_retain();
    _swift_bridgeObjectRetain(uVar19);
    if (lVar14 == 1) {
      uVar19 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar19;
      puVar3[2] = puVar4[2];
    }
    else {
      *puVar3 = *puVar4;
      puVar3[1] = lVar14;
      puVar3[2] = puVar4[2];
      _swift_bridgeObjectRetain(lVar14);
    }
  }
  else {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar13 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10005d2f8; end: 10005d45f;  */

void FUN_10005d2f8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  lVar4 = 0;
  FUN_10005cf80();
  iVar3 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 8);
  (*pcVar6)(param_1 + iVar3,lVar5);
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x28));
  if (*plVar1 != 0) {
    _swift_release();
    _swift_release(plVar1[1]);
  }
  plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x2c));
  if (*plVar1 != 0) {
    _swift_release();
    _swift_release(plVar1[1]);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  lVar2 = param_1 + *(int *)(param_2 + 0x24);
  FUN_10005fcd4(0);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar6)(lVar2 + *(int *)(lVar4 + 0x30),lVar5);
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  if (*(long *)(param_1 + *(int *)(param_2 + 0x30) + 8) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)();
  return;
}



/* Entry: 10005d460; end: 10005daaf;  */

undefined8 * FUN_10005d460(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  uVar15 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar13 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  uVar13 = param_2[6];
  param_1[6] = uVar13;
  lVar7 = 0;
  FUN_10005cf80();
  iVar6 = *(int *)(lVar7 + 0x20);
  lVar8 = 0;
  __s10Foundation4DateVMa();
  pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar5);
  _objc_retain(uVar13);
  (*pcVar14)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
  if (*plVar2 == 0) {
    lVar10 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar10;
  }
  else {
    lVar10 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar10;
    _swift_retain();
    _swift_retain(lVar10);
  }
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
  if (*plVar2 == 0) {
    lVar7 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar7;
  }
  else {
    lVar7 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar7;
    _swift_retain();
    _swift_retain(lVar7);
  }
  iVar6 = *(int *)(param_3 + 0x18);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  uVar11 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar11;
  iVar6 = *(int *)(param_3 + 0x20);
  uVar12 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar12;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar5 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar5;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar13 = 0;
  FUN_10005fcd4(0);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar5);
  puVar9 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,uVar13);
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  _swift_bridgeObjectRetain();
  lVar7 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar14)((long)puVar3 + (long)*(int *)(lVar7 + 0x30),(long)puVar4 + (long)*(int *)(lVar7 + 0x30)
             ,lVar8);
  _swift_storeEnumTagMultiPayload(puVar3,uVar13,(int)puVar9 == 1);
  iVar6 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar15 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar15;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar7 = param_2[1];
  _objc_retain();
  _swift_bridgeObjectRetain(uVar15);
  if (lVar7 == 1) {
    uVar15 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar15;
    puVar3[2] = param_2[2];
  }
  else {
    *puVar3 = *param_2;
    puVar3[1] = lVar7;
    puVar3[2] = param_2[2];
    _swift_bridgeObjectRetain(lVar7);
  }
  return param_1;
}



/* Entry: 10005dab0; end: 10005dae3;  */

undefined8 FUN_10005dab0(undefined8 param_1)

{
  FUN_10005c47c();
  return param_1;
}



/* Entry: 10005dae4; end: 10005df13;  */

undefined8 * FUN_10005dae4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[6] = param_2[6];
  lVar4 = 0;
  FUN_10005cf80();
  iVar1 = *(int *)(lVar4 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar8 = *(code **)(*(long *)(lVar5 + -8) + 0x20);
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar6 = 0;
  FUN_10005fcd4(0);
  puVar7 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,uVar6);
  uVar9 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar9;
  lVar4 = 0x1000c69c8;
  func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
  (*pcVar8)((long)puVar2 + (long)*(int *)(lVar4 + 0x30),(long)puVar3 + (long)*(int *)(lVar4 + 0x30),
            lVar5);
  _swift_storeEnumTagMultiPayload(puVar2,uVar6,(int)puVar7 == 1);
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  puVar2[2] = param_2[2];
  uVar6 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar6;
  return param_1;
}



/* Entry: 10005df14; end: 10005df1f;  */

void FUN_10005df14(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10005df20; end: 10005dfcb;  */

ulong FUN_10005df20(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_10005cf80();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    lVar1 = 0;
    FUN_10005fcd4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010005dfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return param_1;
}



/* Entry: 10005dfcc; end: 10005dfd7;  */

void FUN_10005dfcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10005dfd8; end: 10005e07f;  */

void FUN_10005dfd8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_10005cf80();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    lVar1 = 0;
    FUN_10005fcd4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x00010005e07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar1);
  return;
}



/* Entry: 10005e080; end: 10005e093;  */

void FUN_10005e080(undefined8 param_1)

{
  if (lRam00000001000c6df0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090b54);
  return;
}



/* Entry: 10005e094; end: 10005e147;  */

void FUN_10005e094(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar2 = 0x13f;
  FUN_10005cf80();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_60 = &UNK_10008ccb0;
    puVar1 = PTR___sBOWV_1000b10f8 + 0x40;
    puStack_48 = &UNK_10008ccb0;
    lVar2 = 0x13f;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    FUN_10005fcd4();
    if (param_2 < 0x40) {
      lStack_40 = *(long *)(lVar2 + -8) + 0x40;
      puStack_30 = &UNK_10008ccc8;
      puStack_28 = &UNK_10008cce0;
      puStack_38 = puVar1;
      _swift_initStructMetadata(param_1,0x100,9,&lStack_68,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10005e148; end: 10005e4f7;  */

long * FUN_10005e148(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  long lVar21;
  
  lVar15 = *(long *)(param_3 + -8);
  uVar5 = *(uint *)(lVar15 + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar7 == 1) {
      lVar15 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar15;
      lVar10 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar10;
      lVar8 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar8;
      lVar15 = param_2[6];
      lVar9 = param_2[7];
      param_1[6] = lVar15;
      param_1[7] = lVar9;
      lVar18 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = lVar18;
      lVar21 = param_2[10];
      param_1[10] = lVar21;
      lVar16 = param_2[0xc];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(lVar8);
      _objc_retain(lVar15);
      _objc_retain(lVar9);
      _swift_bridgeObjectRetain(lVar18);
      _objc_retain(lVar21);
      if (lVar16 == 1) {
        lVar15 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = lVar15;
        param_1[0xd] = param_2[0xd];
      }
      else {
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = lVar16;
        param_1[0xd] = param_2[0xd];
        _swift_bridgeObjectRetain(lVar16);
      }
      uVar13 = 1;
    }
    else {
      if ((int)plVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100085eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_1000b0d28)(param_1,param_2,*(undefined8 *)(lVar15 + 0x40));
        return param_1;
      }
      lVar15 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar15;
      lVar10 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar10;
      lVar8 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar8;
      lVar18 = param_2[6];
      param_1[6] = lVar18;
      lVar8 = 0;
      FUN_10005cf80();
      iVar6 = *(int *)(lVar8 + 0x20);
      lVar9 = 0;
      __s10Foundation4DateVMa();
      pcVar20 = *(code **)(*(long *)(lVar9 + -8) + 0x10);
      _swift_bridgeObjectRetain(lVar15);
      _swift_bridgeObjectRetain(lVar10);
      _objc_retain(lVar18);
      (*pcVar20)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar9);
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
      plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
      plVar1 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
      if (*plVar1 == 0) {
        lVar15 = *plVar1;
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      else {
        lVar15 = plVar1[1];
        *plVar7 = *plVar1;
        plVar7[1] = lVar15;
        _swift_retain();
        _swift_retain(lVar15);
      }
      plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c));
      plVar1 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
      if (*plVar1 == 0) {
        lVar15 = *plVar1;
        plVar7[1] = plVar1[1];
        *plVar7 = lVar15;
      }
      else {
        lVar15 = plVar1[1];
        *plVar7 = *plVar1;
        plVar7[1] = lVar15;
        _swift_retain();
        _swift_retain(lVar15);
      }
      lVar10 = 0;
      FUN_10005e080();
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
      uVar13 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar13;
      uVar17 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) = uVar17;
      uVar19 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c)) = uVar19;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
      uVar4 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
      uVar11 = 0;
      FUN_10005fcd4(0);
      _swift_bridgeObjectRetain(uVar13);
      _objc_retain(uVar17);
      _objc_retain(uVar19);
      _swift_bridgeObjectRetain(uVar4);
      puVar12 = puVar3;
      _swift_getEnumCaseMultiPayload(puVar3,uVar11);
      uVar13 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar13;
      _swift_bridgeObjectRetain();
      lVar15 = 0x1000c69c8;
      func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
      (*pcVar20)((long)puVar2 + (long)*(int *)(lVar15 + 0x30),
                 (long)puVar3 + (long)*(int *)(lVar15 + 0x30),lVar9);
      _swift_storeEnumTagMultiPayload(puVar2,uVar11,(int)puVar12 == 1);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
      uVar13 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
      lVar15 = puVar3[1];
      _objc_retain();
      _swift_bridgeObjectRetain(uVar13);
      if (lVar15 == 1) {
        uVar13 = *puVar3;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar13;
        puVar2[2] = puVar3[2];
      }
      else {
        *puVar2 = *puVar3;
        puVar2[1] = lVar15;
        puVar2[2] = puVar3[2];
        _swift_bridgeObjectRetain(lVar15);
      }
      uVar13 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar13);
  }
  else {
    lVar15 = *param_2;
    *param_1 = lVar15;
    uVar14 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar15 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10005e4f8; end: 10005e6bb;  */

void FUN_10005e4f8(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar4 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    _objc_release(*(undefined8 *)(param_1 + 0x30));
    _objc_release(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _objc_release(*(undefined8 *)(param_1 + 0x50));
    lVar4 = *(long *)(param_1 + 0x60);
  }
  else {
    if ((int)lVar4 != 0) {
      return;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _objc_release(*(undefined8 *)(param_1 + 0x30));
    lVar4 = 0;
    FUN_10005cf80();
    iVar3 = *(int *)(lVar4 + 0x20);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    pcVar7 = *(code **)(*(long *)(lVar5 + -8) + 8);
    (*pcVar7)(param_1 + iVar3,lVar5);
    plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x28));
    if (*plVar1 != 0) {
      _swift_release();
      _swift_release(plVar1[1]);
    }
    plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x2c));
    if (*plVar1 != 0) {
      _swift_release();
      _swift_release(plVar1[1]);
    }
    lVar6 = 0;
    FUN_10005e080();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x14) + 8));
    _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x18)));
    _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x1c)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x20) + 8));
    lVar2 = param_1 + *(int *)(lVar6 + 0x24);
    FUN_10005fcd4(0);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    lVar4 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    (*pcVar7)(lVar2 + *(int *)(lVar4 + 0x30),lVar5);
    _objc_release(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x28)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar6 + 0x2c) + 8));
    lVar4 = *(long *)(param_1 + *(int *)(lVar6 + 0x30) + 8);
  }
  if (lVar4 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)();
  return;
}



/* Entry: 10005e6bc; end: 10005ee4b;  */

undefined8 * FUN_10005e6bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar6 == 1) {
    uVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    uVar13 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar13;
    uVar10 = param_2[6];
    uVar12 = param_2[7];
    param_1[6] = uVar10;
    param_1[7] = uVar12;
    uVar14 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar14;
    uVar16 = param_2[10];
    param_1[10] = uVar16;
    lVar7 = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar13);
    _objc_retain(uVar10);
    _objc_retain(uVar12);
    _swift_bridgeObjectRetain(uVar14);
    _objc_retain(uVar16);
    if (lVar7 == 1) {
      uVar10 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar10;
      param_1[0xd] = param_2[0xd];
    }
    else {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar7;
      param_1[0xd] = param_2[0xd];
      _swift_bridgeObjectRetain(lVar7);
    }
    uVar10 = 1;
  }
  else {
    if ((int)puVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100085eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_1000b0d28)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar4;
    uVar13 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar13;
    uVar13 = param_2[6];
    param_1[6] = uVar13;
    lVar7 = 0;
    FUN_10005cf80();
    iVar5 = *(int *)(lVar7 + 0x20);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    pcVar15 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar13);
    (*pcVar15)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar8);
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x24));
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x28));
    if (*plVar2 == 0) {
      lVar11 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar11;
    }
    else {
      lVar11 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar11;
      _swift_retain();
      _swift_retain(lVar11);
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
    if (*plVar2 == 0) {
      lVar7 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar7;
    }
    else {
      lVar7 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar7;
      _swift_retain();
      _swift_retain(lVar7);
    }
    lVar11 = 0;
    FUN_10005e080();
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x14));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x14));
    uVar10 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar10;
    uVar12 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x18));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x18)) = uVar12;
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c)) = uVar14;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
    uVar4 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar4;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
    uVar13 = 0;
    FUN_10005fcd4(0);
    _swift_bridgeObjectRetain(uVar10);
    _objc_retain(uVar12);
    _objc_retain(uVar14);
    _swift_bridgeObjectRetain(uVar4);
    puVar9 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar13);
    uVar10 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar10;
    _swift_bridgeObjectRetain();
    lVar7 = 0x1000c69c8;
    func_0x0001000100d0(0x1000c69c8,&UNK_10008c850);
    (*pcVar15)((long)puVar6 + (long)*(int *)(lVar7 + 0x30),
               (long)puVar3 + (long)*(int *)(lVar7 + 0x30),lVar8);
    _swift_storeEnumTagMultiPayload(puVar6,uVar13,(int)puVar9 == 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
    uVar10 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar10;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
    lVar7 = param_2[1];
    _objc_retain();
    _swift_bridgeObjectRetain(uVar10);
    if (lVar7 == 1) {
      uVar10 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar10;
      puVar6[2] = param_2[2];
    }
    else {
      *puVar6 = *param_2;
      puVar6[1] = lVar7;
      puVar6[2] = param_2[2];
      _swift_bridgeObjectRetain(lVar7);
    }
    uVar10 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}


