/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013137f4; end: 10131382b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013137f4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d71da0);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x28) != '\x01')) && (0 < *(long *)(lVar1 + 0x18))) {
    return 1;
  }
  return 0;
}



/* Entry: 10131382c; end: 10131384b; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection numberOfCellsInSection] */

void FUN_10131382c(void)

{
  FUN_1013137f4();
  return;
}



/* Entry: 10131384c; end: 1013138a3; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection sectionInsets] */

void FUN_10131384c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5dc78(uVar1,uVar2,uVar3,uVar4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013138a4; end: 101313a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013138a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = (undefined *)(unaff_x20 + _DAT_112d71da8);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0xd00000000000003d;
    func_0x000107c5fadc(0xd00000000000003d,0x800000010ef35ee0);
    puVar3 = puVar1;
    func_0x000107c3fda8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(uVar2);
    if (puVar3 != (undefined *)0x0) {
      uVar2 = 0;
      FUN_101314b38(0);
      puVar1 = puVar3;
      func_0x000107c61480(puVar3,uVar2);
      if (puVar1 != (undefined *)0x0) {
        *(undefined ***)(puVar1 + _DAT_112d71df8 + 8) = &PTR_DAT_1103a2220;
        func_0x000107c61604();
        lVar7 = *(long *)(unaff_x20 + _DAT_112d71da0);
        if (lVar7 != 0) {
          lVar5 = *(long *)(puVar1 + _DAT_112d71e18);
          if (lVar5 != lVar7) {
            *(long *)(puVar1 + _DAT_112d71e18) = lVar7;
            func_0x000107c61580(lVar7,3);
            func_0x000107c61574(lVar5);
            uVar6 = *(undefined8 *)(lVar7 + 0x10);
            puVar4 = &UNK_1103a2248;
            func_0x000107c613fc(&UNK_1103a2248,0x18,7);
            *(undefined **)(puVar4 + 0x10) = puVar1;
            func_0x000107c6157c(uVar6);
            func_0x000107c61174(puVar3);
            uVar2 = 0x101313e68;
            puVar3 = puVar4;
            func_0x0001000b6504(0x101313e68);
            func_0x000107c61574(uVar6);
            func_0x000107c61574(puVar4);
            uVar6 = uVar2;
            func_0x000107c614f0(uVar2);
            (**(code **)(puVar3 + 0x18))(*(undefined8 *)(puVar1 + _DAT_112d71e08),uVar6,puVar3);
            func_0x000107c61578(lVar7,2);
            func_0x000107c615e8(uVar2);
          }
        }
        return puVar1;
      }
      func_0x000107c61170(puVar3);
    }
  }
  puVar1 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar1;
}



/* Entry: 101313a78; end: 101313ab3; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection cellForItemAtIndexInSection:] */

void FUN_101313a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1013138a4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101313ab4; end: 101313b57; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection sizeForItemAtIndexInSection:withWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313ab4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + _DAT_112d71da0);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x28) == '\x01')) {
    FUN_101313e64(param_1,0);
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = 0x7ff0000000000000;
    FUN_101313e64(param_1,0x7ff0000000000000);
    func_0x000107c61174(param_2);
    FUN_101314e54(param_1,uVar4,uVar1,uVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101313b58; end: 101313bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313b58(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b48b0;
    func_0x000107c61168();
    func_0x000107c4fda0();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112d71d78);
    *(undefined **)(param_1 + _DAT_112d71d78) = puVar1;
    func_0x000107c61170(uVar3);
    lVar2 = param_1 + _DAT_112d71da8;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3fdac();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101313c00; end: 101313c5f; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection init] */

void FUN_101313c00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationSection.RecentlyActiveEducationSection",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101313c2c);
  (*pcVar1)();
}



/* Entry: 101313c60; end: 101313cf7; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101313cac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101313cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313c60(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71d78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71d80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71d88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d71d90));
  return;
}



/* Entry: 101313cf8; end: 101313d17;  */

void FUN_101313cf8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c6f30);
  return;
}



/* Entry: 101313d18; end: 101313e1f; -[_TtC30RecentlyActiveEducationSection30RecentlyActiveEducationSection recentlyActiveEducationAlertScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000101313da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101313db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101313dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101313e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101313dd8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000101313db8) */
/* WARNING: Removing unreachable block (ram,0x000101313e00) */
/* WARNING: Removing unreachable block (ram,0x000101313dbc) */
/* WARNING: Removing unreachable block (ram,0x000101313da8) */
/* WARNING: Removing unreachable block (ram,0x000101313e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101313d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d71d80);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    FUN_101313e20(0);
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar1);
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101313e20; end: 101313e63;  */

void FUN_101313e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d71de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6a60;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d71de0 = puVar1;
  return;
}



/* Entry: 101313e64; end: 101313e6f;  */

void FUN_101313e64(void)

{
  return;
}



/* Entry: 101313e70; end: 101313edb;  */

undefined8 FUN_101313e70(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d71df0;
  func_0x0001000285a8(0x112d71df0,&UNK_10d932bc0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101313edc; end: 101313f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_101313edc(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d71e00;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112d71e00);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueue";
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



/* Entry: 101313f4c; end: 101313f7f;  */

void FUN_101313f4c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c4179c(0x402c000000000000);
  func_0x000107c61180();
  puRam00000001137ff308 = puVar1;
  return;
}



/* Entry: 101313f80; end: 1013140cf;  */

undefined * FUN_101313f80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c482a8(0,0x3fea9a95421c0443,0x3fca1a0cf1800a7c,0x3ff0000000000000);
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(uVar5,uVar6,uVar7,uVar8);
  puVar3 = puVar2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4018000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c44d9c(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40290(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c521e8(puVar4,param_2,1);
  func_0x000107c61170(puVar4);
  puVar3 = puVar2;
  func_0x000107c5e308(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40290(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c521e8(puVar4,param_2,1);
  func_0x000107c61170(puVar4);
  func_0x000107c52b50(puVar2,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1013140d0; end: 1013142e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013140d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d71e30;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d71e30);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c56ba8();
    func_0x000107c55f80(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1013142e4; end: 1013142ff;  */

void FUN_1013142e4(undefined8 param_1)

{
  FUN_101314300();
  uRam00000001137ff310 = param_1;
  return;
}



/* Entry: 101314300; end: 1013144f7;  */

/* WARNING: Possible PIC construction at 0x000101314418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131441c) */

void FUN_101314300(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if (lRam0000000112d71f20 != -1) {
    func_0x000107c61568(0x112d71f20,FUN_101313f4c);
  }
  if (lRam00000001137ff308 != 0) {
    lVar2 = lRam00000001137ff308;
    func_0x000107c61174();
    uVar3 = 0x6f63692d6f666e69;
    func_0x000107c5fadc(0x6f63692d6f666e69,0xee006b7261642d6e);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c450cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x000107c45154();
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c5177c();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013144f8);
        (*pcVar1)();
      }
      func_0x000107c61170(puVar4);
      func_0x000107c610f8(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
      func_0x000107c61174(puVar7);
      goto code_r0x000107c453e4;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
code_r0x000107c453e4:
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1013144f8; end: 1013147e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1013144f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112d71df8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d71e00) = 0;
  lVar1 = _DAT_112d71e08;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d71e10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d71e18) = 0;
  lVar1 = _DAT_112d71e20;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar4);
  func_0x000107c59594(0x4018000000000000,puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  puVar7 = &DAT_112d71e28;
  *(undefined8 *)(unaff_x20 + _DAT_112d71e28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d71e30) = 0;
  puVar9 = &DAT_112d71e38;
  *(undefined8 *)(unaff_x20 + _DAT_112d71e38) = 0;
  puVar2[1] = 0x18;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame_underlyingView__1125e2e00,puVar4);
  lVar1 = _DAT_112d71e20;
  uVar3 = *(undefined8 *)(puVar5 + _DAT_112d71e20);
  puVar6 = puVar5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000101314158(&DAT_112d71e28,FUN_101313f80);
  func_0x000107c3d5b4(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar7);
  uVar8 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c61174(uVar8);
  uVar3 = uVar8;
  func_0x0001013140d0();
  func_0x000107c3d5b4(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar5 + lVar1);
  func_0x000107c61174(uVar3);
  func_0x000101314158(&DAT_112d71e38,0x1013141b4);
  func_0x000107c3d5b4(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c3d8b8(*(undefined8 *)(puVar6 + _DAT_112d71e38));
  puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c61170(puVar6);
  func_0x000107c3d6fc(puVar6);
  func_0x000107c61174(puVar6);
  func_0x000107c30a5c(1,0xf);
  func_0x000107c59a2c(puVar6);
  func_0x000107c538ac(0x4028000000000000,0x4030000000000000,0x4028000000000000,0x4030000000000000,
                      puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 1013147e4; end: 101314803; -[_TtC30RecentlyActiveEducationSection34RecentlyActiveEducationSectionCell initWithFrame:] */

void FUN_1013147e4(void)

{
  FUN_1013144f8();
  return;
}



/* Entry: 101314804; end: 10131484f; -[_TtC30RecentlyActiveEducationSection34RecentlyActiveEducationSectionCell sectionTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x000101314838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010131483c) */

void FUN_101314804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101314f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101314850; end: 101314a3f; -[_TtC30RecentlyActiveEducationSection34RecentlyActiveEducationSectionCell dismissTappedWithSender:] */

/* WARNING: Possible PIC construction at 0x000101314884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101314888) */

void FUN_101314850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101314ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101314a40; end: 101314a9f; -[_TtC30RecentlyActiveEducationSection34RecentlyActiveEducationSectionCell initWithFrame:underlyingView:] */

void FUN_101314a40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationSection.RecentlyActiveEducationSectionCell",0x41,
                      "init(frame:underlyingView:)",0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101314a6c);
  (*pcVar1)();
}



/* Entry: 101314aa0; end: 101314b37; -[_TtC30RecentlyActiveEducationSection34RecentlyActiveEducationSectionCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101314afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101314b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101314b00) */
/* WARNING: Removing unreachable block (ram,0x000101314b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101314aa0(long param_1)

{
  FUN_10131510c(param_1 + _DAT_112d71df8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d71e00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d71e08));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d71e18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d71e20));
  return;
}



/* Entry: 101314b38; end: 101314b57;  */

void FUN_101314b38(void)

{
  func_0x000107c61168(&PTR_PTR_112d71e80);
  return;
}



/* Entry: 101314b58; end: 101314e53;  */

undefined * FUN_101314b58(long param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  pcVar8 = param_2;
  if (lRam0000000112d71f20 != -1) {
    pcVar8 = FUN_101313f4c;
    func_0x000107c61568(0x112d71f20,FUN_101313f4c);
  }
  if (lRam00000001137ff308 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uVar6 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c48af4(puVar3);
    func_0x000107c61170(uVar6);
  }
  else {
    lVar2 = lRam00000001137ff308;
    func_0x000107c61174();
    lVar4 = lVar2;
    if (param_1 == 1) {
      FUN_1013166c0();
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar3 = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      puVar1 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar5 + 0x38) = puVar3;
      *(undefined **)(lVar5 + 0x40) = puVar1;
      *(code **)(lVar5 + 0x20) = param_2;
    }
    else {
      func_0x00010131678c();
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      puVar1 = PTR___sSis7CVarArgsWP_11034df08;
      puVar3 = PTR___sSiN_11034deb0;
      *(undefined **)(lVar5 + 0x38) = PTR___sSiN_11034deb0;
      *(undefined **)(lVar5 + 0x40) = puVar1;
      *(long *)(lVar5 + 0x20) = param_1;
      *(undefined **)(lVar5 + 0x60) = puVar3;
      *(undefined **)(lVar5 + 0x68) = puVar1;
      *(code **)(lVar5 + 0x48) = param_2;
    }
    pcVar7 = pcVar8;
    func_0x000107c5fb00(lVar4,pcVar8,lVar5);
    func_0x000107c6142c(pcVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x000107c5fadc(lVar4,pcVar7);
    func_0x000107c6142c(pcVar7);
    func_0x000107c48af4(puVar3);
    func_0x000107c61170(lVar4);
    lVar4 = 0x112d48380;
    func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    *(undefined8 *)(lVar4 + 0x20) = uVar9;
    uVar6 = 0;
    FUN_101315130();
    *(undefined8 *)(lVar4 + 0x40) = uVar6;
    *(long *)(lVar4 + 0x28) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar9);
    lVar5 = lVar4;
    func_0x000100ecbca8(lVar4);
    func_0x000107c61588(lVar4);
    FUN_100ef0820((undefined8 *)(lVar4 + 0x20));
    uVar9 = 0;
    FUN_100eca28c(0);
    uVar6 = uVar9;
    FUN_100ecbdec();
    lVar4 = lVar5;
    func_0x000107c5f9dc(lVar5,uVar9,PTR___sypN_11034f1a8 + 8,uVar6);
    func_0x000107c6142c(lVar5);
    func_0x000107c61174(puVar3);
    func_0x000107c4adac();
    func_0x000107c529d4(puVar3);
    func_0x000107c61170(lVar4);
    if (lRam0000000112d71f28 != -1) {
      func_0x000107c61568(0x112d71f28,FUN_1013142e4);
    }
    func_0x000107c3dee8(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
  }
  return puVar3;
}



/* Entry: 101314e54; end: 101314f63;  */

undefined1  [16]
FUN_101314e54(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c469a4(uVar3,uVar4,uVar5,uVar6);
  func_0x000107c56ba8();
  func_0x000107c55f80(puVar1);
  FUN_101314b58(param_3,param_4);
  func_0x000107c529c4(puVar1);
  func_0x000107c61170(param_3);
  dVar2 = 0.0;
  func_0x000107c5c88c(0,0,param_1 + -20.0 + -32.0,param_2,puVar1);
  func_0x000107c609b0();
  func_0x000107c61170(puVar1);
  auVar7._8_8_ = dVar2 + 20.0 + 24.0;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 101314f64; end: 101314fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101314f64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d71df8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d71d88);
    func_0x000107c3edb8(uVar2,param_2,*(undefined8 *)(lVar1 + _DAT_112d71d90),lVar1);
    func_0x000107c61180();
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112d71d80),param_2,uVar2);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101314ff0; end: 1013150e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101314ff0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = unaff_x20 + _DAT_112d71df8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112d71da0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x28) = 1;
    }
    lVar4 = lVar1;
    FUN_1013136a4();
    puVar2 = &UNK_1103a2280;
    func_0x000107c613fc(&UNK_1103a2280,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    pcStack_40 = FUN_1013150e8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1103a2298;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4e524(lVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 1013150e8; end: 10131510b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013150e8(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b48b0;
    func_0x000107c61168();
    func_0x000107c4fda0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112d71d78);
    *(undefined **)(lVar1 + _DAT_112d71d78) = puVar2;
    func_0x000107c61170(uVar4);
    lVar3 = lVar1 + _DAT_112d71da8;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c3fdac();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10131510c; end: 10131512f;  */

undefined8 FUN_10131510c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101315130; end: 101315173;  */

void FUN_101315130(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48388 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d48388 = puVar1;
  return;
}



/* Entry: 101315174; end: 101315183;  */

void FUN_101315174(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_1013140d0();
    func_0x000107c529c4();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101315184; end: 10131520f; -[_TtC30RecentlyActiveEducationSection37RecentlyActiveEducationSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_101315184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_5;
  FUN_101315308(param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101315210; end: 10131526f; -[_TtC30RecentlyActiveEducationSection37RecentlyActiveEducationSectionCreator init] */

void FUN_101315210(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationSection.RecentlyActiveEducationSectionCreator",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131523c);
  (*pcVar1)();
}



/* Entry: 101315270; end: 1013152e7; -[_TtC30RecentlyActiveEducationSection37RecentlyActiveEducationSectionCreator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101315270(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71f30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71f38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71f40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d71f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d71f58));
  return;
}



/* Entry: 1013152e8; end: 101315307;  */

void FUN_1013152e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7078);
  return;
}



/* Entry: 101315308; end: 101315667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101315308(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d71f30);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d71f38);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d71f40);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d71f48);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d71f50);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d71f58);
  lVar2 = 0;
  FUN_1013135ec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar4 = 0;
  FUN_101313cf8();
  lVar6 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d71d70) = 1;
  *(undefined8 *)(lVar6 + _DAT_112d71d78) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d71da0) = 0;
  func_0x000107c61614(lVar6 + _DAT_112d71da8,0);
  *(undefined8 *)(lVar6 + _DAT_112d71db0) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d71d80) = uVar13;
  *(undefined8 *)(lVar6 + _DAT_112d71d88) = uVar12;
  *(undefined8 *)(lVar6 + _DAT_112d71d90) = param_1;
  *(undefined8 *)(lVar6 + _DAT_112d71d98) = uVar11;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar4;
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c615f4(uVar8,2);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar1);
  lVar6 = 0;
  func_0x000101316040();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d71f88,&UNK_10d932998);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar7 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  func_0x000107c61614(lVar6 + 0x30,0);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x48) = uVar9;
  *(undefined ***)(lVar6 + 0x38) = &PTR_DAT_1103a2210;
  *(undefined8 *)(lVar6 + 0x40) = uVar10;
  func_0x000107c61604(lVar6 + 0x30,plVar5);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar9);
  uVar7 = uVar8;
  func_0x000108f3df88();
  *(undefined8 *)(lVar6 + 0x50) = uVar7;
  FUN_101315808();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uVar8);
  uVar7 = *(undefined8 *)((long)plVar5 + _DAT_112d71da0);
  *(long *)((long)plVar5 + _DAT_112d71da0) = lVar6;
  func_0x000107c61170(plVar5);
  func_0x000107c61574(uVar7);
  *(long **)(lVar3 + _DAT_112d71d40) = plVar5;
  plVar5 = &lStack_80;
  lStack_80 = lVar3;
  lStack_78 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uVar8);
  return plVar5;
}



/* Entry: 101315668; end: 10131567f;  */

bool FUN_101315668(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Entry: 101315680; end: 1013156e3;  */

undefined * FUN_101315680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x58);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined **)(unaff_x20 + 0x58) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1013156e4; end: 101315807;  */

undefined * FUN_1013156e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = *(undefined **)(unaff_x20 + 0x60);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar5 + 0x68))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar1);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd00000000000003d;
    func_0x000107c5fadc(0xd00000000000003d,0x800000010ef36000);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined **)(unaff_x20 + 0x60) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101315808; end: 101315927;  */

void FUN_101315808(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101315924);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 != 0) {
    FUN_1013156e4();
    lVar4 = lVar2;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101315928);
      (*pcVar1)();
    }
    puVar5 = &UNK_1103a23c8;
    func_0x000107c613fc(&UNK_1103a23c8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcStack_40 = FUN_1013160dc;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_100f6151c;
    puStack_48 = &UNK_1103a23e0;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c4d31c(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101315928; end: 101315fa7;  */

void FUN_101315928(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if (param_2 == 0) {
    puVar13 = auStack_78;
    func_0x000107c61428(param_3 + 0x10,puVar13,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      if (param_1 != (undefined1 *)0x0) {
        lVar3 = *(long *)(param_3 + 0x40);
        func_0x000107c4fa30();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          puVar17 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
          if ((ulong)param_1 >> 0x3e == 0) {
            puVar16 = *(undefined1 **)(puVar17 + 0x10);
            puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar16 = param_1;
            if (-1 < (long)param_1) {
              puVar16 = puVar17;
            }
            func_0x000107c60480();
            puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
          if (puVar16 != (undefined1 *)0x0) {
            puVar7 = (undefined1 *)0x0;
            do {
              while( true ) {
                if (((ulong)param_1 & 0xc000000000000001) == 0) {
                  if (*(undefined1 **)(puVar17 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101315b20);
                    (*pcVar2)();
                  }
                  puVar5 = *(undefined1 **)(param_1 + (long)puVar7 * 8 + 0x20);
                  func_0x000107c61174();
                  puVar14 = puVar13;
                }
                else {
                  puVar5 = puVar7;
                  puVar14 = param_1;
                  func_0x00010103193c();
                }
                if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101315b1c);
                  (*pcVar2)();
                }
                puVar15 = puVar7 + 1;
                func_0x000107c61174();
                puVar6 = puVar5;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (puVar6 == (undefined1 *)0x0) break;
                puVar7 = puVar6;
                func_0x000107c5faec();
                puVar13 = puVar14;
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar6);
                puVar8 = puVar10;
                func_0x000107c61558();
                puVar9 = puVar10;
                if (((ulong)puVar8 & 1) == 0) {
                  puVar13 = (undefined1 *)(*(long *)(puVar10 + 0x10) + 1);
                  puVar9 = (undefined *)0x0;
                  func_0x0001000d182c(0,puVar13,1,puVar10);
                }
                uVar1 = *(ulong *)(puVar9 + 0x10);
                puVar5 = (undefined1 *)(uVar1 + 1);
                puVar10 = puVar9;
                if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
                  puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                  puVar13 = puVar5;
                  func_0x0001000d182c(puVar10,puVar5,1,puVar9);
                }
                *(undefined1 **)(puVar10 + 0x10) = puVar5;
                *(undefined1 **)(puVar10 + uVar1 * 0x10 + 0x20) = puVar7;
                *(undefined1 **)(puVar10 + uVar1 * 0x10 + 0x28) = puVar14;
                puVar7 = puVar15;
                if (puVar15 == puVar16) goto LAB_101315b3c;
              }
              func_0x000107c61170(puVar5);
              func_0x000107c61170(puVar5);
              puVar13 = puVar14;
              puVar7 = puVar7 + 1;
            } while (puVar15 != puVar16);
          }
LAB_101315b3c:
          puVar8 = PTR___sSSN_11034da80;
          puVar9 = puVar10;
          func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar10);
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,puVar8);
          lVar3 = lVar4;
          func_0x000107c4fa34(lVar4);
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar10);
          puVar10 = &UNK_1103a23c8;
          func_0x000107c613fc(&UNK_1103a23c8,0x18,7);
          func_0x000107c61644(puVar10 + 0x10,param_3);
          uStack_88 = 0x101316100;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_101315fa8;
          puStack_90 = &UNK_1103a2408;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_80);
          lVar12 = lVar3;
          func_0x000107c5c320(lVar3);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(lVar3);
          FUN_101315680();
          func_0x000107c3e924(lVar12);
          func_0x000107c61574(param_3);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar3);
          return;
        }
      }
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 101315fa8; end: 101315ff3;  */

void FUN_101315fa8(long param_1,undefined8 param_2)

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



/* Entry: 101315ff4; end: 10131605f;  */

void FUN_101315ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1013160b8(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101316060; end: 1013160b7;  */

int FUN_101316060(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1013160b8; end: 1013160db;  */

undefined8 FUN_1013160b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013160dc; end: 101316107;  */

void FUN_1013160dc(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long unaff_x20;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if (param_2 == 0) {
    puVar14 = auStack_78;
    func_0x000107c61428(unaff_x20 + 0x10,puVar14,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      if (param_1 != (undefined1 *)0x0) {
        lVar4 = *(long *)(lVar3 + 0x40);
        func_0x000107c4fa30();
        func_0x000107c61180();
        lVar5 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 != 0) {
          puVar18 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
          if ((ulong)param_1 >> 0x3e == 0) {
            puVar17 = *(undefined1 **)(puVar18 + 0x10);
            puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar17 = param_1;
            if (-1 < (long)param_1) {
              puVar17 = puVar18;
            }
            func_0x000107c60480();
            puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
          if (puVar17 != (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            do {
              while( true ) {
                if (((ulong)param_1 & 0xc000000000000001) == 0) {
                  if (*(undefined1 **)(puVar18 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101315b20);
                    (*pcVar2)();
                  }
                  puVar6 = *(undefined1 **)(param_1 + (long)puVar8 * 8 + 0x20);
                  func_0x000107c61174();
                  puVar15 = puVar14;
                }
                else {
                  puVar6 = puVar8;
                  puVar15 = param_1;
                  func_0x00010103193c();
                }
                if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101315b1c);
                  (*pcVar2)();
                }
                puVar16 = puVar8 + 1;
                func_0x000107c61174();
                puVar7 = puVar6;
                func_0x000107c5d984();
                func_0x000107c61180();
                if (puVar7 == (undefined1 *)0x0) break;
                puVar8 = puVar7;
                func_0x000107c5faec();
                puVar14 = puVar15;
                func_0x000107c61170(puVar6);
                func_0x000107c61170(puVar6);
                func_0x000107c61170(puVar7);
                puVar9 = puVar11;
                func_0x000107c61558();
                puVar10 = puVar11;
                if (((ulong)puVar9 & 1) == 0) {
                  puVar14 = (undefined1 *)(*(long *)(puVar11 + 0x10) + 1);
                  puVar10 = (undefined *)0x0;
                  func_0x0001000d182c(0,puVar14,1,puVar11);
                }
                uVar1 = *(ulong *)(puVar10 + 0x10);
                puVar6 = (undefined1 *)(uVar1 + 1);
                puVar11 = puVar10;
                if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
                  puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                  puVar14 = puVar6;
                  func_0x0001000d182c(puVar11,puVar6,1,puVar10);
                }
                *(undefined1 **)(puVar11 + 0x10) = puVar6;
                *(undefined1 **)(puVar11 + uVar1 * 0x10 + 0x20) = puVar8;
                *(undefined1 **)(puVar11 + uVar1 * 0x10 + 0x28) = puVar15;
                puVar8 = puVar16;
                if (puVar16 == puVar17) goto LAB_101315b3c;
              }
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar6);
              puVar14 = puVar15;
              puVar8 = puVar8 + 1;
            } while (puVar16 != puVar17);
          }
LAB_101315b3c:
          puVar9 = PTR___sSSN_11034da80;
          puVar10 = puVar11;
          func_0x000107c5fc48(puVar11,PTR___sSSN_11034da80);
          func_0x000107c6142c(puVar11);
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,puVar9);
          lVar4 = lVar5;
          func_0x000107c4fa34(lVar5);
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          puVar11 = &UNK_1103a23c8;
          func_0x000107c613fc(&UNK_1103a23c8,0x18,7);
          func_0x000107c61644(puVar11 + 0x10,lVar3);
          uStack_88 = 0x101316100;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = FUN_101315fa8;
          puStack_90 = &UNK_1103a2408;
          ppuVar12 = &puStack_a8;
          puStack_80 = puVar11;
          func_0x000107c60bc4(ppuVar12);
          func_0x000107c61574(puStack_80);
          lVar13 = lVar4;
          func_0x000107c5c320(lVar4);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar12);
          func_0x000107c61170(lVar4);
          FUN_101315680();
          func_0x000107c3e924(lVar13);
          func_0x000107c61574(lVar3);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(lVar4);
          return;
        }
      }
      func_0x000107c61574(lVar3);
    }
  }
  return;
}



/* Entry: 101316108; end: 101316147;  */

void FUN_101316108(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101316148; end: 101316167;  */

void FUN_101316148(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101316168; end: 101316467;  */

/* WARNING: Removing unreachable block (ram,0x000101316464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101316168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined **ppuVar10;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar3 = param_7;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1013166a0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    lVar6 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar9 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    lVar7 = _DAT_112d72108;
    ppuVar10 = &PTR____CFConstantStringClassReference_110f12e78;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5faec();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f12e78);
    *(undefined ***)(lVar6 + 0x20) = ppuVar10;
    *(undefined8 *)(lVar6 + 0x28) = uVar9;
    *(long *)(lVar5 + lVar7) = lVar6;
    *(undefined8 *)(lVar5 + _DAT_112d72110) = 0;
    *(undefined8 *)(lVar5 + _DAT_112d72118) = 0;
    *(undefined8 *)(lVar5 + _DAT_112d72120) = 0;
    lVar7 = 0;
    FUN_1013152e8();
    lVar6 = lVar7;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112d71f30) = param_2;
    *(undefined8 *)(lVar6 + _DAT_112d71f38) = param_3;
    *(undefined8 *)(lVar6 + _DAT_112d71f40) = param_4;
    *(undefined8 *)(lVar6 + _DAT_112d71f48) = param_5;
    *(undefined8 *)(lVar6 + _DAT_112d71f50) = param_6;
    *(long *)(lVar6 + _DAT_112d71f58) = lVar3;
    puVar1 = PTR_s_init_1125d9248;
    lStack_70 = lVar6;
    lStack_68 = lVar7;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c615f0(lVar3);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar1);
    *(long **)(lVar5 + _DAT_112d72100) = plVar8;
    plVar8 = &lStack_80;
    lStack_80 = lVar5;
    lStack_78 = lVar4;
    func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c615e8(lVar3);
    uVar9 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(plVar8);
    func_0x000107c61170(uVar9);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101316464);
  (*pcVar2)();
}



/* Entry: 101316468; end: 101316483;  */

void FUN_101316468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101316484; end: 1013164a3;  */

void FUN_101316484(void)

{
  func_0x000107c61168(&PTR_PTR_112d720a8);
  return;
}



/* Entry: 1013164a4; end: 1013164eb; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension sectionIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013164a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d72108);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013164ec; end: 101316563; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension sectionCreator] */

void FUN_1013164ec(void)

{
  func_0x00010131650c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101316564; end: 101316597; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension setSectionCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d72110);
  *(undefined8 *)(param_1 + _DAT_112d72110) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101316598; end: 1013165b7; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension sectionDescriptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316598(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d72118));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013165b8; end: 1013165d7; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension sectionLoggingParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013165b8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d72120));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013165d8; end: 101316637; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension init] */

void FUN_1013165d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RecentlyActiveEducationSection.RecentlyActiveEducationSectionExtension",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101316604);
  (*pcVar1)();
}



/* Entry: 101316638; end: 10131669f; -[_TtC30RecentlyActiveEducationSection39RecentlyActiveEducationSectionExtension .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101316674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101316678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316638(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72100));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d72110));
  return;
}



/* Entry: 1013166a0; end: 1013166bf;  */

void FUN_1013166a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7160);
  return;
}



/* Entry: 1013166c0; end: 101316853;  */

undefined1  [16] FUN_1013166c0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef36090);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef360c0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131678c);
  (*pcVar1)();
}



/* Entry: 101316854; end: 10131685f; -[SCRecentlyActiveEducationSectionEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316854(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72150;
  func_0x000107c61428(param_1 + _DAT_112d72150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101316860; end: 10131686b; -[SCRecentlyActiveEducationSectionEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72150;
  func_0x000107c61428(param_1 + _DAT_112d72150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131686c; end: 101316877; -[SCRecentlyActiveEducationSectionEntryPoint recentlyActiveIndicatorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131686c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72158;
  func_0x000107c61428(param_1 + _DAT_112d72158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101316878; end: 101316883; -[SCRecentlyActiveEducationSectionEntryPoint setRecentlyActiveIndicatorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72158;
  func_0x000107c61428(param_1 + _DAT_112d72158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101316884; end: 10131688f; -[SCRecentlyActiveEducationSectionEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316884(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72160;
  func_0x000107c61428(param_1 + _DAT_112d72160,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101316890; end: 10131689b; -[SCRecentlyActiveEducationSectionEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72160;
  func_0x000107c61428(param_1 + _DAT_112d72160,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131689c; end: 1013168a7; -[SCRecentlyActiveEducationSectionEntryPoint recentlyActiveEducationAlertScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131689c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72168;
  func_0x000107c61428(param_1 + _DAT_112d72168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013168a8; end: 1013168b3; -[SCRecentlyActiveEducationSectionEntryPoint setRecentlyActiveEducationAlertScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013168a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72168;
  func_0x000107c61428(param_1 + _DAT_112d72168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013168b4; end: 1013168bf; -[SCRecentlyActiveEducationSectionEntryPoint sendToTooltipsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013168b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72170;
  func_0x000107c61428(param_1 + _DAT_112d72170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013168c0; end: 1013168cb; -[SCRecentlyActiveEducationSectionEntryPoint setSendToTooltipsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013168c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72170;
  func_0x000107c61428(param_1 + _DAT_112d72170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013168cc; end: 1013168d7; -[SCRecentlyActiveEducationSectionEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013168cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72178;
  func_0x000107c61428(param_1 + _DAT_112d72178,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013168d8; end: 10131691b;  */

void FUN_1013168d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10131691c; end: 101316927; -[SCRecentlyActiveEducationSectionEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131691c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72178;
  func_0x000107c61428(param_1 + _DAT_112d72178,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101316928; end: 10131697b;  */

void FUN_101316928(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10131697c; end: 1013169c3; -[SCRecentlyActiveEducationSectionEntryPoint recentlyActiveEducationAlertScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131697c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72180;
  func_0x000107c61428(param_1 + _DAT_112d72180,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1013169c4; end: 101316a27; -[SCRecentlyActiveEducationSectionEntryPoint setRecentlyActiveEducationAlertScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013169c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72180;
  func_0x000107c61428(param_1 + _DAT_112d72180,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101316a28; end: 101316e8b;  */

/* WARNING: Possible PIC construction at 0x000101316bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101316dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101316de0) */
/* WARNING: Removing unreachable block (ram,0x000101316e00) */
/* WARNING: Removing unreachable block (ram,0x000101316e30) */
/* WARNING: Removing unreachable block (ram,0x000101316e20) */
/* WARNING: Removing unreachable block (ram,0x000101316e60) */
/* WARNING: Removing unreachable block (ram,0x000101316e50) */
/* WARNING: Removing unreachable block (ram,0x000101316e40) */
/* WARNING: Removing unreachable block (ram,0x000101316d88) */
/* WARNING: Removing unreachable block (ram,0x000101316d78) */
/* WARNING: Removing unreachable block (ram,0x000101316d68) */
/* WARNING: Removing unreachable block (ram,0x000101316d58) */
/* WARNING: Removing unreachable block (ram,0x000101316d48) */
/* WARNING: Removing unreachable block (ram,0x000101316d1c) */
/* WARNING: Removing unreachable block (ram,0x000101316d0c) */
/* WARNING: Removing unreachable block (ram,0x000101316cfc) */
/* WARNING: Removing unreachable block (ram,0x000101316bd8) */
/* WARNING: Removing unreachable block (ram,0x000101316dd0) */
/* WARNING: Removing unreachable block (ram,0x000101316e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101316a28(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **unaff_x20;
  
  ppuVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    return;
  }
  ppuVar3 = unaff_x20;
  func_0x000107c4fa28();
  func_0x000107c61180();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar4 = unaff_x20;
    func_0x000107c5b490();
    func_0x000107c61180();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar4 = unaff_x20;
      func_0x000107c4fa1c();
      func_0x000107c61180();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar5 = unaff_x20;
        func_0x000107c4fa24();
        func_0x000107c61180();
        if (ppuVar5 == (undefined **)0x0) {
          func_0x000107c61170(ppuVar2);
          ppuVar2 = ppuVar3;
        }
        else {
          ppuVar6 = unaff_x20;
          func_0x000107c51ed8();
          func_0x000107c61180();
          if (ppuVar6 == (undefined **)0x0) {
            func_0x000107c61170(ppuVar2);
            ppuVar2 = ppuVar3;
          }
          else {
            func_0x000107c3df78();
            func_0x000107c61180();
            if (unaff_x20 != (undefined **)0x0) {
              FUN_101316484();
              func_0x000107c613fc();
              func_0x000107c3fa04();
              func_0x000107c61180();
              if (unaff_x20 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101316e88);
                (*pcVar1)();
              }
              FUN_1013166a0();
              func_0x000107c610f8();
              lVar7 = 0x112d38280;
              func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
              func_0x000107c613fc();
              *(undefined8 *)(lVar7 + 0x18) = 2;
              *(undefined8 *)(lVar7 + 0x10) = 1;
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174(ppuVar4);
              func_0x000107c61174(ppuVar5);
              func_0x000107c61174(ppuVar6);
              func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f12e78);
              ppuVar2 = &PTR____CFConstantStringClassReference_110f12e78;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 101316e8c; end: 101316eb3; -[SCRecentlyActiveEducationSectionEntryPoint begin] */

void FUN_101316e8c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101316a28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101316eb4; end: 101316ef7; -[SCRecentlyActiveEducationSectionEntryPoint end] */

void FUN_101316eb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101316ef8; end: 1013172a7;  */

void FUN_101316ef8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10c9f00)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010ef36100,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000029;
            if (((param_2 == -0x2fffffffffffffd7) && (param_3 == -0x7ffffffef10c9ee0)) ||
               (func_0x000107c605b8(0xd000000000000029,0x800000010ef36120,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c57bac();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10c9eb0)) ||
                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef36150,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58f2c();
              }
              else {
                uVar2 = 0xd000000000000025;
                if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10f0340)) ||
                   (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52844();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef10c9e90)) &&
                     (func_0x000107c605b8(0xd000000000000028,0x800000010ef36170,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "RecentlyActiveEducationSection/SCRecentlyActiveEducationSectionEntryPoint.swift"
                                        ,0x4f,2,0x3f,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013172a8);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c57ba4();
                }
              }
            }
            goto LAB_101316f84;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
        goto LAB_101316f84;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57bb0();
  }
LAB_101316f84:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013172a8; end: 101317353; -[SCRecentlyActiveEducationSectionEntryPoint setValue:forIvarName:] */

void FUN_1013172a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101316ef8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101317354; end: 101317423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317354(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d72150,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72158,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72160,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72168,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72170,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72178,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72180) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d72188) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101317424; end: 101317443; -[SCRecentlyActiveEducationSectionEntryPoint init] */

void FUN_101317424(void)

{
  FUN_101317354();
  return;
}



/* Entry: 101317444; end: 101317477;  */

void FUN_101317444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101317478; end: 10131750f; -[SCRecentlyActiveEducationSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317478(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72150);
  func_0x000107c61610(param_1 + _DAT_112d72158);
  func_0x000107c61610(param_1 + _DAT_112d72160);
  func_0x000107c61610(param_1 + _DAT_112d72168);
  func_0x000107c61610(param_1 + _DAT_112d72170);
  func_0x000107c61610(param_1 + _DAT_112d72178);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72188));
  return;
}



/* Entry: 101317510; end: 10131752f;  */

void FUN_101317510(void)

{
  func_0x000107c61168(&PTR_PTR_1127c7240);
  return;
}



/* Entry: 101317530; end: 10131758b; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider init] */

void FUN_101317530(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendToPromoteSection.SendToPromoteSectionDataProvider",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10131755c);
  (*pcVar1)();
}



/* Entry: 10131758c; end: 10131769b; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131758c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721b8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d721c0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d721c8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d721d0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721d8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721e0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721e8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721f0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d721f8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d72200 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72208));
  func_0x0001012b7b48(param_1 + _DAT_112d72210);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d72218));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72220));
  return;
}



/* Entry: 10131769c; end: 1013176bb; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131769c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d72210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013176bc; end: 1013176cf; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013176bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d72210,param_3);
  return;
}



/* Entry: 1013176d0; end: 101317703; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider sectionDataModel] */

void FUN_1013176d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101317704();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101317704; end: 10131781b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101317704(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112d72218;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d72218);
  if (lVar6 == 0) {
    puVar2 = PTR_PTR_1126b55e0;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c46c24();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (puVar2 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d721b8);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d721b8))[1];
    puVar5 = PTR_PTR_1126b5240;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c48550();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61170(uVar3);
    lVar6 = *(long *)(unaff_x20 + lVar1);
    if (lVar6 == 0) {
      return 0;
    }
  }
  func_0x000107c61174(lVar6);
  return lVar6;
}



/* Entry: 10131781c; end: 1013178cf; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider setSectionDataModel:] */

/* WARNING: Possible PIC construction at 0x000101317880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013178a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101317884) */
/* WARNING: Removing unreachable block (ram,0x0001013178ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10131781c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b5240;
    func_0x000107c61168(PTR_PTR_1126b5240);
    lVar2 = param_3;
    func_0x000107c6148c(param_3,puVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112d72218);
      *(long *)(param_1 + _DAT_112d72218) = lVar2;
      func_0x000107c615f4(param_3,2);
      func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1013178d0; end: 101317aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013178d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d72208) != 0) {
    func_0x000107c3e208();
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d72200);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d72200))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d721f8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d721f8))[1];
  puVar4 = PTR_PTR_1126b3558;
  func_0x000107c610f8(PTR_PTR_1126b3558);
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c5fadc(uVar5,uVar2);
  func_0x000107c48298(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c40404(param_1);
  func_0x000107c61170(puVar4);
  lVar6 = 0x112d6fa28;
  FUN_101318584(0x112d6fa28,&PTR_PTR_1126aea98,0x112d6fd98,&UNK_10d932bb0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 3;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d721e0);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d721e0))[1];
  FUN_101317e84(param_1);
  puVar4 = PTR_PTR_1126aea98;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar7,uVar5);
  func_0x000107c45d60();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar7);
  if (puVar4 != (undefined *)0x0) {
    *(undefined **)(lVar6 + 0x20) = puVar4;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d721d8);
    *(long *)(unaff_x20 + _DAT_112d721d8) = lVar6;
    func_0x000107c6142c(uVar7);
    lVar6 = unaff_x20 + _DAT_112d72210;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000107c51b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
      return;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101317ab0);
  (*pcVar3)();
}



/* Entry: 101317ab0; end: 101317acf; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317ab0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d72208));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101317ad0; end: 101317b03; -[_TtC22SCSendToPromoteSection32SendToPromoteSectionDataProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101317ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d72208);
  *(undefined8 *)(param_1 + _DAT_112d72208) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}


