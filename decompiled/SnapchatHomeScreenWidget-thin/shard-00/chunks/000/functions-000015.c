/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100072ea4; end: 100072eaf;  */

void FUN_100072ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 100072eb0; end: 100072f5f;  */

void FUN_100072eb0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x30);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if ((int)param_2 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_3 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_10006c6d4();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_3 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100072f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar2);
  return;
}



/* Entry: 100072f60; end: 100072f6b;  */

void FUN_100072f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100072f6c; end: 100073023;  */

void FUN_100072f6c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  lVar2 = 0x1000c4370;
  func_0x0001000100d0(0x1000c4370,&UNK_100088f90);
  if (param_3 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    lVar2 = 0x1000c4378;
    func_0x0001000100d0(0x1000c4378,&UNK_100088f98);
    lVar3 = *(long *)(lVar2 + -8);
    if (param_3 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x14);
    }
    else {
      lVar2 = 0;
      FUN_10006c6d4();
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_4 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100073020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar2);
  return;
}



/* Entry: 100073024; end: 10007305b;  */

void FUN_100073024(undefined8 param_1)

{
  if (lRam00000001000c7968 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10009125c);
  return;
}



/* Entry: 10007305c; end: 100073167;  */

void FUN_10007305c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x1000c43e8;
  lVar1 = 0x13f;
  func_0x00010007311c(0x13f,0x1000c43e8,PTR___s9WidgetKit0A6FamilyOMa_1000b0a68);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x1000c43f0;
    lVar1 = 0x13f;
    func_0x00010007311c(0x13f,0x1000c43f0,PTR___s7SwiftUI16RedactionReasonsVMa_1000b0420);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_10006c6d4();
      if (uVar2 < 0x40) {
        lStack_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 100073168; end: 100073193;  */

void FUN_100073168(void)

{
  FUN_10007324c(0x1000c79a8,FUN_10006c6d4,&DAT_10008d908);
  return;
}



/* Entry: 100073194; end: 1000731a7;  */

undefined8 FUN_100073194(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_10006c6d4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return param_1;
}



/* Entry: 1000731a8; end: 100073207;  */

void FUN_1000731a8(void)

{
  FUN_10001e0ec();
  return;
}



/* Entry: 100073208; end: 10007320b;  */

void FUN_100073208(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c79e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10008de40;
  _swift_getWitnessTable(&DAT_10008de40,&UNK_1000b6a18);
  puRam00000001000c79e8 = puVar1;
  return;
}



/* Entry: 10007320c; end: 10007324b;  */

void FUN_10007320c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c79e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10008de40;
  _swift_getWitnessTable(&DAT_10008de40,&UNK_1000b6a18);
  puRam00000001000c79e8 = puVar1;
  return;
}



/* Entry: 10007324c; end: 10007328b;  */

void FUN_10007324c(long *param_1,code *param_2,long param_3)

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



/* Entry: 10007328c; end: 10007328f;  */

void FUN_10007328c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10008dd10;
  _swift_getWitnessTable(&DAT_10008dd10,&UNK_1000b68a0);
  puRam00000001000c7a18 = puVar1;
  return;
}



/* Entry: 100073290; end: 1000732cf;  */

void FUN_100073290(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10008dd10;
  _swift_getWitnessTable(&DAT_10008dd10,&UNK_1000b68a0);
  puRam00000001000c7a18 = puVar1;
  return;
}



/* Entry: 1000732d0; end: 100073363;  */

void FUN_1000732d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c7a10;
  FUN_10007324c(0x1000c7a10,FUN_100073024,&DAT_10008dc64);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100073364; end: 10007336f;  */

void FUN_100073364(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100073370; end: 1000733c3;  */

void FUN_100073370(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c7a10;
  FUN_10007324c(0x1000c7a10,FUN_100073024,&DAT_10008dc64);
  __s21SnapchatWidgetsShared19SCTimelineEntryViewPAAE4bodyQrvg(param_1,param_2,uVar1);
  return;
}



/* Entry: 1000733c4; end: 1000733cb;  */

void FUN_1000733c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000c7a10;
  FUN_10007324c(0x1000c7a10,FUN_100073024,&DAT_10008dc64);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1000733cc; end: 1000739f3;  */

undefined8 * FUN_1000733cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined *puVar6;
  ulong uVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined ***pppuVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  uint uVar20;
  undefined1 *puVar21;
  long unaff_x20;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  code **ppcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  lVar18 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)&ppuStack_c0 - extraout_x8;
  if ((*(byte *)(unaff_x20 + 0x52) & 1) != 0) {
    lVar18 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)&lStack_b0 - extraout_x8_01);
    pcVar15 = (code *)0x7465756f686c6973;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7465756f686c6973,0xea00000000006574);
    puVar23 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar10 = (undefined **)PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    pcVar25 = (code *)PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    if (puVar23 == (undefined *)0x0) {
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
      ppuStack_70 = ppuVar10;
      puStack_68 = pcVar25;
      puVar6 = puVar21;
    }
    else {
      lVar18 = 0x1000c7a98;
      func_0x0001000100d0(0x1000c7a98,&UNK_10008dd88);
      ppcStack_a8 = *(code ***)(lVar18 + -8);
      pcVar25 = ppcStack_a8[8];
      lVar26 = lVar18;
      puStack_a0 = puVar21;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar24 = (long)puVar21 - ((ulong)(pcVar25 + 0xf) & 0xfffffffffffffff0);
      FUN_100070c10();
      _swift_allocObject();
      *(undefined8 *)(lVar26 + 0x18) = 3;
      *(undefined8 *)(lVar26 + 0x10) = 1;
      *(undefined **)(lVar26 + 0x20) = puVar23;
      puVar6 = &UNK_1000b67d0;
      _swift_allocObject(&UNK_1000b67d0,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar26;
      pcStack_88 = FUN_100074120;
      puStack_80 = puVar6;
      _objc_retain(puVar23);
      pcVar16 = (code *)0x1000c7aa0;
      func_0x0001000100d0(0x1000c7aa0,&UNK_10008dd90);
      uVar11 = 0x1000c7aa8;
      FUN_1000743a8(0x1000c7aa8,0x1000c7aa0,&UNK_10008dd90,
                    PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
      __s7SwiftUI4ViewPAAE10unredactedQryF(lVar24,pcVar16,uVar11);
      _swift_release(puVar6);
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      ppcVar8 = ppcStack_a8;
      pcVar15 = (code *)(lVar24 - ((ulong)(pcVar25 + 0xf) & 0xfffffffffffffff0));
      (*ppcStack_a8[2])(pcVar15,lVar24,lVar18);
      pcVar25 = (code *)PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
      ppcVar9 = &pcStack_88;
      pcStack_88 = pcVar16;
      puStack_80 = (undefined *)uVar11;
      _swift_getOpaqueTypeConformance
                (ppcVar9,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pcVar15,lVar18,ppcVar9);
      (*ppcVar8[1])(lVar24,lVar18);
      puVar6 = puStack_a0;
      ppuVar10 = (undefined **)PTR___s7SwiftUI7AnyViewVN_1000b08c8;
      ppuStack_70 = (undefined **)PTR___s7SwiftUI7AnyViewVN_1000b08c8;
      puStack_68 = pcVar25;
      _objc_release(puVar23);
    }
    pcStack_88 = pcVar15;
    func_0x000100013de4(&pcStack_88,ppuVar10);
    puVar23 = PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0;
    puVar17 = (undefined8 *)0x0;
    ppuStack_98 = ppuVar10;
    pcStack_90 = pcVar25;
    _swift_getOpaqueTypeMetadata
              (0,&ppuStack_98,
               PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,0);
    lVar26 = puVar17[-1];
    (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar18 + -8) + 0x38))(puVar21,1,1,lVar18);
    __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
              ((long)puVar6 - extraout_x8_02,puVar21,ppuVar10,pcVar25);
    FUN_100014e24(puVar21);
    pppuVar19 = &ppuStack_98;
    ppuStack_98 = ppuVar10;
    pcStack_90 = pcVar25;
    _swift_getOpaqueTypeConformance(pppuVar19,puVar23,1);
    puVar13 = puVar17;
    __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF(puVar17,pppuVar19);
    (**(code **)(lVar26 + 8))((long)puVar6 - extraout_x8_02,puVar17);
    FUN_100012b94(&pcStack_88);
    return puVar13;
  }
  uVar22 = param_1[4];
  lStack_b0 = lVar26;
  if (uVar22 != 0) {
    if (uVar22 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar22;
      if (-1 < (long)uVar22) {
        uVar7 = uVar22 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    lVar18 = 0;
    if (uVar7 != 0) {
      pcVar25 = (code *)&UNK_1000b6820;
      _swift_allocObject(&UNK_1000b6820,0x18,7);
      *(ulong *)(pcVar25 + 0x10) = uVar22;
      pcStack_90 = (code *)0x100074858;
      pcStack_88 = pcVar25;
      _swift_bridgeObjectRetain(uVar22);
      uVar11 = 0x1000c7aa0;
      func_0x0001000100d0(0x1000c7aa0,&UNK_10008dd90);
      uVar12 = 0x1000c7aa8;
      FUN_1000743a8(0x1000c7aa8,0x1000c7aa0,&UNK_10008dd90,
                    PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
      ppcVar8 = &pcStack_90;
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(ppcVar8,uVar11,uVar12);
      puVar23 = (undefined *)0x1000c7ad0;
      ppcStack_a8 = ppcVar8;
      func_0x0001000100d0(0x1000c7ad0,&UNK_10008ddc0);
      puVar1 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
      puVar6 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
      puStack_a0 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
      ppuStack_98 = (undefined **)PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
      ppuVar10 = &puStack_a0;
      puStack_78 = puVar23;
      _swift_getOpaqueTypeConformance
                (ppuVar10,PTR___s7SwiftUI4ViewPAAE16privacySensitiveyQrSbFQOMQ_1000b0738,1);
      ppcVar9 = &pcStack_90;
      ppuStack_70 = ppuVar10;
      func_0x0001000743ec(ppcVar9);
      __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(ppcVar9,1,puVar1,puVar6);
      _swift_release(ppcVar8);
      puVar23 = puStack_78;
      goto LAB_100073820;
    }
  }
  pcStack_88 = (code *)param_1[1];
  pcStack_90 = (code *)*param_1;
  puStack_a0 = (undefined *)0x20;
  ppuStack_98 = (undefined **)0xe100000000000000;
  FUN_100010174();
  ppuVar10 = &puStack_a0;
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (ppuVar10,PTR___sSSN_1000b1180,PTR___sSSN_1000b1180,lVar18,lVar18);
  puVar23 = ppuVar10[2];
  if (puVar23 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(ppuVar10);
    pcVar25 = (code *)PTR___swiftEmptyArrayStorage_1000b14d0;
  }
  else {
    pcStack_90 = (code *)PTR___swiftEmptyArrayStorage_1000b14d0;
    puStack_b8 = param_1;
    func_0x00010005ae78(0,puVar23,0);
    ppuVar14 = ppuVar10 + 5;
    ppuStack_c0 = ppuVar10;
    do {
      pcVar25 = pcStack_90;
      puVar1 = ppuVar14[-1];
      puVar2 = *ppuVar14;
      puVar6 = puVar1;
      if (((ulong)puVar2 & 0x2000000000000000) != 0) {
        puVar6 = (undefined *)((ulong)puVar2 >> 0x38 & 0xf);
      }
      uVar20 = (uint)((ulong)puVar1 >> 0x3b) & 1;
      if (((ulong)puVar2 & 0x1000000000000000) == 0) {
        uVar20 = 1;
      }
      uVar22 = 7;
      if (uVar20 == 0) {
        uVar22 = 0xb;
      }
      uVar22 = uVar22 | (long)puVar6 << 0x10;
      _swift_bridgeObjectRetain(puVar2);
      uVar7 = 0xf;
      uVar20 = 1;
      __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,1,uVar22,puVar1,puVar2);
      if ((uVar20 & 0xff) != 1) {
        uVar22 = uVar7;
      }
      uVar11 = 0xf;
      puVar6 = puVar2;
      __sSSySsSnySS5IndexVGcig(0xf,uVar22,puVar1,puVar2);
      __sSS14_fromSubstringySSSshFZ();
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(puVar2);
      uVar7 = *(ulong *)(pcVar25 + 0x10);
      pcStack_90 = pcVar25;
      if (*(ulong *)(pcVar25 + 0x18) >> 1 <= uVar7) {
        func_0x00010005ae78(1 < *(ulong *)(pcVar25 + 0x18),uVar7 + 1,1);
      }
      pcVar25 = pcStack_90;
      ppuVar14 = ppuVar14 + 2;
      *(ulong *)(pcStack_90 + 0x10) = uVar7 + 1;
      *(undefined8 *)(pcStack_90 + uVar7 * 0x10 + 0x20) = uVar11;
      *(ulong *)(pcStack_90 + uVar7 * 0x10 + 0x28) = uVar22;
      puVar23 = puVar23 + -1;
    } while (puVar23 != (undefined *)0x0);
    _swift_bridgeObjectRelease(ppuStack_c0);
    param_1 = puStack_b8;
  }
  uVar22 = *(ulong *)(pcVar25 + 0x10);
  if (1 < uVar22) {
    uVar22 = 2;
  }
  pcStack_88 = pcVar25 + 0x20;
  puStack_78 = (undefined *)(uVar22 << 1 | 1);
  puStack_80 = (undefined *)0x0;
  uVar11 = 0x1000c7380;
  pcStack_90 = pcVar25;
  func_0x0001000100d0(0x1000c7380,&UNK_10008d330);
  uVar12 = 0x1000c7388;
  FUN_1000743a8(0x1000c7388,0x1000c7380,&UNK_10008d330,PTR___ss10ArraySliceVyxGSKsMc_1000b1248);
  uVar7 = 0;
  pcVar15 = (code *)0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,uVar11,uVar12);
  _swift_bridgeObjectRelease(pcVar25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar22 = uVar7 & 0xffffffffffff;
  if (((ulong)pcVar15 & 0x2000000000000000) != 0) {
    uVar22 = (ulong)pcVar15 >> 0x38 & 0xf;
  }
  if (uVar22 == 0) {
    _swift_bridgeObjectRelease();
    FUN_100073d68();
    puStack_78 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    ppuStack_70 = (undefined **)PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    puVar23 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    pcStack_90 = pcVar15;
  }
  else {
    pcVar25 = (code *)&UNK_1000b67f8;
    _swift_allocObject(&UNK_1000b67f8,0x20,7);
    *(ulong *)(pcVar25 + 0x10) = uVar7;
    *(code **)(pcVar25 + 0x18) = pcVar15;
    puVar23 = (undefined *)0x1000c7ac0;
    func_0x0001000100d0(0x1000c7ac0,&UNK_10008ddb8);
    ppuVar10 = (undefined **)0x1000c7ac8;
    puStack_78 = puVar23;
    FUN_1000743a8(0x1000c7ac8,0x1000c7ac0,&UNK_10008ddb8,
                  PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    pcStack_90 = FUN_1000743a0;
    pcStack_88 = pcVar25;
    ppuStack_70 = ppuVar10;
  }
LAB_100073820:
  ppuVar10 = ppuStack_70;
  func_0x000100013de4(&pcStack_90,puVar23);
  puVar17 = (undefined8 *)0x0;
  puStack_a0 = puVar23;
  ppuStack_98 = ppuVar10;
  _swift_getOpaqueTypeMetadata
            (0,&puStack_a0,
             PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,0);
  ppuStack_c0 = (undefined **)puVar17[-1];
  puVar13 = puVar17;
  puStack_b8 = (undefined8 *)lVar26;
  (*(code *)PTR____chkstk_darwin_1000b0c68)((ulong)(ppuStack_c0[8] + 0xf) & 0xfffffffffffffff0);
  uVar11 = param_1[8];
  uVar3 = param_1[9];
  bVar5 = *(byte *)(param_1 + 10);
  __s23HomeScreenWidgetDefines0C17DeepLinkReferrersO03pmfeF8ReferrerSSvau();
  uVar12 = *puVar13;
  uVar4 = puVar13[1];
  _swift_bridgeObjectRetain(uVar4);
  lVar18 = lStack_b0;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
                (lStack_b0,uVar11,uVar3,uVar12,uVar4,0x72616c7563726963,0xe800000000000000,1);
    }
    else {
      __s21SnapchatWidgetsShared16DeeplinkBuildersO014buildGroupChatD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
                (lStack_b0,uVar11,uVar3,uVar12,uVar4,0x72616c7563726963,0xe800000000000000,1);
    }
  }
  else if (bVar5 == 2) {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng11ReplyCameraD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              (lStack_b0,uVar11,uVar3,uVar12,uVar4,0x72616c7563726963,0xe800000000000000,1);
  }
  else {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO021buildGroupReplyCameraD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              (lStack_b0,uVar11,uVar3,uVar12,uVar4,0x72616c7563726963,0xe800000000000000,1);
  }
  _swift_bridgeObjectRelease(uVar4);
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lVar26 - extraout_x8_00,lVar18,puVar23,ppuVar10);
  FUN_100014e24(lVar18);
  ppuVar14 = &puStack_a0;
  puStack_a0 = puVar23;
  ppuStack_98 = ppuVar10;
  _swift_getOpaqueTypeConformance
            (ppuVar14,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0
             ,1);
  puVar13 = puVar17;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF(puVar17,ppuVar14);
  (*(code *)ppuStack_c0[1])(lVar26 - extraout_x8_00,puVar17);
  func_0x000100012b98(&pcStack_90);
  return puVar13;
}



/* Entry: 1000739f4; end: 100073ad7;  */

void FUN_1000739f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
            (&uStack_a0,param_5,param_6,0x4038000000000000,1);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_60,param_2,0,param_3,0,param_5,param_6);
  uStack_98 = uStack_a0;
  uStack_90 = uStack_60;
  uStack_88 = uStack_58;
  uStack_80 = uStack_50;
  uStack_78 = uStack_48;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uVar1 = 0x1000c7ad8;
  func_0x0001000100d0(0x1000c7ad8,&UNK_10008ddc8);
  uVar2 = uVar1;
  FUN_100074428();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(param_1,1,uVar1,uVar2);
  _swift_release(uStack_a0);
  return;
}



/* Entry: 100073ad8; end: 100073beb;  */

void FUN_100073ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = param_5;
  uVar6 = param_5;
  _swift_bridgeObjectRetain(param_5);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_a0,param_2,0,0,1,uVar3,uVar6);
  lVar4 = 0x1000c7ab0;
  puVar7 = &UNK_10008dd98;
  func_0x0001000100d0();
  lVar1 = (long)param_1 + (long)*(int *)(lVar4 + 0x24);
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar5 = 0x1000c4560;
  func_0x0001000100d0(0x1000c4560,&UNK_1000891b0);
  plVar2 = (long *)(lVar1 + *(int *)(lVar5 + 0x24));
  *plVar2 = lVar4;
  plVar2[1] = (long)puVar7;
  *param_1 = param_5;
  param_1[1] = param_3;
  param_1[2] = uStack_a0;
  *(undefined1 *)(param_1 + 3) = uStack_98;
  param_1[4] = uStack_90;
  *(undefined1 *)(param_1 + 5) = uStack_88;
  param_1[6] = uStack_80;
  param_1[7] = uStack_78;
  return;
}



/* Entry: 100073bec; end: 100073c43;  */

void FUN_100073bec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [88];
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
  undefined2 uStack_20;
  
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  uStack_28 = unaff_x20[9];
  uStack_30 = unaff_x20[8];
  uStack_20 = *(undefined2 *)(unaff_x20 + 10);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  *(undefined2 *)(param_1 + 10) = uStack_20;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  func_0x00010006d27c(&uStack_70,auStack_c8);
  return;
}



/* Entry: 100073c44; end: 100073c7f;  */

undefined1 FUN_100073c44(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x52);
}



/* Entry: 100073c80; end: 100073ca3;  */

void FUN_100073c80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100073ca4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100073ca4; end: 100073ce3;  */

void FUN_100073ca4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008dd2c;
  _swift_getWitnessTable(&UNK_10008dd2c,&UNK_1000b68a0);
  puRam00000001000c7a90 = puVar1;
  return;
}



/* Entry: 100073ce4; end: 100073d23;  */

void FUN_100073ce4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100073290();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvpQOMQ_1000b0e98
             ,1);
  return;
}



/* Entry: 100073d24; end: 100073d2f;  */

void FUN_100073d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100073d30; end: 100073d67;  */

void FUN_100073d30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100073290();
                    /* WARNING: Could not recover jumptable at 0x000100084f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg_1000b0e90)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 100073d68; end: 1000740fb;  */

long FUN_100073d68(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  code **ppcVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar9 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_b0 + -extraout_x8;
  pcVar2 = (code *)0x7465756f686c6973;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7465756f686c6973,0xea00000000006574);
  puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar14 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
  puVar4 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  if (puVar3 == (undefined *)0x0) {
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC();
    puStack_70 = puVar14;
    puStack_68 = puVar4;
    puVar1 = puVar11;
  }
  else {
    lVar9 = 0x1000c7a98;
    func_0x0001000100d0(0x1000c7a98,&UNK_10008dd88);
    lStack_a8 = *(long *)(lVar9 + -8);
    lVar13 = *(long *)(lStack_a8 + 0x40);
    lVar8 = lVar9;
    puStack_a0 = puVar11;
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    uVar12 = lVar13 + 0xfU & 0xfffffffffffffff0;
    lVar13 = (long)puVar11 - uVar12;
    FUN_100070c10();
    _swift_allocObject();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar3;
    puVar4 = &UNK_1000b67d0;
    _swift_allocObject(&UNK_1000b67d0,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar8;
    pcStack_88 = FUN_100074120;
    puStack_80 = puVar4;
    _objc_retain(puVar3);
    pcVar5 = (code *)0x1000c7aa0;
    func_0x0001000100d0(0x1000c7aa0,&UNK_10008dd90);
    uVar6 = 0x1000c7aa8;
    FUN_1000743a8(0x1000c7aa8,0x1000c7aa0,&UNK_10008dd90,
                  PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
    __s7SwiftUI4ViewPAAE10unredactedQryF(lVar13,pcVar5,uVar6);
    _swift_release(puVar4);
    (*(code *)PTR____chkstk_darwin_1000b0c68)();
    lVar8 = lStack_a8;
    pcVar2 = (code *)(lVar13 - uVar12);
    (**(code **)(lStack_a8 + 0x10))(pcVar2,lVar13,lVar9);
    puVar4 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
    ppcVar7 = &pcStack_88;
    pcStack_88 = pcVar5;
    puStack_80 = (undefined *)uVar6;
    _swift_getOpaqueTypeConformance
              (ppcVar7,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(pcVar2,lVar9,ppcVar7);
    (**(code **)(lVar8 + 8))(lVar13,lVar9);
    puVar1 = puStack_a0;
    puVar14 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puStack_70 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
    puStack_68 = puVar4;
    _objc_release(puVar3);
  }
  pcStack_88 = pcVar2;
  func_0x000100013de4(&pcStack_88,puVar14);
  puVar3 = PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0;
  lVar8 = 0;
  puStack_98 = puVar14;
  puStack_90 = puVar4;
  _swift_getOpaqueTypeMetadata
            (0,&puStack_98,
             PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,0);
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar11,1,1,lVar9);
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            ((long)puVar1 - extraout_x8_00,puVar11,puVar14,puVar4);
  FUN_100014e24(puVar11);
  ppuVar10 = &puStack_98;
  puStack_98 = puVar14;
  puStack_90 = puVar4;
  _swift_getOpaqueTypeConformance(ppuVar10,puVar3,1);
  lVar9 = lVar8;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF(lVar8,ppuVar10);
  (**(code **)(lVar13 + 8))((long)puVar1 - extraout_x8_00,lVar8);
  FUN_100012b94(&pcStack_88);
  return lVar9;
}



/* Entry: 1000740fc; end: 10007411f;  */

void FUN_1000740fc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100074120; end: 100074127;  */

void FUN_100074120(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar8;
  uVar6 = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_a0,param_2,0,0,1,uVar3,uVar6);
  lVar4 = 0x1000c7ab0;
  puVar7 = &UNK_10008dd98;
  func_0x0001000100d0();
  lVar1 = (long)param_1 + (long)*(int *)(lVar4 + 0x24);
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar5 = 0x1000c4560;
  func_0x0001000100d0(0x1000c4560,&UNK_1000891b0);
  plVar2 = (long *)(lVar1 + *(int *)(lVar5 + 0x24));
  *plVar2 = lVar4;
  plVar2[1] = (long)puVar7;
  *param_1 = uVar8;
  param_1[1] = param_3;
  param_1[2] = uStack_a0;
  *(undefined1 *)(param_1 + 3) = uStack_98;
  param_1[4] = uStack_90;
  *(undefined1 *)(param_1 + 5) = uStack_88;
  param_1[6] = uStack_80;
  param_1[7] = uStack_78;
  return;
}



/* Entry: 100074128; end: 10007437b;  */

long FUN_100074128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar6 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  lVar6 = 0x1000c7ab8;
  func_0x0001000100d0(0x1000c7ab8,&UNK_10008dda8);
  lVar10 = *(long *)(lVar6 + -8);
  lVar5 = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar9 = (long)puVar8 - extraout_x12;
  FUN_100016e04();
  puVar1 = PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularVN_1000b0ed8;
  __s7SwiftUI4ViewPAAE10unredactedQryF
            (lVar9,PTR___s21SnapchatWidgetsShared23LockScreenLoginCircularVN_1000b0ed8,lVar5);
  (**(code **)(lVar10 + 0x10))(puVar8,lVar9,lVar6);
  puStack_88 = puVar1;
  ppuVar4 = &puStack_88;
  lStack_80 = lVar5;
  _swift_getOpaqueTypeConformance(ppuVar4,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(puVar8,lVar6,ppuVar4);
  (**(code **)(lVar10 + 8))(lVar9,lVar6);
  puVar2 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
  puVar1 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puStack_70 = PTR___s7SwiftUI7AnyViewVN_1000b08c8;
  puStack_68 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puStack_88 = puVar8;
  func_0x000100013de4(&puStack_88,PTR___s7SwiftUI7AnyViewVN_1000b08c8);
  puVar3 = PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0;
  puStack_98 = puVar2;
  puStack_90 = puVar1;
  lVar5 = 0;
  _swift_getOpaqueTypeMetadata
            (0,&puStack_98,
             PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,0);
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar7,1,1,lVar6);
  _swift_retain(puVar8);
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF
            (lVar9 - extraout_x8_01,puVar7,puVar2,puVar1);
  FUN_100014e24(puVar7);
  puStack_98 = puVar2;
  puStack_90 = puVar1;
  ppuVar4 = &puStack_98;
  _swift_getOpaqueTypeConformance(ppuVar4,puVar3,1);
  lVar6 = lVar5;
  __s7SwiftUI4ViewP21SnapchatWidgetsSharedE010eraseToAnyC0AA0iC0VyF(lVar5,ppuVar4);
  _swift_release(puVar8);
  (**(code **)(lVar10 + 8))(lVar9 - extraout_x8_01,lVar5);
  FUN_100012b94(&puStack_88);
  return lVar6;
}



/* Entry: 10007437c; end: 10007439f;  */

void FUN_10007437c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000743a0; end: 1000743a7;  */

void FUN_1000743a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
            (&uStack_a0,uVar1,uVar2,0x4038000000000000,1);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_60,param_2,0,param_3,0,uVar1,uVar2);
  uStack_98 = uStack_a0;
  uStack_90 = uStack_60;
  uStack_88 = uStack_58;
  uStack_80 = uStack_50;
  uStack_78 = uStack_48;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uVar1 = 0x1000c7ad8;
  func_0x0001000100d0(0x1000c7ad8,&UNK_10008ddc8);
  uVar2 = uVar1;
  FUN_100074428();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(param_1,1,uVar1,uVar2);
  _swift_release(uStack_a0);
  return;
}



/* Entry: 1000743a8; end: 100074427;  */

void FUN_1000743a8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100074428; end: 100074497;  */

void FUN_100074428(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c7ae0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7ad8;
  func_0x000100010120(0x1000c7ad8,&UNK_10008ddc8);
  puStack_20 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c7ae0 = puVar2;
  return;
}



/* Entry: 100074498; end: 1000744c3;  */

long FUN_100074498(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1000744c4; end: 100074503;  */

void FUN_1000744c4(undefined8 *param_1)

{
  FUN_10006c1e8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],*(undefined2 *)(param_1 + 10));
  return;
}



/* Entry: 100074504; end: 1000746cb;  */

undefined8 * FUN_100074504(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar11;
  undefined1 uVar12;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined1 *)(param_2 + 10);
  uVar12 = *(undefined1 *)((long)param_2 + 0x51);
  FUN_10006c0d8(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = uVar11;
  *(undefined1 *)((long)param_1 + 0x51) = uVar12;
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  return param_1;
}



/* Entry: 1000746cc; end: 1000746ef;  */

void FUN_1000746cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined4 *)((long)param_1 + 0x4f) = *(undefined4 *)((long)param_2 + 0x4f);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 1000746f0; end: 10007476b;  */

undefined8 * FUN_1000746f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined2 *)(param_2 + 10);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar12 = param_1[9];
  uVar10 = *(undefined2 *)(param_1 + 10);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  *(undefined2 *)(param_1 + 10) = uVar9;
  FUN_10006c1e8(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12,uVar10);
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  return param_1;
}



/* Entry: 10007476c; end: 10007482f;  */

int FUN_10007476c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x53) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 0x52)) {
    uVar1 = *(byte *)((long)param_1 + 0x52) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100074830; end: 100074853;  */

void FUN_100074830(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100073290();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100074854; end: 10007485b;  */

void FUN_100074854(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10007485c; end: 100074e6b;  */

long FUN_10007485c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long alStack_80 [4];
  
  lVar6 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)alStack_80 - extraout_x8;
  lVar6 = 0x1000c7c00;
  func_0x0001000100d0(0x1000c7c00,&UNK_10008e018);
  alStack_80[0] = *(long *)(lVar6 + -8);
  lVar14 = *(long *)(alStack_80[0] + 0x40);
  alStack_80[1] = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar15 - extraout_x8_00;
  lVar6 = 0x1000c7c08;
  puVar11 = &UNK_10008e020;
  func_0x0001000100d0();
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar16 = (long *)(lVar13 - extraout_x8_01);
  lVar7 = param_1;
  func_0x000100074b04();
  lVar1 = (long)plVar16 + (long)*(int *)(lVar6 + 0x24);
  lVar12 = lVar7;
  __s9WidgetKit09AccessoryA10BackgroundVACycfC(lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  puVar8 = (undefined8 *)0x1000c4560;
  func_0x0001000100d0(0x1000c4560,&UNK_1000891b0);
  plVar10 = (long *)(lVar1 + *(int *)((long)puVar8 + 0x24));
  *plVar10 = lVar12;
  plVar10[1] = (long)puVar11;
  *plVar16 = lVar7;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  bVar5 = *(byte *)(param_1 + 0x50);
  __s23HomeScreenWidgetDefines0C17DeepLinkReferrersO03pmfeF8ReferrerSSvau();
  uVar3 = *puVar8;
  uVar9 = puVar8[1];
  _swift_bridgeObjectRetain(uVar9);
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
                ();
    }
    else {
      __s21SnapchatWidgetsShared16DeeplinkBuildersO014buildGroupChatD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
                ();
    }
  }
  else if (bVar5 == 2) {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng11ReplyCameraD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              ();
  }
  else {
    __s21SnapchatWidgetsShared16DeeplinkBuildersO021buildGroupReplyCameraD07groupId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
              (lVar15,uVar2,uVar4,uVar3,uVar9,0x75676e6174636572,0xeb0000000072616c,1);
  }
  _swift_bridgeObjectRelease();
  func_0x000100076700();
  __s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgF(lVar13,lVar15,lVar6,uVar9);
  func_0x000100076798(lVar15,0x1000c4330,&UNK_1000890b0);
  func_0x000100076798(plVar16,0x1000c7c08,&UNK_10008e020);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar7 = alStack_80[1];
  lVar1 = alStack_80[0];
  lVar12 = (long)plVar16 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(alStack_80[0] + 0x10))(lVar12,lVar13,alStack_80[1]);
  plVar10 = alStack_80 + 2;
  alStack_80[2] = lVar6;
  alStack_80[3] = uVar9;
  _swift_getOpaqueTypeConformance
            (plVar10,PTR___s7SwiftUI4ViewP9WidgetKitE9widgetURLyQr10Foundation0G0VSgFQOMQ_1000b09f0,
             1);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar12,lVar7,plVar10);
  (**(code **)(lVar1 + 8))(lVar13,lVar7);
  return lVar12;
}



/* Entry: 100074e6c; end: 100074fff;  */

void FUN_100074e6c(void)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  bVar2 = *(byte *)((long)unaff_x20 + 0x52);
  puVar4 = (undefined *)0x7465756f686c6973;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7465756f686c6973,0xea00000000006574);
  puVar5 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100086b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar8 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (puVar5 != (undefined *)0x0) {
    FUN_100070c10();
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined **)(puVar4 + 0x20) = puVar5;
    puVar8 = puVar4;
  }
  bVar3 = (bVar2 & 1) == 0;
  uVar6 = 0xe900000000000078;
  if (bVar3) {
    uVar6 = 0xe000000000000000;
  }
  uVar7 = 0xec00000078787878;
  if (bVar3) {
    uVar7 = 0xe000000000000000;
  }
  uVar1 = 0x7878787878787878;
  if (bVar3) {
    uVar1 = 0;
  }
  puVar5 = &UNK_1000b6920;
  _swift_allocObject(&UNK_1000b6920,0x98,7);
  uVar9 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 *)(puVar5 + 0x48) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = uVar10;
  uVar9 = unaff_x20[8];
  *(undefined8 *)(puVar5 + 0x58) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  *(undefined4 *)(puVar5 + 0x5f) = *(undefined4 *)((long)unaff_x20 + 0x4f);
  uVar9 = *unaff_x20;
  uVar11 = unaff_x20[3];
  uVar10 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x68) = uVar1;
  *(undefined8 *)(puVar5 + 0x70) = uVar7;
  *(undefined8 *)(puVar5 + 0x78) = 1;
  *(undefined8 *)(puVar5 + 0x80) = uVar1;
  *(undefined8 *)(puVar5 + 0x88) = uVar6;
  *(undefined **)(puVar5 + 0x90) = puVar8;
  uStack_50 = 0x100075794;
  puStack_48 = puVar5;
  FUN_100075798();
  uVar6 = 0x1000c7b40;
  func_0x0001000100d0(0x1000c7b40,&UNK_10008deb0);
  uVar7 = 0x1000c7b48;
  FUN_1000767e8(0x1000c7b48,0x1000c7b40,&UNK_10008deb0,
                PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_1000b0370);
  __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(&uStack_50,uVar6,uVar7);
  return;
}



/* Entry: 100075000; end: 100075057;  */

void FUN_100075000(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [88];
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
  undefined2 uStack_20;
  
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  uStack_28 = unaff_x20[9];
  uStack_30 = unaff_x20[8];
  uStack_20 = *(undefined2 *)(unaff_x20 + 10);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  *(undefined2 *)(param_1 + 10) = uStack_20;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  func_0x00010006d27c(&uStack_70,auStack_c8);
  return;
}



/* Entry: 100075058; end: 100075087;  */

undefined1 FUN_100075058(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x52);
}



/* Entry: 100075088; end: 10007513b;  */

void FUN_100075088(void)

{
  FUN_100074e6c();
  return;
}



/* Entry: 10007513c; end: 10007515b;  */

void FUN_10007513c(void)

{
  FUN_100019cdc();
                    /* WARNING: Could not recover jumptable at 0x00010008555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI7AnyViewVyACxcAA0D0RzlufC_1000b08d0)();
  return;
}



/* Entry: 10007515c; end: 10007517f;  */

void FUN_10007515c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100075180();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100075180; end: 1000751bf;  */

void FUN_100075180(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008de5c;
  _swift_getWitnessTable(&UNK_10008de5c,&UNK_1000b6a18);
  puRam00000001000c7b38 = puVar1;
  return;
}



/* Entry: 1000751c0; end: 1000751ff;  */

void FUN_1000751c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10007320c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvpQOMQ_1000b0e98
             ,1);
  return;
}



/* Entry: 100075200; end: 10007520b;  */

void FUN_100075200(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10007520c; end: 100075243;  */

void FUN_10007520c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10007320c();
                    /* WARNING: Could not recover jumptable at 0x000100084f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s21SnapchatWidgetsShared17SCWidgetStateViewPAAE4bodyQrvg_1000b0e90)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 100075244; end: 10007578f;  */

void FUN_100075244(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,long param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long alStack_e0 [4];
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = 0x1000c7b50;
  alStack_e0[0] = param_9;
  alStack_e0[2] = param_6;
  alStack_e0[3] = param_7;
  plStack_c0 = (long *)param_8;
  uStack_a0 = param_4;
  uStack_98 = param_11;
  func_0x0001000100d0(0x1000c7b50,&UNK_10008deb8);
  lStack_88 = *(long *)(lVar8 + -8);
  lStack_78 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  lVar8 = 0x1000c7b58;
  lStack_90 = lVar11;
  func_0x0001000100d0(0x1000c7b58,&UNK_10008dec0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar17 = (long *)(lVar11 - extraout_x12_00);
  lVar8 = 0x1000c7b60;
  func_0x0001000100d0(0x1000c7b60,&UNK_10008dec8);
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)plVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar15 = (long *)(lVar16 - extraout_x12_01);
  lVar11 = 0x1000c7b68;
  func_0x0001000100d0(0x1000c7b68,&UNK_10008ded0);
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar12 = (long)plVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar18 = (long *)(lVar12 - extraout_x12_02);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = lVar11;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar18 = lVar11;
  plVar18[1] = 0x4000000000000000;
  *(undefined1 *)(plVar18 + 2) = 0;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar15 = lVar11;
  plVar15[1] = 0;
  *(undefined1 *)(plVar15 + 2) = 1;
  lVar11 = 0x1000c7b70;
  func_0x0001000100d0(0x1000c7b70,&UNK_10008ded8);
  lVar12 = param_5;
  FUN_1000757cc((long)plVar15 + (long)*(int *)(lVar11 + 0x2c),param_5,alStack_e0[2],alStack_e0[3],
                plStack_c0);
  alStack_e0[1] = param_5;
  if (param_10 != 0) {
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    *plVar17 = lVar12;
    plVar17[1] = 0;
    *(undefined1 *)(plVar17 + 2) = 1;
    func_0x000100075990((long)plVar17 + (long)*(int *)(lVar11 + 0x2c),param_5,alStack_e0[0],param_10
                       );
  }
  (**(code **)(lVar13 + 0x38))(plVar17,param_10 == 0,1,lVar8);
  lVar8 = 0x1000c7b78;
  func_0x0001000100d0(0x1000c7b78,&UNK_10008dee0);
  alStack_e0[3] = (long)param_1 + (long)*(int *)(lVar8 + 0x2c);
  lVar8 = 0x1000c7b80;
  func_0x0001000100d0(0x1000c7b80,&UNK_10008dee8);
  lVar11 = (long)plVar18 + (long)*(int *)(lVar8 + 0x2c);
  plStack_c0 = param_1;
  FUN_100076370(plVar15,lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar12 = lStack_b0;
  FUN_100076370(plVar17,lStack_b0,0x1000c7b58,&UNK_10008dec0);
  FUN_100076370(lVar16,lVar11,0x1000c7b60,&UNK_10008dec8);
  lVar8 = 0x1000c7b88;
  func_0x0001000100d0(0x1000c7b88,&UNK_10008def0);
  FUN_100076370(lVar12,lVar11 + *(int *)(lVar8 + 0x30),0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar17,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar15,0x1000c7b60,&UNK_10008dec8);
  func_0x000100076968(lVar12,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar8 = 0x1000c7b90;
  func_0x0001000100d0(0x1000c7b90,&UNK_10008def8);
  puVar3 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar8 + 0x24));
  puVar3[1] = 0;
  *puVar3 = 0x4014000000000000;
  puVar9 = &UNK_10008df00;
  _swift_getKeyPath();
  puVar3 = (undefined8 *)((long)plVar18 + (long)*(int *)(lStack_b8 + 0x24));
  *puVar3 = puVar9;
  *(undefined1 *)(puVar3 + 1) = 0;
  uVar4 = uStack_98;
  uVar10 = uStack_98;
  _swift_bridgeObjectRetain(uStack_98);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  uStack_70 = uVar4;
  bVar2 = *(byte *)(alStack_e0[1] + 0x52);
  uStack_68 = param_3;
  FUN_100076404();
  lVar13 = lStack_90;
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF
            (lStack_90,(bVar2 ^ 0xff) & 1,PTR___s21SnapchatWidgetsShared7BitmojiVN_1000b0f28,uVar10)
  ;
  _swift_bridgeObjectRelease(uVar4);
  lVar12 = lStack_a8;
  func_0x000100076920(plVar18,lStack_a8,0x1000c7b68,&UNK_10008ded0);
  lVar6 = lStack_78;
  lVar5 = lStack_80;
  lVar16 = lStack_88;
  pcVar14 = *(code **)(lStack_88 + 0x10);
  (*pcVar14)(lStack_80,lVar13,lStack_78);
  lVar11 = alStack_e0[3];
  func_0x000100076920(lVar12,alStack_e0[3],0x1000c7b68,&UNK_10008ded0);
  lVar8 = 0x1000c7ba0;
  func_0x0001000100d0(0x1000c7ba0,&UNK_10008df30);
  puVar3 = (undefined8 *)(lVar11 + *(int *)(lVar8 + 0x30));
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  (*pcVar14)(lVar11 + *(int *)(lVar8 + 0x40),lVar5,lVar6);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar13,lVar6);
  func_0x000100076968(plVar18,0x1000c7b68,&UNK_10008ded0);
  (*pcVar14)(lVar5,lVar6);
  func_0x000100076968(lVar12,0x1000c7b68,&UNK_10008ded0);
  uVar7 = (undefined1)lVar12;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar8 = 0x1000c7ba8;
  func_0x0001000100d0(0x1000c7ba8,&UNK_10008df38);
  puVar1 = (undefined1 *)((long)plStack_c0 + (long)*(int *)(lVar8 + 0x24));
  *puVar1 = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = 0x4014000000000000;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 100075790; end: 100075797;  */

void FUN_100075790(void)

{
  long unaff_x20;
  
  FUN_10006c1e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined2 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100075798; end: 1000757cb;  */

undefined8 FUN_100075798(undefined8 param_1,undefined8 param_2)

{
  FUN_100076a14(param_2,param_1,&UNK_1000b6a18);
  return param_2;
}



/* Entry: 1000757cc; end: 100075b5f;  */

void FUN_1000757cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar2 = 0x1000c7bb0;
  func_0x0001000100d0(0x1000c7bb0,&UNK_10008df40);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = (long)puVar10 - extraout_x12;
  __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
            (auStack_a0,param_3,param_4,0x402c000000000000,1);
  puVar3 = &UNK_10008df48;
  _swift_getKeyPath();
  puVar4 = &UNK_10008df78;
  _swift_getKeyPath();
  puVar5 = &UNK_10008dfa8;
  _swift_getKeyPath();
  uStack_90 = 0x3fe0000000000000;
  uStack_80 = 1;
  uStack_68 = 0;
  uVar6 = 0x1000c7bb8;
  puStack_98 = puVar3;
  puStack_88 = puVar4;
  puStack_78 = puVar5;
  uStack_70 = param_5;
  func_0x0001000100d0(0x1000c7bb8,&UNK_10008dfd8);
  uVar7 = uVar6;
  func_0x000100076538();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lVar11,1,uVar6,uVar7);
  func_0x000100076798(auStack_a0,0x1000c7bb8,&UNK_10008dfd8);
  pcVar9 = *(code **)(lVar12 + 0x10);
  (*pcVar9)(puVar10,lVar11,lVar2);
  (*pcVar9)(param_1,puVar10,lVar2);
  lVar8 = 0x1000c7bf8;
  func_0x0001000100d0(0x1000c7bf8,&UNK_10008e008);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x30));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  pcVar9 = *(code **)(lVar12 + 8);
  (*pcVar9)(lVar11,lVar2);
  (*pcVar9)(puVar10,lVar2);
  return;
}



/* Entry: 100075b60; end: 100075ecb;  */

void FUN_100075b60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_f0 [4];
  long *plStack_d0;
  long alStack_c8 [4];
  long lStack_a8;
  long lStack_a0;
  
  lVar4 = 0;
  alStack_f0[0] = param_6;
  alStack_f0[1] = param_8;
  alStack_f0[2] = param_10;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x1000c5df8;
  puVar6 = &UNK_10008c150;
  func_0x0001000100d0();
  alStack_f0[3] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar10 - extraout_x12;
  __s7SwiftUI9AlignmentV14bottomTrailingACvgZ();
  *param_1 = lVar5;
  param_1[1] = (long)puVar6;
  lVar5 = 0x1000c7c28;
  plStack_d0 = param_1;
  func_0x0001000100d0(0x1000c7c28,&UNK_10008e040);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  puVar6 = &UNK_1000b6998;
  _swift_allocObject(&UNK_1000b6998,0xa0,7);
  uVar7 = param_5[4];
  uVar14 = param_5[7];
  uVar13 = param_5[6];
  *(undefined8 *)(puVar6 + 0x38) = param_5[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
  *(undefined8 *)(puVar6 + 0x48) = uVar14;
  *(undefined8 *)(puVar6 + 0x40) = uVar13;
  uVar7 = param_5[8];
  *(undefined8 *)(puVar6 + 0x58) = param_5[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar7;
  *(undefined4 *)(puVar6 + 0x5f) = *(undefined4 *)((long)param_5 + 0x4f);
  uVar7 = *param_5;
  uVar14 = param_5[3];
  uVar13 = param_5[2];
  *(undefined8 *)(puVar6 + 0x18) = param_5[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x20) = uVar13;
  *(long *)(puVar6 + 0x68) = alStack_f0[0];
  *(undefined8 *)(puVar6 + 0x70) = param_7;
  *(long *)(puVar6 + 0x78) = alStack_f0[1];
  *(undefined8 *)(puVar6 + 0x80) = param_9;
  *(long *)(puVar6 + 0x88) = alStack_f0[2];
  *(undefined8 *)(puVar6 + 0x90) = param_2;
  *(undefined8 *)(puVar6 + 0x98) = param_3;
  FUN_100075798(param_5,alStack_c8);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_7);
  uVar7 = 0x74736f6867;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0x74736f6867,0xe500000000000000,0);
  (**(code **)(lVar9 + 0x68))
            (lVar12,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar4);
  lVar5 = lVar12;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar12,uVar7);
  _swift_release(uVar7);
  (**(code **)(lVar9 + 8))(lVar12,lVar4);
  puVar8 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820;
  alStack_c8[0] = lVar5;
  __s7SwiftUI4ViewPAAE10unredactedQryF
            (lVar11,PTR___s7SwiftUI5ImageVN_1000b0830,PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820);
  _swift_release(lVar5);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (alStack_c8,0x402c000000000000,0,0x402c000000000000,0,lVar5,puVar8);
  lVar5 = alStack_c8[0];
  plVar2 = (long *)(lVar11 + *(int *)(alStack_f0[3] + 0x24));
  plVar2[1] = alStack_c8[1];
  *plVar2 = lVar5;
  plVar2[3] = alStack_c8[3];
  plVar2[2] = alStack_c8[2];
  plVar2[5] = lStack_a0;
  plVar2[4] = lStack_a8;
  FUN_100076920(lVar11,lVar10,0x1000c5df8,&UNK_10008c150);
  *puVar1 = FUN_1000768f8;
  puVar1[1] = puVar6;
  lVar5 = 0x1000c7c30;
  func_0x0001000100d0(0x1000c7c30,&UNK_10008e048);
  FUN_100076920(lVar10,(long)puVar1 + (long)*(int *)(lVar5 + 0x30),0x1000c5df8,&UNK_10008c150);
  _swift_retain(puVar6);
  func_0x000100076968(lVar11,0x1000c5df8,&UNK_10008c150);
  func_0x000100076968(lVar10,0x1000c5df8,&UNK_10008c150);
  _swift_release(puVar6);
  puVar6 = &UNK_10008df00;
  _swift_getKeyPath();
  lVar5 = 0x1000c7c38;
  func_0x0001000100d0(0x1000c7c38,&UNK_10008e050);
  plVar2 = plStack_d0;
  puVar1 = (undefined8 *)((long)plStack_d0 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = puVar6;
  *(undefined1 *)(puVar1 + 1) = 1;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar4 = 0x1000c7c40;
  func_0x0001000100d0(0x1000c7c40,&UNK_10008e058);
  puVar3 = (undefined1 *)((long)plVar2 + (long)*(int *)(lVar4 + 0x24));
  *puVar3 = (char)lVar5;
  *(undefined8 *)(puVar3 + 8) = param_3;
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar3[0x28] = 0;
  return;
}



/* Entry: 100075ecc; end: 100075fe3;  */

void FUN_100075ecc(undefined8 *param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  double dVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar2 = param_2;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_4;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x1000c7c48;
  func_0x0001000100d0(0x1000c7c48,&UNK_10008e060);
  FUN_100075fe4((long)param_1 + (long)*(int *)(lVar1 + 0x2c),param_5,param_6,param_7,param_8,param_9
                ,param_10);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  param_2 = param_2 - param_3;
  dVar2 = dVar2 - param_2;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_90,dVar2,0,param_2,0,param_5,param_6);
  lVar1 = 0x1000c7c50;
  func_0x0001000100d0(0x1000c7c50,&UNK_10008e068);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  return;
}



/* Entry: 100075fe4; end: 10007636f;  */

void FUN_100075fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  undefined8 *puVar16;
  long alStack_d0 [6];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar6 = 0x1000c7c58;
  alStack_d0[1] = param_5;
  alStack_d0[4] = param_1;
  func_0x0001000100d0(0x1000c7c58,&UNK_10008e070);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[5] = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar16 = (undefined8 *)(lVar6 - extraout_x12);
  lVar6 = 0x1000c7bb0;
  func_0x0001000100d0(0x1000c7bb0,&UNK_10008df40);
  alStack_d0[2] = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(alStack_d0[2] + 0x40));
  lVar14 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[3] = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - extraout_x12_00;
  __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
            (auStack_a0,param_3,param_4,0x402c000000000000,1);
  puVar7 = &UNK_10008df48;
  _swift_getKeyPath();
  puVar8 = &UNK_10008df78;
  _swift_getKeyPath();
  puVar9 = &UNK_10008dfa8;
  _swift_getKeyPath();
  uStack_90 = 0x3fe0000000000000;
  uStack_80 = 1;
  uStack_68 = 0;
  uVar10 = 0x1000c7bb8;
  puStack_98 = puVar7;
  puStack_88 = puVar8;
  puStack_78 = puVar9;
  uStack_70 = param_7;
  func_0x0001000100d0(0x1000c7bb8,&UNK_10008dfd8);
  uVar11 = uVar10;
  func_0x000100076538();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lVar14,1,uVar10,uVar11);
  puVar12 = auStack_a0;
  func_0x000100076798(puVar12,0x1000c7bb8,&UNK_10008dfd8);
  if (param_6 != 0) {
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    *puVar16 = puVar12;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 1;
    lVar13 = 0x1000c7c70;
    func_0x0001000100d0(0x1000c7c70,&UNK_10008e088);
    iVar1 = *(int *)(lVar13 + 0x2c);
    _swift_bridgeObjectRetain(param_6);
    __s7SwiftUI4TextV21SnapchatWidgetsSharedE02scC0_4withQrSS_AD11SCTextStyleOtFZ
              (auStack_a0,alStack_d0[1],param_6,0x402c000000000000,1);
    _swift_bridgeObjectRelease(param_6);
    puVar7 = &UNK_10008df48;
    _swift_getKeyPath();
    puVar8 = &UNK_10008df78;
    _swift_getKeyPath();
    puVar9 = &UNK_10008dfa8;
    _swift_getKeyPath();
    uStack_90 = 0x3fe0000000000000;
    uStack_80 = 1;
    uStack_70 = 1;
    uStack_68 = 0;
    puStack_98 = puVar7;
    puStack_88 = puVar8;
    puStack_78 = puVar9;
    __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF((long)puVar16 + (long)iVar1,1,uVar10,uVar11);
    func_0x000100076798(auStack_a0,0x1000c7bb8,&UNK_10008dfd8);
  }
  lVar13 = 0x1000c7c60;
  func_0x0001000100d0(0x1000c7c60,&UNK_10008e078);
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(puVar16,param_6 == 0,1,lVar13);
  lVar3 = alStack_d0[3];
  lVar2 = alStack_d0[2];
  pcVar15 = *(code **)(alStack_d0[2] + 0x10);
  (*pcVar15)(alStack_d0[3],lVar14,lVar6);
  lVar5 = alStack_d0[5];
  FUN_100076920(puVar16,alStack_d0[5],0x1000c7c58,&UNK_10008e070);
  lVar4 = alStack_d0[4];
  (*pcVar15)(alStack_d0[4],lVar3,lVar6);
  lVar13 = 0x1000c7c68;
  func_0x0001000100d0(0x1000c7c68,&UNK_10008e080);
  FUN_100076920(lVar5,lVar4 + *(int *)(lVar13 + 0x30),0x1000c7c58,&UNK_10008e070);
  func_0x000100076968(puVar16,0x1000c7c58,&UNK_10008e070);
  pcVar15 = *(code **)(lVar2 + 8);
  (*pcVar15)(lVar14,lVar6);
  func_0x000100076968(lVar5,0x1000c7c58,&UNK_10008e070);
  (*pcVar15)(lVar3,lVar6);
  return;
}



/* Entry: 100076370; end: 100076403;  */

undefined8 FUN_100076370(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100076404; end: 100076443;  */

void FUN_100076404(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s21SnapchatWidgetsShared7BitmojiV7SwiftUI4ViewAAMc_1000b0f18;
  _swift_getWitnessTable
            (PTR___s21SnapchatWidgetsShared7BitmojiV7SwiftUI4ViewAAMc_1000b0f18,
             PTR___s21SnapchatWidgetsShared7BitmojiVN_1000b0f28);
  puRam00000001000c7b98 = puVar1;
  return;
}



/* Entry: 100076444; end: 1000767d7;  */

void FUN_100076444(undefined8 *param_1,undefined8 param_2)

{
  __s7SwiftUI17EnvironmentValuesV18minimumScaleFactor12CoreGraphics7CGFloatVvg();
  *param_1 = param_2;
  return;
}



/* Entry: 1000767d8; end: 1000767e7;  */

void FUN_1000767d8(void)

{
  long unaff_x20;
  
  FUN_10006c1e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined2 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000767e8; end: 10007682b;  */

void FUN_1000767e8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10007682c; end: 10007688b;  */

void FUN_10007682c(void)

{
  long unaff_x20;
  
  FUN_10006c1e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined2 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10007688c; end: 10007689f;  */

void FUN_10007688c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long alStack_e0 [4];
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lVar10;
  
  alStack_e0[2] = *(undefined8 *)(unaff_x20 + 0x68);
  alStack_e0[3] = *(undefined8 *)(unaff_x20 + 0x70);
  plStack_c0 = *(long **)(unaff_x20 + 0x78);
  alStack_e0[0] = *(long *)(unaff_x20 + 0x80);
  lVar2 = *(long *)(unaff_x20 + 0x88);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x90);
  lVar10 = unaff_x20 + 0x10;
  lVar7 = 0x1000c7b50;
  uStack_a0 = param_4;
  func_0x0001000100d0(0x1000c7b50,&UNK_10008deb8);
  lStack_88 = *(long *)(lVar7 + -8);
  lStack_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  lVar7 = 0x1000c7b58;
  lStack_90 = lVar11;
  func_0x0001000100d0(0x1000c7b58,&UNK_10008dec0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar17 = (long *)(lVar11 - extraout_x12_00);
  lVar7 = 0x1000c7b60;
  func_0x0001000100d0(0x1000c7b60,&UNK_10008dec8);
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)plVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar15 = (long *)(lVar16 - extraout_x12_01);
  lVar11 = 0x1000c7b68;
  func_0x0001000100d0(0x1000c7b68,&UNK_10008ded0);
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar12 = (long)plVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar18 = (long *)(lVar12 - extraout_x12_02);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = lVar11;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar18 = lVar11;
  plVar18[1] = 0x4000000000000000;
  *(undefined1 *)(plVar18 + 2) = 0;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar15 = lVar11;
  plVar15[1] = 0;
  *(undefined1 *)(plVar15 + 2) = 1;
  lVar11 = 0x1000c7b70;
  func_0x0001000100d0(0x1000c7b70,&UNK_10008ded8);
  lVar12 = lVar10;
  FUN_1000757cc((long)plVar15 + (long)*(int *)(lVar11 + 0x2c),lVar10,alStack_e0[2],alStack_e0[3],
                plStack_c0);
  alStack_e0[1] = lVar10;
  if (lVar2 != 0) {
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    *plVar17 = lVar12;
    plVar17[1] = 0;
    *(undefined1 *)(plVar17 + 2) = 1;
    func_0x000100075990((long)plVar17 + (long)*(int *)(lVar11 + 0x2c),lVar10,alStack_e0[0],lVar2);
  }
  (**(code **)(lVar13 + 0x38))(plVar17,lVar2 == 0,1,lVar7);
  lVar7 = 0x1000c7b78;
  func_0x0001000100d0(0x1000c7b78,&UNK_10008dee0);
  alStack_e0[3] = (long)param_1 + (long)*(int *)(lVar7 + 0x2c);
  lVar7 = 0x1000c7b80;
  func_0x0001000100d0(0x1000c7b80,&UNK_10008dee8);
  lVar11 = (long)plVar18 + (long)*(int *)(lVar7 + 0x2c);
  plStack_c0 = param_1;
  FUN_100076370(plVar15,lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar10 = lStack_b0;
  FUN_100076370(plVar17,lStack_b0,0x1000c7b58,&UNK_10008dec0);
  FUN_100076370(lVar16,lVar11,0x1000c7b60,&UNK_10008dec8);
  lVar7 = 0x1000c7b88;
  func_0x0001000100d0(0x1000c7b88,&UNK_10008def0);
  FUN_100076370(lVar10,lVar11 + *(int *)(lVar7 + 0x30),0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar17,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar15,0x1000c7b60,&UNK_10008dec8);
  func_0x000100076968(lVar10,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar7 = 0x1000c7b90;
  func_0x0001000100d0(0x1000c7b90,&UNK_10008def8);
  puVar4 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar7 + 0x24));
  puVar4[1] = 0;
  *puVar4 = 0x4014000000000000;
  puVar8 = &UNK_10008df00;
  _swift_getKeyPath();
  puVar4 = (undefined8 *)((long)plVar18 + (long)*(int *)(lStack_b8 + 0x24));
  *puVar4 = puVar8;
  *(undefined1 *)(puVar4 + 1) = 0;
  uVar5 = uStack_98;
  uVar9 = uStack_98;
  _swift_bridgeObjectRetain(uStack_98);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  uStack_70 = uVar5;
  bVar3 = *(byte *)(alStack_e0[1] + 0x52);
  uStack_68 = param_3;
  FUN_100076404();
  lVar2 = lStack_90;
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF
            (lStack_90,(bVar3 ^ 0xff) & 1,PTR___s21SnapchatWidgetsShared7BitmojiVN_1000b0f28,uVar9);
  _swift_bridgeObjectRelease(uVar5);
  lVar10 = lStack_a8;
  func_0x000100076920(plVar18,lStack_a8,0x1000c7b68,&UNK_10008ded0);
  lVar16 = lStack_78;
  lVar13 = lStack_80;
  lVar12 = lStack_88;
  pcVar14 = *(code **)(lStack_88 + 0x10);
  (*pcVar14)(lStack_80,lVar2,lStack_78);
  lVar11 = alStack_e0[3];
  func_0x000100076920(lVar10,alStack_e0[3],0x1000c7b68,&UNK_10008ded0);
  lVar7 = 0x1000c7ba0;
  func_0x0001000100d0(0x1000c7ba0,&UNK_10008df30);
  puVar4 = (undefined8 *)(lVar11 + *(int *)(lVar7 + 0x30));
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0;
  (*pcVar14)(lVar11 + *(int *)(lVar7 + 0x40),lVar13,lVar16);
  pcVar14 = *(code **)(lVar12 + 8);
  (*pcVar14)(lVar2,lVar16);
  func_0x000100076968(plVar18,0x1000c7b68,&UNK_10008ded0);
  (*pcVar14)(lVar13,lVar16);
  func_0x000100076968(lVar10,0x1000c7b68,&UNK_10008ded0);
  uVar6 = (undefined1)lVar10;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar7 = 0x1000c7ba8;
  func_0x0001000100d0(0x1000c7ba8,&UNK_10008df38);
  puVar1 = (undefined1 *)((long)plStack_c0 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = 0x4014000000000000;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 1000768a0; end: 1000768f7;  */

void FUN_1000768a0(void)

{
  long unaff_x20;
  
  FUN_10006c1e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined2 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 1000768f8; end: 10007691f;  */

void FUN_1000768f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x88);
  dVar9 = *(double *)(unaff_x20 + 0x90);
  dVar10 = *(double *)(unaff_x20 + 0x98);
  lVar5 = unaff_x20 + 0x10;
  dVar8 = dVar9;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x1000c7c48;
  func_0x0001000100d0(0x1000c7c48,&UNK_10008e060);
  FUN_100075fe4((long)param_1 + (long)*(int *)(lVar4 + 0x2c),lVar5,uVar6,uVar2,uVar1,uVar3,uVar7);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  dVar9 = dVar9 - dVar10;
  dVar8 = dVar8 - dVar9;
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_90,dVar8,0,dVar9,0,lVar5,uVar6);
  lVar4 = 0x1000c7c50;
  func_0x0001000100d0(0x1000c7c50,&UNK_10008e068);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  return;
}



/* Entry: 100076920; end: 1000769d3;  */

undefined8 FUN_100076920(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000769d4; end: 100076a13;  */

void FUN_1000769d4(undefined8 *param_1)

{
  FUN_10006c1e8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],*(undefined2 *)(param_1 + 10));
  return;
}



/* Entry: 100076a14; end: 100076bdb;  */

undefined8 * FUN_100076a14(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar11;
  undefined1 uVar12;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined1 *)(param_2 + 10);
  uVar12 = *(undefined1 *)((long)param_2 + 0x51);
  FUN_10006c0d8(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = uVar11;
  *(undefined1 *)((long)param_1 + 0x51) = uVar12;
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  return param_1;
}



/* Entry: 100076bdc; end: 100076c57;  */

undefined8 * FUN_100076bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined2 *)(param_2 + 10);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar12 = param_1[9];
  uVar10 = *(undefined2 *)(param_1 + 10);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  *(undefined2 *)(param_1 + 10) = uVar9;
  FUN_10006c1e8(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12,uVar10);
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
  return param_1;
}



/* Entry: 100076c58; end: 100076d1b;  */

int FUN_100076c58(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x53) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 0x52)) {
    uVar1 = *(byte *)((long)param_1 + 0x52) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100076d1c; end: 100076d3f;  */

void FUN_100076d1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10007320c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100076d40; end: 100076d4f;  */

void FUN_100076d40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  long unaff_x20;
  code *pcVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long alStack_e0 [4];
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lVar10;
  
  alStack_e0[2] = *(undefined8 *)(unaff_x20 + 0x68);
  alStack_e0[3] = *(undefined8 *)(unaff_x20 + 0x70);
  plStack_c0 = *(long **)(unaff_x20 + 0x78);
  alStack_e0[0] = *(long *)(unaff_x20 + 0x80);
  lVar2 = *(long *)(unaff_x20 + 0x88);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x90);
  lVar10 = unaff_x20 + 0x10;
  lVar7 = 0x1000c7b50;
  uStack_a0 = param_4;
  func_0x0001000100d0(0x1000c7b50,&UNK_10008deb8);
  lStack_88 = *(long *)(lVar7 + -8);
  lStack_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_88 + 0x40));
  lVar11 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  lVar7 = 0x1000c7b58;
  lStack_90 = lVar11;
  func_0x0001000100d0(0x1000c7b58,&UNK_10008dec0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar17 = (long *)(lVar11 - extraout_x12_00);
  lVar7 = 0x1000c7b60;
  func_0x0001000100d0(0x1000c7b60,&UNK_10008dec8);
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)plVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar15 = (long *)(lVar16 - extraout_x12_01);
  lVar11 = 0x1000c7b68;
  func_0x0001000100d0(0x1000c7b68,&UNK_10008ded0);
  lStack_b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar12 = (long)plVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar18 = (long *)(lVar12 - extraout_x12_02);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = lVar11;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar18 = lVar11;
  plVar18[1] = 0x4000000000000000;
  *(undefined1 *)(plVar18 + 2) = 0;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar15 = lVar11;
  plVar15[1] = 0;
  *(undefined1 *)(plVar15 + 2) = 1;
  lVar11 = 0x1000c7b70;
  func_0x0001000100d0(0x1000c7b70,&UNK_10008ded8);
  lVar12 = lVar10;
  FUN_1000757cc((long)plVar15 + (long)*(int *)(lVar11 + 0x2c),lVar10,alStack_e0[2],alStack_e0[3],
                plStack_c0);
  alStack_e0[1] = lVar10;
  if (lVar2 != 0) {
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    *plVar17 = lVar12;
    plVar17[1] = 0;
    *(undefined1 *)(plVar17 + 2) = 1;
    func_0x000100075990((long)plVar17 + (long)*(int *)(lVar11 + 0x2c),lVar10,alStack_e0[0],lVar2);
  }
  (**(code **)(lVar13 + 0x38))(plVar17,lVar2 == 0,1,lVar7);
  lVar7 = 0x1000c7b78;
  func_0x0001000100d0(0x1000c7b78,&UNK_10008dee0);
  alStack_e0[3] = (long)param_1 + (long)*(int *)(lVar7 + 0x2c);
  lVar7 = 0x1000c7b80;
  func_0x0001000100d0(0x1000c7b80,&UNK_10008dee8);
  lVar11 = (long)plVar18 + (long)*(int *)(lVar7 + 0x2c);
  plStack_c0 = param_1;
  FUN_100076370(plVar15,lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar10 = lStack_b0;
  FUN_100076370(plVar17,lStack_b0,0x1000c7b58,&UNK_10008dec0);
  FUN_100076370(lVar16,lVar11,0x1000c7b60,&UNK_10008dec8);
  lVar7 = 0x1000c7b88;
  func_0x0001000100d0(0x1000c7b88,&UNK_10008def0);
  FUN_100076370(lVar10,lVar11 + *(int *)(lVar7 + 0x30),0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar17,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(plVar15,0x1000c7b60,&UNK_10008dec8);
  func_0x000100076968(lVar10,0x1000c7b58,&UNK_10008dec0);
  func_0x000100076968(lVar16,0x1000c7b60,&UNK_10008dec8);
  lVar7 = 0x1000c7b90;
  func_0x0001000100d0(0x1000c7b90,&UNK_10008def8);
  puVar4 = (undefined8 *)((long)plVar18 + (long)*(int *)(lVar7 + 0x24));
  puVar4[1] = 0;
  *puVar4 = 0x4014000000000000;
  puVar8 = &UNK_10008df00;
  _swift_getKeyPath();
  puVar4 = (undefined8 *)((long)plVar18 + (long)*(int *)(lStack_b8 + 0x24));
  *puVar4 = puVar8;
  *(undefined1 *)(puVar4 + 1) = 0;
  uVar5 = uStack_98;
  uVar9 = uStack_98;
  _swift_bridgeObjectRetain(uStack_98);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  uStack_70 = uVar5;
  bVar3 = *(byte *)(alStack_e0[1] + 0x52);
  uStack_68 = param_3;
  FUN_100076404();
  lVar2 = lStack_90;
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF
            (lStack_90,(bVar3 ^ 0xff) & 1,PTR___s21SnapchatWidgetsShared7BitmojiVN_1000b0f28,uVar9);
  _swift_bridgeObjectRelease(uVar5);
  lVar10 = lStack_a8;
  func_0x000100076920(plVar18,lStack_a8,0x1000c7b68,&UNK_10008ded0);
  lVar16 = lStack_78;
  lVar13 = lStack_80;
  lVar12 = lStack_88;
  pcVar14 = *(code **)(lStack_88 + 0x10);
  (*pcVar14)(lStack_80,lVar2,lStack_78);
  lVar11 = alStack_e0[3];
  func_0x000100076920(lVar10,alStack_e0[3],0x1000c7b68,&UNK_10008ded0);
  lVar7 = 0x1000c7ba0;
  func_0x0001000100d0(0x1000c7ba0,&UNK_10008df30);
  puVar4 = (undefined8 *)(lVar11 + *(int *)(lVar7 + 0x30));
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0;
  (*pcVar14)(lVar11 + *(int *)(lVar7 + 0x40),lVar13,lVar16);
  pcVar14 = *(code **)(lVar12 + 8);
  (*pcVar14)(lVar2,lVar16);
  func_0x000100076968(plVar18,0x1000c7b68,&UNK_10008ded0);
  (*pcVar14)(lVar13,lVar16);
  func_0x000100076968(lVar10,0x1000c7b68,&UNK_10008ded0);
  uVar6 = (undefined1)lVar10;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar7 = 0x1000c7ba8;
  func_0x0001000100d0(0x1000c7ba8,&UNK_10008df38);
  puVar1 = (undefined1 *)((long)plStack_c0 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = 0x4014000000000000;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 100076d50; end: 100076d97;  */

void FUN_100076d50(void)

{
  FUN_100074e6c();
  return;
}



/* Entry: 100076d98; end: 100076d9f; +[PMFFriend supportsSecureCoding] */

undefined8 FUN_100076d98(void)

{
  return 1;
}



/* Entry: 100076da0; end: 100076e87;  */

undefined1 *
FUN_100076da0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease();
  }
  FUN_100076e88();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_1000c1c50,
                      param_1,param_3,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 100076e88; end: 100076ea7;  */

void FUN_100076e88(void)

{
  _objc_opt_self(&PTR_PTR_1000c2ac0);
  return;
}



/* Entry: 100076ea8; end: 100076f3f; -[PMFFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_100076ea8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_100076da0(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



/* Entry: 100076f40; end: 100076f57; -[PMFFriend initWithCoder:] */

undefined1 * FUN_100076f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_100076e88();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100076f58; end: 100076fa7;  */

void FUN_100076f58(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  _swift_getObjCClassFromMetadata();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_1000c7c78;
  _objc_msgSendSuper2(auStack_30,PTR_s_successWithResolvedObject__1000c1880,param_1);
                    /* WARNING: Could not recover jumptable at 0x000100085f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_1000b10d0)();
  return;
}



/* Entry: 100076fa8; end: 100076feb; +[PMFFriendResolutionResult successWithResolvedPMFFriend:] */

void FUN_100076fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_100076f58();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(uVar1);
  return;
}



/* Entry: 100076fec; end: 1000770e3;  */

undefined1 * FUN_100076fec(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(param_1);
    __ss28__ContiguousArrayStorageBaseC17staticElementTypeypXpvgTj();
    uVar1 = 0;
    FUN_10006ac78(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_10006ac78(0);
    _swift_bridgeObjectRetain(param_1);
    __ss17_bridgeCocoaArrayySayxGyXllF(uVar4,uVar1);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_getObjCClassFromMetadata();
  FUN_10006ac78(0);
  uVar2 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_1000c7c78;
  _objc_msgSendSuper2(auStack_40,PTR_s_disambiguationWithObjectsToDisam_1000c1888,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  return puVar3;
}



/* Entry: 1000770e4; end: 10007718b; +[PMFFriendResolutionResult disambiguationWithPMFFriendsToDisambiguate:] */

void FUN_1000770e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100076e88();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_3;
  FUN_100076fec(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(uVar1);
  return;
}



/* Entry: 10007718c; end: 1000771db; +[PMFFriendResolutionResult confirmationRequiredWithPMFFriendToConfirm:] */

void FUN_10007718c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010007713c(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(param_3);
  return;
}



/* Entry: 1000771dc; end: 100077223; +[PMFFriendResolutionResult successWithResolvedObject:] */

void FUN_1000771dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100077224);
  (*pcVar1)();
}



/* Entry: 100077224; end: 10007726b; +[PMFFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_100077224(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10007726c);
  (*pcVar1)();
}



/* Entry: 10007726c; end: 1000772b3; +[PMFFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_10007726c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000772b4);
  (*pcVar1)();
}



/* Entry: 1000772b4; end: 1000772bf;  */

void FUN_1000772b4(void)

{
  FUN_1000772c0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 1000772c0; end: 1000772df;  */

void FUN_1000772c0(void)

{
  _objc_opt_self(&PTR_PTR_1000c2b70);
  return;
}



/* Entry: 1000772e0; end: 1000772fb;  */

void FUN_1000772e0(ulong *param_1,ulong *param_2)

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



/* Entry: 1000772fc; end: 10007732b;  */

void FUN_1000772fc(void)

{
  _swift_getObjCClassFromMetadata();
  func_0x0001000877e0();
                    /* WARNING: Could not recover jumptable at 0x000100085f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_1000b10d0)();
  return;
}



/* Entry: 10007732c; end: 100077387; +[OpenToResolutionResult successWithResolvedOpenTo:] */

void FUN_10007732c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  FUN_1000772fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)();
  return;
}



/* Entry: 100077388; end: 1000773b3; +[OpenToResolutionResult confirmationRequiredWithOpenToToConfirm:] */

void FUN_100077388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  func_0x000100077358(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)();
  return;
}



/* Entry: 1000773b4; end: 1000773bf;  */

void FUN_1000773b4(void)

{
  FUN_1000773c0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 1000773c0; end: 1000773ff;  */

void FUN_1000773c0(void)

{
  _objc_opt_self(&PTR_PTR_1000c2c38);
  return;
}


