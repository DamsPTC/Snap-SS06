/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101412ac4; end: 101412aeb; -[_TtC17COSPasskeyFeature35COSPasskeyAuthFailureViewController viewDidLoad] */

void FUN_101412ac4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101412984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101412aec; end: 10141303b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101412aec(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  func_0x0001000bb420(param_1,auStack_60);
  uVar5 = 0;
  FUN_101413da4(0);
  plVar6 = &lStack_68;
  func_0x000107c6147c(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
  if (((ulong)plVar6 & 1) != 0) {
    pbVar1 = (byte *)(lStack_68 + _DAT_112d7d930);
    bVar3 = *pbVar1;
    bVar4 = pbVar1[1];
    uVar5 = *(undefined8 *)(pbVar1 + 8);
    uVar2 = *(undefined8 *)(pbVar1 + 0x10);
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lStack_68);
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(uVar2);
    }
    else {
      uVar7 = 0x100;
      if (bVar4 == 0) {
        uVar7 = 0;
      }
      func_0x000101412be4(uVar7 | bVar3,uVar5,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10141303c; end: 1014134c3;  */

/* WARNING: Possible PIC construction at 0x000101413090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014130c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014131d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014131d8) */
/* WARNING: Removing unreachable block (ram,0x00010141317c) */
/* WARNING: Removing unreachable block (ram,0x0001014130c8) */
/* WARNING: Removing unreachable block (ram,0x000101413094) */
/* WARNING: Removing unreachable block (ram,0x000101413234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141303c(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7d900);
  puVar1 = &DAT_112d7d8f0;
  FUN_101412590(&DAT_112d7d8f0,&UNK_1052199f0,&PTR_s_tryAgainButtonTapped_112524c00);
  func_0x000107c3d5b4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1014134c4; end: 1014135db;  */

/* WARNING: Possible PIC construction at 0x000101413588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141358c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014134c4(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7d8d0);
  FUN_101411b78(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  func_0x000107c5e308(uVar2);
  func_0x000107c61180();
  func_0x000107c5e308(*(undefined8 *)(unaff_x20 + _DAT_112d7d8c0));
  func_0x000107c61180();
  func_0x000107c40280(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1014135dc; end: 101413abf;  */

/* WARNING: Possible PIC construction at 0x00010141362c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141367c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014137ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014137e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014138f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014139b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413a60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101413a0c) */
/* WARNING: Removing unreachable block (ram,0x0001014139b4) */
/* WARNING: Removing unreachable block (ram,0x00010141395c) */
/* WARNING: Removing unreachable block (ram,0x0001014138fc) */
/* WARNING: Removing unreachable block (ram,0x00010141389c) */
/* WARNING: Removing unreachable block (ram,0x000101413844) */
/* WARNING: Removing unreachable block (ram,0x0001014137e4) */
/* WARNING: Removing unreachable block (ram,0x0001014137b0) */
/* WARNING: Removing unreachable block (ram,0x00010141376c) */
/* WARNING: Removing unreachable block (ram,0x000101413718) */
/* WARNING: Removing unreachable block (ram,0x000101413680) */
/* WARNING: Removing unreachable block (ram,0x000101413658) */
/* WARNING: Removing unreachable block (ram,0x000101413630) */
/* WARNING: Removing unreachable block (ram,0x000101413a64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014135dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d7d8d0);
  FUN_1014122b0();
  func_0x000107c3d89c(uVar1,param_2,param_1);
  func_0x000107c5a050(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101413ac0; end: 101413ac7; -[_TtC17COSPasskeyFeature35COSPasskeyAuthFailureViewController tryAgainButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413ac0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d7d8b0);
  lVar2 = 0;
  func_0x000101411ea8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112d7d7c0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c424b8(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 101413ac8; end: 101413acf; -[_TtC17COSPasskeyFeature35COSPasskeyAuthFailureViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413ac8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d7d8b0);
  lVar2 = 0;
  func_0x000101411ea8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112d7d7c0) = 1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c424b8(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 101413ad0; end: 101413b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413ad0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d7d8b0);
  lVar2 = 0;
  func_0x000101411ea8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112d7d7c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c424b8(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 101413b70; end: 101413bcf; -[_TtC17COSPasskeyFeature35COSPasskeyAuthFailureViewController initWithNibName:bundle:] */

void FUN_101413b70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyAuthFailureViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101413b9c);
  (*pcVar1)();
}



/* Entry: 101413bd0; end: 101413c9b; -[_TtC17COSPasskeyFeature35COSPasskeyAuthFailureViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101413bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101413c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101413c54) */
/* WARNING: Removing unreachable block (ram,0x000101413c34) */
/* WARNING: Removing unreachable block (ram,0x000101413c14) */
/* WARNING: Removing unreachable block (ram,0x000101413bf0) */
/* WARNING: Removing unreachable block (ram,0x000101413c74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7d8b0));
  return;
}



/* Entry: 101413c9c; end: 101413cbb;  */

void FUN_101413c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3670);
  return;
}



/* Entry: 101413cbc; end: 101413d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413cbc(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  func_0x0001000bb420(param_1,auStack_60);
  uVar5 = 0;
  FUN_101413da4(0);
  plVar6 = &lStack_68;
  func_0x000107c6147c(plVar6,auStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
  if (((ulong)plVar6 & 1) != 0) {
    pbVar1 = (byte *)(lStack_68 + _DAT_112d7d930);
    bVar3 = *pbVar1;
    bVar4 = pbVar1[1];
    uVar5 = *(undefined8 *)(pbVar1 + 8);
    uVar2 = *(undefined8 *)(pbVar1 + 0x10);
    func_0x000107c61434(uVar2);
    func_0x000107c61170(lStack_68);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar7 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar7 == 0) {
      func_0x000107c6142c(uVar2);
    }
    else {
      uVar8 = 0x100;
      if (bVar4 == 0) {
        uVar8 = 0;
      }
      func_0x000101412be4(uVar8 | bVar3,uVar5,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 101413d30; end: 101413d8f; -[_TtC17COSPasskeyFeature33COSPasskeyAuthFailureViewModelBox init] */

void FUN_101413d30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyAuthFailureViewModelBox",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101413d5c);
  (*pcVar1)();
}



/* Entry: 101413d90; end: 101413da3; -[_TtC17COSPasskeyFeature33COSPasskeyAuthFailureViewModelBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101413d90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d7d930 + 0x10));
  return;
}



/* Entry: 101413da4; end: 101413dc3;  */

void FUN_101413da4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3780);
  return;
}



/* Entry: 101413dc4; end: 101413dcb;  */

void FUN_101413dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101413dcc; end: 101413e8f;  */

undefined2 * FUN_101413dcc(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101413e90; end: 101413f37;  */

int FUN_101413e90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101413f38; end: 101413fd7;  */

void FUN_101413f38(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101413fd8; end: 101414057; -[_TtC17COSPasskeyFeature33COSPasskeyEnrollmentMainActionBox init] */

void FUN_101413fd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyEnrollmentMainActionBox",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101414004);
  (*pcVar1)();
}



/* Entry: 101414058; end: 101414147;  */

uint FUN_101414058(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101414148; end: 101414187;  */

void FUN_101414148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7d988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93bf70;
  func_0x000107c61520(&UNK_10d93bf70,&UNK_1103b47d8);
  puRam0000000112d7d988 = puVar1;
  return;
}



/* Entry: 101414188; end: 1014141ff; -[_TtC17COSPasskeyFeature37COSPasskeyEnrollmentMainBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414188(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined1 *)(param_1 + _DAT_112d7d998);
  uVar3 = ((undefined1 *)(param_1 + _DAT_112d7d998))[1];
  lVar4 = 0;
  func_0x000101416d10();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined1 *)(lVar5 + _DAT_112d7db68);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101414200; end: 101414277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414200(void)

{
  long lVar1;
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + _DAT_112d7d998) = 0x100;
  lVar1 = unaff_x20;
  func_0x000107c424e8();
  func_0x000107c61180();
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
  lVar1 = unaff_x20 + _DAT_112d7d990;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42900();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101414278; end: 10141429f; -[_TtC17COSPasskeyFeature37COSPasskeyEnrollmentMainBusinessLogic handleAction:] */

void FUN_101414278(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101414200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014142a0; end: 1014142ff; -[_TtC17COSPasskeyFeature37COSPasskeyEnrollmentMainBusinessLogic init] */

void FUN_1014142a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyEnrollmentMainBusinessLogic",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014142cc);
  (*pcVar1)();
}



/* Entry: 101414300; end: 10141430f; -[_TtC17COSPasskeyFeature37COSPasskeyEnrollmentMainBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101414300(long param_1)

{
  param_1 = param_1 + _DAT_112d7d990;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101414310; end: 10141432f;  */

void FUN_101414310(void)

{
  func_0x000107c61168(&PTR_PTR_112d7d9e0);
  return;
}



/* Entry: 101414330; end: 101414353;  */

undefined8 FUN_101414330(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101414354; end: 1014144d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414354(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined2 *)(unaff_x20 + _DAT_112d7da50) = 2;
  lVar1 = _DAT_112d7da58;
  puVar2 = PTR_PTR_1126af078;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da60;
  puVar2 = PTR_PTR_1126af080;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da68;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da70;
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da78;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da80;
  uVar3 = 0;
  FUN_101415e54();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d7da88;
  uVar3 = 0;
  FUN_101416494();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d7da90;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112d7da98;
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7da48) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1014144d4; end: 1014146af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014144d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined2 *)(unaff_x20 + _DAT_112d7da50) = 2;
  lVar1 = _DAT_112d7da58;
  puVar10 = PTR_PTR_1126af078;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar10;
  lVar2 = _DAT_112d7da60;
  puVar10 = PTR_PTR_1126af080;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar10;
  lVar3 = _DAT_112d7da68;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar10;
  lVar4 = _DAT_112d7da70;
  puVar10 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar10;
  lVar5 = _DAT_112d7da78;
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar10;
  lVar6 = _DAT_112d7da80;
  uVar11 = 0;
  FUN_101415e54();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar11;
  lVar7 = _DAT_112d7da88;
  uVar11 = 0;
  FUN_101416494();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar7) = uVar11;
  lVar8 = _DAT_112d7da90;
  puVar10 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar10;
  lVar9 = _DAT_112d7da98;
  puVar10 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar9) = puVar10;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar5));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar7));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar9));
  func_0x000107c61464();
  return 0;
}



/* Entry: 1014146b0; end: 1014146db; -[_TtC17COSPasskeyFeature38COSPasskeyEnrollmentMainViewController initWithCoder:] */

undefined8 FUN_1014146b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1014144d4();
  return 0;
}



/* Entry: 1014146dc; end: 10141481f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014146dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    FUN_101414928();
    func_0x000101414bec();
    FUN_101414f14();
    func_0x000101415158();
    FUN_101415394();
    FUN_1014154ac();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d7da48);
    puVar3 = &UNK_1103b4830;
    func_0x000107c613fc(&UNK_1103b4830,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_101416c64;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10115ae3c;
    puStack_58 = &UNK_1103b4848;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5bb90(uVar5);
    func_0x000107c60bd0(ppuVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101414820);
  (*pcVar1)();
}



/* Entry: 101414820; end: 101414847; -[_TtC17COSPasskeyFeature38COSPasskeyEnrollmentMainViewController viewDidLoad] */

void FUN_101414820(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014146dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101414848; end: 101414927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414848(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  ushort uVar5;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar3 = 0;
  func_0x000101416d10(0);
  plVar4 = &lStack_58;
  func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    bVar1 = *(byte *)(lStack_58 + _DAT_112d7db68);
    bVar2 = ((byte *)(lStack_58 + _DAT_112d7db68))[1];
    func_0x000107c61170();
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar5 = 0x100;
      if (bVar2 == 0) {
        uVar5 = 0;
      }
      *(ushort *)(param_2 + _DAT_112d7da50) = uVar5 | bVar1;
      func_0x000107c54514(*(undefined8 *)(param_2 + _DAT_112d7da98));
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101414928; end: 101414f13;  */

/* WARNING: Possible PIC construction at 0x000101414978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014149b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014149d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101414b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101414b6c) */
/* WARNING: Removing unreachable block (ram,0x000101414b08) */
/* WARNING: Removing unreachable block (ram,0x000101414be8) */
/* WARNING: Removing unreachable block (ram,0x000101414b3c) */
/* WARNING: Removing unreachable block (ram,0x000101414ae8) */
/* WARNING: Removing unreachable block (ram,0x000101414a98) */
/* WARNING: Removing unreachable block (ram,0x000101414be4) */
/* WARNING: Removing unreachable block (ram,0x000101414acc) */
/* WARNING: Removing unreachable block (ram,0x000101414a78) */
/* WARNING: Removing unreachable block (ram,0x000101414a5c) */
/* WARNING: Removing unreachable block (ram,0x0001014149dc) */
/* WARNING: Removing unreachable block (ram,0x000101414be0) */
/* WARNING: Removing unreachable block (ram,0x000101414a40) */
/* WARNING: Removing unreachable block (ram,0x0001014149b8) */
/* WARNING: Removing unreachable block (ram,0x00010141497c) */
/* WARNING: Removing unreachable block (ram,0x000101414b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414928(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7da58);
    func_0x000107c3d89c();
    func_0x000107c5a050(uVar3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101414be0);
  (*pcVar1)();
}



/* Entry: 101414f14; end: 101415393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101414f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d7da68);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7da98);
  func_0x000107c3d89c(uVar8,param_2,uVar7);
  func_0x000107c5a050(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 7;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  uVar5 = uVar7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c4acb0(uVar8);
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c40284(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  uVar5 = uVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c5ce8c(uVar8);
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c40284(0xc040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  uVar5 = uVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c40284(0xc041000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar6 = puVar2;
  func_0x000107c5fc48(puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000105219960();
  func_0x000107c61180();
  func_0x000107c59e1c(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c52b54(uVar7);
  func_0x000107c59e34(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_addTarget_action_forControlEvent_11259c900);
  return;
}



/* Entry: 101415394; end: 1014154ab;  */

/* WARNING: Possible PIC construction at 0x000101415458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141545c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101415394(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7da78);
  FUN_101411b78(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  func_0x000107c5e308(uVar2);
  func_0x000107c61180();
  func_0x000107c5e308(*(undefined8 *)(unaff_x20 + _DAT_112d7da68));
  func_0x000107c61180();
  func_0x000107c40280(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1014154ac; end: 101415a8f;  */

/* WARNING: Possible PIC construction at 0x000101415580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014155dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014156d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141576c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014157c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014158d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014159d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014159dc) */
/* WARNING: Removing unreachable block (ram,0x000101415984) */
/* WARNING: Removing unreachable block (ram,0x00010141592c) */
/* WARNING: Removing unreachable block (ram,0x0001014158d4) */
/* WARNING: Removing unreachable block (ram,0x000101415874) */
/* WARNING: Removing unreachable block (ram,0x00010141581c) */
/* WARNING: Removing unreachable block (ram,0x0001014157c4) */
/* WARNING: Removing unreachable block (ram,0x000101415770) */
/* WARNING: Removing unreachable block (ram,0x0001014156dc) */
/* WARNING: Removing unreachable block (ram,0x000101415680) */
/* WARNING: Removing unreachable block (ram,0x000101415658) */
/* WARNING: Removing unreachable block (ram,0x000101415684) */
/* WARNING: Removing unreachable block (ram,0x00010141568c) */
/* WARNING: Removing unreachable block (ram,0x000101415668) */
/* WARNING: Removing unreachable block (ram,0x000101415608) */
/* WARNING: Removing unreachable block (ram,0x0001014155e0) */
/* WARNING: Removing unreachable block (ram,0x00010141560c) */
/* WARNING: Removing unreachable block (ram,0x000101415614) */
/* WARNING: Removing unreachable block (ram,0x0001014155f0) */
/* WARNING: Removing unreachable block (ram,0x000101415584) */
/* WARNING: Removing unreachable block (ram,0x000101415a34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014154ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7da78);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d7da80);
  func_0x000107c3d89c(uVar2,param_2,uVar4);
  func_0x000107c5a050(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d7da88);
  func_0x000107c3d89c(uVar2);
  func_0x000107c5a050(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7da90);
  func_0x000107c3d89c(uVar2);
  func_0x000107c5a050(lVar3);
  func_0x000107c52b2c(lVar3);
  lVar1 = lVar3;
  func_0x000107c59594(0x4020000000000000);
  func_0x000105219978();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = 0;
    FUN_101416c44(0);
    func_0x000107c610f8();
    lVar1 = 0x64696863756f74;
    FUN_1014164b4(0x64696863756f74,0xe700000000000000,0,0,uVar2);
    func_0x000107c3d5b4(lVar3);
  }
  else {
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101415a90; end: 101415b1b; -[_TtC17COSPasskeyFeature38COSPasskeyEnrollmentMainViewController createButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101415a90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &uStack_40;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112d7da48);
  uVar2 = 0;
  func_0x000101414038();
  uVar3 = uVar2;
  func_0x000107c610f8();
  puVar1 = PTR_s_init_1125d9248;
  uStack_40 = uVar3;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1);
  func_0x000107c424b8(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101415b1c; end: 101415b7b; -[_TtC17COSPasskeyFeature38COSPasskeyEnrollmentMainViewController initWithNibName:bundle:] */

void FUN_101415b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyEnrollmentMainViewController",0x38,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101415b48);
  (*pcVar1)();
}



/* Entry: 101415b7c; end: 101415c33; -[_TtC17COSPasskeyFeature38COSPasskeyEnrollmentMainViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101415b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101415c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101415bfc) */
/* WARNING: Removing unreachable block (ram,0x000101415bdc) */
/* WARNING: Removing unreachable block (ram,0x000101415bbc) */
/* WARNING: Removing unreachable block (ram,0x000101415b9c) */
/* WARNING: Removing unreachable block (ram,0x000101415c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101415b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7da48));
  return;
}



/* Entry: 101415c34; end: 101415c53;  */

void FUN_101415c34(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3948);
  return;
}



/* Entry: 101415c54; end: 101415d57;  */

undefined1 * FUN_101415c54(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_101415e54();
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffc0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c53840();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef3df80);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5c604();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c55258(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 101415d58; end: 101415d77; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView init] */

void FUN_101415d58(void)

{
  FUN_101415c54();
  return;
}



/* Entry: 101415d78; end: 101415db3; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView initWithCoder:] */

undefined8 FUN_101415d78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101415e54(0);
  func_0x000107c61464(param_1,uVar1,8,7);
  return 0;
}



/* Entry: 101415db4; end: 101415dc3; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView intrinsicContentSize] */

void FUN_101415db4(void)

{
  return;
}



/* Entry: 101415dc4; end: 101415def; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView initWithImage:] */

void FUN_101415dc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyKeyImageView",0x28,"init(image:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101415df0);
  (*pcVar1)();
}



/* Entry: 101415df0; end: 101415e1b; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView initWithImage:highlightedImage:] */

void FUN_101415df0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyKeyImageView",0x28,
                      "init(image:highlightedImage:)",0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101415e1c);
  (*pcVar1)();
}



/* Entry: 101415e1c; end: 101415e47; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D22COSPasskeyKeyImageView initWithFrame:] */

void FUN_101415e1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyKeyImageView",0x28,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101415e48);
  (*pcVar1)();
}



/* Entry: 101415e48; end: 101415e53;  */

void FUN_101415e48(void)

{
  FUN_101415e54();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101415e54; end: 101415e73;  */

void FUN_101415e54(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3a58);
  return;
}



/* Entry: 101415e74; end: 101415f3b; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyExplanatoryView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101415e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112d7daf0;
  plVar4 = &lStack_60;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_5 + lVar1) = puVar2;
  lVar1 = _DAT_112d7daf8;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_5 + lVar1) = puVar2;
  uVar3 = 0;
  FUN_101416494();
  lStack_60 = param_5;
  uStack_58 = uVar3;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_60,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_101415ff0();
  func_0x000107c61170(plVar4);
  return (undefined1 *)plVar4;
}



/* Entry: 101415f3c; end: 101415fef; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyExplanatoryView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101415f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7daf0;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar2 = _DAT_112d7daf8;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_3);
  *(undefined **)(param_1 + lVar2) = puVar3;
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61170(*(undefined8 *)(param_1 + lVar2));
  uVar4 = 0;
  FUN_101416494(0);
  func_0x000107c61464(param_1,uVar4,0x18,7);
  return 0;
}



/* Entry: 101415ff0; end: 10141644f;  */

/* WARNING: Possible PIC construction at 0x0001014160b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101416108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141615c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014161a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014161d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141623c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101416270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101416304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101416358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014163ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101416400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014163b0) */
/* WARNING: Removing unreachable block (ram,0x00010141635c) */
/* WARNING: Removing unreachable block (ram,0x000101416308) */
/* WARNING: Removing unreachable block (ram,0x000101416274) */
/* WARNING: Removing unreachable block (ram,0x000101416240) */
/* WARNING: Removing unreachable block (ram,0x0001014161d4) */
/* WARNING: Removing unreachable block (ram,0x0001014161a4) */
/* WARNING: Removing unreachable block (ram,0x000101416160) */
/* WARNING: Removing unreachable block (ram,0x00010141610c) */
/* WARNING: Removing unreachable block (ram,0x0001014160b8) */
/* WARNING: Removing unreachable block (ram,0x000101416404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101415ff0(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d7daf0);
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 7;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  func_0x000107c5cbe4(uVar2);
  func_0x000107c61180();
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c40280(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101416450; end: 10141645b;  */

void FUN_101416450(void)

{
  FUN_101416494();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10141645c; end: 101416493; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyExplanatoryView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101416478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141647c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141645c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7daf0));
  return;
}



/* Entry: 101416494; end: 1014164b3;  */

void FUN_101416494(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3b08);
  return;
}



/* Entry: 1014164b4; end: 101416a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014164b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  
  lVar1 = _DAT_112d7db28;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7db30;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112d7db38;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_101416c44();
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  lVar1 = _DAT_112d7db28;
  uVar12 = *(undefined8 *)(puVar4 + _DAT_112d7db28);
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar12);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c61174(uVar12);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5c604();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c55258(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar3);
  func_0x000107c53840(*(undefined8 *)(puVar4 + lVar1));
  func_0x000107c59e10(*(undefined8 *)(puVar4 + lVar1));
  lVar2 = _DAT_112d7db30;
  uVar12 = *(undefined8 *)(puVar5 + _DAT_112d7db30);
  func_0x000107c61174(uVar12);
  func_0x000107c3d89c(puVar5);
  func_0x000107c5a050(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c56ba8(*(undefined8 *)(puVar5 + lVar2));
  uVar12 = *(undefined8 *)(puVar5 + lVar2);
  if (param_4 == 0) {
    func_0x000107c61174(uVar12);
    param_3 = 0;
  }
  else {
    func_0x000107c61174(uVar12);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
  func_0x000107c59c6c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(param_3);
  func_0x000107c5a100(*(undefined8 *)(puVar5 + lVar2));
  func_0x000107c59c78(*(undefined8 *)(puVar5 + lVar2));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 0x13;
  *(undefined8 *)(puVar6 + 0x10) = 9;
  puVar7 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar8 = puVar7;
  func_0x000107c402a0(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  *(undefined1 **)(puVar6 + 0x20) = puVar8;
  uVar9 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c4acb0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  uVar9 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c3f764(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  uVar9 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  *(undefined8 *)(puVar6 + 0x38) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5ce8c(uVar10);
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(puVar6 + 0x40) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c5ce8c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c3f764(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar6 + 0x50) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c5cbe4(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar6 + 0x58) = uVar12;
  uVar9 = *(undefined8 *)(puVar5 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar4 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar12 = uVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar6 + 0x60) = uVar12;
  uVar12 = 0;
  func_0x000100847984(0);
  puVar11 = puVar6;
  func_0x000107c5fc48(puVar6,uVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar11);
  return puVar5;
}



/* Entry: 101416a94; end: 101416b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101416a94(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d7db28;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar2 = _DAT_112d7db30;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar3 = _DAT_112d7db38;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  FUN_101416c44(0);
  func_0x000107c61464();
  return 0;
}



/* Entry: 101416b64; end: 101416b8b; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyLoginOptionView initWithCoder:] */

void FUN_101416b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101416a94();
  return;
}



/* Entry: 101416b8c; end: 101416bb7; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyLoginOptionView initWithFrame:] */

void FUN_101416b8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyLoginOptionView",0x2b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101416bb8);
  (*pcVar1)();
}



/* Entry: 101416bb8; end: 101416bc3;  */

void FUN_101416bb8(void)

{
  FUN_101416c44();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101416bc4; end: 101416bfb;  */

void FUN_101416bc4(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101416bfc; end: 101416c43; -[_TtC17COSPasskeyFeatureP33_737098910810B45C079A99951575A85D25COSPasskeyLoginOptionView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101416c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101416c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101416bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7db28));
  return;
}



/* Entry: 101416c44; end: 101416c63;  */

void FUN_101416c44(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3bd0);
  return;
}



/* Entry: 101416c64; end: 101416caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101416c64(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ushort uVar6;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar3 = 0;
  func_0x000101416d10(0);
  plVar4 = &lStack_58;
  func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if (((ulong)plVar4 & 1) != 0) {
    bVar1 = *(byte *)(lStack_58 + _DAT_112d7db68);
    bVar2 = ((byte *)(lStack_58 + _DAT_112d7db68))[1];
    func_0x000107c61170();
    func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
    lVar5 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      uVar6 = 0x100;
      if (bVar2 == 0) {
        uVar6 = 0;
      }
      *(ushort *)(lVar5 + _DAT_112d7da50) = uVar6 | bVar1;
      func_0x000107c54514(*(undefined8 *)(lVar5 + _DAT_112d7da98));
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 101416cb0; end: 101416d2f; -[_TtC17COSPasskeyFeature36COSPasskeyEnrollmentMainViewModelBox init] */

void FUN_101416cb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyEnrollmentMainViewModelBox",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101416cdc);
  (*pcVar1)();
}



/* Entry: 101416d30; end: 101416e8b;  */

int FUN_101416d30(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_101416dac;
        goto LAB_101416d8c;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101416d8c:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_101416dac:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101416e8c; end: 101416eeb; -[_TtC17COSPasskeyFeature26COSPasskeyPendingActionBox init] */

void FUN_101416e8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyPendingActionBox",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101416eb8);
  (*pcVar1)();
}



/* Entry: 101416eec; end: 101416f03; -[_TtC17COSPasskeyFeature26COSPasskeyPendingActionBox .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101416eec(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((undefined8 *)(param_1 + _DAT_112d7db98) + 1);
  if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + _DAT_112d7db98));
    return;
  }
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 101416f04; end: 101416f23;  */

void FUN_101416f04(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3d60);
  return;
}



/* Entry: 101416f24; end: 101416f6b;  */

void FUN_101416f24(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 101416f6c; end: 101416fbb;  */

undefined8 * FUN_101416f6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_101416f24(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101416f50(uVar3,uVar2);
  return param_1;
}



/* Entry: 101416fbc; end: 101416ff7;  */

undefined8 * FUN_101416fbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101416f50(uVar3,uVar2);
  return param_1;
}



/* Entry: 101416ff8; end: 1014170cf;  */

int FUN_101416ff8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1014170d0; end: 10141712f; -[_TtC17COSPasskeyFeature30COSPasskeyPendingBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014170d0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  uVar1 = *(undefined1 *)(param_1 + _DAT_112d7dbd0);
  lVar2 = 0;
  func_0x000101418bac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112d7dd38) = uVar1;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101417130; end: 10141723f;  */

/* WARNING: Possible PIC construction at 0x0001014171ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014171b0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101417130(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + _DAT_112d7db98);
  cVar1 = (char)((long *)(param_1 + _DAT_112d7db98))[1];
  if (cVar1 == '\0') {
    lVar2 = unaff_x20 + _DAT_112d7dbc8;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c4e4d0();
  }
  else if (cVar1 == '\x01') {
    lVar2 = unaff_x20 + _DAT_112d7dbc8;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c614b0(lVar3);
    func_0x000107c5ed2c(lVar3);
    func_0x000107c4e4cc(lVar2);
    func_0x000101416f50(lVar3,1);
  }
  else {
    lVar2 = unaff_x20 + _DAT_112d7dbc8;
    func_0x000107c61618();
    if (lVar3 == 0) {
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c4e4c8();
    }
    else {
      if (lVar2 == 0) {
        return;
      }
      func_0x000107c4e4d4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101417240; end: 10141728f; -[_TtC17COSPasskeyFeature30COSPasskeyPendingBusinessLogic handleAction:] */

/* WARNING: Possible PIC construction at 0x000101417278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141727c) */

void FUN_101417240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101417130(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101417290; end: 1014172ef; -[_TtC17COSPasskeyFeature30COSPasskeyPendingBusinessLogic init] */

void FUN_101417290(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyPendingBusinessLogic",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014172bc);
  (*pcVar1)();
}



/* Entry: 1014172f0; end: 1014172ff; -[_TtC17COSPasskeyFeature30COSPasskeyPendingBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014172f0(long param_1)

{
  param_1 = param_1 + _DAT_112d7dbc8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101417300; end: 10141731f;  */

void FUN_101417300(void)

{
  func_0x000107c61168(&PTR_PTR_112d7dc18);
  return;
}



/* Entry: 101417320; end: 101417343;  */

undefined8 FUN_101417320(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101417344; end: 10141736f; -[_TtC17COSPasskeyFeature24COSPasskeyCreationParams init] */

void FUN_101417344(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyCreationParams",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101417370);
  (*pcVar1)();
}



/* Entry: 101417370; end: 101417373;  */

void FUN_101417370(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101417374; end: 101417403; -[_TtC17COSPasskeyFeature24COSPasskeyCreationParams .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014173a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014173d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014173ac) */
/* WARNING: Removing unreachable block (ram,0x0001014173d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101417374(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112d7dc80),
                      ((undefined8 *)(param_1 + _DAT_112d7dc80))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7dc88 + 8))
  ;
  return;
}



/* Entry: 101417404; end: 101417423;  */

void FUN_101417404(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3e68);
  return;
}



/* Entry: 101417424; end: 101417667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101417424(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7dcf8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d7dcf8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeff0;
    func_0x000107c610f8();
    func_0x000107c45eac();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101417668; end: 1014176cf; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101417668(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d7dcf0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7dcf8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7dd00) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7dd08) = 0;
  func_0x000107c61464(param_1,lVar1,0x48,7);
  return 0;
}



/* Entry: 1014176d0; end: 1014177bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014176d0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_1014177bc();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7dcd8);
  puVar1 = &UNK_1103b49a0;
  func_0x000107c613fc(&UNK_1103b49a0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_50 = FUN_101418acc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10115ae3c;
  puStack_58 = &UNK_1103b49b8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5bb90(uVar3);
  func_0x000107c60bd0(ppuVar2);
  FUN_101417424();
  func_0x000107c5ba54();
  func_0x000107c61170(ppuVar2);
  return;
}



/* Entry: 1014177bc; end: 101417e1b;  */

/* WARNING: Possible PIC construction at 0x00010141781c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014178ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014178f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010141799c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014179bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101417d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101417d64) */
/* WARNING: Removing unreachable block (ram,0x000101417d48) */
/* WARNING: Removing unreachable block (ram,0x000101417ce8) */
/* WARNING: Removing unreachable block (ram,0x000101417e18) */
/* WARNING: Removing unreachable block (ram,0x000101417d1c) */
/* WARNING: Removing unreachable block (ram,0x000101417cc0) */
/* WARNING: Removing unreachable block (ram,0x000101417c70) */
/* WARNING: Removing unreachable block (ram,0x000101417e14) */
/* WARNING: Removing unreachable block (ram,0x000101417ca4) */
/* WARNING: Removing unreachable block (ram,0x000101417c48) */
/* WARNING: Removing unreachable block (ram,0x000101417bf0) */
/* WARNING: Removing unreachable block (ram,0x000101417e10) */
/* WARNING: Removing unreachable block (ram,0x000101417c2c) */
/* WARNING: Removing unreachable block (ram,0x000101417bcc) */
/* WARNING: Removing unreachable block (ram,0x000101417b7c) */
/* WARNING: Removing unreachable block (ram,0x000101417e0c) */
/* WARNING: Removing unreachable block (ram,0x000101417bb0) */
/* WARNING: Removing unreachable block (ram,0x000101417b58) */
/* WARNING: Removing unreachable block (ram,0x000101417b08) */
/* WARNING: Removing unreachable block (ram,0x000101417e08) */
/* WARNING: Removing unreachable block (ram,0x000101417b3c) */
/* WARNING: Removing unreachable block (ram,0x000101417ae8) */
/* WARNING: Removing unreachable block (ram,0x000101417a98) */
/* WARNING: Removing unreachable block (ram,0x000101417e04) */
/* WARNING: Removing unreachable block (ram,0x000101417acc) */
/* WARNING: Removing unreachable block (ram,0x000101417a38) */
/* WARNING: Removing unreachable block (ram,0x000101417a10) */
/* WARNING: Removing unreachable block (ram,0x0001014179c0) */
/* WARNING: Removing unreachable block (ram,0x000101417e00) */
/* WARNING: Removing unreachable block (ram,0x0001014179f4) */
/* WARNING: Removing unreachable block (ram,0x0001014179a0) */
/* WARNING: Removing unreachable block (ram,0x0001014178f8) */
/* WARNING: Removing unreachable block (ram,0x000101417dfc) */
/* WARNING: Removing unreachable block (ram,0x000101417984) */
/* WARNING: Removing unreachable block (ram,0x0001014178b0) */
/* WARNING: Removing unreachable block (ram,0x000101417df8) */
/* WARNING: Removing unreachable block (ram,0x0001014178cc) */
/* WARNING: Removing unreachable block (ram,0x000101417868) */
/* WARNING: Removing unreachable block (ram,0x000101417df4) */
/* WARNING: Removing unreachable block (ram,0x000101417884) */
/* WARNING: Removing unreachable block (ram,0x000101417820) */
/* WARNING: Removing unreachable block (ram,0x000101417df0) */
/* WARNING: Removing unreachable block (ram,0x00010141783c) */
/* WARNING: Removing unreachable block (ram,0x000101417d8c) */

void FUN_1014177bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101417df0);
  (*pcVar1)();
}



/* Entry: 101417e1c; end: 101417ed3; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController viewDidLoad] */

void FUN_101417e1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1014176d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101417ed4; end: 10141829f;  */

/* WARNING: Possible PIC construction at 0x000101418088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014181dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014181e0) */
/* WARNING: Removing unreachable block (ram,0x00010141808c) */
/* WARNING: Removing unreachable block (ram,0x0001014180cc) */
/* WARNING: Removing unreachable block (ram,0x0001014180d8) */
/* WARNING: Removing unreachable block (ram,0x0001014180e0) */
/* WARNING: Removing unreachable block (ram,0x000101418100) */
/* WARNING: Removing unreachable block (ram,0x000101418108) */
/* WARNING: Removing unreachable block (ram,0x000101418114) */
/* WARNING: Removing unreachable block (ram,0x00010141811c) */
/* WARNING: Removing unreachable block (ram,0x00010141813c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101417ed4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112d7dce0);
  uVar1 = *(undefined8 *)(lVar12 + _DAT_112d7dc80);
  uVar3 = ((undefined8 *)(lVar12 + _DAT_112d7dc80))[1];
  uVar2 = *(undefined8 *)(lVar12 + _DAT_112d7dc88);
  uVar4 = ((undefined8 *)(lVar12 + _DAT_112d7dc88))[1];
  uVar8 = *(ulong *)(lVar12 + _DAT_112d7dc90);
  uVar10 = ((ulong *)(lVar12 + _DAT_112d7dc90))[1];
  uVar14 = *(ulong *)(lVar12 + _DAT_112d7dc98);
  uVar5 = ((ulong *)(lVar12 + _DAT_112d7dc98))[1];
  uVar6 = *(undefined8 *)(lVar12 + _DAT_112d7dca0 + 8);
  uVar7 = *(undefined8 *)(lVar12 + _DAT_112d7dca8 + 8);
  uVar13 = uVar14 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar13 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar13 == 0) {
    uVar13 = 0x800000010ef12950;
    uVar14 = 0xd000000000000015;
  }
  else {
    func_0x000107c61434(uVar5);
    uVar13 = uVar5;
  }
  puVar9 = PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialProvider_1126a5db8;
  func_0x000107c610f8(PTR__OBJC_CLASS___ASAuthorizationPlatformPublicKeyCredentialProvider_1126a5db8
                     );
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar10);
  func_0x00010006c00c(uVar1,uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar14,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c482e8(puVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c5ee20(uVar1,uVar3);
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c61434(uVar10);
  FUN_100e35e30();
  func_0x000107c5ee20();
  uVar11 = (uint)(uVar10 >> 0x3e);
  if (uVar11 == 1) {
    uVar8 = uVar10 & 0x3fffffffffffffff;
  }
  else if (uVar11 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar8);
  return;
}



/* Entry: 1014182a0; end: 10141831f; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014182a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if ((*(byte *)(param_1 + _DAT_112d7dcf0) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112d7dcf0) = 1;
    FUN_101417ed4();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101418320; end: 1014183cb; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101418320(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  plVar5 = &lStack_40;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112d7dcd8);
  lVar3 = 0;
  FUN_101416f04();
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d7db98);
  *puVar1 = 1;
  *(undefined1 *)(puVar1 + 1) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar2);
  func_0x000107c424b8(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 1014183cc; end: 10141842b; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController initWithNibName:bundle:] */

void FUN_1014183cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSPasskeyFeature.COSPasskeyPendingViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014183f8);
  (*pcVar1)();
}



/* Entry: 10141842c; end: 1014184a3; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101418448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101418478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010141844c) */
/* WARNING: Removing unreachable block (ram,0x00010141847c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141842c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7dcd8));
  return;
}



/* Entry: 1014184a4; end: 1014184c3;  */

void FUN_1014184a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d3f50);
  return;
}



/* Entry: 1014184c4; end: 10141852b; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController authorizationController:didCompleteWithAuthorization:] */

/* WARNING: Possible PIC construction at 0x00010141850c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101418510) */

void FUN_1014184c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101418688(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10141852c; end: 101418593; -[_TtC17COSPasskeyFeature31COSPasskeyPendingViewController authorizationController:didCompleteWithError:] */

/* WARNING: Possible PIC construction at 0x000101418574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101418578) */

void FUN_10141852c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101418900(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


