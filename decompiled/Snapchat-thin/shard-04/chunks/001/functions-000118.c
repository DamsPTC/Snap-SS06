/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103179ebc; end: 103179f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103179ebc(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f471f8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f471f0);
    func_0x000107c61174();
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f471d8);
  }
  else {
    func_0x000107c615e8(lVar2);
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 103179f4c; end: 10317a1f7;  */

/* WARNING: Possible PIC construction at 0x00010317a188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317a1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317a18c) */
/* WARNING: Removing unreachable block (ram,0x00010317a1d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103179f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f471e0);
  func_0x00010436c1e8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x00010436b068();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f471f8);
  if (lVar2 == 0) {
    func_0x0001007660b0();
    func_0x000107c610f8();
    func_0x000107c615f0(param_14);
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    func_0x000107c615f0(param_11);
    func_0x000107c615f0(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c615f0();
    func_0x00010436bcb8(param_11,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9 & 1
                       );
    lVar2 = *(long *)(unaff_x20 + _DAT_112f471f0);
  }
  else {
    func_0x00010436c208();
    func_0x000107c610f8();
    func_0x000107c615f0(param_14);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_11);
    func_0x000107c615f0(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c615f0();
    func_0x00010436b558(param_11,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9 & 1
                       );
  }
  func_0x000107c42c1c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_11);
  return;
}



/* Entry: 10317a1f8; end: 10317a36f; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter presentLensExplorerWith:navigationContainer:selectedCategoryIdentifier:selectedLensId:uiConfiguration:presentationType:lensExplorerDataQueryContext:cameraSource:isReplyContext:lensExplorerRouterDelegate:lensExplorerPageTransitionDelegate:itemScrollPolicyProvider:] */

/* WARNING: Possible PIC construction at 0x00010317a310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317a320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317a330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317a324) */
/* WARNING: Removing unreachable block (ram,0x00010317a314) */
/* WARNING: Removing unreachable block (ram,0x00010317a334) */

void FUN_10317a1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_13);
  func_0x000107c615f0(param_14);
  func_0x000107c615f0(param_15);
  func_0x000107c61174(param_1);
  FUN_103179f4c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10317a370; end: 10317a3f3; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter setScrollEnabledWithVertical:horizontal:] */

/* WARNING: Possible PIC construction at 0x00010317a3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317a3dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f471e0);
  func_0x00010436ea18(0);
  func_0x000107c61174(param_1);
  func_0x00010436e7d0(param_3,param_4);
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317a3f4; end: 10317a4c7;  */

/* WARNING: Possible PIC construction at 0x00010317a450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317a454) */
/* WARNING: Removing unreachable block (ram,0x00010317a464) */
/* WARNING: Removing unreachable block (ram,0x00010317a4b8) */
/* WARNING: Removing unreachable block (ram,0x00010317a458) */
/* WARNING: Removing unreachable block (ram,0x00010317a478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a3f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f471f8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f471f0);
    func_0x000107c61174(lVar2);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c5194c(lVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10317a4c8; end: 10317a4ef; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter transitionLensExplorerToSearch] */

void FUN_10317a4c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10317a3f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317a4f0; end: 10317a6a3;  */

/* WARNING: Possible PIC construction at 0x00010317a558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317a630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317a55c) */
/* WARNING: Removing unreachable block (ram,0x00010317a5a8) */
/* WARNING: Removing unreachable block (ram,0x00010317a5ac) */
/* WARNING: Removing unreachable block (ram,0x00010317a5b4) */
/* WARNING: Removing unreachable block (ram,0x00010317a560) */
/* WARNING: Removing unreachable block (ram,0x00010317a5c8) */
/* WARNING: Removing unreachable block (ram,0x00010317a5f8) */
/* WARNING: Removing unreachable block (ram,0x00010317a5ec) */
/* WARNING: Removing unreachable block (ram,0x00010317a610) */
/* WARNING: Removing unreachable block (ram,0x00010317a634) */
/* WARNING: Removing unreachable block (ram,0x00010317a690) */
/* WARNING: Removing unreachable block (ram,0x00010317a638) */
/* WARNING: Removing unreachable block (ram,0x00010317a648) */
/* WARNING: Removing unreachable block (ram,0x00010317a65c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a4f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f471f8);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f471f0);
    func_0x000107c61174(lVar2);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  func_0x000107c5194c(lVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10317a6a4; end: 10317a7e7; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter dismissIfNeeded:] */

void FUN_10317a6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106175f8;
    func_0x000107c613fc(&UNK_1106175f8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317a810;
  }
  func_0x000107c61174(param_1);
  FUN_10317a4f0(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317a7e8; end: 10317a80f; -[_TtC17LensExplorerSwift26LensExplorerARBarPresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317a7e8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010317a730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317a810; end: 10317a817;  */

void FUN_10317a810(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317a818; end: 10317a8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a818(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f47230) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317a8d0; end: 10317a92f; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter init] */

void FUN_10317a8d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerDirectorsPresenter",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317a8fc);
  (*pcVar1)();
}



/* Entry: 10317a930; end: 10317a96b; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a930(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47230));
  if (*(long *)(param_1 + _DAT_112f47228) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f47228))[1]);
    return;
  }
  return;
}



/* Entry: 10317a96c; end: 10317a9b3; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10317a96c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f47230);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 10317a9b4; end: 10317ab37; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter presentLensExplorerFrom:lensExplorerRouterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317a9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000100766090(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010436c378();
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112f47230));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 10317ab38; end: 10317ac73; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter dismissIfNeeded:] */

void FUN_10317ab38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110617620;
    func_0x000107c613fc(&UNK_110617620,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317acbc;
  }
  func_0x000107c61174(param_1);
  func_0x00010317aa70(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317ac74; end: 10317ac93;  */

void FUN_10317ac74(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd100);
  return;
}



/* Entry: 10317ac94; end: 10317acbb; -[_TtC17LensExplorerSwift30LensExplorerDirectorsPresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317ac94(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010317abc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317acbc; end: 10317acc3;  */

void FUN_10317acbc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317acc4; end: 10317ad93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317acc4(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47260);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f47268) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f47270) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317ad94; end: 10317adf3; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter init] */

void FUN_10317ad94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerGamesPresenter",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317adc0);
  (*pcVar1)();
}



/* Entry: 10317adf4; end: 10317ae2f; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317adf4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47270));
  if (*(long *)(param_1 + _DAT_112f47260) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f47260))[1]);
    return;
  }
  return;
}



/* Entry: 10317ae30; end: 10317ae93; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10317ae30(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112f47270);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar1 = *(undefined1 *)(param_1 + _DAT_112f47268);
  }
  else {
    func_0x000107c61170();
    uVar1 = 1;
  }
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10317ae94; end: 10317afd7; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter presentLensExplorerGamesWith:uiConfiguration:presentationType:lensExplorerRouterDelegate:queryContext:] */

/* WARNING: Possible PIC construction at 0x00010317af80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317af90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317afa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317af94) */
/* WARNING: Removing unreachable block (ram,0x00010317af84) */
/* WARNING: Removing unreachable block (ram,0x00010317afac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317ae94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x0001007662c4(0);
  func_0x000107c610f8();
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f4(param_6,2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x00010436c868(param_6,param_3,param_4,param_5,param_1,param_7);
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112f47270));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10317afd8; end: 10317b09f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317afd8(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f47270);
  lVar4 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47260);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000100b64c10(param_1,param_2);
    func_0x00010058d43c(uVar2,uVar3);
    lVar4 = lVar5;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar5);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 10317b0a0; end: 10317b12b; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter dismissIfNeeded:] */

void FUN_10317b0a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110617648;
    func_0x000107c613fc(&UNK_110617648,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317b228;
  }
  func_0x000107c61174(param_1);
  FUN_10317afd8(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317b12c; end: 10317b12f; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter presentGamesExplorerWith:uiConfiguration:presentationType:lensExplorerRouterDelegate:queryContext:entryCategory:] */

void FUN_10317b12c(void)

{
  return;
}



/* Entry: 10317b130; end: 10317b1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b130(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47260);
  pcVar6 = (code *)*puVar1;
  if (pcVar6 == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar6)();
    func_0x00010058d43c(pcVar6,uVar4);
    uVar4 = *puVar1;
  }
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar4,uVar3);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f47270);
  lVar2 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f47268) = 0;
  return;
}



/* Entry: 10317b1e0; end: 10317b1ff;  */

void FUN_10317b1e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd1c8);
  return;
}



/* Entry: 10317b200; end: 10317b227; -[_TtC17LensExplorerSwift26LensExplorerGamesPresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317b200(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10317b130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317b228; end: 10317b22f;  */

void FUN_10317b228(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317b230; end: 10317b2cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b230(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f472a0;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f472a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f472b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f472b8) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317b2cc; end: 10317b32b; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter init] */

void FUN_10317b2cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerInfoCardPresenter",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317b2f8);
  (*pcVar1)();
}



/* Entry: 10317b32c; end: 10317b387; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b32c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f472b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f472b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f472a0));
  if (*(long *)(param_1 + _DAT_112f472a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f472a8))[1]);
    return;
  }
  return;
}



/* Entry: 10317b388; end: 10317b3bf; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b388(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f472b0);
  if (lVar1 != 0) {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 10317b3c0; end: 10317b4c3; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter presentLensExplorerWith:dataQueryContext:lensId:isMiniCameraMode:lensExplorerRouterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f472a0);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c61174();
  uVar1 = param_7;
  func_0x00010436ce10(param_7,param_3,param_4,param_5,param_2,uVar2,param_6,param_1);
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112f472b0));
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10317b4c4; end: 10317b613; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter setScrollEnabledWithVertical:horizontal:] */

/* WARNING: Possible PIC construction at 0x00010317b52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317b530) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b4c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f472a0);
  func_0x00010436ea18(0);
  func_0x000107c61174(param_1);
  func_0x00010436e7d0(param_3,param_4);
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317b614; end: 10317b753; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter dismissIfNeeded:] */

void FUN_10317b614(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110617670;
    func_0x000107c613fc(&UNK_110617670,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317b79c;
  }
  func_0x000107c61174(param_1);
  func_0x00010317b548(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317b754; end: 10317b773;  */

void FUN_10317b754(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd298);
  return;
}



/* Entry: 10317b774; end: 10317b79b; -[_TtC17LensExplorerSwift29LensExplorerInfoCardPresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317b774(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010317b6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317b79c; end: 10317b7a3;  */

void FUN_10317b79c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317b7a4; end: 10317b86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b7a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f472e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f472f0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317b86c; end: 10317b8cb; -[_TtC17LensExplorerSwift36LensExplorerInfoCardPresenterFactory init] */

void FUN_10317b86c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerInfoCardPresenterFactory",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317b898);
  (*pcVar1)();
}



/* Entry: 10317b8cc; end: 10317b903; -[_TtC17LensExplorerSwift36LensExplorerInfoCardPresenterFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010317b8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317b8ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f472e8));
  return;
}



/* Entry: 10317b904; end: 10317b9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317b904(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f472e8);
  func_0x000107c51968();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f472f0);
  lVar4 = 0;
  FUN_10317b754();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112f472a0;
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar2) = puVar6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f472a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f472b0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112f472b8) = uVar7;
  puVar6 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_50,puVar6);
  return;
}



/* Entry: 10317b9d4; end: 10317b9f3;  */

void FUN_10317b9d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd370);
  return;
}



/* Entry: 10317b9f4; end: 10317badf; -[_TtC17LensExplorerSwift36LensExplorerInfoCardPresenterFactory createLensExplorerInfoCardPresenter] */

void FUN_10317b9f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10317b904();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10317bae0; end: 10317bb3f; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter init] */

void FUN_10317bae0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerMemoriesTemplatePresenter",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317bb0c);
  (*pcVar1)();
}



/* Entry: 10317bb40; end: 10317bb7b; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317bb40(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f47328));
  if (*(long *)(param_1 + _DAT_112f47320) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f47320))[1]);
    return;
  }
  return;
}



/* Entry: 10317bb7c; end: 10317bbc3; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10317bb7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f47328);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 10317bbc4; end: 10317bcd7; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter presentLensExplorerWith:selectedMemoriesCount:lensAutoSelection:lensExplorerRouterDelegate:accessoryView:] */

/* WARNING: Possible PIC construction at 0x00010317bc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317bcb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010317bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317bbc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x0001007662a4(0);
  func_0x000107c610f8();
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_5);
  func_0x000107c615f4(param_6,2);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar1);
  func_0x00010436d294(param_3,param_4,param_5,param_6,param_1,param_7);
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112f47328));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10317bcd8; end: 10317bd9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317bcd8(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f47328);
  lVar4 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  else {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47320);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    func_0x000100b64c10(param_1,param_2);
    func_0x00010058d43c(uVar2,uVar3);
    lVar4 = lVar5;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar5);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 10317bda0; end: 10317bedb; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter dismissIfNeeded:] */

void FUN_10317bda0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110617698;
    func_0x000107c613fc(&UNK_110617698,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317bf24;
  }
  func_0x000107c61174(param_1);
  FUN_10317bcd8(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317bedc; end: 10317befb;  */

void FUN_10317bedc(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd438);
  return;
}



/* Entry: 10317befc; end: 10317bf23; -[_TtC17LensExplorerSwift37LensExplorerMemoriesTemplatePresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317befc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010317be2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317bf24; end: 10317bf2b;  */

void FUN_10317bf24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317bf2c; end: 10317c06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10317bf2c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = _DAT_112f47358;
  func_0x000107c61614(unaff_x20 + _DAT_112f47358,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f47360,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47368);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 10317c06c; end: 10317c0cb; -[_TtC17LensExplorerSwift21LensExplorerPresenter init] */

void FUN_10317c06c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerPresenter",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317c098);
  (*pcVar1)();
}



/* Entry: 10317c0cc; end: 10317c117; -[_TtC17LensExplorerSwift21LensExplorerPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c0cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f47358);
  FUN_10317cadc(param_1 + _DAT_112f47360);
  if (*(long *)(param_1 + _DAT_112f47368) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f47368))[1]);
    return;
  }
  return;
}



/* Entry: 10317c118; end: 10317c267; -[_TtC17LensExplorerSwift21LensExplorerPresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c118(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112f47358;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_1);
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10317c268; end: 10317c2af; -[_TtC17LensExplorerSwift21LensExplorerPresenter setRoutingDelegate:] */

void FUN_10317c268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x00010317c19c(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317c2b0; end: 10317c36b;  */

/* WARNING: Possible PIC construction at 0x00010317c350: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c2b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f47360;
  func_0x000107c61618(lVar1);
  func_0x00010073abb4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x00010436d8cc(param_1,param_2,lVar1);
  lVar1 = unaff_x20 + _DAT_112f47358;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42c1c();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317c36c; end: 10317c3d7; -[_TtC17LensExplorerSwift21LensExplorerPresenter presentLensExplorerFrom:configuration:] */

/* WARNING: Possible PIC construction at 0x00010317c3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317c3bc) */

void FUN_10317c36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10317c2b0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10317c3d8; end: 10317c48f;  */

/* WARNING: Possible PIC construction at 0x00010317c474: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c3d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f47360;
  func_0x000107c61618(lVar1);
  func_0x00010073abb4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x00010436db1c(param_1,param_2,lVar1);
  lVar1 = unaff_x20 + _DAT_112f47358;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42c1c();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317c490; end: 10317c4fb; -[_TtC17LensExplorerSwift21LensExplorerPresenter presentLensExplorerWith:configuration:] */

/* WARNING: Possible PIC construction at 0x00010317c4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317c4e8) */

void FUN_10317c490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10317c3d8(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10317c4fc; end: 10317c5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c4fc(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar4 = unaff_x20 + _DAT_112f47358;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000107c61170(lVar5);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f47368);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = param_1;
      puVar1[1] = param_2;
      func_0x000100b64c10(param_1,param_2);
      func_0x00010058d43c(uVar2,uVar3);
      lVar5 = _DAT_112f47358;
      lVar4 = unaff_x20 + _DAT_112f47358;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar6 = lVar4;
        func_0x000107c5194c();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar6 != 0) {
          func_0x000107c61170(lVar6);
          lVar5 = unaff_x20 + lVar5;
          func_0x000107c61618();
          if (lVar5 != 0) {
            lVar4 = lVar5;
            func_0x000107c4ffe8();
            func_0x000107c61180();
            func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
            return;
          }
        }
      }
      return;
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 10317c5b4; end: 10317c64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c5b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = _DAT_112f47358;
  lVar1 = unaff_x20 + _DAT_112f47358;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      lVar3 = unaff_x20 + lVar3;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000107c4ffe8();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10317c64c; end: 10317c6d7; -[_TtC17LensExplorerSwift21LensExplorerPresenter dismissIfNeeded:] */

void FUN_10317c64c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106176c0;
    func_0x000107c613fc(&UNK_1106176c0,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317cad4;
  }
  func_0x000107c61174(param_1);
  FUN_10317c4fc(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317c6d8; end: 10317c793; -[_TtC17LensExplorerSwift21LensExplorerPresenter presentLensExplorerFrom:presentationType:source:cameraSource:] */

/* WARNING: Possible PIC construction at 0x00010317c768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317c778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317c76c) */
/* WARNING: Removing unreachable block (ram,0x00010317c77c) */

void FUN_10317c6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1b58;
  func_0x000107c610f8(PTR_PTR_1126b1b58);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c48890(puVar1);
  FUN_10317c2b0(param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10317c794; end: 10317c8ef;  */

/* WARNING: Possible PIC construction at 0x00010317c7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317c820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317c85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317c8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317c824) */
/* WARNING: Removing unreachable block (ram,0x00010317c828) */
/* WARNING: Removing unreachable block (ram,0x00010317c8cc) */
/* WARNING: Removing unreachable block (ram,0x00010317c850) */
/* WARNING: Removing unreachable block (ram,0x00010317c7f0) */
/* WARNING: Removing unreachable block (ram,0x00010317c7f4) */
/* WARNING: Removing unreachable block (ram,0x00010317c808) */
/* WARNING: Removing unreachable block (ram,0x00010317c860) */
/* WARNING: Removing unreachable block (ram,0x00010317c8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317c794(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined *)(unaff_x20 + _DAT_112f47358);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b1b58;
    func_0x000107c610f8(PTR_PTR_1126b1b58);
    func_0x000107c48890();
    FUN_10317c2b0(param_1,puVar1);
  }
  else {
    func_0x000107c5194c();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10317c8f0; end: 10317c977; -[_TtC17LensExplorerSwift21LensExplorerPresenter presentLensExplorerOrFeedFullPageFrom:presentationType:source:cameraSource:] */

/* WARNING: Possible PIC construction at 0x00010317c954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317c958) */

void FUN_10317c8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10317c794(param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10317c978; end: 10317ca47; -[_TtC17LensExplorerSwift21LensExplorerPresenter presentLensExplorerFrom:source:cameraSource:] */

/* WARNING: Possible PIC construction at 0x00010317ca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010317ca2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010317ca20) */
/* WARNING: Removing unreachable block (ram,0x00010317ca30) */

void FUN_10317c978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1b50;
  func_0x000107c61168(PTR_PTR_1126b1b50);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c3f6fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b1b58;
  func_0x000107c610f8(PTR_PTR_1126b1b58);
  func_0x000107c48890();
  FUN_10317c2b0(param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10317ca48; end: 10317cad3; -[_TtC17LensExplorerSwift21LensExplorerPresenter lensExplorerRouterDidEndLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317ca48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f47368);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 == (code *)0x0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar4,uVar3);
    (*pcVar4)();
    func_0x00010058d43c(pcVar4,uVar3);
    uVar3 = *puVar1;
  }
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010058d43c(uVar3,uVar2);
  FUN_10317c5b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317cad4; end: 10317cadb;  */

void FUN_10317cad4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100f4d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317cadc; end: 10317cbb7;  */

undefined8 FUN_10317cadc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10317cbb8; end: 10317cc17; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter init] */

void FUN_10317cbb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerSwift.LensExplorerSpectaclesPresenter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317cbe4);
  (*pcVar1)();
}



/* Entry: 10317cc18; end: 10317cc53; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317cc18(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f473a0));
  if (*(long *)(param_1 + _DAT_112f47398) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f47398))[1]);
    return;
  }
  return;
}



/* Entry: 10317cc54; end: 10317cc9b; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter exists] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10317cc54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f473a0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 10317cc9c; end: 10317ce1f; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter presentLensExplorerFrom:lensExplorerRouterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317cc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000100765e7c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x00010436e09c();
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112f473a0));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 10317ce20; end: 10317cf5b; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter dismissIfNeeded:] */

void FUN_10317ce20(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1106176e8;
    func_0x000107c613fc(&UNK_1106176e8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_10317cfa4;
  }
  func_0x000107c61174(param_1);
  func_0x00010317cd58(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317cf5c; end: 10317cf7b;  */

void FUN_10317cf5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd5d0);
  return;
}



/* Entry: 10317cf7c; end: 10317cfa3; -[_TtC17LensExplorerSwift31LensExplorerSpectaclesPresenter lensExplorerRouterDidEndLifecycle] */

void FUN_10317cf7c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010317ceac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10317cfa4; end: 10317cfaf;  */

void FUN_10317cfa4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010317cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10317cfb0; end: 10317e2a7;  */

void FUN_10317cfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_1106177e8;
  func_0x000107c613fc(&UNK_1106177e8,0x1b0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_44;
  *(undefined8 *)(puVar1 + 0x18) = param_45;
  *(undefined8 *)(puVar1 + 0x20) = param_47;
  *(undefined8 *)(puVar1 + 0x28) = param_48;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_35;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_14;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_16;
  *(undefined8 *)(puVar1 + 0x70) = param_6;
  *(undefined8 *)(puVar1 + 0x78) = param_20;
  *(undefined8 *)(puVar1 + 0x80) = param_34;
  *(undefined8 *)(puVar1 + 0x88) = param_7;
  *(undefined8 *)(puVar1 + 0x90) = param_8;
  *(undefined8 *)(puVar1 + 0x98) = param_46;
  *(undefined8 *)(puVar1 + 0xa0) = param_10;
  *(undefined8 *)(puVar1 + 0xa8) = param_11;
  *(undefined8 *)(puVar1 + 0xb0) = param_9;
  *(undefined8 *)(puVar1 + 0xb8) = param_12;
  *(undefined8 *)(puVar1 + 0xc0) = param_13;
  *(undefined8 *)(puVar1 + 200) = param_17;
  *(undefined8 *)(puVar1 + 0xd0) = param_18;
  *(undefined8 *)(puVar1 + 0xd8) = param_19;
  *(undefined8 *)(puVar1 + 0xe0) = param_23;
  *(undefined8 *)(puVar1 + 0xe8) = param_22;
  *(undefined8 *)(puVar1 + 0xf0) = param_21;
  *(undefined8 *)(puVar1 + 0xf8) = param_33;
  *(undefined8 *)(puVar1 + 0x100) = param_24;
  *(undefined8 *)(puVar1 + 0x108) = param_26;
  *(undefined8 *)(puVar1 + 0x110) = param_25;
  *(undefined8 *)(puVar1 + 0x118) = param_30;
  *(undefined8 *)(puVar1 + 0x120) = param_27;
  *(undefined8 *)(puVar1 + 0x128) = param_1;
  *(undefined8 *)(puVar1 + 0x130) = param_28;
  *(undefined8 *)(puVar1 + 0x138) = param_29;
  *(undefined8 *)(puVar1 + 0x140) = param_36;
  *(undefined8 *)(puVar1 + 0x148) = param_31;
  *(undefined8 *)(puVar1 + 0x150) = param_32;
  *(undefined8 *)(puVar1 + 0x158) = param_38;
  *(undefined8 *)(puVar1 + 0x160) = param_37;
  *(undefined8 *)(puVar1 + 0x168) = param_39;
  *(undefined8 *)(puVar1 + 0x170) = param_40;
  *(undefined8 *)(puVar1 + 0x178) = param_41;
  *(undefined8 *)(puVar1 + 0x180) = param_42;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_43;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_50;
  *(undefined8 *)(puVar1 + 0x1a8) = param_52;
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_52);
  func_0x0001000823a8(0x10317d3c4,puVar1);
  return;
}



/* Entry: 10317e2a8; end: 10317e2cb;  */

undefined1  [16] FUN_10317e2a8(void)

{
  return ZEXT816(0x110617810);
}



/* Entry: 10317e2cc; end: 10317e377;  */

void FUN_10317e2cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10317e378; end: 10317e387;  */

void FUN_10317e378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10317e388; end: 10317e3d3; -[SCMemTwoChatMediaDrawerConversation recipientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e388(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f473d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f473d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10317e3d4; end: 10317e3e3; -[SCMemTwoChatMediaDrawerConversation isGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10317e3d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f473d8);
}



/* Entry: 10317e3e4; end: 10317e44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e3e4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f473d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f473d8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317e450; end: 10317e4c3; -[SCMemTwoChatMediaDrawerConversation initWithRecipientId:isGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e450(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f473d0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112f473d8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10317e4c4; end: 10317e523; -[SCMemTwoChatMediaDrawerConversation init] */

void FUN_10317e4c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentAPI.MemTwoChatMediaDrawerConversation",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10317e4f0);
  (*pcVar1)();
}



/* Entry: 10317e524; end: 10317e53b; -[SCMemTwoChatMediaDrawerConversation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f473d0 + 8))
  ;
  return;
}



/* Entry: 10317e53c; end: 10317e57b;  */

void FUN_10317e53c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f473e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db94360;
  func_0x000107c61520(&UNK_10db94360,&UNK_110617920);
  puRam0000000112f473e0 = puVar1;
  return;
}



/* Entry: 10317e57c; end: 10317e6df;  */

int FUN_10317e57c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10317e5f8;
        goto LAB_10317e5dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10317e5dc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10317e5f8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10317e6e0; end: 10317e6ff;  */

void FUN_10317e6e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bd698);
  return;
}



/* Entry: 10317e700; end: 10317e823;  */

void FUN_10317e700(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10317e824; end: 10317e9cb;  */

void FUN_10317e824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_110617ab8;
  func_0x000107c613fc(&UNK_110617ab8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x10317e8bc,puVar1);
  return;
}



/* Entry: 10317e9cc; end: 10317e9db;  */

undefined1  [16] FUN_10317e9cc(void)

{
  return ZEXT816(0x110617ae0);
}



/* Entry: 10317e9dc; end: 10317e9eb; -[_TtC27ChatInputReactionMenuPlugin27ChatInputReactionMenuPlugin inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10317e9dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f47420));
  return;
}


