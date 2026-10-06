/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10370ecc8; end: 10370ed33;  */

/* WARNING: Possible PIC construction at 0x00010370ecf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370ed1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010370ed20) */
/* WARNING: Removing unreachable block (ram,0x00010370ed0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ecc8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8b130);
  *(undefined8 *)(unaff_x20 + _DAT_112f8b130) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10370ed34; end: 10370ed53; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ed34(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f8b138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370ed54; end: 10370ed67; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ed54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f8b138,param_3);
  return;
}



/* Entry: 10370ed68; end: 10370ed87; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ed68(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f8b140));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370ed88; end: 10370edbb; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370ed88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8b140);
  *(undefined8 *)(param_1 + _DAT_112f8b140) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10370edbc; end: 10370ee57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370edbc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  func_0x000107c61170(*param_1);
  uVar5 = *(undefined8 *)(*(long *)(param_2 + _DAT_112f8b120) + _DAT_112f8af68);
  lVar2 = 0;
  FUN_103707db0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8ae78) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10370ee58; end: 10370eeb7; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider init] */

void FUN_10370ee58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerHeaderProviderImplementation.MusicTopicViewerHeaderSectionDataProvider"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10370ee84);
  (*pcVar1)();
}



/* Entry: 10370eeb8; end: 10370ef97; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010370ef48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370ef4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370eeb8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f8b100);
  uVar3 = puVar1[1];
  uVar2 = puVar1[2];
  uVar4 = puVar1[3];
  func_0x000107c61170(*puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b108));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b110));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b118));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8b120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8b128));
  return;
}



/* Entry: 10370ef98; end: 10370efb7;  */

void FUN_10370ef98(void)

{
  func_0x000107c61168(&PTR_PTR_1128e65d8);
  return;
}



/* Entry: 10370efb8; end: 10370efe3; +[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider announcerIdentifier] */

void FUN_10370efb8(void)

{
  func_0x000107c5fadc(0xd000000000000040,0x800000010f15dd90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10370efe4; end: 10370efe7; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider addListener:] */

void FUN_10370efe4(void)

{
  return;
}



/* Entry: 10370efe8; end: 10370efeb; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider removeListener:] */

void FUN_10370efe8(void)

{
  return;
}



/* Entry: 10370efec; end: 10370f05b; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10370efec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10370f68c();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10370f7f4(0,0x112d6fa28,&PTR_PTR_1126aea98);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10370f05c; end: 10370f25f; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10370f05c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112d71de8;
  func_0x0001000285a8(0x112d71de8,&UNK_10d932900);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000030;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f15dde0;
  uVar2 = 0;
  FUN_103708578();
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  lVar3 = lVar1;
  func_0x00010124b9b8(lVar1);
  func_0x000107c61588(lVar1);
  FUN_10370f64c((undefined8 *)(lVar1 + 0x20),0x112d71df0,&UNK_10d932bc0);
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  lVar1 = lVar3;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10370f260; end: 10370f2bb;  */

void FUN_10370f260(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10370f2bc(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10370f2bc; end: 10370f413;  */

/* WARNING: Possible PIC construction at 0x00010370f334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370f3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370f338) */
/* WARNING: Removing unreachable block (ram,0x00010370f33c) */
/* WARNING: Removing unreachable block (ram,0x00010370f35c) */
/* WARNING: Removing unreachable block (ram,0x00010370f3d0) */
/* WARNING: Removing unreachable block (ram,0x00010370f3a0) */
/* WARNING: Removing unreachable block (ram,0x00010370f3dc) */
/* WARNING: Removing unreachable block (ram,0x00010370f3f8) */
/* WARNING: Removing unreachable block (ram,0x00010370f3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370f2bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_103708578(0);
    lVar2 = param_1;
    func_0x000107c61480(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f8b108);
      func_0x000107c61174(param_1);
      func_0x000107c5dbd4(uVar1);
      func_0x000107c61180();
      func_0x000107c5c734();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 10370f414; end: 10370f483; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10370f414(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010370f14c();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ed16e8;
  func_0x0001000285a8(0x112ed16e8,&UNK_10daf8590);
  uVar3 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10370f484; end: 10370f48b; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider numberOfSections] */

undefined8 FUN_10370f484(void)

{
  return 1;
}



/* Entry: 10370f48c; end: 10370f493; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_10370f48c(void)

{
  return 1;
}



/* Entry: 10370f494; end: 10370f4bf; -[_TtC44MusicTopicViewerHeaderProviderImplementation41MusicTopicViewerHeaderSectionDataProvider shouldRecalculateSectionHeightWithViewModelUpdates] */

undefined8 FUN_10370f494(void)

{
  return 1;
}



/* Entry: 10370f4c0; end: 10370f5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370f4c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f8b128);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_50 = uVar3;
    func_0x000100075034(FUN_10370f7b0,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112f8b138;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c51b5c();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10370f5b0; end: 10370f5d3;  */

void FUN_10370f5b0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f8b178;
  plVar5 = (long *)&UNK_10dc00238;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10370f7f4(0,0x112f8ae70,&PTR_PTR_1126ad4f0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10370f5d4; end: 10370f64b;  */

void FUN_10370f5d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10370f7f4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10370f64c; end: 10370f68b;  */

undefined8 FUN_10370f64c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10370f68c; end: 10370f7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10370f68c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f8b128);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar5);
  if (lStack_38 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0x112d6fa28;
    FUN_10370f5d4(0x112d6fa28,&PTR_PTR_1126aea98,0x112d6fd98,&UNK_10d932bb0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 3;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR_PTR_1126aea98;
    func_0x000107c610f8();
    lVar3 = lStack_38;
    func_0x000107c61174(lStack_38);
    uVar5 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010f15dde0);
    func_0x000107c45d60();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar5);
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10370f7b0);
      (*pcVar1)();
    }
    func_0x000107c61170(lVar3);
    *(undefined **)(lVar4 + 0x20) = puVar2;
  }
  return lVar4;
}



/* Entry: 10370f7b0; end: 10370f7f3;  */

void FUN_10370f7b0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 10370f7f4; end: 10370f833;  */

void FUN_10370f7f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10370f834; end: 10370f9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370f834(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_68 + (-8 - extraout_x8);
  lVar5 = 0x112f8b2d0;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112f8b1b0;
  lVar6 = (long)puVar7 - extraout_x8_00;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f8b1b0);
  *(undefined8 *)(unaff_x20 + _DAT_112f8b1b0) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar8);
  lVar2 = _DAT_112f8b1a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f8b1a8,auStack_68,0,0);
  lVar5 = unaff_x20 + lVar2;
  (**(code **)(lVar9 + 0x30))(lVar5,1,lVar4);
  bVar1 = (int)lVar5 == 0;
  if (bVar1) {
    (**(code **)(lVar9 + 0x10))(puVar7,unaff_x20 + lVar2,lVar4);
    uStack_70 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c61174();
    func_0x000107c5fd28(lVar6,&uStack_70,lVar4);
    func_0x000107c61170(param_1);
    (**(code **)(lVar9 + 8))(puVar7,lVar4);
  }
  else {
    func_0x000107c61170(param_1);
  }
  lVar4 = 0x112f8b2e8;
  func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar6,!bVar1,1,lVar4);
  FUN_103713750(lVar6,0x112f8b2d0,&UNK_10dc002d8);
  return;
}



/* Entry: 10370f9ec; end: 10370fa8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10370f9ec(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112f8b1c0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f8b1c0);
  lVar3 = lVar5;
  if (lVar5 == 1) {
    if ((*(byte *)(unaff_x20 + _DAT_112f8b198) & 1) == 0) {
      bVar2 = *(char *)(unaff_x20 + _DAT_112f8b1a0) != '\0';
      lVar3 = 0x1a5;
      if (bVar2) {
        lVar3 = 0x1a6;
      }
      uVar4 = 3;
      if (!bVar2) {
        uVar4 = 1;
      }
    }
    else {
      lVar3 = 0x1a6;
      uVar4 = 3;
    }
    FUN_1037051e4(lVar3,uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000100d5b310(uVar4);
  }
  FUN_1037138cc(lVar5);
  return lVar3;
}



/* Entry: 10370fa90; end: 10370fb2b;  */

void FUN_10370fa90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c6157c();
    uVar1 = 4;
    func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00348,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61578(param_2,2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10370fb2c; end: 10370fb8f;  */

void FUN_10370fb2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar1 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370fb90,0,0);
  return;
}



/* Entry: 10370fb90; end: 10370fbf7;  */

void FUN_10370fb90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370fbf8,uVar1,uVar2);
  return;
}



/* Entry: 10370fbf8; end: 10370fc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370fbf8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar2 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  lVar2 = _DAT_112f8b1a8;
  func_0x000107c61428(lVar3 + _DAT_112f8b1a8,unaff_x22 + 0x10,0x21,0);
  FUN_10370d7d4(uVar1,lVar3 + lVar2);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010370fc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10370fc9c; end: 1037100cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370fc9c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar10;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long alStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112f8b018;
  lStack_b8 = (long)&lStack_c0 - extraout_x8;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = ((long)&lStack_c0 - extraout_x8) - extraout_x8_00;
  lVar4 = 0x112f8b2d0;
  lStack_b0 = lVar9;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  lVar4 = 0x112f8b2d8;
  lStack_c0 = lVar9;
  func_0x0001000285a8(0x112f8b2d8,&UNK_10dc002e0);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  lVar5 = 0x112f8b2e0;
  func_0x0001000285a8(0x112f8b2e0,&UNK_10dc002e8);
  lVar13 = *(long *)(lVar5 + -8);
  lVar18 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar9 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lStack_b8;
  lVar2 = _DAT_112f8b1a8;
  lVar16 = lVar17 - extraout_x12;
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f8b1a8,auStack_78,0,0);
    lVar13 = lStack_a0;
    lVar11 = lStack_a8;
    pcVar14 = *(code **)(lStack_a8 + 0x30);
    lVar4 = unaff_x20 + lVar2;
    (*pcVar14)(lVar4,1,lStack_a0);
    lVar9 = lStack_b0;
    lVar5 = lStack_c0;
    bVar1 = (int)lVar4 != 0;
    if (!bVar1) {
      (**(code **)(lVar11 + 0x10))(lStack_b0,unaff_x20 + lVar2,lVar13);
      auStack_90[0] = 0;
      func_0x000107c5fd28(lVar5,auStack_90,lVar13);
      (**(code **)(lVar11 + 8))(lVar9,lVar13);
    }
    lVar4 = 0x112f8b2e8;
    func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,bVar1,1,lVar4);
    FUN_103713750(lVar5,0x112f8b2d0,&UNK_10dc002d8);
    lVar4 = unaff_x20 + lVar2;
    (*pcVar14)(lVar4,1,lVar13);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar11 + 0x10))(lVar9,unaff_x20 + lVar2,lVar13);
      func_0x000107c5fd2c(lVar13);
      (**(code **)(lVar11 + 8))(lVar9,lVar13);
    }
    (**(code **)(lVar11 + 0x38))(lVar3,1,1,lVar13);
    func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
    FUN_10370d7d4(lVar3,unaff_x20 + lVar2);
    func_0x000107c614a8(auStack_90);
  }
  else {
    (**(code **)(lVar11 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
               ,lVar4);
    func_0x000107c6157c(param_1);
    func_0x0001000d52ec(lVar16,lVar9);
    (**(code **)(lVar11 + 8))(lVar9,lVar4);
    puVar6 = &UNK_110686f40;
    func_0x000107c613fc(&UNK_110686f40,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,unaff_x20);
    (**(code **)(lVar13 + 0x10))(lVar17,lVar16,lVar5);
    uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    uVar15 = lVar18 + uVar12 + 7 & 0xfffffffffffffff8;
    puVar7 = &UNK_110686f68;
    func_0x000107c613fc(&UNK_110686f68,uVar15 + 8,uVar10 | 7);
    (**(code **)(lVar13 + 0x20))(puVar7 + uVar12,lVar17,lVar5);
    *(undefined **)(puVar7 + uVar15) = puVar6;
    *(undefined **)(lVar16 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar8 = 4;
    func_0x0001001ca524(4,3,0x50,4,0,0,&UNK_10dc00300,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(param_1);
    (**(code **)(lVar13 + 8))(lVar16,lVar5);
  }
  return;
}



/* Entry: 1037100d0; end: 1037101cf;  */

void FUN_1037100d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  lVar4 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  lVar4 = 0x112f8b2d0;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  lVar4 = 0x112f8b2f0;
  func_0x0001000285a8(0x112f8b2f0,&UNK_10dc00308);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037101d0,uVar2,uVar3);
  return;
}



/* Entry: 1037101d0; end: 10371027b;  */

void FUN_1037101d0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000285a8(0x112f8b2e0,&UNK_10dc002e8);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x28,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10371027c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 10371027c; end: 1037102bf;  */

void FUN_10371027c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1037102c0,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 1037102c0; end: 103710597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037102c0(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x58);
  if (lVar11 == 1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010371034c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  lVar9 = *(long *)(unaff_x22 + 0x70) + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd8) = lVar9;
  if (lVar9 != 0) {
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar9 + _DAT_112f8b1b8);
      if (lVar10 != 0) {
        func_0x000107c6157c(lVar10);
        uVar12 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c5fd50(lVar10,PTR___sytN_11034f1b0 + 8,uVar12,PTR___ss5ErrorWS_11034ee10);
        func_0x000107c61574(lVar10);
      }
      plVar6 = (long *)0x120;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_103710598;
      plVar6[0x16] = lVar11;
      plVar6[0x17] = lVar9;
      lVar9 = 0;
      func_0x000107c5fcec();
      lVar11 = lVar9;
      func_0x000107c5fce8();
      plVar6[0x18] = lVar11;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar6[0x19] = lVar9;
      plVar6[0x1a] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103710acc,lVar9,lVar11);
      return;
    }
    func_0x000107c61574(lVar9);
  }
  lVar9 = *(long *)(unaff_x22 + 0x70) + 0x10;
  func_0x000107c61648();
  lVar10 = _DAT_112f8b1b0;
  if (lVar9 == 0) {
    func_0x000100d5b310(lVar11);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar4 = *(long *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(lVar9 + _DAT_112f8b1b0);
    *(undefined8 *)(lVar9 + _DAT_112f8b1b0) = 0;
    func_0x000107c61170(uVar7);
    lVar5 = _DAT_112f8b1a8;
    func_0x000107c61428(lVar9 + _DAT_112f8b1a8,unaff_x22 + 0x40,0,0);
    lVar8 = lVar9 + lVar5;
    (**(code **)(lVar4 + 0x30))(lVar8,1,uVar12);
    bVar1 = (int)lVar8 == 0;
    if (bVar1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar8 = *(long *)(unaff_x22 + 0x80);
      (**(code **)(lVar8 + 0x10))(uVar12,lVar9 + lVar5,uVar7);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(lVar9 + lVar10);
      func_0x000107c61174();
      func_0x000107c5fd28(uVar2,unaff_x22 + 0x60,uVar7);
      func_0x000107c61574(lVar9);
      func_0x000100d5b310(lVar11);
      (**(code **)(lVar8 + 8))(uVar12,uVar7);
    }
    else {
      func_0x000107c61574(lVar9);
      func_0x000100d5b310(lVar11);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar11 = 0x112f8b2e8;
    func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar12,!bVar1,1,lVar11);
    FUN_103713750(uVar12,0x112f8b2d0,&UNK_10dc002d8);
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x103710744;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(long *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 103710598; end: 1037105e3;  */

void FUN_103710598(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xf8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1037105e4,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 1037105e4; end: 103710697;  */

void FUN_1037105e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xf8) == '\x01') {
    plVar3 = (long *)0x130;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xe8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_103710698;
    plVar3[0x16] = *(long *)(unaff_x22 + 0xd8);
    lVar7 = 0x112ebc648;
    func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
    plVar3[0x17] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar3[0x18] = lVar7;
    lVar7 = *(long *)(lVar7 + 0x40);
    plVar3[0x19] = lVar7;
    uVar5 = lVar7 + 0xf;
    uVar4 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1a] = uVar4;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1b] = uVar5;
    lVar6 = 0;
    func_0x000107c5fcec();
    lVar7 = lVar6;
    func_0x000107c5fce8();
    plVar3[0x1c] = lVar7;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar3[0x1d] = lVar6;
    plVar3[0x1e] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103711098,lVar6,lVar7);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_103711b70(uVar1);
  func_0x000100d5b310(uVar1);
  func_0x000107c61574(uVar2);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103710744;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 103710698; end: 103710787;  */

void FUN_103710698(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1037106dc,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 103710788; end: 103710a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103710788(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x58);
  if (lVar11 == 1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61574(uVar2);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000103710814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0xd0) = lVar11;
  lVar9 = *(long *)(unaff_x22 + 0x70) + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd8) = lVar9;
  if (lVar9 != 0) {
    if (lVar11 != 0) {
      lVar10 = *(long *)(lVar9 + _DAT_112f8b1b8);
      if (lVar10 != 0) {
        func_0x000107c6157c(lVar10);
        uVar12 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c5fd50(lVar10,PTR___sytN_11034f1b0 + 8,uVar12,PTR___ss5ErrorWS_11034ee10);
        func_0x000107c61574(lVar10);
      }
      plVar6 = (long *)0x120;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xe0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_103710598;
      plVar6[0x16] = lVar11;
      plVar6[0x17] = lVar9;
      lVar9 = 0;
      func_0x000107c5fcec();
      lVar11 = lVar9;
      func_0x000107c5fce8();
      plVar6[0x18] = lVar11;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar6[0x19] = lVar9;
      plVar6[0x1a] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103710acc,lVar9,lVar11);
      return;
    }
    func_0x000107c61574(lVar9);
  }
  lVar9 = *(long *)(unaff_x22 + 0x70) + 0x10;
  func_0x000107c61648();
  lVar10 = _DAT_112f8b1b0;
  if (lVar9 == 0) {
    func_0x000100d5b310(lVar11);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar4 = *(long *)(unaff_x22 + 0x80);
    uVar7 = *(undefined8 *)(lVar9 + _DAT_112f8b1b0);
    *(undefined8 *)(lVar9 + _DAT_112f8b1b0) = 0;
    func_0x000107c61170(uVar7);
    lVar5 = _DAT_112f8b1a8;
    func_0x000107c61428(lVar9 + _DAT_112f8b1a8,unaff_x22 + 0x40,0,0);
    lVar8 = lVar9 + lVar5;
    (**(code **)(lVar4 + 0x30))(lVar8,1,uVar12);
    bVar1 = (int)lVar8 == 0;
    if (bVar1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar8 = *(long *)(unaff_x22 + 0x80);
      (**(code **)(lVar8 + 0x10))(uVar12,lVar9 + lVar5,uVar7);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(lVar9 + lVar10);
      func_0x000107c61174();
      func_0x000107c5fd28(uVar2,unaff_x22 + 0x60,uVar7);
      func_0x000107c61574(lVar9);
      func_0x000100d5b310(lVar11);
      (**(code **)(lVar8 + 8))(uVar12,uVar7);
    }
    else {
      func_0x000107c61574(lVar9);
      func_0x000100d5b310(lVar11);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar11 = 0x112f8b2e8;
    func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(uVar12,!bVar1,1,lVar11);
    FUN_103713750(uVar12,0x112f8b2d0,&UNK_10dc002d8);
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x103710744;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,(long *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 103710a60; end: 103710acb;  */

void FUN_103710a60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103710acc,uVar1,uVar2);
  return;
}



/* Entry: 103710acc; end: 103710c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103710acc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0xb0);
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4a760();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar5 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  }
  else {
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    *(ulong *)(unaff_x22 + 0xd8) = uVar4;
    *(ulong *)(unaff_x22 + 0xe0) = param_2;
    uVar5 = uVar4 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar5 = param_2 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      func_0x0001000d224c(unaff_x22 + 0x110);
      lVar1 = _DAT_112f8b188;
      if (*(char *)(unaff_x22 + 0x110) == '\x01') {
        *(long *)(unaff_x22 + 0xe8) = _DAT_112f8b188;
        lVar1 = *(long *)(unaff_x22 + 0xb8) + lVar1;
        uVar8 = *(undefined8 *)(lVar1 + 0x18);
        lVar3 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,uVar8);
        (**(code **)(lVar3 + 0x10))(unaff_x22 + 0x10,uVar8,lVar3);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar1 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar8);
        piVar7 = *(int **)(lVar1 + 8);
        iVar2 = *piVar7;
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xf0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_103710c48;
                    /* WARNING: Could not recover jumptable at 0x000103710c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar7))(0x50404,0,1,uVar8,lVar1);
        return;
      }
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61574(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000103710c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 103710c48; end: 103710cb7;  */

void FUN_103710c48(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf0));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x111) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_103710cb8;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 200);
    uVar3 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_103710f5c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 103710cb8; end: 103710e63;  */

void FUN_103710cb8(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x111);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar2 == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c6142c(uVar8);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0xb8) + *(long *)(unaff_x22 + 0xe8);
    lVar3 = *(long *)(lVar4 + 0x18);
    uVar6 = *(ulong *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,lVar3);
    (**(code **)(uVar6 + 0x48))();
    if ((*(long *)(lVar3 + 0x10) == 0) || (lVar4 = lVar3, func_0x000101137240(), (uVar6 & 1) == 0))
    {
      *(undefined8 *)(unaff_x22 + 0x80) = 0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined8 *)(unaff_x22 + 0x78) = 0;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
    }
    else {
      func_0x0001011225e0(*(long *)(lVar3 + 0x38) + lVar4 * 0x28,unaff_x22 + 0x60);
    }
    func_0x000107c6142c(lVar3);
    if (*(long *)(unaff_x22 + 0x78) != 0) {
      func_0x000101122624(unaff_x22 + 0x60,unaff_x22 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar4 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar8);
      (**(code **)(lVar4 + 0x28))(unaff_x22 + 0x88,uVar8,lVar4);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar4 = *(long *)(unaff_x22 + 0xa8);
      func_0x0001000a8868(unaff_x22 + 0x88,uVar8);
      piVar7 = *(int **)(lVar4 + 8);
      iVar1 = *piVar7;
      plVar5 = (long *)(ulong)(uint)piVar7[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_103710e64;
                    /* WARNING: Could not recover jumptable at 0x000103710e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar7))
                (*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0),0x50404,0,1,
                 uVar8,lVar4);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c61574(uVar8);
    FUN_103713750(unaff_x22 + 0x60,0x112e08bb0,&UNK_10d9ddb20);
  }
                    /* WARNING: Could not recover jumptable at 0x000103710e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 103710e64; end: 103710ef3;  */

void FUN_103710e64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf8));
  uVar3 = *(undefined8 *)(lVar4 + 0xe0);
  if (unaff_x20 == 0) {
    func_0x000107c6142c(uVar3);
    *(undefined8 *)(lVar4 + 0x100) = param_2;
    *(undefined8 *)(lVar4 + 0x108) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_103710ef4;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = (code *)0x103710fa4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 103710ef4; end: 103710f5b;  */

void FUN_103710ef4(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x100);
  uVar2 = *(ulong *)(unaff_x22 + 0x108);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x0001000834e4(unaff_x22 + 0x88);
  func_0x000107c6142c(uVar1);
  uVar2 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000103710f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2 != 0);
  return;
}



/* Entry: 103710f5c; end: 103710fe7;  */

void FUN_103710f5c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c6142c(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000103710fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 103710fe8; end: 103711097;  */

void FUN_103710fe8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  lVar5 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  *(long *)(unaff_x22 + 0xb8) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  *(long *)(unaff_x22 + 200) = lVar5;
  uVar2 = lVar5 + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103711098,uVar3,uVar4);
  return;
}



/* Entry: 103711098; end: 103711157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103711098(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar1 = _DAT_112f8b188;
  *(long *)(unaff_x22 + 0xf8) = _DAT_112f8b188;
  lVar1 = *(long *)(unaff_x22 + 0xb0) + lVar1;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar4 + 0x10))(unaff_x22 + 0x10,uVar3,lVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  piVar6 = *(int **)(lVar1 + 8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103711158;
                    /* WARNING: Could not recover jumptable at 0x000103711154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))(0x50404,0,1,uVar3,lVar1);
  return;
}



/* Entry: 103711158; end: 1037111c7;  */

void FUN_103711158(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x100));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x120) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    uVar3 = *(undefined8 *)(lVar4 + 0xf0);
    pcVar1 = FUN_1037111c8;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    uVar3 = *(undefined8 *)(lVar4 + 0xf0);
    pcVar1 = FUN_1037117e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1037111c8; end: 10371161b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037111c8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long unaff_x22;
  ulong uVar23;
  ulong uVar24;
  
  cVar8 = *(char *)(unaff_x22 + 0x120);
  puVar10 = (undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  if (cVar8 == '\x01') {
    bVar9 = false;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
  }
  else {
    lVar21 = *(long *)(unaff_x22 + 0xb0) + *(long *)(unaff_x22 + 0xf8);
    puVar10 = *(undefined8 **)(lVar21 + 0x18);
    param_2 = *(undefined8 **)(lVar21 + 0x20);
    func_0x0001000a8868(lVar21,puVar10);
    (*(code *)param_2[9])();
    if ((puVar10[2] == 0) || (puVar11 = puVar10, func_0x000101137240(), ((ulong)param_2 & 1) == 0))
    {
      *(undefined8 *)(unaff_x22 + 0x58) = 0;
      *(undefined8 *)(unaff_x22 + 0x50) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
    }
    else {
      param_2 = (undefined8 *)(unaff_x22 + 0x38);
      func_0x0001011225e0(puVar10[7] + (long)puVar11 * 0x28);
    }
    func_0x000107c6142c();
    bVar9 = *(long *)(unaff_x22 + 0x50) != 0;
  }
  func_0x000107e48340();
  func_0x000107c61180();
  if (puVar10 == (undefined8 *)0x0) {
    if (bVar9) {
      puVar11 = param_2;
      param_2 = (undefined8 *)0x0;
      goto LAB_1037112d0;
    }
LAB_10371157c:
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  }
  else {
    puVar12 = puVar10;
    func_0x000107c5faec();
    puVar11 = param_2;
    func_0x000107c61170();
    if (bVar9) {
LAB_1037112d0:
      puVar10 = param_2;
      func_0x000107c6142c();
      func_0x000107e48358();
      func_0x000107c61180();
      if (puVar10 == (undefined8 *)0x0) goto LAB_10371157c;
      puVar12 = puVar10;
      func_0x000107c5faec();
      func_0x000107c61170();
    }
    else {
      puVar11 = param_2;
      if (param_2 == (undefined8 *)0x0) goto LAB_10371157c;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar22 = *(long *)(unaff_x22 + 0xc0);
    lVar4 = *(long *)(unaff_x22 + 200);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000103b6b2d0();
    uVar17 = *puVar10;
    uVar6 = puVar10[1];
    puVar13 = PTR_PTR_1126ad4f0;
    func_0x000107c610f8();
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(puVar12,puVar11);
    func_0x000107c6142c(puVar11);
    func_0x000107c5fadc(uVar17,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x000107c48c94();
    *(undefined **)(unaff_x22 + 0x108) = puVar13;
    func_0x000107c61170(uVar17);
    func_0x000107c61170(puVar12);
    FUN_10370f9ec();
    func_0x000107c551e8(puVar13);
    func_0x000107c61170(puVar12);
    puVar14 = puVar13;
    func_0x000107c61174(puVar13);
    func_0x000107c61174();
    FUN_10370f834(puVar13);
    lVar21 = lVar2 + _DAT_112f8b180;
    uVar17 = *(undefined8 *)(lVar21 + 0x18);
    lVar7 = *(long *)(lVar21 + 0x20);
    func_0x0001000a8868(lVar21,uVar17);
    (**(code **)(lVar7 + 8))(uVar3,uVar17,lVar7);
    puVar13 = &UNK_110686f40;
    func_0x000107c613fc(&UNK_110686f40,0x18,7);
    func_0x000107c61644(puVar13 + 0x10,lVar2);
    (**(code **)(lVar22 + 0x10))(uVar16,uVar3,uVar5);
    uVar19 = (ulong)*(byte *)(lVar22 + 0x50);
    uVar23 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
    uVar24 = lVar4 + uVar23 + 7 & 0xfffffffffffffff8;
    puVar15 = &UNK_110686f90;
    func_0x000107c613fc(&UNK_110686f90,uVar24 + 8,uVar19 | 7);
    (**(code **)(lVar22 + 0x20))(puVar15 + uVar23,uVar16,uVar5);
    *(undefined **)(puVar15 + uVar24) = puVar13;
    uVar16 = 4;
    func_0x000100859150(4,3,0x50,4,0,0,&UNK_10dc00330,puVar15,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar15);
    uVar17 = *(undefined8 *)(lVar2 + _DAT_112f8b1b8);
    *(undefined8 *)(lVar2 + _DAT_112f8b1b8) = uVar16;
    func_0x000107c61574(uVar17);
    func_0x000101bf6504(unaff_x22 + 0x38,unaff_x22 + 0x60);
    lVar21 = *(long *)(unaff_x22 + 0x78);
    if (lVar21 != 0) {
      lVar22 = *(long *)(unaff_x22 + 0x80);
      func_0x0001000a8868(unaff_x22 + 0x60,lVar21);
      (**(code **)(lVar22 + 0x18))(unaff_x22 + 0x88,lVar21,lVar22);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar21 = *(long *)(unaff_x22 + 0xa8);
      func_0x0001000a8868(unaff_x22 + 0x88,uVar16);
      piVar20 = *(int **)(lVar21 + 0x10);
      iVar1 = *piVar20;
      plVar18 = (long *)(ulong)(uint)piVar20[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x110) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_10371161c;
                    /* WARNING: Could not recover jumptable at 0x000103711578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar20))(uVar16,lVar21);
      return;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar21 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar14);
    (**(code **)(lVar21 + 8))(uVar16,uVar17);
    FUN_103713750(unaff_x22 + 0x60,0x112e08bb0,&UNK_10d9ddb20);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_103713750(unaff_x22 + 0x38,0x112e08bb0,&UNK_10d9ddb20);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000103711618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10371161c; end: 103711667;  */

void FUN_10371161c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103711668,*(undefined8 *)(lVar1 + 0xe8),*(undefined8 *)(lVar1 + 0xf0));
  return;
}



/* Entry: 103711668; end: 1037117df;  */

void FUN_103711668(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0x118);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar7);
    pcVar3 = *(code **)(lVar5 + 8);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    puVar1 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c30e3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(uVar8);
      func_0x0001000834e4(unaff_x22 + 0x88);
      func_0x0001000834e4(unaff_x22 + 0x60);
      func_0x000107c551e8(uVar7);
      FUN_10370f834(uVar7);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar7);
      (**(code **)(lVar5 + 8))(uVar4,uVar6);
      goto LAB_103711794;
    }
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    pcVar3 = *(code **)(lVar5 + 8);
  }
  (*pcVar3)(uVar4,uVar6);
  func_0x0001000834e4(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x60);
LAB_103711794:
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_103713750(unaff_x22 + 0x38,0x112e08bb0,&UNK_10d9ddb20);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001037117dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037117e0; end: 103711b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037117e0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 *puVar18;
  long lVar19;
  long unaff_x22;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  
  puVar8 = (undefined8 *)(unaff_x22 + 0x10);
  func_0x0001000834e4();
  puVar18 = (undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *puVar18 = 0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  func_0x000107e48340();
  func_0x000107c61180();
  if (puVar8 != (undefined8 *)0x0) {
    puVar9 = puVar8;
    func_0x000107c5faec();
    func_0x000107c61170();
    if (param_2 != 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar20 = *(long *)(unaff_x22 + 0xc0);
      lVar4 = *(long *)(unaff_x22 + 200);
      lVar2 = *(long *)(unaff_x22 + 0xb0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000103b6b2d0();
      uVar14 = *puVar8;
      uVar6 = puVar8[1];
      puVar10 = PTR_PTR_1126ad4f0;
      func_0x000107c610f8();
      func_0x000107c61434(uVar6);
      func_0x000107c5fadc(puVar9,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c5fadc(uVar14,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c48c94();
      *(undefined **)(unaff_x22 + 0x108) = puVar10;
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar9);
      FUN_10370f9ec();
      func_0x000107c551e8(puVar10);
      func_0x000107c61170(puVar9);
      puVar11 = puVar10;
      func_0x000107c61174();
      func_0x000107c61174();
      FUN_10370f834(puVar10);
      lVar19 = lVar2 + _DAT_112f8b180;
      uVar14 = *(undefined8 *)(lVar19 + 0x18);
      lVar7 = *(long *)(lVar19 + 0x20);
      func_0x0001000a8868(lVar19,uVar14);
      (**(code **)(lVar7 + 8))(uVar3,uVar14,lVar7);
      puVar10 = &UNK_110686f40;
      func_0x000107c613fc(&UNK_110686f40,0x18,7);
      func_0x000107c61644(puVar10 + 0x10,lVar2);
      (**(code **)(lVar20 + 0x10))(uVar13,uVar3,uVar5);
      uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
      uVar21 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
      uVar22 = lVar4 + uVar21 + 7 & 0xfffffffffffffff8;
      puVar12 = &UNK_110686f90;
      func_0x000107c613fc(&UNK_110686f90,uVar22 + 8,uVar16 | 7);
      (**(code **)(lVar20 + 0x20))(puVar12 + uVar21,uVar13,uVar5);
      *(undefined **)(puVar12 + uVar22) = puVar10;
      uVar13 = 4;
      func_0x000100859150(4,3,0x50,4,0,0,&UNK_10dc00330,puVar12,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar12);
      uVar14 = *(undefined8 *)(lVar2 + _DAT_112f8b1b8);
      *(undefined8 *)(lVar2 + _DAT_112f8b1b8) = uVar13;
      func_0x000107c61574(uVar14);
      func_0x000101bf6504(puVar18,unaff_x22 + 0x60);
      lVar19 = *(long *)(unaff_x22 + 0x78);
      if (lVar19 != 0) {
        lVar20 = *(long *)(unaff_x22 + 0x80);
        func_0x0001000a8868(unaff_x22 + 0x60,lVar19);
        (**(code **)(lVar20 + 0x18))(unaff_x22 + 0x88,lVar19,lVar20);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar19 = *(long *)(unaff_x22 + 0xa8);
        func_0x0001000a8868(unaff_x22 + 0x88,uVar13);
        piVar17 = *(int **)(lVar19 + 0x10);
        iVar1 = *piVar17;
        plVar15 = (long *)(ulong)(uint)piVar17[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x110) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_10371161c;
                    /* WARNING: Could not recover jumptable at 0x000103711ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar17))(uVar13,lVar19);
        return;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar19 = *(long *)(unaff_x22 + 0xc0);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar11);
      (**(code **)(lVar19 + 8))(uVar13,uVar14);
      FUN_103713750(unaff_x22 + 0x60,0x112e08bb0,&UNK_10d9ddb20);
      goto LAB_103711ad4;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
LAB_103711ad4:
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_103713750(puVar18,0x112e08bb0,&UNK_10d9ddb20);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000103711b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103711b70; end: 103711d4f;  */

/* WARNING: Possible PIC construction at 0x000103711ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103711bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103711c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103711c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103711d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370f8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370f92c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010370f970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010370f930) */
/* WARNING: Removing unreachable block (ram,0x00010370f8f4) */
/* WARNING: Removing unreachable block (ram,0x00010370f938) */
/* WARNING: Removing unreachable block (ram,0x00010370f928) */
/* WARNING: Removing unreachable block (ram,0x000103711d28) */
/* WARNING: Removing unreachable block (ram,0x000103711c8c) */
/* WARNING: Removing unreachable block (ram,0x000103711c60) */
/* WARNING: Removing unreachable block (ram,0x000103711bc8) */
/* WARNING: Removing unreachable block (ram,0x000103711bdc) */
/* WARNING: Removing unreachable block (ram,0x000103711be4) */
/* WARNING: Removing unreachable block (ram,0x000103711cc0) */
/* WARNING: Removing unreachable block (ram,0x000103711d4c) */
/* WARNING: Removing unreachable block (ram,0x000103711cd0) */
/* WARNING: Removing unreachable block (ram,0x000103711bf8) */
/* WARNING: Removing unreachable block (ram,0x000103711d48) */
/* WARNING: Removing unreachable block (ram,0x000103711c08) */
/* WARNING: Removing unreachable block (ram,0x000103711bac) */
/* WARNING: Removing unreachable block (ram,0x000103711cb8) */
/* WARNING: Removing unreachable block (ram,0x000103711d34) */
/* WARNING: Removing unreachable block (ram,0x00010370f834) */
/* WARNING: Removing unreachable block (ram,0x000103711bb0) */
/* WARNING: Removing unreachable block (ram,0x00010370f974) */
/* WARNING: Removing unreachable block (ram,0x00010370f988) */

void FUN_103711b70(undefined8 param_1)

{
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c42ccc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103711d50; end: 103711e5b;  */

void FUN_103711d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_2;
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  lVar5 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  *(long *)(unaff_x22 + 0x128) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar1;
  lVar5 = 0x112f8b2d0;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  uVar1 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar1;
  lVar5 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  *(long *)(unaff_x22 + 0x150) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x158) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x160) = uVar1;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x178) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103711e5c,uVar3,uVar4);
  return;
}



/* Entry: 103711e5c; end: 103711ef3;  */

void FUN_103711e5c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar1 = *(long *)(unaff_x22 + 0x120);
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0xb0,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x180) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103711ef4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0xf8,*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 103711ef4; end: 103711f37;  */

void FUN_103711ef4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103711f38,*(undefined8 *)(lVar1 + 0x170),*(undefined8 *)(lVar1 + 0x178));
  return;
}



/* Entry: 103711f38; end: 1037125ef;  */

/* WARNING: Removing unreachable block (ram,0x000103711f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103711f38(void)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  long lVar18;
  
  puVar3 = *(ulong **)(unaff_x22 + 0xf8);
  uVar4 = *(ulong *)(unaff_x22 + 0x100);
  if (uVar4 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
              (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
LAB_103712018:
    func_0x000107c61574(uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x160));
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010371206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar6 = (ulong *)(*(long *)(unaff_x22 + 0x120) + 0x10);
  func_0x000107c61648();
  *(ulong **)(unaff_x22 + 0x188) = puVar6;
  if (puVar6 == (ulong *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
              (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
    func_0x000107c6142c(uVar4);
    goto LAB_103712018;
  }
  puVar11 = puVar6;
  func_0x000107c5fd64();
  func_0x000103b6b344();
  puVar7 = (ulong *)*puVar11;
  if (((puVar7 == puVar3) && (uVar4 == puVar11[1])) ||
     (func_0x000107c605b8(puVar7,puVar11[1],puVar3,uVar4,0), ((ulong)puVar7 & 1) != 0)) {
    func_0x000107c6142c(uVar4);
    lVar9 = _DAT_112f8b1b0;
    lVar16 = *(long *)((long)puVar6 + _DAT_112f8b1b0);
    if (lVar16 == 0) goto LAB_103712134;
    func_0x0001002ed07c(0);
    func_0x000107c61174(lVar16);
    uVar8 = 1;
    func_0x000107c6010c(1);
    func_0x000107c55704(lVar16);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar16);
    lVar9 = *(long *)((long)puVar6 + lVar9);
    if (lVar9 == 0) goto LAB_103712134;
    func_0x000107c61174();
    uVar8 = 1;
  }
  else {
    func_0x000103b6b37c();
    puVar11 = (ulong *)*puVar7;
    if (((puVar11 == puVar3) && (uVar4 == puVar7[1])) ||
       (func_0x000107c605b8(puVar11,puVar7[1],puVar3,uVar4,0), ((ulong)puVar11 & 1) != 0)) {
      func_0x000107c6142c(uVar4);
      lVar9 = _DAT_112f8b1b0;
      *(long *)(unaff_x22 + 400) = _DAT_112f8b1b0;
      lVar16 = *(long *)((long)puVar6 + lVar9);
      if (lVar16 != 0) {
        func_0x000107c61174();
        lVar12 = lVar16;
        func_0x000107e48370();
        func_0x000107c61180();
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037125f0);
          (*pcVar5)();
        }
        func_0x000107c59c6c(lVar16);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar16);
        lVar16 = *(long *)((long)puVar6 + lVar9);
        if (lVar16 != 0) {
          func_0x0001002ed07c(0);
          func_0x000107c61174(lVar16);
          uVar8 = 0;
          func_0x000107c6010c(0);
          func_0x000107c55704(lVar16);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(lVar16);
          lVar16 = *(long *)((long)puVar6 + lVar9);
          if (lVar16 != 0) {
            func_0x000107c61174();
            uVar8 = 1;
            func_0x000107c6010c(1);
            func_0x000107c55608(lVar16);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(lVar16);
          }
        }
      }
      lVar18 = _DAT_112f8b1a8;
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar12 = *(long *)(unaff_x22 + 0x130);
      func_0x000107c61428((long)puVar6 + _DAT_112f8b1a8,unaff_x22 + 0xe0,0,0);
      lVar16 = (long)puVar6 + lVar18;
      (**(code **)(lVar12 + 0x30))(lVar16,1,uVar8);
      bVar1 = (int)lVar16 != 0;
      if (!bVar1) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
        lVar16 = *(long *)(unaff_x22 + 0x130);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
        (**(code **)(lVar16 + 0x10))(uVar8,(long)puVar6 + lVar18,uVar17);
        *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)((long)puVar6 + lVar9);
        func_0x000107c61174();
        func_0x000107c5fd28(uVar15,unaff_x22 + 0x110,uVar17);
        (**(code **)(lVar16 + 8))(uVar8,uVar17);
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar9 = 0x112f8b2e8;
      func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar8,bVar1,1,lVar9);
      FUN_103713750(uVar8,0x112f8b2d0,&UNK_10dc002d8);
      lVar9 = _DAT_112f8b188;
      *(long *)(unaff_x22 + 0x198) = _DAT_112f8b188;
      lVar9 = (long)puVar6 + lVar9;
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      lVar16 = *(long *)(lVar9 + 0x20);
      func_0x0001000a8868(lVar9,uVar8);
      (**(code **)(lVar16 + 0x10))(unaff_x22 + 0x10,uVar8,lVar16);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar9 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar8);
      piVar14 = *(int **)(lVar9 + 8);
      iVar2 = *piVar14;
      plVar10 = (long *)(ulong)(uint)piVar14[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1a0) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_1037125f0;
                    /* WARNING: Could not recover jumptable at 0x000103712518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar14))(0x50404,0,1,uVar8,lVar9);
      return;
    }
    func_0x000103b6b3b4();
    uVar13 = *puVar11;
    if (((ulong *)uVar13 == puVar3) && (uVar4 == puVar11[1])) {
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x000107c605b8(uVar13,puVar11[1],puVar3,uVar4,0);
      func_0x000107c6142c(uVar4);
      if ((uVar13 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
        (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
        func_0x000107c61574(puVar6);
        goto LAB_103712018;
      }
    }
    lVar9 = _DAT_112f8b1b0;
    lVar16 = *(long *)((long)puVar6 + _DAT_112f8b1b0);
    if (lVar16 == 0) goto LAB_103712134;
    func_0x0001002ed07c(0);
    func_0x000107c61174(lVar16);
    uVar8 = 0;
    func_0x000107c6010c(0);
    func_0x000107c55704(lVar16);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar16);
    lVar9 = *(long *)((long)puVar6 + lVar9);
    if (lVar9 == 0) goto LAB_103712134;
    func_0x000107c61174();
    uVar8 = 0;
  }
  func_0x000107c6010c(uVar8);
  func_0x000107c55608(lVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar9);
LAB_103712134:
  *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
  lVar12 = _DAT_112f8b1a8;
  lVar18 = *(long *)(unaff_x22 + 0x188);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar16 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61428(lVar18 + _DAT_112f8b1a8,unaff_x22 + 200,0,0);
  lVar9 = lVar18 + lVar12;
  (**(code **)(lVar16 + 0x30))(lVar9,1,uVar8);
  lVar16 = *(long *)(unaff_x22 + 0x188);
  bVar1 = (int)lVar9 == 0;
  if (bVar1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar9 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(lVar9 + 0x10))(uVar8,lVar18 + lVar12,uVar15);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar16 + _DAT_112f8b1b0);
    func_0x000107c61174();
    func_0x000107c5fd28(uVar17,unaff_x22 + 0x108,uVar15);
    func_0x000107c61574(lVar16);
    (**(code **)(lVar9 + 8))(uVar8,uVar15);
  }
  else {
    func_0x000107c61574(lVar16);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar9 = 0x112f8b2e8;
  func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar8,!bVar1,1,lVar9);
  FUN_103713750(uVar8,0x112f8b2d0,&UNK_10dc002d8);
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_103712b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar10,(long *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 1037125f0; end: 103712663;  */

void FUN_1037125f0(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1a0));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x1d8) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x170);
    uVar3 = *(undefined8 *)(lVar4 + 0x178);
    pcVar1 = FUN_103712664;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x170);
    uVar3 = *(undefined8 *)(lVar4 + 0x178);
    pcVar1 = FUN_103713280;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 103712664; end: 1037128ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103712664(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long lVar13;
  
  cVar5 = *(char *)(unaff_x22 + 0x1d8);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar5 != '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0x188) + *(long *)(unaff_x22 + 0x198);
    lVar11 = *(long *)(lVar7 + 0x18);
    uVar9 = *(ulong *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,lVar11);
    (**(code **)(uVar9 + 0x48))();
    if ((*(long *)(lVar11 + 0x10) != 0) && (lVar7 = lVar11, func_0x000101137240(), (uVar9 & 1) != 0)
       ) {
      func_0x0001011225e0(*(long *)(lVar11 + 0x38) + lVar7 * 0x28,unaff_x22 + 0x60);
      func_0x000107c6142c(lVar11);
      func_0x000101122624(unaff_x22 + 0x60,unaff_x22 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar7 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar12);
      (**(code **)(lVar7 + 0x18))(unaff_x22 + 0x88,uVar12,lVar7);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar7 = *(long *)(unaff_x22 + 0xa8);
      func_0x0001000a8868(unaff_x22 + 0x88,uVar12);
      piVar10 = *(int **)(lVar7 + 0x10);
      iVar2 = *piVar10;
      plVar8 = (long *)(ulong)(uint)piVar10[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1b0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_103712900;
                    /* WARNING: Could not recover jumptable at 0x00010371278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar2 + (long)piVar10))(uVar12,lVar7);
      return;
    }
    func_0x000107c6142c(lVar11);
  }
  *(uint *)(unaff_x22 + 0x1d4) = (uint)*(byte *)(unaff_x22 + 0x1d3) << 0x18 | 0x50404;
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar6 = _DAT_112f8b1a8;
  lVar13 = *(long *)(unaff_x22 + 0x188);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar11 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61428(lVar13 + _DAT_112f8b1a8,unaff_x22 + 200,0,0);
  lVar7 = lVar13 + lVar6;
  (**(code **)(lVar11 + 0x30))(lVar7,1,uVar12);
  lVar11 = *(long *)(unaff_x22 + 0x188);
  bVar1 = (int)lVar7 == 0;
  if (bVar1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar7 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(lVar7 + 0x10))(uVar12,lVar13 + lVar6,uVar3);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar11 + _DAT_112f8b1b0);
    func_0x000107c61174();
    func_0x000107c5fd28(uVar4,unaff_x22 + 0x108,uVar3);
    func_0x000107c61574(lVar11);
    (**(code **)(lVar7 + 8))(uVar12,uVar3);
  }
  else {
    func_0x000107c61574(lVar11);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar7 = 0x112f8b2e8;
  func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar12,!bVar1,1,lVar7);
  FUN_103713750(uVar12,0x112f8b2d0,&UNK_10dc002d8);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103712b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0xf8,*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 103712900; end: 10371294b;  */

void FUN_103712900(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1b8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10371294c,*(undefined8 *)(lVar1 + 0x170),*(undefined8 *)(lVar1 + 0x178));
  return;
}



/* Entry: 10371294c; end: 103712b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10371294c(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  
  lVar10 = *(long *)(unaff_x22 + 0x1b8);
  if (lVar10 != 0) {
    puVar5 = PTR_PTR_1126b27a8;
    func_0x000107c61168();
    func_0x000107c45160();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      lVar8 = *(long *)(unaff_x22 + 0x188);
      lVar3 = *(long *)(unaff_x22 + 400);
      puVar6 = puVar5;
      func_0x000107c30e3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar10);
      func_0x0001000834e4(unaff_x22 + 0x88);
      lVar10 = *(long *)(lVar8 + lVar3);
      if (lVar10 != 0) {
        func_0x000107c61174();
        func_0x000107c551e8();
        func_0x000107c61170(lVar10);
      }
      func_0x000107c61170(puVar6);
      goto LAB_103712a00;
    }
    func_0x000107c61170(lVar10);
  }
  func_0x0001000834e4(unaff_x22 + 0x88);
LAB_103712a00:
  func_0x0001000834e4(unaff_x22 + 0x38);
  *(uint *)(unaff_x22 + 0x1d4) = (uint)*(byte *)(unaff_x22 + 0x1d3) << 0x18 | 0x50404;
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar3 = _DAT_112f8b1a8;
  lVar11 = *(long *)(unaff_x22 + 0x188);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar8 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61428(lVar11 + _DAT_112f8b1a8,unaff_x22 + 200,0,0);
  lVar10 = lVar11 + lVar3;
  (**(code **)(lVar8 + 0x30))(lVar10,1,uVar9);
  lVar8 = *(long *)(unaff_x22 + 0x188);
  bVar1 = (int)lVar10 == 0;
  if (bVar1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar10 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(lVar10 + 0x10))(uVar9,lVar11 + lVar3,uVar2);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar8 + _DAT_112f8b1b0);
    func_0x000107c61174();
    func_0x000107c5fd28(uVar4,unaff_x22 + 0x108,uVar2);
    func_0x000107c61574(lVar8);
    (**(code **)(lVar10 + 8))(uVar9,uVar2);
  }
  else {
    func_0x000107c61574(lVar8);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar10 = 0x112f8b2e8;
  func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar9,!bVar1,1,lVar10);
  FUN_103713750(uVar9,0x112f8b2d0,&UNK_10dc002d8);
  plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103712b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar7,unaff_x22 + 0xf8,*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 103712b70; end: 103712bb3;  */

void FUN_103712b70(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_103712bb4,*(undefined8 *)(lVar1 + 0x170),*(undefined8 *)(lVar1 + 0x178));
  return;
}



/* Entry: 103712bb4; end: 10371327f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103712bb4(void)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar3 = *(ulong **)(unaff_x22 + 0xf8);
  uVar4 = *(ulong *)(unaff_x22 + 0x100);
  if (uVar4 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
              (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
  }
  else {
    uVar6 = *(uint *)(unaff_x22 + 0x1d4);
    lVar16 = *(long *)(unaff_x22 + 0x1c0);
    *(uint *)(unaff_x22 + 0x1d0) = uVar6;
    puVar7 = (ulong *)(*(long *)(unaff_x22 + 0x120) + 0x10);
    func_0x000107c61648();
    *(ulong **)(unaff_x22 + 0x188) = puVar7;
    if (puVar7 != (ulong *)0x0) {
      puVar11 = puVar7;
      func_0x000107c5fd64();
      if (lVar16 != 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
        (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0x150));
        func_0x000107c61574(puVar7);
        func_0x000107c6142c(uVar4);
        func_0x000107c61574(uVar19);
        func_0x000107c615c0(uVar9);
        func_0x000107c615c0(uVar5);
        func_0x000107c615c0(uVar15);
        func_0x000107c615c0(uVar20);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_103712cd4;
      }
      func_0x000103b6b344();
      puVar8 = (ulong *)*puVar11;
      if (((puVar8 == puVar3) && (uVar4 == puVar11[1])) ||
         (func_0x000107c605b8(puVar8,puVar11[1],puVar3,uVar4,0), ((ulong)puVar8 & 1) != 0)) {
        func_0x000107c6142c(uVar4);
        lVar16 = _DAT_112f8b1b0;
        lVar17 = *(long *)((long)puVar7 + _DAT_112f8b1b0);
        if (lVar17 == 0) goto LAB_103712db8;
        func_0x0001002ed07c(0);
        func_0x000107c61174(lVar17);
        uVar9 = 1;
        func_0x000107c6010c(1);
        func_0x000107c55704(lVar17);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar17);
        lVar16 = *(long *)((long)puVar7 + lVar16);
        if (lVar16 == 0) goto LAB_103712db8;
        func_0x000107c61174();
        uVar9 = 1;
      }
      else {
        func_0x000103b6b37c();
        puVar11 = (ulong *)*puVar8;
        if (((puVar11 == puVar3) && (uVar4 == puVar8[1])) ||
           (func_0x000107c605b8(puVar11,puVar8[1],puVar3,uVar4,0), ((ulong)puVar11 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          lVar16 = _DAT_112f8b1b0;
          *(long *)(unaff_x22 + 400) = _DAT_112f8b1b0;
          lVar17 = *(long *)((long)puVar7 + lVar16);
          if (lVar17 != 0) {
            func_0x000107c61174();
            lVar12 = lVar17;
            func_0x000107e48370();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x103713280);
              (*UNRECOVERED_JUMPTABLE)();
            }
            func_0x000107c59c6c(lVar17);
            func_0x000107c61170(lVar12);
            func_0x000107c61170(lVar17);
            lVar17 = *(long *)((long)puVar7 + lVar16);
            if (lVar17 != 0) {
              func_0x0001002ed07c(0);
              func_0x000107c61174(lVar17);
              uVar9 = 0;
              func_0x000107c6010c(0);
              func_0x000107c55704(lVar17);
              func_0x000107c61170(uVar9);
              func_0x000107c61170(lVar17);
              lVar17 = *(long *)((long)puVar7 + lVar16);
              if (lVar17 != 0) {
                func_0x000107c61174();
                uVar9 = 1;
                func_0x000107c6010c(1);
                func_0x000107c55608(lVar17);
                func_0x000107c61170(uVar9);
                func_0x000107c61170(lVar17);
              }
            }
          }
          lVar18 = _DAT_112f8b1a8;
          uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
          lVar12 = *(long *)(unaff_x22 + 0x130);
          func_0x000107c61428((long)puVar7 + _DAT_112f8b1a8,unaff_x22 + 0xe0,0,0);
          lVar17 = (long)puVar7 + lVar18;
          (**(code **)(lVar12 + 0x30))(lVar17,1,uVar9);
          bVar1 = (int)lVar17 != 0;
          if (!bVar1) {
            uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
            lVar17 = *(long *)(unaff_x22 + 0x130);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
            uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
            (**(code **)(lVar17 + 0x10))(uVar9,(long)puVar7 + lVar18,uVar19);
            *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)((long)puVar7 + lVar16);
            func_0x000107c61174();
            func_0x000107c5fd28(uVar15,unaff_x22 + 0x110,uVar19);
            (**(code **)(lVar17 + 8))(uVar9,uVar19);
          }
          uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
          lVar16 = 0x112f8b2e8;
          func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
          (**(code **)(*(long *)(lVar16 + -8) + 0x38))(uVar9,bVar1,1,lVar16);
          FUN_103713750(uVar9,0x112f8b2d0,&UNK_10dc002d8);
          lVar16 = _DAT_112f8b188;
          *(long *)(unaff_x22 + 0x198) = _DAT_112f8b188;
          lVar16 = (long)puVar7 + lVar16;
          uVar9 = *(undefined8 *)(lVar16 + 0x18);
          lVar17 = *(long *)(lVar16 + 0x20);
          func_0x0001000a8868(lVar16,uVar9);
          (**(code **)(lVar17 + 0x10))(unaff_x22 + 0x10,uVar9,lVar17);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
          lVar16 = *(long *)(unaff_x22 + 0x30);
          func_0x0001000a8868(unaff_x22 + 0x10,uVar9);
          piVar14 = *(int **)(lVar16 + 8);
          iVar2 = *piVar14;
          plVar10 = (long *)(ulong)(uint)piVar14[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x1a0) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_1037125f0;
                    /* WARNING: Could not recover jumptable at 0x0001037131a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar14))(uVar6 & 0xff000000 | 0x50404,0,1,uVar9,lVar16);
          return;
        }
        func_0x000103b6b3b4();
        uVar13 = *puVar11;
        if (((ulong *)uVar13 == puVar3) && (uVar4 == puVar11[1])) {
          func_0x000107c6142c(uVar4);
        }
        else {
          func_0x000107c605b8(uVar13,puVar11[1],puVar3,uVar4,0);
          func_0x000107c6142c(uVar4);
          if ((uVar13 & 1) == 0) {
            uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
            (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
                      (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
            func_0x000107c61574(puVar7);
            goto LAB_103712c9c;
          }
        }
        lVar16 = _DAT_112f8b1b0;
        lVar17 = *(long *)((long)puVar7 + _DAT_112f8b1b0);
        if (lVar17 == 0) goto LAB_103712db8;
        func_0x0001002ed07c(0);
        func_0x000107c61174(lVar17);
        uVar9 = 0;
        func_0x000107c6010c(0);
        func_0x000107c55704(lVar17);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar17);
        lVar16 = *(long *)((long)puVar7 + lVar16);
        if (lVar16 == 0) goto LAB_103712db8;
        func_0x000107c61174();
        uVar9 = 0;
      }
      func_0x000107c6010c(uVar9);
      func_0x000107c55608(lVar16);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar16);
LAB_103712db8:
      *(uint *)(unaff_x22 + 0x1d4) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
      lVar12 = _DAT_112f8b1a8;
      lVar18 = *(long *)(unaff_x22 + 0x188);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar17 = *(long *)(unaff_x22 + 0x130);
      func_0x000107c61428(lVar18 + _DAT_112f8b1a8,unaff_x22 + 200,0,0);
      lVar16 = lVar18 + lVar12;
      (**(code **)(lVar17 + 0x30))(lVar16,1,uVar9);
      lVar17 = *(long *)(unaff_x22 + 0x188);
      bVar1 = (int)lVar16 == 0;
      if (bVar1) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar16 = *(long *)(unaff_x22 + 0x130);
        (**(code **)(lVar16 + 0x10))(uVar9,lVar18 + lVar12,uVar15);
        *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar17 + _DAT_112f8b1b0);
        func_0x000107c61174();
        func_0x000107c5fd28(uVar19,unaff_x22 + 0x108,uVar15);
        func_0x000107c61574(lVar17);
        (**(code **)(lVar16 + 8))(uVar9,uVar15);
      }
      else {
        func_0x000107c61574(lVar17);
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
      lVar16 = 0x112f8b2e8;
      func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
      (**(code **)(*(long *)(lVar16 + -8) + 0x38))(uVar9,!bVar1,1,lVar16);
      FUN_103713750(uVar9,0x112f8b2d0,&UNK_10dc002d8);
      plVar10 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1c8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_103712b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar10,(long *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0x150));
      return;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))
              (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x150));
    func_0x000107c6142c(uVar4);
  }
LAB_103712c9c:
  func_0x000107c61574(uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar19);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_103712cd4:
                    /* WARNING: Could not recover jumptable at 0x000103712cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103713280; end: 10371340b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103713280(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(uint *)(unaff_x22 + 0x1d4) = (uint)*(byte *)(unaff_x22 + 0x1d3) << 0x18 | 0x50404;
  *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
  lVar4 = _DAT_112f8b1a8;
  lVar9 = *(long *)(unaff_x22 + 0x188);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  lVar7 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61428(lVar9 + _DAT_112f8b1a8,unaff_x22 + 200,0,0);
  lVar5 = lVar9 + lVar4;
  (**(code **)(lVar7 + 0x30))(lVar5,1,uVar8);
  bVar1 = (int)lVar5 == 0;
  if (bVar1) {
    lVar7 = *(long *)(unaff_x22 + 0x188);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar5 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(lVar5 + 0x10))(uVar8,lVar9 + lVar4,uVar2);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(lVar7 + _DAT_112f8b1b0);
    func_0x000107c61174();
    func_0x000107c5fd28(uVar3,unaff_x22 + 0x108,uVar2);
    func_0x000107c61574(lVar7);
    (**(code **)(lVar5 + 8))(uVar8,uVar2);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x188));
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar5 = 0x112f8b2e8;
  func_0x0001000285a8(0x112f8b2e8,&UNK_10dc002f0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar8,!bVar1,1,lVar5);
  FUN_103713750(uVar8,0x112f8b2d0,&UNK_10dc002d8);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1c8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103712b70;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,unaff_x22 + 0xf8,*(undefined8 *)(unaff_x22 + 0x150));
  return;
}



/* Entry: 10371340c; end: 1037134e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10371340c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_11380baf0;
  lVar2 = 0x112f8b020;
  func_0x0001000285a8(0x112f8b020,&UNK_10dc00120);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x0001000834e4(unaff_x20 + _DAT_112f8b180);
  func_0x0001000834e4(unaff_x20 + _DAT_112f8b188);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f8b190));
  FUN_103713750(unaff_x20 + _DAT_112f8b1a8,0x112f8b030,&UNK_10dc00130);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f8b1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f8b1b8));
  func_0x000100d5b310(*(undefined8 *)(unaff_x20 + _DAT_112f8b1c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037134e4; end: 1037134eb;  */

void FUN_1037134e4(void)

{
  if (lRam0000000112f8b1f0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7773c8);
  return;
}



/* Entry: 1037134ec; end: 103713523;  */

void FUN_1037134ec(undefined8 param_1)

{
  if (lRam0000000112f8b1f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7773c8);
  return;
}



/* Entry: 103713524; end: 10371361f;  */

void FUN_103713524(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112f8b200;
  lVar1 = 0x13f;
  FUN_103713620(0x13f,0x112f8b200,0x112f8b038,&UNK_10dc00148,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = &UNK_10dc00270;
    puStack_58 = PTR___sBoWV_11034d678 + 0x40;
    puStack_60 = &UNK_10dc00270;
    puStack_50 = &UNK_10dc00288;
    puStack_48 = &UNK_10dc00288;
    uVar2 = 0x112f8b208;
    lVar1 = 0x13f;
    FUN_103713620(0x13f,0x112f8b208,0x112f8b018,&UNK_10dc002a0,PTR___sSqMa_11034e168);
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &UNK_10dc002a8;
      puStack_30 = &UNK_10dc002a8;
      puStack_28 = &UNK_10dc002c0;
      func_0x000107c61630(param_1,0x100,10,&lStack_70,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 103713620; end: 10371367b;  */

void FUN_103713620(long param_1,long *param_2,long param_3,undefined8 param_4,code *param_5)

{
  if (*param_2 == 0) {
    func_0x00010002969c(param_3,param_4);
    (*param_5)();
    if (param_3 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 10371367c; end: 103713713;  */

void FUN_10371367c(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = 0x112f8b2e0;
  func_0x0001000285a8(0x112f8b2e0,&UNK_10dc002e8);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103713714;
  plVar2[0xd] = unaff_x20 + uVar3;
  plVar2[0xe] = lVar4;
  lVar4 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  plVar2[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x10] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar3;
  lVar4 = 0x112f8b2d0;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar3;
  lVar4 = 0x112f8b2f0;
  func_0x0001000285a8(0x112f8b2f0,&UNK_10dc00308);
  plVar2[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x14] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar1;
  func_0x000107c5fce8();
  plVar2[0x16] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x17] = lVar1;
  plVar2[0x18] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037101d0,lVar1,lVar4);
  return;
}



/* Entry: 103713714; end: 10371374f;  */

void FUN_103713714(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010371374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103713750; end: 10371378f;  */

undefined8 FUN_103713750(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103713790; end: 1037137f7;  */

void FUN_103713790(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001000285a8();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2,param_1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037137f8; end: 10371388f;  */

void FUN_1037137f8(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar4 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar4 + 7 & 0xffffffffffffff8));
  plVar3 = (long *)0x1e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103713890;
  plVar3[0x23] = unaff_x20 + uVar4;
  plVar3[0x24] = lVar5;
  lVar5 = 0x112f8b018;
  func_0x0001000285a8(0x112f8b018,&UNK_10dc002a0);
  plVar3[0x25] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[0x26] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x27] = uVar4;
  lVar5 = 0x112f8b2d0;
  func_0x0001000285a8(0x112f8b2d0,&UNK_10dc002d8);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar1 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x28] = uVar1;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x29] = uVar4;
  lVar5 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  plVar3[0x2a] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[0x2b] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x2c] = uVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar3[0x2d] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x2e] = lVar2;
  plVar3[0x2f] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103711e5c,lVar2,lVar5);
  return;
}



/* Entry: 103713890; end: 1037138cb;  */

void FUN_103713890(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037138c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037138cc; end: 1037138db;  */

void FUN_1037138cc(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1037138dc; end: 10371392f;  */

void FUN_1037138dc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103713930;
  plVar3[5] = unaff_x20;
  lVar1 = 0x112f8b030;
  func_0x0001000285a8(0x112f8b030,&UNK_10dc00130);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10370fb90,0,0);
  return;
}



/* Entry: 103713930; end: 103713933;  */

void FUN_103713930(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010371374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103713934; end: 103713977; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl numSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103713934(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380baf8;
  func_0x000107c61428(param_1 + _DAT_11380baf8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103713978; end: 1037139c7; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl setNumSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103713978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380baf8;
  func_0x000107c61428(param_1 + _DAT_11380baf8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1037139c8; end: 103713a2f; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl sessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037139c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11380bb00);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103713a30; end: 103713a97; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl setSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103713a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_11380bb00);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103713a98; end: 103713afb; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl extraLoggingParams] */

void FUN_103713a98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103713afc();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103713afc; end: 103713e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103713afc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [80];
  
  lVar2 = 0x112f8ae50;
  func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar3 = 0;
  func_0x0001043aa0ac();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_11355bbc0;
  lVar4 = 0;
  func_0x0001043a86b0();
  func_0x000103714cbc(lVar2 + *(int *)(lVar4 + 0x18),puVar10,0x112f8ae50,&UNK_10dc00160);
  puVar5 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar3);
  if ((int)puVar5 == 1) {
    func_0x000103714b28(puVar10,0x112f8ae50,&UNK_10dc00160);
    func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    func_0x000103714ae4(puVar10,lVar11);
    puVar6 = (undefined8 *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar6[3] = 2;
    puVar6[2] = 1;
    puVar7 = puVar6;
    func_0x000103b854e0();
    uVar1 = puVar7[1];
    puVar6[4] = *puVar7;
    puVar6[5] = uVar1;
    func_0x000107c61434();
    puVar8 = PTR___ss6UInt64VN_11034f048;
    puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c();
    puVar6[9] = PTR___sSSN_11034da80;
    puVar6[6] = puVar8;
    puVar6[7] = puVar9;
    func_0x000100214a84(puVar6);
    func_0x000107c61588(puVar6);
    func_0x000103714b28(puVar6 + 4,0x112d4b5f0,&UNK_10d9127d0);
    func_0x000103714bac(lVar11,&SUB_1043aa0ac);
  }
  return;
}



/* Entry: 103713e98; end: 103714083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103713e98(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar2 = 0;
    func_0x0001043a86b0();
    puVar3 = PTR___ss6UInt64VN_11034f048;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c((long)*(int *)(lVar2 + 0x14),PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bb00);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar5);
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11355bbd8);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_11355bbd8))[1]);
    func_0x000107c61428(unaff_x20 + _DAT_11380baf8,auStack_98,0,0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    puVar7 = puVar6;
    FUN_103713afc();
    puVar8 = puVar7;
    func_0x00010018cc3c();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar8);
    func_0x000107c4be9c(lStack_68);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 103714084; end: 1037140b3; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logFavoriteActionWithIsFavorited:] */

void FUN_103714084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103713e98(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037140b4; end: 10371428f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037140b4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar2 = 0;
    func_0x0001043a86b0();
    puVar3 = PTR___ss6UInt64VN_11034f048;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c((long)*(int *)(lVar2 + 0x14),PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bb00);
    func_0x000107c61428(puVar1,auStack_70,0,0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar5);
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11355bbd8);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_11355bbd8))[1]);
    func_0x000107c61428(unaff_x20 + _DAT_11380baf8,auStack_88,0,0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar7 = puVar6;
    FUN_103713afc();
    puVar8 = puVar7;
    func_0x00010018cc3c();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar8);
    func_0x000107c4bf4c(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 103714290; end: 1037142b7; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logTrendingButtonTapped] */

void FUN_103714290(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037140b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037142b8; end: 103714493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037142b8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar2 = 0;
    func_0x0001043a86b0();
    puVar3 = PTR___ss6UInt64VN_11034f048;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c((long)*(int *)(lVar2 + 0x14),PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bb00);
    func_0x000107c61428(puVar1,auStack_70,0,0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar5);
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11355bbd8);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_11355bbd8))[1]);
    func_0x000107c61428(unaff_x20 + _DAT_11380baf8,auStack_88,0,0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar7 = puVar6;
    FUN_103713afc();
    puVar8 = puVar7;
    func_0x00010018cc3c();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar8);
    func_0x000107c4be78(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 103714494; end: 1037144bb; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logShareSoundTapped] */

void FUN_103714494(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037142b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037144bc; end: 103714697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037144bc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar2 = 0;
    func_0x0001043a86b0();
    puVar3 = PTR___ss6UInt64VN_11034f048;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c((long)*(int *)(lVar2 + 0x14),PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11380bb00);
    func_0x000107c61428(puVar1,auStack_70,0,0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    func_0x000107c61434(uVar5);
    func_0x000107c5fadc(uVar4,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11355bbd8);
    func_0x000107c5fadc(uVar5,((undefined8 *)(unaff_x20 + _DAT_11355bbd8))[1]);
    func_0x000107c61428(unaff_x20 + _DAT_11380baf8,auStack_88,0,0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar7 = puVar6;
    FUN_103713afc();
    puVar8 = puVar7;
    func_0x00010018cc3c();
    func_0x000107c6142c(puVar7);
    puVar7 = puVar8;
    func_0x000107c5f9dc(puVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(puVar8);
    func_0x000107c4be74(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
  }
  return;
}



/* Entry: 103714698; end: 1037146bf; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logShareSoundSubmitted] */

void FUN_103714698(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037144bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037146c0; end: 10371474f; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logLinkfireOpenWithTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037146c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4bcdc(lStack_38,param_2,0,0,param_3,0x7c);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103714750; end: 1037147fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4bcdc(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1037147fc; end: 10371487f; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logLinkfireNavigateWithDestination:trackId:] */

/* WARNING: Possible PIC construction at 0x000103714864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103714868) */

void FUN_1037147fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_103714750(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103714880; end: 10371490f; -[_TtC44MusicTopicViewerLoggingContextImplementation34MusicTopicViewerLoggingContextImpl logLinkfireShareWithTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103714880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c4bcdc(lStack_38,param_2,3,0,param_3,0x7c);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}


