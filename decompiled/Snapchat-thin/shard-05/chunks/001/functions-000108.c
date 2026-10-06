/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b61a50; end: 103b61cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b61a50(undefined *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  double dVar7;
  
  puVar6 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fef318) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fef320) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar4 = _DAT_112fef328;
  uVar2 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef330);
  *puVar1 = 0x103b5fea0;
  puVar1[1] = 0;
  lVar4 = _DAT_112fef338;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100725510();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  lVar4 = _DAT_112fef340;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar4) = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + _DAT_112fef348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fef350) = param_3;
  if (param_2 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112fef358) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_112fef360) = 2;
    *(undefined8 *)(unaff_x20 + _DAT_112fef368) = 10;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_1);
    lVar4 = param_2;
    func_0x000108f495a0();
    *(long *)(unaff_x20 + _DAT_112fef358) = lVar4;
    lVar4 = param_2;
    func_0x000108f495c8();
    *(long *)(unaff_x20 + _DAT_112fef360) = lVar4;
    lVar4 = param_2;
    func_0x000108f495f0();
    func_0x000107c615e8(param_2);
    *(long *)(unaff_x20 + _DAT_112fef368) = lVar4;
  }
  dVar7 = (double)param_4;
  if (param_4 < 1) {
    dVar7 = 604800.0;
  }
  *(double *)(unaff_x20 + _DAT_112fef370) = dVar7;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001024a2fc0();
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar5;
  }
  else {
    puVar5 = param_1;
    func_0x000107c61174();
    puVar3 = puVar5;
    FUN_103b6499c();
    func_0x000107c61170(puVar5);
    *(undefined **)(unaff_x20 + _DAT_112fef378) = puVar3;
    func_0x000107c61174();
    puVar3 = puVar5;
    func_0x000103b650e0();
    func_0x000107c61170(puVar5);
  }
  *(undefined **)(unaff_x20 + _DAT_112fef380) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 103b61cdc; end: 103b61d17;  */

void FUN_103b61cdc(void)

{
  long unaff_x20;
  
  FUN_103b613ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103b61d18; end: 103b61d8f;  */

void FUN_103b61d18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103b61d90;
  plVar5[0x19] = lVar2;
  plVar5[0x1a] = lVar4;
  plVar5[0x17] = lVar1;
  plVar5[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103b615e0,0,0);
  return;
}



/* Entry: 103b61d90; end: 103b61dcb;  */

void FUN_103b61d90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103b61dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103b61dcc; end: 103b61de3;  */

long FUN_103b61dcc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103b61de4; end: 103b61dff;  */

void FUN_103b61de4(void)

{
  long unaff_x20;
  
  FUN_103b61798(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103b61e00; end: 103b61e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b61e00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fef3b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b61e4c; end: 103b61ea3; -[SCFanPassUpsellLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b61e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fef3b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b61ea4; end: 103b61eab; -[SCFanPassUpsellLayer type] */

undefined8 FUN_103b61ea4(void)

{
  return 0x19;
}



/* Entry: 103b61eac; end: 103b61ec3; -[SCFanPassUpsellLayer layerViewControllerClass] */

void FUN_103b61eac(void)

{
  func_0x00010002ab08(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103b61ec4; end: 103b61fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b61ec4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = 0;
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112fef3b0) + _DAT_11307abc8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    lStack_28 = 0;
    uStack_30 = 0;
LAB_103b61fa8:
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    func_0x000107c61434(lVar4);
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffe4;
    func_0x000100029284(0xd00000000000001c);
    if ((uVar3 & 1) == 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      lStack_28 = 0;
      uStack_30 = 0;
      func_0x000107c6142c(lVar4);
      goto LAB_103b61fa8;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,&uStack_40);
    func_0x000107c6142c(lVar4);
    if (lStack_28 == 0) goto LAB_103b61fa8;
    func_0x000107c6147c(&uStack_50,&uStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar2 & 1) != 0) {
      uVar2 = uStack_50 & 0xffffffffffff;
      if ((uStack_48 & 0x2000000000000000) != 0) {
        uVar2 = uStack_48 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_103b61fb8;
      func_0x000107c6142c(uStack_48);
    }
  }
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
LAB_103b61fb8:
  auVar5._8_8_ = uStack_48;
  auVar5._0_8_ = uStack_50;
  return auVar5;
}



/* Entry: 103b61fc8; end: 103b6207b; -[SCFanPassUpsellLayer layerCacheKey] */

void FUN_103b61fc8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_40;
  puVar1 = param_1;
  func_0x000107c614f0();
  puStack_40 = puVar1;
  func_0x000107c61174(param_1);
  uVar2 = 0x112fef3b8;
  func_0x0001000285a8(0x112fef3b8,&UNK_10dc59390);
  func_0x000107c5fb18();
  uVar4 = 0xe100000000000000;
  puStack_40 = (undefined1 *)ppuVar3;
  uStack_38 = uVar2;
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  FUN_103b61ec4();
  func_0x000107c5fb78();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar4);
  uVar2 = uStack_38;
  puVar1 = puStack_40;
  func_0x000107c5fadc(puStack_40,uStack_38);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103b6207c; end: 103b62347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b6207c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar2 = 0;
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112fef3b0) + _DAT_11307abc8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    lStack_28 = 0;
    uStack_30 = 0;
LAB_103b62144:
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    func_0x000107c61434(lVar4);
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffe6;
    func_0x000100029284(0xd00000000000001a);
    if ((uVar3 & 1) == 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      lStack_28 = 0;
      uStack_30 = 0;
      func_0x000107c6142c(lVar4);
      goto LAB_103b62144;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,&uStack_40);
    func_0x000107c6142c(lVar4);
    if (lStack_28 == 0) goto LAB_103b62144;
    func_0x000107c6147c(&uStack_50,&uStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar2 & 1) != 0) goto LAB_103b62154;
  }
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
LAB_103b62154:
  auVar5._8_8_ = uStack_48;
  auVar5._0_8_ = uStack_50;
  return auVar5;
}



/* Entry: 103b62348; end: 103b623a7; -[SCFanPassUpsellLayer init] */

void FUN_103b62348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCFanPassUpsellOperaPlugin.SCFanPassUpsellLayer",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b62374);
  (*pcVar1)();
}



/* Entry: 103b623a8; end: 103b623b7; -[SCFanPassUpsellLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b623a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef3b0));
  return;
}



/* Entry: 103b623b8; end: 103b623d7;  */

void FUN_103b623b8(void)

{
  func_0x000107c61168(&PTR_PTR_112931640);
  return;
}



/* Entry: 103b623d8; end: 103b6259f;  */

undefined * FUN_103b623d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar7 = &stack0xffffffffffffff90;
  FUN_103b627f4();
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffff90,PTR_s_hitTest_withEvent__1125d6850,
                      param_3);
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    if (puVar7 == unaff_x20) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar7;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar6 = puVar2;
      do {
        puVar3 = PTR__OBJC_CLASS___UIControl_1126c3e60;
        func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
        puVar8 = puVar6;
        func_0x000107c6148c(puVar6,puVar3);
        puVar3 = puVar6;
        if (puVar8 != (undefined *)0x0) goto LAB_103b62564;
        puVar8 = puVar6;
        func_0x000107c43e88();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
          puVar5 = puVar1;
          if ((ulong)puVar1 >> 0x3e == 0) goto LAB_103b624bc;
LAB_103b6251c:
          puVar8 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar8 = puVar5;
          }
          func_0x000107c60480();
        }
        else {
          uVar4 = 0;
          func_0x0001023b4600(0);
          puVar5 = puVar8;
          func_0x000107c5fc54(puVar8,uVar4);
          func_0x000107c61170(puVar8);
          if ((ulong)puVar5 >> 0x3e != 0) goto LAB_103b6251c;
LAB_103b624bc:
          puVar8 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        func_0x000107c6142c(puVar5);
        if (puVar8 != (undefined *)0x0) goto LAB_103b62564;
        func_0x000107c5c42c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar6);
        if (puVar3 == (undefined *)0x0) {
          puVar7 = (undefined *)0x0;
          goto LAB_103b6256c;
        }
        puVar6 = puVar3;
        func_0x000107c61174();
      } while (puVar3 != unaff_x20);
      func_0x000107c61170(puVar6);
      puVar7 = (undefined *)0x0;
      puVar6 = puVar2;
      puVar3 = puVar6;
LAB_103b62564:
      func_0x000107c61170(puVar3);
      puVar2 = puVar6;
LAB_103b6256c:
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return puVar7;
}



/* Entry: 103b625a0; end: 103b62617; -[_TtC26SCFanPassUpsellOperaPluginP33_0F63D6A616C6D4160BF5D471AB6DA10423OperaTapPassThroughView hitTest:withEvent:] */

void FUN_103b625a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_103b623d8(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 103b62618; end: 103b62687; -[_TtC26SCFanPassUpsellOperaPluginP33_0F63D6A616C6D4160BF5D471AB6DA10423OperaTapPassThroughView initWithFrame:] */

void FUN_103b62618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_103b627f4();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 103b62688; end: 103b6270b; -[_TtC26SCFanPassUpsellOperaPluginP33_0F63D6A616C6D4160BF5D471AB6DA10423OperaTapPassThroughView initWithCoder:] */

undefined1 * FUN_103b62688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = 0;
  FUN_103b627f4();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103b6270c; end: 103b6273f;  */

void FUN_103b6270c(void)

{
  FUN_103b627f4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b62740; end: 103b627f3;  */

/* WARNING: Possible PIC construction at 0x000103b627b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b627c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b627dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b627cc) */
/* WARNING: Removing unreachable block (ram,0x000103b627b8) */
/* WARNING: Removing unreachable block (ram,0x000103b627e0) */

void FUN_103b62740(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  FUN_103b627f4(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar1);
  func_0x000107c3ea80(puVar2);
  func_0x000107c61180();
  func_0x000107c3fdd0(0x3fe999999999999a);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 103b627f4; end: 103b62813;  */

void FUN_103b627f4(void)

{
  func_0x000107c61168(&PTR_PTR_112931700);
  return;
}



/* Entry: 103b62814; end: 103b6283b; -[SCFanPassUpsellLayerViewController loadView] */

void FUN_103b62814(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b62740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6283c; end: 103b62c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6283c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  code *pcVar14;
  ulong *puStack_90;
  undefined8 uStack_88;
  
  *(undefined1 *)(unaff_x20 + _DAT_112fef400) = 0;
  lVar2 = _DAT_112fef410;
  uVar4 = 0;
  if (*(long *)(unaff_x20 + _DAT_112fef410) != 0) {
    func_0x000107c41864(*(long *)(unaff_x20 + _DAT_112fef410),param_6,0);
    uVar4 = 0;
    if (*(long *)(unaff_x20 + lVar2) != 0) {
      func_0x000107c4ff34();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    }
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar4);
  lVar7 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c14);
    (*pcVar14)();
  }
  lVar5 = lVar7;
  func_0x000103b62164();
  func_0x000107c61170(lVar7);
  if (lVar5 == 0) {
    FUN_103b68698(0xd00000000000002a,0x800000010f1a1e20);
  }
  else {
    lVar7 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c18);
      (*pcVar14)();
    }
    lVar6 = lVar7;
    FUN_103b61ec4();
    func_0x000107c61170(lVar7);
    plVar1 = (long *)(unaff_x20 + _DAT_112fef3f0);
    lVar7 = plVar1[1];
    *plVar1 = lVar6;
    plVar1[1] = param_6;
    func_0x000107c6142c(lVar7);
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c1c);
      (*pcVar14)();
    }
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar8);
    puVar9 = (ulong *)PTR_PTR_1126b0870;
    func_0x000107c610f8();
    func_0x000107c47da4();
    func_0x000107c58e94();
    func_0x000107c61174();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c20);
      (*pcVar14)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar7);
    func_0x000107c54b80(param_1,param_2,param_3,param_4,puVar9);
    func_0x000107c52ab8(puVar9);
    func_0x000107c61170(puVar9);
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c24);
      (*pcVar14)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar7);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(ulong **)(unaff_x20 + lVar2) = puVar9;
    puVar10 = puVar9;
    func_0x000107c61174(puVar9);
    func_0x000107c61170(uVar4);
    func_0x00010439b5f4(0);
    func_0x000107c610f8();
    uVar4 = 0xf9;
    uVar13 = 0xed;
    func_0x00010439b428(0xf9,0xed);
    lVar2 = *plVar1;
    lVar7 = plVar1[1];
    func_0x000107c61434(lVar7);
    lVar6 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c28);
      (*pcVar14)();
    }
    lVar11 = lVar6;
    func_0x000103b6207c();
    func_0x000107c61170(lVar6);
    lVar6 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x103b62c2c);
      (*pcVar14)();
    }
    lVar12 = lVar6;
    func_0x000103b62250();
    func_0x000107c61170(lVar6);
    func_0x0001003604c8(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar10);
    func_0x000107c61174(uVar4);
    FUN_103b67ad8(puVar9,lVar2,lVar7,lVar11,uVar13,0,1,uVar4,lVar12);
    pcVar14 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar9) + 0xb0);
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112fef3f8));
    (*pcVar14)();
    puStack_90 = puVar9;
    func_0x00010008a7c8(&uStack_88,&puStack_90);
    func_0x000100083b20(&puStack_90);
    func_0x000107c61574(uStack_88);
    puVar3 = puStack_90;
    func_0x000107c3e2c0(puVar10);
    FUN_103b68648();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 103b62c2c; end: 103b62c87; -[SCFanPassUpsellLayerViewController viewDidLoad] */

void FUN_103b62c2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_103b6283c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b62c88; end: 103b62dbb; -[SCFanPassUpsellLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b62c88(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_updateViewWithPreviousLayer_curr_112680a50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar3,param_3,param_4);
  if (param_4 != 0) {
    func_0x000107c61174();
    uVar2 = param_4;
    FUN_103b61ec4();
    if (uVar2 == *(ulong *)(param_1 + _DAT_112fef3f0) &&
        puVar3 == (undefined *)((ulong *)(param_1 + _DAT_112fef3f0))[1]) {
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(puVar3);
      return;
    }
    func_0x000107c605b8();
    func_0x000107c6142c(puVar3);
    if ((uVar2 & 1) == 0) {
      FUN_103b6283c();
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    param_3 = param_4;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b62dbc; end: 103b62e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b62dbc(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidFullyAppear_112684c88);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_48 = puVar1;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(puVar1);
  if ((*(byte *)(unaff_x20 + _DAT_112fef400) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112fef400) = 1;
    FUN_103b6871c(0x646577656976,0xe600000000000000);
  }
  return;
}



/* Entry: 103b62e74; end: 103b62e9b; -[SCFanPassUpsellLayerViewController viewDidFullyAppear] */

void FUN_103b62e74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b62dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b62e9c; end: 103b62f2f; -[SCFanPassUpsellLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b62e9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidFullyDisappear_112684ca8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_48 = puVar2;
  func_0x0001007d6d78(&puStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 103b62f30; end: 103b6308b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b62f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fef408;
  uVar3 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef410) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef3f0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112fef400) = 0;
  lVar2 = _DAT_112fef3f8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_58 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  puVar6 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar6,PTR_s_initWithConfiguration_layerViewC_1125de030,param_1,param_2,
                      param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 103b6308c; end: 103b630ff; -[SCFanPassUpsellLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_103b6308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_103b62f30(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b63100; end: 103b6324f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b63100(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fef408;
  uVar3 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef410) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef3f0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112fef400) = 0;
  lVar2 = _DAT_112fef3f8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_58 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_58;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  puVar6 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar6,PTR_s_initWithNibName_bundle__1125e9850,param_1,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 103b63250; end: 103b632af; -[SCFanPassUpsellLayerViewController initWithNibName:bundle:] */

void FUN_103b63250(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_103b63100(param_3,param_2,param_4);
  return;
}



/* Entry: 103b632b0; end: 103b633d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b632b0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fef408;
  uVar3 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fef410) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef3f0);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + _DAT_112fef400) = 0;
  lVar2 = _DAT_112fef3f8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_48 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_48;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  puVar6 = &stack0xffffffffffffffa8;
  func_0x000107c61154(puVar6,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 103b633d4; end: 103b633fb; -[SCFanPassUpsellLayerViewController initWithCoder:] */

void FUN_103b633d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b632b0();
  return;
}



/* Entry: 103b633fc; end: 103b6342f;  */

void FUN_103b633fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b63430; end: 103b6348b; -[SCFanPassUpsellLayerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6344c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b63450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b63430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef408));
  return;
}



/* Entry: 103b6348c; end: 103b634fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_103b6348c(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fef530;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112fef530);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 103b634fc; end: 103b6353f; -[SCFanPassUpsellOperaPlugin broadcastViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b634fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fef500;
  func_0x000107c61428(param_1 + _DAT_112fef500,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103b63540; end: 103b6358f; -[SCFanPassUpsellOperaPlugin setBroadcastViewLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b63540(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fef500;
  func_0x000107c61428(param_1 + _DAT_112fef500,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b63590; end: 103b63647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b63590(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112fef520,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fef528,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef4f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef530) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef500) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_112fef508) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef510) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef518) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b63648; end: 103b63667; -[SCFanPassUpsellOperaPlugin init] */

void FUN_103b63648(void)

{
  FUN_103b63590();
  return;
}



/* Entry: 103b63668; end: 103b6367b; -[SCFanPassUpsellOperaPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b63668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112fef520,param_3);
  return;
}



/* Entry: 103b6367c; end: 103b636a7; -[SCFanPassUpsellOperaPlugin type] */

void FUN_103b6367c(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1a1e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b636a8; end: 103b636ab; -[SCFanPassUpsellOperaPlugin extraPropertiesProvider] */

void FUN_103b636a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103b636ac; end: 103b636bf; -[SCFanPassUpsellOperaPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b636ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112fef528,param_3);
  return;
}



/* Entry: 103b636c0; end: 103b63743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b636c0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fef508;
  func_0x000107c61428(unaff_x20 + _DAT_112fef508,auStack_38,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_103b61848();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61604(unaff_x20 + _DAT_112fef520,0);
  func_0x000107c61604(unaff_x20 + _DAT_112fef528,0);
  return;
}



/* Entry: 103b63744; end: 103b6376b; -[SCFanPassUpsellOperaPlugin teardown] */

void FUN_103b63744(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b636c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6376c; end: 103b63773; -[SCFanPassUpsellOperaPlugin playlistDataSource] */

void FUN_103b6376c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103b63774; end: 103b6382f; -[SCFanPassUpsellOperaPlugin addEventListenersWithEventAnnouncing:] */

/* WARNING: Possible PIC construction at 0x000103b63810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b63814) */

void FUN_103b63774(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  FUN_103bb7ecc();
  uVar1 = param_1[1];
  *(undefined8 *)(lVar2 + 0x20) = *param_1;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  func_0x000107c3d744(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 103b63830; end: 103b638e7; -[SCFanPassUpsellOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000103b638cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b638d0) */

void FUN_103b63830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103b64788(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b638e8; end: 103b64357;  */

/* WARNING: Possible PIC construction at 0x000103b63bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b642c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b642d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b64334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b64328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b63a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b63ae0) */
/* WARNING: Removing unreachable block (ram,0x000103b63ad0) */
/* WARNING: Removing unreachable block (ram,0x000103b63e40) */
/* WARNING: Removing unreachable block (ram,0x000103b63fe0) */
/* WARNING: Removing unreachable block (ram,0x000103b6432c) */
/* WARNING: Removing unreachable block (ram,0x000103b642dc) */
/* WARNING: Removing unreachable block (ram,0x000103b64330) */
/* WARNING: Removing unreachable block (ram,0x000103b642cc) */
/* WARNING: Removing unreachable block (ram,0x000103b63fb0) */
/* WARNING: Removing unreachable block (ram,0x000103b63fec) */
/* WARNING: Removing unreachable block (ram,0x000103b640c8) */
/* WARNING: Removing unreachable block (ram,0x000103b640d8) */
/* WARNING: Removing unreachable block (ram,0x000103b6413c) */
/* WARNING: Removing unreachable block (ram,0x000103b640f8) */
/* WARNING: Removing unreachable block (ram,0x000103b64168) */
/* WARNING: Removing unreachable block (ram,0x000103b6418c) */
/* WARNING: Removing unreachable block (ram,0x000103b641fc) */
/* WARNING: Removing unreachable block (ram,0x000103b641ac) */
/* WARNING: Removing unreachable block (ram,0x000103b64230) */
/* WARNING: Removing unreachable block (ram,0x000103b642e8) */
/* WARNING: Removing unreachable block (ram,0x000103b64248) */
/* WARNING: Removing unreachable block (ram,0x000103b6431c) */
/* WARNING: Removing unreachable block (ram,0x000103b64294) */
/* WARNING: Removing unreachable block (ram,0x000103b63e14) */
/* WARNING: Removing unreachable block (ram,0x000103b63da4) */
/* WARNING: Removing unreachable block (ram,0x000103b63e4c) */
/* WARNING: Removing unreachable block (ram,0x000103b63db0) */
/* WARNING: Removing unreachable block (ram,0x000103b63e6c) */
/* WARNING: Removing unreachable block (ram,0x000103b63e74) */
/* WARNING: Removing unreachable block (ram,0x000103b63ec4) */
/* WARNING: Removing unreachable block (ram,0x000103b63e84) */
/* WARNING: Removing unreachable block (ram,0x000103b63ecc) */
/* WARNING: Removing unreachable block (ram,0x000103b63ebc) */
/* WARNING: Removing unreachable block (ram,0x000103b63ed4) */
/* WARNING: Removing unreachable block (ram,0x000103b63fbc) */
/* WARNING: Removing unreachable block (ram,0x000103b63f74) */
/* WARNING: Removing unreachable block (ram,0x000103b63de0) */
/* WARNING: Removing unreachable block (ram,0x000103b63e64) */
/* WARNING: Removing unreachable block (ram,0x000103b63dfc) */
/* WARNING: Removing unreachable block (ram,0x000103b63d20) */
/* WARNING: Removing unreachable block (ram,0x000103b63e1c) */
/* WARNING: Removing unreachable block (ram,0x000103b63d6c) */
/* WARNING: Removing unreachable block (ram,0x000103b63cc4) */
/* WARNING: Removing unreachable block (ram,0x000103b63bb0) */
/* WARNING: Removing unreachable block (ram,0x000103b63a18) */
/* WARNING: Removing unreachable block (ram,0x000103b63c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b638e8(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c614f0();
  if (param_1 != 0) {
    uVar2 = 0;
    func_0x0001044b8ee8(0);
    lVar7 = param_1;
    func_0x000107c61480(param_1,uVar2);
    if ((lVar7 != 0) && (0 < *(long *)(lVar7 + _DAT_11307f698))) {
      lVar7 = *(long *)(lVar7 + _DAT_11307f530);
      if (lVar7 != 0) {
        uVar6 = ((ulong *)(lVar7 + _DAT_11307f3b0))[1];
        if (uVar6 != 0) {
          uVar1 = *(ulong *)(lVar7 + _DAT_11307f3b0) & 0xffffffffffff;
          if ((uVar6 & 0x2000000000000000) != 0) {
            uVar1 = uVar6 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            lVar3 = *(long *)(lVar7 + _DAT_11307f3c0 + 8);
            if ((lVar3 == 0) && (lVar8 = *(long *)(lVar7 + _DAT_11307f3b8 + 8), lVar8 != 0)) {
              func_0x000107c61434(lVar8);
            }
            if (param_2 == 0) {
              func_0x000107c61434(lVar3);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(param_1);
              func_0x000107c61434(uVar6);
            }
            else {
              func_0x000107c61434(lVar3);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(param_1);
              func_0x000107c61434(uVar6);
              func_0x000107c444d0();
              func_0x000107c61180();
              if (param_2 != 0) {
                param_1 = param_2;
                func_0x000107c3b9ac();
                func_0x000107c61180();
                func_0x000107c615e8(param_2);
                func_0x000107c5faec(param_1);
                goto code_r0x000107c61170;
              }
            }
            func_0x000100214a84();
            puVar5 = (undefined *)0xe000000000000000;
            goto code_r0x000107c6142c;
          }
        }
      }
      func_0x00010044d36c(0);
      func_0x000107c613fc();
      func_0x000107c61174(lVar7);
      func_0x000107c61174(param_1);
      lVar7 = param_1;
      func_0x00010044d38c();
      FUN_103b68698(0xd00000000000001b,0x800000010f1a1e70);
      func_0x000107c61574(lVar7);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (param_4 == (code *)0x0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000100dfa3f0(puVar4);
      (*param_4)(puVar5,puVar4);
      goto code_r0x000107c6142c;
    }
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 == (code *)0x0) {
    return;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100dfa3f0(puVar4);
  (*param_4)(puVar5,puVar4);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
  return;
}



/* Entry: 103b64358; end: 103b64443; -[SCFanPassUpsellOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

/* WARNING: Possible PIC construction at 0x000103b64414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b64424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b64418) */
/* WARNING: Removing unreachable block (ram,0x000103b64428) */

void FUN_103b64358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1106d8eb0;
    func_0x000107c613fc(&UNK_1106d8eb0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_103b64994;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103b638e8(param_3,param_4,param_5,pcVar3,puVar2);
  func_0x000100d674bc(pcVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b64444; end: 103b64447; -[SCFanPassUpsellOperaPlugin didDismissFanPassSubscriptionScopeWithError:] */

void FUN_103b64444(void)

{
  return;
}



/* Entry: 103b64448; end: 103b64503;  */

void FUN_103b64448(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  FUN_103b6348c();
  puVar1 = &UNK_1106d8e60;
  func_0x000107c613fc(&UNK_1106d8e60,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_103b64950;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106d8e78;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103b64504; end: 103b6469f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b64504(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112fef520;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4e9c4();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        lVar4 = lVar3;
        func_0x000107c40f40();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(param_1);
          func_0x000107c615e8(lVar2);
          lVar2 = lVar3;
        }
        else {
          lVar5 = lVar4;
          func_0x000107c3b9ac();
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c5faec();
          func_0x000107c61170(lVar5);
          puVar1 = (undefined8 *)(param_1 + _DAT_112fef4f8);
          func_0x000107c61428(puVar1,auStack_80,0,0);
          pcVar8 = (code *)*puVar1;
          if (pcVar8 != (code *)0x0) {
            uVar9 = puVar1[1];
            func_0x000107c6157c(uVar9);
            (*pcVar8)(lVar6,puVar7);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(param_1);
            func_0x000100d674bc(pcVar8,uVar9);
            func_0x000107c6142c(puVar7);
            return;
          }
          func_0x000107c61170(param_1);
          func_0x000107c6142c(puVar7);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar3);
          lVar2 = lVar4;
        }
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103b646a0; end: 103b646c7; -[SCFanPassUpsellOperaPlugin fanPassSubscriptionOnViewPrivateStory] */

void FUN_103b646a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b64448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b646c8; end: 103b646fb;  */

void FUN_103b646c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b646fc; end: 103b64787; -[SCFanPassUpsellOperaPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b6475c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b64760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b646fc(long param_1)

{
  func_0x000100d67498(param_1 + _DAT_112fef520);
  func_0x000100d67498(param_1 + _DAT_112fef528);
  func_0x000100d674bc(*(undefined8 *)(param_1 + _DAT_112fef4f8),
                      ((undefined8 *)(param_1 + _DAT_112fef4f8))[1]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fef530));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef508));
  return;
}



/* Entry: 103b64788; end: 103b6494f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b64788(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  plVar1 = param_1;
  FUN_103bb7ecc();
  if ((param_1 != (long *)*plVar1 || param_2 != plVar1[1]) &&
     (func_0x000107c605b8(param_1,param_2,(long *)*plVar1,plVar1[1],0), ((ulong)param_1 & 1) == 0))
  {
    return;
  }
  if ((param_3 != 0) && (lVar6 = *(long *)(param_3 + _DAT_11307abc8), *(long *)(lVar6 + 0x10) != 0))
  {
    func_0x000107c61434(lVar6);
    lVar2 = -0x2fffffffffffffe4;
    uVar5 = 0;
    func_0x000100029284(0xd00000000000001c);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar6);
      func_0x00010006e7f4(&uStack_60);
      lVar6 = *(long *)(param_3 + _DAT_11307abc8);
      if (*(long *)(lVar6 + 0x10) == 0) {
        return;
      }
      func_0x000107c61434(lVar6);
      uVar5 = 0;
      lVar2 = -0x2fffffffffffffe5;
      func_0x000100029284(0xd00000000000001b);
      if ((uVar5 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,&uStack_60);
        func_0x000107c6142c(lVar6);
        func_0x000107c6147c(&uStack_70,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar2 = unaff_x20 + _DAT_112fef520;
        func_0x000107c61618();
        lVar6 = lStack_68;
        if (lVar2 != 0) {
          uVar4 = uStack_70;
          func_0x000107c5fadc(uStack_70,lStack_68);
          func_0x000107c6142c(lStack_68);
          func_0x000107c3e284(lVar2);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(uVar4);
          return;
        }
      }
      func_0x000107c6142c(lVar6);
      return;
    }
    func_0x000107c6142c(lVar6);
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x00010006e7f4(&uStack_60);
  return;
}



/* Entry: 103b64950; end: 103b64973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b64950(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x20;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2 + _DAT_112fef520;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar4 = lVar3;
      func_0x000107c4e9c4();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
      }
      else {
        lVar5 = lVar4;
        func_0x000107c40f40();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar6 = lVar5;
          func_0x000107c3b9ac();
          func_0x000107c61180();
          lVar7 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
          puVar1 = (undefined8 *)(lVar2 + _DAT_112fef4f8);
          func_0x000107c61428(puVar1,auStack_80,0,0);
          pcVar9 = (code *)*puVar1;
          if (pcVar9 != (code *)0x0) {
            uVar10 = puVar1[1];
            func_0x000107c6157c(uVar10);
            (*pcVar9)(lVar7,puVar8);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(lVar2);
            func_0x000100d674bc(pcVar9,uVar10);
            func_0x000107c6142c(puVar8);
            return;
          }
          func_0x000107c61170(lVar2);
          func_0x000107c6142c(puVar8);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          lVar3 = lVar5;
        }
      }
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 103b64974; end: 103b64993;  */

void FUN_103b64974(void)

{
  func_0x000107c61168(&PTR_PTR_1129317f8);
  return;
}



/* Entry: 103b64994; end: 103b6499b;  */

/* WARNING: Possible PIC construction at 0x0001024a5168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024a516c) */

void FUN_103b64994(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_2 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b6499c; end: 103b6574f;  */

/* WARNING: Possible PIC construction at 0x000103b64a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b64a6c) */
/* WARNING: Removing unreachable block (ram,0x000103b64aa0) */
/* WARNING: Removing unreachable block (ram,0x000103b64ad8) */
/* WARNING: Removing unreachable block (ram,0x000103b64b24) */
/* WARNING: Removing unreachable block (ram,0x000103b64d14) */
/* WARNING: Removing unreachable block (ram,0x000103b64e80) */
/* WARNING: Removing unreachable block (ram,0x000103b64d54) */
/* WARNING: Removing unreachable block (ram,0x000103b650c8) */
/* WARNING: Removing unreachable block (ram,0x000103b64e1c) */
/* WARNING: Removing unreachable block (ram,0x000103b64f3c) */
/* WARNING: Removing unreachable block (ram,0x000103b65044) */
/* WARNING: Removing unreachable block (ram,0x000103b64e30) */
/* WARNING: Removing unreachable block (ram,0x000103b650d0) */
/* WARNING: Removing unreachable block (ram,0x000103b64e78) */
/* WARNING: Removing unreachable block (ram,0x000103b64f40) */
/* WARNING: Removing unreachable block (ram,0x000103b64fa8) */
/* WARNING: Removing unreachable block (ram,0x000103b650cc) */
/* WARNING: Removing unreachable block (ram,0x000103b65034) */
/* WARNING: Removing unreachable block (ram,0x000103b64f5c) */
/* WARNING: Removing unreachable block (ram,0x000103b65038) */
/* WARNING: Removing unreachable block (ram,0x000103b64b80) */
/* WARNING: Removing unreachable block (ram,0x000103b64e9c) */
/* WARNING: Removing unreachable block (ram,0x000103b64bf4) */
/* WARNING: Removing unreachable block (ram,0x000103b64c24) */
/* WARNING: Removing unreachable block (ram,0x000103b64c00) */
/* WARNING: Removing unreachable block (ram,0x000103b64c70) */
/* WARNING: Removing unreachable block (ram,0x000103b64cc4) */
/* WARNING: Removing unreachable block (ram,0x000103b64ca0) */
/* WARNING: Removing unreachable block (ram,0x000103b64cec) */
/* WARNING: Removing unreachable block (ram,0x000103b64cb0) */
/* WARNING: Removing unreachable block (ram,0x000103b64c08) */
/* WARNING: Removing unreachable block (ram,0x000103b64ea4) */
/* WARNING: Removing unreachable block (ram,0x000103b64af4) */
/* WARNING: Removing unreachable block (ram,0x000103b64afc) */
/* WARNING: Removing unreachable block (ram,0x000103b64b20) */
/* WARNING: Removing unreachable block (ram,0x000103b65058) */

undefined * FUN_103b6499c(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long extraout_x8;
  undefined *puVar15;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *puVar16;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_1c0 [192];
  undefined1 auStack_100 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar10 = 0;
  func_0x000107c5ed50();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar5 = auStack_1c0;
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a1ee0);
  lVar12 = unaff_x20;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  if (lVar12 != 0) {
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c61168(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar13 = lVar12;
    func_0x000107c6148c(lVar12,puVar15);
    if (lVar13 == 0) {
      func_0x000107c615e8(lVar12);
    }
    else {
      unaff_x25 = auStack_100;
      unaff_x30 = 0x103b64a6c;
      register0x00000008 = (BADSPACEBASE *)(puVar5 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      unaff_x19 = lVar10;
      unaff_x20 = lVar13;
      unaff_x21 = puVar5 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      unaff_x23 = uVar11;
      unaff_x26 = lVar12;
      unaff_x29 = puVar1;
    }
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined1 **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar15 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar15 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e9e988,&UNK_10daaec40);
    puVar8 = puVar15;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar16 = (undefined8 *)(puVar6 + 0x30);
    do {
      uVar3 = puVar16[-2];
      uVar4 = puVar16[-1];
      uVar11 = *puVar16;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar11);
      uVar9 = uVar3;
      uVar14 = uVar4;
      func_0x000100029284();
      if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1024a30b8);
        (*pcVar7)();
      }
      uVar14 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar14 + 0x40) = *(ulong *)(puVar8 + uVar14 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar2 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1024a30bc);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar15 = puVar15 + -1;
      puVar16 = puVar16 + 3;
    } while (puVar15 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 103b65750; end: 103b658b7;  */

/* WARNING: Possible PIC construction at 0x000103b65888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b6588c) */

void FUN_103b65750(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    func_0x0001002ecff4(0,lVar4,0);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar6 = *puVar5;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar6);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar3;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  uVar6 = 0;
  FUN_103b67434(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar2;
  func_0x000107c5fc48(puVar2,uVar6);
  func_0x000107c6142c(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f1a1f10);
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103b658b8; end: 103b659ab;  */

uint FUN_103b658b8(long *param_1,long *param_2)

{
  double dVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar3 = *param_1;
  lVar7 = param_1[2];
  lVar4 = param_2[2];
  if (*(long *)(lVar7 + 0x10) == 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    if (lVar7 != 0) {
      dVar8 = 0.0;
      goto LAB_103b65934;
    }
LAB_103b65968:
    if ((lVar3 == *param_2) && (param_1[1] == param_2[1])) {
      uVar2 = 0;
    }
    else {
      func_0x000107c605b8();
      uVar2 = (uint)lVar3 & 1;
    }
  }
  else {
    dVar8 = *(double *)(lVar7 + 0x20);
    lVar6 = *(long *)(lVar7 + 0x10) + -1;
    if (lVar6 != 0) {
      pdVar5 = (double *)(lVar7 + 0x28);
      dVar9 = dVar8;
      do {
        dVar10 = *pdVar5;
        dVar11 = dVar10;
        if (dVar10 <= dVar9) {
          dVar10 = dVar9;
          dVar11 = dVar8;
        }
        dVar8 = dVar11;
        lVar6 = lVar6 + -1;
        pdVar5 = pdVar5 + 1;
        dVar9 = dVar10;
      } while (lVar6 != 0);
    }
    lVar7 = *(long *)(lVar4 + 0x10);
    if (lVar7 == 0) {
      if (dVar8 == 0.0) goto LAB_103b65968;
      dVar9 = 0.0;
    }
    else {
LAB_103b65934:
      dVar9 = *(double *)(lVar4 + 0x20);
      lVar7 = lVar7 + -1;
      if (lVar7 != 0) {
        pdVar5 = (double *)(lVar4 + 0x28);
        dVar10 = dVar9;
        do {
          dVar11 = *pdVar5;
          dVar1 = dVar11;
          if (dVar11 <= dVar10) {
            dVar11 = dVar10;
            dVar1 = dVar9;
          }
          dVar9 = dVar1;
          lVar7 = lVar7 + -1;
          pdVar5 = pdVar5 + 1;
          dVar10 = dVar11;
        } while (lVar7 != 0);
      }
      if (dVar8 == dVar9) goto LAB_103b65968;
    }
    uVar2 = (uint)(dVar8 < dVar9);
  }
  return uVar2;
}



/* Entry: 103b659ac; end: 103b65a8b;  */

void FUN_103b659ac(long param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  long unaff_x21;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppppuVar4 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar2 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar4;
    FUN_103b66198(ppppuVar4,0);
    ppppuVar3 = &pppuStack_88;
    FUN_103b672b4(ppppuVar3,ppppuVar2 + 4,ppppuVar4,param_1);
    func_0x000107c61434(param_1);
    FUN_103b67474(pppuStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (ppppuVar3 != ppppuVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b65a8c);
      (*pcVar1)();
    }
  }
  pppuStack_88 = ppppuVar2;
  FUN_103b66474(&pppuStack_88);
  if (unaff_x21 != 0) {
    func_0x000107c61574(pppuStack_88);
  }
  return;
}



/* Entry: 103b65a8c; end: 103b65d4b;  */

void FUN_103b65a8c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b65b64);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103b65d4c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b65b2c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000103b65bdc();
    lVar6 = *unaff_x20;
    goto joined_r0x000103b65b78;
  }
  lVar6 = *unaff_x20;
joined_r0x000103b65b78:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b65bdc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103b65d4c; end: 103b66197;  */

void FUN_103b65d4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e9e988;
  func_0x0001000285a8(0x112e9e988,&UNK_10daaec40);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103b65fb4:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b65fe4);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103b65fb4;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b65fe8);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103b66198; end: 103b66223;  */

undefined * FUN_103b66198(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112fef568;
    func_0x0001000285a8(0x112fef568,&UNK_10dc59448);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x18) * 2;
  }
  return puVar1;
}



/* Entry: 103b66224; end: 103b66473;  */

undefined * FUN_103b66224(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b66368);
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
    puVar3 = (undefined *)0x112fef568;
    func_0x0001000285a8(0x112fef568,&UNK_10dc59448);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112fef560;
    func_0x0001000285a8(0x112fef560,&UNK_10dc59440);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103b66474; end: 103b6657f;  */

void FUN_103b66474(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_103b672a0();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112fef560;
      func_0x0001000285a8(0x112fef560,&UNK_10dc59440);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_103b66580(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_103b66b0c(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 103b66580; end: 103b66b0b;  */

void FUN_103b66580(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  double *pdVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x21;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  double dVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar12 = 0;
    do {
      lVar22 = lVar12 + 1;
      if (lVar22 < lVar21) {
        lVar19 = *param_3;
        puVar7 = (undefined8 *)(lVar19 + lVar22 * 0x18);
        uStack_78 = *puVar7;
        uStack_68 = puVar7[2];
        uStack_70 = puVar7[1];
        puVar7 = (undefined8 *)(lVar19 + lVar12 * 0x18);
        uStack_90 = *puVar7;
        uStack_80 = puVar7[2];
        uStack_88 = puVar7[1];
        puVar7 = &uStack_78;
        FUN_103b658b8(puVar7,&uStack_90);
        if (unaff_x21 != 0) goto LAB_103b66aa4;
        lVar17 = lVar12 + 2;
        lVar9 = lVar22;
        lVar22 = lVar17;
        if (lVar17 < lVar21) {
          do {
            lVar22 = lVar17;
            plVar8 = (long *)(lVar19 + lVar9 * 0x18);
            plVar13 = (long *)(lVar19 + lVar22 * 0x18);
            lVar17 = *plVar13;
            lVar15 = plVar13[2];
            lVar9 = plVar8[2];
            if (*(long *)(lVar15 + 0x10) == 0) {
              lVar15 = *(long *)(lVar9 + 0x10);
              if (lVar15 != 0) {
                dVar24 = 0.0;
                goto LAB_103b666b4;
              }
LAB_103b666e0:
              if ((lVar17 != *plVar8) || (plVar13[1] != plVar8[1])) {
                func_0x000107c605b8();
                uVar2 = (uint)lVar17;
                goto joined_r0x000103b66640;
              }
              if (((ulong)puVar7 & 1) != 0) goto joined_r0x000103b66980;
            }
            else {
              dVar24 = *(double *)(lVar15 + 0x20);
              lVar14 = *(long *)(lVar15 + 0x10) + -1;
              if (lVar14 != 0) {
                pdVar11 = (double *)(lVar15 + 0x28);
                dVar29 = dVar24;
                do {
                  dVar24 = *pdVar11;
                  if (*pdVar11 <= dVar29) {
                    dVar24 = dVar29;
                  }
                  lVar14 = lVar14 + -1;
                  pdVar11 = pdVar11 + 1;
                  dVar29 = dVar24;
                } while (lVar14 != 0);
              }
              lVar15 = *(long *)(lVar9 + 0x10);
              if (lVar15 == 0) {
                if (dVar24 == 0.0) goto LAB_103b666e0;
                dVar29 = 0.0;
              }
              else {
LAB_103b666b4:
                dVar29 = *(double *)(lVar9 + 0x20);
                lVar15 = lVar15 + -1;
                if (lVar15 != 0) {
                  pdVar11 = (double *)(lVar9 + 0x28);
                  dVar30 = dVar29;
                  do {
                    dVar29 = *pdVar11;
                    if (*pdVar11 <= dVar30) {
                      dVar29 = dVar30;
                    }
                    lVar15 = lVar15 + -1;
                    pdVar11 = pdVar11 + 1;
                    dVar30 = dVar29;
                  } while (lVar15 != 0);
                }
                if (dVar24 == dVar29) goto LAB_103b666e0;
              }
              uVar2 = (uint)(dVar24 < dVar29);
joined_r0x000103b66640:
              if ((((uint)puVar7 ^ uVar2) & 1) != 0) break;
            }
            lVar17 = lVar22 + 1;
            lVar9 = lVar22;
            lVar22 = lVar21;
          } while (lVar17 != lVar21);
        }
        if (((ulong)puVar7 & 1) != 0) {
joined_r0x000103b66980:
          if (lVar22 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ae0);
            (*pcVar1)();
          }
          if (lVar12 < lVar22) {
            lVar9 = *param_3;
            lVar15 = lVar22 * 0x18;
            lVar19 = lVar12 * 0x18;
            lVar17 = lVar22;
            lVar21 = lVar12;
            do {
              lVar17 = lVar17 + -1;
              if (lVar21 != lVar17) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66b00);
                  (*pcVar1)();
                }
                puVar7 = (undefined8 *)(lVar9 + lVar19);
                lVar14 = lVar9 + lVar15;
                uVar18 = *puVar7;
                uVar26 = puVar7[2];
                uVar23 = puVar7[1];
                uVar31 = *(undefined8 *)(lVar14 + -0x10);
                uVar28 = *(undefined8 *)(lVar14 + -0x18);
                puVar7[2] = *(undefined8 *)(lVar14 + -8);
                puVar7[1] = uVar31;
                *puVar7 = uVar28;
                *(undefined8 *)(lVar14 + -0x18) = uVar18;
                *(undefined8 *)(lVar14 + -8) = uVar26;
                *(undefined8 *)(lVar14 + -0x10) = uVar23;
              }
              lVar21 = lVar21 + 1;
              lVar15 = lVar15 + -0x18;
              lVar19 = lVar19 + 0x18;
            } while (lVar21 < lVar17);
          }
        }
      }
      lVar21 = param_3[1];
      lVar19 = lVar22;
      if (lVar22 < lVar21) {
        if (SBORROW8(lVar22,lVar12)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66adc);
          (*pcVar1)();
        }
        if (lVar22 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ae4);
            (*pcVar1)();
          }
          lVar17 = lVar12 + param_4;
          if (lVar21 <= lVar12 + param_4) {
            lVar17 = lVar21;
          }
          if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ae8);
            (*pcVar1)();
          }
          if (lVar22 != lVar17) {
            lVar21 = *param_3;
            do {
              puVar10 = (ulong *)(lVar21 + lVar22 * 0x18);
              uVar3 = *puVar10;
              uVar25 = puVar10[1];
              uVar16 = puVar10[2];
              lVar19 = lVar22;
              do {
                puVar10 = (ulong *)(lVar21 + lVar19 * 0x18);
                puVar20 = puVar10 + -3;
                uVar27 = puVar10[-1];
                if (*(long *)(uVar16 + 0x10) == 0) {
                  lVar9 = *(long *)(uVar27 + 0x10);
                  if (lVar9 != 0) {
                    dVar24 = 0.0;
                    goto LAB_103b66864;
                  }
LAB_103b66890:
                  if (((uVar3 == *puVar20) && (uVar25 == puVar10[-2])) ||
                     (func_0x000107c605b8(), (uVar3 & 1) == 0)) break;
                }
                else {
                  dVar24 = *(double *)(uVar16 + 0x20);
                  lVar9 = *(long *)(uVar16 + 0x10) + -1;
                  if (lVar9 != 0) {
                    pdVar11 = (double *)(uVar16 + 0x28);
                    dVar29 = dVar24;
                    do {
                      dVar24 = *pdVar11;
                      if (*pdVar11 <= dVar29) {
                        dVar24 = dVar29;
                      }
                      lVar9 = lVar9 + -1;
                      pdVar11 = pdVar11 + 1;
                      dVar29 = dVar24;
                    } while (lVar9 != 0);
                  }
                  lVar9 = *(long *)(uVar27 + 0x10);
                  if (lVar9 == 0) {
                    if (dVar24 == 0.0) goto LAB_103b66890;
                    dVar29 = 0.0;
                  }
                  else {
LAB_103b66864:
                    dVar29 = *(double *)(uVar27 + 0x20);
                    lVar9 = lVar9 + -1;
                    if (lVar9 != 0) {
                      pdVar11 = (double *)(uVar27 + 0x28);
                      dVar30 = dVar29;
                      do {
                        dVar29 = *pdVar11;
                        if (*pdVar11 <= dVar30) {
                          dVar29 = dVar30;
                        }
                        lVar9 = lVar9 + -1;
                        pdVar11 = pdVar11 + 1;
                        dVar30 = dVar29;
                      } while (lVar9 != 0);
                    }
                    if (dVar24 == dVar29) goto LAB_103b66890;
                  }
                  if (dVar29 <= dVar24) break;
                }
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66aec);
                  (*pcVar1)();
                }
                lVar19 = lVar19 + -1;
                uVar3 = *puVar10;
                uVar16 = puVar10[2];
                uVar27 = puVar10[2];
                uVar25 = puVar10[1];
                puVar10[1] = puVar10[-2];
                *puVar10 = *puVar20;
                puVar10[2] = puVar10[-1];
                *puVar20 = uVar3;
                puVar10[-1] = uVar27;
                puVar10[-2] = uVar25;
              } while (lVar19 != lVar12);
              lVar22 = lVar22 + 1;
              lVar19 = lVar17;
            } while (lVar22 != lVar17);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar19 < lVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ad0);
        (*pcVar1)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar3 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar3 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      *(long *)(puVar6 + uVar3 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar6 + uVar3 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66b04);
        (*pcVar1)();
      }
      FUN_103b66c7c(&puStack_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_103b66aa4;
      lVar21 = param_3[1];
      lVar12 = lVar19;
    } while (lVar19 < lVar21);
  }
  puVar6 = puStack_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66b0c);
    (*pcVar1)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar3 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar3) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66b08);
      (*pcVar1)();
    }
    lVar19 = uVar3 - 1;
    lVar17 = *(long *)(puVar6 + uVar3 * 0x10);
    lVar22 = *(long *)(puVar6 + lVar19 * 0x10 + 0x28);
    FUN_103b66eec(lVar12 + lVar17 * 0x18,lVar12 + *(long *)(puVar6 + lVar19 * 0x10 + 0x20) * 0x18,
                  lVar12 + lVar22 * 0x18,lVar21);
    if (unaff_x21 != 0) break;
    if (lVar22 < lVar17) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ad4);
      (*pcVar1)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar3 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66ad8);
      (*pcVar1)();
    }
    *(long *)(puVar6 + uVar3 * 0x10) = lVar17;
    *(long *)((long)(puVar6 + uVar3 * 0x10) + 8) = lVar22;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar19);
    puVar6 = puStack_58;
    uVar3 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_103b66aa4:
  func_0x000107c6142c(puStack_58);
  return;
}



/* Entry: 103b66b0c; end: 103b66c7b;  */

void FUN_103b66b0c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  double dVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    do {
      puVar3 = (ulong *)(lVar7 + param_3 * 0x18);
      uVar2 = *puVar3;
      uVar11 = puVar3[1];
      uVar5 = puVar3[2];
      lVar8 = param_3;
      do {
        puVar9 = (ulong *)(lVar7 + lVar8 * 0x18);
        puVar3 = puVar9 + -3;
        uVar12 = puVar9[-1];
        if (*(long *)(uVar5 + 0x10) == 0) {
          lVar6 = *(long *)(uVar12 + 0x10);
          if (lVar6 != 0) {
            dVar10 = 0.0;
            goto LAB_103b66be8;
          }
LAB_103b66c14:
          if (((uVar2 == *puVar3) && (uVar11 == puVar9[-2])) ||
             (func_0x000107c605b8(), (uVar2 & 1) == 0)) break;
        }
        else {
          dVar10 = *(double *)(uVar5 + 0x20);
          lVar6 = *(long *)(uVar5 + 0x10) + -1;
          if (lVar6 != 0) {
            pdVar4 = (double *)(uVar5 + 0x28);
            dVar13 = dVar10;
            do {
              dVar10 = *pdVar4;
              if (*pdVar4 <= dVar13) {
                dVar10 = dVar13;
              }
              lVar6 = lVar6 + -1;
              pdVar4 = pdVar4 + 1;
              dVar13 = dVar10;
            } while (lVar6 != 0);
          }
          lVar6 = *(long *)(uVar12 + 0x10);
          if (lVar6 == 0) {
            if (dVar10 == 0.0) goto LAB_103b66c14;
            dVar13 = 0.0;
          }
          else {
LAB_103b66be8:
            dVar13 = *(double *)(uVar12 + 0x20);
            lVar6 = lVar6 + -1;
            if (lVar6 != 0) {
              pdVar4 = (double *)(uVar12 + 0x28);
              dVar14 = dVar13;
              do {
                dVar13 = *pdVar4;
                if (*pdVar4 <= dVar14) {
                  dVar13 = dVar14;
                }
                lVar6 = lVar6 + -1;
                pdVar4 = pdVar4 + 1;
                dVar14 = dVar13;
              } while (lVar6 != 0);
            }
            if (dVar10 == dVar13) goto LAB_103b66c14;
          }
          if (dVar13 <= dVar10) break;
        }
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b66c7c);
          (*pcVar1)();
        }
        lVar8 = lVar8 + -1;
        uVar2 = *puVar9;
        uVar5 = puVar9[2];
        uVar12 = puVar9[2];
        uVar11 = puVar9[1];
        puVar9[1] = puVar9[-2];
        *puVar9 = *puVar3;
        puVar9[2] = puVar9[-1];
        *puVar3 = uVar2;
        puVar9[-1] = uVar12;
        puVar9[-2] = uVar11;
      } while (lVar8 != param_1);
      param_3 = param_3 + 1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 103b66c7c; end: 103b66eeb;  */

undefined8 FUN_103b66c7c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_103b66d54;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ed4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_103b66db8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ec4);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ecc);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66eac);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66eb0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66eb8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ec0);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_103b66d54:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66eb4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ebc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ec8);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ed0);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_103b66db8;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ed8);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ea0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66eec);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_103b66eec(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ea4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b66ea8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 103b66eec; end: 103b6729f;  */

undefined8 FUN_103b66eec(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  double *pdVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar4 = ((long)param_2 - (long)param_1) / 0x18;
  lVar1 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar4 < lVar1) {
    if (((param_4 < param_1) || (param_1 + lVar4 * 3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar4 * 0x18);
    }
    puVar8 = param_4 + lVar4 * 3;
    puVar6 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar12 = *param_2;
        uVar5 = param_2[2];
        uVar2 = param_4[2];
        if (*(long *)(uVar5 + 0x10) == 0) {
          lVar4 = *(long *)(uVar2 + 0x10);
          if (lVar4 != 0) {
            dVar13 = 0.0;
            goto LAB_103b67064;
          }
LAB_103b67090:
          if (((uVar12 != *param_4) || (param_2[1] != param_4[1])) &&
             (func_0x000107c605b8(), (uVar12 & 1) != 0)) goto LAB_103b66fd0;
LAB_103b670b8:
          puVar9 = param_4 + 3;
          puVar11 = param_4;
        }
        else {
          dVar13 = *(double *)(uVar5 + 0x20);
          lVar4 = *(long *)(uVar5 + 0x10) + -1;
          if (lVar4 != 0) {
            pdVar3 = (double *)(uVar5 + 0x28);
            dVar14 = dVar13;
            do {
              dVar13 = *pdVar3;
              if (*pdVar3 <= dVar14) {
                dVar13 = dVar14;
              }
              lVar4 = lVar4 + -1;
              pdVar3 = pdVar3 + 1;
              dVar14 = dVar13;
            } while (lVar4 != 0);
          }
          lVar4 = *(long *)(uVar2 + 0x10);
          if (lVar4 == 0) {
            if (dVar13 == 0.0) goto LAB_103b67090;
            dVar14 = 0.0;
          }
          else {
LAB_103b67064:
            dVar14 = *(double *)(uVar2 + 0x20);
            lVar4 = lVar4 + -1;
            if (lVar4 != 0) {
              pdVar3 = (double *)(uVar2 + 0x28);
              dVar15 = dVar14;
              do {
                dVar14 = *pdVar3;
                if (*pdVar3 <= dVar15) {
                  dVar14 = dVar15;
                }
                lVar4 = lVar4 + -1;
                pdVar3 = pdVar3 + 1;
                dVar15 = dVar14;
              } while (lVar4 != 0);
            }
            if (dVar13 == dVar14) goto LAB_103b67090;
          }
          if (dVar14 <= dVar13) goto LAB_103b670b8;
LAB_103b66fd0:
          puVar9 = param_4;
          puVar11 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = puVar9;
        if (puVar6 != puVar11) {
          uVar2 = puVar11[1];
          uVar12 = *puVar11;
          puVar6[2] = puVar11[2];
          puVar6[1] = uVar2;
          *puVar6 = uVar12;
        }
        puVar6 = puVar6 + 3;
      } while (param_4 < puVar8);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar1 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar1 * 0x18);
    }
    puVar8 = param_4 + lVar1 * 3;
    puVar6 = param_2;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
LAB_103b670f8:
      puVar9 = param_2 + -3;
      puVar11 = param_3;
      do {
        puVar10 = puVar8 + -3;
        uVar12 = *puVar10;
        uVar5 = puVar8[-1];
        uVar2 = param_2[-1];
        if (*(long *)(uVar5 + 0x10) == 0) {
          lVar4 = *(long *)(uVar2 + 0x10);
          if (lVar4 != 0) {
            dVar13 = 0.0;
LAB_103b67190:
            dVar14 = *(double *)(uVar2 + 0x20);
            lVar4 = lVar4 + -1;
            if (lVar4 != 0) {
              pdVar3 = (double *)(uVar2 + 0x28);
              dVar15 = dVar14;
              do {
                dVar14 = *pdVar3;
                if (*pdVar3 <= dVar15) {
                  dVar14 = dVar15;
                }
                lVar4 = lVar4 + -1;
                pdVar3 = pdVar3 + 1;
                dVar15 = dVar14;
              } while (lVar4 != 0);
            }
            if (dVar13 != dVar14) goto LAB_103b671dc;
          }
LAB_103b671bc:
          if (((uVar12 != param_2[-3]) || (puVar8[-2] != param_2[-2])) &&
             (func_0x000107c605b8(), (uVar12 & 1) != 0)) goto LAB_103b671f8;
        }
        else {
          dVar13 = *(double *)(uVar5 + 0x20);
          lVar4 = *(long *)(uVar5 + 0x10) + -1;
          if (lVar4 != 0) {
            pdVar3 = (double *)(uVar5 + 0x28);
            dVar14 = dVar13;
            do {
              dVar13 = *pdVar3;
              if (*pdVar3 <= dVar14) {
                dVar13 = dVar14;
              }
              lVar4 = lVar4 + -1;
              pdVar3 = pdVar3 + 1;
              dVar14 = dVar13;
            } while (lVar4 != 0);
          }
          lVar4 = *(long *)(uVar2 + 0x10);
          if (lVar4 != 0) goto LAB_103b67190;
          if (dVar13 == 0.0) goto LAB_103b671bc;
          dVar14 = 0.0;
LAB_103b671dc:
          if (dVar13 < dVar14) goto LAB_103b671f8;
        }
        puVar7 = puVar11 + -3;
        if ((puVar11 != puVar8) || (puVar8 <= puVar7)) {
          uVar2 = puVar8[-2];
          uVar12 = *puVar10;
          puVar11[-1] = puVar8[-1];
          puVar11[-2] = uVar2;
          *puVar7 = uVar12;
        }
        puVar6 = param_2;
        puVar8 = puVar10;
        puVar11 = puVar7;
        if (puVar10 <= param_4) break;
      } while( true );
    }
  }
LAB_103b67238:
  lVar4 = ((long)puVar8 - (long)param_4) / 0x18;
  if ((puVar6 != param_4) || (param_4 + lVar4 * 3 <= puVar6)) {
    func_0x000107c610b8(puVar6,param_4,lVar4 * 0x18);
  }
  return 1;
LAB_103b671f8:
  param_3 = puVar11 + -3;
  if ((puVar11 != param_2) || (param_2 <= param_3)) {
    uVar2 = param_2[-2];
    uVar12 = *puVar9;
    puVar11[-1] = param_2[-1];
    puVar11[-2] = uVar2;
    *param_3 = uVar12;
  }
  puVar6 = puVar9;
  if ((puVar9 <= param_1) || (param_2 = puVar9, puVar8 <= param_4)) goto LAB_103b67238;
  goto LAB_103b670f8;
}



/* Entry: 103b672a0; end: 103b672b3;  */

/* WARNING: Removing unreachable block (ram,0x000103b66244) */
/* WARNING: Removing unreachable block (ram,0x000103b66254) */
/* WARNING: Removing unreachable block (ram,0x000103b66364) */
/* WARNING: Removing unreachable block (ram,0x000103b66260) */
/* WARNING: Removing unreachable block (ram,0x000103b66268) */
/* WARNING: Removing unreachable block (ram,0x000103b662ec) */
/* WARNING: Removing unreachable block (ram,0x000103b662f8) */
/* WARNING: Removing unreachable block (ram,0x000103b662fc) */
/* WARNING: Removing unreachable block (ram,0x000103b66300) */
/* WARNING: Removing unreachable block (ram,0x000103b66314) */

undefined * FUN_103b672a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112fef568;
    func_0x0001000285a8(0x112fef568,&UNK_10dc59448);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112fef560;
  func_0x0001000285a8(0x112fef560,&UNK_10dc59440);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103b672b4; end: 103b67433;  */

long FUN_103b672b4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar11 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b67434);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar12 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar13 = lVar5;
    while( true ) {
      while (uVar11 == 0) {
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103b67430);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar10 <= lVar5 + 1) {
            uVar10 = lVar5 + 1;
          }
          lVar13 = uVar10 - 1;
          param_3 = lVar12;
          goto LAB_103b673e4;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar6 * 0x10);
      uVar2 = puVar1[1];
      uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
      uVar11 = uVar11 - 1 & uVar11;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar8;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 3;
      func_0x000107c61434();
      func_0x000107c61434(uVar8);
      lVar5 = lVar13;
    }
    func_0x000107c61434();
    func_0x000107c61434(uVar8);
  }
LAB_103b673e4:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar7;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Entry: 103b67434; end: 103b67473;  */

void FUN_103b67434(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b67474; end: 103b6747b;  */

void FUN_103b67474(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103b6747c; end: 103b67593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b6747c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef570);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef578);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fef580) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b67594; end: 103b6763f; -[SCFanPassSubscriptionPageLaunchPayload initWithHostAccountId:displayNameOrUsername:loggingContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef570);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fef578);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + _DAT_112fef580) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103b67640; end: 103b6769f; -[SCFanPassSubscriptionPageLaunchPayload init] */

void FUN_103b67640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionScope.FanPassSubscriptionPageLaunchPayload",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b6766c);
  (*pcVar1)();
}



/* Entry: 103b676a0; end: 103b676ef; -[SCFanPassSubscriptionPageLaunchPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b676a0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef570 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef578 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fef580));
  return;
}



/* Entry: 103b676f0; end: 103b6770f;  */

void FUN_103b676f0(void)

{
  func_0x000107c61168(&PTR_PTR_1129318e8);
  return;
}



/* Entry: 103b67710; end: 103b67753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67710(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fef5e0;
  func_0x000107c61428(unaff_x20 + _DAT_112fef5e0,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 103b67754; end: 103b6789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67754(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fef5e0;
  func_0x000107c61428(unaff_x20 + _DAT_112fef5e0,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 103b678a0; end: 103b678e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b678a0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fef5e8;
  func_0x000107c61428(unaff_x20 + _DAT_112fef5e8,auStack_38,0,0);
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103b678e4; end: 103b67937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b678e4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fef5e8;
  func_0x000107c61428(unaff_x20 + _DAT_112fef5e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 103b67938; end: 103b67977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b67938(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112fef5e8;
  func_0x000107c61428(unaff_x20 + _DAT_112fef5e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b67978;
  return auVar2;
}



/* Entry: 103b67978; end: 103b6797b;  */

void FUN_103b67978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b6797c; end: 103b67ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b6797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fef5e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fef5e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fef5e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5b0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5c0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5c8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5d8) = param_8;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_9);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_8);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return puVar4;
}



/* Entry: 103b67ad8; end: 103b67b33;  */

undefined8 FUN_103b67ad8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  uVar1 = param_1;
  FUN_103b67eb8();
  func_0x000107c61170(in_x7);
  func_0x000107c615e8(in_stack_00000000);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 103b67b34; end: 103b67c17; -[_TtC24FanPassSubscriptionScope24FanPassSubscriptionScope initWithUiContainer:hostAccountId:displayNameOrUsername:shouldDismissToManagementPage:isOperaInlinePaywall:loggingContext:delegate:] */

undefined8
FUN_103b67b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  uVar1 = param_3;
  FUN_103b67eb8(param_3,param_4,param_2,param_5,uVar2,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return uVar1;
}



/* Entry: 103b67c18; end: 103b67d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b67c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fef5e0;
  func_0x000107c61614(unaff_x20 + _DAT_112fef5e0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fef5e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5b0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fef5c0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5c8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fef5d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fef5d8) = 0;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_5);
  return puVar3;
}



/* Entry: 103b67d24; end: 103b67d53;  */

undefined8 FUN_103b67d24(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_103b67fdc();
  func_0x000107c615e8(in_x4);
  return param_1;
}



/* Entry: 103b67d54; end: 103b67ddb; -[_TtC24FanPassSubscriptionScope24FanPassSubscriptionScope initWithHostAccountId:displayNameOrUsername:delegate:] */

undefined8
FUN_103b67d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_5);
  FUN_103b67fdc(param_3,param_2,param_4,uVar1,param_5);
  func_0x000107c615e8(param_5);
  return param_3;
}



/* Entry: 103b67ddc; end: 103b67e37; -[_TtC24FanPassSubscriptionScope24FanPassSubscriptionScope init] */

void FUN_103b67ddc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSubscriptionScope.FanPassSubscriptionScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b67e08);
  (*pcVar1)();
}



/* Entry: 103b67e38; end: 103b67eb7; -[_TtC24FanPassSubscriptionScope24FanPassSubscriptionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b67e38(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fef5b0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef5b8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fef5c0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fef5d8));
  FUN_103b680d0(param_1 + _DAT_112fef5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fef5e8));
  return;
}


