/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fe8ffc; end: 103fe900b; -[SCAdUATInfoCardConfigValue buttonAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe8ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043fd8));
  return;
}



/* Entry: 103fe900c; end: 103fe901b; -[SCAdUATInfoCardConfigValue buttonStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe900c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043fe0);
}



/* Entry: 103fe901c; end: 103fe902b; -[SCAdUATInfoCardConfigValue collectionCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe901c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043fe8);
}



/* Entry: 103fe902c; end: 103fe903b; -[SCAdUATInfoCardConfigValue collectionCardAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe902c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043ff0));
  return;
}



/* Entry: 103fe903c; end: 103fe904b; -[SCAdUATInfoCardConfigValue collectionCardFinalAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe903c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043ff8));
  return;
}



/* Entry: 103fe904c; end: 103fe9223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043fb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043fc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043fc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043fd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043fd8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113043fe0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113043fe8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113043ff0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113043ff8) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe9224; end: 103fe92e7; -[SCAdUATInfoCardConfigValue initWithCardType:cardAnimationType:cardAnimation:cardColorAnimation:buttonAnimation:buttonStyle:collectionCardType:collectionCardAnimation:collectionCardFinalAnimation:] */

void FUN_103fe9224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain();
  func_0x000103fe9138(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}



/* Entry: 103fe92e8; end: 103fe9317;  */

void FUN_103fe92e8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103fe9318(param_1);
  return;
}



/* Entry: 103fe9318; end: 103fe94e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe9318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113043fb8) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043fc0) = uVar1;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  lVar3 = 0;
  func_0x000103fe8f98();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113043f80) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113043f88) = uVar2;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113043fc8) = plVar5;
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113043f80) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113043f88) = uVar2;
  plVar5 = &lStack_80;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113043fd0) = plVar5;
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113043f80) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113043f88) = uVar2;
  plVar5 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113043fd8) = plVar5;
  uVar1 = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_113043fe0) = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_113043fe8) = uVar1;
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113043f80) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113043f88) = uVar2;
  plVar5 = &lStack_a0;
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113043ff0) = plVar5;
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_113043f80) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_113043f88) = uVar2;
  plVar5 = &lStack_b0;
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_113043ff8) = plVar5;
  _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe94e4; end: 103fe9503; -[SCAdUATInfoCardConfigValue hash] */

void FUN_103fe94e4(void)

{
  FUN_103fe9504();
  return;
}



/* Entry: 103fe9504; end: 103fe96e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe9504(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  __ss6HasherVABycfC(auStack_88);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113043fb8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113043fc0));
  lVar1 = *(long *)(unaff_x20 + _DAT_113043fc8);
  __ss6HasherVABycfC(auStack_d0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_113043fd0);
  __ss6HasherVABycfC(auStack_118);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_113043fd8);
  __ss6HasherVABycfC(auStack_160);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113043fe0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113043fe8));
  lVar1 = *(long *)(unaff_x20 + _DAT_113043ff0);
  __ss6HasherVABycfC(auStack_1a8);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  lVar1 = *(long *)(unaff_x20 + _DAT_113043ff8);
  __ss6HasherVABycfC(auStack_1f0);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f80));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar1 + _DAT_113043f88));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fe96e4; end: 103fe990f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103fe96e4(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,auStack_80,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar7 & 1) != 0) {
      iVar2 = *(int *)(unaff_x20 + _DAT_113043fb8);
      iVar3 = *(int *)(lStack_88 + _DAT_113043fb8);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_113043fc0);
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113043fc0);
      uVar14 = *(undefined8 *)(lStack_88 + _DAT_113043fc8);
      uVar8 = 0;
      func_0x000103fe8f98();
      auStack_80[0] = uVar14;
      lStack_68 = uVar8;
      _objc_retain(uVar14);
      uVar4 = (uint)auStack_80;
      FUN_103fe8dc8();
      func_0x00010006e7f4(auStack_80);
      auStack_80[0] = *(undefined8 *)(lStack_88 + _DAT_113043fd0);
      lStack_68 = uVar8;
      _objc_retain();
      uVar5 = (uint)auStack_80;
      FUN_103fe8dc8();
      func_0x00010006e7f4(auStack_80);
      auStack_80[0] = *(undefined8 *)(lStack_88 + _DAT_113043fd8);
      lStack_68 = uVar8;
      _objc_retain();
      puVar9 = auStack_80;
      FUN_103fe8dc8(puVar9);
      func_0x00010006e7f4(auStack_80);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_113043fe0);
      uVar17 = *(undefined8 *)(lStack_88 + _DAT_113043fe0);
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_113043fe8);
      uVar15 = *(undefined8 *)(lStack_88 + _DAT_113043fe8);
      auStack_80[0] = *(undefined8 *)(lStack_88 + _DAT_113043ff0);
      lStack_68 = uVar8;
      _objc_retain();
      puVar10 = auStack_80;
      FUN_103fe8dc8(puVar10);
      func_0x00010006e7f4(auStack_80);
      auStack_80[0] = *(undefined8 *)(lStack_88 + _DAT_113043ff8);
      lStack_68 = uVar8;
      _objc_retain();
      puVar11 = auStack_80;
      FUN_103fe8dc8(puVar11);
      _objc_release(lStack_88);
      func_0x00010006e7f4(auStack_80);
      uVar1 = 0;
      if ((int)uVar16 == (int)uVar17) {
        uVar1 = (uint)(iVar2 == iVar3 && (int)uVar13 == (int)uVar12) & uVar4 & uVar5 & (uint)puVar9;
      }
      uVar4 = 0;
      if ((int)uVar14 == (int)uVar15) {
        uVar4 = uVar1;
      }
      return uVar4 & (uint)puVar10 & (uint)puVar11;
    }
  }
  return 0;
}



/* Entry: 103fe9910; end: 103fe998f; -[SCAdUATInfoCardConfigValue isEqual:] */

uint FUN_103fe9910(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fe96e4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe9990; end: 103fe9993; -[SCAdUATInfoCardConfigValue copyWithZone:] */

void FUN_103fe9990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe9994; end: 103fe99c3; -[SCAdUATInfoCardConfigValue description] */

void FUN_103fe9994(void)

{
  undefined1 auStack_80 [112];
  
  _objc_retain();
  FUN_103fe9aa8(auStack_80);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe99c4; end: 103fe9a3f; -[SCAdUATInfoCardConfigValue init] */

void FUN_103fe99c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdUATInfoCardConfigValueWrapper.swift",0x37,2,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe9a0c);
  (*pcVar1)();
}



/* Entry: 103fe9a40; end: 103fe9aa7; -[SCAdUATInfoCardConfigValue .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe9a40(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043fc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043fd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043fd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043ff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113043ff8));
  return;
}



/* Entry: 103fe9aa8; end: 103fe9bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe9aa8(undefined8 *param_1,long param_2)

{
  long lVar1;
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
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_113043fb8);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113043fc0);
  uVar6 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fc8) + _DAT_113043f80);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fc8) + _DAT_113043f88);
  uVar7 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fd0) + _DAT_113043f80);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fd0) + _DAT_113043f88);
  uVar13 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fd8) + _DAT_113043f80);
  uVar9 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043fd8) + _DAT_113043f88);
  uVar10 = *(undefined8 *)(param_2 + _DAT_113043fe0);
  uVar12 = *(undefined8 *)(param_2 + _DAT_113043fe8);
  uVar14 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043ff0) + _DAT_113043f80);
  uVar11 = *(undefined8 *)(*(long *)(param_2 + _DAT_113043ff0) + _DAT_113043f88);
  lVar1 = *(long *)(param_2 + _DAT_113043ff8);
  _objc_retain();
  _objc_release(param_2);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_113043f80);
  uVar15 = *(undefined8 *)(lVar1 + _DAT_113043f88);
  _objc_release(lVar1);
  *param_1 = uVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  param_1[3] = uVar3;
  param_1[4] = uVar7;
  param_1[5] = uVar4;
  param_1[6] = uVar13;
  param_1[7] = uVar9;
  param_1[8] = uVar10;
  param_1[9] = uVar12;
  param_1[10] = uVar14;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar15;
  return;
}



/* Entry: 103fe9bfc; end: 103fe9c1b;  */

void FUN_103fe9bfc(void)

{
  _objc_opt_self(&PTR_PTR_11297ad68);
  return;
}



/* Entry: 103fe9c1c; end: 103fe9d23;  */

void FUN_103fe9c1c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103fe9d90();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103fe9d24; end: 103fe9d5f; -[SCAdDeviceInfoConstants init] */

void FUN_103fe9d24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103fe9dd8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe9d60; end: 103fe9d8f;  */

void FUN_103fe9d60(void)

{
  FUN_103fe9dd8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fe9d90; end: 103fe9dd7; -[SCAdDeviceInfoConstants .cxx_destruct] */

void FUN_103fe9d90(void)

{
  return;
}



/* Entry: 103fe9dd8; end: 103fe9df7;  */

void FUN_103fe9dd8(void)

{
  _objc_opt_self(&PTR_PTR_11297ae70);
  return;
}



/* Entry: 103fe9df8; end: 103fe9dfb;  */

void FUN_103fe9df8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd960;
  _swift_getWitnessTable(&UNK_10dcbd960,&UNK_110731278);
  puRam0000000113044028 = puVar1;
  return;
}



/* Entry: 103fe9dfc; end: 103fe9e3b;  */

void FUN_103fe9dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd960;
  _swift_getWitnessTable(&UNK_10dcbd960,&UNK_110731278);
  puRam0000000113044028 = puVar1;
  return;
}



/* Entry: 103fe9e3c; end: 103fe9e3f;  */

void FUN_103fe9e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbda00;
  _swift_getWitnessTable(&UNK_10dcbda00,&UNK_110731298);
  puRam0000000113044030 = puVar1;
  return;
}



/* Entry: 103fe9e40; end: 103fe9e7f;  */

void FUN_103fe9e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbda00;
  _swift_getWitnessTable(&UNK_10dcbda00,&UNK_110731298);
  puRam0000000113044030 = puVar1;
  return;
}



/* Entry: 103fe9e80; end: 103fe9e83;  */

void FUN_103fe9e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbdaa0;
  _swift_getWitnessTable(&UNK_10dcbdaa0,&UNK_1107312b8);
  puRam0000000113044038 = puVar1;
  return;
}



/* Entry: 103fe9e84; end: 103fe9ec3;  */

void FUN_103fe9e84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113044038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbdaa0;
  _swift_getWitnessTable(&UNK_10dcbdaa0,&UNK_1107312b8);
  puRam0000000113044038 = puVar1;
  return;
}



/* Entry: 103fe9ec4; end: 103fea0a7;  */

undefined1  [16] FUN_103fe9ec4(void)

{
  return ZEXT816(0x110731278);
}



/* Entry: 103fea0a8; end: 103fea0d3;  */

long FUN_103fea0a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fea0d4; end: 103fea133;  */

int FUN_103fea0d4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103fea134; end: 103fea143; -[SCAdBatteryData isBatteryCharging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fea134(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113044068);
}



/* Entry: 103fea144; end: 103fea15b; -[SCAdBatteryData batteryLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fea144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113044070);
}



/* Entry: 103fea15c; end: 103fea287; -[SCAdBatteryData initWithIsBatteryCharging:batteryLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea15c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_113044068) = param_4;
  *(undefined8 *)(param_2 + _DAT_113044070) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fea288; end: 103fea2f3; -[SCAdBatteryData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea288(long param_1)

{
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_113044068));
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_113044070) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_113044070);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fea2f4; end: 103fea3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103fea2f4(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113044068);
      bVar2 = *(byte *)(lStack_68 + _DAT_113044068);
      dVar5 = *(double *)(unaff_x20 + _DAT_113044070);
      dVar6 = *(double *)(lStack_68 + _DAT_113044070);
      _objc_release();
      return dVar5 == dVar6 & (bVar1 ^ bVar2 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 103fea3b4; end: 103fea433; -[SCAdBatteryData isEqual:] */

uint FUN_103fea3b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fea2f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fea434; end: 103fea437; -[SCAdBatteryData copyWithZone:] */

void FUN_103fea434(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fea438; end: 103fea453; -[SCAdBatteryData description] */

void FUN_103fea438(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fea454; end: 103fea4ef; -[SCAdBatteryData init] */

void FUN_103fea454(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDeviceInfo/AdBatteryDataWrapper.swift",0x27
             ,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fea49c);
  (*pcVar1)();
}



/* Entry: 103fea4f0; end: 103fea4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea4f0(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113044068) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113044070) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fea4f8; end: 103fea507; -[SCAdDiskData deviceTotalDiskSpace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130440a0));
  return;
}



/* Entry: 103fea508; end: 103fea517; -[SCAdDiskData deviceFreeDiskSpace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130440a8));
  return;
}



/* Entry: 103fea518; end: 103fea57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea518(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130440a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130440a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fea57c; end: 103fea5f3; -[SCAdDiskData initWithDeviceTotalDiskSpace:deviceFreeDiskSpace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea57c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130440a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130440a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103fea5f4; end: 103fea64b;  */

void FUN_103fea5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_103fea64c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103fea64c; end: 103fea723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea64c(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_1130440a0) = puVar1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c466c0(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_1130440a8) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fea724; end: 103fea757; -[SCAdDiskData hash] */

undefined8 FUN_103fea724(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fea758();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103fea758; end: 103fea823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fea758(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_1130440a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130440a8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fea824; end: 103fea9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103fea824(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_1130440a0);
      lVar7 = *(long *)(lStack_68 + _DAT_1130440a0);
      uVar4 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_1130440a8);
      lVar7 = *(long *)(lStack_68 + _DAT_1130440a8);
      if (lVar6 == 0) {
        lVar2 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 != 0) {
          uVar5 = 0;
          goto LAB_103fea988;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_68;
        if (lVar7 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar7);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
LAB_103fea988:
        _objc_release(lVar2);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_103fea994;
    }
  }
  uVar4 = 0;
LAB_103fea994:
  return uVar4 & 1;
}



/* Entry: 103fea9b8; end: 103feaa37; -[SCAdDiskData isEqual:] */

uint FUN_103fea9b8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103fea824(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103feaa38; end: 103feaa3b; -[SCAdDiskData copyWithZone:] */

void FUN_103feaa38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103feaa3c; end: 103feaa73; -[SCAdDiskData description] */

void FUN_103feaa3c(undefined8 param_1)

{
  _objc_retain();
  FUN_103feab28();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feaa74; end: 103feaaef; -[SCAdDiskData init] */

void FUN_103feaa74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDeviceInfo/AdDiskDataWrapper.swift",0x24,2,
             0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feaabc);
  (*pcVar1)();
}



/* Entry: 103feaaf0; end: 103feab27; -[SCAdDiskData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feaaf0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130440a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130440a8));
  return;
}



/* Entry: 103feab28; end: 103feaba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103feab28(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_1130440a0) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  if (*(long *)(param_2 + _DAT_1130440a8) != 0) {
    func_0x00010bf885a0();
  }
  return param_1;
}



/* Entry: 103feaba4; end: 103feabc3;  */

void FUN_103feaba4(void)

{
  _objc_opt_self(&PTR_PTR_11297aff0);
  return;
}



/* Entry: 103feabc4; end: 103feabf7; -[_TtC16AdUserIdServices16AdUserIdServices setUserAdIdProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feabc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130440e0);
  *(undefined8 *)(param_1 + _DAT_1130440e0) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103feabf8; end: 103feac2b; -[_TtC16AdUserIdServices16AdUserIdServices setAdsUserInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feabf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130440f0);
  *(undefined8 *)(param_1 + _DAT_1130440f0) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103feac2c; end: 103feac5f; -[_TtC16AdUserIdServices16AdUserIdServices setAdsPreferencesProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feac2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113044100);
  *(undefined8 *)(param_1 + _DAT_113044100) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103feac60; end: 103feacf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130440e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130440f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113044100) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130440d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130440e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130440f8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103feacf8; end: 103fead57; -[_TtC16AdUserIdServices16AdUserIdServices init] */

void FUN_103feacf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdUserIdServices.AdUserIdServices",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fead24);
  (*pcVar1)();
}



/* Entry: 103fead58; end: 103feadcf; -[_TtC16AdUserIdServices16AdUserIdServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fead58(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130440d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130440e0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130440e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130440f0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130440f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044100));
  return;
}



/* Entry: 103feadd0; end: 103feae57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103feadd0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a57748();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113044130) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113044138) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feae58);
  (*pcVar1)();
}



/* Entry: 103feae58; end: 103feaeb7; -[_TtC34PrivengUserSessionScopeGraphBridge49PrivengUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103feae58(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengUserSessionScopeGraphBridge.PrivengUserSessionScopeGraphBridgeSaberEntryPoint",
             0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feae84);
  (*pcVar1)();
}



/* Entry: 103feaeb8; end: 103feaeef; -[_TtC34PrivengUserSessionScopeGraphBridge49PrivengUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feaeb8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044130));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044138));
  return;
}



/* Entry: 103feaef0; end: 103feaf17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feaef0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113044138),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113044130));
  return;
}



/* Entry: 103feaf18; end: 103feafb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103feaf18(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113044220);
  *(undefined8 *)(unaff_x20 + _DAT_113044168) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113044170) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103feafb4; end: 103feb013; -[_TtC34PrivengUserSessionScopeGraphBridge39SCFideliusArroyoServicesSaberEntryPoint init] */

void FUN_103feafb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengUserSessionScopeGraphBridge.SCFideliusArroyoServicesSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feafe0);
  (*pcVar1)();
}



/* Entry: 103feb014; end: 103feb0a7; -[_TtC34PrivengUserSessionScopeGraphBridge39SCFideliusArroyoServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb014(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113044168));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044170));
  return;
}



/* Entry: 103feb0a8; end: 103feb0af;  */

undefined8 FUN_103feb0a8(void)

{
  return 0;
}



/* Entry: 103feb0b0; end: 103feb14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103feb0b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113044228);
  *(undefined8 *)(unaff_x20 + _DAT_1130441a0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130441a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103feb14c; end: 103feb1ab; -[_TtC34PrivengUserSessionScopeGraphBridge33SCFideliusServicesSaberEntryPoint init] */

void FUN_103feb14c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengUserSessionScopeGraphBridge.SCFideliusServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feb178);
  (*pcVar1)();
}



/* Entry: 103feb1ac; end: 103feb23f; -[_TtC34PrivengUserSessionScopeGraphBridge33SCFideliusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb1ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130441a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130441a8));
  return;
}



/* Entry: 103feb240; end: 103feb247;  */

undefined8 FUN_103feb240(void)

{
  return 0;
}



/* Entry: 103feb248; end: 103feb2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103feb248(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113044230);
  *(undefined8 *)(unaff_x20 + _DAT_1130441d8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130441e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103feb2e4; end: 103feb343; -[_TtC34PrivengUserSessionScopeGraphBridge33SCSecurityServicesSaberEntryPoint init] */

void FUN_103feb2e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengUserSessionScopeGraphBridge.SCSecurityServicesSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feb310);
  (*pcVar1)();
}



/* Entry: 103feb344; end: 103feb3d7; -[_TtC34PrivengUserSessionScopeGraphBridge33SCSecurityServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb344(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130441d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130441e0));
  return;
}



/* Entry: 103feb3d8; end: 103feb3df;  */

undefined8 FUN_103feb3d8(void)

{
  return 0;
}



/* Entry: 103feb3e0; end: 103feb453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113044220) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113044228) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113044230) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103feb454; end: 103feb4b3; -[_TtC34PrivengUserSessionScopeGraphBridge42PrivengUserSessionScopeGraphBridgeServices init] */

void FUN_103feb454(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PrivengUserSessionScopeGraphBridge.PrivengUserSessionScopeGraphBridgeServices",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103feb480);
  (*pcVar1)();
}



/* Entry: 103feb4b4; end: 103feb557; -[_TtC34PrivengUserSessionScopeGraphBridge42PrivengUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb4b4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113044220));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113044228));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113044230));
  return;
}



/* Entry: 103feb558; end: 103feb58f;  */

undefined1  [16] FUN_103feb558(void)

{
  return ZEXT816(0x110731630);
}



/* Entry: 103feb590; end: 103feb5d3; -[SCPrivengUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103feb590(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feb5d4; end: 103feb607;  */

void FUN_103feb5d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103feb608; end: 103feb64f; -[SCPrivengUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb608(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044288);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044290));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044298));
  return;
}



/* Entry: 103feb650; end: 103feb66f;  */

void FUN_103feb650(void)

{
  _objc_opt_self(&PTR_PTR_11297b598);
  return;
}



/* Entry: 103feb670; end: 103feb6b3; -[SCSCFideliusArroyoServicesSaberEntryPoint end] */

void FUN_103feb670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feb6b4; end: 103feb6e7;  */

void FUN_103feb6b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103feb6e8; end: 103feb73f; -[SCSCFideliusArroyoServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb6e8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130442c8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130442d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130442d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130442e0));
  return;
}



/* Entry: 103feb740; end: 103feb75f;  */

void FUN_103feb740(void)

{
  _objc_opt_self(&PTR_PTR_11297b660);
  return;
}



/* Entry: 103feb760; end: 103feb7a3; -[SCSCFideliusServicesSaberEntryPoint end] */

void FUN_103feb760(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feb7a4; end: 103feb7d7;  */

void FUN_103feb7a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103feb7d8; end: 103feb82f; -[SCSCFideliusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb7d8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044310);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044318);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044320));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044328));
  return;
}



/* Entry: 103feb830; end: 103feb84f;  */

void FUN_103feb830(void)

{
  _objc_opt_self(&PTR_PTR_11297b730);
  return;
}



/* Entry: 103feb850; end: 103feb893; -[SCSCSecurityServicesSaberEntryPoint end] */

void FUN_103feb850(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103feb894; end: 103feb8c7;  */

void FUN_103feb894(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103feb8c8; end: 103feb91f; -[SCSCSecurityServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103feb8c8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044358);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113044360);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113044368));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113044370));
  return;
}


