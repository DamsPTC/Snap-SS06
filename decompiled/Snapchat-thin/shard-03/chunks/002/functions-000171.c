/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102679104; end: 1026791f3;  */

void FUN_102679104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2c78,&UNK_10dac7dc0);
  puVar1 = &UNK_110531270;
  func_0x000107c613fc(&UNK_110531270,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026791f4,puVar1);
  return;
}



/* Entry: 1026791f4; end: 1026791fb;  */

void FUN_1026791f4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38);
  FUN_10267936c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uStack_38;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110531288;
  *param_1 = lVar3;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 1026791fc; end: 102679237;  */

void FUN_1026791fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 102679238; end: 102679263;  */

void FUN_102679238(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102679264; end: 102679283;  */

void FUN_102679264(void)

{
  FUN_102679284();
  return;
}



/* Entry: 102679284; end: 10267935b;  */

void FUN_102679284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aad28;
  func_0x000107c610f8(PTR_PTR_1126aad28);
  func_0x000107c453e4();
  func_0x000107c55b28();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c52060(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c56288(puVar1,param_3,lVar2);
  }
  func_0x000107c562cc(param_1,puVar1);
  func_0x000100083b20(&uStack_48);
  func_0x000107c4bfb0(uStack_48,param_3,puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 10267935c; end: 10267936b;  */

undefined1  [16] FUN_10267935c(void)

{
  return ZEXT816(0x1105312a8);
}



/* Entry: 10267936c; end: 10267938b;  */

void FUN_10267936c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb2cc0);
  return;
}



/* Entry: 10267938c; end: 102679417;  */

void FUN_10267938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 102679418; end: 10267951f;  */

/* WARNING: Possible PIC construction at 0x00010267949c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026794a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679418(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3deb4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c614f0(lVar2);
    func_0x000103b3c438(0);
    FUN_10267c6f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102679520; end: 102679abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679520(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  lVar18 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar11 = *(undefined8 *)(lVar18 + _DAT_112fed918);
    uVar12 = ((undefined8 *)(lVar18 + _DAT_112fed918))[1];
    uVar13 = *(undefined8 *)(lVar18 + _DAT_112fed920);
    lVar1 = ((undefined8 *)(lVar18 + _DAT_112fed920))[1];
    lVar18 = *(long *)(lVar18 + _DAT_112fed928);
    puVar3 = *(undefined **)(*(long *)(lVar2 + 0x18) + _DAT_112fecfb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c61174();
      puVar4 = puVar3;
      func_0x000107c4d68c();
      func_0x000107c61180();
      puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
      while (puVar20 = puVar3, PTR__OBJC_CLASS___UIViewController_1126af898 = puVar5,
            puVar4 != (undefined *)0x0) {
        func_0x000107c61168(puVar5);
        puVar20 = puVar4;
        func_0x000107c6148c(puVar4,puVar5);
        if (puVar20 != (undefined *)0x0) {
          func_0x000107c61170(puVar3);
          if (lVar18 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x000107c61168();
            puVar20 = PTR___sSSN_11034da80;
            func_0x000107c5f9dc(lVar18,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                PTR___sSSSHsWP_11034da90);
            uStack_68 = 0;
            func_0x000107c41300();
            func_0x000107c61180();
            func_0x000107c61170(lVar18);
            uVar6 = uStack_68;
            func_0x000107c61174(uStack_68);
            if (puVar5 == (undefined *)0x0) {
              uVar9 = uVar6;
              func_0x000107c5ed30();
              func_0x000107c61170(uVar6);
              func_0x000107c61654();
              func_0x000107c614ac(uVar9);
            }
            else {
              puVar7 = puVar5;
              func_0x000107c5ee30();
              func_0x000107c61170(puVar5);
              lVar8 = *(long *)(lVar2 + 0x20);
              func_0x000107c4ab28();
              func_0x000107c61180();
              lVar18 = lVar8;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar8);
              if (lVar18 == 0) {
                func_0x00010006c090(puVar7,puVar20);
              }
              else {
                puVar5 = puVar7;
                func_0x000107c5ee20(puVar7,puVar20);
                uVar6 = uVar11;
                func_0x000107c5fadc(uVar11,uVar12);
                func_0x000107c5a8a0(lVar18);
                func_0x00010006c090(puVar7,puVar20);
                func_0x000107c615e8(lVar18);
                func_0x000107c61170(puVar5);
                func_0x000107c61170(uVar6);
              }
            }
          }
          puVar5 = PTR_PTR_1126b0820;
          func_0x000107c610f8();
          func_0x000107c453e4();
          func_0x000107c5fadc(uVar11,uVar12);
          puVar20 = puVar5;
          func_0x000107c5e650(puVar5);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar20);
          puVar7 = puVar5;
          func_0x000107c3ecc8();
          func_0x000107c61180();
          puVar20 = puVar7;
          func_0x000100fe4188();
          func_0x000107c613fc();
          *(undefined8 *)(puVar20 + 0x18) = 3;
          *(undefined8 *)(puVar20 + 0x10) = 1;
          *(undefined **)(puVar20 + 0x20) = puVar7;
          puVar10 = PTR_PTR_1126ae6b0;
          func_0x000107c610f8();
          uVar11 = 0;
          func_0x000100c70ba8(0);
          func_0x000107c61174(puVar7);
          func_0x000107c61174();
          puVar19 = puVar20;
          func_0x000107c5fc48(puVar20,uVar11);
          func_0x000107c61574(puVar20);
          func_0x000107c47440();
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar19);
          if (lVar1 == 0) {
            puVar20 = (undefined *)0x0;
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar20 = PTR_PTR_1126ae6c8;
            func_0x000107c610f8(PTR_PTR_1126ae6c8);
            uVar12 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            uVar11 = uVar13;
            func_0x000107c5fadc(uVar13,lVar1);
            func_0x000107c48320(puVar20);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar11);
            puVar19 = PTR_PTR_1126ae6c0;
            func_0x000107c61168(PTR_PTR_1126ae6c0);
            func_0x000107c5fadc(uVar13,lVar1);
            func_0x000107c5daf4(puVar19);
            func_0x000107c61180();
            func_0x000107c61170(uVar13);
          }
          puVar14 = PTR_PTR_1126ae6d0;
          func_0x000107c610f8();
          func_0x000107c4831c();
          puVar15 = PTR_PTR_1126ae6d8;
          func_0x000107c610f8(PTR_PTR_1126ae6d8);
          func_0x000107c486a0();
          puVar16 = PTR_PTR_1126b0100;
          func_0x000107c610f8(PTR_PTR_1126b0100);
          func_0x000107c45964();
          lVar18 = *(long *)(*(long *)(lVar2 + 0x10) + _DAT_112eb2de0);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar18 != 0) {
            puVar17 = PTR_PTR_1126ae6b8;
            func_0x000107c61168(PTR_PTR_1126ae6b8);
            func_0x000107c4a8a4();
            func_0x000107c61180();
            func_0x000107c4eecc(lVar18);
            func_0x000107c615e8(lVar18);
            func_0x000107c61170(puVar17);
          }
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar15);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar3);
          puVar3 = puVar19;
          break;
        }
        puVar5 = puVar4;
        func_0x000107c4d68c();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
        puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar20);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 102679ac0; end: 102679afb;  */

void FUN_102679ac0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102679afc; end: 102679b1b;  */

void FUN_102679afc(void)

{
  FUN_102679418();
  return;
}



/* Entry: 102679b1c; end: 102679b23;  */

undefined8 FUN_102679b1c(void)

{
  return 0;
}



/* Entry: 102679b24; end: 102679b43;  */

void FUN_102679b24(void)

{
  func_0x000107c61168(&PTR_PTR_112eb2d68);
  return;
}



/* Entry: 102679b44; end: 102679b53; -[_TtC37SCLensModularCameraNavigationServices37SCLensModularCameraNavigationServices lensModularCameraPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb2de0));
  return;
}



/* Entry: 102679b54; end: 102679b63; -[_TtC37SCLensModularCameraNavigationServices37SCLensModularCameraNavigationServices lensCollectionModularCameraPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb2de8));
  return;
}



/* Entry: 102679b64; end: 102679c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679b64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb2de0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2de8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102679c2c; end: 102679c5f;  */

void FUN_102679c2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102679c60; end: 102679ce3; -[_TtC37SCLensModularCameraNavigationServices37SCLensModularCameraNavigationServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102679c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102679c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102679c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2de0));
  return;
}



/* Entry: 102679ce4; end: 102679d5f;  */

void FUN_102679ce4(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112eb2e20,&UNK_10dac7f40);
  func_0x000107c613fc();
  pcVar1 = FUN_102679d70;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dac7f10,0x2b,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102679d60; end: 102679d6f;  */

undefined1  [16] FUN_102679d60(void)

{
  return ZEXT816(0x1105314f0);
}



/* Entry: 102679d70; end: 102679e03;  */

void FUN_102679d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001000285a8(0x112eb2e28,&UNK_10dac7f48);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  func_0x0001000838ec(&uStack_50);
  FUN_10267a064();
  func_0x0001002acff8("MapLiveSnapshotProviderEntryPointProvider",0x29,2);
  func_0x000107c61574(puVar3);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102679e04; end: 102679fcf;  */

void FUN_102679e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar2 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c3ec60(param_5);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(param_3,param_4);
    puVar4 = &UNK_110531598;
    func_0x000107c613fc(&UNK_110531598,0x18,7);
    *(long *)(puVar4 + 0x10) = param_5;
    puVar5 = &UNK_1105315c0;
    func_0x000107c613fc(&UNK_1105315c0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10267a014;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_70 = FUN_10267a040;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f9148c;
    puStack_78 = &UNK_1105315d8;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(param_5);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    puVar7 = puVar3;
    func_0x000107c45138(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c61544(puVar5,"",0x56,0xf,0x54,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102679fd0);
      (*pcVar1)();
    }
    func_0x000107c55258(uVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c438d4(param_5);
    func_0x000107c54b80(uVar8);
    func_0x000107c49774(lVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102679fd0; end: 10267a013;  */

void FUN_102679fd0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10267a014; end: 10267a03f;  */

void FUN_10267a014(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ec60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,0);
  return;
}



/* Entry: 10267a040; end: 10267a063;  */

void FUN_10267a040(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10267a064; end: 10267a0ef;  */

void FUN_10267a064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110531610;
  func_0x000107c613fc(&UNK_110531610,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112eb2ed0,&UNK_10dac7fa0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001002acf1c(FUN_10267a19c,puVar1);
  return;
}



/* Entry: 10267a0f0; end: 10267a19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267a0f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  lVar3 = param_2;
  func_0x000100083b20(&uStack_50);
  FUN_10267b45c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112eb2ed8) = 0;
  *(long *)(lVar4 + _DAT_112eb2ee0) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb2ee8);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_48;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_60,puVar2);
  param_1[3] = lVar3;
  param_1[4] = &PTR_DAT_110531628;
  *param_1 = plVar5;
  return;
}



/* Entry: 10267a19c; end: 10267a1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267a19c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar6 = &lStack_60;
  lVar4 = lVar2;
  func_0x000100083b20(&uStack_50,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10267b45c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112eb2ed8) = 0;
  *(long *)(lVar5 + _DAT_112eb2ee0) = lVar2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb2ee8);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_48;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c6157c(lVar2);
  func_0x000107c61154(&lStack_60,puVar3);
  param_1[3] = lVar4;
  param_1[4] = &PTR_DAT_110531628;
  *param_1 = plVar6;
  return;
}



/* Entry: 10267a1a4; end: 10267a21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267a1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb2ed8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2ee0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2ee8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10267a21c; end: 10267a28f;  */

void FUN_10267a21c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267a290,uVar1,uVar2);
  return;
}



/* Entry: 10267a290; end: 10267a527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267a290(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + _DAT_112eb2ee0);
  func_0x000100083b20(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x28);
  uVar3 = *(ulong *)(lVar10 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar10);
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  func_0x000107c61170(uVar3);
  if (uVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  }
  else {
    func_0x000107c614f0(uVar4);
    func_0x000107c61174();
    uVar3 = uVar4;
    FUN_10267b318();
    func_0x000107c61170(uVar4);
    if ((uVar3 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar7 = *(long *)(unaff_x22 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar3 = uVar4;
      func_0x000107c51a88();
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c44120();
      func_0x000107c61180();
      *(ulong *)(unaff_x22 + 0x78) = uVar5;
      func_0x000107c61170(uVar3);
      lVar10 = 0;
      func_0x000102679ff4();
      func_0x000107c61534();
      *(long *)(unaff_x22 + 0x80) = lVar10;
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(unaff_x22 + 0x88) = puVar6;
      func_0x000107c52ab8();
      func_0x000107c5a378(puVar6);
      *(undefined **)(lVar10 + 0x10) = puVar6;
      func_0x000107c61174();
      FUN_102679e04();
      func_0x000107c61170(uVar4);
      uVar3 = uVar4;
      func_0x000107c3eca4(uVar4);
      func_0x000107c61180();
      lVar10 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      *(long *)(unaff_x22 + 0x90) = lVar10;
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 2;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112eb2ee8);
      uVar2 = puVar1[1];
      *(undefined8 *)(lVar10 + 0x20) = *puVar1;
      *(undefined8 *)(lVar10 + 0x28) = uVar2;
      func_0x000107c61434();
      lVar7 = lVar10;
      func_0x000107c5fc48(lVar10,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar10);
      func_0x000107c549f0(uVar3);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(uVar3);
      func_0x000107c51a88();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c44120();
      func_0x000107c61180();
      *(ulong *)(unaff_x22 + 0x98) = uVar3;
      func_0x000107c61170();
      func_0x000107c5fce8();
      *(ulong *)(unaff_x22 + 0xa0) = uVar4;
      func_0x000107c5fca8();
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10267a528,uVar8,uVar9);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c61170(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010267a378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10267a528; end: 10267a687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267a528(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x30);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(lVar5 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar5 != 0) {
    lVar1 = lVar5;
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar1;
    func_0x000107c443b0();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb8) = lVar5;
    func_0x000107c61170(lVar1);
    if (lVar5 != 0) {
      *(undefined8 *)(unaff_x22 + 0xc0) = _DAT_112eb2ed8;
      *(undefined8 *)(unaff_x22 + 200) = 0;
      uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x000107c61538(uVar2,0x112eb2ef8);
      func_0x000107c5fc48();
      func_0x000107c43f14(uVar4);
      func_0x000107c61170(uVar2);
      plVar3 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10267a688;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                (200000000);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  *(undefined8 *)(unaff_x22 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10267a6e8,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 10267a688; end: 10267a6e7;  */

void FUN_10267a688(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_10267a86c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_10267a970;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10267a6e8; end: 10267a86b;  */

void FUN_10267a6e8(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(ulong *)(unaff_x22 + 0x70);
  FUN_10267b47c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c51a88();
  func_0x000107c61180();
  uVar1 = uVar7;
  func_0x000107c44120();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar1;
  func_0x000107c60118(uVar1,uVar5);
  func_0x000107c61170(uVar1);
  if ((uVar7 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    FUN_10267ac24();
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
    func_0x000107c51a88(uVar5);
    func_0x000107c61180();
    func_0x000107c56200();
    func_0x000107c61170(uVar5);
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10267ab34;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (200000000);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c4ff34(uVar8);
  func_0x000107c55258(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010267a868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10267a86c; end: 10267a96f;  */

void FUN_10267a86c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0xc0));
  if (lVar3 == 0) {
    lVar1 = *(long *)(unaff_x22 + 200) + 1;
    *(long *)(unaff_x22 + 200) = lVar1;
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    if (lVar1 != 0xf) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x000107c61538(uVar5,0x112eb2ef8);
      func_0x000107c5fc48();
      func_0x000107c43f14(uVar4);
      func_0x000107c61170(uVar5);
      plVar2 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10267a688;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                (200000000);
      return;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61174(lVar3);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar5);
  *(long *)(unaff_x22 + 0xd8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10267a6e8,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 10267a970; end: 10267a9b3;  */

void FUN_10267a970(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10267a9b4,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 10267a9b4; end: 10267ab33;  */

void FUN_10267a9b4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  FUN_10267b47c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c51a88();
  func_0x000107c61180();
  uVar1 = uVar4;
  func_0x000107c44120();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar1;
  func_0x000107c60118(uVar1,uVar6);
  func_0x000107c61170(uVar1);
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar2 = 0;
    FUN_10267ac24();
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
    func_0x000107c51a88(uVar6);
    func_0x000107c61180();
    func_0x000107c56200();
    func_0x000107c61170(uVar6);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10267ab34;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
              (200000000);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c4ff34(uVar8);
  func_0x000107c55258(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010267ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10267ab34; end: 10267ab93;  */

void FUN_10267ab34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_10267ab94;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_10267b6c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10267ab94; end: 10267ac23;  */

void FUN_10267ab94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c4ff34(uVar6);
  func_0x000107c55258(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010267ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10267ac24; end: 10267aeef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10267ac24(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar7 = &puStack_b0;
  func_0x000100083b20(&puStack_b0);
  lVar2 = *(long *)(puStack_b0 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(puStack_b0);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    if (param_2 != 0) {
      func_0x000107c61174(param_2);
      func_0x000107c4acd4();
      dVar9 = param_1;
      func_0x000107c5cbd8(param_2);
      dVar12 = dVar9;
      func_0x000107c50888(param_2);
      dVar11 = dVar12;
      func_0x000107c4acd4(param_2);
      dVar12 = dVar12 - dVar11;
      func_0x000107c3ec10(param_2);
      dVar10 = dVar11;
      func_0x000107c5cbd8(param_2);
      dVar11 = dVar11 - dVar10;
      func_0x000107c609f0();
      func_0x000107c3ec60(lVar3);
      FUN_10267b4bc();
      dVar10 = param_1;
      func_0x000107c609b0();
      puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x000107c486f8(0x4064200000000000,0x4070600000000000);
      puVar5 = &UNK_110531668;
      func_0x000107c613fc(&UNK_110531668,0x40,7);
      *(double *)(puVar5 + 0x10) = 262.0 / dVar10;
      *(double *)(puVar5 + 0x18) = param_1;
      *(double *)(puVar5 + 0x20) = dVar9;
      *(double *)(puVar5 + 0x28) = dVar12;
      *(double *)(puVar5 + 0x30) = dVar11;
      *(long *)(puVar5 + 0x38) = lVar3;
      puVar6 = &UNK_110531690;
      func_0x000107c613fc(&UNK_110531690,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_10267b624;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      pcStack_90 = FUN_10267b638;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100f9148c;
      puStack_98 = &UNK_1105316a8;
      puStack_88 = puVar6;
      func_0x000107c60bc4(&puStack_b0);
      puVar8 = puStack_88;
      func_0x000107c61174(lVar3);
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar8);
      puVar8 = puVar4;
      func_0x000107c45138(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar4);
      puVar4 = puVar6;
      func_0x000107c61544(puVar6,"",0x58,0x49,0x3e,1);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar5);
      if (((ulong)puVar4 & 1) == 0) {
        return puVar8;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267aef0);
      (*pcVar1)();
    }
    func_0x000107c61170(lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 10267aef0; end: 10267afcf;  */

void FUN_10267aef0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_6;
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c60908(param_1,param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c3ab28(param_6);
  func_0x000107c61180();
  dVar2 = param_2;
  func_0x000107c609c4(param_2,param_3,param_4,param_5);
  func_0x000107c609c8(param_2,param_3,param_4,param_5);
  func_0x000107c60938(-dVar2,-param_2,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c3ec60(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_7,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,0)
  ;
  return;
}



/* Entry: 10267afd0; end: 10267b02f; -[_TtC29MapLiveSnapshotImplementation23MapLiveSnapshotProvider init] */

void FUN_10267afd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLiveSnapshotImplementation.MapLiveSnapshotProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10267affc);
  (*pcVar1)();
}



/* Entry: 10267b030; end: 10267b07b; -[_TtC29MapLiveSnapshotImplementation23MapLiveSnapshotProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267b030(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb2ee0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb2ed8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb2ee8 + 8))
  ;
  return;
}



/* Entry: 10267b07c; end: 10267b107;  */

void FUN_10267b07c(void)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10267b0c4;
  plVar2[7] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar2[8] = lVar1;
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  plVar2[10] = lVar3;
  func_0x000107c5fca8();
  plVar2[0xb] = lVar1;
  plVar2[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10267a290,lVar1,lVar3);
  return;
}



/* Entry: 10267b108; end: 10267b2af;  */

/* WARNING: Possible PIC construction at 0x00010267b16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267b188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267b1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267b230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267b1a8) */
/* WARNING: Removing unreachable block (ram,0x00010267b1bc) */
/* WARNING: Removing unreachable block (ram,0x00010267b1c0) */
/* WARNING: Removing unreachable block (ram,0x00010267b1f8) */
/* WARNING: Removing unreachable block (ram,0x00010267b1c4) */
/* WARNING: Removing unreachable block (ram,0x00010267b1e4) */
/* WARNING: Removing unreachable block (ram,0x00010267b204) */
/* WARNING: Removing unreachable block (ram,0x00010267b2ac) */
/* WARNING: Removing unreachable block (ram,0x00010267b210) */
/* WARNING: Removing unreachable block (ram,0x00010267b1e8) */
/* WARNING: Removing unreachable block (ram,0x00010267b218) */
/* WARNING: Removing unreachable block (ram,0x00010267b18c) */
/* WARNING: Removing unreachable block (ram,0x00010267b190) */
/* WARNING: Removing unreachable block (ram,0x00010267b170) */
/* WARNING: Removing unreachable block (ram,0x00010267b234) */
/* WARNING: Removing unreachable block (ram,0x00010267b238) */

void FUN_10267b108(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) != 1) {
      return;
    }
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar3 = uVar4;
    func_0x000107c60480();
    if (uVar3 != 1) {
      return;
    }
    func_0x000107c60480();
    if (uVar4 == 0) {
      return;
    }
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267b2ac);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    func_0x000101170d9c(0,param_1);
  }
  func_0x000107c42e38();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10267b2b0; end: 10267b317; -[_TtC29MapLiveSnapshotImplementation23MapLiveSnapshotProvider onBasemapFeaturesCaptured:] */

void FUN_10267b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10267b47c(0,0x112d60e70,&PTR_PTR_1126d5650);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10267b108(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10267b318; end: 10267b44b;  */

undefined1 FUN_10267b318(undefined8 param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar3 = &UNK_1105316e0;
  func_0x000107c613fc(&UNK_1105316e0,0x11,7);
  puVar7 = puVar3 + 0x10;
  *puVar7 = 0;
  func_0x000107c4c358(param_1);
  func_0x000107c61180();
  uVar4 = param_1;
  func_0x000107c3d134();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  pcStack_50 = FUN_10267b674;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1026147d4;
  puStack_58 = &UNK_1105316f8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar2);
  uVar6 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c4218c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61428(puVar7,&puStack_70,0,0);
  uVar1 = *puVar7;
  func_0x000107c61574(puVar3);
  return uVar1;
}



/* Entry: 10267b44c; end: 10267b45b;  */

undefined1  [16] FUN_10267b44c(void)

{
  return ZEXT816(0x110531648);
}



/* Entry: 10267b45c; end: 10267b47b;  */

void FUN_10267b45c(void)

{
  func_0x000107c61168(&PTR_PTR_1128566f0);
  return;
}



/* Entry: 10267b47c; end: 10267b4bb;  */

void FUN_10267b47c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10267b4bc; end: 10267b623;  */

double FUN_10267b4bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = param_5;
  func_0x000107c609b0(param_5,param_6,param_7,param_8);
  dVar1 = param_5;
  func_0x000107c609cc(param_5,param_6,param_7,param_8);
  dVar2 = dVar1 / 0.6145038167938931;
  if (dVar3 <= dVar1 / 0.6145038167938931) {
    dVar2 = dVar3;
  }
  dVar2 = (double)NEON_fminnm(dVar2,0x407c200000000000);
  dVar3 = param_1;
  func_0x000107c609bc(param_1,param_2,param_3,param_4);
  dVar3 = dVar3 - dVar2 * 0.6145038167938931 * 0.5;
  dVar1 = param_5;
  func_0x000107c609c4(param_5,param_6,param_7,param_8);
  if (dVar1 < dVar3) {
    dVar1 = dVar3;
  }
  dVar3 = param_5;
  func_0x000107c609b4(param_5,param_6,param_7,param_8);
  dVar3 = dVar3 - dVar2 * 0.6145038167938931;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  func_0x000107c609c8(param_5,param_6,param_7,param_8);
  func_0x000107c609b8(param_5,param_6,param_7,param_8);
  return dVar3;
}



/* Entry: 10267b624; end: 10267b637;  */

void FUN_10267b624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  dVar5 = *(double *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = param_1;
  func_0x000107c3ab28();
  func_0x000107c61180();
  func_0x000107c60908(uVar4,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  dVar3 = dVar5;
  func_0x000107c609c4(dVar5,uVar6,uVar7,uVar8);
  func_0x000107c609c8(dVar5,uVar6,uVar7,uVar8);
  func_0x000107c60938(-dVar3,-dVar5,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c3ec60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,0);
  return;
}



/* Entry: 10267b638; end: 10267b657;  */

void FUN_10267b638(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10267b658; end: 10267b673;  */

void FUN_10267b658(long param_1,long param_2)

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



/* Entry: 10267b674; end: 10267b6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267b674(long param_1)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  iVar1 = *(int *)(param_1 + _DAT_112fed420);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = iVar1 == 2;
  return;
}



/* Entry: 10267b6c4; end: 10267b6cf;  */

void FUN_10267b6c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c4ff34(uVar6);
  func_0x000107c55258(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010267ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10267b6d0; end: 10267b80b;  */

undefined8 * FUN_10267b6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10267b80c; end: 10267bd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10267b80c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar8 = param_4;
  func_0x000107c4cc0c();
  func_0x000107c61180();
  lVar1 = _DAT_112fecfb0;
  uVar7 = *(undefined8 *)(param_3 + _DAT_112fecfb0);
  FUN_10267c378(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar7);
  uVar2 = uVar8;
  FUN_10267c3bc(uVar8,param_2,uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  uVar8 = *(undefined8 *)(param_3 + lVar1);
  puVar3 = &UNK_1105318f8;
  func_0x000107c613fc(&UNK_1105318f8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_110531920;
  func_0x000107c613fc(&UNK_110531920,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  puVar5 = &UNK_110531948;
  func_0x000107c613fc(&UNK_110531948,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_70 = FUN_10267c000;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1025fab04;
  puStack_78 = &UNK_110531960;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar3);
  func_0x000107c4db94(uVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar8);
  return unaff_x20;
}



/* Entry: 10267bd98; end: 10267bdc3;  */

void FUN_10267bd98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10267bdc4; end: 10267bdcf;  */

void FUN_10267bdc4(void)

{
  return;
}



/* Entry: 10267bdd0; end: 10267bfff;  */

long FUN_10267bdd0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  uVar1 = 0;
  FUN_10267c378();
  ppuStack_68 = &PTR_DAT_110531a20;
  uVar2 = 0;
  auStack_88[0] = param_3;
  uStack_70 = uVar1;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + 0x38) = uVar2;
  FUN_10267c070(auStack_88,param_4 + 0x10);
  func_0x000107c614f0(param_1);
  plVar3 = (long *)0x0;
  func_0x000103b3b99c();
  FUN_10267c6f8();
  puVar4 = &UNK_110531a00;
  func_0x000107c613fc(&UNK_110531a00,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,param_4);
  pcVar7 = *(code **)(*plVar3 + 0x60);
  func_0x000107c6157c(param_4);
  pcVar5 = FUN_10267c0b4;
  puVar6 = puVar4;
  (*pcVar7)(FUN_10267c0b4);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c614f0(pcVar5);
  uVar1 = *(undefined8 *)(param_4 + 0x38);
  pcVar7 = *(code **)(puVar6 + 0x10);
  func_0x000107c6157c(uVar1);
  (*pcVar7)();
  func_0x000107c615e8(pcVar5);
  func_0x000107c61574(uVar1);
  if (param_2 == (long *)0x0) {
    func_0x000107c61574(param_4);
    func_0x000107c615e8(param_1);
  }
  else {
    func_0x0001000285a8(0x112eb0aa0,&UNK_10dac80e0);
    plVar3 = param_2;
    func_0x0001000b637c();
    puVar4 = &UNK_110531a00;
    func_0x000107c613fc(&UNK_110531a00,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,param_4);
    func_0x000107c61574(param_4);
    uVar1 = 0x10267c0bc;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x10267c0bc);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    uVar2 = uVar1;
    func_0x000107c614f0(uVar1);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(param_4 + 0x38),uVar2,puVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c615e8(uVar1);
    func_0x000107c61170(param_2);
  }
  func_0x0001000834e4(auStack_88);
  return param_4;
}



/* Entry: 10267c000; end: 10267c023;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c000(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 auStack_c0 [4];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_90,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else if (param_1 == 0) {
      func_0x000107c61574(lVar1);
      func_0x000107c61170(lVar2);
    }
    else {
      func_0x000107c3deb4();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(lVar2 + _DAT_113083190);
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = 0;
      FUN_10267c378();
      ppuStack_98 = &PTR_DAT_110531a20;
      uVar4 = 0;
      auStack_c0[1] = uVar6;
      lStack_a0 = lVar3;
      func_0x00010267c6a4(0);
      func_0x000107c613fc();
      func_0x0001000c6518(auStack_c0 + 1,lVar3);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
      puVar8 = (undefined8 *)((long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar8);
      uVar7 = *puVar8;
      func_0x000107c61174(uVar5);
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      FUN_10267bdd0(param_1,uVar5,uVar7,uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar2);
      func_0x0001000834e4(auStack_c0 + 1);
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      *(long *)(lVar1 + 0x10) = param_1;
      func_0x000107c61574(lVar1);
      func_0x000107c61574(uVar4);
    }
  }
  return;
}



/* Entry: 10267c024; end: 10267c06f;  */

void FUN_10267c024(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10267c070; end: 10267c0b3;  */

long FUN_10267c070(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10267c0b4; end: 10267c0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c0b4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = _DAT_112fed808;
  lVar4 = *param_1;
  if (*(long *)(*(long *)(lVar4 + _DAT_112fed808) + 0x10) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      FUN_10267c070(lVar3 + 0x10,auStack_98);
      func_0x000107c61574(lVar3);
      func_0x0001000a8868(auStack_98,uStack_80);
      uStack_58 = *(undefined8 *)(lVar4 + lVar2);
      puVar1 = (undefined8 *)(lVar4 + _DAT_112fed810);
      uStack_48 = puVar1[1];
      uStack_50 = *puVar1;
      uStack_38 = puVar1[3];
      uStack_40 = puVar1[2];
      FUN_10267c0d0(&uStack_58);
      func_0x0001000834e4(auStack_98);
    }
  }
  return;
}



/* Entry: 10267c0d0; end: 10267c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c0d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb2ff8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar3 = unaff_x20 + _DAT_112eb3000;
    func_0x000107c61618();
    lVar2 = _DAT_113083198;
    if (lVar3 != 0) {
      func_0x000107c61428(lVar3 + _DAT_113083198,auStack_68,0,0);
      lVar2 = lVar3 + lVar2;
      func_0x000107c61618();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
LAB_10267c1f0:
        lVar3 = lVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170();
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar2);
          return;
        }
        func_0x000107c54b80(param_1[1],param_1[2],param_1[3],param_1[4],
                            *(undefined8 *)(unaff_x20 + _DAT_112eb3010));
        uVar5 = *param_1;
        func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
        func_0x000107c4ab64(lVar1);
        func_0x000107c61170(uVar5);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar2);
        *(undefined1 *)(unaff_x20 + _DAT_112eb3018) = 1;
        return;
      }
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb3008);
    func_0x000107c5c734();
    func_0x000107c61180();
    while (lVar3 != 0) {
      lVar2 = lVar3;
      puStack_70 = PTR_DAT_11269cb90;
      func_0x000107c61494(lVar3,1,&puStack_70);
      if (lVar2 != 0) {
        lVar4 = lVar3;
        func_0x000107c614f0();
        uVar5 = 0;
        func_0x0001012ea70c(0);
        func_0x000107c61488(lVar4,uVar5);
        if (lVar4 != 0) goto LAB_10267c1f0;
      }
      lVar2 = lVar3;
      func_0x000107c4d68c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10267c2c4; end: 10267c31f; -[_TtC33MapMemoriesPlaybackImplementation28MapMemoriesPlaybackPresenter init] */

void FUN_10267c2c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapMemoriesPlaybackImplementation.MapMemoriesPlaybackPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10267c2f0);
  (*pcVar1)();
}



/* Entry: 10267c320; end: 10267c377; -[_TtC33MapMemoriesPlaybackImplementation28MapMemoriesPlaybackPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010267c33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010267c35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010267c340) */
/* WARNING: Removing unreachable block (ram,0x00010267c360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2ff8));
  return;
}



/* Entry: 10267c378; end: 10267c397;  */

void FUN_10267c378(void)

{
  func_0x000107c61168(&PTR_PTR_1128567c0);
  return;
}



/* Entry: 10267c398; end: 10267c3b3; -[_TtC33MapMemoriesPlaybackImplementation28MapMemoriesPlaybackPresenter didDismissMemoriesOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c398(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112eb3018) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112eb3010),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10267c3b4; end: 10267c3bb; -[_TtC33MapMemoriesPlaybackImplementation28MapMemoriesPlaybackPresenter shouldOverrideTransitionMaskWithLauncher:] */

undefined8 FUN_10267c3b4(void)

{
  return 1;
}



/* Entry: 10267c3bc; end: 10267c47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112eb3000;
  func_0x000107c61614(unaff_x20 + _DAT_112eb3000,0);
  lVar2 = _DAT_112eb3010;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112eb3018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2ff8) = param_1;
  func_0x000107c61604(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112eb3008) = param_3;
  FUN_10267c378();
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar3);
  return;
}



/* Entry: 10267c47c; end: 10267c53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c47c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = _DAT_112fed808;
  lVar3 = *param_1;
  if (*(long *)(*(long *)(lVar3 + _DAT_112fed808) + 0x10) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_10267c070(param_2 + 0x10,auStack_98);
      func_0x000107c61574(param_2);
      func_0x0001000a8868(auStack_98,uStack_80);
      uStack_58 = *(undefined8 *)(lVar3 + lVar2);
      puVar1 = (undefined8 *)(lVar3 + _DAT_112fed810);
      uStack_48 = puVar1[1];
      uStack_50 = *puVar1;
      uStack_38 = puVar1[3];
      uStack_40 = puVar1[2];
      FUN_10267c0d0(&uStack_58);
      func_0x0001000834e4(auStack_98);
    }
  }
  return;
}



/* Entry: 10267c53c; end: 10267c677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267c53c(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long alStack_1a8 [3];
  undefined8 uStack_190;
  undefined1 auStack_180 [24];
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined1 uStack_40;
  
  func_0x000107c61174(*param_1);
  func_0x0001045197e4(&uStack_168);
  uStack_68 = uStack_100;
  uStack_70 = uStack_108;
  uStack_58 = uStack_f0;
  uStack_60 = uStack_f8;
  uStack_48 = uStack_e0;
  uStack_50 = uStack_e8;
  uStack_40 = uStack_d8;
  uStack_a8 = uStack_140;
  uStack_b0 = uStack_148;
  uStack_98 = uStack_130;
  uStack_a0 = uStack_138;
  uStack_88 = uStack_120;
  uStack_90 = uStack_128;
  uStack_78 = uStack_110;
  uStack_80 = uStack_118;
  uStack_c8 = uStack_160;
  uStack_d0 = uStack_168;
  uStack_b8 = uStack_150;
  uStack_c0 = uStack_158;
  iVar1 = (int)&uStack_d0;
  FUN_10262a02c();
  if (iVar1 == 3) {
    func_0x00010262aca8(&uStack_d0);
    FUN_10267c6c4(&uStack_168);
    func_0x000107c61428(param_2 + 0x10,auStack_180,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      FUN_10267c070(param_2 + 0x10,alStack_1a8);
      func_0x000107c61574(param_2);
      plVar2 = alStack_1a8;
      func_0x0001000a8868(plVar2,uStack_190);
      if (*(char *)(*plVar2 + _DAT_112eb3018) == '\x01') {
        lVar3 = *(long *)(*plVar2 + _DAT_112eb2ff8);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c42064();
          func_0x000107c615e8(lVar3);
        }
      }
      func_0x0001000834e4(alStack_1a8);
    }
  }
  else {
    FUN_10267c6c4(&uStack_168);
  }
  return;
}



/* Entry: 10267c678; end: 10267c6c3;  */

void FUN_10267c678(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10267c6c4; end: 10267c6f7;  */

undefined8 FUN_10267c6c4(undefined8 param_1)

{
  (*(code *)&DAT_1045164f0)();
  return param_1;
}



/* Entry: 10267c6f8; end: 10267c7af;  */

code * FUN_10267c6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112eb30f0,&UNK_10dac8178);
  func_0x000107c5d004();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  func_0x000107c61170(unaff_x20);
  puVar2 = &UNK_110531ad0;
  func_0x000107c613fc(&UNK_110531ad0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcVar3 = FUN_10267c7b0;
  func_0x0001000d5158(FUN_10267c7b0,puVar2,param_3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  return pcVar3;
}



/* Entry: 10267c7b0; end: 10267c817;  */

void FUN_10267c7b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_28 = *param_2;
  func_0x000107c615f0();
  uVar1 = 0x112eb30f8;
  func_0x0001000285a8(0x112eb30f8,&UNK_10dac8180);
  puVar2 = param_1;
  func_0x000107c6147c(param_1,&uStack_28,uVar1,uVar3,6);
  if (((ulong)puVar2 & 1) == 0) {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10267c818; end: 10267c97f;  */

void FUN_10267c818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3100,&UNK_10dac8190);
  puVar1 = &UNK_110531b80;
  func_0x000107c613fc(&UNK_110531b80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x10267c8bc,puVar1);
  return;
}



/* Entry: 10267c980; end: 10267c98f;  */

undefined1  [16] FUN_10267c980(void)

{
  return ZEXT816(0x110531ba8);
}



/* Entry: 10267c990; end: 10267c9cb;  */

void FUN_10267c990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10267c9cc; end: 10267ca77;  */

void FUN_10267c9cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *param_2;
  func_0x0001000285a8(0x112eb3110,&UNK_10dac81d8);
  puVar4 = &uStack_58;
  uStack_58 = uVar6;
  func_0x0001000838ec(puVar4);
  FUN_10267cff4(uVar5,uVar2,uVar1,puVar4,uVar3);
  func_0x0001002acff8("MapMemoriesWorkflowImplEntryPointProvider",0x29,2);
  func_0x000107c61574(puVar4);
  *param_1 = uVar5;
  return;
}



/* Entry: 10267ca78; end: 10267cac3;  */

void FUN_10267ca78(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb3118,&UNK_10dac81e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10267cb30,param_1);
  return;
}



/* Entry: 10267cac4; end: 10267cb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267cac4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10267cfb0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb3120) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10267cb30; end: 10267cb37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267cb30(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10267cfb0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb3120) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10267cb38; end: 10267cb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267cb38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb3120) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10267cb84; end: 10267ccbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10267cb84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  func_0x00010008a7c8(&puStack_68,&uStack_38);
  puVar1 = puStack_68;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_48 = FUN_10267cf0c;
  puStack_40 = puStack_68;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  pcStack_58 = FUN_10267ce78;
  puStack_50 = &UNK_110531c68;
  ppuVar4 = &puStack_68;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_40;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar3,param_2,ppuVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar1);
  return puVar3;
}



/* Entry: 10267ccc0; end: 10267ce77;  */

undefined8
FUN_10267ccc0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10267ce78);
    (*pcVar1)();
  }
  puVar2 = &UNK_110531cc0;
  func_0x000107c613fc(&UNK_110531cc0,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    param_2 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267cddc);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10267cd7c);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 10267ce78; end: 10267ceaf;  */

void FUN_10267ce78(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10267ceb0; end: 10267cf0b; -[_TtC41MapMemoriesWorkflowServicesImplementation26MapMemoriesWorkflowBuilder build:] */

void FUN_10267ceb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10267cb84(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10267cf0c; end: 10267cf2f;  */

void FUN_10267cf0c(void)

{
  func_0x000107c5fcec(0);
  FUN_10267ccc0(FUN_10267cfd0);
  return;
}



/* Entry: 10267cf30; end: 10267cf8f; -[_TtC41MapMemoriesWorkflowServicesImplementation26MapMemoriesWorkflowBuilder init] */

void FUN_10267cf30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapMemoriesWorkflowServicesImplementation.MapMemoriesWorkflowBuilder",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10267cf5c);
  (*pcVar1)();
}



/* Entry: 10267cf90; end: 10267cfaf; -[_TtC41MapMemoriesWorkflowServicesImplementation26MapMemoriesWorkflowBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10267cf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb3120));
  return;
}



/* Entry: 10267cfb0; end: 10267cfcf;  */

void FUN_10267cfb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128568e8);
  return;
}



/* Entry: 10267cfd0; end: 10267cff3;  */

void FUN_10267cfd0(void)

{
  func_0x0001048580f8();
  return;
}



/* Entry: 10267cff4; end: 10267d18b;  */

void FUN_10267cff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110531ce8;
  func_0x000107c613fc(&UNK_110531ce8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x0001000285a8(0x112eb3150,&UNK_10dac8270);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001002acf1c(FUN_10267d18c,puVar1);
  return;
}



/* Entry: 10267d18c; end: 10267d19b;  */

void FUN_10267d18c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_58,lVar2,uVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10267de80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 1;
  func_0x000107c61614(lVar2 + 0x40,0);
  *(undefined8 *)(lVar2 + 0x10) = uStack_58;
  *(undefined8 *)(lVar2 + 0x18) = uStack_60;
  *(undefined8 *)(lVar2 + 0x48) = uStack_68;
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *param_1 = lVar2;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 10267d19c; end: 10267d213;  */

long FUN_10267d19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 1;
  func_0x000107c61614(unaff_x20 + 0x40,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x48) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return unaff_x20;
}


