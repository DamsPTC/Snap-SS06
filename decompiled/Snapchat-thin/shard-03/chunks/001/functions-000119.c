/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10256fff4; end: 10257001b; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellView initWithCoder:] */

void FUN_10256fff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102570538();
  return;
}



/* Entry: 10257001c; end: 10257009f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257001c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112ea6128;
  func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + _DAT_112ea6128));
  puVar2 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c46e04();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x00010256f5a0();
  func_0x000107c3d89c();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c14c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,0x4000000000000000,0xc000000000000000,0x4000000000000000,
             *(undefined8 *)(unaff_x20 + lVar1),PTR_s_sc_constrainToSuperviewEdgesWith_112630c78);
  return;
}



/* Entry: 1025700a0; end: 1025703a3;  */

/* WARNING: Possible PIC construction at 0x0001025700dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025701e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025702d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025702d8) */
/* WARNING: Removing unreachable block (ram,0x0001025702e4) */
/* WARNING: Removing unreachable block (ram,0x000102570298) */
/* WARNING: Removing unreachable block (ram,0x000102570244) */
/* WARNING: Removing unreachable block (ram,0x0001025701ec) */
/* WARNING: Removing unreachable block (ram,0x0001025700e0) */
/* WARNING: Removing unreachable block (ram,0x000102570100) */
/* WARNING: Removing unreachable block (ram,0x00010257034c) */
/* WARNING: Removing unreachable block (ram,0x000102570374) */

void FUN_1025700a0(undefined8 param_1)

{
  FUN_10256f4bc();
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025703a4; end: 1025703f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025703a4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112ea6168) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1025703f8; end: 102570443; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellView buttonTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x00010257042c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102570430) */

void FUN_1025703f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1025706bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102570444; end: 102570477;  */

void FUN_102570444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102570478; end: 102570517; -[_TtC39SCLocationSharingSettingsImplementation18LocationUpsellView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570478(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6120));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6128));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6138));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6140));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6148));
  FUN_10256e878(*(undefined8 *)(param_1 + _DAT_112ea6150),
                ((undefined8 *)(param_1 + _DAT_112ea6150))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea6158 + 8))
  ;
  return;
}



/* Entry: 102570518; end: 102570537;  */

void FUN_102570518(void)

{
  func_0x000107c61168(&PTR_PTR_11284e7b0);
  return;
}



/* Entry: 102570538; end: 1025706bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570538(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea6120) = 0;
  lVar2 = _DAT_112ea6128;
  puVar4 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6130) = 0;
  lVar2 = _DAT_112ea6138;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea6140;
  func_0x00010256f6e0();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112ea6148;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c5a050();
  func_0x000107c61174();
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar4);
  func_0x000107c5a100(puVar4);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6150);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea6158);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6160) = 3;
  *(undefined1 *)(unaff_x20 + _DAT_112ea6168) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/LocationUpsellView.swift",0x40,2,0x51
                      ,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1025706bc);
  (*pcVar3)();
}



/* Entry: 1025706bc; end: 1025707b3;  */

/* WARNING: Possible PIC construction at 0x000102570778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010257077c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025706bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ea6168) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112ea6168) = 1;
    pcVar4 = *(code **)(unaff_x20 + _DAT_112ea6150);
    if (pcVar4 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ea6150))[1];
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea6158);
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ea6158))[1];
      puVar3 = &UNK_110521238;
      func_0x000107c613fc(&UNK_110521238,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      FUN_10256e9b8(pcVar4,uVar5);
      func_0x000107c61434(uVar2);
      func_0x000107c6157c(puVar3);
      (*pcVar4)(uVar1,uVar2,FUN_1025707b4,puVar3);
      func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 1025707b4; end: 1025707bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025707b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112ea6168) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1025707bc; end: 102570aaf;  */

/* WARNING: Possible PIC construction at 0x0001025707fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010257085c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025708dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025708fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025709b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025709d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102570a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102570a24) */
/* WARNING: Removing unreachable block (ram,0x0001025709d8) */
/* WARNING: Removing unreachable block (ram,0x0001025709b8) */
/* WARNING: Removing unreachable block (ram,0x00010257096c) */
/* WARNING: Removing unreachable block (ram,0x00010257094c) */
/* WARNING: Removing unreachable block (ram,0x000102570900) */
/* WARNING: Removing unreachable block (ram,0x0001025708e0) */
/* WARNING: Removing unreachable block (ram,0x000102570860) */
/* WARNING: Removing unreachable block (ram,0x000102570800) */
/* WARNING: Removing unreachable block (ram,0x000102570a98) */
/* WARNING: Removing unreachable block (ram,0x000102570a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025707bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea61a0) = param_1;
  lVar1 = _DAT_112ea6198;
  lVar2 = unaff_x20 + _DAT_112ea6198;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61604(unaff_x20 + lVar1,param_2);
      func_0x000107c5a050(param_2);
      func_0x000107c40510();
      func_0x000107c61180();
      func_0x000107c3d89c();
    }
    else {
      func_0x000107c4ff34();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102570ab0; end: 102570b3f; -[_TtC39SCLocationSharingSettingsImplementation42MapMultiFriendArrivalNotificationsHostCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  func_0x000107c61614(param_5 + _DAT_112ea6198,0);
  *(undefined8 *)(param_5 + _DAT_112ea61a0) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102570b40; end: 102570bbf; -[_TtC39SCLocationSharingSettingsImplementation42MapMultiFriendArrivalNotificationsHostCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570b40(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112ea6198,0);
  *(undefined8 *)(param_1 + _DAT_112ea61a0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/MapMultiFriendArrivalNotificationsHostCell.swift"
                      ,0x58,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102570bc0);
  (*pcVar1)();
}



/* Entry: 102570bc0; end: 102570bd7; -[_TtC39SCLocationSharingSettingsImplementation42MapMultiFriendArrivalNotificationsHostCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570bc0(void)

{
  return;
}



/* Entry: 102570bd8; end: 102570c0b;  */

void FUN_102570bd8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102570c0c; end: 102570c1b; -[_TtC39SCLocationSharingSettingsImplementation42MapMultiFriendArrivalNotificationsHostCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102570c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ea6198);
  return;
}



/* Entry: 102570c1c; end: 102570c3b;  */

void FUN_102570c1c(void)

{
  func_0x000107c61168(&PTR_PTR_11284e8b0);
  return;
}



/* Entry: 102570c3c; end: 1025711c7;  */

void FUN_102570c3c(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [152];
  
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar12 = lVar4;
  FUN_102568bf4();
  if (param_2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar10 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    param_2 = lVar10;
  }
  func_0x000107c5405c(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar12 = lVar4;
  FUN_102568a48();
  lVar10 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e44(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  uVar2 = (uint)(*(byte *)(param_1 + 0x58) >> 4);
  if (((4 < uVar2) && (6 < uVar2)) && (1 < uVar2 - 7)) {
    lVar10 = *(long *)(param_1 + 0x10);
  }
  func_0x000107c52170(lVar4);
  func_0x000107c61170(lVar4);
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar10);
  func_0x000107c520f4();
  func_0x000107c61170(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x58) >> 4;
  func_0x000107c58dd8();
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  lVar12 = lVar4;
  func_0x000107c61534();
  *(undefined8 *)(lVar12 + 0x18) = 2;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar13 = (undefined8 *)(lVar12 + 0x20);
  *puVar13 = uVar11;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar7 = 0;
  func_0x000100f89a24();
  *(undefined8 *)(lVar12 + 0x40) = uVar7;
  *(undefined **)(lVar12 + 0x28) = puVar6;
  uVar9 = 0x112d48640;
  lVar10 = lVar12;
  FUN_10257160c(lVar12,0x112d48640,&UNK_10d910200,0x112d48398,&UNK_10d90f130);
  func_0x000107c61588(lVar12);
  func_0x000100ef0820();
  iVar3 = (int)puVar13;
  uVar14 = 0x3ff0000000000000;
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      bVar1 = *(byte *)(param_1 + 0x3a);
    }
    else {
      if (bVar1 != 2) goto LAB_102571044;
      bVar1 = *(byte *)(param_1 + 9);
    }
    if ((bVar1 & 1) == 0) goto LAB_102571044;
  }
  else if (((bVar1 != 3) && (bVar1 != 4)) || (((uint)uVar8 >> 8 & 1) == 0)) goto LAB_102571044;
  func_0x000107c61534(lVar4,auStack_108);
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = uVar11;
  func_0x000107c61174(uVar11);
  func_0x000107c5af88();
  func_0x000107c61180();
  *(undefined8 *)(lVar4 + 0x40) = uVar7;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  uVar9 = 0x112d48640;
  lVar12 = lVar4;
  FUN_10257160c(lVar4,0x112d48640,&UNK_10d910200,0x112d48398,&UNK_10d90f130);
  func_0x000107c61588(lVar4);
  func_0x000100ef0820((undefined8 *)(lVar4 + 0x20));
  func_0x000107c6142c();
  iVar3 = (int)lVar10;
  uVar14 = 0x3fe8000000000000;
  lVar10 = lVar12;
LAB_102571044:
  func_0x00010083f5a0();
  if (iVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5ce94();
    func_0x000107c61180();
    lVar12 = lVar4;
    func_0x000107c5d9c8();
    func_0x000107c61170(lVar4);
    if (lVar12 == 1) {
      lVar4 = unaff_x20;
      func_0x000107c3e5a0();
      func_0x000107c61180();
      lVar12 = lVar4;
      func_0x000107c3fdd0(uVar14);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c52b50();
      func_0x000107c61170(lVar12);
    }
  }
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  FUN_102568a48();
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(lVar4,uVar9);
  func_0x000107c6142c(uVar9);
  uVar8 = 0;
  func_0x000100eca28c(0);
  uVar9 = uVar8;
  func_0x000100ecbdec();
  lVar12 = lVar10;
  func_0x000107c5f9dc(lVar10,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c48af8(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c529c8(unaff_x20);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(lVar10);
  return;
}



/* Entry: 1025711c8; end: 10257122b; -[_TtC39SCLocationSharingSettingsImplementation20SIGCellWithViewModel systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

void FUN_1025711c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107c61154(param_1,0x7fefffffffffffff,0x447a0000,0x42480000,&uStack_40,
                      PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 10257122c; end: 1025712a3; -[_TtC39SCLocationSharingSettingsImplementation20SIGCellWithViewModel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257122c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112ea61d0) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1025712a4; end: 1025712f7;  */

void FUN_1025712a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025712f8; end: 10257131b;  */

void FUN_1025712f8(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [152];
  
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar12 = lVar4;
  FUN_102568bf4();
  if (param_2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar10 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    param_2 = lVar10;
  }
  func_0x000107c5405c(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar12 = lVar4;
  FUN_102568a48();
  lVar10 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e44(lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  lVar4 = unaff_x20;
  func_0x000107c5d200();
  func_0x000107c61180();
  uVar2 = (uint)(*(byte *)(param_1 + 0x58) >> 4);
  if (((4 < uVar2) && (6 < uVar2)) && (1 < uVar2 - 7)) {
    lVar10 = *(long *)(param_1 + 0x10);
  }
  func_0x000107c52170(lVar4);
  func_0x000107c61170(lVar4);
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar10);
  func_0x000107c520f4();
  func_0x000107c61170(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x58) >> 4;
  func_0x000107c58dd8();
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  lVar12 = lVar4;
  func_0x000107c61534();
  *(undefined8 *)(lVar12 + 0x18) = 2;
  *(undefined8 *)(lVar12 + 0x10) = 1;
  uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar13 = (undefined8 *)(lVar12 + 0x20);
  *puVar13 = uVar11;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar7 = 0;
  func_0x000100f89a24();
  *(undefined8 *)(lVar12 + 0x40) = uVar7;
  *(undefined **)(lVar12 + 0x28) = puVar6;
  uVar9 = 0x112d48640;
  lVar10 = lVar12;
  FUN_10257160c(lVar12,0x112d48640,&UNK_10d910200,0x112d48398,&UNK_10d90f130);
  func_0x000107c61588(lVar12);
  func_0x000100ef0820();
  iVar3 = (int)puVar13;
  uVar14 = 0x3ff0000000000000;
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      bVar1 = *(byte *)(param_1 + 0x3a);
    }
    else {
      if (bVar1 != 2) goto LAB_102571044;
      bVar1 = *(byte *)(param_1 + 9);
    }
    if ((bVar1 & 1) == 0) goto LAB_102571044;
  }
  else if (((bVar1 != 3) && (bVar1 != 4)) || (((uint)uVar8 >> 8 & 1) == 0)) goto LAB_102571044;
  func_0x000107c61534(lVar4,auStack_108);
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = uVar11;
  func_0x000107c61174(uVar11);
  func_0x000107c5af88();
  func_0x000107c61180();
  *(undefined8 *)(lVar4 + 0x40) = uVar7;
  *(undefined **)(lVar4 + 0x28) = puVar5;
  uVar9 = 0x112d48640;
  lVar12 = lVar4;
  FUN_10257160c(lVar4,0x112d48640,&UNK_10d910200,0x112d48398,&UNK_10d90f130);
  func_0x000107c61588(lVar4);
  func_0x000100ef0820((undefined8 *)(lVar4 + 0x20));
  func_0x000107c6142c();
  iVar3 = (int)lVar10;
  uVar14 = 0x3fe8000000000000;
  lVar10 = lVar12;
LAB_102571044:
  func_0x00010083f5a0();
  if (iVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c5ce94();
    func_0x000107c61180();
    lVar12 = lVar4;
    func_0x000107c5d9c8();
    func_0x000107c61170(lVar4);
    if (lVar12 == 1) {
      lVar4 = unaff_x20;
      func_0x000107c3e5a0();
      func_0x000107c61180();
      lVar12 = lVar4;
      func_0x000107c3fdd0(uVar14);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c52b50();
      func_0x000107c61170(lVar12);
    }
  }
  func_0x000107c5d200();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  FUN_102568a48();
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(lVar4,uVar9);
  func_0x000107c6142c(uVar9);
  uVar8 = 0;
  func_0x000100eca28c(0);
  uVar9 = uVar8;
  func_0x000100ecbdec();
  lVar12 = lVar10;
  func_0x000107c5f9dc(lVar10,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c48af8(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c529c8(unaff_x20);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(puVar5);
  func_0x000107c6142c(lVar10);
  return;
}



/* Entry: 10257131c; end: 1025713a7;  */

void FUN_10257131c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar3);
  puVar2 = auStack_88;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  FUN_1025713e4(param_1,puVar2);
  return;
}



/* Entry: 1025713a8; end: 1025713e3;  */

void FUN_1025713a8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_3 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8) = param_2;
  if (!SCARRY8(*(long *)(param_3 + 0x10),1)) {
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1025713e4);
  (*pcVar2)();
}



/* Entry: 1025713e4; end: 1025714db;  */

undefined1  [16] FUN_1025713e4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_1025714bc;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_1025714bc:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1025714dc; end: 102571507;  */

void FUN_1025714dc(void)

{
  return;
}



/* Entry: 102571508; end: 10257154b;  */

void FUN_102571508(void)

{
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 10257154c; end: 10257160b;  */

undefined * FUN_10257154c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112ea5ad0);
    puVar2 = puVar6;
    func_0x000107c60498();
    puVar3 = puVar2;
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar8 = *puVar7;
      FUN_102571508();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102571608);
        (*pcVar1)();
      }
      uVar5 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) =
           *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10257160c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (puVar6 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 10257160c; end: 10257171f;  */

undefined *
FUN_10257160c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar3 = puVar7;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      puVar5 = &uStack_88;
      FUN_102571720(param_1,puVar5,param_4,param_5);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_10257131c();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10257171c);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102571720);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 102571720; end: 102571767;  */

undefined8 FUN_102571720(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102571768; end: 1025717f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102571768(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea6278;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea6278);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d5f68;
    func_0x000107c610f8();
    func_0x000107c4610c();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1025717f4; end: 102571b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1025717f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea6278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea6280) = 0;
  uVar2 = 0;
  FUN_1025736f0();
  func_0x000107c610f8();
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112ea6270) = uVar2;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_102571768();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  lVar1 = _DAT_112ea6278;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112ea6278);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 102571ba0; end: 102571bbf; -[_TtC39SCLocationSharingSettingsImplementation10SwitchCell initWithFrame:] */

void FUN_102571ba0(void)

{
  FUN_1025717f4();
  return;
}



/* Entry: 102571bc0; end: 102571c2f; -[_TtC39SCLocationSharingSettingsImplementation10SwitchCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102571bc0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea6278) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea6280) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/SwitchCell.swift",0x38,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102571c30);
  (*pcVar1)();
}



/* Entry: 102571c30; end: 102571c83; -[_TtC39SCLocationSharingSettingsImplementation10SwitchCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

undefined1  [16] FUN_102571c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_102572110(param_1,param_2);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 102571c84; end: 102571d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102571c84(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_prepareForReuse_112620008);
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea6270);
  func_0x000107c5528c(*(undefined8 *)(lVar4 + _DAT_112ea62b8));
  func_0x000107c59c6c(*(undefined8 *)(lVar4 + _DAT_112ea6300));
  func_0x000107c59c6c(*(undefined8 *)(lVar4 + _DAT_112ea6308));
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ea62e8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000102572100(uVar3,uVar2);
  FUN_1025721c0();
  func_0x000107c56c28();
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102571d4c; end: 102571d73; -[_TtC39SCLocationSharingSettingsImplementation10SwitchCell prepareForReuse] */

void FUN_102571d4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102571c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102571d74; end: 102571eef;  */

/* WARNING: Possible PIC construction at 0x000102571db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102571e0c) */
/* WARNING: Removing unreachable block (ram,0x000102571dbc) */
/* WARNING: Removing unreachable block (ram,0x000102571dcc) */
/* WARNING: Removing unreachable block (ram,0x000102571e1c) */
/* WARNING: Removing unreachable block (ram,0x000102571e74) */
/* WARNING: Removing unreachable block (ram,0x000102571e44) */
/* WARNING: Removing unreachable block (ram,0x000102571e84) */
/* WARNING: Removing unreachable block (ram,0x000102571e90) */
/* WARNING: Removing unreachable block (ram,0x000102571e98) */
/* WARNING: Removing unreachable block (ram,0x000102571e54) */
/* WARNING: Removing unreachable block (ram,0x000102571ee0) */
/* WARNING: Removing unreachable block (ram,0x000102571eec) */
/* WARNING: Removing unreachable block (ram,0x000102571e5c) */
/* WARNING: Removing unreachable block (ram,0x000102571e64) */
/* WARNING: Removing unreachable block (ram,0x000102571ea0) */
/* WARNING: Removing unreachable block (ram,0x000102571e70) */
/* WARNING: Removing unreachable block (ram,0x000102571ea4) */
/* WARNING: Removing unreachable block (ram,0x000102571dd4) */
/* WARNING: Removing unreachable block (ram,0x000102571ecc) */

void FUN_102571d74(undefined8 param_1,undefined8 param_2)

{
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102571ef0; end: 10257201f;  */

/* WARNING: Possible PIC construction at 0x000102571f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102571f70) */
/* WARNING: Removing unreachable block (ram,0x000102571f4c) */
/* WARNING: Removing unreachable block (ram,0x000102571f20) */
/* WARNING: Removing unreachable block (ram,0x000102571ffc) */

void FUN_102571ef0(undefined8 param_1)

{
  FUN_102571768();
  func_0x000107c59034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102572020; end: 102572053;  */

void FUN_102572020(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102572054; end: 10257208b; -[_TtC39SCLocationSharingSettingsImplementation10SwitchCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102572070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102572074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102572054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea6270));
  return;
}



/* Entry: 10257208c; end: 1025720ab;  */

void FUN_10257208c(void)

{
  func_0x000107c61168(&PTR_PTR_11284e9b8);
  return;
}



/* Entry: 1025720ac; end: 1025720af;  */

/* WARNING: Possible PIC construction at 0x000102571db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102571ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102571e0c) */
/* WARNING: Removing unreachable block (ram,0x000102571dbc) */
/* WARNING: Removing unreachable block (ram,0x000102571dcc) */
/* WARNING: Removing unreachable block (ram,0x000102571e1c) */
/* WARNING: Removing unreachable block (ram,0x000102571e74) */
/* WARNING: Removing unreachable block (ram,0x000102571e44) */
/* WARNING: Removing unreachable block (ram,0x000102571e84) */
/* WARNING: Removing unreachable block (ram,0x000102571e90) */
/* WARNING: Removing unreachable block (ram,0x000102571e98) */
/* WARNING: Removing unreachable block (ram,0x000102571e54) */
/* WARNING: Removing unreachable block (ram,0x000102571ee0) */
/* WARNING: Removing unreachable block (ram,0x000102571eec) */
/* WARNING: Removing unreachable block (ram,0x000102571e5c) */
/* WARNING: Removing unreachable block (ram,0x000102571e64) */
/* WARNING: Removing unreachable block (ram,0x000102571ea0) */
/* WARNING: Removing unreachable block (ram,0x000102571e70) */
/* WARNING: Removing unreachable block (ram,0x000102571ea4) */
/* WARNING: Removing unreachable block (ram,0x000102571dd4) */
/* WARNING: Removing unreachable block (ram,0x000102571ecc) */

void FUN_1025720ac(undefined8 param_1,undefined8 param_2)

{
  FUN_102568cdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025720b0; end: 1025720ef;  */

void FUN_1025720b0(undefined8 param_1)

{
  FUN_102571768();
  func_0x000107c59a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025720f0; end: 10257210f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025720f0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea6280) = param_1;
  return;
}



/* Entry: 102572110; end: 1025721bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102572110(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  FUN_102571768();
  dVar3 = 1.79769313486232e+308;
  func_0x000107c5c614(param_1,0x7fefffffffffffff,0x447a0000,0x42480000);
  dVar2 = param_1;
  func_0x000107c61170(param_2);
  puVar1 = PTR_PTR_1126b2780;
  func_0x000107c61168(PTR_PTR_1126b2780);
  func_0x000107c5c224(*(undefined8 *)(unaff_x20 + _DAT_112ea6278));
  func_0x000107c44da8(puVar1);
  if (dVar2 < dVar3) {
    dVar2 = dVar3;
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1025721c0; end: 102572253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025721c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea62e0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea62e0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c3d8b8(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102572254; end: 1025724f3;  */

/* WARNING: Possible PIC construction at 0x0001025724bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025724c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102572254(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar4 = _DAT_112ea62b8;
  lVar1 = *(long *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea62b8);
  func_0x000107c4ff34(uVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea6308);
  FUN_102568bf4();
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    param_2 = lVar8;
  }
  func_0x000107c59c6c(uVar10);
  func_0x000107c61170(uVar5);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea6300);
  FUN_102568a48();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar11);
  func_0x000107c61170(uVar5);
  if ((*(byte *)(param_1 + 0x58) & 0xf0) == 0x10) {
    uVar9 = 0x100;
    if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
      uVar9 = 0;
    }
    FUN_10257340c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  uVar9 | *(byte *)(param_1 + 0x38) & 1,uVar12 >> 0x10 & 1,0xd000000000000011,
                  0x800000010f0a9f80);
    func_0x000107c61434(lVar1);
    func_0x000107c61174(uVar13);
    puVar6 = PTR_PTR_1126b0648;
    func_0x000107c610f8();
    func_0x000107c46e04();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined **)(unaff_x20 + lVar4) = puVar6;
    func_0x000107c61170(uVar5);
    FUN_1025724f4();
    func_0x000107c3d89c();
    func_0x000107c61170(uVar5);
    func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar4));
    func_0x0001025730f8(lVar1 != 0);
    func_0x000107c61170(uVar13);
    func_0x000107c6142c(lVar1);
    if (((uint)uVar12 >> 0x10 & 1) == 0) {
LAB_10257243c:
      uVar13 = 0x3ff0000000000000;
      goto LAB_102572448;
    }
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x58) >> 4;
    if (bVar3 < 3) {
      if (bVar3 == 1) {
        bVar2 = *(byte *)(param_1 + 0x3a);
      }
      else {
        if (bVar3 != 2) goto LAB_10257243c;
        bVar2 = *(byte *)(param_1 + 9);
      }
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x19);
      if ((bVar3 != 3) && (bVar3 != 4)) goto LAB_10257243c;
    }
    if ((bVar2 & 1) == 0) goto LAB_10257243c;
  }
  uVar13 = 0x3fe0000000000000;
LAB_102572448:
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar7 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar11);
  func_0x000107c61170(puVar7);
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c59c78(uVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c526c0(uVar13,*(undefined8 *)(unaff_x20 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar11,PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 1025724f4; end: 102572553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025724f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea62f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea62f0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_102572554();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102572554; end: 102572793;  */

undefined * FUN_102572554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(0,0,0x404c000000000000,0x404c000000000000);
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c53840(puVar1,param_2,1);
  func_0x000107c52ab4(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x403c000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 102572794; end: 1025729d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102572794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea62b0) = 0x4000000000000000;
  lVar2 = _DAT_112ea62b8;
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea62c0;
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea62c8;
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea62d0;
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea62d8;
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea62e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea62e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea62f0) = 0;
  lVar2 = _DAT_112ea62f8;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112ea6300;
  func_0x000102572634();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea6308;
  func_0x0001025726e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_1025724f4();
  lVar2 = _DAT_112ea62b8;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar6);
  func_0x000107c5a050(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c3d89c(puVar5);
  lVar2 = _DAT_112ea62f8;
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + _DAT_112ea62f8));
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + lVar2));
  puVar6 = puVar5;
  func_0x000107c3d89c(puVar5);
  FUN_1025721c0();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar6);
  FUN_1025729d4();
  func_0x0001025730f8(0);
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 1025729d4; end: 1025733c3;  */

/* WARNING: Possible PIC construction at 0x000102572a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102572ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102573044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102573098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102573048) */
/* WARNING: Removing unreachable block (ram,0x000102572ff8) */
/* WARNING: Removing unreachable block (ram,0x000102572fac) */
/* WARNING: Removing unreachable block (ram,0x000102572f58) */
/* WARNING: Removing unreachable block (ram,0x000102572f04) */
/* WARNING: Removing unreachable block (ram,0x000102572eb0) */
/* WARNING: Removing unreachable block (ram,0x000102572e50) */
/* WARNING: Removing unreachable block (ram,0x000102572dfc) */
/* WARNING: Removing unreachable block (ram,0x000102572da8) */
/* WARNING: Removing unreachable block (ram,0x000102572d48) */
/* WARNING: Removing unreachable block (ram,0x000102572cf0) */
/* WARNING: Removing unreachable block (ram,0x000102572c98) */
/* WARNING: Removing unreachable block (ram,0x000102572c44) */
/* WARNING: Removing unreachable block (ram,0x000102572c20) */
/* WARNING: Removing unreachable block (ram,0x000102572be0) */
/* WARNING: Removing unreachable block (ram,0x000102572b84) */
/* WARNING: Removing unreachable block (ram,0x000102572b50) */
/* WARNING: Removing unreachable block (ram,0x000102572b0c) */
/* WARNING: Removing unreachable block (ram,0x000102572ab0) */
/* WARNING: Removing unreachable block (ram,0x000102572a78) */
/* WARNING: Removing unreachable block (ram,0x00010257309c) */

void FUN_1025729d4(void)

{
  undefined *puVar1;
  
  func_0x000100029b9c(2,0x1a,0,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(0xc036000000000000,0xc030000000000000);
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0x27;
  *(undefined8 *)(puVar1 + 0x10) = 0x13;
  FUN_1025724f4();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1025733c4; end: 1025733e3; -[_TtC39SCLocationSharingSettingsImplementation10SwitchView initWithFrame:] */

void FUN_1025733c4(void)

{
  FUN_102572794();
  return;
}



/* Entry: 1025733e4; end: 10257340b; -[_TtC39SCLocationSharingSettingsImplementation10SwitchView initWithCoder:] */

void FUN_1025733e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102573720();
  return;
}



/* Entry: 10257340c; end: 10257354f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257340c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c61434(param_6);
  func_0x000107c5fb78(0x6e6f5f,0xe300000000000000);
  func_0x000107c61434(param_6);
  uVar4 = 0x66666f5f;
  func_0x000107c5fb78(0x66666f5f,0xe400000000000000);
  FUN_1025721c0();
  func_0x000107c6142c(param_6);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c6142c(param_6);
  func_0x000107c520f4(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_5);
  lVar3 = _DAT_112ea62e0;
  func_0x000107c56c28(*(undefined8 *)(unaff_x20 + _DAT_112ea62e0));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea62e8);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c6157c(param_2);
  func_0x000102572100(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + lVar3),PTR_s_setUserInteractionEnabled__112665468,
             (param_4 ^ 1) & 1);
  return;
}



/* Entry: 102573550; end: 1025735ef; -[_TtC39SCLocationSharingSettingsImplementation10SwitchView onSwitchChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102573550(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ea62e8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112ea62e8))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102573710(pcVar1,uVar2);
  (*pcVar1)(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1025735f0; end: 102573623;  */

void FUN_1025735f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102573624; end: 1025736ef; -[_TtC39SCLocationSharingSettingsImplementation10SwitchView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102573640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102573660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102573680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025736b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025736d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025736b8) */
/* WARNING: Removing unreachable block (ram,0x000102573684) */
/* WARNING: Removing unreachable block (ram,0x000102573664) */
/* WARNING: Removing unreachable block (ram,0x000102573644) */
/* WARNING: Removing unreachable block (ram,0x0001025736d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102573624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea62b8));
  return;
}



/* Entry: 1025736f0; end: 10257370f;  */

void FUN_1025736f0(void)

{
  func_0x000107c61168(&PTR_PTR_11284ea80);
  return;
}



/* Entry: 102573710; end: 10257371f;  */

void FUN_102573710(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102573720; end: 10257388f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102573720(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea62b0) = 0x4000000000000000;
  lVar2 = _DAT_112ea62b8;
  puVar4 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea62c0;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea62c8;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea62d0;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea62d8;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea62e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ea62e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea62f0) = 0;
  lVar2 = _DAT_112ea62f8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112ea6300;
  func_0x000102572634();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112ea6308;
  func_0x0001025726e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLocationSharingSettingsImplementation/SwitchView.swift",0x38,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102573890);
  (*pcVar3)();
}



/* Entry: 102573890; end: 10257395b; -[_TtC39SCLocationSharingSettingsImplementation12ViewMoreCell initWithFrame:] */

undefined1 *
FUN_102573890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  puVar3 = (undefined1 *)puVar2;
  func_0x000107c5d200();
  func_0x000107c61180();
  func_0x000107c59c9c();
  func_0x000107c61170(puVar3);
  puVar3 = (undefined1 *)puVar2;
  func_0x000107c5d200(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c532d8(puVar3);
  func_0x000107c61170(puVar3);
  return (undefined1 *)puVar2;
}



/* Entry: 10257395c; end: 1025739bf; -[_TtC39SCLocationSharingSettingsImplementation12ViewMoreCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

void FUN_10257395c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107c61154(param_1,0x7fefffffffffffff,0x447a0000,0x42480000,&uStack_40,
                      PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 1025739c0; end: 102573a13;  */

void FUN_1025739c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102573a14; end: 102574a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102573a14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long *plVar20;
  long *plVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar29;
  long unaff_x20;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  code *pcVar34;
  double dVar35;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  code *pcStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar5 = 0;
  func_0x000107c5ef64();
  lStack_190 = *(long *)(lVar5 + -8);
  lStack_188 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_190 + 0x40));
  lVar27 = (long)&lStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d373d8;
  lStack_198 = lVar27;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar27 = lVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_170 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar27 - extraout_x12;
  lVar6 = 0;
  lStack_168 = lVar27;
  func_0x000107c5eea4();
  lVar33 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar33 + 0x40));
  lVar27 = lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_1a0 = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = lVar27 - extraout_x12_00;
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112ea64d8);
  lVar7 = 0;
  func_0x000102569ffc();
  func_0x000107c613fc();
  dVar35 = 0.0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0x4054000000000000;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  uStack_148 = *(undefined8 *)(unaff_x20 + _DAT_112ea6430);
  *(undefined8 *)(lVar7 + 0x10) = uVar30;
  lVar22 = *(long *)(unaff_x20 + _DAT_112ea6418);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea6408);
  uVar32 = ((undefined8 *)(unaff_x20 + _DAT_112ea6408))[1];
  uStack_130 = *(undefined8 *)(unaff_x20 + _DAT_112ea6410);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112ea6440);
  func_0x000107c6157c(uVar30);
  FUN_102576480();
  uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112ea6448);
  uStack_140 = *(undefined8 *)(unaff_x20 + _DAT_112ea6458);
  uStack_138 = *(undefined8 *)(unaff_x20 + _DAT_112ea6438);
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112ea6478);
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112ea64a8);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112ea64a0);
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112ea64b8);
  uVar25 = *(undefined8 *)(unaff_x20 + _DAT_112ea64c0);
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_112ea64d0);
  lVar8 = 0;
  puStack_150 = (undefined *)uVar31;
  FUN_10255fe8c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar5 = lVar9 + _DAT_112ea5640;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined8 *)(lVar9 + _DAT_112ea5648) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ea5650) = 0;
  *(undefined1 *)(lVar9 + _DAT_112ea5658) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112ea5660);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar9 + _DAT_112ea5670) = 1;
  lVar5 = _DAT_112ea5678;
  func_0x000107c6157c(lVar7);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100ff358c();
  *(undefined **)(lVar9 + lVar5) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112ea5680) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ea5688) = 0;
  lVar5 = _DAT_112ea5690;
  func_0x000107c61614(lVar9 + _DAT_112ea5690,0);
  lVar11 = _DAT_112ea5700;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar11) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112ea5720) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ea5728) = 0;
  lVar11 = _DAT_112ea5730;
  func_0x000107c5eea0(lVar27);
  func_0x000107c5ee8c();
  pcVar34 = *(code **)(lVar33 + 8);
  lStack_178 = lVar33;
  lStack_160 = lVar6;
  (*pcVar34)(lVar27,lVar6);
  dVar35 = dVar35 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar35)) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x102574a30);
    (*pcVar34)();
  }
  if (dVar35 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x102574a34);
    (*pcVar34)();
  }
  if (9.223372036854776e+18 <= dVar35) {
                    /* WARNING: Does not return */
    pcVar34 = (code *)SoftwareBreakpoint(1,0x102574a38);
    (*pcVar34)();
  }
  *(long *)(lVar9 + lVar11) = (long)dVar35;
  pcStack_180 = pcVar34;
  lStack_158 = lVar8;
  func_0x000107c61604(lVar9 + lVar5,param_1);
  uVar4 = uStack_130;
  uVar3 = uStack_138;
  uVar2 = uStack_140;
  uVar31 = uStack_148;
  *(undefined8 *)(lVar9 + _DAT_112ea5698) = uStack_148;
  *(long *)(lVar9 + _DAT_112ea56a0) = lVar22;
  puVar1 = (undefined8 *)(lVar9 + _DAT_112ea56a8);
  *puVar1 = uVar13;
  puVar1[1] = uVar32;
  *(undefined8 *)(lVar9 + _DAT_112ea56b0) = uStack_130;
  *(undefined **)(lVar9 + _DAT_112ea56b8) = puStack_150;
  *(undefined8 *)(lVar9 + _DAT_112ea56c0) = uVar29;
  *(undefined8 *)(lVar9 + _DAT_112ea56c8) = uStack_140;
  *(undefined8 *)(lVar9 + _DAT_112ea56d0) = uStack_138;
  *(undefined8 *)(lVar9 + _DAT_112ea56d8) = uVar30;
  *(undefined8 *)(lVar9 + _DAT_112ea56e0) = uVar28;
  *(undefined8 *)(lVar9 + _DAT_112ea5708) = uVar23;
  *(undefined8 *)(lVar9 + _DAT_112ea5718) = uVar24;
  *(undefined8 *)(lVar9 + _DAT_112ea56e8) = uVar25;
  *(undefined8 *)(lVar9 + _DAT_112ea56f0) = uVar26;
  *(long *)(lVar9 + _DAT_112ea56f8) = lVar7;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  puStack_150 = puVar10;
  func_0x000107c6157c(lVar7);
  func_0x000107c615f0(uVar31);
  func_0x000107c615f0(lVar22);
  func_0x000107c61434(uVar32);
  func_0x000107c615f0(uVar4);
  func_0x000107c61174(uVar29);
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar3);
  func_0x000107c615f0(uVar30);
  func_0x000107c615f0(uVar28);
  func_0x000107c615f0(uVar23);
  func_0x000107c61174(uVar24);
  func_0x000107c6157c(uVar25);
  func_0x000107c615f0(uVar26);
  puVar10 = puStack_150;
  func_0x000107c453e4();
  *(undefined **)(lVar9 + _DAT_112ea5710) = puVar10;
  lVar5 = lVar22;
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (lVar5 == 0) {
    uVar24 = 8;
  }
  else {
    lVar11 = lVar5;
    func_0x000107c443c8();
    if ((int)lVar11 == 0) {
      func_0x000107c61170(lVar5);
      uVar24 = 8;
    }
    else {
      lVar11 = lVar22;
      func_0x000107c4ec80();
      func_0x000107c61180();
      if (lVar11 == 0) {
        func_0x000107c61170(lVar5);
      }
      else {
        lVar6 = lVar11;
        func_0x000107c443d0();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        lVar11 = lStack_170;
        if (lVar6 != 0) {
          func_0x000107c5ee94(lStack_170,lVar6);
          func_0x000107c61170(lVar6);
        }
        lVar33 = lStack_160;
        lVar27 = lStack_168;
        lVar8 = lStack_178;
        (**(code **)(lStack_178 + 0x38))(lVar11,lVar6 == 0,1,lStack_160);
        func_0x0001003a4c00(lVar11,lVar27);
        lVar11 = lVar27;
        (**(code **)(lVar8 + 0x30))(lVar27,1,lVar33);
        if ((int)lVar11 != 1) {
          func_0x000107c5ee84();
          (*pcStack_180)(lVar27,lVar33);
          lVar11 = lStack_1a0;
          func_0x000107c5ee80(lStack_1a0,dVar35);
          lVar6 = lStack_198;
          func_0x000107c5ef54(lStack_198);
          lVar8 = lVar11;
          func_0x000107c5ef34();
          func_0x000107c61170(lVar5);
          (**(code **)(lStack_190 + 8))(lVar6,lStack_188);
          (*pcStack_180)(lVar11,lVar33);
          uVar24 = 8;
          if (((uint)lVar8 & (uint)(10800.0 < dVar35)) == 0) {
            uVar24 = 2;
          }
          goto LAB_1025741f0;
        }
        func_0x000107c61170(lVar5);
        func_0x0001000d1dcc(lVar27);
      }
      uVar24 = 8;
    }
  }
LAB_1025741f0:
  *(undefined8 *)(lVar9 + _DAT_112ea5668) = uVar24;
  lStack_80 = lStack_158;
  plVar12 = &lStack_88;
  lStack_88 = lVar9;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5fadc(uVar13,uVar32);
  uVar32 = uVar31;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)((long)plVar12 + _DAT_112ea5650);
  *(undefined8 *)((long)plVar12 + _DAT_112ea5650) = uVar32;
  func_0x000107c61170(uVar13);
  func_0x000107c43af4(uVar31);
  func_0x000107c61180();
  puVar10 = &UNK_110521368;
  puVar14 = puVar10;
  func_0x000107c613fc(&UNK_110521368,0x18,7);
  func_0x000107c61614(puVar14 + 0x10,plVar12);
  puVar19 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_98 = FUN_102576804;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_101114e94;
  puStack_a0 = &UNK_110521380;
  ppuVar15 = &puStack_b8;
  puStack_90 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61574(puStack_90);
  uVar13 = uVar31;
  func_0x000107c5c320(uVar31);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c3e924(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c4e640(uVar30);
  func_0x000107c61180();
  puVar14 = puVar10;
  func_0x000107c613fc(&UNK_110521368,0x18,7);
  func_0x000107c61614(puVar14 + 0x10,plVar12);
  pcStack_98 = (code *)0x10257680c;
  puStack_b8 = puVar19;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10103b94c;
  puStack_a0 = &UNK_1105213a8;
  ppuVar15 = &puStack_b8;
  puStack_90 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61574(puStack_90);
  uVar13 = uVar30;
  func_0x000107c5c320(uVar30);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(uVar30);
  func_0x000107c3e924(uVar13);
  func_0x000107c61170(uVar13);
  puVar14 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar16 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puVar17 = puVar16;
  FUN_10256e900();
  func_0x000107c613fc();
  *(undefined8 *)(puVar17 + 0x18) = 5;
  *(undefined8 *)(puVar17 + 0x10) = 2;
  lVar5 = lVar22;
  func_0x000107c4ec98();
  func_0x000107c61180();
  *(long *)(puVar17 + 0x20) = lVar5;
  func_0x000107c4ec88();
  func_0x000107c61180();
  *(long *)(puVar17 + 0x28) = lVar22;
  uVar13 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar18 = puVar17;
  func_0x000107c5fc48(puVar17,uVar13);
  func_0x000107c61574(puVar17);
  func_0x000107c4cd50(puVar16);
  func_0x000107c61180();
  func_0x000107c61170(puVar18);
  puVar17 = puVar16;
  func_0x000107c421ac(puVar16);
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  puVar16 = puVar10;
  func_0x000107c613fc(&UNK_110521368,0x18,7);
  func_0x000107c61614(puVar16 + 0x10,plVar12);
  pcStack_98 = (code *)0x102576814;
  puStack_b8 = puVar19;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_101114e90;
  puStack_a0 = &UNK_1105213d0;
  ppuVar15 = &puStack_b8;
  puStack_90 = puVar16;
  func_0x000107c60bc4(ppuVar15);
  func_0x000107c61574(puStack_90);
  puVar19 = puVar17;
  func_0x000107c5c320(puVar17);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c61170(puVar17);
  func_0x000107c3e924(puVar19);
  func_0x000107c61170(puVar19);
  uVar13 = *(undefined8 *)((long)plVar12 + _DAT_112ea5648);
  *(undefined **)((long)plVar12 + _DAT_112ea5648) = puVar14;
  func_0x000107c61174(puVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c613fc(&UNK_110521368,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,plVar12);
  uVar13 = *(undefined8 *)(lVar7 + 0x48);
  uVar32 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(lVar7 + 0x48) = 0x10257681c;
  *(undefined **)(lVar7 + 0x50) = puVar10;
  func_0x000107c6157c(puVar10);
  func_0x00010058d43c(uVar13,uVar32);
  func_0x000107c61574(puVar10);
  FUN_10255fb84();
  func_0x000107c61170(plVar12);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(puVar14);
  lVar11 = _DAT_112ea63e0;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea63e0);
  *(long **)(unaff_x20 + _DAT_112ea63e0) = plVar12;
  func_0x000107c61170(uVar13);
  puVar19 = PTR_PTR_1126aec60;
  func_0x000107c610f8();
  func_0x000107c45ab8();
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea63d8);
  *(undefined **)(unaff_x20 + _DAT_112ea63d8) = puVar19;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  puVar14 = puVar19;
  func_0x000107c519d4();
  func_0x000107c61180();
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112ea6460);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112ea6498);
  uVar32 = *(undefined8 *)(unaff_x20 + _DAT_112ea64c8);
  lVar6 = 0;
  FUN_10255b53c();
  lVar9 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112ea5480) = 0;
  *(undefined **)(lVar9 + _DAT_112ea5488) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = _DAT_112ea5490;
  uVar13 = 0x112ea5528;
  func_0x0001000285a8(0x112ea5528,&UNK_10dab8b40);
  func_0x000107c61538();
  FUN_10257154c();
  *(undefined8 *)(lVar9 + lVar5) = uVar13;
  *(undefined8 *)(lVar9 + _DAT_112ea54c0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112ea54c8) = 0;
  *(undefined **)(lVar9 + _DAT_112ea54b0) = puVar14;
  *(undefined8 *)(lVar9 + _DAT_112ea54b8) = uVar30;
  *(undefined8 *)(lVar9 + _DAT_112ea5498) = uVar23;
  *(undefined8 *)(lVar9 + _DAT_112ea54a0) = uVar31;
  *(undefined8 *)(lVar9 + _DAT_112ea54a8) = uVar32;
  puVar10 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_c8 = lVar9;
  lStack_c0 = lVar6;
  func_0x000107c615f0(uVar23);
  func_0x000107c61174(puVar14);
  func_0x000107c615f0(uVar30);
  func_0x000107c61174(uVar31);
  func_0x000107c61174(uVar32);
  plVar20 = &lStack_c8;
  func_0x000107c61154(plVar20,puVar10,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  plVar21 = plVar20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(plVar21);
  plVar21 = plVar20;
  func_0x000107c61174();
  func_0x000107c3f648();
  func_0x000107c61180();
  func_0x000107c53224();
  func_0x000107c615e8();
  FUN_102577fdc();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar10);
  func_0x000107c59e18(plVar21);
  func_0x000107c61170();
  func_0x00010083f5a0();
  func_0x000107c59a2c(plVar21);
  func_0x000107c61170(plVar21);
  func_0x000107c53dec(plVar21);
  func_0x000107c56778(plVar21);
  func_0x000107c61170(plVar21);
  func_0x000107c61170(puVar14);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea63e8);
  *(long **)(unaff_x20 + _DAT_112ea63e8) = plVar20;
  func_0x000107c61174(plVar21);
  func_0x000107c61170(uVar13);
  if (*(long *)(unaff_x20 + lVar11) != 0) {
    lVar5 = *(long *)(unaff_x20 + lVar11) + _DAT_112ea5640;
    *(undefined ***)(lVar5 + 8) = &PTR_DAT_110520050;
    func_0x000107c61604(lVar5,plVar21);
  }
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112ea6400));
  uVar13 = uVar23;
  func_0x000109022128();
  if ((int)uVar13 != 0) {
    FUN_102569d4c(plVar21);
  }
  func_0x00010902231c();
  if ((int)uVar23 == 0) {
    func_0x000107c61170(puVar19);
    func_0x000107c61170(plVar12);
    func_0x000107c61574(lVar7);
    func_0x000107c61170(plVar21);
    func_0x000107c61170(plVar21);
  }
  else {
    puVar14 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x000107c61170(plVar21);
    func_0x0001002b9fb0(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar16 = puVar14;
    func_0x000103a289a8(puVar14,unaff_x20);
    puStack_d0 = puVar16;
    func_0x00010008a7c8(&puStack_b8,&puStack_d0);
    puVar10 = puStack_b8;
    func_0x000100083b20(&puStack_d0);
    func_0x000107c61574(puVar10);
    puVar10 = puStack_d0;
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ea63f8);
    *(undefined **)(unaff_x20 + _DAT_112ea63f8) = puStack_d0;
    func_0x000107c615f0(puStack_d0);
    func_0x000107c615e8(uVar13);
    func_0x000107c4ee7c(puVar10);
    func_0x000107c615e8(puVar10);
    func_0x000107c61170(plVar21);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(plVar12);
    func_0x000107c61574(lVar7);
  }
  return;
}



/* Entry: 102574a38; end: 102574a4b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions showMainSettingsPageWithDelegate:] */

void FUN_102574a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102573a14(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574a4c; end: 102574a57; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions showOnlyTheseFriendsPickerWithDelegate:] */

void FUN_102574a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x102574a44)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574a58; end: 102574aab;  */

void FUN_102574a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574aac; end: 102574ab3;  */

/* WARNING: Possible PIC construction at 0x000102574b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102574b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574aac(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea63e8);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(lVar2);
    func_0x000107c4807c(puVar1);
    func_0x0001005138d4(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea6440);
    func_0x000107c61174(puVar1);
    func_0x000107c615f0(param_1);
    FUN_102e54690(puVar1,param_1,uVar3,0);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6450));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102574ab4; end: 102574bb7;  */

/* WARNING: Possible PIC construction at 0x000102574b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102574b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea63e8);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(lVar2);
    func_0x000107c4807c(puVar1);
    func_0x0001005138d4(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea6440);
    func_0x000107c61174(puVar1);
    func_0x000107c615f0(param_1);
    FUN_102e54690(puVar1,param_1,uVar3,param_2);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6450));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 102574bb8; end: 102574bc3; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions showExceptTheseFriendsPickerWithDelegate:] */

void FUN_102574bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102574aac(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574bc4; end: 102574c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574bc4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea63e0);
  if (lVar1 != 0) {
    func_0x000107c424e8();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea6450);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 102574c4c; end: 102574c73; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions removeFriendPickerScope] */

void FUN_102574c4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102574bc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574c74; end: 102574dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574c74(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  plVar3 = &lStack_60;
  lVar1 = 0;
  FUN_10256a614();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar6 = _DAT_112ea5cc8;
  func_0x000107c61614(lVar2 + _DAT_112ea5cc8,0);
  func_0x000107c61604(lVar2 + lVar6,param_1);
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  puVar4 = PTR_PTR_1126aec60;
  func_0x000107c610f8();
  func_0x000107c45ab8();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea63d0);
  *(undefined **)(unaff_x20 + _DAT_112ea63d0) = puVar4;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  puVar5 = puVar4;
  func_0x000107c519d4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea64a0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea64c8);
  FUN_10256b5d4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar8);
  func_0x000107c61174(uVar7);
  FUN_10256abb8(puVar5,uVar8,uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea63f0);
  *(undefined **)(unaff_x20 + _DAT_112ea63f0) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  lVar6 = *(long *)(unaff_x20 + _DAT_112ea63e8);
  if (lVar6 != 0) {
    func_0x000107c61174();
    func_0x000107c4f018();
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(plVar3);
  return;
}



/* Entry: 102574dfc; end: 102574e07; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions showReportAnIssueWithDelegate:] */

void FUN_102574dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102574c74(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574e08; end: 102574f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_140 [112];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112ea63f0);
  if (lVar7 != 0) {
    puVar1 = PTR_PTR_1126aead8;
    uVar6 = param_2;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(lVar7);
    func_0x000107c4807c(puVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e6ac58;
    func_0x000107c5faec();
    ppuVar3 = ppuVar2;
    FUN_1025764cc();
    uStack_c8 = 1;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_90 = 6;
    uStack_70 = 0;
    uStack_68 = 1;
    uStack_98 = param_2;
    ppuStack_88 = ppuVar2;
    uStack_80 = uVar6;
    ppuStack_78 = ppuVar3;
    func_0x00010452bbe4(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar1);
    FUN_102556fb0(&uStack_d0,auStack_140);
    puVar4 = &uStack_d0;
    func_0x00010452aea4(puVar4);
    puVar5 = puVar1;
    func_0x00010452a1d8(puVar1,puVar4,param_1,0,0);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6420));
    func_0x000107c61170(puVar5);
    func_0x000102556fec(&uStack_d0);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102574f84; end: 102574fdb; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions exposeShakeToReportScopeWithDelegate:reportType:] */

void FUN_102574f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102574e08(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102574fdc; end: 102575163;  */

/* WARNING: Possible PIC construction at 0x000102575070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575134) */
/* WARNING: Removing unreachable block (ram,0x000102575074) */
/* WARNING: Removing unreachable block (ram,0x000102575144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102574fdc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea63e8);
  if (lVar4 != 0) {
    func_0x000103ed7eb8(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar4);
    uVar1 = 0;
    func_0x000103ed7cec(0,0);
    lVar2 = *(long *)(unaff_x20 + _DAT_112ea6470);
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
      uVar6 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x0001005138f4(0);
      func_0x000107c610f8();
      func_0x000107c61174(lVar4);
      func_0x000107c61174(uVar1);
      func_0x000107c61174(puVar3);
      func_0x000107c615f0(param_1);
      func_0x000103ed7824(uVar5,uVar6,lVar4,uVar1,puVar3,param_1);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6468));
    }
    else {
      func_0x000107c4077c();
      lVar4 = lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 102575164; end: 10257516f; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions exposeVenueEditorScopeWithDelegate:] */

void FUN_102575164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102574fdc(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102575170; end: 10257517b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions removeVenueEditorScope] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575170(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10257517c; end: 102575187; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions removeShakeToReportScope] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10257517c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575188; end: 10257540b;  */

/* WARNING: Possible PIC construction at 0x000102575204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025753d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025753e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575338) */
/* WARNING: Removing unreachable block (ram,0x000102575328) */
/* WARNING: Removing unreachable block (ram,0x000102575304) */
/* WARNING: Removing unreachable block (ram,0x000102575208) */
/* WARNING: Removing unreachable block (ram,0x0001025753ec) */
/* WARNING: Removing unreachable block (ram,0x00010257520c) */
/* WARNING: Removing unreachable block (ram,0x000102575364) */
/* WARNING: Removing unreachable block (ram,0x000102575224) */
/* WARNING: Removing unreachable block (ram,0x0001025753dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (*(long *)(unaff_x20 + _DAT_112ea63e8) != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea6430);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea6408);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea6408))[1];
    func_0x000107c61174();
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c4c39c(uVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10257540c; end: 102575433; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions exposeAvatarBuilderScope] */

void FUN_10257540c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102575188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102575434; end: 10257543f; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions removeAvatarBuilderScope] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575434(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575440; end: 1025754e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575440(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea6400);
  if (param_1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110521330;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c41864(uVar2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1025754e8; end: 102575573; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions exitWithCompletion:] */

void FUN_1025754e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110521408;
    func_0x000107c613fc(&UNK_110521408,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x102576824;
  }
  func_0x000107c61174(param_1);
  FUN_102575440(uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102575574; end: 10257560f; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions dismissWithSender:] */

/* WARNING: Possible PIC construction at 0x0001025755f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025755fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea63e0);
  if (lVar1 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c424e8();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
  }
  func_0x000107c420a8(param_3,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102575610; end: 102575a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575610(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long alStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&puStack_c0 - extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar15 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar15 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar9 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(unaff_x20 + _DAT_112ea63e8);
  if (lVar16 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c4807c();
    puVar3 = PTR_PTR_1126ae560;
    puStack_b8 = puVar2;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_c0 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (**(code **)(lVar12 + 0x10))(lVar14,param_1,lVar1);
    uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar17 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
    puVar2 = &UNK_1105212f0;
    func_0x000107c613fc(&UNK_1105212f0,uVar17 + lVar10,uVar8 | 7);
    (**(code **)(lVar12 + 0x20))(puVar2 + uVar17,lVar14,lVar1);
    pcStack_70 = FUN_102575f4c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_110521308;
    ppuVar4 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_68);
    pcVar5 = "exposeWebBrowsingScope(url:)";
    func_0x0001000c10c0("exposeWebBrowsingScope(url:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar3);
    func_0x000107c615e8(pcVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar3);
    pcVar11 = *(code **)(lVar12 + 0x38);
    (*pcVar11)(lVar18,1,1,lVar1);
    (*pcVar11)(lVar15,1,1,lVar1);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar13,1,1,lVar1);
    *(undefined1 *)(lVar14 + -8) = 0;
    *(undefined8 *)(lVar14 + -0x10) = 0;
    *(undefined8 *)(lVar14 + -0x18) = 0;
    *(undefined8 *)(lVar14 + -0x20) = 0;
    *(undefined8 *)(lVar14 + -0x28) = 0;
    *(undefined8 *)(lVar14 + -0x30) = 0;
    *(undefined8 *)(lVar14 + -0x38) = 0;
    *(long *)(lVar14 + -0x40) = lVar13;
    func_0x000104638e24(lVar19,10,lVar18,0,lVar15,0,0,0,0);
    uVar6 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000100e39298(lVar19,lVar9);
    uVar7 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar9,uVar7);
    puVar3 = puStack_b8;
    func_0x000107c61174(puStack_b8);
    puVar2 = puStack_c0;
    lVar1 = lVar9;
    func_0x000103c5d254(lVar9,puStack_c0,puVar3,unaff_x20,0,0,0,0);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ea6498));
    func_0x000107c61170(lVar16);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
    func_0x000100e392dc(lVar19);
  }
  return;
}



/* Entry: 102575a30; end: 102575a6f;  */

void FUN_102575a30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102575a70; end: 102575b13; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions exposeWebBrowsingScopeWithUrl:] */

void FUN_102575a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_102575610(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102575b14; end: 102575b1f; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions removeWebBrowsingScope] */

/* WARNING: Possible PIC construction at 0x000102575ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575ea8) */
/* WARNING: Removing unreachable block (ram,0x000102575ec4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575b14(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575b20; end: 102575b7b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions init] */

void FUN_102575b20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLocationSharingSettingsImplementation.LocationSharingSettingsUIRouteActions"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102575b4c);
  (*pcVar1)();
}



/* Entry: 102575b7c; end: 102575da7; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102575d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575d50) */
/* WARNING: Removing unreachable block (ram,0x000102575d70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575b7c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea63d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea63d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea63e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea63e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea63f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea63f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6400));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea6408 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6410));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6418));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6420));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6428));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6430));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6438));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6448));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6450));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6458));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6460));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6468));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6470));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea6478));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6480));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6488));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6490));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea6498));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea64a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea64a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea64b0));
  return;
}



/* Entry: 102575da8; end: 102575dc7;  */

void FUN_102575da8(void)

{
  func_0x000107c61168(&PTR_PTR_11284ebd8);
  return;
}



/* Entry: 102575dc8; end: 102575dd3; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Possible PIC construction at 0x000102575e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575e28) */
/* WARNING: Removing unreachable block (ram,0x000102575e44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575dc8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575dd4; end: 102575ddf; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102575e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575e28) */
/* WARNING: Removing unreachable block (ram,0x000102575e44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575dd4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575de0; end: 102575deb; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions bitmojiAvatarBuilderFailedWithError:] */

/* WARNING: Possible PIC construction at 0x000102575e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575e28) */
/* WARNING: Removing unreachable block (ram,0x000102575e44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575de0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575dec; end: 102575eeb;  */

/* WARNING: Possible PIC construction at 0x000102575e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102575e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102575e28) */
/* WARNING: Removing unreachable block (ram,0x000102575e44) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102575dec(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102575eec; end: 102575f4b; -[_TtC39SCLocationSharingSettingsImplementation37LocationSharingSettingsUIRouteActions mapsStateComplianceTakeoverDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102575eec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ea63f8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112ea63f8) = 0;
    func_0x000107c61174();
    func_0x000107c615e8(lVar1);
    func_0x000107c41864(*(undefined8 *)(param_1 + _DAT_112ea6400),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


