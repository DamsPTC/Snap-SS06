/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029634fc; end: 10296352f; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029634fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf6f8);
  *(undefined8 *)(param_1 + _DAT_112ecf6f8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102963530; end: 10296353f; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf700));
  return;
}



/* Entry: 102963540; end: 1029635c7; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf700);
  *(undefined8 *)(param_1 + _DAT_112ecf700) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029635c8; end: 1029639e7;  */

/* WARNING: Possible PIC construction at 0x000102963684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029637c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029637c8) */
/* WARNING: Removing unreachable block (ram,0x000102963778) */
/* WARNING: Removing unreachable block (ram,0x000102963754) */
/* WARNING: Removing unreachable block (ram,0x000102963688) */
/* WARNING: Removing unreachable block (ram,0x000102963828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029635c8(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ecf6b8);
  uVar6 = *(ulong *)(lVar7 + _DAT_11308f138 + 8);
  if (uVar6 == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112ecf6d0);
  func_0x000107c61434(uVar6);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  func_0x000102963830();
  func_0x000107c3d428(lVar5);
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  lVar5 = *(long *)(unaff_x20 + _DAT_112ecf6c0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uVar6 = *(ulong *)(lVar7 + _DAT_113815208);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar6 & 0xffffffffffffff8;
      if (uVar6 >> 0x3e == 0) {
        uVar2 = *(ulong *)(uVar4 + 0x10);
      }
      else {
        uVar2 = uVar6;
        if (-1 < (long)uVar6) {
          uVar2 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if ((uVar6 & 0xc000000000000001) != 0) {
          func_0x000107c61434(uVar6);
          func_0x000100e471e4(0,uVar6);
          goto code_r0x000107c6142c;
        }
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102963830);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)(uVar6 + 0x20);
        func_0x000107c61174(uVar3);
      }
    }
    func_0x0001084c6bf4(lVar7,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1029639e8; end: 102963a47; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin init] */

void FUN_1029639e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProfileActionPlugins.NotInterestedAdProfileActionPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102963a14);
  (*pcVar1)();
}



/* Entry: 102963a48; end: 102963b03; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102963a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102963abc) */
/* WARNING: Removing unreachable block (ram,0x000102963a9c) */
/* WARNING: Removing unreachable block (ram,0x000102963a7c) */
/* WARNING: Removing unreachable block (ram,0x000102963aec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963a48(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecf6b0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf6b8));
  return;
}



/* Entry: 102963b04; end: 102963b23;  */

void FUN_102963b04(void)

{
  func_0x000107c61168(&PTR_PTR_112873460);
  return;
}



/* Entry: 102963b24; end: 102963b27; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin hideAdScopeDidSubmitWithReasonId:comment:] */

void FUN_102963b24(void)

{
  return;
}



/* Entry: 102963b28; end: 102963caf; -[_TtC22AdProfileActionPlugins34NotInterestedAdProfileActionPlugin hideAdScopeDidComplete:didSubmit:] */

/* WARNING: Possible PIC construction at 0x000102963b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102963b68) */

void FUN_102963b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102963b7c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102963cb0; end: 102963cbf; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf740));
  return;
}



/* Entry: 102963cc0; end: 102963cf3; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf740);
  *(undefined8 *)(param_1 + _DAT_112ecf740) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102963cf4; end: 102963d03; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102963cf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecf768);
}



/* Entry: 102963d04; end: 102963d13; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ecf768) = param_3;
  return;
}



/* Entry: 102963d14; end: 102963d23; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963d14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf770));
  return;
}



/* Entry: 102963d24; end: 102963db3; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf770);
  *(undefined8 *)(param_1 + _DAT_112ecf770) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102963db4; end: 102963eb7;  */

/* WARNING: Possible PIC construction at 0x000102963e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102963e84) */
/* WARNING: Removing unreachable block (ram,0x000102963ea0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963db4(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x00010439b9d8(0x16,0,0,0xffffffffffffffff,0,0,0xffffffffffffffff,0);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ecf750);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ecf738);
  func_0x000107c4d060(uVar1);
  func_0x000107c61180();
  uVar2 = 0;
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
    func_0x00010439a550(0);
    func_0x000104399864();
  }
  func_0x000107c3eda8(uVar3);
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102963eb8; end: 10296400f;  */

/* WARNING: Possible PIC construction at 0x000102963efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102963fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102963fbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102963eb8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecf758);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecf748);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c4a568();
    func_0x000107c61170(lVar2);
    if ((int)lVar1 != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112ecf760);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 == 0) {
        lVar1 = *(long *)(unaff_x20 + _DAT_112ecf738);
        func_0x000107c4168c();
        func_0x000107c61180();
        if (lVar1 == 0) {
          return;
        }
        func_0x000107c43960();
      }
      else {
        func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + _DAT_112ecf730),
                            ((undefined8 *)(unaff_x20 + _DAT_112ecf730))[1]);
        func_0x000107c3fab0(lVar1);
      }
      goto code_r0x000107c615e8;
    }
  }
  return;
}



/* Entry: 102964010; end: 102964037; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin plusSubscribeDidDismiss] */

void FUN_102964010(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102963eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102964038; end: 102964097; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin init] */

void FUN_102964038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProfileActionPlugins.PlusSubscribeAdProfileActionPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102964064);
  (*pcVar1)();
}



/* Entry: 102964098; end: 102964133; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029640d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029640f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102964118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029640fc) */
/* WARNING: Removing unreachable block (ram,0x0001029640dc) */
/* WARNING: Removing unreachable block (ram,0x00010296411c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964098(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecf730 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf740));
  return;
}



/* Entry: 102964134; end: 102964153;  */

void FUN_102964134(void)

{
  func_0x000107c61168(&PTR_PTR_112873570);
  return;
}



/* Entry: 102964154; end: 102964157; -[_TtC22AdProfileActionPlugins34PlusSubscribeAdProfileActionPlugin reportAdPageDidDismiss:] */

void FUN_102964154(void)

{
  return;
}



/* Entry: 102964158; end: 102964167; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102964158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecf7d0);
}



/* Entry: 102964168; end: 102964177; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964168(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ecf7d0) = param_3;
  return;
}



/* Entry: 102964178; end: 102964187; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf7d8));
  return;
}



/* Entry: 102964188; end: 1029641bb; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf7d8);
  *(undefined8 *)(param_1 + _DAT_112ecf7d8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029641bc; end: 1029641cb; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029641bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf7e0));
  return;
}



/* Entry: 1029641cc; end: 102964253; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029641cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf7e0);
  *(undefined8 *)(param_1 + _DAT_112ecf7e0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102964254; end: 10296452f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964254(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112ecf7b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar14 = 0;
  }
  else {
    FUN_102964530();
    lVar14 = lVar6;
    func_0x000107c3d428();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112ecf7a8);
  func_0x0001084c6bf4(lVar6,0);
  uVar8 = *(undefined8 *)(lVar6 + _DAT_11308f138);
  uVar9 = ((undefined8 *)(lVar6 + _DAT_11308f138))[1];
  uVar13 = *(ulong *)(lVar6 + _DAT_113815208);
  if (uVar13 != 0) {
    uVar11 = uVar13 & 0xffffffffffffff8;
    if (uVar13 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar7 = uVar13;
      if (-1 < (long)uVar13) {
        uVar7 = uVar11;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102964530);
          (*pcVar5)();
        }
        puVar1 = (undefined8 *)(*(long *)(uVar13 + 0x20) + _DAT_11308f1f8);
        uVar12 = *puVar1;
        uVar15 = puVar1[1];
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar9);
      }
      else {
        func_0x000107c61434(uVar9);
        func_0x000107c61434(uVar13);
        lVar10 = 0;
        func_0x000100e471e4(0,uVar13);
        func_0x000107c6142c(uVar13);
        uVar12 = *(undefined8 *)(lVar10 + _DAT_11308f1f8);
        uVar15 = ((undefined8 *)(lVar10 + _DAT_11308f1f8))[1];
        func_0x000107c61434(uVar15);
        func_0x000107c615e8(lVar10);
      }
      goto LAB_102964398;
    }
  }
  func_0x000107c61434(uVar9);
  uVar12 = 0;
  uVar15 = 0;
LAB_102964398:
  uVar16 = *(undefined8 *)(lVar6 + _DAT_11308f128);
  uVar2 = *(undefined8 *)(lVar6 + _DAT_11308f140);
  uVar3 = ((undefined8 *)(lVar6 + _DAT_11308f140))[1];
  uVar4 = *(undefined1 *)(lVar6 + _DAT_113815290);
  func_0x000103b48d70(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000103b4868c(uVar8,uVar9,uVar12,uVar15,uVar2,uVar3,uVar16,0,uVar4);
  lVar6 = *(long *)(unaff_x20 + _DAT_112ecf7b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ecf7c8);
    uVar9 = uVar12;
    func_0x000107c4d060(uVar12);
    func_0x000107c61180();
    func_0x000107c4d060(uVar12);
    func_0x000107c61180();
    func_0x000107c4efcc(lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c615e8(uVar9);
    func_0x000107c615e8(uVar12);
  }
  func_0x000107c615e8(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 102964530; end: 1029646e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102964530(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong auStack_60 [2];
  
  lVar2 = 0x112dbe3d8;
  func_0x0001000285a8(0x112dbe3d8,&UNK_10d979340);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)auStack_60 - extraout_x8;
  lVar3 = 0;
  func_0x000103e07278();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = (ulong *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x0001000d224c(auStack_60);
  func_0x000107c614f0(auStack_60[0]);
  (**(code **)(auStack_60[1] + 8))(lVar6);
  func_0x000107c615e8(auStack_60[0]);
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x00010207ff48(lVar6);
  }
  else {
    func_0x00010205f36c(lVar6,puVar5);
    uVar4 = *puVar5;
    if ((uVar4 == *(ulong *)(unaff_x20 + _DAT_112ecf7a0) &&
         puVar5[1] == ((ulong *)(unaff_x20 + _DAT_112ecf7a0))[1]) ||
       (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
      uVar4 = *(ulong *)((long)puVar5 + (long)*(int *)(lVar3 + 0x14) + 0x28);
      puVar1 = (ulong *)(*(long *)(unaff_x20 + _DAT_112ecf7a8) + _DAT_11308f130);
      if (uVar4 == *puVar1 &&
          *(ulong *)((long)puVar5 + (long)*(int *)(lVar3 + 0x14) + 0x30) == puVar1[1]) {
        func_0x00010207ff90(puVar5);
      }
      else {
        func_0x000107c605b8();
        func_0x00010207ff90(puVar5);
        if ((uVar4 & 1) == 0) {
          return 4;
        }
      }
      return 0x18;
    }
    func_0x00010207ff90(puVar5);
  }
  return 4;
}



/* Entry: 1029646e8; end: 102964747; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin init] */

void FUN_1029646e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProfileActionPlugins.ReportAdProfileActionPlugin",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102964714);
  (*pcVar1)();
}



/* Entry: 102964748; end: 1029647e3; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102964778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102964798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029647c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010296479c) */
/* WARNING: Removing unreachable block (ram,0x00010296477c) */
/* WARNING: Removing unreachable block (ram,0x0001029647cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964748(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ecf7a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf7a8));
  return;
}



/* Entry: 1029647e4; end: 102964803;  */

void FUN_1029647e4(void)

{
  func_0x000107c61168(&PTR_PTR_112873670);
  return;
}



/* Entry: 102964804; end: 102964807; -[_TtC22AdProfileActionPlugins27ReportAdProfileActionPlugin reportAdPageDidDismiss:] */

void FUN_102964804(void)

{
  return;
}



/* Entry: 102964808; end: 102964817; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102964808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ecf830);
}



/* Entry: 102964818; end: 102964827; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin setPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964818(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ecf830) = param_3;
  return;
}



/* Entry: 102964828; end: 102964837; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin prominentActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf838));
  return;
}



/* Entry: 102964838; end: 10296486b; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin setProminentActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf838);
  *(undefined8 *)(param_1 + _DAT_112ecf838) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10296486c; end: 10296487b; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin actionSheetCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296486c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecf840));
  return;
}



/* Entry: 10296487c; end: 102964903; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin setActionSheetCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296487c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf840);
  *(undefined8 *)(param_1 + _DAT_112ecf840) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102964904; end: 102964c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964904(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_c0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecf828);
  func_0x000107c4d060();
  func_0x000107c61180();
  puVar5 = &UNK_1105730c0;
  func_0x000107c613fc(&UNK_1105730c0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  puVar6 = &UNK_1105730e8;
  func_0x000107c613fc(&UNK_1105730e8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  puVar7 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102964ecc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_110573100;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar8);
  uStack_a0 = 0x102964ed4;
  puStack_c0 = puVar2;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_110573128;
  puStack_98 = puVar6;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c615f4(uVar4,2);
  func_0x000107c47be0(puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puStack_98);
  func_0x000107c61574(puStack_68);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ecf820);
  lVar18 = *(long *)(unaff_x20 + _DAT_112ecf810);
  uVar13 = *(ulong *)(lVar18 + _DAT_113815208);
  uVar14 = 0;
  if (uVar13 == 0) goto LAB_102964b34;
  uVar15 = uVar13 & 0xffffffffffffff8;
  if (uVar13 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar15 + 0x10);
  }
  else {
    uVar10 = uVar13;
    if (-1 < (long)uVar13) {
      uVar10 = uVar15;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102964c60);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(*(long *)(uVar13 + 0x20) + _DAT_11308f1f8);
      lVar16 = puVar1[1];
      if (lVar16 != 0) {
        uVar14 = *puVar1;
        func_0x000107c61434(lVar16);
LAB_102964ab8:
        func_0x000107c5fadc(uVar14,lVar16);
        func_0x000107c6142c(lVar16);
        goto LAB_102964b34;
      }
    }
    else {
      func_0x000107c61434(uVar13);
      lVar11 = 0;
      func_0x000100e471e4(0,uVar13);
      func_0x000107c6142c(uVar13);
      uVar14 = *(undefined8 *)(lVar11 + _DAT_11308f1f8);
      lVar16 = ((undefined8 *)(lVar11 + _DAT_11308f1f8))[1];
      func_0x000107c61434(lVar16);
      func_0x000107c615e8(lVar11);
      if (lVar16 != 0) goto LAB_102964ab8;
    }
  }
  uVar14 = 0;
LAB_102964b34:
  puVar1 = (undefined8 *)(lVar18 + _DAT_11308f140);
  lVar18 = puVar1[1];
  if (lVar18 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *puVar1;
    func_0x000107c61434(lVar18);
    func_0x000107c5fadc(uVar17,lVar18);
    func_0x000107c6142c(lVar18);
  }
  func_0x000107c3ed28(uVar12);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  lVar16 = *(long *)(unaff_x20 + _DAT_112ecf818);
  lVar18 = lVar16;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar18 == 0) {
    func_0x000107c42c1c(lVar16);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar12);
  }
  else {
    func_0x000107c4ffe8(lVar16);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(lVar18);
    func_0x000107c615e8(lVar16);
  }
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 102964c60; end: 102964caf;  */

void FUN_102964c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102964cb0; end: 102964d4f;  */

void FUN_102964cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110573150;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(param_3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102964d50; end: 102964daf; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin init] */

void FUN_102964d50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProfileActionPlugins.WhyAmISeeingThisAdProfileActionPlugin",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102964d7c);
  (*pcVar1)();
}



/* Entry: 102964db0; end: 102964e27; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102964dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102964dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102964e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102964df0) */
/* WARNING: Removing unreachable block (ram,0x000102964dd0) */
/* WARNING: Removing unreachable block (ram,0x000102964e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf810));
  return;
}



/* Entry: 102964e28; end: 102964e47;  */

void FUN_102964e28(void)

{
  func_0x000107c61168(&PTR_PTR_112873770);
  return;
}



/* Entry: 102964e48; end: 102964ecb; -[_TtC22AdProfileActionPlugins37WhyAmISeeingThisAdProfileActionPlugin adInfoScopeDidComplete:] */

/* WARNING: Possible PIC construction at 0x000102964e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102964ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102964e88) */
/* WARNING: Removing unreachable block (ram,0x000102964ea4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102964e48(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102964ecc; end: 102964f07;  */

void FUN_102964ecc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  func_0x000107c5677c();
  func_0x000107c3e2c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102964f08; end: 102965193;  */

void FUN_102964f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecf870,&UNK_10daf5ec0);
  puVar1 = &UNK_110573230;
  func_0x000107c613fc(&UNK_110573230,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_102965194,puVar1);
  return;
}



/* Entry: 102965194; end: 1029651cf;  */

void FUN_102965194(void)

{
  long unaff_x20;
  
  func_0x000102965054(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1029651d0; end: 102965757;  */

void FUN_1029651d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x10) = param_11;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_14;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  return;
}



/* Entry: 102965758; end: 10296587f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_102965758(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  code *pcVar7;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  puVar2 = &UNK_110573278;
  func_0x000107c613fc(&UNK_110573278,0x11,7);
  pbVar5 = puVar2 + 0x10;
  *pbVar5 = 0;
  func_0x000100083b20(alStack_68);
  uVar6 = *(undefined8 *)(alStack_68[0] + _DAT_112fcd700);
  func_0x000107c6157c(uVar6);
  func_0x000107c61170(alStack_68[0]);
  func_0x0001000d224c(alStack_68);
  func_0x000107c61574(uVar6);
  func_0x0001000a8868(alStack_68,plStack_50);
  plVar3 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  pcVar7 = *(code **)(*plVar3 + 0x60);
  func_0x000107c6157c(puVar2);
  pcVar4 = FUN_102965954;
  (*pcVar7)(FUN_102965954,puVar2);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(pcVar4);
  func_0x0001000834e4(alStack_68);
  func_0x000107c61428(pbVar5,alStack_68,0,0);
  bVar1 = *pbVar5;
  func_0x000107c61574(puVar2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 102965880; end: 102965923;  */

void FUN_102965880(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102965924; end: 102965933;  */

undefined1  [16] FUN_102965924(void)

{
  return ZEXT816(0x110573258);
}



/* Entry: 102965934; end: 102965953;  */

void FUN_102965934(void)

{
  func_0x000107c61168(&PTR_PTR_112ecf8b8);
  return;
}



/* Entry: 102965954; end: 1029659e3;  */

void FUN_102965954(char *param_1)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(bool *)(unaff_x20 + 0x10) = cVar1 == '\x01';
  return;
}



/* Entry: 1029659e4; end: 102965a33;  */

void FUN_1029659e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000102965284();
  func_0x000107c61574(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 102965a34; end: 102965a7b;  */

void FUN_102965a34(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000102965284();
  func_0x000107c61574(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102965a7c; end: 102965ac7;  */

void FUN_102965a7c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecf9a8,&UNK_10daf6040);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102965ac8,param_1);
  return;
}



/* Entry: 102965ac8; end: 102965b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102965ac8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1029662e0();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ecf9b0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 102965b30; end: 102965b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102965b30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf9b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102965b7c; end: 102965d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102965b7c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x0001048575f8();
  func_0x000107c61574(lVar1);
  puVar3 = &UNK_10daf6048;
  func_0x000107c614e0(&UNK_10daf6048);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102965d28);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_10296611c(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102965d24);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_102965e3c(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_102965e3c(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_102965d44;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_102965d44:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  return puVar6;
}



/* Entry: 102965d78; end: 102965d97;  */

void FUN_102965d78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 102965d98; end: 102965df7; -[_TtC32FriendActionPluginImplementation26FriendActionPluginProvider plugins] */

void FUN_102965d98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102965b7c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ecf9e0;
  func_0x0001000285a8(0x112ecf9e0,&UNK_10daf6100);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102965df8; end: 102965e2b;  */

void FUN_102965df8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102965e2c; end: 102965e3b; -[_TtC32FriendActionPluginImplementation26FriendActionPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102965e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecf9b0));
  return;
}



/* Entry: 102965e3c; end: 102965f63;  */

ulong FUN_102965e3c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102965f64);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102965f64(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102965f60);
      (*pcVar1)();
    }
    FUN_102965fe4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102965f64; end: 102965fe3;  */

undefined * FUN_102965f64(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102966108();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102965fe4; end: 102966107;  */

long FUN_102965fe4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102966104);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102966108);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ecf9e0;
        func_0x0001000285a8(0x112ecf9e0,&UNK_10daf6100);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ecf9e0;
      func_0x0001000285a8(0x112ecf9e0,&UNK_10daf6100);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102966100);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102966108; end: 10296611b;  */

void FUN_102966108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecf9e8 == (undefined *)0x0 || ((ulong)puRam0000000112ecf9e8 & 1) != 0) {
    puVar1 = &UNK_10e9326ca;
    func_0x000107c61518(&UNK_10e9326ca,0x24,0,0);
    puRam0000000112ecf9e8 = puVar1;
  }
  return;
}



/* Entry: 10296611c; end: 1029662cf;  */

ulong FUN_10296611c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102966204);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102966208);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ecf558;
    func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112ecf558;
    func_0x0001000285a8(0x112ecf558,&UNK_10daf5b80);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f0cf800);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029662d0);
  (*pcVar2)();
}



/* Entry: 1029662d0; end: 1029662df;  */

undefined1  [16] FUN_1029662d0(void)

{
  return ZEXT816(0x110573378);
}



/* Entry: 1029662e0; end: 1029662ff;  */

void FUN_1029662e0(void)

{
  func_0x000107c61168(&PTR_PTR_112873860);
  return;
}



/* Entry: 102966300; end: 10296636b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102966300(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100385f4c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ecf9f8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10296636c; end: 102966373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10296636c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100385f4c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ecf9f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102966374; end: 10296642b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102966374(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf9f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10296642c; end: 102966487; -[_TtC26FriendActionPluginRegistry33FriendActionPluginFactoryServices build:] */

void FUN_10296642c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001029663c0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102966488; end: 1029664e7; -[_TtC26FriendActionPluginRegistry33FriendActionPluginFactoryServices init] */

void FUN_102966488(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendActionPluginRegistry.FriendActionPluginFactoryServices",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029664b4);
  (*pcVar1)();
}



/* Entry: 1029664e8; end: 1029664f7;  */

undefined1  [16] FUN_1029664e8(void)

{
  return ZEXT816(0x110573420);
}



/* Entry: 1029664f8; end: 102966507; -[_TtC26FriendActionPluginRegistry33FriendActionPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029664f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecf9f8));
  return;
}



/* Entry: 102966508; end: 102966517;  */

undefined1  [16] FUN_102966508(void)

{
  return ZEXT816(0x110573440);
}



/* Entry: 102966518; end: 1029665db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102966518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecfa40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecfa48) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecfa50);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecfa58);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecfa60);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029665dc; end: 1029666ef; -[_TtC26FriendActionPluginRegistry23FriendActionPluginScope initWithContext:snapchatter:conversationId:saveableSnapMessageId:groupConversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029665dc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_6 == 0) {
    lVar6 = 0;
    lVar5 = param_2;
  }
  else {
    lVar6 = param_2;
    func_0x000107c5faec();
    lVar5 = lVar6;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112ecfa40) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ecfa48) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ecfa50);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112ecfa58);
  *plVar2 = param_6;
  plVar2[1] = lVar6;
  plVar2 = (long *)(param_1 + _DAT_112ecfa60);
  *plVar2 = param_7;
  plVar2[1] = lVar5;
  puVar3 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_70,puVar3);
  return;
}



/* Entry: 1029666f0; end: 10296674f; -[_TtC26FriendActionPluginRegistry23FriendActionPluginScope init] */

void FUN_1029666f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendActionPluginRegistry.FriendActionPluginScope",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10296671c);
  (*pcVar1)();
}



/* Entry: 102966750; end: 1029667c3; -[_TtC26FriendActionPluginRegistry23FriendActionPluginScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102966790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102966794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102966750(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecfa40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecfa48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ecfa50 + 8))
  ;
  return;
}



/* Entry: 1029667c4; end: 102966c7b;  */

/* WARNING: Possible PIC construction at 0x000102966a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102966c4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102966c40) */
/* WARNING: Removing unreachable block (ram,0x000102966c30) */
/* WARNING: Removing unreachable block (ram,0x000102966c20) */
/* WARNING: Removing unreachable block (ram,0x000102966c10) */
/* WARNING: Removing unreachable block (ram,0x000102966c00) */
/* WARNING: Removing unreachable block (ram,0x000102966bf0) */
/* WARNING: Removing unreachable block (ram,0x000102966be0) */
/* WARNING: Removing unreachable block (ram,0x000102966bd0) */
/* WARNING: Removing unreachable block (ram,0x000102966bc0) */
/* WARNING: Removing unreachable block (ram,0x000102966bb0) */
/* WARNING: Removing unreachable block (ram,0x000102966ba0) */
/* WARNING: Removing unreachable block (ram,0x000102966b90) */
/* WARNING: Removing unreachable block (ram,0x000102966b80) */
/* WARNING: Removing unreachable block (ram,0x000102966b70) */
/* WARNING: Removing unreachable block (ram,0x000102966b60) */
/* WARNING: Removing unreachable block (ram,0x000102966b50) */
/* WARNING: Removing unreachable block (ram,0x000102966b40) */
/* WARNING: Removing unreachable block (ram,0x000102966b30) */
/* WARNING: Removing unreachable block (ram,0x000102966b20) */
/* WARNING: Removing unreachable block (ram,0x000102966b10) */
/* WARNING: Removing unreachable block (ram,0x000102966b00) */
/* WARNING: Removing unreachable block (ram,0x000102966af0) */
/* WARNING: Removing unreachable block (ram,0x000102966ae0) */
/* WARNING: Removing unreachable block (ram,0x000102966ad0) */
/* WARNING: Removing unreachable block (ram,0x000102966ac0) */
/* WARNING: Removing unreachable block (ram,0x000102966ab0) */
/* WARNING: Removing unreachable block (ram,0x000102966aa0) */
/* WARNING: Removing unreachable block (ram,0x000102966a90) */
/* WARNING: Removing unreachable block (ram,0x000102966c50) */

void FUN_1029667c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110573568;
  func_0x000107c613fc(&UNK_110573568,0x1e8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  uVar2 = 0x112ecfa98;
  func_0x0001000285a8(0x112ecfa98,&UNK_10daf6278);
  func_0x000107c613fc();
  pcVar3 = FUN_1029674f8;
  func_0x0001000841fc(FUN_1029674f8,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf6240,0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102966c7c; end: 102966d27;  */

void FUN_102966c7c(void)

{
  long unaff_x20;
  
  FUN_1029667c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  return;
}



/* Entry: 102966d28; end: 102966d37;  */

undefined1  [16] FUN_102966d28(void)

{
  return ZEXT816(0x110573548);
}



/* Entry: 102966d38; end: 102967303;  */

void FUN_102966d38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 auStack_70 [2];
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112ecfaa0,&UNK_10daf6280);
  puVar1 = auStack_70;
  auStack_70[0] = uVar7;
  func_0x0001000838ec();
  uVar7 = param_3;
  FUN_1029720d8(param_3,param_4,puVar1,param_5,param_6,param_7);
  func_0x000100082720("FamilyCenterFriendProfileSectionBuilderServiceProvider",0x36,2);
  FUN_10296f6e8();
  func_0x000100082720("FriendProfileSectionScopedPlusGiftingScopeExposerServiceProvider",0x40,2);
  FUN_10296b1dc(param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                param_18,param_19,puVar1,param_20,param_21,param_22,param_23,param_24,param_25);
  func_0x000100082720("FriendProfileSnapProSectionBuilderServiceProvider",0x31,2);
  uVar2 = param_26;
  FUN_102977580(param_26,param_27,param_28,param_29,param_30,param_31,param_32,param_33,param_34,
                param_35,puVar1,param_36);
  func_0x000100082720("SCFriendProfileMapSectionBuilderServiceProvider",0x2f,2);
  FUN_10296e280(param_37,param_26,param_38,param_3,param_39,param_40,param_41,puVar1,param_20,
                param_42,param_43,param_44,param_45,param_6,param_46,param_47);
  func_0x000100082720("SCPlusFriendProfileUpsellSectionBuilderServiceProvider",0x36,2);
  uVar3 = param_11;
  FUN_102970110(param_11,param_3,param_8,puVar1,param_20,param_6);
  func_0x000100082720("SCPlusGiftingFriendProfileSectionBuilderServiceProvider",0x37,2);
  FUN_10296c6f8(param_48,param_3,param_49,puVar1,param_20,param_6);
  func_0x000100082720("SCPlusMerlinFriendProfileSectionBuilderServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ecfaa8,&UNK_10daf6288);
  puVar4 = &UNK_110573590;
  func_0x000107c613fc(&UNK_110573590,0xe8,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 **)(puVar4 + 0x20) = puVar1;
  *(undefined8 *)(puVar4 + 0x28) = param_6;
  *(undefined8 *)(puVar4 + 0x30) = param_51;
  *(undefined8 *)(puVar4 + 0x38) = param_3;
  *(undefined8 *)(puVar4 + 0x40) = param_4;
  *(undefined8 *)(puVar4 + 0x48) = param_59;
  *(undefined8 *)(puVar4 + 0x50) = param_36;
  *(undefined8 *)(puVar4 + 0x58) = param_50;
  *(undefined8 *)(puVar4 + 0x60) = param_21;
  *(undefined8 *)(puVar4 + 0x68) = param_53;
  *(undefined8 *)(puVar4 + 0x70) = param_52;
  *(undefined8 *)(puVar4 + 0x78) = param_60;
  *(undefined8 *)(puVar4 + 0x80) = param_61;
  *(undefined8 *)(puVar4 + 0x88) = param_48;
  *(undefined8 *)(puVar4 + 0x90) = param_56;
  *(undefined8 *)(puVar4 + 0x98) = param_57;
  *(undefined8 *)(puVar4 + 0xa0) = param_19;
  *(undefined8 *)(puVar4 + 0xa8) = param_11;
  *(undefined8 *)(puVar4 + 0xb0) = param_55;
  *(undefined8 *)(puVar4 + 0xb8) = param_54;
  *(undefined8 *)(puVar4 + 0xc0) = param_38;
  *(undefined8 *)(puVar4 + 200) = param_58;
  *(undefined8 *)(puVar4 + 0xd0) = uVar3;
  *(undefined8 *)(puVar4 + 0xd8) = param_9;
  *(undefined8 *)(puVar4 + 0xe0) = param_37;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_37);
  pcVar5 = FUN_102967608;
  func_0x0001000823a8(FUN_102967608,puVar4);
  func_0x000100082720("FriendProfileSectionPluginRegistryServiceProvider",0x31,2);
  pcVar6 = pcVar5;
  FUN_10297158c();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_37);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_48);
  func_0x000107c61574(pcVar5);
  func_0x000100082720("FriendProfileSectionPluginProviderEntryPointProvider",0x34,2);
  *param_1 = pcVar6;
  return;
}



/* Entry: 102967304; end: 1029674f7;  */

void FUN_102967304(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029674f8; end: 102967607;  */

void FUN_1029674f8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102966d38(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  return;
}



/* Entry: 102967608; end: 102967663;  */

void FUN_102967608(void)

{
  long unaff_x20;
  
  FUN_102967664(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102967664; end: 1029678d3;  */

/* WARNING: Possible PIC construction at 0x0001029677e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029677f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102967894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029678a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102967898) */
/* WARNING: Removing unreachable block (ram,0x000102967888) */
/* WARNING: Removing unreachable block (ram,0x000102967878) */
/* WARNING: Removing unreachable block (ram,0x000102967868) */
/* WARNING: Removing unreachable block (ram,0x000102967858) */
/* WARNING: Removing unreachable block (ram,0x000102967848) */
/* WARNING: Removing unreachable block (ram,0x000102967838) */
/* WARNING: Removing unreachable block (ram,0x000102967828) */
/* WARNING: Removing unreachable block (ram,0x000102967818) */
/* WARNING: Removing unreachable block (ram,0x000102967808) */
/* WARNING: Removing unreachable block (ram,0x0001029677f8) */
/* WARNING: Removing unreachable block (ram,0x0001029677e8) */
/* WARNING: Removing unreachable block (ram,0x0001029678a8) */

void FUN_102967664(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105735b8;
  func_0x000107c613fc(&UNK_1105735b8,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  uVar2 = 0x112ecfab0;
  func_0x0001000285a8(0x112ecfab0,&UNK_10daf6290);
  func_0x000107c613fc();
  pcVar3 = FUN_102967a74;
  func_0x0001000841fc(FUN_102967a74,puVar1,uVar2);
  func_0x000100084214("FriendProfileSectionPluginRegistryServiceProvider",0x31,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029678d4; end: 102967a73;  */

void FUN_1029678d4(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_102978480();
        pcVar2 = "SCFriendProfileMapSectionPluginProvider";
        uVar3 = 0x27;
        param_5 = param_4;
        goto LAB_102967a58;
      }
      FUN_1029725bc();
      pcVar2 = "FamilyCenterFriendProfileSectionPluginProvider";
    }
    else {
      if (bVar1 == 2) {
        FUN_1029693c0(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                      param_14,param_15,param_16,param_17);
        pcVar2 = "MutualFriendsProfileSectionPluginProvider";
        uVar3 = 0x29;
        goto LAB_102967a58;
      }
      FUN_10296e15c();
      pcVar2 = "SCPlusMerlinFriendProfileSectionPluginProvider";
      param_3 = param_18;
    }
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        FUN_10296ac80(param_5,param_19,param_13,param_20,param_21,param_22,param_8,param_23,param_24
                      ,param_25,param_12,param_11,param_26);
        pcVar2 = "SCAddFriendsQuickAddCarouselSectionPluginProvider";
        uVar3 = 0x31;
      }
      else {
        func_0x000102971468();
        pcVar2 = "SCPlusGiftingFriendProfileSectionPluginProvider";
        uVar3 = 0x2f;
        param_5 = param_27;
      }
      goto LAB_102967a58;
    }
    if (bVar1 == 6) {
      func_0x00010296bf78();
      pcVar2 = "FriendProfileSnapProSectionPluginProvider";
      uVar3 = 0x29;
      param_5 = param_28;
      goto LAB_102967a58;
    }
    FUN_10296f5c4();
    pcVar2 = "SCPlusFriendProfileUpsellSectionPluginProvider";
    param_3 = param_29;
  }
  uVar3 = 0x2e;
  param_5 = param_3;
LAB_102967a58:
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_5;
  return;
}



/* Entry: 102967a74; end: 102967adf;  */

void FUN_102967a74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1029678d4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 102967ae0; end: 102967b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102967ae0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecfb00;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecfb00);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ecfaf8);
    func_0x0001033939d0();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103393490();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102967b68; end: 102967b87; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102967b68(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ecfb08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102967b88; end: 102967b9b; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102967b88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ecfb08,param_3);
  return;
}



/* Entry: 102967b9c; end: 102967ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102967b9c(long param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        lVar1 = param_1 + _DAT_112ecfb08;
        func_0x000107c61618();
        if (lVar1 != 0) {
          puVar2 = PTR_PTR_1126b3530;
          func_0x000107c610f8(PTR_PTR_1126b3530);
          func_0x000107c4807c();
          lVar4 = *(long *)(param_1 + _DAT_112ecfad8);
          uVar3 = *(undefined8 *)(param_1 + _DAT_112ecfac8);
          func_0x000107c5fadc(uVar3,((undefined8 *)(param_1 + _DAT_112ecfac8))[1]);
          func_0x000107c3ed34(lVar4);
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112ecfad0));
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(puVar2);
          param_1 = lVar4;
        }
      }
      else {
        FUN_102967dc0(param_3);
      }
    }
    else if (param_2 == 2) {
      func_0x000102967fcc();
    }
    else {
      func_0x000102968224(param_3);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102967cec; end: 102967dbf; -[_TtC33MutualFriendsProfileSectionPlugin40MutualFriendsProfileSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_102967cec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_102968634(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  FUN_1029687a8(&uStack_50,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}


