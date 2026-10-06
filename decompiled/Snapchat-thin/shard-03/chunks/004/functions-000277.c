/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102858294; end: 1028582c7; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4880);
  *(undefined8 *)(param_1 + _DAT_112ec4880) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028582c8; end: 1028582d7; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028582c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4888));
  return;
}



/* Entry: 1028582d8; end: 10285830b; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028582d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4888);
  *(undefined8 *)(param_1 + _DAT_112ec4888) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285830c; end: 10285831f; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10285830c(void)

{
  FUN_102858420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102858320; end: 102858337; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102858334) */

void FUN_102858320(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102858338; end: 10285833f; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin pluginType] */

undefined8 FUN_102858338(void)

{
  return 1;
}



/* Entry: 102858340; end: 102858393; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858340(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec4880) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec4888) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102858394; end: 1028583c7;  */

void FUN_102858394(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028583c8; end: 1028583ff; -[_TtC35BrandCollabIntroStatusMessagePlugin35BrandCollabIntroStatusMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028583e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028583e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028583c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec4880));
  return;
}



/* Entry: 102858400; end: 10285841f;  */

void FUN_102858400(void)

{
  func_0x000107c61168(&PTR_PTR_1128665b8);
  return;
}



/* Entry: 102858420; end: 102858527;  */

void FUN_102858420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  
  FUN_1028585e8();
  puVar1 = PTR_PTR_1126ab2a8;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c49470();
  func_0x000107c61170(param_1);
  uVar4 = 0x112ec41d0;
  uVar2 = 0;
  FUN_102858528(0,0x112ec41d0,&PTR_PTR_1126ab2b0);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  FUN_102858528(0,0x112ec41d8,&PTR_PTR_1126ab2a8);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  apuStack_60[0] = puVar1;
  uStack_48 = uVar2;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar3,uVar4,apuStack_60,&uStack_80);
  return;
}



/* Entry: 102858528; end: 1028585d7;  */

void FUN_102858528(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028585d8; end: 1028585e7;  */

undefined1  [16] FUN_1028585d8(void)

{
  return ZEXT816(0x1105583e8);
}



/* Entry: 1028585e8; end: 1028586b7;  */

undefined1  [16] FUN_1028585e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x656d5f6f72746e69;
  func_0x000107c5fadc(0x656d5f6f72746e69,0xed00006567617373);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0c3050);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028586b8);
  (*pcVar1)();
}



/* Entry: 1028586b8; end: 1028586c7; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028586b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec48b8));
  return;
}



/* Entry: 1028586c8; end: 1028586fb; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028586c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec48b8);
  *(undefined8 *)(param_1 + _DAT_112ec48b8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028586fc; end: 10285870b; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028586fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec48c0));
  return;
}



/* Entry: 10285870c; end: 10285873f; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285870c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec48c0);
  *(undefined8 *)(param_1 + _DAT_112ec48c0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102858740; end: 10285875f; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858740(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec48c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102858760; end: 102858773; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec48c8,param_3);
  return;
}



/* Entry: 102858774; end: 102858e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102858774(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long unaff_x20;
  undefined8 uVar22;
  long lVar23;
  ulong uStack_100;
  undefined *apuStack_d8 [3];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112ec48d8);
  uVar21 = param_2;
  func_0x000107c4ce08(uVar3,param_2,param_1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c404a8();
    if ((int)uVar5 == 5) {
      uVar5 = uVar4;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102858e64);
        (*pcVar2)();
      }
      uVar6 = uVar5;
      func_0x000107c5a960();
      func_0x000107c61170(uVar5);
      if ((int)uVar6 == 0x25) {
        uVar5 = uVar4;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102858e68);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c4a944();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 != 0) {
          uVar5 = uVar6;
          func_0x000107c4a940();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar7 = uVar5;
            func_0x000107c5faec();
            uVar7 = uVar7 & 0xffffffffffff;
            if ((uVar21 & 0x2000000000000000) != 0) {
              uVar7 = uVar21 >> 0x38 & 0xf;
            }
            if (uVar7 == 0) {
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar6);
              func_0x000107c6142c(uVar21);
              func_0x000107c615e8(uVar3);
LAB_1028589cc:
              func_0x000107c61170(uVar5);
              return 0;
            }
            func_0x0001000d224c(&puStack_b8);
            puVar1 = puStack_b8;
            if (puStack_b8 == (undefined *)0x0) {
              func_0x000107c6142c(uVar21);
              func_0x000107c615e8(uVar3);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar4);
              goto LAB_1028589cc;
            }
            lVar14 = *(long *)(unaff_x20 + _DAT_112ec48e0);
            lVar15 = ((long *)(unaff_x20 + _DAT_112ec48e0))[1];
            lVar8 = lVar14;
            func_0x000107c5fadc();
            uVar7 = param_2;
            lVar23 = lVar8;
            func_0x0001070b210c();
            func_0x000107c61180();
            func_0x000107c61170(lVar8);
            if (uVar7 != 0) {
              uVar9 = uVar7;
              func_0x000107c3e9e8();
              func_0x000107c61180();
              func_0x000107c61170(uVar7);
              if (uVar9 == 0) {
                uStack_100 = 0;
                lVar23 = 0;
                goto LAB_1028589e8;
              }
              uVar7 = uVar9;
              func_0x000107c3e978();
              func_0x000107c61180();
              func_0x000107c61170(uVar9);
              if (uVar7 != 0) {
                uStack_100 = uVar7;
                func_0x000107c5faec();
                func_0x000107c61170(uVar7);
                goto LAB_1028589e8;
              }
            }
            uStack_100 = 0;
            lVar23 = 0;
LAB_1028589e8:
            uStack_88 = 0;
            lStack_80 = 0;
            puVar10 = &UNK_110558500;
            func_0x000107c613fc(&UNK_110558500,0x28,7);
            *(undefined8 **)(puVar10 + 0x10) = &uStack_88;
            *(ulong *)(puVar10 + 0x18) = param_2;
            *(long *)(puVar10 + 0x20) = unaff_x20;
            puVar11 = &UNK_110558528;
            func_0x000107c613fc(&UNK_110558528,0x20,7);
            *(undefined8 *)(puVar11 + 0x10) = 0x1028594b0;
            *(undefined **)(puVar11 + 0x18) = puVar10;
            pcStack_98 = FUN_1028594bc;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            pcStack_a8 = FUN_10283fc04;
            puStack_a0 = &UNK_110558540;
            ppuVar12 = &puStack_b8;
            puStack_90 = puVar11;
            func_0x000107c60bc4(ppuVar12);
            puVar11 = puStack_90;
            func_0x000107c61174(param_2);
            func_0x000107c61174();
            func_0x000107c61574(puVar11);
            func_0x000107c4c6d0(param_2);
            func_0x000107c6142c(uVar21);
            func_0x000107c60bd0(ppuVar12);
            puVar11 = PTR_PTR_1126ab3d0;
            func_0x000107c610f8();
            func_0x000107c45b54();
            func_0x000107c61170(uVar5);
            if (lVar23 == 0) {
              uStack_100 = 0;
            }
            else {
              func_0x000107c5fadc(uStack_100,lVar23);
              func_0x000107c6142c(lVar23);
            }
            func_0x000107c52ae0(puVar11);
            func_0x000107c61170(uStack_100);
            lVar23 = lStack_80;
            uVar22 = uStack_88;
            if (lStack_80 == 0) {
              uVar22 = 0;
            }
            else {
              func_0x000107c61434(lStack_80);
              func_0x000107c5fadc(uVar22,lVar23);
              func_0x000107c6142c(lVar23);
            }
            func_0x000107c54bd4(puVar11);
            func_0x000107c61170(uVar22);
            func_0x000107c5fadc(lVar14,lVar15);
            func_0x000107c53cc4(puVar11);
            func_0x000107c61170(lVar14);
            puVar13 = PTR_PTR_1126ab3d8;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c546a0();
            lVar14 = *(long *)(unaff_x20 + _DAT_112ec48e8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar14 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = lVar14;
              func_0x000107c4c1dc();
              func_0x000107c61180();
              func_0x000107c615e8(lVar14);
            }
            func_0x000107c56b20(puVar13);
            func_0x000107c615e8(lVar15);
            lVar14 = unaff_x20 + _DAT_112ec48c8;
            func_0x000107c61618();
            if (lVar14 != 0) {
              lVar15 = *(long *)(unaff_x20 + _DAT_112ec48f0);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar15 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = lVar15;
                func_0x000107c4c1e0();
                func_0x000107c61180();
                func_0x000107c615e8(lVar15);
              }
              func_0x000107c52604(puVar13);
              func_0x000107c615e8(lVar14);
              func_0x000107c615e8(lVar23);
            }
            puVar16 = &UNK_110558578;
            func_0x000107c613fc(&UNK_110558578,0x18,7);
            func_0x000107c61614(puVar16 + 0x10,unaff_x20);
            pcStack_98 = FUN_1028594dc;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            pcStack_a8 = (code *)0x102859154;
            puStack_a0 = &UNK_110558590;
            ppuVar12 = &puStack_b8;
            puStack_90 = puVar16;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_90);
            func_0x000107c56ddc(puVar13);
            func_0x000107c60bd0(ppuVar12);
            puVar16 = PTR_PTR_1126b1588;
            func_0x000107c610f8(PTR_PTR_1126b1588);
            func_0x000107c453e4();
            func_0x000107c3ef88(*(undefined8 *)(unaff_x20 + _DAT_112ec4900));
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c43b74(puVar16);
            func_0x000107c61170(puVar17);
            func_0x000107c55798(puVar13);
            uVar22 = 0x112ec4930;
            uVar18 = 0;
            FUN_1028594ec(0,0x112ec4930,&PTR_PTR_1126ab3e0);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar19 = uVar18;
            func_0x000107c5faec();
            func_0x000107c61170(uVar18);
            uVar18 = 0;
            FUN_1028594ec(0,0x112ec4938,&PTR_PTR_1126ab3d0);
            uVar20 = 0;
            puStack_b8 = puVar11;
            puStack_a0 = (undefined *)uVar18;
            FUN_1028594ec(0,0x112ec4940,&PTR_PTR_1126ab3d8);
            apuStack_d8[0] = puVar13;
            uStack_c0 = uVar20;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar11);
            func_0x000107c61174(puVar13);
            FUN_1027efbc4(uVar19,uVar22,&puStack_b8,apuStack_d8);
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar16);
            func_0x000107c615e8(puVar1);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar4);
            lVar14 = lStack_80;
            func_0x000107c61574(puVar10);
            func_0x000107c6142c(lVar14);
            return uVar19;
          }
          func_0x000107c61170(uVar4);
          uVar4 = uVar6;
        }
      }
    }
    func_0x000107c61170(uVar4);
  }
  func_0x000107c615e8(uVar3);
  return 0;
}



/* Entry: 102858e68; end: 10285919f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102858e68(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_4 + _DAT_112ec48e0);
  func_0x000107c5fadc(lVar2,((long *)(param_4 + _DAT_112ec48e0))[1]);
  lVar3 = lVar2;
  func_0x0001070b1d3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar2 == 0) {
      param_3 = 0;
      lVar3 = 0;
      goto LAB_102858f28;
    }
    lVar1 = lVar2;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      param_3 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_102858f28;
    }
    param_3 = 0;
  }
  lVar3 = 0;
LAB_102858f28:
  lVar2 = param_2[1];
  *param_2 = param_3;
  param_2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1028591a0; end: 102859307; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028591a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102858774(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102859308; end: 10285932f; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin dismissPresentedView] */

void FUN_102859308(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102859218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102859330; end: 102859347; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102859344) */

void FUN_102859330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102859348; end: 10285934f; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin pluginType] */

undefined8 FUN_102859348(void)

{
  return 0;
}



/* Entry: 102859350; end: 1028593af; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin init] */

void FUN_102859350(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CalendarEventShareMessagePlugin.CalendarEventShareMessagePlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285937c);
  (*pcVar1)();
}



/* Entry: 1028593b0; end: 10285946b; -[_TtC31CalendarEventShareMessagePlugin31CalendarEventShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010285940c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102859410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028593b0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec48b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec48c0));
  func_0x000100e3b598(param_1 + _DAT_112ec48c8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec48d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec48d8));
  return;
}



/* Entry: 10285946c; end: 10285948b;  */

void FUN_10285946c(void)

{
  func_0x000107c61168(&PTR_PTR_112866678);
  return;
}



/* Entry: 10285948c; end: 1028594bb;  */

void FUN_10285948c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c134930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_requestAnimatedDismiss_11262ac68);
  return;
}



/* Entry: 1028594bc; end: 1028594db;  */

void FUN_1028594bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028594dc; end: 1028594eb;  */

void FUN_1028594dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  puVar2 = &UNK_110558578;
  func_0x000107c613fc(&UNK_110558578,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  puVar4 = &UNK_1105585c8;
  func_0x000107c613fc(&UNK_1105585c8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  uStack_58 = 0x1028594e4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1105585e0;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(puVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1028594ec; end: 10285952b;  */

void FUN_1028594ec(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10285952c; end: 102859543;  */

void FUN_10285952c(long param_1,long param_2)

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



/* Entry: 102859544; end: 10285960b;  */

void FUN_102859544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110558618;
  func_0x000107c613fc(&UNK_110558618,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028598cc,puVar1);
  return;
}



/* Entry: 10285960c; end: 1028598cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285960c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    uVar10 = *(undefined8 *)(lStack_68 + _DAT_112ff5e48);
    func_0x000107c6157c(uVar10);
    func_0x000107c61170(lStack_68);
    func_0x000100083b20(&lStack_70);
    uVar11 = *(undefined8 *)(lStack_70 + _DAT_11301aef0);
    func_0x000107c615f0(uVar11);
    func_0x000107c61170(lStack_70);
    func_0x000100083b20(&lStack_78);
    uVar4 = *(undefined8 *)(lStack_78 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_78);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&uStack_80);
    uVar5 = uStack_80;
    func_0x000107c4d814();
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    func_0x000100083b20(&uStack_88);
    uVar6 = uStack_88;
    func_0x000107c3dae4();
    func_0x000107c61180();
    func_0x000107c61170(uStack_88);
    func_0x000100083b20(&lStack_90);
    uVar7 = *(undefined8 *)(lStack_90 + _DAT_112febe30);
    func_0x000107c61174();
    func_0x000107c61170(lStack_90);
    lVar8 = 0;
    FUN_10285946c();
    lVar2 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112ec48b8) = 0;
    *(undefined8 *)(lVar2 + _DAT_112ec48c0) = 0;
    func_0x000107c61614(lVar2 + _DAT_112ec48c8,0);
    *(undefined8 *)(lVar2 + _DAT_112ec48d0) = uVar10;
    *(undefined8 *)(lVar2 + _DAT_112ec48d8) = uVar11;
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ec48e0);
    *puVar1 = uVar4;
    puVar1[1] = param_3;
    *(undefined8 *)(lVar2 + _DAT_112ec48e8) = uVar5;
    *(undefined8 *)(lVar2 + _DAT_112ec48f0) = uVar6;
    *(undefined8 *)(lVar2 + _DAT_112ec48f8) = uVar7;
    *(long *)(lVar2 + _DAT_112ec4900) = lVar3;
    plVar9 = &lStack_a0;
    lStack_a0 = lVar2;
    lStack_98 = lVar8;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  }
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1028598cc; end: 1028598eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028598cc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar10,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = lStack_68;
  lVar2 = lStack_68;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    uVar11 = *(undefined8 *)(lStack_68 + _DAT_112ff5e48);
    func_0x000107c6157c(uVar11);
    func_0x000107c61170(lStack_68);
    func_0x000100083b20(&lStack_70);
    uVar12 = *(undefined8 *)(lStack_70 + _DAT_11301aef0);
    func_0x000107c615f0(uVar12);
    func_0x000107c61170(lStack_70);
    func_0x000100083b20(&lStack_78);
    uVar4 = *(undefined8 *)(lStack_78 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_78);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&uStack_80);
    uVar5 = uStack_80;
    func_0x000107c4d814();
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    func_0x000100083b20(&uStack_88);
    uVar6 = uStack_88;
    func_0x000107c3dae4();
    func_0x000107c61180();
    func_0x000107c61170(uStack_88);
    func_0x000100083b20(&lStack_90);
    uVar7 = *(undefined8 *)(lStack_90 + _DAT_112febe30);
    func_0x000107c61174();
    func_0x000107c61170(lStack_90);
    lVar8 = 0;
    FUN_10285946c();
    lVar2 = lVar8;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112ec48b8) = 0;
    *(undefined8 *)(lVar2 + _DAT_112ec48c0) = 0;
    func_0x000107c61614(lVar2 + _DAT_112ec48c8,0);
    *(undefined8 *)(lVar2 + _DAT_112ec48d0) = uVar11;
    *(undefined8 *)(lVar2 + _DAT_112ec48d8) = uVar12;
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ec48e0);
    *puVar1 = uVar4;
    puVar1[1] = uVar10;
    *(undefined8 *)(lVar2 + _DAT_112ec48e8) = uVar5;
    *(undefined8 *)(lVar2 + _DAT_112ec48f0) = uVar6;
    *(undefined8 *)(lVar2 + _DAT_112ec48f8) = uVar7;
    *(long *)(lVar2 + _DAT_112ec4900) = lVar3;
    plVar9 = &lStack_a0;
    lStack_a0 = lVar2;
    lStack_98 = lVar8;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  }
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 1028598ec; end: 1028598fb; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028598ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4948));
  return;
}



/* Entry: 1028598fc; end: 10285992f; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028598fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4948);
  *(undefined8 *)(param_1 + _DAT_112ec4948) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102859930; end: 10285993f; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102859930(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4950));
  return;
}



/* Entry: 102859940; end: 102859973; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102859940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4950);
  *(undefined8 *)(param_1 + _DAT_112ec4950) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102859974; end: 102859993; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102859974(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102859994; end: 1028599a7; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102859994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4958,param_3);
  return;
}



/* Entry: 1028599a8; end: 102859e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028599a8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar16 = param_2;
  func_0x000107c51f08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5cb4c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112ec4970);
  uVar17 = uVar16;
  func_0x000107c4ce08();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5bd28();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 != 0) {
      uVar4 = uVar5;
      func_0x000107c5bd30();
      if ((int)uVar4 == 0x21) {
        uVar4 = uVar5;
        func_0x000107c4a948();
        func_0x000107c61180();
        if (uVar4 != 0) {
          uVar6 = uVar4;
          func_0x000107c4a940();
          func_0x000107c61180();
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c5faec();
            uVar7 = uVar7 & 0xffffffffffff;
            if ((uVar17 & 0x2000000000000000) != 0) {
              uVar7 = uVar17 >> 0x38 & 0xf;
            }
            if (uVar7 == 0) {
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar4);
              func_0x000107c6142c(uVar16);
              func_0x000107c6142c(uVar17);
              func_0x000107c615e8(uVar3);
              func_0x000107c61170(uVar1);
              uVar1 = uVar6;
            }
            else {
              func_0x0001070b2c1c(param_2,uVar1);
              func_0x000107c61180();
              func_0x000107c61170(uVar1);
              if (param_2 != 0) {
                func_0x000107c5bd44();
                uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4960);
                uVar7 = ((ulong *)(unaff_x20 + _DAT_112ec4960))[1];
                if ((uVar2 != uVar1) || (uVar16 != uVar7)) {
                  func_0x000107c605b8(uVar2,uVar16,uVar1,uVar7,0);
                }
                func_0x000107c6142c(uVar16);
                func_0x000107c6142c(uVar17);
                puVar8 = PTR_PTR_1126ab3e8;
                func_0x000107c610f8();
                func_0x000107c470b4();
                func_0x000107c61170(uVar6);
                func_0x000107c61170(param_2);
                puVar9 = &UNK_110558758;
                func_0x000107c613fc(&UNK_110558758,0x18,7);
                func_0x000107c61614(puVar9 + 0x10);
                puVar10 = PTR_PTR_1126ab3f0;
                func_0x000107c610f8();
                uStack_70 = 0x10285a334;
                puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_88 = 0x42000000;
                uStack_80 = 0x102859154;
                puStack_78 = &UNK_110558770;
                ppuVar11 = &puStack_90;
                puStack_68 = puVar9;
                func_0x000107c60bc4(ppuVar11);
                func_0x000107c6157c(puVar9);
                func_0x000107c47c24();
                func_0x000107c60bd0(ppuVar11);
                puVar12 = puStack_68;
                func_0x000107c61574(puVar9);
                func_0x000107c61574(puVar12);
                puVar9 = PTR_PTR_1126b1588;
                func_0x000107c610f8(PTR_PTR_1126b1588);
                func_0x000107c453e4();
                func_0x000107c3ef8c(*(undefined8 *)(unaff_x20 + _DAT_112ec4978));
                puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                func_0x000107c45a48();
                func_0x000107c43b74(puVar9);
                func_0x000107c61170(puVar12);
                func_0x000107c55798(puVar10);
                uVar18 = 0x112ec49a8;
                uVar13 = 0;
                FUN_10285a33c(0,0x112ec49a8,&PTR_PTR_1126ab3f8);
                func_0x000107c614e8();
                func_0x000107c3ff48();
                func_0x000107c61180();
                uVar14 = uVar13;
                func_0x000107c5faec();
                func_0x000107c61170(uVar13);
                uVar13 = 0;
                FUN_10285a33c(0,0x112ec49b0,&PTR_PTR_1126ab3e8);
                uVar15 = 0;
                puStack_90 = puVar8;
                puStack_78 = (undefined *)uVar13;
                FUN_10285a33c(0,0x112ec49b8,&PTR_PTR_1126ab3f0);
                apuStack_b0[0] = puVar10;
                uStack_98 = uVar15;
                func_0x000107c610f8(PTR_PTR_1126c67d8);
                func_0x000107c61174(puVar8);
                func_0x000107c61174(puVar10);
                FUN_1027efbc4(uVar14,uVar18,&puStack_90,apuStack_b0);
                func_0x000107c615e8(uVar3);
                func_0x000107c61170(puVar10);
                func_0x000107c61170(puVar8);
                func_0x000107c61170(puVar9);
                func_0x000107c61170(uVar4);
                func_0x000107c61170(uVar5);
                return uVar14;
              }
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar4);
              func_0x000107c6142c(uVar16);
              func_0x000107c6142c(uVar17);
              func_0x000107c615e8(uVar3);
              uVar1 = uVar6;
            }
            goto LAB_102859b40;
          }
          func_0x000107c61170(uVar5);
          uVar5 = uVar4;
        }
      }
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar16);
      func_0x000107c615e8(uVar3);
      goto LAB_102859b40;
    }
  }
  func_0x000107c615e8(uVar3);
  func_0x000107c6142c(uVar16);
LAB_102859b40:
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 102859e40; end: 10285a053;  */

void FUN_102859e40(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126e1928;
  func_0x000107c610f8(PTR_PTR_1126e1928);
  func_0x000107c453e4();
  puVar2 = &UNK_110558758;
  func_0x000107c613fc(&UNK_110558758,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_1105587a8;
  func_0x000107c613fc(&UNK_1105587a8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_58 = FUN_10285a37c;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1105587c0;
  ppuVar4 = &puStack_78;
  puStack_50 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(puVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10285a054; end: 10285a1bb; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10285a054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028599a8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285a1bc; end: 10285a1e3; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin dismissPresentedView] */

void FUN_10285a1bc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010285a0cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10285a1e4; end: 10285a1eb; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin pluginType] */

undefined8 FUN_10285a1e4(void)

{
  return 1;
}



/* Entry: 10285a1ec; end: 10285a203; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010285a200) */

void FUN_10285a1ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10285a204; end: 10285a263; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin init] */

void FUN_10285a204(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CalendarEventShareStatusMessagePlugin.CalendarEventShareStatusMessagePlugin",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285a230);
  (*pcVar1)();
}



/* Entry: 10285a264; end: 10285a2ef; -[_TtC37CalendarEventShareStatusMessagePlugin37CalendarEventShareStatusMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010285a2d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285a2d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a264(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4948));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4950));
  func_0x000100e3b598(param_1 + _DAT_112ec4958);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec4960 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4968));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4970));
  return;
}



/* Entry: 10285a2f0; end: 10285a30f;  */

void FUN_10285a2f0(void)

{
  func_0x000107c61168(&PTR_PTR_112866780);
  return;
}



/* Entry: 10285a310; end: 10285a33b;  */

void FUN_10285a310(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c134930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_requestAnimatedDismiss_11262ac68);
  return;
}



/* Entry: 10285a33c; end: 10285a37b;  */

void FUN_10285a33c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10285a37c; end: 10285a393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a37c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  puVar5 = auStack_48;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42abc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    lVar3 = *(long *)(lVar1 + _DAT_112ec4968);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar1 + _DAT_112ec4958;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c4eeb8(lVar3);
        func_0x000107c615e8(lVar3);
        lVar3 = lVar4;
      }
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10285a394; end: 10285a437;  */

void FUN_10285a394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105587f8;
  func_0x000107c613fc(&UNK_1105587f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10285a630,puVar1);
  return;
}



/* Entry: 10285a438; end: 10285a62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a438(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_58);
    uVar4 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_58);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&lStack_60);
    uVar5 = *(undefined8 *)(lStack_60 + _DAT_112febe30);
    func_0x000107c61174();
    func_0x000107c61170(lStack_60);
    func_0x000100083b20(&lStack_68);
    uVar8 = *(undefined8 *)(lStack_68 + _DAT_11301aef0);
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lStack_68);
    lVar6 = 0;
    FUN_10285a2f0();
    lVar2 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112ec4948) = 0;
    *(undefined8 *)(lVar2 + _DAT_112ec4950) = 0;
    func_0x000107c61614(lVar2 + _DAT_112ec4958,0);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ec4960);
    *puVar1 = uVar4;
    puVar1[1] = param_3;
    *(undefined8 *)(lVar2 + _DAT_112ec4968) = uVar5;
    *(undefined8 *)(lVar2 + _DAT_112ec4970) = uVar8;
    *(long *)(lVar2 + _DAT_112ec4978) = lVar3;
    plVar7 = &lStack_78;
    lStack_78 = lVar2;
    lStack_70 = lVar6;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  }
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10285a630; end: 10285a64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a630(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_58,*(undefined8 *)(unaff_x20 + 0x10),uVar8,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_58);
    uVar4 = *(undefined8 *)(lStack_58 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_58);
    uVar5 = uVar4;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&lStack_60);
    uVar5 = *(undefined8 *)(lStack_60 + _DAT_112febe30);
    func_0x000107c61174();
    func_0x000107c61170(lStack_60);
    func_0x000100083b20(&lStack_68);
    uVar9 = *(undefined8 *)(lStack_68 + _DAT_11301aef0);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lStack_68);
    lVar6 = 0;
    FUN_10285a2f0();
    lVar2 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar2 + _DAT_112ec4948) = 0;
    *(undefined8 *)(lVar2 + _DAT_112ec4950) = 0;
    func_0x000107c61614(lVar2 + _DAT_112ec4958,0);
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ec4960);
    *puVar1 = uVar4;
    puVar1[1] = uVar8;
    *(undefined8 *)(lVar2 + _DAT_112ec4968) = uVar5;
    *(undefined8 *)(lVar2 + _DAT_112ec4970) = uVar9;
    *(long *)(lVar2 + _DAT_112ec4978) = lVar3;
    plVar7 = &lStack_78;
    lStack_78 = lVar2;
    lStack_70 = lVar6;
    func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  }
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10285a64c; end: 10285a66b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a64c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec49c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10285a66c; end: 10285a67f; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a66c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec49c0,param_3);
  return;
}



/* Entry: 10285a680; end: 10285a69f; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a680(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec49c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10285a6a0; end: 10285a6b3; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setOperaPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec49c8,param_3);
  return;
}



/* Entry: 10285a6b4; end: 10285a6d3; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a6b4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec49d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10285a6d4; end: 10285a6e7; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec49d0,param_3);
  return;
}



/* Entry: 10285a6e8; end: 10285a6f7; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec49d8));
  return;
}



/* Entry: 10285a6f8; end: 10285a72b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a6f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec49d8);
  *(undefined8 *)(param_1 + _DAT_112ec49d8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285a72c; end: 10285a73b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec49e0));
  return;
}



/* Entry: 10285a73c; end: 10285a77b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_10285a73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10285a77c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10285a77c; end: 10285a8bb;  */

/* WARNING: Possible PIC construction at 0x00010285a7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285a860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285a87c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285a864) */
/* WARNING: Removing unreachable block (ram,0x00010285a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010285a8a0) */
/* WARNING: Removing unreachable block (ram,0x00010285a7bc) */
/* WARNING: Removing unreachable block (ram,0x00010285a880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a77c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec49e0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec49e0) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285a8bc; end: 10285a9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a8bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___sytN_11034f1b0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec4a20);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000100075034(0x10285d448,0,puVar1 + 8);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112ec4a28);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(param_2);
    func_0x000100075034(FUN_10285d434,0,puVar1 + 8);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10285a9b0; end: 10285a9bf; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec49e8));
  return;
}



/* Entry: 10285a9c0; end: 10285aa3f; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285a9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec49e8);
  *(undefined8 *)(param_1 + _DAT_112ec49e8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10285aa40; end: 10285aa9f;  */

void FUN_10285aa40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 10285aaa0; end: 10285adbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285aaa0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c930();
    func_0x000107c61180();
    puVar3 = &UNK_110558a00;
    uVar10 = 0x20;
    func_0x000107c613fc(&UNK_110558a00,0x20,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(param_2);
    if (param_3 != 0) {
      lVar4 = param_3;
      func_0x000107c61174();
      lVar5 = lVar4;
      func_0x000107c4c99c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c5faec();
        func_0x000107c61170(lVar5);
        func_0x0001000d224c(&puStack_a8);
        puVar1 = puStack_a8;
        if (puStack_a8 != (undefined *)0x0) {
          uVar12 = *(undefined8 *)(lVar2 + _DAT_112ec4a28);
          func_0x000107c6157c(uVar12);
          func_0x0001000c74f0(&puStack_a8);
          func_0x000107c61574(uVar12);
          if (*(long *)(puStack_a8 + 0x10) != 0) {
            func_0x000107c61434(puStack_a8);
            lVar5 = lVar6;
            uVar11 = uVar10;
            func_0x000100029284();
            if ((uVar11 & 1) != 0) {
              uVar13 = *(undefined8 *)(*(long *)(puStack_a8 + 0x38) + lVar5 * 8);
              uVar12 = uVar13;
              func_0x000107c61174(uVar13);
              func_0x000107c6142c(uVar10);
              func_0x000107c61430(puStack_a8,2);
              func_0x000107c61174(uVar12);
              FUN_10285adbc(uVar13,param_2,param_1);
              func_0x000107c615e8(puVar1);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(uVar12);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar4);
              func_0x000107c61574(puVar3);
              func_0x000107c61170(lVar2);
              return;
            }
            func_0x000107c6142c(puStack_a8);
          }
          func_0x000107c6142c(puStack_a8);
          puVar7 = &UNK_110558960;
          func_0x000107c613fc(&UNK_110558960,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,lVar2);
          puVar8 = &UNK_110558a28;
          func_0x000107c613fc(&UNK_110558a28,0x38,7);
          *(undefined **)(puVar8 + 0x10) = puVar7;
          *(code **)(puVar8 + 0x18) = FUN_10285d110;
          *(undefined **)(puVar8 + 0x20) = puVar3;
          *(long *)(puVar8 + 0x28) = lVar6;
          *(ulong *)(puVar8 + 0x30) = uVar10;
          uStack_88 = 0x10285d118;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_10285b8d8;
          puStack_90 = &UNK_110558a40;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar8;
          func_0x000107c60bc4(ppuVar9);
          puVar7 = puStack_80;
          func_0x000107c6157c(puVar3);
          func_0x000107c61574(puVar7);
          func_0x000107c4eb90(puVar1);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(puVar3);
          func_0x000107c61170(lVar2);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(puVar1);
          return;
        }
        func_0x000107c6142c(uVar10);
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61428(param_2 + 0x10,&puStack_a8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    func_0x000107c61170(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar2);
    if (param_2 != 0) {
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10285adbc; end: 10285af13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10285adbc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else {
    lVar4 = param_2;
    if (param_1 != 0) {
      lVar1 = param_2 + _DAT_112ec49c0;
      func_0x000107c61618();
      if (lVar1 != 0) {
        lVar3 = *(long *)(param_2 + _DAT_112ec49f0);
        func_0x000107c61174(param_1);
        lVar4 = lVar3;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar3);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        lVar4 = *(long *)(param_2 + _DAT_112ec49f8);
        if (param_3 != 0) {
          func_0x000107c5de64(param_3);
          func_0x000107c61180();
        }
        func_0x000107c3ed1c(lVar4);
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        func_0x000107c42c1c(lVar3);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar1);
      }
    }
    func_0x000107c61170(lVar4);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10285af14; end: 10285af87; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10285af14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010285c8ac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10285af88; end: 10285af9f; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010285af9c) */

void FUN_10285af88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10285afa0; end: 10285afa7; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin pluginType] */

undefined8 FUN_10285afa0(void)

{
  return 0;
}



/* Entry: 10285afa8; end: 10285b037;  */

void FUN_10285afa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(param_3);
  func_0x000107c6157c(param_4);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_1027f6fa0(param_4,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *param_1 = uVar2;
  return;
}



/* Entry: 10285b038; end: 10285b147;  */

void FUN_10285b038(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c4ce08(param_3,param_3,*param_2);
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c4c930();
  func_0x000107c61180();
  *param_1 = lVar1;
  lVar1 = param_3;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(param_3);
    lVar5 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000107c40258(param_3);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c3dc7c(param_3);
    func_0x000107c61180();
    lVar4 = param_3;
    func_0x000107c40674(param_3);
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5caf0();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 10285b148; end: 10285b1ff;  */

void FUN_10285b148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110558960;
  func_0x000107c613fc(&UNK_110558960,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_110558a78;
  func_0x000107c613fc(&UNK_110558a78,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x0001000285a8(0x112ec4ab8,&UNK_10dae4a20);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x0001000b64ac(FUN_10285d138,puVar2);
  return;
}



/* Entry: 10285b200; end: 10285b617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285b200(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) goto LAB_10285b4a0;
  puVar2 = &UNK_110558960;
  func_0x000107c613fc(&UNK_110558960,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar3 = &UNK_110558aa0;
  uVar11 = 0x28;
  func_0x000107c613fc(&UNK_110558aa0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar2);
LAB_10285b420:
    func_0x000107c61428(puVar2 + 0x10,&puStack_c8,0,0);
    puVar8 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar8 != (undefined *)0x0) {
      puVar9 = PTR_PTR_1126ab418;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c53384();
      puStack_98 = puVar9;
      func_0x000100087f6c(&puStack_98);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
    }
    func_0x000100c7f554();
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar2);
    func_0x000107c61174();
    lVar4 = param_3;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar4 == 0) {
LAB_10285b418:
      func_0x000107c61170(param_3);
      goto LAB_10285b420;
    }
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    func_0x0001000d224c(&puStack_c8);
    puVar8 = puStack_c8;
    if (puStack_c8 == (undefined *)0x0) {
      func_0x000107c6142c(uVar11);
      goto LAB_10285b418;
    }
    uVar13 = *(undefined8 *)(lVar1 + _DAT_112ec4a28);
    func_0x000107c6157c(uVar13);
    func_0x0001000c74f0(&puStack_c8);
    func_0x000107c61574(uVar13);
    puVar9 = puStack_c8;
    if (*(long *)(puStack_c8 + 0x10) == 0) {
LAB_10285b4e8:
      func_0x000107c6142c(puVar9);
      puVar9 = &UNK_110558960;
      func_0x000107c613fc(&UNK_110558960,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar1);
      puVar6 = &UNK_110558ac8;
      func_0x000107c613fc(&UNK_110558ac8,0x38,7);
      *(undefined **)(puVar6 + 0x10) = puVar9;
      *(undefined8 *)(puVar6 + 0x18) = 0x10285d144;
      *(undefined **)(puVar6 + 0x20) = puVar3;
      *(long *)(puVar6 + 0x28) = lVar5;
      *(ulong *)(puVar6 + 0x30) = uVar11;
      pcStack_a8 = FUN_10285d45c;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_10285b8d8;
      puStack_b0 = &UNK_110558ae0;
      ppuVar10 = &puStack_c8;
      puStack_a0 = puVar6;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_a0;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar9);
      func_0x000107c4eb90(puVar8);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(puVar8);
      goto LAB_10285b4a0;
    }
    func_0x000107c61434(puStack_c8);
    lVar4 = lVar5;
    uVar12 = uVar11;
    func_0x000100029284();
    if ((uVar12 & 1) == 0) {
      func_0x000107c6142c(puVar9);
      goto LAB_10285b4e8;
    }
    puVar6 = *(undefined **)(*(long *)(puVar9 + 0x38) + lVar4 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(uVar11);
    func_0x000107c61430(puVar9,2);
    func_0x000107c61428(puVar2 + 0x10,&puStack_c8,0,0);
    puVar9 = puVar2 + 0x10;
    func_0x000107c61618();
    if (puVar9 == (undefined *)0x0) {
      func_0x000107c61174(puVar6);
    }
    else {
      func_0x000107c61174(puVar6);
      puVar7 = puVar6;
      FUN_10285d194(puVar6,param_4);
      puStack_98 = puVar7;
      func_0x000100087f6c(&puStack_98);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar7);
    }
    func_0x000100c7f554();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(puVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61574(puVar3);
  func_0x000107c61170(lVar1);
LAB_10285b4a0:
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10285b618; end: 10285b6a7;  */

undefined8 FUN_10285b618(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10285d194(param_1,param_4);
    uStack_50 = param_1;
    func_0x000100087f6c(&uStack_50);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
  }
  func_0x000100c7f554();
  return 0;
}



/* Entry: 10285b6a8; end: 10285b80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285b6a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_3 == 0) {
      (*param_5)(0);
    }
    else {
      func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      uVar2 = *(undefined8 *)(param_4 + _DAT_112ec4a08);
      uVar3 = uVar2;
      func_0x000107c6157c(uVar2);
      func_0x0001003a5b88();
      func_0x000107c61574(uVar2);
      lVar1 = param_3;
      func_0x000105fa4bdc(param_3,uVar3);
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(param_4 + _DAT_112ec4a28);
      uStack_90 = param_7;
      uStack_88 = param_8;
      lStack_80 = lVar1;
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_10285d11c,auStack_a0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
      (*param_5)(lVar1);
      func_0x000107c61170(param_4);
      param_4 = lVar1;
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10285b810; end: 10285b8d7;  */

void FUN_10285b810(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    func_0x000107c61434(param_3);
    func_0x00010285c0e4(param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c61170(param_2);
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000107c61174(param_4);
    uVar1 = *param_1;
    func_0x000107c61558(uVar1);
    uVar2 = *param_1;
    FUN_10285c1a0(param_4,param_2,param_3,uVar1);
    func_0x000107c6142c(param_3);
    *param_1 = uVar2;
  }
  return;
}



/* Entry: 10285b8d8; end: 10285b967;  */

void FUN_10285b8d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10285b968; end: 10285b9c7; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin init] */

void FUN_10285b968(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdShareMessagePlugin.AdShareMessagePlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10285b994);
  (*pcVar1)();
}



/* Entry: 10285b9c8; end: 10285bacf; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010285ba14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285ba34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285ba54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285ba38) */
/* WARNING: Removing unreachable block (ram,0x00010285ba18) */
/* WARNING: Removing unreachable block (ram,0x00010285ba58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285b9c8(long param_1)

{
  func_0x000100d0af28(param_1 + _DAT_112ec49c0);
  func_0x000100d0af28(param_1 + _DAT_112ec49c8);
  func_0x000100d0af28(param_1 + _DAT_112ec49d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec49d8));
  return;
}



/* Entry: 10285bad0; end: 10285baef;  */

void FUN_10285bad0(void)

{
  func_0x000107c61168(&PTR_PTR_112866870);
  return;
}



/* Entry: 10285baf0; end: 10285bb73; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x00010285bb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010285bb48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010285bb30) */
/* WARNING: Removing unreachable block (ram,0x00010285bb4c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285baf0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10285bb74; end: 10285bbd3; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterWillBeginPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bb74(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df30();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bbd4; end: 10285bc33; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDidFinishPresenting:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bbd4(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df20();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bc34; end: 10285bc93; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterWillBeginDismissing:transitionAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bc34(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bc94; end: 10285bcdf; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDidCancelDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bc94(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df14();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bce0; end: 10285bd2b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterWillBeginAnimatingToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bce0(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df28();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bd2c; end: 10285bd77; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDidFailToPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bd2c(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df18();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bd78; end: 10285bdc3; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bd78(long param_1)

{
  param_1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4df1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10285bdc4; end: 10285be53;  */

/* WARNING: Possible PIC construction at 0x00010285be0c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285bdc4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec49f0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + _DAT_112ec49c8;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c4df24();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10285be54; end: 10285be9b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenterDidTearDown:] */

void FUN_10285be54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10285bdc4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10285be9c; end: 10285bf6b; -[_TtC20AdShareMessagePlugin20AdShareMessagePlugin operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10285be9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c60234(auStack_50,param_4);
  func_0x000107c615e8(param_4);
  lVar1 = param_1 + _DAT_112ec49c8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001006732c8(auStack_50,uStack_38);
    func_0x000107c605b0();
    func_0x000107c4df0c(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(puVar2);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}


