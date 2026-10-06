/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10346363c; end: 1034637ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346363c(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long *plVar21;
  long unaff_x20;
  long lVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  undefined *puVar26;
  long alStack_b8 [3];
  long *plStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  puVar26 = param_2;
  func_0x000107c434dc();
  func_0x000107c61180();
  puVar20 = param_1;
  func_0x000107c5faec();
  puVar18 = puVar26;
  func_0x000107c61170(param_1);
  puVar19 = param_2;
  func_0x000107c434dc();
  func_0x000107c61180();
  puVar16 = puVar19;
  func_0x000107c5faec();
  func_0x000107c61170(puVar19);
  if ((puVar20 == puVar16) && (puVar26 == puVar18)) {
    func_0x000107c6142c(puVar26);
    func_0x000107c6142c(puVar18);
  }
  else {
    puVar19 = puVar18;
    func_0x000107c605b8(puVar20,puVar26,puVar16,puVar18,0);
    func_0x000107c6142c(puVar26);
    func_0x000107c6142c(puVar18);
    if (((ulong)puVar20 & 1) == 0) {
      plVar3 = *(long **)(unaff_x20 + _DAT_112f6e080);
      plVar17 = plVar3;
      func_0x000107c40f30();
      func_0x000107c61180();
      if (plVar17 != (long *)0x0) {
        uVar4 = 0;
        FUN_1034637ac(0,0x112d68fb8,&PTR_PTR_1126d8928);
        plVar5 = plVar17;
        func_0x000107c5fc54(plVar17,uVar4);
        func_0x000107c61170(plVar17);
        puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f6e088);
        func_0x0001000a8868(puVar6,puVar6[3]);
        puVar20 = (undefined *)*puVar6;
        uVar4 = 0;
        func_0x000103467350();
        ppuStack_70 = &PTR_DAT_1106591a0;
        plVar17 = alStack_b8;
        puStack_90 = puVar20;
        uStack_78 = uVar4;
        FUN_10345c42c(&puStack_90,plVar17);
        func_0x000107c6157c(puVar20);
        func_0x0001000834e4(&puStack_90);
        if ((ulong)plVar5 >> 0x3e == 0) {
          plVar24 = (long *)((long *)((ulong)plVar5 & 0xffffffffffffff8))[2];
        }
        else {
          plVar24 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
          if (((ulong)plVar5 & 0x8000000000000000) != 0) {
            plVar24 = plVar5;
          }
          func_0x000107c60480();
        }
        puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (plVar24 != (long *)0x0) {
          func_0x0001019d4adc(0,(ulong)plVar24 & ((long)plVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)plVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103462988);
            (*pcVar2)();
          }
          plVar25 = (long *)0x0;
          do {
            if (((ulong)plVar5 & 0xc000000000000001) == 0) {
              if ((long)plVar25 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10346296c);
                (*pcVar2)();
              }
              if (*(long **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10) <= plVar25) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103462970);
                (*pcVar2)();
              }
              plVar21 = (long *)plVar5[(long)((long)plVar25 + 4)];
              func_0x000107c61174();
            }
            else {
              puVar19 = (undefined *)0x112d68fb8;
              plVar21 = plVar25;
              func_0x0001034631ac(plVar25,plVar5,&PTR_PTR_1126d8928);
            }
            plVar7 = alStack_b8;
            plVar17 = plStack_a0;
            func_0x0001000a8868(plVar7,plStack_a0);
            plVar8 = *(long **)(*plVar7 + 0x10);
            func_0x000107c434f8();
            func_0x000107c61180();
            plVar7 = plVar21;
            if (plVar8 == (long *)0x0) {
LAB_10346241c:
              plVar9 = plVar21;
              func_0x000107c4a664();
              if ((int)plVar9 == 0) {
                plVar7 = (long *)PTR_PTR_1126b0820;
                func_0x000107c610f8();
                func_0x000107c453e4();
                plVar8 = plVar21;
                func_0x000107c434c4();
                func_0x000107c61180();
                plVar9 = plVar17;
                if (plVar8 == (long *)0x0) {
                  plVar8 = plVar21;
                  func_0x000107c434dc(plVar21);
                  func_0x000107c61180();
                  plVar9 = plVar17;
                }
                plVar10 = plVar8;
                func_0x000107c5faec();
                func_0x000107c61170(plVar8);
                plVar17 = plVar9;
                func_0x000107c5fadc(plVar10,plVar9);
                func_0x000107c6142c(plVar9);
                plVar8 = plVar7;
                func_0x000107c5e650();
                func_0x000107c61180();
                func_0x000107c61170(plVar7);
                func_0x000107c61170(plVar10);
                func_0x000107c434f0();
                plVar9 = plVar8;
                func_0x000107c5e848();
                func_0x000107c61180();
                func_0x000107c61170(plVar8);
                func_0x000107c4a4c0(plVar21);
                plVar7 = plVar9;
                func_0x000107c5e608();
                func_0x000107c61180();
                func_0x000107c61170(plVar9);
                plVar9 = plVar7;
                func_0x000107c3ecc8();
                func_0x000107c61180();
                func_0x000107c61170(plVar21);
              }
              else {
                FUN_1034671c0();
              }
            }
            else {
              plVar9 = plVar8;
              func_0x000107c3e1cc();
              func_0x000107c61180();
              func_0x000107c61170(plVar8);
              if (plVar9 == (long *)0x0) goto LAB_10346241c;
            }
            func_0x000107c61170(plVar7);
            uVar1 = *(ulong *)(puVar20 + 0x10);
            plVar21 = (long *)(uVar1 + 1);
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar1) {
              plVar17 = plVar21;
              func_0x0001019d4adc(1 < *(ulong *)(puVar20 + 0x18),plVar21,1);
            }
            plVar25 = (long *)((long)plVar25 + 1);
            *(long **)(puVar20 + 0x10) = plVar21;
            *(long **)(puVar20 + uVar1 * 8 + 0x20) = plVar9;
          } while (plVar24 != plVar25);
        }
        func_0x0001000834e4(alStack_b8);
        if ((ulong)plVar5 >> 0x3e == 0) {
          plVar24 = (long *)((long *)((ulong)plVar5 & 0xffffffffffffff8))[2];
        }
        else {
          plVar24 = (long *)((ulong)plVar5 & 0xffffffffffffff8);
          if (((ulong)plVar5 & 0x8000000000000000) != 0) {
            plVar24 = plVar5;
          }
          func_0x000107c60480();
        }
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61434(puVar20);
        if (plVar24 != (long *)0x0) {
          puVar26 = (undefined *)((ulong)puVar20 & 0xffffffffffffff8);
          puVar16 = puVar26;
          if ((undefined *)0x7fffffffffffffff < puVar20) {
            puVar16 = puVar20;
          }
          lVar22 = 4;
          puVar18 = PTR___sytN_11034f1b0 + 8;
          do {
            puVar23 = (undefined *)(lVar22 + -4);
            if (((ulong)plVar5 & 0xc000000000000001) == 0) {
              if (*(undefined **)(((ulong)plVar5 & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103462964);
                (*pcVar2)();
              }
              puVar11 = (undefined *)plVar5[lVar22];
              func_0x000107c61174();
            }
            else {
              puVar19 = (undefined *)0x112d68fb8;
              puVar11 = puVar23;
              plVar17 = plVar5;
              func_0x0001034631ac(puVar23,plVar5,&PTR_PTR_1126d8928);
            }
            plVar25 = (long *)(lVar22 + -3);
            if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103462960);
              (*pcVar2)();
            }
            if ((ulong)puVar20 >> 0x3e == 0) {
              puVar12 = *(undefined **)(puVar26 + 0x10);
            }
            else {
              puVar12 = puVar16;
              func_0x000107c60480();
            }
            if (puVar23 == puVar12) {
              func_0x000107c6142c(puVar20);
              func_0x000107c6142c(plVar5);
              func_0x000107c61170(puVar11);
              goto LAB_103462904;
            }
            if (((ulong)puVar20 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar26 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103462968);
                (*pcVar2)();
              }
              puVar23 = *(undefined **)(puVar20 + lVar22 * 8);
              func_0x000107c61174();
            }
            else {
              puVar19 = (undefined *)0x112d4d630;
              plVar17 = (long *)puVar20;
              func_0x0001034631ac(puVar23,puVar20,&PTR_PTR_1126ae6a8);
            }
            puVar12 = puVar11;
            func_0x000107c434f0();
            if (puVar12 == (undefined *)0x7) {
              func_0x000107c61170(puVar23);
              func_0x000107c61170(puVar11);
            }
            else {
              puVar12 = puVar11;
              func_0x000107c434dc();
              func_0x000107c61180();
              puVar14 = puVar19;
              if (puVar12 == (undefined *)0x0) {
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(plVar17);
                puVar14 = puVar19;
              }
              plVar17 = plVar3;
              func_0x000107c40090();
              func_0x000107c61180();
              func_0x000107c61170(puVar12);
              if (plVar17 == (long *)0x0) {
                plVar21 = (long *)0x0;
              }
              else {
                plVar21 = plVar17;
                puVar14 = PTR___ss11AnyHashableVSHsWP_11034e450;
                func_0x000107c5f9e8(plVar17,PTR___ss11AnyHashableVN_11034e448,
                                    PTR___sypN_11034f1a8 + 8);
                func_0x000107c61170(plVar17);
              }
              func_0x000107c61174();
              func_0x000107c61174();
              puVar13 = puVar11;
              puVar15 = puVar23;
              FUN_103461a44();
              puVar19 = &UNK_110658b10;
              func_0x000107c613fc(&UNK_110658b10,0x18,7);
              func_0x000107c61614(puVar19 + 0x10,unaff_x20);
              puVar12 = &UNK_110658b60;
              func_0x000107c613fc(&UNK_110658b60,0x40,7);
              *(undefined **)(puVar12 + 0x10) = puVar19;
              *(undefined **)(puVar12 + 0x18) = puVar13;
              *(undefined **)(puVar12 + 0x20) = puVar15;
              *(long **)(puVar12 + 0x28) = plVar21;
              *(undefined **)(puVar12 + 0x30) = puVar14;
              *(undefined **)(puVar12 + 0x38) = puVar23;
              func_0x000107c61174(puVar14);
              func_0x000107c61174(puVar23);
              func_0x000107c61174(puVar13);
              func_0x000107c61174(puVar15);
              func_0x000107c61174(plVar21);
              uVar4 = 0;
              plVar17 = (long *)0x3;
              puVar19 = (undefined *)0x4;
              func_0x0001001ca524(0,3,0x38,4,0,0,&UNK_10dbcb658,puVar12,puVar18);
              func_0x000107c61170(puVar23);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar14);
              func_0x000107c61170(plVar21);
              func_0x000107c61170(puVar15);
              func_0x000107c61170(puVar13);
              func_0x000107c61574(puVar12);
              func_0x000107c61574(uVar4);
            }
            lVar22 = lVar22 + 1;
          } while (plVar25 != plVar24);
        }
        func_0x000107c6142c(puVar20);
        func_0x000107c6142c(plVar5);
LAB_103462904:
        func_0x000107c61170(unaff_x20);
        func_0x000107c61170(unaff_x20);
        uStack_88 = 0;
        uStack_80 = 0;
        puStack_90 = puVar20;
        func_0x0001002a64a8(&puStack_90);
        func_0x000107c6142c(puVar20);
      }
      return;
    }
  }
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f6e088);
  func_0x0001000a8868(puVar6,puVar6[3]);
  puVar20 = param_2;
  FUN_10346702c(*puVar6);
  FUN_103462988(param_2,puVar20);
  puStack_68 = puVar20;
  func_0x000107c61174(puVar20);
  func_0x0001002a64a8(&puStack_68);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar20);
  return;
}



/* Entry: 1034637ac; end: 1034637eb;  */

void FUN_1034637ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1034637ec; end: 1034637ef; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController filterCarouselOrderProvider:didRemoveFilterItem:AtIndex:] */

void FUN_1034637ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103462278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034637f0; end: 1034637f7; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewDataProviderController filterCarouselOrderProvider:didInsertFilterItem:AtIndex:] */

void FUN_1034637f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103462278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034637f8; end: 103463853; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController lensFullScreenModeEnabled] */

undefined8 FUN_1034637f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c5dc0c(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c3ebcc();
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 103463854; end: 10346385b; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController lensFullScreenModeEnabledObservable] */

void FUN_103463854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10346385c; end: 103463883; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController lensSnapButtonEventObservable] */

void FUN_10346385c(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103463884; end: 103463887; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController setSnapButtonHidden:] */

void FUN_103463884(void)

{
  return;
}



/* Entry: 103463888; end: 1034638ef; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController setupLensFullScreenModeEnabled:] */

void FUN_103463888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c5fca0(param_3);
  func_0x000107c4d664(uVar1,param_2,param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1034638f0; end: 1034639af; -[_TtC30LensCarouselPreviewIntegration51LensCarouselPreviewLensFeaturesVisibilityController setVisibleInterfaceElements:] */

/* WARNING: Possible PIC construction at 0x000103463964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103463984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103463994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103463988) */
/* WARNING: Removing unreachable block (ram,0x000103463968) */
/* WARNING: Removing unreachable block (ram,0x000103463998) */

void FUN_1034638f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  func_0x00010450e890(0);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c61174();
  func_0x00010450e304();
  uVar1 = *puVar2;
  func_0x000107c61174(uVar1);
  func_0x000107c60118(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1034639b0; end: 1034639f3;  */

void FUN_1034639b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034639f4; end: 103463e33;  */

void FUN_1034639f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x0001000d224c(&puStack_a0);
  puVar10 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_a0);
    puVar2 = puStack_a0;
    if (puStack_a0 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_a0);
      puVar3 = puStack_a0;
      if (puStack_a0 != (undefined *)0x0) {
        puVar5 = puVar10;
        func_0x000107c3d1a0(puVar10);
        func_0x000107c61180();
        puVar6 = &UNK_110658bc8;
        func_0x000107c613fc(&UNK_110658bc8,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = (code *)0x103464aec;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_100b5fdac;
        puStack_88 = &UNK_110658be0;
        ppuVar7 = &puStack_a0;
        puStack_78 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_78);
        puVar6 = puVar5;
        func_0x000107c5c320(puVar5);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar5);
        func_0x000107c3e924(puVar6);
        func_0x000107c61170(puVar6);
        puVar6 = puVar2;
        func_0x000107c4b0c4();
        func_0x000107c61180();
        if (puVar6 != (undefined *)0x0) {
          puVar5 = &UNK_110658bc8;
          puVar8 = puVar5;
          func_0x000107c613fc(&UNK_110658bc8,0x18,7);
          func_0x000107c61644(puVar8 + 0x10);
          pcStack_80 = FUN_103464b28;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          puStack_90 = (undefined *)0x103464c88;
          puStack_88 = &UNK_110658c08;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar8;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          puVar8 = puVar6;
          func_0x000107c5c320(puVar6);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c3e924(puVar8);
          func_0x000107c61170(puVar8);
          puVar6 = puVar3;
          func_0x000107c4b188(puVar3);
          func_0x000107c61180();
          puVar8 = puVar5;
          func_0x000107c613fc(&UNK_110658bc8,0x18,7);
          func_0x000107c61644(puVar8 + 0x10);
          pcStack_80 = (code *)0x103464b48;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_100b5fdac;
          puStack_88 = &UNK_110658c30;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar8;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          puVar8 = puVar6;
          func_0x000107c5c320(puVar6);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(puVar6);
          func_0x000107c3e924(puVar8);
          func_0x000107c61170(puVar8);
          uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
          puVar6 = puVar5;
          func_0x000107c613fc(&UNK_110658bc8,0x18,7);
          func_0x000107c61644(puVar6 + 0x10);
          pcStack_80 = (code *)0x103464b68;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          puStack_90 = (undefined *)0x103464c8c;
          puStack_88 = &UNK_110658c58;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          func_0x000107c5c320(uVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c3e924(uVar11);
          func_0x000107c61170(uVar11);
          func_0x0001000d224c(&uStack_a8);
          uVar11 = uStack_a8;
          func_0x000107c5b360(uStack_a8);
          func_0x000107c61180();
          func_0x000107c615e8(uStack_a8);
          func_0x000107c613fc(&UNK_110658bc8,0x18,7);
          func_0x000107c61644(puVar5 + 0x10);
          pcStack_80 = FUN_103464b88;
          puStack_a0 = puVar1;
          uStack_98 = 0x42000000;
          puStack_90 = (undefined *)0x103464c90;
          puStack_88 = &UNK_110658c80;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar5;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_78);
          uVar9 = uVar11;
          func_0x000107c5c320(uVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61170(uVar11);
          func_0x000107c3e924(uVar9);
          func_0x000107c615e8(puVar10);
          func_0x000107c615e8(puVar2);
          func_0x000107c615e8(puVar3);
          func_0x000107c61170(uVar9);
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103463e34);
        (*pcVar4)();
      }
      func_0x000107c615e8(puVar10);
      puVar10 = puVar2;
    }
    func_0x000107c615e8(puVar10);
  }
  return;
}



/* Entry: 103463e34; end: 103463eab;  */

void FUN_103463e34(ulong param_1,undefined8 param_2)

{
  long lStack_28;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 == 0) {
      return;
    }
    func_0x000107c5be74(lStack_28);
  }
  else {
    func_0x0001000d224c(&lStack_28);
    if (lStack_28 == 0) {
      return;
    }
    func_0x000107c5bbc0(lStack_28,param_2,0,5,0);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x000107c615e8(lStack_28);
  return;
}



/* Entry: 103463eac; end: 103464077;  */

void FUN_103463eac(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_110658f88;
  func_0x000107c613fc(&UNK_110658f88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x103464cb4;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x103464c80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110658fa0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110658fd8;
  func_0x000107c613fc(&UNK_110658fd8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x103464cb8;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  uStack_70 = 0x103464c84;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110658ff0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c7d4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x9f,0x54,0x20,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103464074);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x9f,0x56,0x17,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103464078);
  (*pcVar1)();
}



/* Entry: 103464078; end: 1034640e7;  */

void FUN_103464078(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c3ebcc(param_1);
    (*param_3)();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1034640e8; end: 103464153;  */

void FUN_1034640e8(ulong param_1)

{
  ulong uVar1;
  ulong uStack_28;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&uStack_28);
    if (uStack_28 == 0) {
      return;
    }
    uVar1 = uStack_28;
    func_0x000107c4a3e0();
    if ((uVar1 & 1) != 0) {
      func_0x000107c5073c(uStack_28);
    }
  }
  else {
    func_0x0001000d224c(&uStack_28);
    if (uStack_28 == 0) {
      return;
    }
    func_0x000107c4e47c(uStack_28);
  }
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 103464154; end: 1034641bf;  */

void FUN_103464154(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1034641c0; end: 1034648cb;  */

void FUN_1034641c0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar2 = &UNK_110658cb8;
  func_0x000107c613fc(&UNK_110658cb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x103464b90;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar20 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_103464b98;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658cd0;
  ppuVar3 = &puStack_a8;
  puStack_80 = puVar2;
  func_0x000107c60bc4();
  puVar4 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110658d08;
  func_0x000107c613fc(&UNK_110658d08,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103464bb8;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c60;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658d20;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110658d58;
  func_0x000107c613fc(&UNK_110658d58,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x103464bd0;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c64;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658d70;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110658da8;
  func_0x000107c613fc(&UNK_110658da8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = 0x103464c9c;
  *(undefined8 *)(puVar8 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c68;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658dc0;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_110658df8;
  func_0x000107c613fc(&UNK_110658df8,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x103464ca0;
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c6c;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658e10;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4();
  puVar12 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110658e48;
  func_0x000107c613fc(&UNK_110658e48,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x103464ca4;
  *(undefined8 *)(puVar12 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c70;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658e60;
  ppuVar13 = &puStack_a8;
  puStack_80 = puVar12;
  func_0x000107c60bc4();
  puVar14 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_110658e98;
  func_0x000107c613fc(&UNK_110658e98,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x103464ca8;
  *(undefined8 *)(puVar14 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c74;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658eb0;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4();
  puVar16 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_110658ee8;
  func_0x000107c613fc(&UNK_110658ee8,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = 0x103464cac;
  *(undefined8 *)(puVar16 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c78;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658f00;
  ppuVar17 = &puStack_a8;
  puStack_80 = puVar16;
  func_0x000107c60bc4();
  puVar18 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar18);
  puVar18 = &UNK_110658f38;
  func_0x000107c613fc(&UNK_110658f38,0x20,7);
  *(undefined8 *)(puVar18 + 0x10) = 0x103464cb0;
  *(undefined8 *)(puVar18 + 0x18) = unaff_x20;
  pcStack_88 = (code *)0x103464c7c;
  puStack_a8 = puVar20;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_110658f50;
  ppuVar19 = &puStack_a8;
  puStack_80 = puVar18;
  func_0x000107c60bc4();
  puVar20 = puStack_80;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar18);
  func_0x000107c61574(puVar20);
  func_0x000107c4c5d4(param_1);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar20 = puVar2;
  func_0x000107c61544(puVar2,"",0x9f,0x5c,0x1e,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar20 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648ac);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x9f,0x5e,0x1d,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648b0);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x9f,0x60,0x1d,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648b4);
    (*pcVar1)();
  }
  puVar2 = puVar8;
  func_0x000107c61544(puVar8,"",0x9f,0x62,0x27,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar8);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648b8);
    (*pcVar1)();
  }
  puVar2 = puVar10;
  func_0x000107c61544(puVar10,"",0x9f,100,0x27,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar10);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648bc);
    (*pcVar1)();
  }
  puVar2 = puVar12;
  func_0x000107c61544(puVar12,"",0x9f,0x66,0x22,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar12);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648c0);
    (*pcVar1)();
  }
  puVar2 = puVar14;
  func_0x000107c61544(puVar14,"",0x9f,0x68,0x22,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar14);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648c4);
    (*pcVar1)();
  }
  puVar2 = puVar16;
  func_0x000107c61544(puVar16,"",0x9f,0x6a,0x21,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar16);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar18;
    func_0x000107c61544(puVar18,"",0x9f,0x6c,0x21,1);
    func_0x000107c61574(puVar18);
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648cc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034648c8);
  (*pcVar1)();
}



/* Entry: 1034648cc; end: 10346493b;  */

void FUN_1034648cc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000103bbc870(0x103464c94,param_2,0x103464c98,param_2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10346493c; end: 103464987;  */

void FUN_10346493c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103464988; end: 103464a5f;  */

void FUN_103464988(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c5be74(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 103464a60; end: 103464b0b;  */

void FUN_103464a60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 103464b0c; end: 103464b27;  */

void FUN_103464b0c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103464b28; end: 103464b87;  */

void FUN_103464b28(void)

{
  FUN_103464154();
  return;
}



/* Entry: 103464b88; end: 103464b97;  */

void FUN_103464b88(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000103bbc870(0x103464c94,lVar1,0x103464c98,lVar1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103464b98; end: 103464bb7;  */

void FUN_103464b98(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103464bb8; end: 103464be7;  */

void FUN_103464bb8(void)

{
  func_0x0001034649cc();
  return;
}



/* Entry: 103464be8; end: 103464cbb;  */

void FUN_103464be8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103464cbc; end: 103464cc3; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewUIActivationParameters openAnimated] */

undefined8 FUN_103464cbc(void)

{
  return 0;
}



/* Entry: 103464cc4; end: 103464ccb; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewUIActivationParameters closeAnimated] */

undefined8 FUN_103464cc4(void)

{
  return 0;
}



/* Entry: 103464ccc; end: 103464cd3; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewUIActivationParameters shouldKeepVisibleAfterHide] */

undefined8 FUN_103464ccc(void)

{
  return 0;
}



/* Entry: 103464cd4; end: 103464d0f; -[_TtC30LensCarouselPreviewIntegration41LensCarouselPreviewUIActivationParameters init] */

void FUN_103464cd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103464d10; end: 103464d63;  */

void FUN_103464d10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103464d64; end: 103464dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103464d64(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f6e278;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f6e278);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126dbc18;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 103464dd0; end: 103464e03; -[_TtC30LensCarouselPreviewIntegration34LensCarouselSnapEditorViewProvider containerView] */

void FUN_103464dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103464d64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103464e04; end: 103464e37; -[_TtC30LensCarouselPreviewIntegration34LensCarouselSnapEditorViewProvider carouselViewContainer] */

void FUN_103464e04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103464e38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103464e38; end: 103464f5f;  */

undefined * FUN_103464e38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_a0;
  puVar2 = &UNK_110659028;
  func_0x000107c613fc(&UNK_110659028,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = PTR_PTR_1126af4a8;
  func_0x000107c610f8(PTR_PTR_1126af4a8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = FUN_103465330;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10127a6c0;
  puStack_58 = &UNK_110659040;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(ppuVar4);
  pcStack_80 = FUN_103465240;
  uStack_78 = 0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e17304;
  puStack_88 = &UNK_110659068;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c6157c(puVar2);
  func_0x000107c47be0(puVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(uStack_78);
  puVar1 = puStack_48;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar1);
  return puVar3;
}



/* Entry: 103464f60; end: 103464fbb;  */

void FUN_103464f60(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103464fbc(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103464fbc; end: 10346523f;  */

/* WARNING: Possible PIC construction at 0x000103464ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103465078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034650cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103465124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034651b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034651ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034651b4) */
/* WARNING: Removing unreachable block (ram,0x000103465128) */
/* WARNING: Removing unreachable block (ram,0x0001034651bc) */
/* WARNING: Removing unreachable block (ram,0x0001034651c0) */
/* WARNING: Removing unreachable block (ram,0x000103465164) */
/* WARNING: Removing unreachable block (ram,0x0001034650d0) */
/* WARNING: Removing unreachable block (ram,0x00010346507c) */
/* WARNING: Removing unreachable block (ram,0x000103464ffc) */
/* WARNING: Removing unreachable block (ram,0x0001034651f0) */

void FUN_103464fbc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5a050(param_1,param_2,0);
  FUN_103464d64();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103465240; end: 103465263;  */

void FUN_103465240(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 103465264; end: 103465277; -[_TtC30LensCarouselPreviewIntegration34LensCarouselSnapEditorViewProvider carouselViewContainerFrameIn:] */

undefined8 FUN_103465264(void)

{
  return 0;
}



/* Entry: 103465278; end: 1034652d7; -[_TtC30LensCarouselPreviewIntegration34LensCarouselSnapEditorViewProvider init] */

void FUN_103465278(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.LensCarouselSnapEditorViewProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034652a4);
  (*pcVar1)();
}



/* Entry: 1034652d8; end: 10346530f; -[_TtC30LensCarouselPreviewIntegration34LensCarouselSnapEditorViewProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034652f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034652f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034652d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6e270));
  return;
}



/* Entry: 103465310; end: 10346532f;  */

void FUN_103465310(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc070);
  return;
}



/* Entry: 103465330; end: 10346535b;  */

void FUN_103465330(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103464fbc(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10346535c; end: 103465387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10346535c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f6e2a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103465388; end: 1034653cb; -[SCPreviewLensCarouselScrollSource initWithSwipeFilterViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  func_0x000107c615f0();
  func_0x000107c614f0(param_1,param_1,uVar1);
  *(undefined8 *)(param_1 + _DAT_112f6e2a8) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034653cc; end: 103465493; -[SCPreviewLensCarouselScrollSource externalScrollSourceEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034653cc(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f6e2a8);
  func_0x000107c61174();
  func_0x000107c5c498(uVar3);
  func_0x000107c61180();
  pcStack_40 = FUN_103465494;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_103465814;
  puStack_48 = &UNK_110659090;
  func_0x000107c60bc4(&puStack_60);
  uVar2 = uVar3;
  func_0x000107c436ac(uVar3,param_2,ppuVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103465494; end: 10346569b;  */

undefined * FUN_103465494(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  lVar2 = param_1;
  func_0x000107c41d70();
  func_0x000107c61180();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103465698);
    (*pcVar1)();
  }
  pcStack_60 = FUN_10346569c;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1034656a8;
  puStack_68 = &UNK_1106590b8;
  func_0x000107c60bc4(&puStack_80);
  lVar4 = lVar2;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c41b64();
  func_0x000107c61180();
  if (param_1 != 0) {
    pcStack_60 = FUN_10346579c;
    uStack_58 = 0;
    puStack_80 = puVar6;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1034656a8;
    puStack_68 = &UNK_1106590e0;
    func_0x000107c60bc4(&puStack_80);
    lVar2 = param_1;
    func_0x000107c3feb8();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000102415848();
    func_0x000107c613fc();
    *(undefined8 *)(puVar7 + 0x18) = 5;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(long *)(puVar7 + 0x20) = lVar4;
    *(long *)(puVar7 + 0x28) = lVar2;
    func_0x000107c61174(lVar4);
    func_0x000107c61174(lVar2);
    uVar8 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    puVar9 = puVar7;
    func_0x000107c5fc48(puVar7,uVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c4cd50(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar7 = puVar6;
    func_0x000107c4f63c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10346569c);
  (*pcVar1)();
}



/* Entry: 10346569c; end: 1034656a7;  */

void FUN_10346569c(undefined8 *param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3ab34();
  if (NAN(param_2)) {
    uVar2 = 0;
    uVar1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103f98564();
    uVar2 = uVar1;
    (*(code *)&UNK_103f9824c)(param_2);
  }
  *param_1 = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1034656a8; end: 10346579b;  */

void FUN_1034656a8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10346579c; end: 1034657a7;  */

void FUN_10346579c(undefined8 *param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3ab34();
  if (NAN(param_2)) {
    uVar2 = 0;
    uVar1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103f98564();
    uVar2 = uVar1;
    (*(code *)&UNK_103f98348)(param_2);
  }
  *param_1 = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 1034657a8; end: 103465813;  */

void FUN_1034657a8(undefined8 *param_1,double param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c3ab34();
  if (NAN(param_2)) {
    uVar2 = 0;
    uVar1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103f98564();
    uVar2 = uVar1;
    (*param_4)(param_2);
  }
  *param_1 = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 103465814; end: 103465867;  */

void FUN_103465814(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103465868; end: 1034658bb; -[SCPreviewLensCarouselScrollSource carouselWillBeginScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465868(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f6e2a8);
  func_0x000107c61174();
  func_0x000107c5c494();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5e328();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034658bc; end: 103465923; -[SCPreviewLensCarouselScrollSource carouselDidChangeItemOffsetWithOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034658bc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + _DAT_112f6e2a8);
  func_0x000107c61174();
  func_0x000107c5c494();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c51a48(param_1,0);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103465924; end: 103465977; -[SCPreviewLensCarouselScrollSource carouselDidEndScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465924(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f6e2a8);
  func_0x000107c61174();
  func_0x000107c5c494();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c41bc8();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103465978; end: 1034659d7; -[SCPreviewLensCarouselScrollSource init] */

void FUN_103465978(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.PreviewLensCarouselScrollSource",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034659a4);
  (*pcVar1)();
}



/* Entry: 1034659d8; end: 1034659e7; -[SCPreviewLensCarouselScrollSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034659d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f6e2a8));
  return;
}



/* Entry: 1034659e8; end: 103465a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034659e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c610f8();
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f6e2a8) = param_1;
  lStack_30 = param_2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103465a8c; end: 103465aa7;  */

void FUN_103465a8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103465aa8; end: 103465ac7;  */

void FUN_103465aa8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc138);
  return;
}



/* Entry: 103465ac8; end: 103465adf;  */

void FUN_103465ac8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103465ae0; end: 103465b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465ae0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107c614f0();
  func_0x000107c610f8();
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f6e2e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103465b0c; end: 103465b3f; -[SCSwipeFilterViewProviderAdapter swipeFilterView] */

void FUN_103465b0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103465b40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103465b40; end: 103465bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103465b40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f6e2d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5c4a8();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar3 = lVar2;
    func_0x000107c5dc0c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar1 = lVar3;
    func_0x000107c498d0(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  return lVar1;
}



/* Entry: 103465bdc; end: 103465c0f; -[SCSwipeFilterViewProviderAdapter swipeFilterViewObservable] */

void FUN_103465bdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103465c10();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103465c10; end: 103465d0f;  */

/* WARNING: Possible PIC construction at 0x000103465c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103465c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103465cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103465c50) */
/* WARNING: Removing unreachable block (ram,0x000103465c3c) */
/* WARNING: Removing unreachable block (ram,0x000103465ce8) */
/* WARNING: Removing unreachable block (ram,0x000103465c40) */
/* WARNING: Removing unreachable block (ram,0x000103465cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465c10(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112f6e2d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103465d10; end: 103465d57;  */

void FUN_103465d10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c498d0();
  func_0x000107c61180();
  uVar1 = 0x112f6e338;
  func_0x0001000285a8(0x112f6e338,&UNK_10dbcb800);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103465d58; end: 103465dd7;  */

void FUN_103465d58(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103465dd8; end: 103465e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465dd8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f6e2d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103465e24; end: 103465e7b; -[SCSwipeFilterViewProviderAdapter initWithSwipeFiltersProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f6e2d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103465e7c; end: 103465ea7; -[SCSwipeFilterViewProviderAdapter init] */

void FUN_103465e7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.SwipeFilterViewProviderAdapter",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103465ea8);
  (*pcVar1)();
}



/* Entry: 103465ea8; end: 103465eb7; -[SCSwipeFilterViewProviderAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f6e2d8));
  return;
}



/* Entry: 103465eb8; end: 103465ed7; -[SCStaticSwipeFilterViewProvider swipeFilterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465eb8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f6e2e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103465ed8; end: 103465f17; -[SCStaticSwipeFilterViewProvider swipeFilterViewObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465ed8(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c4a8a4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103465f18; end: 103465f5b; -[SCStaticSwipeFilterViewProvider initWithSwipeFilterView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  func_0x000107c615f0();
  func_0x000107c614f0(param_1,param_1,uVar1);
  *(undefined8 *)(param_1 + _DAT_112f6e2e0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103465f5c; end: 103465f87; -[SCStaticSwipeFilterViewProvider init] */

void FUN_103465f5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselPreviewIntegration.StaticSwipeFilterViewProvider",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103465f88);
  (*pcVar1)();
}



/* Entry: 103465f88; end: 103465f8b;  */

void FUN_103465f88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103465f8c; end: 103465fbf;  */

void FUN_103465f8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103465fc0; end: 103465fcf; -[SCStaticSwipeFilterViewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f6e2e0));
  return;
}



/* Entry: 103465fd0; end: 103466023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103465fd0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c610f8();
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f6e2e0) = param_1;
  lStack_30 = param_2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103466024; end: 10346603f;  */

void FUN_103466024(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103466040; end: 10346608f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103466040(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112f6e2e0) = param_1;
  lStack_30 = param_2;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103466090; end: 1034660cf;  */

void FUN_103466090(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc1f8);
  return;
}



/* Entry: 1034660d0; end: 1034660d3;  */

void FUN_1034660d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034660d4; end: 103466103;  */

undefined8 FUN_1034660d4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = unaff_x20;
  func_0x000107c4a458();
  if ((int)uVar1 != 0) {
    func_0x000107c43b20();
    return unaff_x20;
  }
  return 2;
}



/* Entry: 103466104; end: 1034661b3;  */

undefined * FUN_103466104(void)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    dVar4 = *(double *)(unaff_x20 + 0x10);
    dVar2 = *(double *)(unaff_x20 + 0x20);
    dVar5 = 0.0;
    if (*(char *)(unaff_x20 + 0x28) != '\x01') {
      dVar5 = dVar2;
    }
    func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + 0x38));
    *(double *)(unaff_x20 + 0x20) = (dVar5 + dVar2) - dVar4;
    *(undefined1 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
  }
  puVar1 = PTR_PTR_1126c8cc8;
  func_0x000107c610f8(PTR_PTR_1126c8cc8);
  func_0x000107c453e4();
  FUN_1034661b4();
  uVar3 = 0;
  if (*(char *)(unaff_x20 + 0x28) != '\x01') {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  func_0x000107c52200(uVar3,puVar1);
  return puVar1;
}



/* Entry: 1034661b4; end: 1034664bf;  */

/* WARNING: Possible PIC construction at 0x0001034662a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034663d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103466468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010346647c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010346646c) */
/* WARNING: Removing unreachable block (ram,0x00010346642c) */
/* WARNING: Removing unreachable block (ram,0x000103466418) */
/* WARNING: Removing unreachable block (ram,0x0001034663d8) */
/* WARNING: Removing unreachable block (ram,0x0001034662a8) */
/* WARNING: Removing unreachable block (ram,0x0001034664b4) */
/* WARNING: Removing unreachable block (ram,0x0001034662c4) */
/* WARNING: Removing unreachable block (ram,0x0001034662d0) */
/* WARNING: Removing unreachable block (ram,0x0001034662d4) */
/* WARNING: Removing unreachable block (ram,0x0001034664b8) */
/* WARNING: Removing unreachable block (ram,0x0001034662d8) */
/* WARNING: Removing unreachable block (ram,0x0001034662e0) */
/* WARNING: Removing unreachable block (ram,0x0001034662e4) */
/* WARNING: Removing unreachable block (ram,0x0001034664bc) */
/* WARNING: Removing unreachable block (ram,0x0001034662e8) */
/* WARNING: Removing unreachable block (ram,0x00010346635c) */
/* WARNING: Removing unreachable block (ram,0x0001034663a8) */
/* WARNING: Removing unreachable block (ram,0x00010346637c) */
/* WARNING: Removing unreachable block (ram,0x0001034663ac) */
/* WARNING: Removing unreachable block (ram,0x000103466480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034661b4(double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  double dVar3;
  
  lVar2 = *(long *)(param_3 + _DAT_113081c00);
  if (*(long *)(lVar2 + _DAT_113081a70) == 0) {
    dVar3 = *(double *)(unaff_x20 + 0x30);
  }
  else {
    func_0x000107c4223c();
    dVar3 = param_1;
  }
  if (*(long *)(lVar2 + _DAT_113081a78) == 0) {
    param_1 = *(double *)(unaff_x20 + 0x30);
  }
  else {
    func_0x000107c4223c();
  }
  if (*(long *)(lVar2 + _DAT_113081a80) == 0) {
    func_0x000107c40fd4(*(undefined8 *)(unaff_x20 + 0x38));
  }
  else {
    func_0x000107c4223c();
  }
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c51b38(param_1 - dVar3);
  uVar1 = *(undefined8 *)(param_3 + _DAT_113081bf0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_3 + _DAT_113081bf0))[1]);
  func_0x000107c55e70(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1034664c0; end: 103466503;  */

void FUN_1034664c0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103466504; end: 103466613;  */

void FUN_103466504(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x000107c4b3f0(puStack_70);
    puVar2 = puStack_70;
    func_0x000107c61180();
    puVar3 = &UNK_110659140;
    func_0x000107c613fc(&UNK_110659140,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_50 = FUN_103466a50;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_103466890;
    puStack_58 = &UNK_110659158;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    puVar3 = puVar2;
    func_0x000107c5c320(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c3e924(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 103466614; end: 10346666f;  */

void FUN_103466614(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103466670(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103466670; end: 10346688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103466670(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined1 auStack_80 [16];
  long *plStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long lStack_48;
  
  uVar5 = *(undefined8 *)(param_2 + _DAT_113081bb0);
  uVar6 = *(ulong *)(param_2 + _DAT_113081bb8);
  uVar1 = 0;
  func_0x0001044f86dc(0);
  func_0x000107c60118(uVar6,uVar5,uVar1);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(int *)(param_2 + _DAT_113081ba8) != 1) {
    if (*(int *)(param_2 + _DAT_113081ba8) != 0) {
      return;
    }
    func_0x0001044f8428(FUN_1034668dc,0,FUN_103466aa4);
    return;
  }
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if (lVar4 == 0) {
    return;
  }
  plStack_b0 = &lStack_48;
  lStack_48 = 0;
  plStack_90 = plStack_b0;
  plStack_70 = plStack_b0;
  plStack_50 = plStack_b0;
  func_0x000107c6157c(lVar4);
  func_0x0001044f8428(0x103466a74,0,FUN_103466a78,auStack_60,FUN_103466ad4,auStack_80,0x103466ad8,
                      auStack_a0,0x103466adc,auStack_c0);
  lVar3 = lStack_48;
  if (lStack_48 != 0) {
    lVar2 = *(long *)(lStack_48 + _DAT_113081c00);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar7 = *(long *)(lVar2 + _DAT_113081a60);
    lVar3 = lVar7;
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) {
      lVar2 = lVar3;
      func_0x000107c4a238();
      func_0x000107c61170(lVar3);
      if ((int)lVar2 != 0) {
        if (*(char *)(lVar4 + 0x18) != '\x01') {
          dVar9 = *(double *)(lVar4 + 0x10);
          dVar8 = *(double *)(lVar4 + 0x20);
          dVar10 = 0.0;
          if (*(char *)(lVar4 + 0x28) != '\x01') {
            dVar10 = dVar8;
          }
          func_0x000107c40fd4(*(undefined8 *)(lVar4 + 0x38));
          *(double *)(lVar4 + 0x20) = (dVar10 + dVar8) - dVar9;
          *(undefined1 *)(lVar4 + 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined1 *)(lVar4 + 0x18) = 1;
        }
        goto LAB_103466870;
      }
    }
  }
  if (*(char *)(lVar4 + 0x18) == '\x01') {
    func_0x000107c40fd4(*(undefined8 *)(lVar4 + 0x38));
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    *(undefined1 *)(lVar4 + 0x18) = 0;
  }
LAB_103466870:
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 103466890; end: 1034668db;  */

void FUN_103466890(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1034668dc; end: 1034668df;  */

void FUN_1034668dc(void)

{
  return;
}



/* Entry: 1034668e0; end: 1034669eb;  */

void FUN_1034668e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  func_0x0001034664e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 0x28) = 1;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  func_0x000107c40fd4(puVar1);
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  *(long *)(param_3 + 0x30) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 1034669ec; end: 103466a4f;  */

void FUN_1034669ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103466a50; end: 103466a77;  */

void FUN_103466a50(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103466670(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103466a78; end: 103466aa3;  */

void FUN_103466a78(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103466aa4; end: 103466ad3;  */

void FUN_103466aa4(void)

{
  FUN_1034668e0();
  return;
}


